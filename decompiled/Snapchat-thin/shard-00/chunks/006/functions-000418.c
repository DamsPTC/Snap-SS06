/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1008a88d4; end: 1008a8923; -[SCCameraToolbarItemImpl canTapEvent] */

void FUN_1008a88d4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x50);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126ae820;
    func_0x000107c610fc();
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    *(undefined **)(param_1 + 0x50) = puVar1;
    func_0x000107c61170(uVar2);
    lVar3 = *(long *)(param_1 + 0x50);
  }
  func_0x000107c61174(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1008a8924; end: 1008a89c3; +[SCDocObjectFetchedResultObserver fetchedResultObserverForDocObjectContext:observationQueue:lazyFetchedResult:mappers:] */

void FUN_1008a8924(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c610f4(param_1);
  func_0x000107c46668();
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1008a89c4; end: 1008a8adf; -[SCDocObjectFetchedResultObserver initWithDocObjectContext:observerCallBackQueue:lazyFetchedResult:mappers:] */

undefined1 *
FUN_1008a89c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_1126fdf40;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_6;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = 0;
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1008a8ae0; end: 1008a8bdf; -[SCSnapchattersBlockedSnapchatterProvider blockedSnapchattersWithCompletionQueue:completionHandler:] */

void FUN_1008a8ae0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61144(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x1008a926c;
  puStack_58 = &UNK_110848378;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c61174(param_3);
  uStack_50 = param_3;
  func_0x000107c61174(param_4);
  uStack_48 = param_4;
  FUN_1008a8be0(uVar1,&puStack_70);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1008a8be0; end: 1008a8c37;  */

/* WARNING: Possible PIC construction at 0x0001008a8c24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008a8c28) */

void FUN_1008a8be0(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c612b0();
  func_0x000107c4e5f8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1008a8c38; end: 1008a8c3f; -[SCQueuePerformer performWithQoS:block:] */

void FUN_1008a8c38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be72e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__performWithQoS_block_relativePr_11257a540,param_3,param_4,0);
  return;
}



/* Entry: 1008a8c40; end: 1008a8caf; -[SCQueuePerformer _performWithQoS:block:relativePriority:] */

/* WARNING: Possible PIC construction at 0x0001008a8c8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008a8c90) */

void FUN_1008a8c40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c3becc(param_1,param_2,param_4);
  func_0x000107c61180();
  FUN_1000c5568(0x20,param_3,param_5,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1008a8cb0; end: 1008a8cb7;  */

void FUN_1008a8cb0(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61174();
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar3 != 0) {
    FUN_1008a8d44(0);
    func_0x000107c613fc();
    uVar4 = uVar2;
    FUN_1008a8d64(uVar2,lVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(lVar3);
    *param_1 = uVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008a8d44);
  (*pcVar1)();
}



/* Entry: 1008a8cb8; end: 1008a8d43;  */

void FUN_1008a8cb8(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  lVar3 = *(long *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar3 != 0) {
    FUN_1008a8d44(0);
    func_0x000107c613fc();
    uVar4 = uVar2;
    FUN_1008a8d64(uVar2,lVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(lVar3);
    *param_1 = uVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008a8d44);
  (*pcVar1)();
}



/* Entry: 1008a8d44; end: 1008a8d63;  */

void FUN_1008a8d44(void)

{
  func_0x000107c61168(&PTR_PTR_112e5eae8);
  return;
}



/* Entry: 1008a8d64; end: 1008a8f1f;  */

void FUN_1008a8d64(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5ffd8();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5ffc4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar7 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  uVar4 = 0;
  FUN_1000295c4();
  uStack_70 = uVar4;
  func_0x000107c61174(param_1);
  func_0x000107c615f0(param_2);
  func_0x000107c5f81c(lVar3);
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100029608();
  uVar4 = 0x112d4ac70;
  FUN_1000285a8(0x112d4ac70,&UNK_10d911480);
  uVar5 = uVar4;
  func_0x00010002964c();
  func_0x000107c60264(lVar7,&puStack_68,uVar4,uVar5,lVar2,param_2);
  (**(code **)(lVar8 + 0x68))
            (lVar6,*(undefined4 *)
                    PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
             ,lVar1);
  uVar4 = 0xd000000000000024;
  func_0x000107c5ffec(0xd000000000000024,0x800000010f068870,lVar3,lVar7,lVar6,0);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar4;
  return;
}



/* Entry: 1008a8f20; end: 1008a8f47; -[_TtC38SCCommunitiesMemberRankingJobProcessor40CommunitiesMemberRankingJobSchedulerImpl scheduleJob] */

void FUN_1008a8f20(undefined8 param_1)

{
  func_0x000107c6157c();
  FUN_1008a8f48();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1008a8f48; end: 1008a90a3;  */

/* WARNING: Possible PIC construction at 0x0001008a8fb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a8fe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a902c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008a9060: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008a9030) */
/* WARNING: Removing unreachable block (ram,0x0001008a8fe8) */
/* WARNING: Removing unreachable block (ram,0x0001008a8fb4) */
/* WARNING: Removing unreachable block (ram,0x0001008a9064) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008a8f48(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_11307e6a8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b7228;
    func_0x000107c610f8(PTR_PTR_1126b7228);
    func_0x000107c453e4();
    puVar3 = puVar2;
    func_0x0001008a9ac0();
    func_0x000107c55958(puVar2,param_2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 1008a90a4; end: 1008a90ab;  */

void FUN_1008a90a4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = uStack_38;
  func_0x000107c3fa3c(uStack_38);
  FUN_100083b20(&uStack_38);
  func_0x000107c5a320(uVar1);
  func_0x000107c61170(uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1008a90ac; end: 1008a911b;  */

void FUN_1008a90ac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c3fa3c(uStack_38);
  FUN_100083b20(&uStack_38);
  func_0x000107c5a320(uVar1);
  func_0x000107c61170(uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1008a911c; end: 1008a91c3; -[SCJobSchedulerImplementation cleanUserJobProviders] */

void FUN_1008a911c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000107c61144(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c4e524(uVar1);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
  return;
}



/* Entry: 1008a91c4; end: 1008a91cb; -[SCJobSchedulerImplementation setUserDocObjectContext:] */

void FUN_1008a91c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c21e390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setUserDocObjectContext__112665308);
  return;
}



/* Entry: 1008a91cc; end: 1008a91d7; -[SCJobQueue setUserDocObjectContext:] */

void FUN_1008a91cc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 1008a91d8; end: 1008a9203;  */

void FUN_1008a91d8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008a9204; end: 1008a929f; +[JobConfig descriptor] */

void FUN_1008a9204(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7450 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c78c50,
                        &PTR____CFConstantStringClassReference_110f67938,&PTR_DAT_1133b8088,
                        &PTR_DAT_1133b82e0,10,0x40,0x1c);
    puRam00000001137f7450 = puVar1;
  }
  return;
}



/* Entry: 1008a92a0; end: 1008a93a3; -[SCSnapchattersBlockedSnapchatterProvider _fetchAndObserveBlockedSnapchattersWithCompletionQueue:completionHandler:] */

void FUN_1008a92a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c3eb24();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c5b468();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c3e1b8();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1008aae38;
  puStack_58 = &UNK_11084aaa8;
  uStack_50 = uVar2;
  uStack_48 = param_4;
  func_0x000107c61174(uVar2);
  func_0x000107c61174(param_4);
  FUN_10007380c(param_3,&puStack_70);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 1008a93a4; end: 1008a93db; -[SCSnapchattersBlockedSnapchatterProvider blockedSnapchattersObserver] */

void FUN_1008a93a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c3e7c4(*(undefined8 *)(param_1 + 0x10),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1008a93dc; end: 1008a93e3; -[SCSnapchattersFetchedResultObserver beginObservationWithStartupGuard:] */

void FUN_1008a93dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24f790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_startObservationIfNecessary_112671808);
  return;
}



/* Entry: 1008a93e4; end: 1008a940f;  */

void FUN_1008a93e4(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c3b098();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1008a9410; end: 1008a959f; -[SCDocObjectFetchedResultObserver startObservationIfNecessary] */

void FUN_1008a9410(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c611ec(param_1 + 0x28);
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    func_0x000107c5c734(uVar1);
    func_0x000107c61180();
    func_0x000107c3c568(param_1);
    func_0x000107c3cba0(param_1);
    func_0x000107c61144(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    if (*(long *)(param_1 + 0x38) == 0) {
      puVar4 = auStack_78;
      func_0x000107c6111c(puVar4,auStack_48);
      func_0x000107c5d374();
      func_0x000107c61180();
    }
    else {
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      puStack_60 = &UNK_108c7fbd4;
      puStack_58 = &UNK_1108634b8;
      puVar4 = auStack_50;
      func_0x000107c6111c(puVar4,auStack_48);
      func_0x000107c4da54();
      func_0x000107c61180();
    }
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61120(puVar4);
    func_0x000107c61120(auStack_48);
    func_0x000107c61170(uVar1);
  }
  func_0x000107c611f0(param_1 + 0x28);
  return;
}



/* Entry: 1008a95a0; end: 1008a95b7;  */

void FUN_1008a95a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001008a95ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1008a95b8; end: 1008a979b;  */

void FUN_1008a95b8(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined4 uStack_194;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined4 uStack_170;
  undefined4 uStack_160;
  undefined1 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined1 uStack_101;
  undefined **ppuStack_100;
  undefined4 uStack_f8;
  undefined2 uStack_e8;
  undefined1 uStack_e6;
  undefined1 uStack_e5;
  undefined1 *puStack_c8;
  undefined ***pppuStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  func_0x000107c61174();
  func_0x000107c61158(PTR_PTR_1126b15c8);
  if (param_1 == 0) {
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x000107c430a4(&uStack_90,param_1);
  }
  puVar2 = &uStack_101;
  FUN_1008a97dc();
  uStack_170 = 0xf;
  uStack_160 = 0x100;
  uStack_148 = 1;
  uStack_180 = 0;
  ppuStack_178 = &PTR_DAT_1108629c8;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  lStack_130 = 0;
  plStack_118 = (long *)0x0;
  uStack_120 = 0;
  plStack_110 = (long *)0x0;
  uStack_e6 = puVar2[0x1a];
  uStack_e5 = puVar2[0x1b];
  uStack_f8 = 10;
  uStack_e8 = 0x100;
  ppuStack_100 = &PTR_DAT_1108629c8;
  plStack_98 = (long *)0x0;
  uStack_b0 = 0;
  lStack_b8 = 0;
  plStack_a0 = (long *)0x0;
  uStack_a8 = 0;
  lStack_190 = 0;
  lStack_188 = 0;
  uStack_194 = 0;
  puVar3 = &uStack_90;
  puStack_c8 = puVar2;
  pppuStack_c0 = &ppuStack_178;
  FUN_1000e77a0(puVar3,&ppuStack_100,&lStack_190,&uStack_194);
  func_0x000107c61180();
  if (lStack_190 != 0) {
    lStack_188 = lStack_190;
    func_0x000107c60e14();
  }
  plVar1 = plStack_98;
  ppuStack_100 = &PTR_DAT_1108629c8;
  plStack_98 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_a0;
  plStack_a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_b8 != 0) {
    func_0x000107c60e14();
  }
  plVar1 = plStack_110;
  ppuStack_178 = &PTR_DAT_1108629c8;
  plStack_110 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_118;
  plStack_118 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_130 != 0) {
    func_0x000107c60e14();
  }
  FUN_1000e76e0(&uStack_68);
  func_0x000107c61170(uStack_78);
  func_0x000107c61170(uStack_80);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1008a979c; end: 1008a97cb; -[SCJobSchedulerImplementation _clearUserJobProviders] */

void FUN_1008a979c(long param_1)

{
  func_0x000107c3fb24(*(undefined8 *)(param_1 + 0x10));
  func_0x000107c5d9d0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010beaac70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupBackgroundObserverIfNecess_1125884c0);
  return;
}



/* Entry: 1008a97cc; end: 1008a97db; -[SCJobExecutor clearUserJobProviders] */

void FUN_1008a97cc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1008a97dc; end: 1008a9897;  */

undefined8 FUN_1008a97dc(void)

{
  int iVar1;
  
  if ((bRam0000000113828ce0 & 1) == 0) {
    iVar1 = 0x13828ce0;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uRam0000000113828c78 = 0xe;
      puRam0000000113828c80 = &UNK_10f50bf95;
      uRam0000000113828c88 = 0x1010000;
      pcRam0000000113828c90 = FUN_1008aa774;
      puRam0000000113828c98 = &UNK_100c548f8;
      ppuRam0000000113828c70 = &PTR_DAT_1108629c8;
      uRam0000000113828cb0 = 0;
      uRam0000000113828ca8 = 0;
      uRam0000000113828cc0 = 0;
      uRam0000000113828cb8 = 0;
      uRam0000000113828cd0 = 0;
      uRam0000000113828cc8 = 0;
      uRam0000000113828cd8 = 0;
      func_0x000107c60e34(&DAT_105007830,0x113828c70,0x100000000);
      func_0x000107c60e4c(0x113828ce0);
    }
  }
  return 0x113828c70;
}



/* Entry: 1008a9898; end: 1008a989b; -[SCJobSchedulingCoordinator userJobProvidersDidChange] */

void FUN_1008a9898(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9b9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__scheduleUserJobs_112584810);
  return;
}



/* Entry: 1008a989c; end: 1008a991f; -[SCJobSchedulerImplementation _setupBackgroundObserverIfNecessary] */

void FUN_1008a989c(long param_1)

{
  ulong uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x000107c5ac84();
  if ((uVar1 & 1) == 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    puStack_38 = &UNK_106cb9b3c;
    puStack_30 = &UNK_110842e18;
    if (lRam00000001136c7d30 != -1) {
      lStack_28 = param_1;
      FUN_10002a2fc(0x1136c7d30,&puStack_48);
    }
  }
  return;
}



/* Entry: 1008a9920; end: 1008a993f; -[SCJobExecutor shouldPostponeAnyJob] */

bool FUN_1008a9920(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    return *(long *)(param_1 + 0x10) == 0;
  }
  return true;
}



/* Entry: 1008a9940; end: 1008a994b; +[SCSnapchatter table] */

undefined * FUN_1008a9940(void)

{
  return &DAT_10f31d310;
}



/* Entry: 1008a994c; end: 1008a9b67;  */

undefined * FUN_1008a994c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f73f8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x000107c3dbd4(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f677f8,
                        &UNK_10e5d2518,&UNK_10e5d2534,2,FUN_1009078d0,0);
    do {
      if (puRam00000001137f73f8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        func_0x000107c61170();
        return puRam00000001137f73f8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f73f8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f73f8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f73f8;
}



/* Entry: 1008a9b68; end: 1008a9edf; +[JobConstraint descriptor] */

undefined * FUN_1008a9b68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7470 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c78d90,
                        &PTR____CFConstantStringClassReference_110f67998,&PTR_DAT_1133b8088,
                        &PTR_DAT_1133b8200,7,0x28,0x1c);
    func_0x000107c5a894();
    puRam00000001137f7470 = puVar1;
  }
  return puRam00000001137f7470;
}



/* Entry: 1008a9ee0; end: 1008a9f07; -[GPBEnumArray addValue:] */

void FUN_1008a9ee0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uStack_14;
  
  uStack_14 = param_3;
  func_0x000107c3d940(param_1,param_2,&uStack_14,1);
  return;
}



/* Entry: 1008a9f08; end: 1008a9f13;  */

bool FUN_1008a9f08(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 1008a9f14; end: 1008aa027; -[GPBEnumArray addValues:count:] */

void FUN_1008a9f14(long param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    lVar11 = 0;
    pcVar12 = *(code **)(param_1 + 0x10);
    do {
      uVar5 = (ulong)*(uint *)(param_3 + lVar11 * 4);
      (*pcVar12)();
      puVar3 = PTR__OBJC_CLASS___NSException_1126af520;
      if ((uVar5 & 1) == 0) {
        func_0x000107c61158();
        func_0x000107c4f87c(puVar3);
      }
      lVar11 = lVar11 + 1;
    } while (param_4 != lVar11);
    lVar11 = *(long *)(param_1 + 0x20);
    uVar5 = lVar11 + param_4;
    if (*(ulong *)(param_1 + 0x28) < uVar5) {
      func_0x000107c498c8(param_1);
    }
    *(ulong *)(param_1 + 0x20) = uVar5;
    func_0x000107c610b4(*(long *)(param_1 + 0x18) + lVar11 * 4,param_3,param_4 << 2);
    lVar11 = *(long *)(param_1 + 8);
    if (lVar11 != 0) {
      lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar4 = lVar11;
      func_0x000107c61158();
      func_0x000107c41800();
      lVar8 = *(long *)(lVar4 + 8);
      lVar4 = lVar8;
      func_0x000107c4080c();
      lVar2 = lRam0000000000000000;
      do {
        if (lVar4 == 0) {
LAB_10060c364:
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
            return;
          }
          func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)();
          return;
        }
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            func_0x000107c61128(lVar8);
          }
          lVar9 = *(long *)(lVar10 * 8);
          lVar7 = lVar9;
          func_0x000107c433d8();
          if ((int)lVar7 == 1) {
            lVar7 = 0;
            if (*(long *)(lVar11 + 0x40) != 0) {
              lVar7 = *(long *)(*(long *)(lVar11 + 0x40) +
                               (ulong)*(uint *)(*(long *)(lVar9 + 8) + 0x18));
            }
            if (lVar7 == param_1) {
              piVar1 = (int *)&DAT_112796b30;
              if (3 < *(byte *)(*(long *)(lVar9 + 8) + 0x1e) - 0xd) {
                piVar1 = (int *)&DAT_112796b34;
              }
              *(undefined8 *)(param_1 + *piVar1) = 0;
              FUN_100109ff0(lVar11);
              goto LAB_10060c364;
            }
          }
          lVar10 = lVar10 + 1;
        } while (lVar4 != lVar10);
        lVar4 = lVar8;
        func_0x000107c4080c();
      } while( true );
    }
  }
  return;
}



/* Entry: 1008aa028; end: 1008aa09b; -[GPBEnumArray internalResizeToCapacity:] */

void FUN_1008aa028(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x000107c612c8(lVar1,param_3 << 2);
  *(long *)(param_1 + 0x18) = lVar1;
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    func_0x000107c4f87c(PTR__OBJC_CLASS___NSException_1126af520);
  }
  *(long *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 1008aa09c; end: 1008aa0d7;  */

bool FUN_1008aa09c(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 1008aa0d8; end: 1008aa1bb; +[Retry descriptor] */

void FUN_1008aa0d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7468 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c78d40,
                        &PTR____CFConstantStringClassReference_110e4d7f8,&PTR_DAT_1133b8088,
                        &PTR_DAT_1133b8180,4,0x14,0x1c);
    puRam00000001137f7468 = puVar1;
  }
  return;
}



/* Entry: 1008aa1bc; end: 1008aa1cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008aa1bc(long param_1,long param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  lVar11 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  if (lVar6 != 0) {
    FUN_10010cd00(param_2,lVar6,*(undefined4 *)(lVar11 + 0x14),*(undefined4 *)(lVar11 + 0x10));
  }
  lVar6 = *(long *)(param_2 + 0x40);
  *(int *)(lVar6 + (ulong)*(uint *)(lVar11 + 0x18)) = param_3;
  if (param_3 == 0) {
    uVar7 = *(uint *)(lVar11 + 0x14);
    if ((int)uVar7 < 0) {
      uVar8 = *(undefined4 *)(lVar11 + 0x10);
      if ((*(ushort *)(lVar11 + 0x1c) & 0x20) != 0) {
        uVar8 = 0;
      }
      goto LAB_1008aa268;
    }
    uVar9 = (ulong)(uVar7 >> 5);
    uVar7 = 1 << (ulong)(uVar7 & 0x1f);
    if ((*(ushort *)(lVar11 + 0x1c) >> 5 & 1) != 0) {
      *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) & (uVar7 ^ 0xffffffff);
      goto FUN_100109ff0;
    }
  }
  else {
    uVar7 = *(uint *)(lVar11 + 0x14);
    if ((int)uVar7 < 0) {
      uVar8 = *(undefined4 *)(lVar11 + 0x10);
LAB_1008aa268:
      *(undefined4 *)(lVar6 + (ulong)-uVar7 * 4) = uVar8;
      goto FUN_100109ff0;
    }
    uVar9 = (ulong)(uVar7 >> 5);
    uVar7 = 1 << (ulong)(uVar7 & 0x1f);
  }
  *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) | uVar7;
FUN_100109ff0:
  do {
    lVar6 = *(long *)(param_2 + 0x20);
    if (lVar6 == 0) {
      return;
    }
    lVar11 = *(long *)(param_2 + 0x28);
    if (lVar11 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1992f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (lVar6,PTR_s_setExtension_value__112643ed8,*(undefined8 *)(param_2 + 0x30));
      return;
    }
    func_0x000107c61174();
    lVar10 = *(long *)(lVar11 + 8);
    bVar1 = *(byte *)(lVar10 + 0x1e);
    uVar2 = *(ushort *)(lVar10 + 0x1c);
    if ((uVar2 & 0xf02) != 0) goto code_r0x000100109e38;
    if (*(long *)(lVar11 + 0x10) != 0) {
      FUN_10010cd00(lVar6,*(long *)(lVar11 + 0x10),*(undefined4 *)(lVar10 + 0x14),
                    *(undefined4 *)(lVar10 + 0x10));
      uVar2 = *(ushort *)(lVar10 + 0x1c);
    }
    if (((uVar2 >> 5 & 1) == 0) || (lVar11 = param_2, func_0x000107c4adac(), lVar11 != 0)) {
      uVar7 = *(uint *)(lVar10 + 0x14);
      lVar11 = *(long *)(lVar6 + 0x40);
      if ((int)uVar7 < 0) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = *(undefined4 *)(lVar10 + 0x10);
        }
        goto LAB_100109f58;
      }
      uVar9 = (ulong)(uVar7 >> 5);
      uVar7 = 1 << (ulong)(uVar7 & 0x1f);
      if (param_2 == 0) goto LAB_100109f84;
      *(uint *)(lVar11 + uVar9 * 4) = *(uint *)(lVar11 + uVar9 * 4) | uVar7;
    }
    else {
      func_0x000107c61170(param_2);
      uVar7 = *(uint *)(lVar10 + 0x14);
      lVar11 = *(long *)(lVar6 + 0x40);
      if ((int)uVar7 < 0) {
        param_2 = 0;
        uVar8 = 0;
LAB_100109f58:
        *(undefined4 *)(lVar11 + (ulong)-uVar7 * 4) = uVar8;
      }
      else {
        uVar9 = (ulong)(uVar7 >> 5);
        uVar7 = 1 << (ulong)(uVar7 & 0x1f);
LAB_100109f84:
        param_2 = 0;
        *(uint *)(lVar11 + uVar9 * 4) = *(uint *)(lVar11 + uVar9 * 4) & (uVar7 ^ 0xffffffff);
      }
    }
    uVar9 = *(ulong *)(lVar11 + (ulong)*(uint *)(lVar10 + 0x18));
    *(long *)(lVar11 + (ulong)*(uint *)(lVar10 + 0x18)) = param_2;
    param_2 = lVar6;
  } while (uVar9 == 0);
  if ((bVar1 - 0xf < 2) && (*(long *)(uVar9 + 0x20) == lVar6)) {
    func_0x00010029a5f8(uVar9);
  }
  goto LAB_100109fc4;
code_r0x000100109e38:
  uVar9 = *(ulong *)(*(long *)(lVar6 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18));
  *(long *)(*(long *)(lVar6 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18)) = param_2;
  param_2 = lVar6;
  if (uVar9 == 0) goto FUN_100109ff0;
  lVar10 = lVar11;
  func_0x000107c433d8();
  uVar5 = uVar9;
  if ((int)lVar10 == 1) {
    if (3 < bVar1 - 0xd) {
LAB_100109f38:
      if (*(long *)(uVar9 + 8) == lVar6) {
        *(undefined8 *)(uVar9 + 8) = 0;
      }
      goto LAB_100109fc4;
    }
    puVar4 = PTR_PTR_1126e3228;
    func_0x000107c61158(PTR_PTR_1126e3228);
    func_0x000107c6115c(uVar9,puVar4);
    iVar3 = _DAT_112796b30;
  }
  else {
    func_0x000107c4c354();
    if (((int)lVar11 != 0xe) || (3 < bVar1 - 0xd)) goto LAB_100109f38;
    puVar4 = PTR_PTR_1126e3230;
    func_0x000107c61158(PTR_PTR_1126e3230);
    func_0x000107c6115c(uVar9,puVar4);
    iVar3 = _DAT_112796db0;
  }
  if (((uVar5 & 1) != 0) && (*(long *)(uVar9 + (long)iVar3) == lVar6)) {
    *(undefined8 *)(uVar9 + (long)iVar3) = 0;
  }
LAB_100109fc4:
  func_0x000107c61170(uVar9);
  param_2 = lVar6;
  goto FUN_100109ff0;
}



/* Entry: 1008aa1cc; end: 1008aa293;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008aa1cc(long param_1,long param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  lVar11 = *(long *)(param_2 + 8);
  if (*(long *)(param_2 + 0x10) != 0) {
    FUN_10010cd00(param_1,*(long *)(param_2 + 0x10),*(undefined4 *)(lVar11 + 0x14),
                  *(undefined4 *)(lVar11 + 0x10));
  }
  lVar6 = *(long *)(param_1 + 0x40);
  *(int *)(lVar6 + (ulong)*(uint *)(lVar11 + 0x18)) = param_3;
  if (param_3 == 0) {
    uVar7 = *(uint *)(lVar11 + 0x14);
    if ((int)uVar7 < 0) {
      uVar8 = *(undefined4 *)(lVar11 + 0x10);
      if ((*(ushort *)(lVar11 + 0x1c) & 0x20) != 0) {
        uVar8 = 0;
      }
      goto LAB_1008aa268;
    }
    uVar9 = (ulong)(uVar7 >> 5);
    uVar7 = 1 << (ulong)(uVar7 & 0x1f);
    if ((*(ushort *)(lVar11 + 0x1c) >> 5 & 1) != 0) {
      *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) & (uVar7 ^ 0xffffffff);
      goto FUN_100109ff0;
    }
  }
  else {
    uVar7 = *(uint *)(lVar11 + 0x14);
    if ((int)uVar7 < 0) {
      uVar8 = *(undefined4 *)(lVar11 + 0x10);
LAB_1008aa268:
      *(undefined4 *)(lVar6 + (ulong)-uVar7 * 4) = uVar8;
      goto FUN_100109ff0;
    }
    uVar9 = (ulong)(uVar7 >> 5);
    uVar7 = 1 << (ulong)(uVar7 & 0x1f);
  }
  *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) | uVar7;
FUN_100109ff0:
  do {
    lVar11 = *(long *)(param_1 + 0x20);
    if (lVar11 == 0) {
      return;
    }
    lVar6 = *(long *)(param_1 + 0x28);
    if (lVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1992f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (lVar11,PTR_s_setExtension_value__112643ed8,*(undefined8 *)(param_1 + 0x30));
      return;
    }
    func_0x000107c61174();
    lVar10 = *(long *)(lVar6 + 8);
    bVar1 = *(byte *)(lVar10 + 0x1e);
    uVar2 = *(ushort *)(lVar10 + 0x1c);
    if ((uVar2 & 0xf02) != 0) goto code_r0x000100109e38;
    if (*(long *)(lVar6 + 0x10) != 0) {
      FUN_10010cd00(lVar11,*(long *)(lVar6 + 0x10),*(undefined4 *)(lVar10 + 0x14),
                    *(undefined4 *)(lVar10 + 0x10));
      uVar2 = *(ushort *)(lVar10 + 0x1c);
    }
    if (((uVar2 >> 5 & 1) == 0) || (lVar6 = param_1, func_0x000107c4adac(), lVar6 != 0)) {
      uVar7 = *(uint *)(lVar10 + 0x14);
      lVar6 = *(long *)(lVar11 + 0x40);
      if ((int)uVar7 < 0) {
        uVar8 = 0;
        if (param_1 != 0) {
          uVar8 = *(undefined4 *)(lVar10 + 0x10);
        }
        goto LAB_100109f58;
      }
      uVar9 = (ulong)(uVar7 >> 5);
      uVar7 = 1 << (ulong)(uVar7 & 0x1f);
      if (param_1 == 0) goto LAB_100109f84;
      *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) | uVar7;
    }
    else {
      func_0x000107c61170(param_1);
      uVar7 = *(uint *)(lVar10 + 0x14);
      lVar6 = *(long *)(lVar11 + 0x40);
      if ((int)uVar7 < 0) {
        param_1 = 0;
        uVar8 = 0;
LAB_100109f58:
        *(undefined4 *)(lVar6 + (ulong)-uVar7 * 4) = uVar8;
      }
      else {
        uVar9 = (ulong)(uVar7 >> 5);
        uVar7 = 1 << (ulong)(uVar7 & 0x1f);
LAB_100109f84:
        param_1 = 0;
        *(uint *)(lVar6 + uVar9 * 4) = *(uint *)(lVar6 + uVar9 * 4) & (uVar7 ^ 0xffffffff);
      }
    }
    uVar9 = *(ulong *)(lVar6 + (ulong)*(uint *)(lVar10 + 0x18));
    *(long *)(lVar6 + (ulong)*(uint *)(lVar10 + 0x18)) = param_1;
    param_1 = lVar11;
  } while (uVar9 == 0);
  if ((bVar1 - 0xf < 2) && (*(long *)(uVar9 + 0x20) == lVar11)) {
    func_0x00010029a5f8(uVar9);
  }
  goto LAB_100109fc4;
code_r0x000100109e38:
  uVar9 = *(ulong *)(*(long *)(lVar11 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18));
  *(long *)(*(long *)(lVar11 + 0x40) + (ulong)*(uint *)(lVar10 + 0x18)) = param_1;
  param_1 = lVar11;
  if (uVar9 == 0) goto FUN_100109ff0;
  lVar10 = lVar6;
  func_0x000107c433d8();
  uVar5 = uVar9;
  if ((int)lVar10 == 1) {
    if (3 < bVar1 - 0xd) {
LAB_100109f38:
      if (*(long *)(uVar9 + 8) == lVar11) {
        *(undefined8 *)(uVar9 + 8) = 0;
      }
      goto LAB_100109fc4;
    }
    puVar4 = PTR_PTR_1126e3228;
    func_0x000107c61158(PTR_PTR_1126e3228);
    func_0x000107c6115c(uVar9,puVar4);
    iVar3 = _DAT_112796b30;
  }
  else {
    func_0x000107c4c354();
    if (((int)lVar6 != 0xe) || (3 < bVar1 - 0xd)) goto LAB_100109f38;
    puVar4 = PTR_PTR_1126e3230;
    func_0x000107c61158(PTR_PTR_1126e3230);
    func_0x000107c6115c(uVar9,puVar4);
    iVar3 = _DAT_112796db0;
  }
  if (((uVar5 & 1) != 0) && (*(long *)(uVar9 + (long)iVar3) == lVar11)) {
    *(undefined8 *)(uVar9 + (long)iVar3) = 0;
  }
LAB_100109fc4:
  func_0x000107c61170(uVar9);
  param_1 = lVar11;
  goto FUN_100109ff0;
}



/* Entry: 1008aa294; end: 1008aa3cf;  */

undefined1  [16] FUN_1008aa294(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long extraout_x8;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  long alStack_80 [4];
  undefined1 auStack_60 [8];
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = 0;
  func_0x000107c5eec8();
  lVar8 = *(long *)(lVar2 + -8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_60 + lVar1;
  func_0x000107c5eec4(puVar6);
  func_0x000107c5eec0();
  (**(code **)(lVar8 + 8))(puVar6,lVar2);
  uStack_58 = (undefined1)lVar3;
  uStack_57 = (undefined1)((ulong)lVar3 >> 8);
  uStack_56 = (undefined1)((ulong)lVar3 >> 0x10);
  uStack_55 = (undefined1)((ulong)lVar3 >> 0x18);
  uStack_54 = (undefined1)((ulong)lVar3 >> 0x20);
  uStack_53 = (undefined1)((ulong)lVar3 >> 0x28);
  uStack_52 = (undefined1)((ulong)lVar3 >> 0x30);
  uStack_51 = (undefined1)((ulong)lVar3 >> 0x38);
  uStack_50 = (undefined1)param_2;
  uStack_4f = (undefined1)((ulong)param_2 >> 8);
  uStack_4e = (undefined1)((ulong)param_2 >> 0x10);
  uStack_4d = (undefined1)((ulong)param_2 >> 0x18);
  uStack_4c = (undefined1)((ulong)param_2 >> 0x20);
  uStack_4b = (undefined1)((ulong)param_2 >> 0x28);
  uStack_4a = (undefined1)((ulong)param_2 >> 0x30);
  uStack_49 = (undefined1)((ulong)param_2 >> 0x38);
  puVar4 = &uStack_58;
  uVar7 = 0x10;
  FUN_1008aa3d0(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar9._8_8_ = uVar7;
    auVar9._0_8_ = puVar4;
    return auVar9;
  }
  func_0x000107c60e78();
  if (uVar7 != 0) {
    *(undefined1 **)((long)alStack_80 + lVar1) = puVar6;
    *(undefined8 *)((long)alStack_80 + lVar1 + 8) = param_2;
    *(undefined1 **)((long)alStack_80 + lVar1 + 0x10) = &stack0xfffffffffffffff0;
    *(code **)((long)alStack_80 + lVar1 + 0x18) = FUN_1008aa3d0;
    if (uVar7 < 0xf) {
      puVar6 = puVar4 + uVar7;
      func_0x000100e36f4c();
      uVar7 = (ulong)puVar6 & 0xffffffffffffff;
      puVar6 = puVar4;
    }
    else {
      uVar5 = 0;
      func_0x000107c5ec40();
      func_0x000107c613fc();
      func_0x000107c5ec2c(puVar4,uVar7,uVar5);
      if (uVar7 < 0x7fffffff) {
        puVar6 = (undefined1 *)(uVar7 << 0x20);
        uVar7 = (ulong)puVar4 | 0x4000000000000000;
      }
      else {
        puVar6 = (undefined1 *)0x0;
        func_0x000107c5ee0c();
        func_0x000107c613fc();
        *(undefined8 *)(puVar6 + 0x10) = 0;
        *(ulong *)(puVar6 + 0x18) = uVar7;
        uVar7 = (ulong)puVar4 | 0x8000000000000000;
      }
    }
    auVar10._8_8_ = uVar7;
    auVar10._0_8_ = puVar6;
    return auVar10;
  }
  return ZEXT816(0xc000000000000000) << 0x40;
}



/* Entry: 1008aa3d0; end: 1008aa477;  */

undefined1  [16] FUN_1008aa3d0(ulong param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  if (param_2 != 0) {
    if (param_2 < 0xf) {
      param_2 = param_1 + param_2;
      func_0x000100e36f4c(param_1,param_2);
      param_2 = param_2 & 0xffffffffffffff;
      uVar2 = param_1;
    }
    else {
      uVar1 = 0;
      func_0x000107c5ec40();
      func_0x000107c613fc();
      func_0x000107c5ec2c(param_1,param_2,uVar1);
      if (param_2 < 0x7fffffff) {
        uVar2 = param_2 << 0x20;
        param_2 = param_1 | 0x4000000000000000;
      }
      else {
        uVar2 = 0;
        func_0x000107c5ee0c();
        func_0x000107c613fc();
        *(undefined8 *)(uVar2 + 0x10) = 0;
        *(ulong *)(uVar2 + 0x18) = param_2;
        param_2 = param_1 | 0x8000000000000000;
      }
    }
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = uVar2;
    return auVar3;
  }
  return ZEXT816(0xc000000000000000) << 0x40;
}



/* Entry: 1008aa478; end: 1008aa6af; -[SCJobSchedulerImplementation submitJobWithInput:jobConfig:queue:onComplete:] */

void FUN_1008aa478(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61144(auStack_68,param_1);
  puVar2 = PTR_PTR_1126b6bc0;
  puVar3 = PTR_PTR_1126ae960;
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  puVar1 = PTR_PTR_1126cebd0;
  func_0x000107c5c2c4(PTR_PTR_1126cebd0);
  func_0x000107c61180();
  func_0x000107c4a828(puVar2);
  func_0x000107c61180();
  func_0x000107c5e8c4(puVar3);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae970;
  func_0x000107c44e60(PTR_PTR_1126ae970);
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c4f7c0(uVar5);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_70,auStack_68);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c5e094(uVar6);
  func_0x000107c611b0();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_68);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1008aa6b0; end: 1008aa6b7; +[SCAttributedJobSchedulerSubtask submitJobs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008aa6b0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309be78) = 3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1008aa6b8; end: 1008aa707;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008aa6b8(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309be78) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1008aa708; end: 1008aa773; +[SCAttributedWorkSchedulingTask jobScheduler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008aa708(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_11309be68) = 1;
  *(undefined8 *)(lVar2 + _DAT_11309be70) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1008aa774; end: 1008aa867;  */

bool FUN_1008aa774(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((0x14 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[10], uVar2 != 0)) {
    return *(char *)((long)piVar1 + uVar2) != '\0';
  }
  return false;
}



/* Entry: 1008aa868; end: 1008aa8a7; -[SCDocObjectFetchedResultObserver _setDocObjectFetchedResult:] */

void FUN_1008aa868(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c611ec(param_1 + 0x2c);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x2c);
  return;
}



/* Entry: 1008aa8a8; end: 1008aaa3b; -[SCDocObjectFetchedResultObserver _updateCachedResultAndMappers] */

void FUN_1008aa8a8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  func_0x000107c3b82c();
  func_0x000107c61180();
  func_0x000107c611e8(param_1 + 0x28);
  if (lVar2 != *(long *)(param_1 + 8)) {
    func_0x000107c61174(lVar2);
    uVar3 = *(undefined8 *)(param_1 + 8);
    *(long *)(param_1 + 8) = lVar2;
    func_0x000107c61170(uVar3);
    lVar8 = *(long *)(param_1 + 0x40);
    func_0x000107c61174(lVar8);
    lVar4 = lVar8;
    func_0x000107c4080c();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          func_0x000107c61128(lVar8);
        }
        lVar5 = *(long *)(param_1 + 0x40);
        func_0x000107c4d9e8();
        func_0x000107c61180();
        lVar6 = lVar5;
        (**(code **)(lVar5 + 0x10))();
        func_0x000107c61180();
        func_0x000107c61170(lVar5);
        if (lVar6 != 0) {
          func_0x000107c56bd8(*(undefined8 *)(param_1 + 0x18));
        }
        func_0x000107c61170(lVar6);
        lVar9 = lVar9 + 1;
      } while (lVar4 != lVar9);
      lVar4 = lVar8;
      func_0x000107c4080c();
    }
    func_0x000107c61170(lVar8);
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c611ec(lVar2 + 0x2c);
  uVar3 = *(undefined8 *)(lVar2 + 0x20);
  func_0x000107c61174(uVar3);
  func_0x000107c611f0(lVar2 + 0x2c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1008aaa3c; end: 1008aaa77; -[SCDocObjectFetchedResultObserver _getDocObjectFetchedResult] */

void FUN_1008aaa3c(long param_1)

{
  undefined8 uVar1;
  
  func_0x000107c611ec(param_1 + 0x2c);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(uVar1);
  func_0x000107c611f0(param_1 + 0x2c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1008aaa78; end: 1008aaac7;  */

void FUN_1008aaa78(undefined8 param_1,undefined8 param_2)

{
  FUN_10050471c(param_2,&PTR___NSConcreteGlobalBlock_110ab75a0,
                &PTR___NSConcreteGlobalBlock_110ab75c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1008aaac8; end: 1008aaacf; -[SCSnapchattersFetchedResultObserver snapchatterFetchedResult] */

void FUN_1008aaac8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfab8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_fetchedResult_1125c87e0)
  ;
  return;
}



/* Entry: 1008aaad0; end: 1008aab27; -[SCDocObjectFetchedResultObserver fetchedResult] */

void FUN_1008aaad0(long param_1)

{
  undefined8 uVar1;
  
  func_0x000107c611ec(param_1 + 0x28);
  func_0x000107c3cba0(param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(uVar1);
  func_0x000107c611f0(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1008aab28; end: 1008aabb7; -[SCDownloadRequest .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001008aab4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008aab6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008aab8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008aab70) */
/* WARNING: Removing unreachable block (ram,0x0001008aab50) */
/* WARNING: Removing unreachable block (ram,0x0001008aab90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008aab28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278db20,0);
  return;
}



/* Entry: 1008aabb8; end: 1008aad07; -[SCRequest .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001008aabd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008aabe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008aac00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008aac18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008aac30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008aac48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008aac60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008aac78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008aac90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008aaca8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008aacc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008aacd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008aacf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008aacdc) */
/* WARNING: Removing unreachable block (ram,0x0001008aacc4) */
/* WARNING: Removing unreachable block (ram,0x0001008aacac) */
/* WARNING: Removing unreachable block (ram,0x0001008aac94) */
/* WARNING: Removing unreachable block (ram,0x0001008aac7c) */
/* WARNING: Removing unreachable block (ram,0x0001008aac64) */
/* WARNING: Removing unreachable block (ram,0x0001008aac4c) */
/* WARNING: Removing unreachable block (ram,0x0001008aac34) */
/* WARNING: Removing unreachable block (ram,0x0001008aac1c) */
/* WARNING: Removing unreachable block (ram,0x0001008aac04) */
/* WARNING: Removing unreachable block (ram,0x0001008aabec) */
/* WARNING: Removing unreachable block (ram,0x0001008aabd4) */
/* WARNING: Removing unreachable block (ram,0x0001008aacf4) */

void FUN_1008aabb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x1a0,0);
  return;
}



/* Entry: 1008aad08; end: 1008aad13; -[SCNNetworkTypesCronetMetrics .cxx_destruct] */

void FUN_1008aad08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x88,0);
  return;
}



/* Entry: 1008aad14; end: 1008aadab; -[SCRequestInfoContainer .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001008aad2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008aad40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008aad58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008aad70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008aad88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008aad74) */
/* WARNING: Removing unreachable block (ram,0x0001008aad5c) */
/* WARNING: Removing unreachable block (ram,0x0001008aad44) */
/* WARNING: Removing unreachable block (ram,0x0001008aad30) */
/* WARNING: Removing unreachable block (ram,0x0001008aad8c) */

void FUN_1008aad14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x60,0);
  return;
}



/* Entry: 1008aadac; end: 1008aadb7; -[SCDisplayContext .cxx_destruct] */

void FUN_1008aadac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1008aadb8; end: 1008aae0f;  */

long FUN_1008aadb8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      func_0x000107c60d68(plVar5);
    }
  }
  return param_1;
}



/* Entry: 1008aae10; end: 1008aae37; -[SCRequestSchedulingStateListenerAnnouncer .cxx_destruct] */

void FUN_1008aae10(long param_1)

{
  FUN_1008aadb8(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 1008aae38; end: 1008aae4b;  */

void FUN_1008aae38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001008aae48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1008aae4c; end: 1008aae9b;  */

void FUN_1008aae4c(long param_1,undefined8 param_2)

{
  FUN_10050471c(param_2,&PTR___NSConcreteGlobalBlock_110a18f10,
                &PTR___NSConcreteGlobalBlock_110a18f30);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1008aae9c; end: 1008aafa7;  */

void FUN_1008aae9c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c61174(param_2);
  lVar1 = param_1 + 0x30;
  func_0x000107c61148();
  uVar2 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(uVar3);
  uVar4 = *(undefined8 *)(lVar1 + 0x30);
  func_0x000107c61174(param_2);
  func_0x000107c4f7c0(uVar4);
  func_0x000107c61180();
  func_0x000107c4e55c(uVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 1008aafa8; end: 1008aafcb;  */

void FUN_1008aafa8(long param_1,undefined **param_2)

{
  undefined1 uVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined *puVar21;
  undefined **unaff_x26;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined *puVar24;
  double dVar25;
  undefined4 uStack_ae4;
  long lStack_ae0;
  long lStack_ad8;
  undefined8 uStack_ad0;
  undefined **ppuStack_ac8;
  undefined4 uStack_ac0;
  undefined4 uStack_ab0;
  double dStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  long lStack_a80;
  long lStack_a78;
  undefined8 uStack_a70;
  long *plStack_a68;
  long *plStack_a60;
  undefined1 uStack_a51;
  undefined **ppuStack_a50;
  undefined4 uStack_a48;
  undefined2 uStack_a38;
  undefined2 uStack_a36;
  undefined1 *puStack_a18;
  undefined ***pppuStack_a10;
  long lStack_a08;
  long lStack_a00;
  undefined8 uStack_9f8;
  long *plStack_9f0;
  long *plStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined **ppuStack_9a0;
  undefined **ppuStack_998;
  undefined **ppuStack_990;
  undefined **ppuStack_988;
  undefined **ppuStack_980;
  long *plStack_978;
  undefined **ppuStack_970;
  undefined **ppuStack_968;
  undefined1 **ppuStack_960;
  code *pcStack_958;
  undefined *puStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined1 *puStack_938;
  undefined *apuStack_930 [2];
  char cStack_919;
  long lStack_918;
  undefined **ppuStack_910;
  undefined **ppuStack_908;
  undefined **ppuStack_900;
  undefined *puStack_8f8;
  undefined **ppuStack_8f0;
  undefined **ppuStack_8e8;
  undefined1 *puStack_8e0;
  code *pcStack_8d8;
  uint uStack_8c8;
  uint uStack_8c4;
  undefined **ppuStack_8c0;
  undefined **ppuStack_8b8;
  undefined *puStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined *puStack_898;
  undefined8 uStack_890;
  undefined **ppuStack_888;
  undefined **ppuStack_880;
  undefined **ppuStack_878;
  long lStack_870;
  long lStack_868;
  undefined *puStack_860;
  undefined **ppuStack_858;
  undefined **ppuStack_850;
  undefined **ppuStack_848;
  undefined **ppuStack_840;
  undefined8 uStack_838;
  undefined **ppuStack_830;
  undefined **ppuStack_828;
  undefined8 uStack_820;
  long lStack_818;
  undefined8 *puStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  long lStack_7d8;
  long *plStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  long *plStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  long lStack_758;
  long *plStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined *puStack_718;
  undefined8 uStack_710;
  undefined *puStack_708;
  undefined *puStack_700;
  undefined8 *puStack_6f8;
  undefined8 *puStack_6f0;
  undefined *puStack_6e8;
  undefined8 uStack_6e0;
  code *pcStack_6d8;
  undefined *puStack_6d0;
  undefined8 *puStack_6c8;
  undefined *puStack_6c0;
  undefined8 uStack_6b8;
  undefined *puStack_6b0;
  undefined *puStack_6a8;
  undefined8 *puStack_6a0;
  undefined8 *puStack_698;
  undefined8 *puStack_690;
  undefined8 *puStack_688;
  undefined8 *puStack_680;
  undefined8 *puStack_678;
  undefined8 *puStack_670;
  undefined8 *puStack_668;
  undefined8 uStack_660;
  undefined8 *puStack_658;
  undefined8 uStack_650;
  undefined1 uStack_648;
  undefined8 uStack_640;
  undefined8 *puStack_638;
  undefined8 uStack_630;
  undefined1 uStack_628;
  undefined8 uStack_620;
  undefined8 *puStack_618;
  undefined8 uStack_610;
  undefined *puStack_608;
  undefined *puStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 *puStack_5e8;
  undefined8 uStack_5e0;
  undefined *puStack_5d8;
  undefined *puStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 *puStack_5b8;
  undefined8 uStack_5b0;
  undefined *puStack_5a8;
  undefined *puStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 *puStack_588;
  undefined8 uStack_580;
  undefined *puStack_578;
  undefined *puStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 *puStack_558;
  undefined8 uStack_550;
  undefined *puStack_548;
  undefined *puStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 *puStack_528;
  undefined8 uStack_520;
  undefined *puStack_518;
  undefined *puStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 *puStack_4f8;
  undefined8 uStack_4f0;
  undefined *puStack_4e8;
  undefined *puStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  long *plStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 *puStack_488;
  long *plStack_480;
  undefined *puStack_478;
  undefined *puStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 *puStack_448;
  long *plStack_440;
  undefined *puStack_438;
  undefined *puStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_190;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_90;
  
  ppuVar20 = *(undefined ***)(param_1 + 0x20);
  uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28);
  uVar14 = *(undefined8 *)(param_1 + 0x30);
  uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
  uStack_8c8 = (uint)*(byte *)(param_1 + 0x38);
  uStack_8c4 = (uint)*(byte *)(param_1 + 0x39);
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_828 = param_2;
  func_0x000107c61174();
  func_0x000107c61174(ppuVar20);
  uStack_838 = uVar13;
  func_0x000107c61174(uVar13);
  uStack_8a0 = uVar14;
  func_0x000107c61174(uVar14);
  func_0x000107c61174(uVar15);
  ppuStack_8b8 = ppuVar20;
  uStack_890 = uVar15;
  func_0x000107c49e34(ppuVar20);
  func_0x000107c4badc(uVar15);
  ppuVar20 = ppuStack_828;
  func_0x000107c61174(ppuStack_828);
  FUN_1008acedc();
  func_0x000107c61180();
  ppuVar18 = ppuVar20;
  func_0x000107c3e1b8();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar20);
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_178 = 0;
  plStack_180 = (long *)0x0;
  lStack_188 = 0;
  uStack_190 = 0;
  func_0x000107c61174(ppuVar18);
  ppuVar20 = ppuVar18;
  func_0x000107c4080c();
  if (ppuVar20 != (undefined **)0x0) {
    lVar16 = *plStack_180;
    do {
      ppuVar19 = (undefined **)0x0;
      do {
        if (*plStack_180 != lVar16) {
          func_0x000107c61128(ppuVar18);
        }
        uVar13 = *(undefined8 *)(lStack_188 + (long)ppuVar19 * 8);
        func_0x000107c4f638(uVar13);
        func_0x000107c61180();
        func_0x00010805754c(ppuStack_828,uVar13);
        func_0x000107c61170(uVar13);
        ppuVar19 = (undefined **)((long)ppuVar19 + 1);
      } while (ppuVar20 != ppuVar19);
      ppuVar20 = ppuVar18;
      func_0x000107c4080c();
    } while (ppuVar20 != (undefined **)0x0);
  }
  func_0x000107c61170(ppuVar18);
  func_0x000107c61170(ppuVar18);
  func_0x000107c61170(ppuStack_828);
  func_0x000107c61174(ppuStack_8b8);
  ppuVar18 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c61160();
  ppuVar19 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c61160();
  uStack_418 = 0;
  uStack_420 = 0;
  uStack_428 = 0;
  puStack_430 = (undefined *)0x0;
  puStack_438 = (undefined *)0x0;
  plStack_440 = (long *)0x0;
  puStack_448 = (undefined8 *)0x0;
  uStack_450 = 0;
  ppuVar20 = ppuStack_8b8;
  func_0x000107c5d96c();
  func_0x000107c61180();
  ppuVar23 = ppuVar20;
  func_0x000107c4080c();
  if (ppuVar23 != (undefined **)0x0) {
    lVar16 = *plStack_440;
    do {
      ppuVar22 = (undefined **)0x0;
      do {
        if (*plStack_440 != lVar16) {
          func_0x000107c61128(ppuVar20);
        }
        unaff_x24 = (undefined **)puStack_448[(long)ppuVar22];
        func_0x000107c4ce20();
        func_0x000107c61180();
        unaff_x26 = unaff_x24;
        func_0x000107c444fc();
        func_0x000107c61180();
        unaff_x25 = unaff_x26;
        func_0x000107c2aa58();
        func_0x000107c61180();
        func_0x000107c61170(unaff_x26);
        ppuVar4 = unaff_x25;
        func_0x000107c4adac();
        if (ppuVar4 != (undefined **)0x0) {
          ppuVar5 = unaff_x24;
          func_0x000107c49c48();
          ppuVar4 = ppuVar19;
          if ((int)ppuVar5 == 0) {
            ppuVar4 = ppuVar18;
          }
          func_0x000107c56bd8(ppuVar4);
        }
        func_0x000107c61170(unaff_x25);
        func_0x000107c61170(unaff_x24);
        ppuVar22 = (undefined **)((long)ppuVar22 + 1);
      } while (ppuVar23 != ppuVar22);
      ppuVar23 = ppuVar20;
      func_0x000107c4080c();
    } while (ppuVar23 != (undefined **)0x0);
  }
  func_0x000107c61170(ppuVar20);
  uStack_458 = 0;
  uStack_460 = 0;
  uStack_468 = 0;
  puStack_470 = (undefined *)0x0;
  puStack_478 = (undefined *)0x0;
  plStack_480 = (long *)0x0;
  puStack_488 = (undefined8 *)0x0;
  uStack_490 = 0;
  func_0x000107c61174(ppuVar19);
  ppuVar23 = ppuVar19;
  func_0x000107c4080c();
  if (ppuVar23 != (undefined **)0x0) {
    lVar16 = *plStack_480;
    do {
      unaff_x24 = (undefined **)0x0;
      do {
        if (*plStack_480 != lVar16) {
          func_0x000107c61128(ppuVar19);
        }
        ppuVar20 = (undefined **)puStack_488[(long)unaff_x24];
        ppuVar22 = ppuVar18;
        func_0x000107c4d9e8();
        func_0x000107c61180();
        unaff_x25 = (undefined **)(ulong)(ppuVar22 == (undefined **)0x0);
        func_0x000107c61170();
        if (ppuVar22 != (undefined **)0x0) {
          func_0x000107c4ff88(ppuVar18);
        }
        unaff_x24 = (undefined **)((long)unaff_x24 + 1);
      } while (ppuVar23 != unaff_x24);
      ppuVar23 = ppuVar19;
      func_0x000107c4080c();
    } while (ppuVar23 != (undefined **)0x0);
  }
  func_0x000107c61170(ppuVar19);
  func_0x000107c3d66c(ppuVar18);
  ppuVar23 = ppuVar18;
  func_0x000107c40794();
  ppuStack_840 = ppuVar23;
  func_0x000107c61170(ppuVar19);
  func_0x000107c61170(ppuVar18);
  func_0x000107c61170(ppuStack_8b8);
  ppuVar18 = ppuStack_8b8;
  func_0x000107c61174(ppuStack_8b8);
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c61160();
  dVar25 = 0.0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_178 = 0;
  plStack_180 = (long *)0x0;
  lStack_188 = 0;
  uStack_190 = 0;
  func_0x000107c5d96c();
  func_0x000107c61180();
  iVar12 = (int)&uStack_190;
  ppuVar19 = ppuVar18;
  func_0x000107c4080c();
  if (ppuVar19 != (undefined **)0x0) {
    lVar16 = *plStack_180;
    do {
      ppuVar23 = (undefined **)0x0;
      do {
        if (*plStack_180 != lVar16) {
          func_0x000107c61128(ppuVar18);
        }
        unaff_x25 = *(undefined ***)(lStack_188 + (long)ppuVar23 * 8);
        ppuVar20 = unaff_x25;
        func_0x000107c4ce20();
        func_0x000107c61180();
        unaff_x26 = ppuVar20;
        func_0x000107c444fc();
        func_0x000107c61180();
        unaff_x24 = unaff_x26;
        func_0x000107c2aa58();
        func_0x000107c61180();
        func_0x000107c61170(unaff_x26);
        ppuVar22 = unaff_x24;
        func_0x000107c4adac();
        if ((ppuVar22 != (undefined **)0x0) &&
           (ppuVar22 = ppuVar20, func_0x000107c49c48(), ((ulong)ppuVar22 & 1) == 0)) {
          func_0x000107c5d968();
          func_0x000107c61180();
          func_0x000107c56bd8(puVar6);
          func_0x000107c61170(unaff_x25);
        }
        func_0x000107c61170(unaff_x24);
        func_0x000107c61170(ppuVar20);
        ppuVar23 = (undefined **)((long)ppuVar23 + 1);
      } while (ppuVar19 != ppuVar23);
      iVar12 = (int)&uStack_190;
      ppuVar19 = ppuVar18;
      func_0x000107c4080c();
    } while (ppuVar19 != (undefined **)0x0);
  }
  func_0x000107c61170(ppuVar18);
  puVar9 = puVar6;
  func_0x000107c40794();
  puStack_898 = puVar9;
  func_0x000107c61170(puVar6);
  func_0x000107c61170(ppuStack_8b8);
  ppuVar19 = ppuStack_8b8;
  ppuVar23 = ppuStack_8b8;
  func_0x000107c5da14();
  func_0x000107c61180();
  ppuVar22 = ppuVar19;
  ppuStack_888 = ppuVar23;
  func_0x000107c49e34();
  if (((ulong)ppuVar22 & 1) == 0) {
    ppuVar23 = ppuStack_840;
    func_0x000107c40808();
    if (ppuVar23 == (undefined **)0x0) {
      ppuVar23 = (undefined **)0x0;
      ppuVar22 = ppuStack_888;
      func_0x000107c40808();
      if (ppuVar22 == (undefined **)0x0) goto LAB_1008ac6b0;
    }
    ppuVar19 = ppuStack_840;
    func_0x000107c3db60();
    func_0x000107c61180();
    func_0x000107c40808();
    func_0x000107c4bad0(uStack_890);
  }
  else {
    func_0x000107c40808(ppuStack_840);
    func_0x000107c4bad4(uStack_890);
    ppuVar19 = (undefined **)0x0;
  }
  puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  ppuStack_8c0 = ppuVar19;
  func_0x000107c61160();
  ppuVar19 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_8a8 = puVar6;
  func_0x000107c61160();
  ppuVar23 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  ppuStack_848 = ppuVar19;
  func_0x000107c61160();
  ppuVar19 = ppuStack_828;
  ppuStack_880 = ppuVar23;
  func_0x0001084dc8b8(ppuStack_828,ppuStack_8c0);
  func_0x000107c61180();
  ppuVar23 = ppuVar19;
  func_0x000107c4d2d4();
  ppuStack_858 = ppuVar23;
  func_0x000107c61170(ppuVar19);
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c61160();
  ppuVar19 = ppuStack_840;
  puVar9 = (undefined *)0x0;
  uStack_498 = 0;
  uStack_4a0 = 0;
  uStack_4a8 = 0;
  uStack_4b0 = 0;
  uStack_4b8 = 0;
  plStack_4c0 = (long *)0x0;
  uStack_4c8 = 0;
  uStack_4d0 = 0;
  puStack_8b0 = puVar6;
  func_0x000107c61174(ppuStack_840);
  func_0x000107c4080c();
  if (ppuVar19 == (undefined **)0x0) {
    lStack_868 = 0;
    puStack_860 = (undefined *)0x0;
  }
  else {
    lStack_868 = 0;
    puStack_860 = (undefined *)0x0;
    lStack_870 = *plStack_4c0;
    ppuStack_850 = ppuVar19;
    do {
      ppuStack_830 = (undefined **)0x0;
      do {
        if (*plStack_4c0 != lStack_870) {
          func_0x000107c61128(ppuStack_840);
        }
        ppuVar18 = ppuStack_840;
        func_0x000107c4d9e8();
        func_0x000107c61180();
        ppuVar19 = ppuStack_858;
        ppuVar23 = ppuStack_858;
        func_0x000107c4d9e8();
        func_0x000107c61180();
        func_0x000107c4ff88(ppuVar19);
        ppuVar19 = ppuVar18;
        func_0x000107c49c48();
        if ((int)ppuVar19 == 0) {
          ppuVar20 = ppuVar18;
          func_0x000107c4cb00();
          ppuStack_878 = ppuVar20;
          func_0x000107c4cb00(ppuVar18);
          func_0x000107c4bae4(uStack_890);
          uStack_450 = 0;
          puStack_6a0 = &uStack_450;
          plStack_440 = (long *)0x3032000000;
          puStack_438 = &UNK_108055b50;
          puStack_430 = &UNK_108055b60;
          uStack_428 = 0;
          uStack_490 = 0;
          puStack_698 = &uStack_490;
          plStack_480 = (long *)0x3032000000;
          puStack_478 = &UNK_108055b50;
          puStack_470 = &UNK_108055b60;
          uStack_468 = 0;
          uStack_500 = 0;
          puStack_690 = &uStack_500;
          uStack_4f0 = 0x3032000000;
          puStack_4e8 = &UNK_108055b50;
          puStack_4e0 = &UNK_108055b60;
          uStack_4d8 = 0;
          uStack_530 = 0;
          puStack_688 = &uStack_530;
          uStack_520 = 0x3032000000;
          puStack_518 = &UNK_108055b50;
          puStack_510 = &UNK_108055b60;
          uStack_508 = 0;
          uStack_560 = 0;
          puStack_680 = &uStack_560;
          uStack_550 = 0x3032000000;
          puStack_548 = &UNK_108055b50;
          puStack_540 = &UNK_108055b60;
          uStack_538 = 0;
          uStack_590 = 0;
          puStack_588 = &uStack_590;
          uStack_580 = 0x3032000000;
          puStack_578 = &UNK_108055b50;
          puStack_570 = &UNK_108055b60;
          uStack_568 = 0;
          uStack_5c0 = 0;
          puStack_5b8 = &uStack_5c0;
          uStack_5b0 = 0x3032000000;
          puStack_5a8 = &UNK_108055b50;
          puStack_5a0 = &UNK_108055b60;
          uStack_598 = 0;
          uStack_5f0 = 0;
          puStack_5e8 = &uStack_5f0;
          uStack_5e0 = 0x3032000000;
          puStack_5d8 = &UNK_108055b50;
          puStack_5d0 = &UNK_108055b60;
          uStack_5c8 = 0;
          uStack_620 = 0;
          puStack_678 = &uStack_620;
          uStack_610 = 0x3032000000;
          puStack_608 = &UNK_108055b50;
          puStack_600 = &UNK_108055b60;
          uStack_5f8 = 0;
          uStack_640 = 0;
          puStack_670 = &uStack_640;
          uStack_630 = 0x2020000000;
          uStack_628 = 0;
          uStack_660 = 0;
          puStack_668 = &uStack_660;
          uStack_650 = 0x2020000000;
          uStack_648 = 0;
          puStack_6c0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_6b8 = 0xc2000000;
          puStack_6b0 = &UNK_108055ff4;
          puStack_6a8 = &UNK_110a19260;
          puStack_658 = puStack_668;
          puStack_638 = puStack_670;
          puStack_618 = puStack_678;
          puStack_558 = puStack_680;
          puStack_528 = puStack_688;
          puStack_4f8 = puStack_690;
          puStack_488 = puStack_698;
          puStack_448 = puStack_6a0;
          func_0x000108055b68(ppuVar18,uStack_838,&puStack_6c0);
          puVar6 = puStack_898;
          func_0x000107c4d9e8();
          func_0x000107c61180();
          ppuVar20 = ppuVar23;
          func_0x000107c3eb34();
          func_0x000107c61180();
          puStack_6e8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_6e0 = 0xc2000000;
          pcStack_6d8 = (code *)&UNK_108056298;
          puStack_6d0 = &UNK_1108a5d38;
          puStack_6c8 = &uStack_590;
          func_0x000107c61174(puVar6);
          func_0x000107c61174(ppuVar20);
          func_0x000107c61174(&puStack_6e8);
          if (puVar6 == (undefined *)0x0) {
            func_0x000107c61174(ppuVar20);
            puVar21 = *(undefined **)(puStack_6c8[1] + 0x28);
            *(undefined ***)(puStack_6c8[1] + 0x28) = ppuVar20;
          }
          else {
            puVar21 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x000107c61160(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
            func_0x000107c3d7a0();
            puVar9 = puVar6;
            func_0x000107c4d618(puVar6);
            func_0x000107c61180();
            puVar7 = puVar9;
            FUN_100504554();
            func_0x000107c3d7a0(puVar21);
            func_0x000107c61170(puVar7);
            func_0x000107c61170(puVar9);
            puVar9 = puVar6;
            func_0x000107c50064();
            func_0x000107c61180();
            puVar7 = puVar9;
            FUN_100504554();
            func_0x000107c61170(puVar9);
            puVar9 = (undefined *)0x0;
            uStack_158 = 0;
            uStack_160 = 0;
            uStack_168 = 0;
            uStack_170 = 0;
            uStack_178 = 0;
            plStack_180 = (long *)0x0;
            lStack_188 = 0;
            uStack_190 = 0;
            func_0x000107c61174(puVar7);
            puVar8 = puVar7;
            func_0x000107c4080c();
            if (puVar8 != (undefined *)0x0) {
              lVar16 = *plStack_180;
              do {
                puVar24 = (undefined *)0x0;
                do {
                  if (*plStack_180 != lVar16) {
                    func_0x000107c61128(puVar7);
                  }
                  func_0x000107c4ff80(puVar21);
                  puVar24 = puVar24 + 1;
                } while (puVar8 != puVar24);
                puVar8 = puVar7;
                func_0x000107c4080c();
              } while (puVar8 != (undefined *)0x0);
            }
            func_0x000107c61170(puVar7);
            (*pcStack_6d8)(&puStack_6e8,puVar21);
            func_0x000107c61170(puVar7);
          }
          func_0x000107c61170(puVar21);
          func_0x000107c61170(&puStack_6e8);
          func_0x000107c61170(ppuVar20);
          func_0x000107c61170(puVar6);
          func_0x000107c61170(ppuVar20);
          func_0x000107c61170(puVar6);
          puStack_718 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_710 = 0xc2000000;
          puStack_708 = &UNK_108056678;
          puStack_700 = &UNK_110a19290;
          puStack_6f8 = &uStack_5c0;
          puStack_6f0 = &uStack_5f0;
          func_0x0001080562d0(puStack_488[5],uStack_8a0,puStack_588[5],&puStack_718);
          ppuVar20 = ppuVar18;
          func_0x000107c4114c();
          func_0x000108055b2c();
          unaff_x24 = (undefined **)PTR_PTR_1126d8f60;
          if (ppuVar23 == (undefined **)0x0) {
            func_0x000108509684(PTR_PTR_1126d8f60,0);
            func_0x000107c61180();
            if (unaff_x24 != (undefined **)0x0) {
              func_0x000107c61198(unaff_x24);
              unaff_x26 = (undefined **)0x1;
              goto LAB_1008abc48;
            }
            unaff_x24 = (undefined **)0x0;
            bVar2 = true;
            unaff_x26 = (undefined **)0x1;
          }
          else {
            func_0x000108509e24(PTR_PTR_1126d8f60,ppuVar23);
            func_0x000107c61180();
            ppuVar19 = ppuVar23;
            func_0x000107c5d0f0();
            unaff_x26 = (undefined **)(ulong)(ppuVar19 == (undefined **)0x0);
            if (unaff_x24 == (undefined **)0x0) {
              unaff_x24 = (undefined **)0x0;
              bVar2 = true;
            }
            else {
LAB_1008abc48:
              bVar2 = false;
              unaff_x24[5] = (undefined *)ppuVar20;
            }
          }
          ppuVar19 = ppuVar18;
          func_0x000108056708();
          if (!bVar2) {
            unaff_x24[0x14] = (undefined *)ppuVar19;
          }
          ppuVar19 = ppuVar18;
          func_0x000107c42120(ppuVar18);
          func_0x000107c61180();
          if (bVar2) {
            func_0x000107c61170(ppuVar19);
          }
          else {
            func_0x000107c61198(unaff_x24);
            func_0x000107c61170(ppuVar19);
            *(undefined1 *)((long)unaff_x24 + 0x15) = 0;
          }
          uVar14 = puStack_618[5];
          func_0x000107c40d14(uVar14);
          func_0x000107c61180();
          uVar13 = uStack_838;
          func_0x000107c49d0c();
          if (!bVar2) {
            uVar3 = (undefined1)uVar13;
            if (ppuVar20 == (undefined **)0x6) {
              uVar3 = 1;
            }
            if (ppuVar20 == (undefined **)0xa) {
              uVar3 = 1;
            }
            *(undefined1 *)((long)unaff_x24 + 0x16) = uVar3;
          }
          func_0x000107c61170(uVar14);
          uVar14 = puStack_618[5];
          func_0x000107c40d14(uVar14);
          func_0x000107c61180();
          ppuVar19 = ppuVar18;
          func_0x000107c3e4e4();
          uVar3 = *(undefined1 *)(puStack_658 + 3);
          uVar13 = uStack_838;
          func_0x000107c49d0c();
          if (!bVar2) {
            uVar1 = (char)ppuVar19;
            if ((int)uVar13 == 0) {
              uVar1 = uVar3;
            }
            *(undefined1 *)((long)unaff_x24 + 0x17) = uVar1;
          }
          func_0x000107c61170(uVar14);
          ppuVar19 = ppuVar18;
          func_0x000107c4454c();
          if (!bVar2) {
            unaff_x24[0xc] = (undefined *)ppuVar19;
            func_0x000107c61198(unaff_x24);
            *(undefined1 *)((long)unaff_x24 + 0x14) = *(undefined1 *)(puStack_638 + 3);
            func_0x000107c61198(unaff_x24);
            func_0x000107c61198(unaff_x24);
            func_0x000107c61198(unaff_x24);
            func_0x000107c61198(unaff_x24);
            func_0x000107c61198(unaff_x24);
            func_0x000107c61198(unaff_x24);
            func_0x000107c61198(unaff_x24);
            func_0x000107c61198(unaff_x24);
          }
          unaff_x25 = ppuVar18;
          func_0x0001080567b0();
          func_0x000107c61180();
          if (!bVar2) {
            func_0x000107c61198(unaff_x24);
          }
          func_0x000107c61170(unaff_x25);
          ppuVar19 = ppuVar18;
          func_0x000107c4114c();
          if ((((int)ppuVar19 == 7) ||
              (ppuVar19 = ppuVar18, func_0x000107c4114c(), (int)ppuVar19 == 6)) ||
             (ppuVar19 = ppuVar18, func_0x000107c4114c(), (int)ppuVar19 == 8)) {
            unaff_x25 = ppuVar18;
            func_0x000107c4cafc();
            func_0x000107c61180();
            func_0x00010805732c();
            if (!bVar2) {
              unaff_x24[0x12] = puVar9;
            }
            func_0x000107c61170(unaff_x25);
          }
          ppuVar19 = ppuVar18;
          func_0x000107c4114c();
          if ((int)ppuVar19 == 7) {
            unaff_x25 = ppuVar18;
            func_0x000107c444fc();
            func_0x000107c61180();
            ppuVar19 = unaff_x25;
            func_0x000107c2aa58();
            func_0x000107c61180();
            func_0x000107c3d798(ppuStack_880);
            func_0x000107c61170(ppuVar19);
            func_0x000107c61170(unaff_x25);
          }
          if ((int)unaff_x26 != 0) {
            puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x000107c4d968(PTR__OBJC_CLASS___NSNumber_1126ae570);
            func_0x000107c61180();
            func_0x000107c56bd8(puStack_8b0);
            func_0x000107c61170(puVar6);
            if (ppuVar20 == (undefined **)0x1) {
              lVar16 = puStack_618[5];
              func_0x000107c40d14();
              func_0x000107c61180();
              func_0x000107c61170();
              if (lVar16 != 0) {
                uVar13 = puStack_618[5];
                func_0x000107c40d14(uVar13);
                func_0x000107c61180();
                func_0x000107c3d798(puStack_8a8);
                func_0x000107c61170(uVar13);
              }
            }
          }
          func_0x000107c60bcc(&uStack_660,8);
          func_0x000107c60bcc(&uStack_640,8);
          func_0x000107c60bcc(&uStack_620,8);
          func_0x000107c61170(uStack_5f8);
          func_0x000107c60bcc(&uStack_5f0,8);
          func_0x000107c61170(uStack_5c8);
          func_0x000107c60bcc(&uStack_5c0,8);
          func_0x000107c61170(uStack_598);
          func_0x000107c60bcc(&uStack_590,8);
          func_0x000107c61170(uStack_568);
          func_0x000107c60bcc(&uStack_560,8);
          func_0x000107c61170(uStack_538);
          func_0x000107c60bcc(&uStack_530,8);
          func_0x000107c61170(uStack_508);
          func_0x000107c60bcc(&uStack_500,8);
          func_0x000107c61170(uStack_4d8);
          func_0x000107c60bcc(&uStack_490,8);
          func_0x000107c61170(uStack_468);
          func_0x000107c60bcc(&uStack_450,8);
          func_0x000107c61170(uStack_428);
          lStack_868 = lStack_868 + 1;
          puStack_860 = (undefined *)((long)ppuStack_878 + (long)puStack_860);
          ppuVar20 = ppuVar23;
LAB_1008ac0a8:
          func_0x000107c5c28c(ppuStack_828);
          func_0x000107c611b0();
          func_0x000107c61170(unaff_x24);
        }
        else {
          unaff_x24 = (undefined **)0x0;
          func_0x000107c3d798(ppuStack_848);
          if (ppuVar23 != (undefined **)0x0) {
            unaff_x24 = (undefined **)PTR_PTR_1126d8f60;
            func_0x00010850a65c(PTR_PTR_1126d8f60,ppuVar23);
            func_0x000107c61180();
            ppuVar19 = ppuVar23;
            func_0x000107c5d0f0();
            if (ppuVar19 == (undefined **)0x1) {
              unaff_x25 = ppuVar23;
              func_0x000107c40c54();
              func_0x000107c61180();
              ppuVar19 = unaff_x25;
              func_0x000107c40d14();
              func_0x000107c61180();
              func_0x000107c61170();
              func_0x000107c61170(unaff_x25);
              if (ppuVar19 != (undefined **)0x0) {
                unaff_x25 = ppuVar23;
                func_0x000107c40c54();
                func_0x000107c61180();
                ppuVar19 = unaff_x25;
                func_0x000107c40d14();
                func_0x000107c61180();
                func_0x000107c3d798(puStack_8a8);
                func_0x000107c61170(ppuVar19);
                func_0x000107c61170(unaff_x25);
              }
            }
            goto LAB_1008ac0a8;
          }
        }
        func_0x000107c61170(ppuVar23);
        func_0x000107c61170(ppuVar18);
        ppuStack_830 = (undefined **)((long)ppuStack_830 + 1);
      } while (ppuStack_830 != ppuStack_850);
      ppuVar19 = ppuStack_840;
      func_0x000107c4080c();
      ppuStack_850 = ppuVar19;
    } while (ppuVar19 != (undefined **)0x0);
  }
  ppuStack_850 = (undefined **)0x0;
  func_0x000107c61170(ppuStack_840);
  func_0x000107c4bae8(uStack_890);
  func_0x000107c4bae0(uStack_890);
  ppuVar19 = ppuStack_8b8;
  func_0x000107c49e34();
  if (((int)ppuVar19 != 0) &&
     (ppuVar19 = ppuStack_858, func_0x000107c40808(), ppuVar19 != (undefined **)0x0)) {
    func_0x000107c40808(ppuStack_858);
    func_0x000107c4bad8(uStack_890);
    uStack_738 = 0;
    uStack_740 = 0;
    uStack_728 = 0;
    uStack_730 = 0;
    lStack_758 = 0;
    uStack_760 = 0;
    uStack_748 = 0;
    plStack_750 = (long *)0x0;
    ppuVar19 = ppuStack_858;
    func_0x000107c3dbc0();
    func_0x000107c61180();
    ppuVar23 = ppuVar19;
    func_0x000107c4080c();
    if (ppuVar23 != (undefined **)0x0) {
      lVar16 = *plStack_750;
      unaff_x25 = &PTR_PTR_1126d8000;
      do {
        unaff_x26 = (undefined **)0x0;
        do {
          if (*plStack_750 != lVar16) {
            func_0x000107c61128(ppuVar19);
          }
          ppuVar20 = *(undefined ***)(lStack_758 + (long)unaff_x26 * 8);
          ppuVar18 = (undefined **)PTR_PTR_1126d8f60;
          func_0x00010850a65c(PTR_PTR_1126d8f60,ppuVar20);
          func_0x000107c61180();
          func_0x000107c5c28c(ppuStack_828);
          func_0x000107c611b0();
          unaff_x24 = ppuVar20;
          func_0x000107c4f638();
          func_0x000107c61180();
          func_0x000107c3d798(ppuStack_848);
          func_0x000107c61170(unaff_x24);
          ppuVar22 = ppuVar20;
          func_0x000107c5d0f0();
          if (ppuVar22 == (undefined **)0x1) {
            unaff_x24 = ppuVar20;
            func_0x000107c40c54();
            func_0x000107c61180();
            ppuVar22 = unaff_x24;
            func_0x000107c40d14();
            func_0x000107c61180();
            func_0x000107c61170();
            func_0x000107c61170(unaff_x24);
            if (ppuVar22 != (undefined **)0x0) {
              func_0x000107c40c54();
              func_0x000107c61180();
              unaff_x24 = ppuVar20;
              func_0x000107c40d14();
              func_0x000107c61180();
              func_0x000107c3d798(puStack_8a8);
              func_0x000107c61170(unaff_x24);
              func_0x000107c61170(ppuVar20);
            }
          }
          func_0x000107c61170(ppuVar18);
          unaff_x26 = (undefined **)((long)unaff_x26 + 1);
        } while (ppuVar23 != unaff_x26);
        ppuVar23 = ppuVar19;
        func_0x000107c4080c();
      } while (ppuVar23 != (undefined **)0x0);
    }
    func_0x000107c61170(ppuVar19);
  }
  ppuVar19 = ppuStack_8b8;
  func_0x000107c4d694(ppuStack_8b8);
  func_0x000107c61180();
  func_0x00010805bf40(ppuStack_828,ppuVar19,uStack_838);
  func_0x000107c61170(ppuVar19);
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c61160();
  puVar9 = puStack_8b0;
  func_0x000107c40808();
  if (puVar9 != (undefined *)0x0) {
    ppuVar19 = ppuStack_828;
    func_0x000108054264(ppuStack_828,puStack_8b0,uStack_8c8);
    func_0x000107c61180();
    func_0x000107c3d66c(puVar6);
    func_0x000107c61170(ppuVar19);
  }
  ppuVar19 = ppuStack_848;
  func_0x000107c40808();
  if (ppuVar19 != (undefined **)0x0) {
    func_0x0001084e969c(ppuStack_828,ppuStack_848);
    ppuVar18 = ppuStack_848;
    uStack_778 = 0;
    uStack_780 = 0;
    uStack_768 = 0;
    uStack_770 = 0;
    uStack_798 = 0;
    uStack_7a0 = 0;
    uStack_788 = 0;
    plStack_790 = (long *)0x0;
    func_0x000107c61174(ppuStack_848);
    func_0x000107c4080c();
    if (ppuVar18 != (undefined **)0x0) {
      lVar16 = *plStack_790;
      do {
        ppuVar20 = (undefined **)0x0;
        do {
          if (*plStack_790 != lVar16) {
            func_0x000107c61128(ppuStack_848);
          }
          func_0x000107c56bd8(puVar6);
          ppuVar20 = (undefined **)((long)ppuVar20 + 1);
        } while (ppuVar18 != ppuVar20);
        ppuVar18 = ppuStack_848;
        func_0x000107c4080c();
      } while (ppuVar18 != (undefined **)0x0);
    }
    ppuVar18 = (undefined **)0x0;
    func_0x000107c61170(ppuStack_848);
  }
  puVar9 = puVar6;
  func_0x000107c40808();
  if (puVar9 != (undefined *)0x0) {
    func_0x0001084ee948(ppuStack_828,2,puVar6,0,PTR____NSArray0__struct_11034ab48,
                        PTR____NSDictionary0__struct_11034ab58,
                        PTR____NSDictionary0__struct_11034ab58,uStack_8c4);
  }
  puVar9 = puStack_8a8;
  func_0x000107c40808();
  ppuVar19 = ppuStack_828;
  if (puVar9 != (undefined *)0x0) {
    ppuVar18 = ppuStack_828;
    func_0x0001084ea0fc(ppuStack_828,puStack_8a8);
    func_0x000107c61180();
    func_0x0001084ee948(ppuVar19,1,ppuVar18,0,PTR____NSArray0__struct_11034ab48,
                        PTR____NSDictionary0__struct_11034ab58,
                        PTR____NSDictionary0__struct_11034ab58,uStack_8c4);
    func_0x000107c61170(ppuVar18);
  }
  ppuVar19 = ppuStack_888;
  uStack_7b8 = 0;
  uStack_7c0 = 0;
  uStack_7a8 = 0;
  uStack_7b0 = 0;
  lStack_7d8 = 0;
  uStack_7e0 = 0;
  uStack_7c8 = 0;
  plStack_7d0 = (long *)0x0;
  func_0x000107c61174(ppuStack_888);
  func_0x000107c4080c();
  if (ppuVar19 != (undefined **)0x0) {
    lVar16 = *plStack_7d0;
    do {
      unaff_x25 = (undefined **)0x0;
      do {
        if (*plStack_7d0 != lVar16) {
          func_0x000107c61128(ppuStack_888);
        }
        ppuVar18 = *(undefined ***)(lStack_7d8 + (long)unaff_x25 * 8);
        ppuVar20 = ppuVar18;
        func_0x000107c4e4e4();
        func_0x000107c61180();
        unaff_x24 = ppuVar20;
        func_0x000107c49c48();
        func_0x000107c61170(ppuVar20);
        if ((int)unaff_x24 == 0) {
          func_0x000108057638(ppuStack_828,ppuVar18);
        }
        else {
          func_0x000107c4e4e4();
          func_0x000107c61180();
          ppuVar20 = ppuVar18;
          func_0x000107c444fc();
          func_0x000107c61180();
          unaff_x24 = ppuVar20;
          func_0x000107c2aa58();
          func_0x000107c61180();
          func_0x00010805754c(ppuStack_828,unaff_x24);
          func_0x000107c61170(unaff_x24);
          func_0x000107c61170(ppuVar20);
          func_0x000107c61170(ppuVar18);
        }
        unaff_x25 = (undefined **)((long)unaff_x25 + 1);
      } while (ppuVar19 != unaff_x25);
      ppuVar19 = ppuStack_888;
      func_0x000107c4080c();
    } while (ppuVar19 != (undefined **)0x0);
  }
  func_0x000107c61170(ppuStack_888);
  ppuVar23 = ppuStack_880;
  dVar25 = 0.0;
  uStack_7f8 = 0;
  uStack_800 = 0;
  uStack_7e8 = 0;
  uStack_7f0 = 0;
  lStack_818 = 0;
  uStack_820 = 0;
  uStack_808 = 0;
  puStack_810 = (undefined8 *)0x0;
  func_0x000107c61174(ppuStack_880);
  iVar12 = (int)&uStack_820;
  ppuVar19 = ppuVar23;
  func_0x000107c4080c();
  if (ppuVar19 != (undefined **)0x0) {
    ppuVar23 = (undefined **)*puStack_810;
    do {
      ppuVar18 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_810 != ppuVar23) {
          func_0x000107c61128(ppuStack_880);
        }
        func_0x00010805754c(ppuStack_828,*(undefined8 *)(lStack_818 + (long)ppuVar18 * 8));
        ppuVar18 = (undefined **)((long)ppuVar18 + 1);
      } while (ppuVar19 != ppuVar18);
      iVar12 = (int)&uStack_820;
      ppuVar19 = ppuStack_880;
      func_0x000107c4080c();
    } while (ppuVar19 != (undefined **)0x0);
  }
  ppuVar19 = (undefined **)0x0;
  func_0x000107c61170(ppuStack_880);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puStack_8b0);
  func_0x000107c61170(ppuStack_858);
  func_0x000107c61170(ppuStack_880);
  func_0x000107c61170(ppuStack_848);
  func_0x000107c61170(puStack_8a8);
  func_0x000107c61170(ppuStack_8c0);
LAB_1008ac6b0:
  func_0x000107c61170(ppuStack_888);
  func_0x000107c61170(puStack_898);
  func_0x000107c61170(ppuStack_840);
  func_0x000107c61170(uStack_890);
  func_0x000107c61170(uStack_8a0);
  func_0x000107c61170(uStack_838);
  func_0x000107c61170(ppuStack_8b8);
  ppuVar22 = ppuStack_828;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puStack_8b0);
  func_0x000107c61170(ppuStack_858);
  func_0x000107c61170(ppuStack_880);
  func_0x000107c61170(ppuStack_848);
  func_0x000107c61170(puStack_8a8);
  func_0x000107c61170(ppuStack_8c0);
  func_0x000107c61170(ppuStack_888);
  func_0x000107c61170(puStack_898);
  func_0x000107c61170(ppuStack_840);
  func_0x000107c61170(uStack_890);
  func_0x000107c61170(uStack_8a0);
  func_0x000107c61170(uStack_838);
  func_0x000107c61170(ppuStack_8b8);
  func_0x000107c61170(ppuStack_828);
  func_0x000107c60bd8();
  puVar9 = ppuVar22[1];
  ppuVar22 = &PTR____CFConstantStringClassReference_110dad378;
  if (iVar12 == 0) {
    ppuVar22 = &PTR____CFConstantStringClassReference_110dad398;
  }
  pcStack_8d8 = FUN_1008acd44;
  lStack_918 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_910 = unaff_x24;
  ppuStack_908 = ppuVar20;
  ppuStack_900 = ppuVar18;
  puStack_8f8 = puVar6;
  ppuStack_8f0 = ppuVar19;
  ppuStack_8e8 = ppuVar23;
  puStack_8e0 = &stack0xfffffffffffffff0;
  func_0x000107c61174(ppuVar22);
  plVar17 = (long *)0x0;
  if (puVar9 != (undefined *)0x0) {
    plVar17 = *(long **)(puVar9 + 8);
    func_0x000107c61174(ppuVar22);
    if (ppuVar22 == (undefined **)0x0) {
      ppuVar18 = (undefined **)&UNK_10f44f7d9;
    }
    else {
      ppuVar18 = ppuVar22;
      func_0x000107c61178(ppuVar22);
      func_0x000107c3ac4c();
    }
    func_0x000107c61170(ppuVar22);
    ppuVar20 = apuStack_930;
    FUN_10002b838(apuStack_930,ppuVar18);
    puStack_950 = (undefined *)0x0;
    uStack_948 = 0;
    uStack_940 = 0;
    FUN_10007e1e8(&puStack_950,apuStack_930,&lStack_918,1);
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110a03718,&puStack_950,1);
    puStack_938 = (undefined1 *)&puStack_950;
    FUN_10007e5dc(&puStack_938);
    ppuVar18 = &puStack_950;
    if (cStack_919 < '\0') {
      func_0x000107c60e14(apuStack_930[0]);
      ppuVar18 = &puStack_950;
    }
  }
  ppuVar19 = ppuVar22;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_918) {
    func_0x000107c60e78();
    func_0x000107c61170(ppuVar22);
    func_0x000107c61170(ppuVar22);
    ppuVar23 = ppuVar19;
    func_0x000107c60bd8();
    pcStack_958 = FUN_1008acedc;
    ppuStack_9a0 = unaff_x26;
    ppuStack_998 = unaff_x25;
    ppuStack_990 = unaff_x24;
    ppuStack_988 = ppuVar20;
    ppuStack_980 = ppuVar18;
    plStack_978 = plVar17;
    ppuStack_970 = ppuVar19;
    ppuStack_968 = ppuVar22;
    ppuStack_960 = &puStack_8e0;
    func_0x000107c61174();
    func_0x000107c61158(PTR_PTR_1126d8ff0);
    if (ppuVar23 == (undefined **)0x0) {
      uStack_9b0 = 0;
      dVar25 = 0.0;
      uStack_9c8 = 0;
      uStack_9d0 = 0;
      uStack_9b8 = 0;
      uStack_9c0 = 0;
      uStack_9d8 = 0;
      uStack_9e0 = 0;
    }
    else {
      func_0x000107c430a4(&uStack_9e0,ppuVar23);
    }
    puVar10 = &uStack_a51;
    FUN_1008ad120();
    puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x000107c61180();
    func_0x000107c5c9e4();
    dStack_a98 = dVar25 * 1000.0;
    uStack_ac0 = 0xf;
    uStack_ab0 = 0x100;
    ppuStack_ac8 = &PTR_DAT_11086d7d0;
    uStack_a88 = 0;
    uStack_a90 = 0;
    lStack_a78 = 0;
    lStack_a80 = 0;
    plStack_a68 = (long *)0x0;
    uStack_a70 = 0;
    plStack_a60 = (long *)0x0;
    uStack_a36 = *(undefined2 *)(puVar10 + 0x1a);
    uStack_a48 = 6;
    uStack_a38 = 0x100;
    ppuStack_a50 = &PTR_DAT_11089b010;
    lStack_a00 = 0;
    lStack_a08 = 0;
    plStack_9f0 = (long *)0x0;
    uStack_9f8 = 0;
    plStack_9e8 = (long *)0x0;
    lStack_ae0 = 0;
    lStack_ad8 = 0;
    uStack_ad0 = 0;
    uStack_ae4 = 0;
    puVar11 = &uStack_9e0;
    puStack_a18 = puVar10;
    pppuStack_a10 = &ppuStack_ac8;
    FUN_1000e77a0(puVar11,&ppuStack_a50,&lStack_ae0,&uStack_ae4);
    func_0x000107c61180();
    if (lStack_ae0 != 0) {
      lStack_ad8 = lStack_ae0;
      func_0x000107c60e14();
    }
    plVar17 = plStack_9e8;
    ppuStack_a50 = &PTR_DAT_11089b010;
    plStack_9e8 = (long *)0x0;
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    plVar17 = plStack_9f0;
    plStack_9f0 = (long *)0x0;
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    if (lStack_a08 != 0) {
      lStack_a00 = lStack_a08;
      func_0x000107c60e14();
    }
    plVar17 = plStack_a60;
    ppuStack_ac8 = &PTR_DAT_11086d7d0;
    plStack_a60 = (long *)0x0;
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    plVar17 = plStack_a68;
    plStack_a68 = (long *)0x0;
    if (plVar17 != (long *)0x0) {
      (**(code **)(*plVar17 + 8))();
    }
    if (lStack_a80 != 0) {
      lStack_a78 = lStack_a80;
      func_0x000107c60e14();
    }
    func_0x000107c61170(puVar6);
    FUN_1000e76e0(&uStack_9b8);
    func_0x000107c61170(uStack_9c8);
    func_0x000107c61170(uStack_9d0);
    func_0x000107c61170(ppuVar23);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
    return;
  }
  return;
}



/* Entry: 1008aafcc; end: 1008acd43;  */

void FUN_1008aafcc(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined1 uVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  long lVar15;
  long *plVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **unaff_x24;
  undefined **unaff_x25;
  undefined *puVar20;
  undefined **unaff_x26;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined *puVar23;
  double dVar24;
  undefined4 uStack_ae4;
  long lStack_ae0;
  long lStack_ad8;
  undefined8 uStack_ad0;
  undefined **ppuStack_ac8;
  undefined4 uStack_ac0;
  undefined4 uStack_ab0;
  double dStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  long lStack_a80;
  long lStack_a78;
  undefined8 uStack_a70;
  long *plStack_a68;
  long *plStack_a60;
  undefined1 uStack_a51;
  undefined **ppuStack_a50;
  undefined4 uStack_a48;
  undefined2 uStack_a38;
  undefined2 uStack_a36;
  undefined1 *puStack_a18;
  undefined ***pppuStack_a10;
  long lStack_a08;
  long lStack_a00;
  undefined8 uStack_9f8;
  long *plStack_9f0;
  long *plStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined **ppuStack_9a0;
  undefined **ppuStack_998;
  undefined **ppuStack_990;
  undefined **ppuStack_988;
  undefined **ppuStack_980;
  long *plStack_978;
  undefined **ppuStack_970;
  undefined **ppuStack_968;
  undefined1 **ppuStack_960;
  code *pcStack_958;
  undefined *puStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined1 *puStack_938;
  undefined *apuStack_930 [2];
  char cStack_919;
  long lStack_918;
  undefined **ppuStack_910;
  undefined **ppuStack_908;
  undefined **ppuStack_900;
  undefined *puStack_8f8;
  undefined **ppuStack_8f0;
  undefined **ppuStack_8e8;
  undefined1 *puStack_8e0;
  code *pcStack_8d8;
  undefined4 uStack_8c8;
  undefined4 uStack_8c4;
  undefined **ppuStack_8c0;
  undefined **ppuStack_8b8;
  undefined *puStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined *puStack_898;
  undefined8 uStack_890;
  undefined **ppuStack_888;
  undefined **ppuStack_880;
  undefined **ppuStack_878;
  long lStack_870;
  long lStack_868;
  undefined *puStack_860;
  undefined **ppuStack_858;
  undefined **ppuStack_850;
  undefined **ppuStack_848;
  undefined **ppuStack_840;
  undefined8 uStack_838;
  undefined **ppuStack_830;
  undefined **ppuStack_828;
  undefined8 uStack_820;
  long lStack_818;
  undefined8 *puStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  long lStack_7d8;
  long *plStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  long *plStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  long lStack_758;
  long *plStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined *puStack_718;
  undefined8 uStack_710;
  undefined *puStack_708;
  undefined *puStack_700;
  undefined8 *puStack_6f8;
  undefined8 *puStack_6f0;
  undefined *puStack_6e8;
  undefined8 uStack_6e0;
  code *pcStack_6d8;
  undefined *puStack_6d0;
  undefined8 *puStack_6c8;
  undefined *puStack_6c0;
  undefined8 uStack_6b8;
  undefined *puStack_6b0;
  undefined *puStack_6a8;
  undefined8 *puStack_6a0;
  undefined8 *puStack_698;
  undefined8 *puStack_690;
  undefined8 *puStack_688;
  undefined8 *puStack_680;
  undefined8 *puStack_678;
  undefined8 *puStack_670;
  undefined8 *puStack_668;
  undefined8 uStack_660;
  undefined8 *puStack_658;
  undefined8 uStack_650;
  undefined1 uStack_648;
  undefined8 uStack_640;
  undefined8 *puStack_638;
  undefined8 uStack_630;
  undefined1 uStack_628;
  undefined8 uStack_620;
  undefined8 *puStack_618;
  undefined8 uStack_610;
  undefined *puStack_608;
  undefined *puStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 *puStack_5e8;
  undefined8 uStack_5e0;
  undefined *puStack_5d8;
  undefined *puStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 *puStack_5b8;
  undefined8 uStack_5b0;
  undefined *puStack_5a8;
  undefined *puStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 *puStack_588;
  undefined8 uStack_580;
  undefined *puStack_578;
  undefined *puStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 *puStack_558;
  undefined8 uStack_550;
  undefined *puStack_548;
  undefined *puStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 *puStack_528;
  undefined8 uStack_520;
  undefined *puStack_518;
  undefined *puStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 *puStack_4f8;
  undefined8 uStack_4f0;
  undefined *puStack_4e8;
  undefined *puStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  long *plStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 *puStack_488;
  long *plStack_480;
  undefined *puStack_478;
  undefined *puStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 *puStack_448;
  long *plStack_440;
  undefined *puStack_438;
  undefined *puStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_190;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_8c8 = param_6;
  uStack_8c4 = param_7;
  ppuStack_828 = param_1;
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  uStack_838 = param_3;
  func_0x000107c61174(param_3);
  uStack_8a0 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  ppuStack_8b8 = param_2;
  uStack_890 = param_5;
  func_0x000107c49e34(param_2);
  func_0x000107c4badc(param_5);
  ppuVar19 = ppuStack_828;
  func_0x000107c61174(ppuStack_828);
  FUN_1008acedc();
  func_0x000107c61180();
  ppuVar17 = ppuVar19;
  func_0x000107c3e1b8();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar19);
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_178 = 0;
  plStack_180 = (long *)0x0;
  lStack_188 = 0;
  uStack_190 = 0;
  func_0x000107c61174(ppuVar17);
  ppuVar19 = ppuVar17;
  func_0x000107c4080c();
  if (ppuVar19 != (undefined **)0x0) {
    lVar15 = *plStack_180;
    do {
      ppuVar18 = (undefined **)0x0;
      do {
        if (*plStack_180 != lVar15) {
          func_0x000107c61128(ppuVar17);
        }
        uVar4 = *(undefined8 *)(lStack_188 + (long)ppuVar18 * 8);
        func_0x000107c4f638(uVar4);
        func_0x000107c61180();
        func_0x00010805754c(ppuStack_828,uVar4);
        func_0x000107c61170(uVar4);
        ppuVar18 = (undefined **)((long)ppuVar18 + 1);
      } while (ppuVar19 != ppuVar18);
      ppuVar19 = ppuVar17;
      func_0x000107c4080c();
    } while (ppuVar19 != (undefined **)0x0);
  }
  func_0x000107c61170(ppuVar17);
  func_0x000107c61170(ppuVar17);
  func_0x000107c61170(ppuStack_828);
  func_0x000107c61174(ppuStack_8b8);
  ppuVar17 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c61160();
  ppuVar18 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c61160();
  uStack_418 = 0;
  uStack_420 = 0;
  uStack_428 = 0;
  puStack_430 = (undefined *)0x0;
  puStack_438 = (undefined *)0x0;
  plStack_440 = (long *)0x0;
  puStack_448 = (undefined8 *)0x0;
  uStack_450 = 0;
  ppuVar19 = ppuStack_8b8;
  func_0x000107c5d96c();
  func_0x000107c61180();
  ppuVar22 = ppuVar19;
  func_0x000107c4080c();
  if (ppuVar22 != (undefined **)0x0) {
    lVar15 = *plStack_440;
    do {
      ppuVar21 = (undefined **)0x0;
      do {
        if (*plStack_440 != lVar15) {
          func_0x000107c61128(ppuVar19);
        }
        unaff_x24 = (undefined **)puStack_448[(long)ppuVar21];
        func_0x000107c4ce20();
        func_0x000107c61180();
        unaff_x26 = unaff_x24;
        func_0x000107c444fc();
        func_0x000107c61180();
        unaff_x25 = unaff_x26;
        func_0x000107c2aa58();
        func_0x000107c61180();
        func_0x000107c61170(unaff_x26);
        ppuVar5 = unaff_x25;
        func_0x000107c4adac();
        if (ppuVar5 != (undefined **)0x0) {
          ppuVar6 = unaff_x24;
          func_0x000107c49c48();
          ppuVar5 = ppuVar18;
          if ((int)ppuVar6 == 0) {
            ppuVar5 = ppuVar17;
          }
          func_0x000107c56bd8(ppuVar5);
        }
        func_0x000107c61170(unaff_x25);
        func_0x000107c61170(unaff_x24);
        ppuVar21 = (undefined **)((long)ppuVar21 + 1);
      } while (ppuVar22 != ppuVar21);
      ppuVar22 = ppuVar19;
      func_0x000107c4080c();
    } while (ppuVar22 != (undefined **)0x0);
  }
  func_0x000107c61170(ppuVar19);
  uStack_458 = 0;
  uStack_460 = 0;
  uStack_468 = 0;
  puStack_470 = (undefined *)0x0;
  puStack_478 = (undefined *)0x0;
  plStack_480 = (long *)0x0;
  puStack_488 = (undefined8 *)0x0;
  uStack_490 = 0;
  func_0x000107c61174(ppuVar18);
  ppuVar22 = ppuVar18;
  func_0x000107c4080c();
  if (ppuVar22 != (undefined **)0x0) {
    lVar15 = *plStack_480;
    do {
      unaff_x24 = (undefined **)0x0;
      do {
        if (*plStack_480 != lVar15) {
          func_0x000107c61128(ppuVar18);
        }
        ppuVar19 = (undefined **)puStack_488[(long)unaff_x24];
        ppuVar21 = ppuVar17;
        func_0x000107c4d9e8();
        func_0x000107c61180();
        unaff_x25 = (undefined **)(ulong)(ppuVar21 == (undefined **)0x0);
        func_0x000107c61170();
        if (ppuVar21 != (undefined **)0x0) {
          func_0x000107c4ff88(ppuVar17);
        }
        unaff_x24 = (undefined **)((long)unaff_x24 + 1);
      } while (ppuVar22 != unaff_x24);
      ppuVar22 = ppuVar18;
      func_0x000107c4080c();
    } while (ppuVar22 != (undefined **)0x0);
  }
  func_0x000107c61170(ppuVar18);
  func_0x000107c3d66c(ppuVar17);
  ppuVar22 = ppuVar17;
  func_0x000107c40794();
  ppuStack_840 = ppuVar22;
  func_0x000107c61170(ppuVar18);
  func_0x000107c61170(ppuVar17);
  func_0x000107c61170(ppuStack_8b8);
  ppuVar17 = ppuStack_8b8;
  func_0x000107c61174(ppuStack_8b8);
  puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c61160();
  dVar24 = 0.0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_178 = 0;
  plStack_180 = (long *)0x0;
  lStack_188 = 0;
  uStack_190 = 0;
  func_0x000107c5d96c();
  func_0x000107c61180();
  iVar14 = (int)&uStack_190;
  ppuVar18 = ppuVar17;
  func_0x000107c4080c();
  if (ppuVar18 != (undefined **)0x0) {
    lVar15 = *plStack_180;
    do {
      ppuVar22 = (undefined **)0x0;
      do {
        if (*plStack_180 != lVar15) {
          func_0x000107c61128(ppuVar17);
        }
        unaff_x25 = *(undefined ***)(lStack_188 + (long)ppuVar22 * 8);
        ppuVar19 = unaff_x25;
        func_0x000107c4ce20();
        func_0x000107c61180();
        unaff_x26 = ppuVar19;
        func_0x000107c444fc();
        func_0x000107c61180();
        unaff_x24 = unaff_x26;
        func_0x000107c2aa58();
        func_0x000107c61180();
        func_0x000107c61170(unaff_x26);
        ppuVar21 = unaff_x24;
        func_0x000107c4adac();
        if ((ppuVar21 != (undefined **)0x0) &&
           (ppuVar21 = ppuVar19, func_0x000107c49c48(), ((ulong)ppuVar21 & 1) == 0)) {
          func_0x000107c5d968();
          func_0x000107c61180();
          func_0x000107c56bd8(puVar7);
          func_0x000107c61170(unaff_x25);
        }
        func_0x000107c61170(unaff_x24);
        func_0x000107c61170(ppuVar19);
        ppuVar22 = (undefined **)((long)ppuVar22 + 1);
      } while (ppuVar18 != ppuVar22);
      iVar14 = (int)&uStack_190;
      ppuVar18 = ppuVar17;
      func_0x000107c4080c();
    } while (ppuVar18 != (undefined **)0x0);
  }
  func_0x000107c61170(ppuVar17);
  puVar11 = puVar7;
  func_0x000107c40794();
  puStack_898 = puVar11;
  func_0x000107c61170(puVar7);
  func_0x000107c61170(ppuStack_8b8);
  ppuVar18 = ppuStack_8b8;
  ppuVar22 = ppuStack_8b8;
  func_0x000107c5da14();
  func_0x000107c61180();
  ppuVar21 = ppuVar18;
  ppuStack_888 = ppuVar22;
  func_0x000107c49e34();
  if (((ulong)ppuVar21 & 1) == 0) {
    ppuVar22 = ppuStack_840;
    func_0x000107c40808();
    if (ppuVar22 == (undefined **)0x0) {
      ppuVar22 = (undefined **)0x0;
      ppuVar21 = ppuStack_888;
      func_0x000107c40808();
      if (ppuVar21 == (undefined **)0x0) goto LAB_1008ac6b0;
    }
    ppuVar18 = ppuStack_840;
    func_0x000107c3db60();
    func_0x000107c61180();
    func_0x000107c40808();
    func_0x000107c4bad0(uStack_890);
  }
  else {
    func_0x000107c40808(ppuStack_840);
    func_0x000107c4bad4(uStack_890);
    ppuVar18 = (undefined **)0x0;
  }
  puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  ppuStack_8c0 = ppuVar18;
  func_0x000107c61160();
  ppuVar18 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_8a8 = puVar7;
  func_0x000107c61160();
  ppuVar22 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  ppuStack_848 = ppuVar18;
  func_0x000107c61160();
  ppuVar18 = ppuStack_828;
  ppuStack_880 = ppuVar22;
  func_0x0001084dc8b8(ppuStack_828,ppuStack_8c0);
  func_0x000107c61180();
  ppuVar22 = ppuVar18;
  func_0x000107c4d2d4();
  ppuStack_858 = ppuVar22;
  func_0x000107c61170(ppuVar18);
  puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c61160();
  ppuVar18 = ppuStack_840;
  puVar11 = (undefined *)0x0;
  uStack_498 = 0;
  uStack_4a0 = 0;
  uStack_4a8 = 0;
  uStack_4b0 = 0;
  uStack_4b8 = 0;
  plStack_4c0 = (long *)0x0;
  uStack_4c8 = 0;
  uStack_4d0 = 0;
  puStack_8b0 = puVar7;
  func_0x000107c61174(ppuStack_840);
  func_0x000107c4080c();
  if (ppuVar18 == (undefined **)0x0) {
    lStack_868 = 0;
    puStack_860 = (undefined *)0x0;
  }
  else {
    lStack_868 = 0;
    puStack_860 = (undefined *)0x0;
    lStack_870 = *plStack_4c0;
    ppuStack_850 = ppuVar18;
    do {
      ppuStack_830 = (undefined **)0x0;
      do {
        if (*plStack_4c0 != lStack_870) {
          func_0x000107c61128(ppuStack_840);
        }
        ppuVar17 = ppuStack_840;
        func_0x000107c4d9e8();
        func_0x000107c61180();
        ppuVar18 = ppuStack_858;
        ppuVar22 = ppuStack_858;
        func_0x000107c4d9e8();
        func_0x000107c61180();
        func_0x000107c4ff88(ppuVar18);
        ppuVar18 = ppuVar17;
        func_0x000107c49c48();
        if ((int)ppuVar18 == 0) {
          ppuVar19 = ppuVar17;
          func_0x000107c4cb00();
          ppuStack_878 = ppuVar19;
          func_0x000107c4cb00(ppuVar17);
          func_0x000107c4bae4(uStack_890);
          uStack_450 = 0;
          puStack_6a0 = &uStack_450;
          plStack_440 = (long *)0x3032000000;
          puStack_438 = &UNK_108055b50;
          puStack_430 = &UNK_108055b60;
          uStack_428 = 0;
          uStack_490 = 0;
          puStack_698 = &uStack_490;
          plStack_480 = (long *)0x3032000000;
          puStack_478 = &UNK_108055b50;
          puStack_470 = &UNK_108055b60;
          uStack_468 = 0;
          uStack_500 = 0;
          puStack_690 = &uStack_500;
          uStack_4f0 = 0x3032000000;
          puStack_4e8 = &UNK_108055b50;
          puStack_4e0 = &UNK_108055b60;
          uStack_4d8 = 0;
          uStack_530 = 0;
          puStack_688 = &uStack_530;
          uStack_520 = 0x3032000000;
          puStack_518 = &UNK_108055b50;
          puStack_510 = &UNK_108055b60;
          uStack_508 = 0;
          uStack_560 = 0;
          puStack_680 = &uStack_560;
          uStack_550 = 0x3032000000;
          puStack_548 = &UNK_108055b50;
          puStack_540 = &UNK_108055b60;
          uStack_538 = 0;
          uStack_590 = 0;
          puStack_588 = &uStack_590;
          uStack_580 = 0x3032000000;
          puStack_578 = &UNK_108055b50;
          puStack_570 = &UNK_108055b60;
          uStack_568 = 0;
          uStack_5c0 = 0;
          puStack_5b8 = &uStack_5c0;
          uStack_5b0 = 0x3032000000;
          puStack_5a8 = &UNK_108055b50;
          puStack_5a0 = &UNK_108055b60;
          uStack_598 = 0;
          uStack_5f0 = 0;
          puStack_5e8 = &uStack_5f0;
          uStack_5e0 = 0x3032000000;
          puStack_5d8 = &UNK_108055b50;
          puStack_5d0 = &UNK_108055b60;
          uStack_5c8 = 0;
          uStack_620 = 0;
          puStack_678 = &uStack_620;
          uStack_610 = 0x3032000000;
          puStack_608 = &UNK_108055b50;
          puStack_600 = &UNK_108055b60;
          uStack_5f8 = 0;
          uStack_640 = 0;
          puStack_670 = &uStack_640;
          uStack_630 = 0x2020000000;
          uStack_628 = 0;
          uStack_660 = 0;
          puStack_668 = &uStack_660;
          uStack_650 = 0x2020000000;
          uStack_648 = 0;
          puStack_6c0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_6b8 = 0xc2000000;
          puStack_6b0 = &UNK_108055ff4;
          puStack_6a8 = &UNK_110a19260;
          puStack_658 = puStack_668;
          puStack_638 = puStack_670;
          puStack_618 = puStack_678;
          puStack_558 = puStack_680;
          puStack_528 = puStack_688;
          puStack_4f8 = puStack_690;
          puStack_488 = puStack_698;
          puStack_448 = puStack_6a0;
          func_0x000108055b68(ppuVar17,uStack_838,&puStack_6c0);
          puVar7 = puStack_898;
          func_0x000107c4d9e8();
          func_0x000107c61180();
          ppuVar19 = ppuVar22;
          func_0x000107c3eb34();
          func_0x000107c61180();
          puStack_6e8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_6e0 = 0xc2000000;
          pcStack_6d8 = (code *)&UNK_108056298;
          puStack_6d0 = &UNK_1108a5d38;
          puStack_6c8 = &uStack_590;
          func_0x000107c61174(puVar7);
          func_0x000107c61174(ppuVar19);
          func_0x000107c61174(&puStack_6e8);
          if (puVar7 == (undefined *)0x0) {
            func_0x000107c61174(ppuVar19);
            puVar20 = *(undefined **)(puStack_6c8[1] + 0x28);
            *(undefined ***)(puStack_6c8[1] + 0x28) = ppuVar19;
          }
          else {
            puVar20 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x000107c61160(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
            func_0x000107c3d7a0();
            puVar11 = puVar7;
            func_0x000107c4d618(puVar7);
            func_0x000107c61180();
            puVar8 = puVar11;
            FUN_100504554();
            func_0x000107c3d7a0(puVar20);
            func_0x000107c61170(puVar8);
            func_0x000107c61170(puVar11);
            puVar11 = puVar7;
            func_0x000107c50064();
            func_0x000107c61180();
            puVar8 = puVar11;
            FUN_100504554();
            func_0x000107c61170(puVar11);
            puVar11 = (undefined *)0x0;
            uStack_158 = 0;
            uStack_160 = 0;
            uStack_168 = 0;
            uStack_170 = 0;
            uStack_178 = 0;
            plStack_180 = (long *)0x0;
            lStack_188 = 0;
            uStack_190 = 0;
            func_0x000107c61174(puVar8);
            puVar9 = puVar8;
            func_0x000107c4080c();
            if (puVar9 != (undefined *)0x0) {
              lVar15 = *plStack_180;
              do {
                puVar23 = (undefined *)0x0;
                do {
                  if (*plStack_180 != lVar15) {
                    func_0x000107c61128(puVar8);
                  }
                  func_0x000107c4ff80(puVar20);
                  puVar23 = puVar23 + 1;
                } while (puVar9 != puVar23);
                puVar9 = puVar8;
                func_0x000107c4080c();
              } while (puVar9 != (undefined *)0x0);
            }
            func_0x000107c61170(puVar8);
            (*pcStack_6d8)(&puStack_6e8,puVar20);
            func_0x000107c61170(puVar8);
          }
          func_0x000107c61170(puVar20);
          func_0x000107c61170(&puStack_6e8);
          func_0x000107c61170(ppuVar19);
          func_0x000107c61170(puVar7);
          func_0x000107c61170(ppuVar19);
          func_0x000107c61170(puVar7);
          puStack_718 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_710 = 0xc2000000;
          puStack_708 = &UNK_108056678;
          puStack_700 = &UNK_110a19290;
          puStack_6f8 = &uStack_5c0;
          puStack_6f0 = &uStack_5f0;
          func_0x0001080562d0(puStack_488[5],uStack_8a0,puStack_588[5],&puStack_718);
          ppuVar19 = ppuVar17;
          func_0x000107c4114c();
          func_0x000108055b2c();
          unaff_x24 = (undefined **)PTR_PTR_1126d8f60;
          if (ppuVar22 == (undefined **)0x0) {
            func_0x000108509684(PTR_PTR_1126d8f60,0);
            func_0x000107c61180();
            if (unaff_x24 != (undefined **)0x0) {
              func_0x000107c61198(unaff_x24);
              unaff_x26 = (undefined **)0x1;
              goto LAB_1008abc48;
            }
            unaff_x24 = (undefined **)0x0;
            bVar2 = true;
            unaff_x26 = (undefined **)0x1;
          }
          else {
            func_0x000108509e24(PTR_PTR_1126d8f60,ppuVar22);
            func_0x000107c61180();
            ppuVar18 = ppuVar22;
            func_0x000107c5d0f0();
            unaff_x26 = (undefined **)(ulong)(ppuVar18 == (undefined **)0x0);
            if (unaff_x24 == (undefined **)0x0) {
              unaff_x24 = (undefined **)0x0;
              bVar2 = true;
            }
            else {
LAB_1008abc48:
              bVar2 = false;
              unaff_x24[5] = (undefined *)ppuVar19;
            }
          }
          ppuVar18 = ppuVar17;
          func_0x000108056708();
          if (!bVar2) {
            unaff_x24[0x14] = (undefined *)ppuVar18;
          }
          ppuVar18 = ppuVar17;
          func_0x000107c42120(ppuVar17);
          func_0x000107c61180();
          if (bVar2) {
            func_0x000107c61170(ppuVar18);
          }
          else {
            func_0x000107c61198(unaff_x24);
            func_0x000107c61170(ppuVar18);
            *(undefined1 *)((long)unaff_x24 + 0x15) = 0;
          }
          uVar10 = puStack_618[5];
          func_0x000107c40d14(uVar10);
          func_0x000107c61180();
          uVar4 = uStack_838;
          func_0x000107c49d0c();
          if (!bVar2) {
            uVar3 = (undefined1)uVar4;
            if (ppuVar19 == (undefined **)0x6) {
              uVar3 = 1;
            }
            if (ppuVar19 == (undefined **)0xa) {
              uVar3 = 1;
            }
            *(undefined1 *)((long)unaff_x24 + 0x16) = uVar3;
          }
          func_0x000107c61170(uVar10);
          uVar10 = puStack_618[5];
          func_0x000107c40d14(uVar10);
          func_0x000107c61180();
          ppuVar18 = ppuVar17;
          func_0x000107c3e4e4();
          uVar3 = *(undefined1 *)(puStack_658 + 3);
          uVar4 = uStack_838;
          func_0x000107c49d0c();
          if (!bVar2) {
            uVar1 = (char)ppuVar18;
            if ((int)uVar4 == 0) {
              uVar1 = uVar3;
            }
            *(undefined1 *)((long)unaff_x24 + 0x17) = uVar1;
          }
          func_0x000107c61170(uVar10);
          ppuVar18 = ppuVar17;
          func_0x000107c4454c();
          if (!bVar2) {
            unaff_x24[0xc] = (undefined *)ppuVar18;
            func_0x000107c61198(unaff_x24);
            *(undefined1 *)((long)unaff_x24 + 0x14) = *(undefined1 *)(puStack_638 + 3);
            func_0x000107c61198(unaff_x24);
            func_0x000107c61198(unaff_x24);
            func_0x000107c61198(unaff_x24);
            func_0x000107c61198(unaff_x24);
            func_0x000107c61198(unaff_x24);
            func_0x000107c61198(unaff_x24);
            func_0x000107c61198(unaff_x24);
            func_0x000107c61198(unaff_x24);
          }
          unaff_x25 = ppuVar17;
          func_0x0001080567b0();
          func_0x000107c61180();
          if (!bVar2) {
            func_0x000107c61198(unaff_x24);
          }
          func_0x000107c61170(unaff_x25);
          ppuVar18 = ppuVar17;
          func_0x000107c4114c();
          if ((((int)ppuVar18 == 7) ||
              (ppuVar18 = ppuVar17, func_0x000107c4114c(), (int)ppuVar18 == 6)) ||
             (ppuVar18 = ppuVar17, func_0x000107c4114c(), (int)ppuVar18 == 8)) {
            unaff_x25 = ppuVar17;
            func_0x000107c4cafc();
            func_0x000107c61180();
            func_0x00010805732c();
            if (!bVar2) {
              unaff_x24[0x12] = puVar11;
            }
            func_0x000107c61170(unaff_x25);
          }
          ppuVar18 = ppuVar17;
          func_0x000107c4114c();
          if ((int)ppuVar18 == 7) {
            unaff_x25 = ppuVar17;
            func_0x000107c444fc();
            func_0x000107c61180();
            ppuVar18 = unaff_x25;
            func_0x000107c2aa58();
            func_0x000107c61180();
            func_0x000107c3d798(ppuStack_880);
            func_0x000107c61170(ppuVar18);
            func_0x000107c61170(unaff_x25);
          }
          if ((int)unaff_x26 != 0) {
            puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x000107c4d968(PTR__OBJC_CLASS___NSNumber_1126ae570);
            func_0x000107c61180();
            func_0x000107c56bd8(puStack_8b0);
            func_0x000107c61170(puVar7);
            if (ppuVar19 == (undefined **)0x1) {
              lVar15 = puStack_618[5];
              func_0x000107c40d14();
              func_0x000107c61180();
              func_0x000107c61170();
              if (lVar15 != 0) {
                uVar4 = puStack_618[5];
                func_0x000107c40d14(uVar4);
                func_0x000107c61180();
                func_0x000107c3d798(puStack_8a8);
                func_0x000107c61170(uVar4);
              }
            }
          }
          func_0x000107c60bcc(&uStack_660,8);
          func_0x000107c60bcc(&uStack_640,8);
          func_0x000107c60bcc(&uStack_620,8);
          func_0x000107c61170(uStack_5f8);
          func_0x000107c60bcc(&uStack_5f0,8);
          func_0x000107c61170(uStack_5c8);
          func_0x000107c60bcc(&uStack_5c0,8);
          func_0x000107c61170(uStack_598);
          func_0x000107c60bcc(&uStack_590,8);
          func_0x000107c61170(uStack_568);
          func_0x000107c60bcc(&uStack_560,8);
          func_0x000107c61170(uStack_538);
          func_0x000107c60bcc(&uStack_530,8);
          func_0x000107c61170(uStack_508);
          func_0x000107c60bcc(&uStack_500,8);
          func_0x000107c61170(uStack_4d8);
          func_0x000107c60bcc(&uStack_490,8);
          func_0x000107c61170(uStack_468);
          func_0x000107c60bcc(&uStack_450,8);
          func_0x000107c61170(uStack_428);
          lStack_868 = lStack_868 + 1;
          puStack_860 = (undefined *)((long)ppuStack_878 + (long)puStack_860);
          ppuVar19 = ppuVar22;
LAB_1008ac0a8:
          func_0x000107c5c28c(ppuStack_828);
          func_0x000107c611b0();
          func_0x000107c61170(unaff_x24);
        }
        else {
          unaff_x24 = (undefined **)0x0;
          func_0x000107c3d798(ppuStack_848);
          if (ppuVar22 != (undefined **)0x0) {
            unaff_x24 = (undefined **)PTR_PTR_1126d8f60;
            func_0x00010850a65c(PTR_PTR_1126d8f60,ppuVar22);
            func_0x000107c61180();
            ppuVar18 = ppuVar22;
            func_0x000107c5d0f0();
            if (ppuVar18 == (undefined **)0x1) {
              unaff_x25 = ppuVar22;
              func_0x000107c40c54();
              func_0x000107c61180();
              ppuVar18 = unaff_x25;
              func_0x000107c40d14();
              func_0x000107c61180();
              func_0x000107c61170();
              func_0x000107c61170(unaff_x25);
              if (ppuVar18 != (undefined **)0x0) {
                unaff_x25 = ppuVar22;
                func_0x000107c40c54();
                func_0x000107c61180();
                ppuVar18 = unaff_x25;
                func_0x000107c40d14();
                func_0x000107c61180();
                func_0x000107c3d798(puStack_8a8);
                func_0x000107c61170(ppuVar18);
                func_0x000107c61170(unaff_x25);
              }
            }
            goto LAB_1008ac0a8;
          }
        }
        func_0x000107c61170(ppuVar22);
        func_0x000107c61170(ppuVar17);
        ppuStack_830 = (undefined **)((long)ppuStack_830 + 1);
      } while (ppuStack_830 != ppuStack_850);
      ppuVar18 = ppuStack_840;
      func_0x000107c4080c();
      ppuStack_850 = ppuVar18;
    } while (ppuVar18 != (undefined **)0x0);
  }
  ppuStack_850 = (undefined **)0x0;
  func_0x000107c61170(ppuStack_840);
  func_0x000107c4bae8(uStack_890);
  func_0x000107c4bae0(uStack_890);
  ppuVar18 = ppuStack_8b8;
  func_0x000107c49e34();
  if (((int)ppuVar18 != 0) &&
     (ppuVar18 = ppuStack_858, func_0x000107c40808(), ppuVar18 != (undefined **)0x0)) {
    func_0x000107c40808(ppuStack_858);
    func_0x000107c4bad8(uStack_890);
    uStack_738 = 0;
    uStack_740 = 0;
    uStack_728 = 0;
    uStack_730 = 0;
    lStack_758 = 0;
    uStack_760 = 0;
    uStack_748 = 0;
    plStack_750 = (long *)0x0;
    ppuVar18 = ppuStack_858;
    func_0x000107c3dbc0();
    func_0x000107c61180();
    ppuVar22 = ppuVar18;
    func_0x000107c4080c();
    if (ppuVar22 != (undefined **)0x0) {
      lVar15 = *plStack_750;
      unaff_x25 = &PTR_PTR_1126d8000;
      do {
        unaff_x26 = (undefined **)0x0;
        do {
          if (*plStack_750 != lVar15) {
            func_0x000107c61128(ppuVar18);
          }
          ppuVar19 = *(undefined ***)(lStack_758 + (long)unaff_x26 * 8);
          ppuVar17 = (undefined **)PTR_PTR_1126d8f60;
          func_0x00010850a65c(PTR_PTR_1126d8f60,ppuVar19);
          func_0x000107c61180();
          func_0x000107c5c28c(ppuStack_828);
          func_0x000107c611b0();
          unaff_x24 = ppuVar19;
          func_0x000107c4f638();
          func_0x000107c61180();
          func_0x000107c3d798(ppuStack_848);
          func_0x000107c61170(unaff_x24);
          ppuVar21 = ppuVar19;
          func_0x000107c5d0f0();
          if (ppuVar21 == (undefined **)0x1) {
            unaff_x24 = ppuVar19;
            func_0x000107c40c54();
            func_0x000107c61180();
            ppuVar21 = unaff_x24;
            func_0x000107c40d14();
            func_0x000107c61180();
            func_0x000107c61170();
            func_0x000107c61170(unaff_x24);
            if (ppuVar21 != (undefined **)0x0) {
              func_0x000107c40c54();
              func_0x000107c61180();
              unaff_x24 = ppuVar19;
              func_0x000107c40d14();
              func_0x000107c61180();
              func_0x000107c3d798(puStack_8a8);
              func_0x000107c61170(unaff_x24);
              func_0x000107c61170(ppuVar19);
            }
          }
          func_0x000107c61170(ppuVar17);
          unaff_x26 = (undefined **)((long)unaff_x26 + 1);
        } while (ppuVar22 != unaff_x26);
        ppuVar22 = ppuVar18;
        func_0x000107c4080c();
      } while (ppuVar22 != (undefined **)0x0);
    }
    func_0x000107c61170(ppuVar18);
  }
  ppuVar18 = ppuStack_8b8;
  func_0x000107c4d694(ppuStack_8b8);
  func_0x000107c61180();
  func_0x00010805bf40(ppuStack_828,ppuVar18,uStack_838);
  func_0x000107c61170(ppuVar18);
  puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c61160();
  puVar11 = puStack_8b0;
  func_0x000107c40808();
  if (puVar11 != (undefined *)0x0) {
    ppuVar18 = ppuStack_828;
    func_0x000108054264(ppuStack_828,puStack_8b0,uStack_8c8);
    func_0x000107c61180();
    func_0x000107c3d66c(puVar7);
    func_0x000107c61170(ppuVar18);
  }
  ppuVar18 = ppuStack_848;
  func_0x000107c40808();
  if (ppuVar18 != (undefined **)0x0) {
    func_0x0001084e969c(ppuStack_828,ppuStack_848);
    ppuVar17 = ppuStack_848;
    uStack_778 = 0;
    uStack_780 = 0;
    uStack_768 = 0;
    uStack_770 = 0;
    uStack_798 = 0;
    uStack_7a0 = 0;
    uStack_788 = 0;
    plStack_790 = (long *)0x0;
    func_0x000107c61174(ppuStack_848);
    func_0x000107c4080c();
    if (ppuVar17 != (undefined **)0x0) {
      lVar15 = *plStack_790;
      do {
        ppuVar19 = (undefined **)0x0;
        do {
          if (*plStack_790 != lVar15) {
            func_0x000107c61128(ppuStack_848);
          }
          func_0x000107c56bd8(puVar7);
          ppuVar19 = (undefined **)((long)ppuVar19 + 1);
        } while (ppuVar17 != ppuVar19);
        ppuVar17 = ppuStack_848;
        func_0x000107c4080c();
      } while (ppuVar17 != (undefined **)0x0);
    }
    ppuVar17 = (undefined **)0x0;
    func_0x000107c61170(ppuStack_848);
  }
  puVar11 = puVar7;
  func_0x000107c40808();
  if (puVar11 != (undefined *)0x0) {
    func_0x0001084ee948(ppuStack_828,2,puVar7,0,PTR____NSArray0__struct_11034ab48,
                        PTR____NSDictionary0__struct_11034ab58,
                        PTR____NSDictionary0__struct_11034ab58,uStack_8c4);
  }
  puVar11 = puStack_8a8;
  func_0x000107c40808();
  ppuVar18 = ppuStack_828;
  if (puVar11 != (undefined *)0x0) {
    ppuVar17 = ppuStack_828;
    func_0x0001084ea0fc(ppuStack_828,puStack_8a8);
    func_0x000107c61180();
    func_0x0001084ee948(ppuVar18,1,ppuVar17,0,PTR____NSArray0__struct_11034ab48,
                        PTR____NSDictionary0__struct_11034ab58,
                        PTR____NSDictionary0__struct_11034ab58,uStack_8c4);
    func_0x000107c61170(ppuVar17);
  }
  ppuVar18 = ppuStack_888;
  uStack_7b8 = 0;
  uStack_7c0 = 0;
  uStack_7a8 = 0;
  uStack_7b0 = 0;
  lStack_7d8 = 0;
  uStack_7e0 = 0;
  uStack_7c8 = 0;
  plStack_7d0 = (long *)0x0;
  func_0x000107c61174(ppuStack_888);
  func_0x000107c4080c();
  if (ppuVar18 != (undefined **)0x0) {
    lVar15 = *plStack_7d0;
    do {
      unaff_x25 = (undefined **)0x0;
      do {
        if (*plStack_7d0 != lVar15) {
          func_0x000107c61128(ppuStack_888);
        }
        ppuVar17 = *(undefined ***)(lStack_7d8 + (long)unaff_x25 * 8);
        ppuVar19 = ppuVar17;
        func_0x000107c4e4e4();
        func_0x000107c61180();
        unaff_x24 = ppuVar19;
        func_0x000107c49c48();
        func_0x000107c61170(ppuVar19);
        if ((int)unaff_x24 == 0) {
          func_0x000108057638(ppuStack_828,ppuVar17);
        }
        else {
          func_0x000107c4e4e4();
          func_0x000107c61180();
          ppuVar19 = ppuVar17;
          func_0x000107c444fc();
          func_0x000107c61180();
          unaff_x24 = ppuVar19;
          func_0x000107c2aa58();
          func_0x000107c61180();
          func_0x00010805754c(ppuStack_828,unaff_x24);
          func_0x000107c61170(unaff_x24);
          func_0x000107c61170(ppuVar19);
          func_0x000107c61170(ppuVar17);
        }
        unaff_x25 = (undefined **)((long)unaff_x25 + 1);
      } while (ppuVar18 != unaff_x25);
      ppuVar18 = ppuStack_888;
      func_0x000107c4080c();
    } while (ppuVar18 != (undefined **)0x0);
  }
  func_0x000107c61170(ppuStack_888);
  ppuVar22 = ppuStack_880;
  dVar24 = 0.0;
  uStack_7f8 = 0;
  uStack_800 = 0;
  uStack_7e8 = 0;
  uStack_7f0 = 0;
  lStack_818 = 0;
  uStack_820 = 0;
  uStack_808 = 0;
  puStack_810 = (undefined8 *)0x0;
  func_0x000107c61174(ppuStack_880);
  iVar14 = (int)&uStack_820;
  ppuVar18 = ppuVar22;
  func_0x000107c4080c();
  if (ppuVar18 != (undefined **)0x0) {
    ppuVar22 = (undefined **)*puStack_810;
    do {
      ppuVar17 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_810 != ppuVar22) {
          func_0x000107c61128(ppuStack_880);
        }
        func_0x00010805754c(ppuStack_828,*(undefined8 *)(lStack_818 + (long)ppuVar17 * 8));
        ppuVar17 = (undefined **)((long)ppuVar17 + 1);
      } while (ppuVar18 != ppuVar17);
      iVar14 = (int)&uStack_820;
      ppuVar18 = ppuStack_880;
      func_0x000107c4080c();
    } while (ppuVar18 != (undefined **)0x0);
  }
  ppuVar18 = (undefined **)0x0;
  func_0x000107c61170(ppuStack_880);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puStack_8b0);
  func_0x000107c61170(ppuStack_858);
  func_0x000107c61170(ppuStack_880);
  func_0x000107c61170(ppuStack_848);
  func_0x000107c61170(puStack_8a8);
  func_0x000107c61170(ppuStack_8c0);
LAB_1008ac6b0:
  func_0x000107c61170(ppuStack_888);
  func_0x000107c61170(puStack_898);
  func_0x000107c61170(ppuStack_840);
  func_0x000107c61170(uStack_890);
  func_0x000107c61170(uStack_8a0);
  func_0x000107c61170(uStack_838);
  func_0x000107c61170(ppuStack_8b8);
  ppuVar21 = ppuStack_828;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puStack_8b0);
  func_0x000107c61170(ppuStack_858);
  func_0x000107c61170(ppuStack_880);
  func_0x000107c61170(ppuStack_848);
  func_0x000107c61170(puStack_8a8);
  func_0x000107c61170(ppuStack_8c0);
  func_0x000107c61170(ppuStack_888);
  func_0x000107c61170(puStack_898);
  func_0x000107c61170(ppuStack_840);
  func_0x000107c61170(uStack_890);
  func_0x000107c61170(uStack_8a0);
  func_0x000107c61170(uStack_838);
  func_0x000107c61170(ppuStack_8b8);
  func_0x000107c61170(ppuStack_828);
  func_0x000107c60bd8();
  puVar11 = ppuVar21[1];
  ppuVar21 = &PTR____CFConstantStringClassReference_110dad378;
  if (iVar14 == 0) {
    ppuVar21 = &PTR____CFConstantStringClassReference_110dad398;
  }
  pcStack_8d8 = FUN_1008acd44;
  lStack_918 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_910 = unaff_x24;
  ppuStack_908 = ppuVar19;
  ppuStack_900 = ppuVar17;
  puStack_8f8 = puVar7;
  ppuStack_8f0 = ppuVar18;
  ppuStack_8e8 = ppuVar22;
  puStack_8e0 = &stack0xfffffffffffffff0;
  func_0x000107c61174(ppuVar21);
  plVar16 = (long *)0x0;
  if (puVar11 != (undefined *)0x0) {
    plVar16 = *(long **)(puVar11 + 8);
    func_0x000107c61174(ppuVar21);
    if (ppuVar21 == (undefined **)0x0) {
      ppuVar17 = (undefined **)&UNK_10f44f7d9;
    }
    else {
      ppuVar17 = ppuVar21;
      func_0x000107c61178(ppuVar21);
      func_0x000107c3ac4c();
    }
    func_0x000107c61170(ppuVar21);
    ppuVar19 = apuStack_930;
    FUN_10002b838(apuStack_930,ppuVar17);
    puStack_950 = (undefined *)0x0;
    uStack_948 = 0;
    uStack_940 = 0;
    FUN_10007e1e8(&puStack_950,apuStack_930,&lStack_918,1);
    (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_110a03718,&puStack_950,1);
    puStack_938 = (undefined1 *)&puStack_950;
    FUN_10007e5dc(&puStack_938);
    ppuVar17 = &puStack_950;
    if (cStack_919 < '\0') {
      func_0x000107c60e14(apuStack_930[0]);
      ppuVar17 = &puStack_950;
    }
  }
  ppuVar18 = ppuVar21;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_918) {
    func_0x000107c60e78();
    func_0x000107c61170(ppuVar21);
    func_0x000107c61170(ppuVar21);
    ppuVar22 = ppuVar18;
    func_0x000107c60bd8();
    pcStack_958 = FUN_1008acedc;
    ppuStack_9a0 = unaff_x26;
    ppuStack_998 = unaff_x25;
    ppuStack_990 = unaff_x24;
    ppuStack_988 = ppuVar19;
    ppuStack_980 = ppuVar17;
    plStack_978 = plVar16;
    ppuStack_970 = ppuVar18;
    ppuStack_968 = ppuVar21;
    ppuStack_960 = &puStack_8e0;
    func_0x000107c61174();
    func_0x000107c61158(PTR_PTR_1126d8ff0);
    if (ppuVar22 == (undefined **)0x0) {
      uStack_9b0 = 0;
      dVar24 = 0.0;
      uStack_9c8 = 0;
      uStack_9d0 = 0;
      uStack_9b8 = 0;
      uStack_9c0 = 0;
      uStack_9d8 = 0;
      uStack_9e0 = 0;
    }
    else {
      func_0x000107c430a4(&uStack_9e0,ppuVar22);
    }
    puVar12 = &uStack_a51;
    FUN_1008ad120();
    puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x000107c61180();
    func_0x000107c5c9e4();
    dStack_a98 = dVar24 * 1000.0;
    uStack_ac0 = 0xf;
    uStack_ab0 = 0x100;
    ppuStack_ac8 = &PTR_DAT_11086d7d0;
    uStack_a88 = 0;
    uStack_a90 = 0;
    lStack_a78 = 0;
    lStack_a80 = 0;
    plStack_a68 = (long *)0x0;
    uStack_a70 = 0;
    plStack_a60 = (long *)0x0;
    uStack_a36 = *(undefined2 *)(puVar12 + 0x1a);
    uStack_a48 = 6;
    uStack_a38 = 0x100;
    ppuStack_a50 = &PTR_DAT_11089b010;
    lStack_a00 = 0;
    lStack_a08 = 0;
    plStack_9f0 = (long *)0x0;
    uStack_9f8 = 0;
    plStack_9e8 = (long *)0x0;
    lStack_ae0 = 0;
    lStack_ad8 = 0;
    uStack_ad0 = 0;
    uStack_ae4 = 0;
    puVar13 = &uStack_9e0;
    puStack_a18 = puVar12;
    pppuStack_a10 = &ppuStack_ac8;
    FUN_1000e77a0(puVar13,&ppuStack_a50,&lStack_ae0,&uStack_ae4);
    func_0x000107c61180();
    if (lStack_ae0 != 0) {
      lStack_ad8 = lStack_ae0;
      func_0x000107c60e14();
    }
    plVar16 = plStack_9e8;
    ppuStack_a50 = &PTR_DAT_11089b010;
    plStack_9e8 = (long *)0x0;
    if (plVar16 != (long *)0x0) {
      (**(code **)(*plVar16 + 8))();
    }
    plVar16 = plStack_9f0;
    plStack_9f0 = (long *)0x0;
    if (plVar16 != (long *)0x0) {
      (**(code **)(*plVar16 + 8))();
    }
    if (lStack_a08 != 0) {
      lStack_a00 = lStack_a08;
      func_0x000107c60e14();
    }
    plVar16 = plStack_a60;
    ppuStack_ac8 = &PTR_DAT_11086d7d0;
    plStack_a60 = (long *)0x0;
    if (plVar16 != (long *)0x0) {
      (**(code **)(*plVar16 + 8))();
    }
    plVar16 = plStack_a68;
    plStack_a68 = (long *)0x0;
    if (plVar16 != (long *)0x0) {
      (**(code **)(*plVar16 + 8))();
    }
    if (lStack_a80 != 0) {
      lStack_a78 = lStack_a80;
      func_0x000107c60e14();
    }
    func_0x000107c61170(puVar7);
    FUN_1000e76e0(&uStack_9b8);
    func_0x000107c61170(uStack_9c8);
    func_0x000107c61170(uStack_9d0);
    func_0x000107c61170(ppuVar22);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
    return;
  }
  return;
}



/* Entry: 1008acd44; end: 1008acd67; -[SCStoriesGrapheneMetricsEmitter logCustomStoriesIsFullSync:] */

void FUN_1008acd44(double param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined4 uStack_214;
  long lStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined **ppuStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1e0;
  double dStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  long *plStack_198;
  long *plStack_190;
  undefined1 uStack_181;
  undefined **ppuStack_180;
  undefined4 uStack_178;
  undefined2 uStack_168;
  undefined2 uStack_166;
  undefined1 *puStack_148;
  undefined ***pppuStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar2 = *(long *)(param_2 + 8);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(ppuVar1);
  if (lVar2 != 0) {
    plVar7 = *(long **)(lVar2 + 8);
    func_0x000107c61174(ppuVar1);
    if (ppuVar1 == (undefined **)0x0) {
      ppuVar3 = (undefined **)&UNK_10f44f7d9;
    }
    else {
      ppuVar3 = ppuVar1;
      func_0x000107c61178(ppuVar1);
      func_0x000107c3ac4c();
    }
    func_0x000107c61170(ppuVar1);
    FUN_10002b838(auStack_60,ppuVar3);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    FUN_10007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a03718,&uStack_80,1);
    puStack_68 = (undefined1 *)&uStack_80;
    FUN_10007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      func_0x000107c60e14(auStack_60[0]);
    }
  }
  ppuVar3 = ppuVar1;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(ppuVar1);
  func_0x000107c61170(ppuVar1);
  func_0x000107c60bd8();
  func_0x000107c61174();
  func_0x000107c61158(PTR_PTR_1126d8ff0);
  if (ppuVar3 == (undefined **)0x0) {
    uStack_e0 = 0;
    param_1 = 0.0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
  }
  else {
    func_0x000107c430a4(&uStack_110,ppuVar3);
  }
  puVar4 = &uStack_181;
  FUN_1008ad120();
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x000107c61180();
  func_0x000107c5c9e4();
  dStack_1c8 = param_1 * 1000.0;
  uStack_1f0 = 0xf;
  uStack_1e0 = 0x100;
  ppuStack_1f8 = &PTR_DAT_11086d7d0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1a8 = 0;
  lStack_1b0 = 0;
  plStack_198 = (long *)0x0;
  uStack_1a0 = 0;
  plStack_190 = (long *)0x0;
  uStack_166 = *(undefined2 *)(puVar4 + 0x1a);
  uStack_178 = 6;
  uStack_168 = 0x100;
  ppuStack_180 = &PTR_DAT_11089b010;
  lStack_130 = 0;
  lStack_138 = 0;
  plStack_120 = (long *)0x0;
  uStack_128 = 0;
  plStack_118 = (long *)0x0;
  lStack_210 = 0;
  lStack_208 = 0;
  uStack_200 = 0;
  uStack_214 = 0;
  puVar6 = &uStack_110;
  puStack_148 = puVar4;
  pppuStack_140 = &ppuStack_1f8;
  FUN_1000e77a0(puVar6,&ppuStack_180,&lStack_210,&uStack_214);
  func_0x000107c61180();
  if (lStack_210 != 0) {
    lStack_208 = lStack_210;
    func_0x000107c60e14();
  }
  plVar7 = plStack_118;
  ppuStack_180 = &PTR_DAT_11089b010;
  plStack_118 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  plVar7 = plStack_120;
  plStack_120 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  if (lStack_138 != 0) {
    lStack_130 = lStack_138;
    func_0x000107c60e14();
  }
  plVar7 = plStack_190;
  ppuStack_1f8 = &PTR_DAT_11086d7d0;
  plStack_190 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  plVar7 = plStack_198;
  plStack_198 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  if (lStack_1b0 != 0) {
    lStack_1a8 = lStack_1b0;
    func_0x000107c60e14();
  }
  func_0x000107c61170(puVar5);
  FUN_1000e76e0(&uStack_e8);
  func_0x000107c61170(uStack_f8);
  func_0x000107c61170(uStack_100);
  func_0x000107c61170(ppuVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1008acd68; end: 1008acedb;  */

void FUN_1008acd68(double param_1,long param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined4 uStack_214;
  long lStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined **ppuStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1e0;
  double dStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  long *plStack_198;
  long *plStack_190;
  undefined1 uStack_181;
  undefined **ppuStack_180;
  undefined4 uStack_178;
  undefined2 uStack_168;
  undefined2 uStack_166;
  undefined1 *puStack_148;
  undefined ***pppuStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  if (param_2 != 0) {
    plVar5 = *(long **)(param_2 + 8);
    func_0x000107c61174(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f44f7d9;
    }
    else {
      puVar1 = param_3;
      func_0x000107c61178(param_3);
      func_0x000107c3ac4c();
    }
    func_0x000107c61170(param_3);
    FUN_10002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    FUN_10007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110a03718,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    FUN_10007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      func_0x000107c60e14(auStack_60[0]);
    }
  }
  puVar1 = param_3;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c60bd8();
  func_0x000107c61174();
  func_0x000107c61158(PTR_PTR_1126d8ff0);
  if (puVar1 == (undefined *)0x0) {
    uStack_e0 = 0;
    param_1 = 0.0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
  }
  else {
    func_0x000107c430a4(&uStack_110,puVar1);
  }
  puVar2 = &uStack_181;
  FUN_1008ad120();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x000107c61180();
  func_0x000107c5c9e4();
  dStack_1c8 = param_1 * 1000.0;
  uStack_1f0 = 0xf;
  uStack_1e0 = 0x100;
  ppuStack_1f8 = &PTR_DAT_11086d7d0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1a8 = 0;
  lStack_1b0 = 0;
  plStack_198 = (long *)0x0;
  uStack_1a0 = 0;
  plStack_190 = (long *)0x0;
  uStack_166 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_178 = 6;
  uStack_168 = 0x100;
  ppuStack_180 = &PTR_DAT_11089b010;
  lStack_130 = 0;
  lStack_138 = 0;
  plStack_120 = (long *)0x0;
  uStack_128 = 0;
  plStack_118 = (long *)0x0;
  lStack_210 = 0;
  lStack_208 = 0;
  uStack_200 = 0;
  uStack_214 = 0;
  puVar4 = &uStack_110;
  puStack_148 = puVar2;
  pppuStack_140 = &ppuStack_1f8;
  FUN_1000e77a0(puVar4,&ppuStack_180,&lStack_210,&uStack_214);
  func_0x000107c61180();
  if (lStack_210 != 0) {
    lStack_208 = lStack_210;
    func_0x000107c60e14();
  }
  plVar5 = plStack_118;
  ppuStack_180 = &PTR_DAT_11089b010;
  plStack_118 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  plVar5 = plStack_120;
  plStack_120 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  if (lStack_138 != 0) {
    lStack_130 = lStack_138;
    func_0x000107c60e14();
  }
  plVar5 = plStack_190;
  ppuStack_1f8 = &PTR_DAT_11086d7d0;
  plStack_190 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  plVar5 = plStack_198;
  plStack_198 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  if (lStack_1b0 != 0) {
    lStack_1a8 = lStack_1b0;
    func_0x000107c60e14();
  }
  func_0x000107c61170(puVar3);
  FUN_1000e76e0(&uStack_e8);
  func_0x000107c61170(uStack_f8);
  func_0x000107c61170(uStack_100);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1008acedc; end: 1008ad11f;  */

void FUN_1008acedc(double param_1,long param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined4 uStack_194;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined4 uStack_170;
  undefined4 uStack_160;
  double dStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined1 uStack_101;
  undefined **ppuStack_100;
  undefined4 uStack_f8;
  undefined2 uStack_e8;
  undefined2 uStack_e6;
  undefined1 *puStack_c8;
  undefined ***pppuStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  func_0x000107c61174();
  func_0x000107c61158(PTR_PTR_1126d8ff0);
  if (param_2 == 0) {
    uStack_60 = 0;
    param_1 = 0.0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x000107c430a4(&uStack_90,param_2);
  }
  puVar2 = &uStack_101;
  FUN_1008ad120();
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x000107c61180();
  func_0x000107c5c9e4();
  dStack_148 = param_1 * 1000.0;
  uStack_170 = 0xf;
  uStack_160 = 0x100;
  ppuStack_178 = &PTR_DAT_11086d7d0;
  uStack_138 = 0;
  uStack_140 = 0;
  lStack_128 = 0;
  lStack_130 = 0;
  plStack_118 = (long *)0x0;
  uStack_120 = 0;
  plStack_110 = (long *)0x0;
  uStack_e6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_f8 = 6;
  uStack_e8 = 0x100;
  ppuStack_100 = &PTR_DAT_11089b010;
  lStack_b0 = 0;
  lStack_b8 = 0;
  plStack_a0 = (long *)0x0;
  uStack_a8 = 0;
  plStack_98 = (long *)0x0;
  lStack_190 = 0;
  lStack_188 = 0;
  uStack_180 = 0;
  uStack_194 = 0;
  puVar4 = &uStack_90;
  puStack_c8 = puVar2;
  pppuStack_c0 = &ppuStack_178;
  FUN_1000e77a0(puVar4,&ppuStack_100,&lStack_190,&uStack_194);
  func_0x000107c61180();
  if (lStack_190 != 0) {
    lStack_188 = lStack_190;
    func_0x000107c60e14();
  }
  plVar1 = plStack_98;
  ppuStack_100 = &PTR_DAT_11089b010;
  plStack_98 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_a0;
  plStack_a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_b8 != 0) {
    lStack_b0 = lStack_b8;
    func_0x000107c60e14();
  }
  plVar1 = plStack_110;
  ppuStack_178 = &PTR_DAT_11086d7d0;
  plStack_110 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_118;
  plStack_118 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_130 != 0) {
    lStack_128 = lStack_130;
    func_0x000107c60e14();
  }
  func_0x000107c61170(puVar3);
  FUN_1000e76e0(&uStack_68);
  func_0x000107c61170(uStack_78);
  func_0x000107c61170(uStack_80);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1008ad120; end: 1008ad1d7;  */

undefined8 FUN_1008ad120(void)

{
  int iVar1;
  
  if ((bRam0000000113827cd8 & 1) == 0) {
    iVar1 = 0x13827cd8;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uRam0000000113827c70 = 0xe;
      puRam0000000113827c78 = &UNK_10f4a1f4e;
      uRam0000000113827c80 = 0x100;
      puRam0000000113827c88 = &UNK_10851c498;
      puRam0000000113827c90 = &UNK_10851c4cc;
      ppuRam0000000113827c68 = &PTR_DAT_11086d7d0;
      uRam0000000113827ca8 = 0;
      uRam0000000113827ca0 = 0;
      uRam0000000113827cb8 = 0;
      uRam0000000113827cb0 = 0;
      uRam0000000113827cc8 = 0;
      uRam0000000113827cc0 = 0;
      uRam0000000113827cd0 = 0;
      func_0x000107c60e34(&DAT_105187b98,0x113827c68,0x100000000);
      func_0x000107c60e4c(0x113827cd8);
    }
  }
  return 0x113827c68;
}



/* Entry: 1008ad1d8; end: 1008ad25f;  */

void FUN_1008ad1d8(long param_1,undefined8 param_2)

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
                    /* WARNING: Could not recover jumptable at 0x0001008ad24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 1008ad260; end: 1008ad2e7;  */

void FUN_1008ad260(long param_1,undefined8 param_2)

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
                    /* WARNING: Could not recover jumptable at 0x0001008ad2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 1008ad2e8; end: 1008ad397; -[SCFeatureNightModeImpl _updateNightModeButtonWithState:] */

/* WARNING: Possible PIC construction at 0x0001008ad37c: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008ad2e8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  if ((*(long *)(param_1 + _DAT_112740f90) != 0) &&
     (((*(byte *)(param_1 + _DAT_112740f4c) & 1) != 0 ||
      ((*(byte *)(param_1 + _DAT_112740f60) & 1) == 0)))) {
    lVar1 = param_1;
    func_0x000107c3c7c4(param_1,param_2,param_3);
    param_3 = param_1 + _DAT_112740f8c;
    func_0x000107c61148(param_3);
    if ((int)lVar1 == 0) {
      func_0x000107c44e4c();
    }
    else {
      func_0x000107c5af04();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1008ad398; end: 1008ad46b; -[SCFeatureNightModeImpl _shouldShowNightModeButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1008ad398(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  func_0x000107c61174(param_3);
  puVar1 = param_3;
  func_0x000107c51b1c();
  puVar2 = PTR_PTR_1126afed0;
  func_0x000107c4d73c();
  if ((puVar1 == puVar2) && (puVar1 = param_3, func_0x000107c3e0d8(), ((ulong)puVar1 & 1) == 0)) {
    lVar3 = param_1 + _DAT_112740f64;
    func_0x000107c61148();
    lVar4 = lVar3;
    func_0x000107c49cd8();
    func_0x000107c61170(lVar3);
    if ((int)lVar4 != 0) {
      uVar5 = (uint)*(byte *)(param_1 + _DAT_112740f4c);
      goto LAB_1008ad3e8;
    }
    lVar3 = param_1;
    func_0x000107c3bb48();
    if (((int)lVar3 != 0) && (*(char *)(param_1 + _DAT_112740f4c) == '\x01')) {
      func_0x000107c3ba94(param_1);
      uVar5 = (uint)param_1 ^ 1;
      goto LAB_1008ad3e8;
    }
  }
  uVar5 = 0;
LAB_1008ad3e8:
  func_0x000107c61170(param_3);
  return uVar5 & 1;
}



/* Entry: 1008ad46c; end: 1008ad47b; -[SCManagedCapturerState secondaryDevicePositions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1008ad46c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113075bb8);
}



/* Entry: 1008ad47c; end: 1008ad483; -[SCCameraNightModeActivationHandler isEnabled] */

undefined1 FUN_1008ad47c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x40);
}



/* Entry: 1008ad484; end: 1008ad4bf; -[SCFeatureNightModeImpl _isLowLightCondition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1008ad484(long param_1)

{
  ulong uVar1;
  
  if (*(char *)(param_1 + _DAT_112740f80) == '\x01') {
    return (ulong)(*(double *)(param_1 + _DAT_112740fa0) < 0.0);
  }
  uVar1 = *(ulong *)(param_1 + _DAT_112740f58);
                    /* WARNING: Could not recover jumptable at 0x00010c0b5990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_lowLightCondition_11260b078);
  return uVar1;
}



/* Entry: 1008ad4c0; end: 1008ad4cf; -[SCManagedCapturerState lowLightCondition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1008ad4c0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113075b98);
}



/* Entry: 1008ad4d0; end: 1008ad63b; -[SCCameraVerticalToolbar hideToolbarItem:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008ad4d0(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  ulong uStack_48;
  
  func_0x000107c61174(param_3);
  if (param_3 == 0) goto LAB_1008ad61c;
  uVar1 = param_1;
  func_0x000107c3af74(param_1,param_2,param_3);
  func_0x000107c61180();
  if (uVar1 == 0) {
    uVar3 = *(ulong *)(param_1 + (long)_DAT_112742b94);
    func_0x000107c4d9c0(uVar3,param_2,param_3);
    func_0x000107c61180();
    func_0x000107c550d8();
LAB_1008ad610:
    func_0x000107c61170(uVar3);
  }
  else {
    uVar3 = uVar1;
    func_0x000107c49eac();
    if ((uVar3 & 1) == 0) {
      func_0x000107c5560c(uVar1,param_2,1);
      lVar2 = param_3;
      func_0x000107c3f9d0();
      func_0x000107c61180();
      if (lVar2 != 0) {
        uVar3 = param_1;
        func_0x000107c3babc(param_1,param_2,param_3);
        func_0x000107c61170(lVar2);
        if ((int)uVar3 != 0) {
          lVar2 = param_3;
          func_0x000107c3f9d0(param_3);
          func_0x000107c61180();
          func_0x000107c44e4c(param_1,param_2,lVar2,0);
          func_0x000107c61170(lVar2);
        }
      }
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      puStack_58 = &UNK_100c6a720;
      puStack_50 = &UNK_110841f20;
      func_0x000107c61174(uVar1);
      uStack_48 = uVar1;
      func_0x000107c3c2a8(param_1,param_2,param_4,&puStack_68);
      uVar3 = uStack_48;
      goto LAB_1008ad610;
    }
  }
  func_0x000107c61170(uVar1);
LAB_1008ad61c:
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1008ad63c; end: 1008ad64b; -[SCCameraToolbarButtonImpl setIsDisappearing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008ad63c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127429c8) = param_3;
  return;
}



/* Entry: 1008ad64c; end: 1008ad653; -[SCCameraToolbarItemImpl childToolbarItem] */

undefined8 FUN_1008ad64c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 1008ad654; end: 1008ad667; -[SCCameraVerticalToolbar _reloadToolbar:completion:] */

void FUN_1008ad654(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8ae70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fd999999999999a,param_1,PTR_s__reloadToolbar_duration_addition_112580538,param_3,0,
             param_4);
  return;
}



/* Entry: 1008ad668; end: 1008ad673; -[SCCameraVerticalToolbar _expandIconImageName] */

undefined ** FUN_1008ad668(void)

{
  return &PTR____CFConstantStringClassReference_110e449f8;
}



/* Entry: 1008ad674; end: 1008ad67b; -[SCCameraToolbarItemImpl setShouldShowTitleUponSelection:] */

void FUN_1008ad674(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 1008ad67c; end: 1008ad707;  */

void FUN_1008ad67c(long param_1,ulong param_2)

{
  long lVar1;
  
  if ((param_2 & 1) == 0) {
    param_1 = param_1 + 0x30;
    func_0x000107c61148(param_1);
    func_0x000107c3b924();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001008ad6a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 1008ad708; end: 1008ad70f; -[SCCustomStoriesDataSyncer _announceFullSyncFinished] */

void FUN_1008ad708(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1055d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_postableStoriesAreReady_11261ef90);
  return;
}



/* Entry: 1008ad710; end: 1008ad797; -[SCCustomStoriesSyncUpdateListenerAnnouncer postableStoriesAreReady] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008ad710(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  uVar1 = 0x113080278;
  FUN_1000285a8(0x113080278,&UNK_10dd0b490);
  uVar2 = 0x1130802d8;
  FUN_1008ad798(0x1130802d8,0x113080278,&UNK_10dd0b490,
                PTR___s7Combine18PassthroughSubjectCyxq_GAA0C0AAMc_11034ae10);
  func_0x000107c5f1f8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1008ad798; end: 1008ad7db;  */

void FUN_1008ad798(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    FUN_10002969c(param_2,param_3);
    func_0x000107c61520(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 1008ad7dc; end: 1008ad81b; -[SCGrowingButton setMinimumScale:] */

void FUN_1008ad7dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e16d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setPressUpScale__112655fd8);
  return;
}



/* Entry: 1008ad81c; end: 1008ad85f;  */

void FUN_1008ad81c(long param_1)

{
  func_0x000107c3cb68(*(undefined8 *)(param_1 + 0x20));
  func_0x000107c3cc18(*(undefined8 *)(param_1 + 0x20));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001008ad850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1008ad860; end: 1008ad8a7; -[SCCameraToolbarButtonImpl setAlpha:] */

void FUN_1008ad860(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f0488;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_setAlpha__112637810);
  func_0x000107c3cce8(param_1);
  return;
}



/* Entry: 1008ad8a8; end: 1008ad947;  */

long FUN_1008ad8a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x000107c3b0bc();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x000107c3b0b0();
    if (lVar1 == 0) {
      lVar1 = *(long *)(param_1 + 0x20);
      func_0x000107c3b0b8();
      if (lVar1 == 0) {
        lVar1 = *(long *)(param_1 + 0x20);
        func_0x000107c3b0b4(lVar1);
      }
    }
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  return lVar1;
}



/* Entry: 1008ad948; end: 1008ad9f3; -[SCCameraToolbarButtonSorter _compareItemTypesForButton:withButton:] */

undefined8 FUN_1008ad948(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  func_0x000107c61174(param_4);
  func_0x000107c5cbb0();
  func_0x000107c61180();
  lVar1 = param_4;
  func_0x000107c5cbb0();
  func_0x000107c61180();
  func_0x000107c61170(param_4);
  lVar2 = param_3;
  func_0x000107c4a7bc();
  lVar3 = lVar1;
  func_0x000107c4a7bc();
  if (lVar2 != lVar3) {
    if (lVar2 == 0) {
      uVar4 = 1;
      goto LAB_1008ad9d0;
    }
    if (lVar3 == 0) {
      uVar4 = 0xffffffffffffffff;
      goto LAB_1008ad9d0;
    }
  }
  uVar4 = 0;
LAB_1008ad9d0:
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_3);
  return uVar4;
}



/* Entry: 1008ad9f4; end: 1008adb5f; -[SCCameraToolbarButtonSorter _compareBottomButton:withButton:] */

undefined8 FUN_1008ad9f4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  func_0x000107c61174(param_4);
  func_0x000107c5cbb0();
  func_0x000107c61180();
  lVar1 = param_4;
  func_0x000107c5cbb0();
  func_0x000107c61180();
  func_0x000107c61170(param_4);
  lVar2 = param_3;
  func_0x000107c4a7bc(param_3);
  lVar3 = lVar1;
  func_0x000107c4a7bc(lVar1);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar2);
  func_0x000107c61180();
  func_0x000107c40404(uVar7,param_2,puVar4);
  if ((int)uVar7 == 0) {
    uVar6 = *(ulong *)(param_1 + 0x10);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar3);
    func_0x000107c61180();
    func_0x000107c40404(uVar6,param_2,puVar5);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    if ((uVar6 & 1) == 0) {
      lVar2 = param_3;
      func_0x000107c4eb70();
      lVar3 = lVar1;
      func_0x000107c4eb70();
      if (lVar2 != lVar3) {
        lVar2 = param_3;
        func_0x000107c4eb70();
        if (lVar2 == 4) {
          uVar7 = 1;
          goto LAB_1008adb04;
        }
        lVar2 = lVar1;
        func_0x000107c4eb70();
        if (lVar2 == 4) {
          uVar7 = 0xffffffffffffffff;
          goto LAB_1008adb04;
        }
      }
    }
  }
  else {
    func_0x000107c61170(puVar4);
  }
  uVar7 = 0;
LAB_1008adb04:
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_3);
  return uVar7;
}



/* Entry: 1008adb60; end: 1008adcc3; -[SCCameraToolbarButtonSorter _compareFixedItemsToNonFixedItemsForButton:withButton:] */

undefined8 FUN_1008adb60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x000107c61174(param_4);
  func_0x000107c5cbb0(param_3);
  func_0x000107c61180();
  uVar1 = param_4;
  func_0x000107c5cbb0(param_4);
  func_0x000107c61180();
  func_0x000107c61170(param_4);
  uVar5 = param_3;
  func_0x000107c4a7bc(param_3);
  uVar4 = uVar1;
  func_0x000107c4a7bc(uVar1);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar5);
  func_0x000107c61180();
  func_0x000107c40404(uVar6,param_2,puVar2);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar4);
  func_0x000107c61180();
  func_0x000107c40404(uVar7,param_2,puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  if ((int)uVar6 == (int)uVar7) {
    uVar5 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar5);
    func_0x000107c61180();
    func_0x000107c40404(uVar4,param_2,puVar2);
    func_0x000107c61170(puVar2);
    uVar5 = 1;
    if ((int)uVar4 != 0) {
      uVar5 = 0xffffffffffffffff;
    }
  }
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
  return uVar5;
}



/* Entry: 1008adcc4; end: 1008addf3; -[SCCameraToolbarButtonSorter _compareCofValuesForButton:withButton:] */

long FUN_1008adcc4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  func_0x000107c61174(param_4);
  func_0x000107c5cbb0(param_3);
  func_0x000107c61180();
  uVar2 = param_4;
  func_0x000107c5cbb0(param_4);
  func_0x000107c61180();
  func_0x000107c61170(param_4);
  uVar3 = param_3;
  func_0x000107c4a7bc(param_3);
  uVar4 = uVar2;
  func_0x000107c4a7bc(uVar2);
  lVar8 = *(long *)(param_1 + 0x10);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar3);
  func_0x000107c61180();
  func_0x000107c45340(lVar8,param_2,puVar5);
  func_0x000107c61170(puVar5);
  lVar7 = *(long *)(param_1 + 0x10);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar4);
  func_0x000107c61180();
  func_0x000107c45340(lVar7,param_2,puVar5);
  func_0x000107c61170(puVar5);
  lVar6 = lVar8 - lVar7;
  if (lVar7 == 0x7fffffffffffffff) {
    lVar6 = -1;
  }
  if (lVar8 == 0x7fffffffffffffff) {
    lVar6 = 1;
  }
  lVar1 = 0;
  if (lVar8 != 0x7fffffffffffffff || lVar7 != 0x7fffffffffffffff) {
    lVar1 = lVar6;
  }
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  return lVar1;
}



/* Entry: 1008addf4; end: 1008adf0b; -[SCCameraVerticalToolbar _positionView:atY:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1008addf4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  func_0x000107c61174(param_4);
  uVar4 = param_1;
  if (param_4 != 0) {
    func_0x000107c438d4(param_4);
    uVar4 = 0;
    func_0x000107c54b80(0,param_1,param_4);
    func_0x000107c438d4(param_4);
    func_0x000107c609b8();
    lVar2 = param_4;
    func_0x000107c5c42c();
    func_0x000107c61180();
    func_0x000107c61170();
    uVar3 = *(undefined8 *)(param_2 + _DAT_112742bac);
    func_0x000107c5c734(uVar3);
    func_0x000107c61180();
    func_0x000107c3d89c();
    func_0x000107c61170(uVar3);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    if (lVar2 == 0) {
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_1008adf0c;
      puStack_50 = &UNK_110842e18;
      func_0x000107c61174(param_4);
      lStack_48 = param_4;
      func_0x000107c4e5fc(puVar1,param_3,&puStack_68);
      func_0x000107c61170(lStack_48);
    }
  }
  func_0x000107c61170(param_4);
  return uVar4;
}


