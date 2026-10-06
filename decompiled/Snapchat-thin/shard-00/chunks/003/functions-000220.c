/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1004fc038; end: 1004fc117; -[SCFeatureSettingsUserPropertiesService valueForFeatureSettingItemId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004fc038(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112722cb0;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x000107c5dc1c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126b8720;
    func_0x000107c610f4(PTR_PTR_1126b8720);
    func_0x000107c46fd0();
    lVar1 = *(long *)(param_1 + _DAT_112722cac);
    func_0x000107c5dc28(lVar1,param_2,puVar2);
    func_0x000107c61180();
    func_0x000107c5d478(*(undefined8 *)(param_1 + lVar4),param_2,param_3,lVar1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112722cb8);
    func_0x000107c4f7c0(uVar3);
    func_0x000107c61180();
    func_0x000107c3c298(param_1,param_2,puVar2,uVar3);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1004fc118; end: 1004fc193; -[SCFeatureSettingsItemCache valueForFeatureSettingItemId:] */

void FUN_1004fc118(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c611ec(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  func_0x000107c61180();
  func_0x000107c4d9e8(uVar2,param_2,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c611f0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1004fc194; end: 1004fc21b; -[SCUserPropertiesKey initWithItemId:kind:] */

undefined1 *
FUN_1004fc194(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112702380;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1004fc21c; end: 1004fc29f; -[SCUserPropertiesDefaultService valueForItemWithKey:] */

void FUN_1004fc21c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c4a77c(param_3);
  func_0x000107c502b8(uVar2,param_2,uVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x000107c5dc24();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1004fc2a0; end: 1004fc2a7; -[SCUserPropertiesKey itemId] */

undefined8 FUN_1004fc2a0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1004fc2a8; end: 1004fc303; -[SCUserPropertiesGrapheneMetricsReporter reportSyncGetForItemId:] */

void FUN_1004fc2a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c3850;
  func_0x000107c5c418(PTR_PTR_1126c3850);
  func_0x000107c61180();
  func_0x000107c3c328(param_1,param_2,puVar1,param_3,
                      &PTR____CFConstantStringClassReference_110e261f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1004fc304; end: 1004fc3ab; -[SCFeedAppUserLifecycleObserver initWithFeedFetcher:ghostToFeedLogger:] */

undefined1 *
FUN_1004fc304(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126f17f0;
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
    *(undefined1 *)((long)puVar1 + 0x18) = 0;
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004fc3ac; end: 1004fc4ff; -[SCFriendsFeedServices initWithFriendsFeedDataCoordinator:friendsFeedChatMediaPrefetcher:friendsFeedFetcher:friendsFeedActionTextGenerator:friendsFeedIconGenerator:friendsFeedActiveSignalProvider:] */

undefined1 *
FUN_1004fc3ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_112703950;
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



/* Entry: 1004fc500; end: 1004fc52b; +[SCGrapheneUserPropertiesMetric supReadCount] */

void FUN_1004fc500(void)

{
  func_0x000107c610f4(PTR_PTR_1126c3850);
  func_0x000107c46d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1004fc52c; end: 1004fc62f; -[SCUserPropertiesGrapheneMetricsReporter _reportUsageCount:itemId:callsite:] */

/* WARNING: Possible PIC construction at 0x0001004fc5bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004fc5cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004fc5f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004fc614: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004fc5fc) */
/* WARNING: Removing unreachable block (ram,0x0001004fc5d0) */
/* WARNING: Removing unreachable block (ram,0x0001004fc600) */
/* WARNING: Removing unreachable block (ram,0x0001004fc5d4) */
/* WARNING: Removing unreachable block (ram,0x0001004fc5c0) */
/* WARNING: Removing unreachable block (ram,0x0001004fc618) */

void FUN_1004fc52c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
    func_0x000107c61180();
    func_0x000107c5c1d4();
    func_0x000107c61180();
    func_0x000107c5e508(param_3,param_2,&PTR____CFConstantStringClassReference_110e02998,puVar1);
    func_0x000107c61180();
    param_5 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1004fc630; end: 1004fc79b;  */

void FUN_1004fc630(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1004fc79c; end: 1004fc8f3; -[SCMapPeopleServiceProvider provide] */

void FUN_1004fc79c(undefined8 param_1)

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
  puStack_70 = &UNK_10583b5e4;
  puStack_68 = &UNK_11084e7a0;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126bf0e0;
  func_0x000107c610f4(PTR_PTR_1126bf0e0);
  func_0x000107c475c4();
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



/* Entry: 1004fc8f4; end: 1004fc927;  */

void FUN_1004fc8f4(long param_1)

{
  param_1 = param_1 + 0x28;
  func_0x000107c61148(param_1);
  func_0x000107c3aecc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1004fc928; end: 1004fca5b; -[SCFriendsFeedDataServicesEntryPoint _beginObservingWithObserver:] */

/* WARNING: Possible PIC construction at 0x0001004fc978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004fc9a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004fca08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004fca18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004fca34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004fca1c) */
/* WARNING: Removing unreachable block (ram,0x0001004fca0c) */
/* WARNING: Removing unreachable block (ram,0x0001004fc9a4) */
/* WARNING: Removing unreachable block (ram,0x0001004fca54) */
/* WARNING: Removing unreachable block (ram,0x0001004fc9a8) */
/* WARNING: Removing unreachable block (ram,0x0001004fc9bc) */
/* WARNING: Removing unreachable block (ram,0x0001004fc97c) */
/* WARNING: Removing unreachable block (ram,0x0001004fca38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004fc928(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127492dc;
  func_0x000107c61174(param_3);
  param_1 = param_1 + lVar1;
  func_0x000107c61148(param_1);
  func_0x000107c443dc();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1004fca5c; end: 1004fcab7; -[SCGhostToFeedLogger didBeginLifecycleObservationTime:] */

void FUN_1004fca5c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_100505d50;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_2;
  uStack_18 = param_1;
  func_0x000107c4e524(*(undefined8 *)(param_2 + 0x10),param_3,&puStack_40);
  return;
}



/* Entry: 1004fcab8; end: 1004fcb2f; -[_TtC19SCMapPeopleServices19SCMapPeopleServices initWithMapPeopleFriendsProvider:mapPeopleGroupsProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004fcab8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fcd5d8) = param_3;
  *(undefined8 *)(param_1 + _DAT_112fcd5e0) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 1004fcb30; end: 1004fcb73;  */

void FUN_1004fcb30(void)

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



/* Entry: 1004fcb74; end: 1004fcb7b;  */

void FUN_1004fcb74(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c421c8(uStack_38);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  puVar2 = PTR_PTR_1126c3868;
  func_0x000107c610f8();
  func_0x000107c4660c();
  func_0x000107c61170(uVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 1004fcb7c; end: 1004fcbf7;  */

void FUN_1004fcb7c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c421c8(uStack_38);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  puVar2 = PTR_PTR_1126c3868;
  func_0x000107c610f8();
  func_0x000107c4660c();
  func_0x000107c61170(uVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 1004fcbf8; end: 1004fcce3; -[SCUserPropertiesDocRepository initWithDocObjectContext:] */

undefined1 * FUN_1004fcbf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_1126ecaa8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_3;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar4;
    func_0x000107c61170(uVar3);
    puVar2 = &UNK_10f33a3a3;
    func_0x000107c60f50(&UNK_10f33a3a3,0);
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    func_0x000107c61170(uVar4);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004fcce4; end: 1004fd207;  */

void FUN_1004fcce4(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined4 uStack_30c;
  undefined8 *puStack_308;
  undefined8 *puStack_300;
  undefined8 uStack_2f8;
  undefined **ppuStack_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2d8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long *plStack_290;
  long *plStack_288;
  undefined1 uStack_279;
  undefined **ppuStack_278;
  undefined4 uStack_270;
  undefined2 uStack_260;
  byte bStack_25e;
  byte bStack_25d;
  undefined1 *puStack_240;
  undefined ***pppuStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  long *plStack_210;
  undefined **ppuStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1f0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  undefined1 uStack_191;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined2 uStack_178;
  undefined2 uStack_176;
  undefined1 *puStack_158;
  undefined ***pppuStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  byte bStack_106;
  byte bStack_105;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  func_0x000107c61158(PTR_PTR_1126c3858);
  if (param_1 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x000107c430a4(&uStack_b0,param_1);
  }
  puVar2 = &uStack_191;
  FUN_1004fd544();
  uVar3 = param_2;
  func_0x000107c4a77c();
  uStack_200 = 0xf;
  pppuStack_150 = &ppuStack_208;
  uStack_1f0 = 0x100;
  ppuStack_208 = &PTR_DAT_110864b98;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  lStack_1b8 = 0;
  lStack_1c0 = 0;
  plStack_1a8 = (long *)0x0;
  uStack_1b0 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_176 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_188 = 10;
  uStack_178 = 0x100;
  ppuStack_190 = &PTR_DAT_110864b38;
  lStack_140 = 0;
  lStack_148 = 0;
  plStack_130 = (long *)0x0;
  uStack_138 = 0;
  plStack_128 = (long *)0x0;
  puVar4 = &uStack_279;
  uStack_1d8 = uVar3;
  puStack_158 = puVar2;
  func_0x0001004fd5fc();
  uVar3 = param_2;
  func_0x000107c4a91c();
  func_0x000107c61180();
  uStack_2e8 = 0xf;
  uStack_2d8 = 0x100;
  func_0x000107c61174();
  ppuStack_2f0 = &PTR_DAT_110862760;
  uStack_2b0 = 0;
  uStack_2b8 = 0;
  uStack_2a0 = 0;
  uStack_2a8 = 0;
  plStack_290 = (long *)0x0;
  uStack_298 = 0;
  plStack_288 = (long *)0x0;
  bStack_25e = puVar4[0x1a];
  bStack_25d = puVar4[0x1b];
  uStack_270 = 10;
  uStack_260 = 0x100;
  ppuStack_278 = &PTR_DAT_110862700;
  pppuStack_e0 = &ppuStack_278;
  uStack_228 = 0;
  uStack_230 = 0;
  plStack_218 = (long *)0x0;
  uStack_220 = 0;
  plStack_210 = (long *)0x0;
  bStack_106 = (byte)uStack_176 | bStack_25e;
  bStack_105 = uStack_176._1_1_ & bStack_25d;
  uStack_118 = 4;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_DAT_1108629c8;
  pppuStack_e8 = &ppuStack_190;
  plStack_b8 = (long *)0x0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  lStack_d8 = 0;
  puStack_308 = (undefined8 *)0x0;
  puStack_300 = (undefined8 *)0x0;
  uStack_2f8 = 0;
  uStack_30c = 0;
  puVar5 = &uStack_b0;
  uStack_2c0 = uVar3;
  puStack_240 = puVar4;
  pppuStack_238 = &ppuStack_2f0;
  FUN_1000e77a0(puVar5,&ppuStack_120,&puStack_308,&uStack_30c);
  func_0x000107c61180();
  if (puStack_308 != (undefined8 *)0x0) {
    puStack_300 = puStack_308;
    func_0x000107c60e14();
  }
  plVar1 = plStack_b8;
  ppuStack_120 = &PTR_DAT_1108629c8;
  plStack_b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_d8 != 0) {
    func_0x000107c60e14();
  }
  plVar1 = plStack_210;
  ppuStack_278 = &PTR_DAT_110862700;
  plStack_210 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_218;
  plStack_218 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_308 = &uStack_230;
  FUN_100105004(&puStack_308);
  plVar1 = plStack_288;
  ppuStack_2f0 = &PTR_DAT_110862760;
  plStack_288 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_290;
  plStack_290 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_308 = &uStack_2a8;
  FUN_100105004(&puStack_308);
  func_0x000107c61170(uStack_2c0);
  func_0x000107c61170(uVar3);
  plVar1 = plStack_128;
  ppuStack_190 = &PTR_DAT_110864b38;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_148 != 0) {
    lStack_140 = lStack_148;
    func_0x000107c60e14();
  }
  plVar1 = plStack_1a0;
  ppuStack_208 = &PTR_DAT_110864b98;
  plStack_1a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1a8;
  plStack_1a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1c0 != 0) {
    lStack_1b8 = lStack_1c0;
    func_0x000107c60e14();
  }
  FUN_1000e76e0(&uStack_88);
  func_0x000107c61170(uStack_98);
  func_0x000107c61170(uStack_a0);
  puVar10 = puVar5;
  func_0x000107c40808();
  if (puVar10 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    puVar10 = puVar5;
    func_0x000107c43638();
    func_0x000107c61180();
    puVar6 = puVar5;
    func_0x000107c3e1b8();
    func_0x000107c61180();
    for (puVar11 = (undefined8 *)0x1; puVar7 = puVar6, func_0x000107c40808(), puVar11 < puVar7;
        puVar11 = (undefined8 *)((long)puVar11 + 1)) {
      puVar7 = puVar6;
      func_0x000107c4d9a4();
      func_0x000107c61180();
      puVar8 = puVar10;
      func_0x000107c5e99c();
      puVar9 = puVar7;
      func_0x000107c5e99c();
      if ((int)puVar8 < (int)puVar9) {
        func_0x000107c61174(puVar7);
        func_0x000107c61170(puVar10);
        puVar10 = puVar7;
      }
      func_0x000107c61170(puVar7);
    }
    func_0x000107c61170(puVar6);
  }
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1004fd208; end: 1004fd273; -[SCUserPropertiesDocRepository valueForItemKey:] */

void FUN_1004fd208(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  FUN_1004fcce4(uVar1,param_3);
  func_0x000107c61180();
  func_0x000107c4181c(param_1);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1004fd274; end: 1004fd37b; -[SCFeedAppUserLifecycleObserver onUserResumed:didLaunchWithDataUnavailable:] */

/* WARNING: Possible PIC construction at 0x0001004fd2ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004fd2d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001004fd2f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004fd2d4) */
/* WARNING: Removing unreachable block (ram,0x0001004fd2b0) */
/* WARNING: Removing unreachable block (ram,0x0001004fd2f8) */

void FUN_1004fd274(long param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_4 == 0) {
    if (param_3 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 8);
      func_0x000107c5c734(uVar1);
      func_0x000107c61180();
      func_0x000107c5d3e8();
      goto code_r0x000107c61170;
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c5d3e8();
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1004fd37c; end: 1004fd533; -[SCFriendsFeedDataServicesEntryPoint _friendsFeedFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004fd37c(long param_1)

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
  
  lVar9 = (long)_DAT_112749314;
  lVar1 = param_1 + lVar9;
  func_0x000107c61148(lVar1);
  lVar2 = lVar1;
  func_0x000107c4d460();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + lVar9;
  func_0x000107c61148(lVar1);
  lVar3 = lVar1;
  func_0x000107c4d490();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112749300;
  func_0x000107c61148(lVar1);
  lVar4 = lVar1;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_1127492dc;
  func_0x000107c61148(lVar1);
  lVar5 = lVar1;
  func_0x000107c443dc();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + lVar9;
  func_0x000107c61148(lVar1);
  lVar6 = lVar1;
  func_0x000107c43ab0();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  param_1 = param_1 + lVar9;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c43a84();
  func_0x000107c61180();
  lVar9 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar7 = lVar9;
  func_0x000107c3e198();
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
  puVar8 = PTR_PTR_1126cb1e0;
  func_0x000107c610f4(PTR_PTR_1126cb1e0);
  func_0x000107c47938();
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



/* Entry: 1004fd534; end: 1004fd53b; -[SCNativeMessagingServices friendsFeedLoadingStatusStream] */

undefined8 FUN_1004fd534(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 1004fd53c; end: 1004fd543; -[SCFriendsFeedEntryStore arroyoSyncedFeedEntriesUpdateEvents] */

undefined8 FUN_1004fd53c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1004fd544; end: 1004fd65f;  */

undefined8 FUN_1004fd544(void)

{
  int iVar1;
  
  if ((bRam000000011381ab78 & 1) == 0) {
    iVar1 = 0x1381ab78;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uRam000000011381ab10 = 0xe;
      puRam000000011381ab18 = &UNK_10f33a4c7;
      uRam000000011381ab20 = 0x10001;
      pcRam000000011381ab28 = FUN_100502870;
      puRam000000011381ab30 = &UNK_105c866c4;
      ppuRam000000011381ab08 = &PTR_DAT_110864b98;
      uRam000000011381ab48 = 0;
      uRam000000011381ab40 = 0;
      uRam000000011381ab58 = 0;
      uRam000000011381ab50 = 0;
      uRam000000011381ab68 = 0;
      uRam000000011381ab60 = 0;
      uRam000000011381ab70 = 0;
      func_0x000107c60e34(&DAT_105077cd4,0x11381ab08,0x100000000);
      func_0x000107c60e4c(0x11381ab78);
    }
  }
  return 0x11381ab08;
}



/* Entry: 1004fd660; end: 1004fd667; -[SCUserPropertiesKey kind] */

undefined8 FUN_1004fd660(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1004fd668; end: 1004fd673; +[SCUserProperties table] */

undefined * FUN_1004fd668(void)

{
  return &UNK_10f33a4da;
}



/* Entry: 1004fd674; end: 1004fd6fb;  */

void FUN_1004fd674(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      FUN_10055a1c0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001004fd6e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 1004fd6fc; end: 1004fd783;  */

void FUN_1004fd6fc(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      FUN_10055a1c0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001004fd770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 1004fd784; end: 1004fd80b;  */

void FUN_1004fd784(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      FUN_10055a1c0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001004fd7f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 1004fd80c; end: 1004fd953; -[SCFriendsFeedFetcher initWithNativeFeedManager:nativeSessionManagerFuture:messagingExperimentService:ghostToFeedLogger:friendsFeedLoadingStatusStream:arroyoSyncedFeedEntriesUpdateEvents:] */

undefined1 *
FUN_1004fd80c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_48 = PTR_PTR_1126f1868;
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
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c3ca10(puVar1);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1004fd954; end: 1004fda1f; -[SCFriendsFeedFetcher _subscribeToSyncedFeedUpdateEvents] */

void FUN_1004fd954(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c5c320(uVar1);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 1004fda20; end: 1004fe0cb;  */

void FUN_1004fda20(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    func_0x000107c60c5c(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x0001004fe070;
  case 1:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x0001004fe090;
  case 2:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x0001004fe090;
  case 3:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x0001004fe004:
                    /* WARNING: Could not recover jumptable at 0x0001004fe028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x0001004fe004;
    }
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") AND (",7);
    break;
  case 5:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") OR (",6);
    break;
  case 6:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") < (",5);
    break;
  case 7:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") <= (",6);
    break;
  case 8:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") > (",5);
    break;
  case 9:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") >= (",6);
    break;
  case 10:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") = (",5);
    break;
  case 0xb:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") != (",6);
    break;
  case 0xc:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") IN (",6);
    if (*(long *)(param_1 + 0x50) != 0) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        func_0x000107c60ddc(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        func_0x000107c60c70(plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        func_0x000107c60c5c(param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          func_0x000107c60e14(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          func_0x000107c60e14(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(ulong *)(param_1 + 0x50));
      goto code_r0x0001004fe090;
    }
    goto code_r0x0001004fe084;
  case 0xd:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == 0) goto code_r0x0001004fe084;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      func_0x000107c60ddc(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      func_0x000107c60c70(plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      func_0x000107c60c5c(param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        func_0x000107c60e14(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        func_0x000107c60e14(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(ulong *)(param_1 + 0x50));
    goto code_r0x0001004fe090;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    func_0x000107c613d0(pcVar7);
    goto code_r0x0001004fe090;
  case 0xf:
    *param_3 = *param_3 + 1;
    func_0x000107c60ddc(alStack_98);
    plVar6 = alStack_98;
    func_0x000107c60c70(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    func_0x000107c60c5c(param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      func_0x000107c60e14(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      func_0x000107c60e14(alStack_98[0]);
    }
  default:
    goto LAB_1004fe0a0;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x0001004fe070:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x0001004fe084:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x0001004fe090:
  func_0x000107c60c5c(param_2,pcVar7,pcVar8);
LAB_1004fe0a0:
  return;
}



/* Entry: 1004fe0cc; end: 1004fe787;  */

void FUN_1004fe0cc(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    func_0x000107c60c5c(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x0001004fe72c;
  case 1:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x0001004fe74c;
  case 2:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x0001004fe74c;
  case 3:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x0001004fe6c0:
                    /* WARNING: Could not recover jumptable at 0x0001004fe6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x0001004fe6c0;
    }
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") AND (",7);
    break;
  case 5:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") OR (",6);
    break;
  case 6:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") < (",5);
    break;
  case 7:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") <= (",6);
    break;
  case 8:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") > (",5);
    break;
  case 9:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") >= (",6);
    break;
  case 10:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") = (",5);
    break;
  case 0xb:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") != (",6);
    break;
  case 0xc:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") IN (",6);
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        func_0x000107c60ddc(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        func_0x000107c60c70(plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        func_0x000107c60c5c(param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          func_0x000107c60e14(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          func_0x000107c60e14(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
      goto code_r0x0001004fe74c;
    }
    goto code_r0x0001004fe740;
  case 0xd:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x0001004fe740;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      func_0x000107c60ddc(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      func_0x000107c60c70(plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      func_0x000107c60c5c(param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        func_0x000107c60e14(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        func_0x000107c60e14(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
    goto code_r0x0001004fe74c;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    func_0x000107c613d0(pcVar7);
    goto code_r0x0001004fe74c;
  case 0xf:
    *param_3 = *param_3 + 1;
    func_0x000107c60ddc(alStack_98);
    plVar6 = alStack_98;
    func_0x000107c60c70(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    func_0x000107c60c5c(param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      func_0x000107c60e14(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      func_0x000107c60e14(alStack_98[0]);
    }
  default:
    goto LAB_1004fe75c;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x0001004fe72c:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x0001004fe740:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x0001004fe74c:
  func_0x000107c60c5c(param_2,pcVar7,pcVar8);
LAB_1004fe75c:
  return;
}



/* Entry: 1004fe788; end: 1004fee43;  */

void FUN_1004fe788(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    func_0x000107c60c5c(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x0001004fede8;
  case 1:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x0001004fee08;
  case 2:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x0001004fee08;
  case 3:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x0001004fed7c:
                    /* WARNING: Could not recover jumptable at 0x0001004feda0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x0001004fed7c;
    }
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") AND (",7);
    break;
  case 5:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") OR (",6);
    break;
  case 6:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") < (",5);
    break;
  case 7:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") <= (",6);
    break;
  case 8:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") > (",5);
    break;
  case 9:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") >= (",6);
    break;
  case 10:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") = (",5);
    break;
  case 0xb:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") != (",6);
    break;
  case 0xc:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") IN (",6);
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        func_0x000107c60ddc(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        func_0x000107c60c70(plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        func_0x000107c60c5c(param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          func_0x000107c60e14(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          func_0x000107c60e14(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
      goto code_r0x0001004fee08;
    }
    goto code_r0x0001004fedfc;
  case 0xd:
    func_0x000107c60c5c(param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    func_0x000107c60c5c(param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x0001004fedfc;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      func_0x000107c60ddc(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      func_0x000107c60c70(plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      func_0x000107c60c5c(param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        func_0x000107c60e14(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        func_0x000107c60e14(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
    goto code_r0x0001004fee08;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    func_0x000107c613d0(pcVar7);
    goto code_r0x0001004fee08;
  case 0xf:
    *param_3 = *param_3 + 1;
    func_0x000107c60ddc(alStack_98);
    plVar6 = alStack_98;
    func_0x000107c60c70(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    func_0x000107c60c5c(param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      func_0x000107c60e14(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      func_0x000107c60e14(alStack_98[0]);
    }
  default:
    goto LAB_1004fee18;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x0001004fede8:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x0001004fedfc:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x0001004fee08:
  func_0x000107c60c5c(param_2,pcVar7,pcVar8);
LAB_1004fee18:
  return;
}



/* Entry: 1004fee44; end: 1004ff2a3; -[SCLocationSharingServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004fee44(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  func_0x000107c61144(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10050793c;
  puStack_90 = &UNK_1108f8620;
  func_0x000107c6111c(auStack_88,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar8 = *(undefined8 *)(param_1 + _DAT_11273a510);
  *(undefined **)(param_1 + _DAT_11273a510) = puVar1;
  func_0x000107c61170(uVar8);
  puVar1 = PTR_PTR_1126ae720;
  puStack_d0 = puVar6;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_1005073c8;
  puStack_b8 = &UNK_1108f8650;
  func_0x000107c6111c(auStack_b0,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  lVar9 = (long)_DAT_11273a514;
  func_0x000107c61174();
  uVar8 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar1;
  func_0x000107c61170(uVar8);
  lVar9 = (long)_DAT_11273a518;
  func_0x000107c61174(puVar1);
  uVar8 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar1;
  func_0x000107c61170(uVar8);
  puVar2 = PTR_PTR_1126ae720;
  puStack_f8 = puVar6;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_10050611c;
  puStack_e0 = &UNK_1108f8680;
  func_0x000107c6111c(auStack_d8,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126c5e88;
  func_0x000107c610f4(PTR_PTR_1126c5e88);
  func_0x000107c47ff4();
  uVar8 = 0x11;
  FUN_1000819a8(0x11,0);
  func_0x000107c61180();
  puStack_120 = puVar6;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_1005060fc;
  puStack_108 = &UNK_110842e18;
  puStack_100 = puVar2;
  FUN_10007380c();
  func_0x000107c61170(uVar8);
  puVar4 = PTR_PTR_1126ae720;
  puStack_148 = puVar6;
  uStack_140 = 0xc2000000;
  puStack_138 = &UNK_105f15c8c;
  puStack_130 = &UNK_1108f86b0;
  func_0x000107c6111c(auStack_128,auStack_80);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  lVar9 = (long)_DAT_11273a51c;
  uVar8 = *(undefined8 *)(param_1 + lVar9);
  *(undefined **)(param_1 + lVar9) = puVar4;
  func_0x000107c61170(uVar8);
  func_0x000107c61144(auStack_150,*(undefined8 *)(param_1 + lVar9));
  param_1 = param_1 + _DAT_11273a56c;
  func_0x000107c61148(param_1);
  lVar9 = param_1;
  func_0x000107c3de00();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  lVar5 = lVar9;
  func_0x000107c5c734(lVar9);
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ae960;
  puVar4 = PTR_PTR_1126bf070;
  func_0x000107c4b900(PTR_PTR_1126bf070);
  func_0x000107c61180();
  func_0x000107c4c280(puVar6);
  func_0x000107c61180();
  puVar7 = PTR_PTR_1126ae970;
  func_0x000107c4ca90(PTR_PTR_1126ae970);
  func_0x000107c61180();
  func_0x000107c61174(PTR___dispatch_main_q_11034be20);
  func_0x000107c6111c(auStack_158,auStack_150);
  func_0x000107c5e08c(lVar5);
  func_0x000107c611b0();
  func_0x000107c61170(PTR___dispatch_main_q_11034be20);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(lVar5);
  func_0x000107c61120(auStack_158);
  func_0x000107c61170(lVar9);
  func_0x000107c61120(auStack_150);
  func_0x000107c61120(auStack_128);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_d8);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_b0);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1004ff2a4; end: 1004ff2fb; -[SCFriendsFeedFetcher updateAppStateChange:] */

void FUN_1004ff2a4(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined1 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_1006088b4;
  puStack_20 = &UNK_110927cb0;
  uStack_18 = param_3;
  func_0x000107c5dc64(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_38,0);
  return;
}



/* Entry: 1004ff2fc; end: 1004ff303; -[SCFuture valueWithCompletion:performer:] */

void FUN_1004ff2fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c297290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_valueWithCompletion_performer_pr_1126836c8,param_3,param_4,0);
  return;
}



/* Entry: 1004ff304; end: 1004ff36f; -[SCGhostToFeedLogger startLoggingForSource:] */

void FUN_1004ff304(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c6071c();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_100505d60;
  puStack_40 = &UNK_110858dc0;
  lStack_38 = param_2;
  uStack_30 = param_4;
  uStack_28 = param_1;
  func_0x000107c4e524(*(undefined8 *)(param_2 + 0x10),param_3,&puStack_58);
  return;
}



/* Entry: 1004ff370; end: 1004ff4d7; -[SCFriendsFeedFetcher updateFriendsFeedForTriggerType:] */

void FUN_1004ff370(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  func_0x000107c3cc20(param_2,param_3,1,param_4);
  puVar1 = PTR_PTR_1126ba4d0;
  func_0x000107c610f4();
  puVar2 = puVar1;
  FUN_10011df08();
  func_0x000107c61180();
  func_0x000107c46d80();
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  FUN_10060dccc();
  if ((int)puVar2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    func_0x000107c5c734(uVar3);
    func_0x000107c61180();
    func_0x000107c54958();
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61144(auStack_48,param_2);
  func_0x000107c6071c();
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c6111c(auStack_58,auStack_48);
  uStack_50 = param_1;
  func_0x000107c61174(puVar1);
  func_0x000107c5dc64(uVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_58);
  func_0x000107c61120(auStack_48);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 1004ff4d8; end: 1004ff523; -[SCFriendsFeedFetcher _updateLoadingStatus:triggerType:] */

void FUN_1004ff4d8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c5d534();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1004ff524; end: 1004ff56b;  */

void FUN_1004ff524(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c44070();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1004ff56c; end: 1004ff5a7; -[SCLazyNotMainThreadDuringColdStartup target] */

void FUN_1004ff56c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112701ac0;
  uStack_20 = param_1;
  func_0x000107c61154(&uStack_20,PTR_s_target_112678178);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1004ff5a8; end: 1004ff6a3; -[SCLocationSharingServices initWithPreferencesMutator:preferencesProvider:sharingService:locationNotificationPresenter:] */

undefined1 *
FUN_1004ff5a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126ffe70;
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



/* Entry: 1004ff6a4; end: 1004ff6ab; +[SCAttributedMapTask locationSharing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004ff6a4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b568) = 9;
  *(undefined8 *)(lVar1 + _DAT_11309b570) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309b578) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309b580) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1004ff6ac; end: 1004ff71f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1004ff6ac(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b568) = param_3;
  *(undefined8 *)(lVar1 + _DAT_11309b570) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309b578) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309b580) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1004ff720; end: 1004ffba7; +[SCAttributedTask map:] */

void FUN_1004ff720(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x0001004ff758();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1004ffba8; end: 1004ffc1b;  */

void FUN_1004ffba8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0x10,0x1004ffba8);
  (*pcVar1)();
}



/* Entry: 1004ffc1c; end: 100500233;  */

void FUN_1004ffc1c(uint param_1)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_1 >> 4 & 0xf;
  if (uVar1 < 4) {
    if (uVar1 < 2) {
      lVar3 = 0x112d38280;
      if (uVar1 == 0) {
        FUN_1000285a8(0x112d38280,&UNK_10d901fc0);
        func_0x000107c613fc();
        *(undefined8 *)(lVar3 + 0x18) = 4;
        *(undefined8 *)(lVar3 + 0x10) = 2;
        *(undefined8 *)(lVar3 + 0x20) = 0x617373654d70614d;
        *(undefined8 *)(lVar3 + 0x28) = 0xeb00000000736567;
        bVar2 = (param_1 & 0xff) != 1;
        uVar5 = 0x4264657469736976;
        if (bVar2) {
          uVar5 = 0xd000000000000010;
        }
        uVar4 = 0xe900000000000079;
        if (bVar2) {
          uVar4 = 0x800000010f217060;
        }
        *(undefined8 *)(lVar3 + 0x30) = uVar5;
        *(undefined8 *)(lVar3 + 0x38) = uVar4;
      }
      else {
        FUN_1000285a8(0x112d38280,&UNK_10d901fc0);
        func_0x000107c613fc();
        *(undefined8 *)(lVar3 + 0x18) = 4;
        *(undefined8 *)(lVar3 + 0x10) = 2;
        *(undefined8 *)(lVar3 + 0x20) = 0x4955;
        *(undefined8 *)(lVar3 + 0x28) = 0xe200000000000000;
        if ((param_1 & 0xf) == 0) {
          uVar5 = 0xe700000000000000;
          uVar4 = 0x6c6172656e6567;
        }
        else if ((param_1 & 0xf) == 1) {
          uVar5 = 0xeb00000000325665;
          uVar4 = 0x6d6f72684370616d;
        }
        else {
          uVar5 = 0x800000010f217000;
          uVar4 = 0xd000000000000010;
        }
        *(undefined8 *)(lVar3 + 0x30) = uVar4;
        *(undefined8 *)(lVar3 + 0x38) = uVar5;
      }
      uVar5 = 0x112d38270;
      FUN_1000285a8(0x112d38270,&UNK_10d905a20);
      uVar4 = uVar5;
      FUN_10011d734();
      func_0x000107c5fa80(0x23,0xe100000000000000,uVar5,uVar4);
      func_0x000107c61574(lVar3);
    }
  }
  else if ((((uVar1 < 6) && (uVar1 != 4)) && ((param_1 & 0xff) < 0x52)) &&
          ((param_1 & 0xff) != 0x50)) {
    FUN_1000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
    uVar5 = 0x112d38270;
    FUN_1000285a8(0x112d38270,&UNK_10d905a20);
    uVar4 = uVar5;
    FUN_10011d734();
    func_0x000107c5fa80(0x23,0xe100000000000000,uVar5,uVar4);
  }
  return;
}



/* Entry: 100500234; end: 10050027b; -[SCAttributedMapTask .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100500250: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100500254) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100500234(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11309b570));
  return;
}



/* Entry: 10050027c; end: 100500337;  */

void FUN_10050027c(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100500338; end: 1005004bf;  */

void FUN_100500338(long param_1,undefined8 param_2,int *param_3)

{
  ulong *puVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  ulong *puVar9;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 < 0xf) {
    if (iVar7 - 0xcU < 2) {
      plVar4 = *(long **)(param_1 + 0x38);
      if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
      }
      uVar6 = *(ulong *)(param_1 + 0x50);
      uVar5 = uVar6 >> 3 & 0x1ffffffffffffff8;
      if (uVar5 != 0 || (uVar6 & 0x3f) != 0) {
        uVar8 = 0;
        puVar9 = *(ulong **)(param_1 + 0x48);
        puVar1 = (ulong *)((long)puVar9 + uVar5);
        do {
          iVar7 = *param_3;
          *param_3 = iVar7 + 1;
          func_0x000107c6132c(param_2,iVar7 + 1,*puVar9 >> (uVar8 & 0x3f) & 1);
          iVar7 = (int)uVar8;
          lVar2 = 8;
          if (iVar7 != 0x3f) {
            lVar2 = 0;
          }
          puVar9 = (ulong *)((long)puVar9 + lVar2);
          uVar3 = 0;
          if (iVar7 != 0x3f) {
            uVar3 = iVar7 + 1;
          }
          uVar8 = (ulong)uVar3;
        } while ((uVar3 != ((uint)uVar6 & 0x3f)) || (puVar9 != puVar1));
      }
    }
    else if (iVar7 == 0xe) {
      return;
    }
  }
  else {
    if (iVar7 == 0x10) {
      return;
    }
    if (iVar7 == 0xf) {
      iVar7 = *param_3;
      *param_3 = iVar7 + 1;
      func_0x000107c6132c(param_2,iVar7 + 1,*(undefined1 *)(param_1 + 0x30));
      return;
    }
  }
  plVar4 = *(long **)(param_1 + 0x38);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
  }
  plVar4 = *(long **)(param_1 + 0x40);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001005004b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 1005004c0; end: 1005004c7;  */

void FUN_1005004c0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x68);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1005004c8; end: 10050051b;  */

void FUN_1005004c8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x68);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10050051c; end: 10050064f;  */

void FUN_10050051c(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar3 = *(long **)(param_1 + 0x38);
      if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
      }
      puVar1 = *(undefined8 **)(param_1 + 0x50);
      for (puVar5 = *(undefined8 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar4 = *puVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        func_0x000107c6132c(param_2,iVar2 + 1,uVar4);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      func_0x000107c6132c(param_2,iVar2 + 1,*(undefined1 *)(param_1 + 0x30));
      return;
    }
  }
  plVar3 = *(long **)(param_1 + 0x38);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
  }
  plVar3 = *(long **)(param_1 + 0x40);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000100500644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 100500650; end: 100500783;  */

void FUN_100500650(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar3 = *(long **)(param_1 + 0x38);
      if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
      }
      puVar1 = *(undefined8 **)(param_1 + 0x50);
      for (puVar5 = *(undefined8 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar4 = *puVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        func_0x000107c6132c(param_2,iVar2 + 1,uVar4);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      func_0x000107c6132c(param_2,iVar2 + 1,*(undefined8 *)(param_1 + 0x30));
      return;
    }
  }
  plVar3 = *(long **)(param_1 + 0x38);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
  }
  plVar3 = *(long **)(param_1 + 0x40);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000100500778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 100500784; end: 100500e4f;  */

void FUN_100500784(long *param_1,long param_2)

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
  FUN_1002d0f6c();
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
  puVar1 = PTR_PTR_1126a9200;
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174();
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
  uVar11 = uStack_c0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar12 = auStack_70[0];
  func_0x000107c61174();
  uVar13 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar13 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef27e40);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar13 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef27da0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar13 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f00c470);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar1);
  uVar13 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef27ee0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar1);
  uVar13 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00c430);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar13 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar13 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar13 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar13);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef129b0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0x655343505270616d;
  func_0x000107c5fadc(0x655343505270616d,0xee00736563697672);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar13);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  uVar13 = uVar14;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar12);
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
  *(undefined8 *)(param_2 + 0x68) = uVar13;
  *param_1 = param_2;
  return;
}



/* Entry: 100500e50; end: 100500e8b;  */

void FUN_100500e50(void)

{
  long unaff_x20;
  
  FUN_100500784(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 100500e8c; end: 100500e93;  */

void FUN_100500e8c(undefined8 *param_1)

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



/* Entry: 100500e94; end: 100500ee7;  */

void FUN_100500e94(undefined8 *param_1)

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



/* Entry: 100500ee8; end: 100500ef3;  */

void FUN_100500ee8(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
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
  FUN_1002b8528();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  puVar2 = PTR_PTR_1126a91d8;
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
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar2);
  uVar7 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef129b0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar2);
  uVar7 = 0x655343505270616d;
  func_0x000107c5fadc(0x655343505270616d,0xee00736563697672);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  uVar8 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
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
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(lVar1 + 0x30) = uVar7;
  *param_1 = lVar1;
  return;
}



/* Entry: 100500ef4; end: 1005011b3;  */

void FUN_100500ef4(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_1002b8528();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126a91d8;
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
  func_0x000107c61174(puVar1);
  uVar6 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef129b0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar1);
  uVar6 = 0x655343505270616d;
  func_0x000107c5fadc(0x655343505270616d,0xee00736563697672);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar6 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  uVar6 = uVar7;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(param_2 + 0x30) = uVar6;
  *param_1 = param_2;
  return;
}



/* Entry: 1005011b4; end: 100501297; -[SCMapLocationMutingServiceProvider provide] */

void FUN_1005011b4(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126bf060;
  func_0x000107c610f4(PTR_PTR_1126bf060);
  func_0x000107c47884();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100501298; end: 1005012ef; -[_TtC27SCMapLocationMutingServices27SCMapLocationMutingServices initWithMutingService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100501298(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fcd348) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1005012f0; end: 10050132b;  */

void FUN_1005012f0(void)

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



/* Entry: 10050132c; end: 100501333;  */

void FUN_10050132c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x68);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100501334; end: 100501387;  */

void FUN_100501334(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x68);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100501388; end: 100501a37;  */

void FUN_100501388(long *param_1,long param_2)

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
  FUN_1002cf8a4();
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
  puVar1 = PTR_PTR_1126a9218;
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174();
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
  uVar11 = uStack_c0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar12 = auStack_70[0];
  func_0x000107c61174();
  uVar13 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar13 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar13);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar14);
  uVar13 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef27e20);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(uVar14);
  uVar13 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef27e40);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar14);
  uVar13 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f00c590);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar14);
  uVar13 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef27da0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar14);
  uVar13 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef27ee0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(uVar14);
  uVar13 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00c430);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0x7672655363707267;
  func_0x000107c5fadc(0x7672655363707267,0xec00000073656369);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar13);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef129b0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  uVar13 = uVar14;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar12);
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
  *(undefined8 *)(param_2 + 0x68) = uVar13;
  *param_1 = param_2;
  return;
}



/* Entry: 100501a38; end: 100501a73;  */

void FUN_100501a38(void)

{
  long unaff_x20;
  
  FUN_100501388(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 100501a74; end: 100501a7b;  */

void FUN_100501a74(undefined8 *param_1)

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



/* Entry: 100501a7c; end: 100501acf;  */

void FUN_100501a7c(undefined8 *param_1)

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



/* Entry: 100501ad0; end: 100501ad7;  */

void FUN_100501ad0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  FUN_10029e714();
  func_0x000107c613fc();
  FUN_100501b4c(uStack_38,uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 100501ad8; end: 100501b4b;  */

void FUN_100501ad8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  FUN_10029e714();
  func_0x000107c613fc();
  FUN_100501b4c(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 100501b4c; end: 100501caf;  */

void FUN_100501b4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a91c8;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef1c970);
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



/* Entry: 100501cb0; end: 100501d97; -[SCMapBitmojiServiceProvider provide] */

void FUN_100501cb0(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126c73f0;
  func_0x000107c610f4(PTR_PTR_1126c73f0);
  func_0x000107c45988();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100501d98; end: 100502193;  */

uint FUN_100501d98(long param_1,long param_2,long param_3,byte *param_4)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong *puVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  long *plVar13;
  byte bStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  byte bStack_58;
  byte bStack_57;
  byte bStack_56;
  byte bStack_55;
  byte bStack_54;
  byte bStack_53;
  byte bStack_52;
  byte bStack_51;
  
  func_0x000107c61174(param_3);
  iVar9 = *(int *)(param_1 + 8);
  if (iVar9 < 0xe) {
    if (iVar9 - 1U < 2) {
      *param_4 = 0;
      bStack_5b = 0;
      (**(code **)(**(long **)(param_1 + 0x38) + 0x28))
                (*(long **)(param_1 + 0x38),param_2,param_3,&bStack_5b);
      uVar12 = (uint)(iVar9 != 1 ^ bStack_5b);
      goto LAB_100502168;
    }
    if (1 < iVar9 - 0xcU) goto LAB_100501ec4;
    plVar13 = *(long **)(param_1 + 0x38);
    func_0x000107c61174(param_3);
    (**(code **)(*plVar13 + 0x28))(plVar13,param_2,param_3,param_4);
    puVar8 = *(ulong **)(param_1 + 0x48);
    uVar11 = *(ulong *)(param_1 + 0x50);
    uVar10 = uVar11 >> 3 & 0x1ffffffffffffff8;
    puVar1 = (ulong *)((long)puVar8 + uVar10);
    uVar2 = (uint)uVar11 & 0x3f;
    if (iVar9 == 0xc) {
      if ((uVar10 == 0) && ((uVar11 & 0x3f) == 0)) {
        uVar12 = 0;
      }
      else {
        uVar11 = 0;
        do {
          uVar12 = (uint)plVar13 ^ (uint)(*puVar8 >> (uVar11 & 0x3f));
          if ((uVar12 & 1) == 0) break;
          iVar9 = (int)uVar11;
          lVar3 = 8;
          if (iVar9 != 0x3f) {
            lVar3 = 0;
          }
          puVar8 = (ulong *)((long)puVar8 + lVar3);
          uVar4 = 0;
          if (iVar9 != 0x3f) {
            uVar4 = iVar9 + 1;
          }
          uVar11 = (ulong)uVar4;
        } while ((uVar4 != uVar2) || (puVar8 != puVar1));
        uVar12 = uVar12 ^ 1;
      }
    }
    else if ((uVar10 == 0) && ((uVar11 & 0x3f) == 0)) {
      uVar12 = 1;
    }
    else {
      uVar11 = 0;
      do {
        uVar12 = (uint)plVar13 ^ (uint)(*puVar8 >> (uVar11 & 0x3f));
        if ((uVar12 & 1) == 0) break;
        iVar9 = (int)uVar11;
        lVar3 = 8;
        if (iVar9 != 0x3f) {
          lVar3 = 0;
        }
        puVar8 = (ulong *)((long)puVar8 + lVar3);
        uVar4 = 0;
        if (iVar9 != 0x3f) {
          uVar4 = iVar9 + 1;
        }
        uVar11 = (ulong)uVar4;
      } while ((uVar4 != uVar2) || (puVar8 != puVar1));
    }
    goto LAB_100502160;
  }
  if (iVar9 - 0xfU < 2) {
    *param_4 = 0;
    uVar12 = (uint)*(byte *)(param_1 + 0x30);
    goto LAB_100502168;
  }
  if (iVar9 == 0xe) {
    lVar3 = 0x28;
    lVar5 = param_3;
    if (param_2 != 0) {
      lVar3 = 0x20;
      lVar5 = param_2;
    }
    (**(code **)(param_1 + lVar3))(lVar5,param_4);
    uVar12 = (uint)lVar5;
    goto LAB_100502168;
  }
LAB_100501ec4:
  plVar13 = *(long **)(param_1 + 0x38);
  plVar7 = *(long **)(param_1 + 0x40);
  func_0x000107c61174(param_3);
  uVar12 = 0;
  if (iVar9 < 5) {
    if (iVar9 == 0) {
      (**(code **)(*plVar13 + 0x28))(plVar13,param_2,param_3,param_4);
      uVar12 = (uint)plVar13 ^ 1;
    }
    else if (iVar9 == 3) {
      (**(code **)(*plVar13 + 0x28))(plVar13,param_2,param_3,&bStack_51);
      (**(code **)(*plVar7 + 0x28))(plVar7,param_2,param_3,&bStack_52);
      uVar12 = 0;
      *param_4 = (bStack_51 | bStack_52) & 1;
    }
    else if (iVar9 == 4) {
      (**(code **)(*plVar13 + 0x28))(plVar13,param_2,param_3,&bStack_53);
      (**(code **)(*plVar7 + 0x28))(plVar7,param_2,param_3,&bStack_54);
      if ((((ulong)plVar13 & 1) == 0) && (bStack_53 == 0)) {
LAB_10050213c:
        bStack_53 = bStack_53 & bStack_54;
      }
      else {
        if ((((uint)plVar7 | (uint)bStack_54) & 1) == 0) {
          bStack_54 = 0;
          goto LAB_10050213c;
        }
        bStack_53 = bStack_53 | bStack_54;
      }
      *param_4 = bStack_53 & 1;
      uVar12 = (uint)plVar13 & (uint)plVar7;
    }
  }
  else if (iVar9 - 6U < 6) {
    plVar6 = plVar13;
    (**(code **)(*plVar13 + 0x28))(plVar13,param_2,param_3,&bStack_57);
    uStack_59 = SUB81(plVar6,0);
    (**(code **)(*plVar7 + 0x28))(plVar7,param_2,param_3,&bStack_58);
    uStack_5a = SUB81(plVar7,0);
    *param_4 = (bStack_57 | bStack_58) & 1;
    func_0x0001008aa7b4(plVar13,&uStack_59,&uStack_5a,iVar9,0);
    uVar12 = (uint)plVar13;
  }
  else if (iVar9 == 5) {
    (**(code **)(*plVar13 + 0x28))(plVar13,param_2,param_3,&bStack_55);
    (**(code **)(*plVar7 + 0x28))(plVar7,param_2,param_3,&bStack_56);
    if (((uint)plVar13 == 0) || ((bStack_55 & 1) != 0)) {
      if (((uint)plVar7 != 0) && ((bStack_56 & 1) == 0)) {
        bStack_56 = 0;
        goto LAB_1005020b8;
      }
      bStack_55 = bStack_55 | bStack_56;
    }
    else {
LAB_1005020b8:
      bStack_55 = bStack_55 & bStack_56;
    }
    *param_4 = bStack_55 & 1;
    uVar12 = (uint)plVar13 | (uint)plVar7;
  }
LAB_100502160:
  func_0x000107c61170(param_3);
LAB_100502168:
  func_0x000107c61170(param_3);
  return uVar12 & 1;
}



/* Entry: 100502194; end: 10050255f;  */

uint FUN_100502194(long param_1,long param_2,long param_3,byte *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  ulong uVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  byte bVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  uint uVar13;
  long *plStack_68;
  long *plStack_60;
  byte bStack_52;
  byte bStack_51;
  
  func_0x000107c61174(param_3);
  iVar4 = *(int *)(param_1 + 8);
  if (iVar4 < 0xe) {
    if (iVar4 - 1U < 2) {
      *param_4 = 0;
      plStack_60 = (long *)((ulong)plStack_60 & 0xffffffffffffff00);
      (**(code **)(**(long **)(param_1 + 0x38) + 0x28))
                (*(long **)(param_1 + 0x38),param_2,param_3,&plStack_60);
      uVar13 = (uint)(iVar4 != 1 ^ (byte)plStack_60);
      goto LAB_100502534;
    }
    if (1 < iVar4 - 0xcU) goto LAB_1005022c8;
    plVar12 = *(long **)(param_1 + 0x38);
    func_0x000107c61174(param_3);
    (**(code **)(*plVar12 + 0x28))(plVar12,param_2,param_3,param_4);
    puVar2 = *(undefined8 **)(param_1 + 0x48);
    puVar3 = *(undefined8 **)(param_1 + 0x50);
    if (iVar4 == 0xc) {
      if (puVar2 == puVar3) {
        uVar13 = 0;
      }
      else {
        do {
          puVar10 = puVar2 + 1;
          plVar11 = (long *)*puVar2;
          uVar13 = (uint)(plVar12 == plVar11);
          puVar2 = puVar10;
        } while (plVar12 != plVar11 && puVar10 != puVar3);
      }
    }
    else if (puVar2 == puVar3) {
      uVar13 = 1;
    }
    else {
      do {
        puVar10 = puVar2 + 1;
        plVar11 = (long *)*puVar2;
        uVar13 = (uint)(plVar12 != plVar11);
        puVar2 = puVar10;
      } while (plVar12 != plVar11 && puVar10 != puVar3);
    }
    goto LAB_10050252c;
  }
  if (iVar4 - 0xfU < 2) {
    *param_4 = 0;
    uVar13 = (uint)*(byte *)(param_1 + 0x30);
    goto LAB_100502534;
  }
  if (iVar4 == 0xe) {
    lVar1 = 0x28;
    lVar7 = param_3;
    if (param_2 != 0) {
      lVar1 = 0x20;
      lVar7 = param_2;
    }
    (**(code **)(param_1 + lVar1))(lVar7,param_4);
    uVar13 = (uint)lVar7;
    goto LAB_100502534;
  }
LAB_1005022c8:
  plVar12 = *(long **)(param_1 + 0x38);
  plVar11 = *(long **)(param_1 + 0x40);
  func_0x000107c61174(param_3);
  uVar13 = 0;
  if (iVar4 < 5) {
    if (iVar4 == 0) {
      (**(code **)(*plVar12 + 0x28))(plVar12,param_2,param_3,param_4);
      uVar13 = (uint)(plVar12 == (long *)0x0);
      goto LAB_10050252c;
    }
    if (iVar4 == 3) {
      (**(code **)(*plVar12 + 0x28))(plVar12,param_2,param_3,&plStack_60);
      (**(code **)(*plVar11 + 0x28))(plVar11,param_2,param_3,&plStack_68);
      *param_4 = ((byte)plStack_60 | (byte)plStack_68) & 1;
      uVar5 = 0;
      if (plVar11 != (long *)0x0) {
        uVar5 = (ulong)plVar12 / (ulong)plVar11;
      }
      bVar6 = plVar12 == (long *)(uVar5 * (long)plVar11);
    }
    else {
      if (iVar4 != 4) goto LAB_10050252c;
      (**(code **)(*plVar12 + 0x28))(plVar12,param_2,param_3,&plStack_60);
      (**(code **)(*plVar11 + 0x28))(plVar11,param_2,param_3,&plStack_68);
      if ((plVar12 == (long *)0x0) && (bVar9 = (byte)plStack_68, ((ulong)plStack_60 & 1) == 0)) {
LAB_1005023f4:
        bVar9 = (byte)plStack_60 & bVar9;
      }
      else {
        if ((plVar11 == (long *)0x0) && (((ulong)plStack_68 & 1) == 0)) {
          bVar9 = 0;
          goto LAB_1005023f4;
        }
        bVar9 = (byte)plStack_60 | (byte)plStack_68;
      }
      *param_4 = bVar9 & 1;
      bVar6 = plVar12 == (long *)0x0 || plVar11 == (long *)0x0;
    }
LAB_100502528:
    uVar13 = (uint)!bVar6;
  }
  else if (iVar4 - 6U < 6) {
    plVar8 = plVar12;
    (**(code **)(*plVar12 + 0x28))(plVar12,param_2,param_3,&bStack_51);
    plStack_60 = plVar8;
    (**(code **)(*plVar11 + 0x28))(plVar11,param_2,param_3,&bStack_52);
    *param_4 = (bStack_51 | bStack_52) & 1;
    plStack_68 = plVar11;
    func_0x0001005028a8(plVar12,&plStack_60,&plStack_68,iVar4,0);
    uVar13 = (uint)plVar12;
  }
  else if (iVar4 == 5) {
    (**(code **)(*plVar12 + 0x28))(plVar12,param_2,param_3,&plStack_60);
    (**(code **)(*plVar11 + 0x28))(plVar11,param_2,param_3,&plStack_68);
    if ((plVar12 == (long *)0x0) || (bVar9 = (byte)plStack_68, ((ulong)plStack_60 & 1) != 0)) {
      if ((plVar11 != (long *)0x0) && (((ulong)plStack_68 & 1) == 0)) {
        bVar9 = 0;
        goto LAB_10050246c;
      }
      bVar9 = (byte)plStack_60 | (byte)plStack_68;
    }
    else {
LAB_10050246c:
      bVar9 = (byte)plStack_60 & bVar9;
    }
    *param_4 = bVar9 & 1;
    bVar6 = plVar12 == (long *)0x0 && plVar11 == (long *)0x0;
    goto LAB_100502528;
  }
LAB_10050252c:
  func_0x000107c61170(param_3);
LAB_100502534:
  func_0x000107c61170(param_3);
  return uVar13 & 1;
}



/* Entry: 100502560; end: 10050286f;  */

ulong FUN_100502560(long param_1,ulong param_2,ulong param_3,byte *param_4)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  byte bVar7;
  ulong uVar8;
  long *plStack_68;
  long *plStack_60;
  byte bStack_52;
  byte bStack_51;
  
  func_0x000107c61174(param_3);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xe) {
    if (iVar2 - 1U < 2) {
      uVar8 = 0;
      *param_4 = 0;
      goto LAB_100502844;
    }
    if (iVar2 - 0xcU < 2) {
      uVar8 = 0;
      goto LAB_100502844;
    }
  }
  else {
    if (iVar2 - 0xfU < 2) {
      *param_4 = 0;
      uVar8 = *(ulong *)(param_1 + 0x30);
      goto LAB_100502844;
    }
    if (iVar2 == 0xe) {
      lVar1 = 0x28;
      uVar8 = param_3;
      if (param_2 != 0) {
        lVar1 = 0x20;
        uVar8 = param_2;
      }
      (**(code **)(param_1 + lVar1))(uVar8,param_4);
      goto LAB_100502844;
    }
  }
  plVar5 = *(long **)(param_1 + 0x38);
  plVar6 = *(long **)(param_1 + 0x40);
  func_0x000107c61174(param_3);
  uVar8 = 0;
  if (iVar2 < 5) {
    if (iVar2 == 0) {
      (**(code **)(*plVar5 + 0x28))(plVar5,param_2,param_3,param_4);
      uVar8 = (ulong)(plVar5 == (long *)0x0);
    }
    else if (iVar2 == 3) {
      (**(code **)(*plVar5 + 0x28))(plVar5,param_2,param_3,&plStack_60);
      (**(code **)(*plVar6 + 0x28))(plVar6,param_2,param_3,&plStack_68);
      *param_4 = ((byte)plStack_60 | (byte)plStack_68) & 1;
      uVar8 = 0;
      if (plVar6 != (long *)0x0) {
        uVar8 = (ulong)plVar5 / (ulong)plVar6;
      }
      uVar8 = (long)plVar5 - uVar8 * (long)plVar6;
    }
    else if (iVar2 == 4) {
      (**(code **)(*plVar5 + 0x28))(plVar5,param_2,param_3,&plStack_60);
      (**(code **)(*plVar6 + 0x28))(plVar6,param_2,param_3,&plStack_68);
      if ((plVar5 == (long *)0x0) && (bVar7 = (byte)plStack_68, ((ulong)plStack_60 & 1) == 0)) {
LAB_100502718:
        bVar7 = (byte)plStack_60 & bVar7;
      }
      else {
        if ((plVar6 == (long *)0x0) && (((ulong)plStack_68 & 1) == 0)) {
          bVar7 = 0;
          goto LAB_100502718;
        }
        bVar7 = (byte)plStack_60 | (byte)plStack_68;
      }
      *param_4 = bVar7 & 1;
      bVar3 = plVar5 == (long *)0x0 || plVar6 == (long *)0x0;
      goto LAB_100502838;
    }
  }
  else if (iVar2 - 6U < 6) {
    plVar4 = plVar5;
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2,param_3,&bStack_51);
    plStack_60 = plVar4;
    (**(code **)(*plVar6 + 0x28))(plVar6,param_2,param_3,&bStack_52);
    *param_4 = (bStack_51 | bStack_52) & 1;
    plStack_68 = plVar6;
    func_0x0001005028a8(plVar5,&plStack_60,&plStack_68,iVar2,0);
    uVar8 = (ulong)plVar5 & 0xffffffff;
  }
  else if (iVar2 == 5) {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2,param_3,&plStack_60);
    (**(code **)(*plVar6 + 0x28))(plVar6,param_2,param_3,&plStack_68);
    if ((plVar5 == (long *)0x0) || (bVar7 = (byte)plStack_68, ((ulong)plStack_60 & 1) != 0)) {
      if ((plVar6 != (long *)0x0) && (((ulong)plStack_68 & 1) == 0)) {
        bVar7 = 0;
        goto LAB_100502780;
      }
      bVar7 = (byte)plStack_60 | (byte)plStack_68;
    }
    else {
LAB_100502780:
      bVar7 = (byte)plStack_60 & bVar7;
    }
    *param_4 = bVar7 & 1;
    bVar3 = plVar5 == (long *)0x0 && plVar6 == (long *)0x0;
LAB_100502838:
    uVar8 = (ulong)!bVar3;
  }
  func_0x000107c61170(param_3);
LAB_100502844:
  func_0x000107c61170(param_3);
  return uVar8;
}



/* Entry: 100502870; end: 10050295b;  */

undefined8 FUN_100502870(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((4 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar2 != 0)) {
    return *(undefined8 *)((long)piVar1 + uVar2);
  }
  return 0;
}



/* Entry: 10050295c; end: 1005029e3;  */

void FUN_10050295c(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 7) || (puVar1[3] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    func_0x000107c610f4(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c45aec();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1005029e4; end: 100502d8f; +[SCUserProperties immutableObjectParse:bufferSize:] */

void FUN_1005029e4(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar4 = PTR_PTR_1126c3858;
  func_0x000107c610f4();
  lVar5 = (long)*piVar1;
  uVar3 = *(ushort *)((long)piVar1 - lVar5);
  if ((uVar3 < 5) || (uVar3 < 7)) {
    puVar7 = (undefined *)0x0;
    uVar10 = 0;
    uVar11 = 0;
LAB_100502b30:
    puVar8 = (undefined *)0x0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)piVar1 - lVar5))[3];
    if (uVar6 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar6);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      func_0x000107c61180();
      lVar5 = (long)*piVar1;
      uVar3 = *(ushort *)((long)piVar1 - lVar5);
    }
    lVar5 = -lVar5;
    uVar10 = 0;
    uVar11 = 0;
    if ((((uVar3 < 9) || (uVar3 < 0xb)) || (uVar3 < 0xd)) ||
       (((uVar3 < 0xf || (uVar3 < 0x11)) || ((uVar3 < 0x13 || (uVar3 < 0x15))))))
    goto LAB_100502b30;
    uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 0x14);
    if (uVar6 != 0) {
      uVar11 = *(undefined4 *)((long)piVar1 + uVar6);
    }
    if (uVar3 < 0x17) goto LAB_100502b30;
    uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 0x16);
    if (uVar6 != 0) {
      uVar10 = *(undefined8 *)((long)piVar1 + uVar6);
    }
    if (uVar3 < 0x19) goto LAB_100502b30;
    uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 0x18);
    if (uVar6 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar6);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      func_0x000107c61180();
      lVar5 = -(long)*piVar1;
      uVar3 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (0x1a < uVar3) {
      if (*(short *)((long)piVar1 + lVar5 + 0x1a) == 0) {
        puVar9 = (undefined *)0x0;
      }
      else {
        puVar9 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x000107c610f4();
        func_0x000107c45ae4();
      }
      goto LAB_100502b3c;
    }
  }
  puVar9 = (undefined *)0x0;
LAB_100502b3c:
  func_0x000107c46fd4(uVar11,uVar10);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100502d90; end: 100502f27; -[SCUserProperties initWithItemId:kind:writeStatus:rowVersion:valType:valBool:valInt:valUInt:valFloat:valDouble:valString:valData:enqueueTimeMs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_100502d90(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined1 param_9,undefined1 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  puStack_78 = PTR_PTR_1126ecab8;
  puVar1 = &uStack_80;
  uStack_80 = param_3;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11273316c) = param_5;
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112733170);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112733170) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112733174) = param_7;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112733178) = param_8;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11273317c) = param_9;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112733180) = param_10;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112733184) = param_11;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112733188) = param_12;
    *(undefined4 *)((long)puVar1 + (long)_DAT_11273318c) = param_1;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112733190) = param_2;
    uVar2 = param_13;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112733194);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112733194) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_14;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112733198);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112733198) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11273319c) = param_15;
  }
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_6);
  return puVar1;
}



/* Entry: 100502f28; end: 100502f63;  */

undefined8 FUN_100502f28(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  func_0x000107c60e20(0x70);
  FUN_100502f64(uVar1,param_1);
  return uVar1;
}



/* Entry: 100502f64; end: 10050310f;  */

void FUN_100502f64(undefined8 *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long *plStack_30;
  long *plStack_28;
  
  iVar5 = *(int *)(param_2 + 8);
  if (iVar5 < 0xc) {
    if (iVar5 - 3U < 9) {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plVar4 = *(long **)(param_2 + 0x40);
      plStack_28 = plVar3;
      (**(code **)(*plVar4 + 0x30))();
      plStack_30 = plVar4;
      func_0x0001005035e0(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,&plStack_30);
      plVar3 = plStack_30;
      plStack_30 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    else {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plStack_28 = plVar3;
      func_0x000100c43f50(param_1,*(undefined4 *)(param_2 + 8),&plStack_28);
    }
LAB_100503050:
    plVar3 = plStack_28;
    plStack_28 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  else {
    if (iVar5 < 0xf) {
      if (iVar5 - 0xcU < 2) {
        plVar3 = *(long **)(param_2 + 0x38);
        (**(code **)(*plVar3 + 0x30))();
        plStack_28 = plVar3;
        func_0x000105007ac8(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,param_2 + 0x48);
        goto LAB_100503050;
      }
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      bVar1 = *(byte *)(param_2 + 0x18);
      bVar2 = *(byte *)(param_2 + 0x19);
      *(undefined4 *)(param_1 + 1) = 0xe;
      param_1[2] = uVar6;
      *(byte *)(param_1 + 3) = bVar1;
      *(byte *)((long)param_1 + 0x19) = bVar2;
      *(byte *)((long)param_1 + 0x1a) = bVar2 ^ 1;
      *(byte *)((long)param_1 + 0x1b) = (bVar2 | bVar1) ^ 1;
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      param_1[5] = *(undefined8 *)(param_2 + 0x28);
      param_1[4] = uVar6;
    }
    else {
      if (iVar5 != 0xf) {
        iVar5 = 0x10;
      }
      *(int *)(param_1 + 1) = iVar5;
      *(undefined4 *)(param_1 + 3) = 0x100;
      *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 0x30);
    }
    *param_1 = &PTR_DAT_1108629c8;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[0xd] = 0;
  }
  return;
}



/* Entry: 100503110; end: 10050314b;  */

undefined8 FUN_100503110(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  func_0x000107c60e20(0x70);
  FUN_100503188(uVar1,param_1);
  return uVar1;
}



/* Entry: 10050314c; end: 100503187;  */

undefined8 FUN_10050314c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  func_0x000107c60e20(0x70);
  FUN_100503334(uVar1,param_1);
  return uVar1;
}



/* Entry: 100503188; end: 100503333;  */

void FUN_100503188(undefined8 *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long *plStack_30;
  long *plStack_28;
  
  iVar5 = *(int *)(param_2 + 8);
  if (iVar5 < 0xc) {
    if (iVar5 - 3U < 9) {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plVar4 = *(long **)(param_2 + 0x40);
      plStack_28 = plVar3;
      (**(code **)(*plVar4 + 0x30))();
      plStack_30 = plVar4;
      FUN_1005034e0(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,&plStack_30);
      plVar3 = plStack_30;
      plStack_30 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    else {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plStack_28 = plVar3;
      func_0x000105078444(param_1,*(undefined4 *)(param_2 + 8),&plStack_28);
    }
LAB_100503274:
    plVar3 = plStack_28;
    plStack_28 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  else {
    if (iVar5 < 0xf) {
      if (iVar5 - 0xcU < 2) {
        plVar3 = *(long **)(param_2 + 0x38);
        (**(code **)(*plVar3 + 0x30))();
        plStack_28 = plVar3;
        FUN_100504b28(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,param_2 + 0x48);
        goto LAB_100503274;
      }
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      bVar1 = *(byte *)(param_2 + 0x18);
      bVar2 = *(byte *)(param_2 + 0x19);
      *(undefined4 *)(param_1 + 1) = 0xe;
      param_1[2] = uVar6;
      *(byte *)(param_1 + 3) = bVar1;
      *(byte *)((long)param_1 + 0x19) = bVar2;
      *(byte *)((long)param_1 + 0x1a) = bVar2 ^ 1;
      *(byte *)((long)param_1 + 0x1b) = (bVar2 | bVar1) ^ 1;
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      param_1[5] = *(undefined8 *)(param_2 + 0x28);
      param_1[4] = uVar6;
    }
    else {
      if (iVar5 != 0xf) {
        iVar5 = 0x10;
      }
      *(int *)(param_1 + 1) = iVar5;
      *(undefined4 *)(param_1 + 3) = 0x100;
      *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 0x30);
    }
    *param_1 = &PTR_DAT_110864b38;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[0xd] = 0;
  }
  return;
}



/* Entry: 100503334; end: 1005034df;  */

void FUN_100503334(undefined8 *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long *plStack_30;
  long *plStack_28;
  
  iVar5 = *(int *)(param_2 + 8);
  if (iVar5 < 0xc) {
    if (iVar5 - 3U < 9) {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plVar4 = *(long **)(param_2 + 0x40);
      plStack_28 = plVar3;
      (**(code **)(*plVar4 + 0x30))();
      plStack_30 = plVar4;
      func_0x000105078298(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,&plStack_30);
      plVar3 = plStack_30;
      plStack_30 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    else {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plStack_28 = plVar3;
      func_0x000105078204(param_1,*(undefined4 *)(param_2 + 8),&plStack_28);
    }
LAB_100503420:
    plVar3 = plStack_28;
    plStack_28 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  else {
    if (iVar5 < 0xf) {
      if (iVar5 - 0xcU < 2) {
        plVar3 = *(long **)(param_2 + 0x38);
        (**(code **)(*plVar3 + 0x30))();
        plStack_28 = plVar3;
        func_0x000105078398(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,param_2 + 0x48);
        goto LAB_100503420;
      }
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      bVar1 = *(byte *)(param_2 + 0x18);
      bVar2 = *(byte *)(param_2 + 0x19);
      *(undefined4 *)(param_1 + 1) = 0xe;
      param_1[2] = uVar6;
      *(byte *)(param_1 + 3) = bVar1;
      *(byte *)((long)param_1 + 0x19) = bVar2;
      *(byte *)((long)param_1 + 0x1a) = bVar2 ^ 1;
      *(byte *)((long)param_1 + 0x1b) = (bVar2 | bVar1) ^ 1;
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      param_1[5] = *(undefined8 *)(param_2 + 0x28);
      param_1[4] = uVar6;
    }
    else {
      if (iVar5 != 0xf) {
        iVar5 = 0x10;
      }
      *(int *)(param_1 + 1) = iVar5;
      *(undefined4 *)(param_1 + 3) = 0x100;
      param_1[6] = *(undefined8 *)(param_2 + 0x30);
    }
    *param_1 = &PTR_DAT_110864b98;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[0xd] = 0;
  }
  return;
}



/* Entry: 1005034e0; end: 10050382b;  */

undefined8 * FUN_1005034e0(undefined8 *param_1,int param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  
  lVar2 = *param_3;
  lVar3 = *param_4;
  if ((*(byte *)(lVar2 + 0x19) & 1) == 0) {
    bVar4 = *(byte *)(lVar3 + 0x19);
  }
  else {
    bVar4 = 1;
  }
  if ((*(byte *)(lVar2 + 0x1a) & 1) == 0) {
    bVar5 = *(byte *)(lVar3 + 0x1a);
  }
  else {
    bVar5 = 1;
  }
  if (param_2 == 4) {
    if ((*(byte *)(lVar2 + 0x1b) & 1) == 0) {
      bVar6 = 0;
      goto LAB_10050354c;
    }
  }
  else if ((*(byte *)(lVar2 + 0x1b) & 1) != 0) {
    bVar6 = 1;
    goto LAB_10050354c;
  }
  bVar6 = *(byte *)(lVar3 + 0x1b);
LAB_10050354c:
  *(int *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(byte *)((long)param_1 + 0x19) = bVar4 & 1;
  *(byte *)((long)param_1 + 0x1a) = bVar5 & 1;
  *(byte *)((long)param_1 + 0x1b) = bVar6 & 1;
  *param_1 = &PTR_DAT_110864b38;
  param_1[7] = lVar2;
  param_1[8] = lVar3;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  lVar2 = *param_3;
  *param_3 = 0;
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = lVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  lVar2 = *param_4;
  *param_4 = 0;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = lVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}



/* Entry: 10050382c; end: 10050399b; -[SCUserPropertiesDocRepository deserializeObject:] */

void FUN_10050382c(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x000107c61174(param_3);
  puVar2 = param_3;
  func_0x000107c5dba0();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar4 = (undefined *)0x0;
  uVar1 = (uint)puVar2 & 0xff;
  if (uVar1 < 4) {
    if (uVar1 == 1) {
      puVar2 = param_3;
      func_0x000107c5db7c(param_3);
      func_0x000107c4d94c(puVar3,param_2,puVar2);
      func_0x000107c61180();
      puVar4 = puVar3;
    }
    else if (uVar1 == 2) {
      puVar4 = param_3;
      func_0x000107c5db84(param_3);
      func_0x000107c61180();
    }
    else if (uVar1 == 3) {
      puVar2 = param_3;
      func_0x000107c5db94(param_3);
      func_0x000107c4d968(puVar3,param_2,puVar2);
      func_0x000107c61180();
      puVar4 = puVar3;
    }
  }
  else if (uVar1 < 6) {
    if (uVar1 == 4) {
      puVar2 = param_3;
      func_0x000107c5dba4(param_3);
      func_0x000107c4d978(puVar3,param_2,puVar2);
      func_0x000107c61180();
      puVar4 = puVar3;
    }
    else if (uVar1 == 5) {
      func_0x000107c5db90(param_3);
      func_0x000107c4d958(puVar3);
      func_0x000107c61180();
      puVar4 = puVar3;
    }
  }
  else if (uVar1 == 6) {
    func_0x000107c5db88(param_3);
    func_0x000107c4d954(puVar3);
    func_0x000107c61180();
    puVar4 = puVar3;
  }
  else if (uVar1 == 7) {
    puVar4 = param_3;
    func_0x000107c5db9c(param_3);
    func_0x000107c61180();
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10050399c; end: 1005039ab; -[SCUserProperties valType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10050399c(long param_1)

{
  return (long)*(char *)(param_1 + _DAT_11273317c);
}



/* Entry: 1005039ac; end: 1005039bb; -[SCUserProperties valInt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1005039ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112733184);
}



/* Entry: 1005039bc; end: 100503a0b; -[SCUserProperties .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001005039e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005039e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005039bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112733198,0);
  return;
}



/* Entry: 100503a0c; end: 100503a8b; -[SCFeatureSettingsItemCache updateFeatureSettingWithItemId:value:] */

void FUN_100503a0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_4);
  func_0x000107c611ec(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  func_0x000107c61180();
  func_0x000107c56bd8(uVar2,param_2,param_4,puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x10);
  return;
}



/* Entry: 100503a8c; end: 100503cab; -[SCFeatureSettingsUserPropertiesService _registerUserPropertyKeyUpdateWithKey:queue:] */

/* WARNING: Possible PIC construction at 0x000100503b34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100503c64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100503dc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100503dd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100503c34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100503c44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100503c5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100503c38) */
/* WARNING: Removing unreachable block (ram,0x000100503ddc) */
/* WARNING: Removing unreachable block (ram,0x000100503e20) */
/* WARNING: Removing unreachable block (ram,0x000100503dfc) */
/* WARNING: Removing unreachable block (ram,0x000107c61110) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf288) */
/* WARNING: Removing unreachable block (ram,0x000100503dcc) */
/* WARNING: Removing unreachable block (ram,0x000100503c68) */
/* WARNING: Removing unreachable block (ram,0x000100503ca8) */
/* WARNING: Removing unreachable block (ram,0x000100503d28) */
/* WARNING: Removing unreachable block (ram,0x000100503d34) */
/* WARNING: Removing unreachable block (ram,0x000100503d38) */
/* WARNING: Removing unreachable block (ram,0x000100503d48) */
/* WARNING: Removing unreachable block (ram,0x000100503d50) */
/* WARNING: Removing unreachable block (ram,0x000100503d78) */
/* WARNING: Removing unreachable block (ram,0x000100503d94) */
/* WARNING: Removing unreachable block (ram,0x000100503c88) */
/* WARNING: Removing unreachable block (ram,0x000100503b38) */
/* WARNING: Removing unreachable block (ram,0x000100503b50) */
/* WARNING: Removing unreachable block (ram,0x000100503b44) */
/* WARNING: Removing unreachable block (ram,0x000100503c60) */
/* WARNING: Removing unreachable block (ram,0x000100503c48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100503a8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c611ec(param_1 + _DAT_112722cc4);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + _DAT_112722cc0);
  func_0x000107c4a77c(param_3);
  func_0x000107c4d974(puVar1,param_2,param_3);
  func_0x000107c61180();
  func_0x000107c4d9e8(uVar2,param_2,puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100503cac; end: 100503e23; -[SCUserPropertiesDefaultService observeKeys:queue:changeHandler:] */

/* WARNING: Possible PIC construction at 0x000100503dc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100503dd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100503dcc) */
/* WARNING: Removing unreachable block (ram,0x000100503ddc) */
/* WARNING: Removing unreachable block (ram,0x000100503e20) */
/* WARNING: Removing unreachable block (ram,0x000100503dfc) */
/* WARNING: Removing unreachable block (ram,0x000107c61110) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf288) */

void FUN_100503cac(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar1 = param_3;
  func_0x000107c4080c(param_3,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar1 != 0) {
    lVar4 = *plStack_120;
    do {
      lVar5 = 0;
      do {
        if (*plStack_120 != lVar4) {
          func_0x000107c61128(param_3);
        }
        uVar2 = *(undefined8 *)(lStack_128 + lVar5 * 8);
        uVar3 = *(undefined8 *)(param_1 + 0x30);
        func_0x000107c4a77c(uVar2);
        func_0x000107c50284(uVar3,param_2,uVar2);
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = param_3;
      func_0x000107c4080c(param_3,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar1 != 0);
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  func_0x000107c4da68();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100503e24; end: 100503e7f; -[SCUserPropertiesGrapheneMetricsReporter reportObserveForItemId:] */

void FUN_100503e24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c3850;
  func_0x000107c5c418(PTR_PTR_1126c3850);
  func_0x000107c61180();
  func_0x000107c3c328(param_1,param_2,puVar1,param_3,
                      &PTR____CFConstantStringClassReference_110e26218);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100503e80; end: 100503f2f; -[SCUserPropertiesDocRepository observeKeys:queue:changeHandler:] */

void FUN_100503e80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puVar1 = PTR_PTR_1126c3890;
  func_0x000107c610f4(PTR_PTR_1126c3890);
  func_0x000107c4708c();
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}


