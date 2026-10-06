/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107ed5a4c; end: 107ed5a93;  */

void FUN_107ed5a4c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99400(PTR__OBJC_CLASS___NSError_1126ae858);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ed5a94; end: 107ed5c1f; -[SCCloudUpdatePrivateEntriesOperation logParameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ed5a94(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  uVar2 = 7;
  func_0x00010bafc234(7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110ec2238);
  _objc_release(uVar2);
  func_0x00010c1d0640(puVar1,param_2,*(undefined8 *)(param_1 + _DAT_1127711bc),
                      &PTR____CFConstantStringClassReference_110e29c18);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      *(undefined1 *)(param_1 + _DAT_1127711c8));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110ec21f8);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      *(undefined8 *)(param_1 + _DAT_1127711b8));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110ec2278);
  _objc_release(puVar3);
  func_0x00010c1d0640(puVar1,param_2,&PTR____CFConstantStringClassReference_110ec2858,
                      &PTR____CFConstantStringClassReference_110ec2258);
  lVar4 = *(long *)(param_1 + _DAT_1127711d0);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110ec2218);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c1d0640(puVar1,param_2,lVar4,&PTR____CFConstantStringClassReference_110ec2218);
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ed5c20; end: 107ed5c27; -[SCCloudUpdatePrivateEntriesOperation eligibleForOutOfOrderExecution] */

undefined8 FUN_107ed5c20(void)

{
  return 0;
}



/* Entry: 107ed5c28; end: 107ed5c2f; -[SCCloudUpdatePrivateEntriesOperation doesNotRequireMediaUpload] */

undefined8 FUN_107ed5c28(void)

{
  return 1;
}



/* Entry: 107ed5c30; end: 107ed5c37; -[SCCloudUpdatePrivateEntriesOperation allMediaUploadsCompleteWithBoltDataUploader:] */

undefined8 FUN_107ed5c30(void)

{
  return 1;
}



/* Entry: 107ed5c38; end: 107ed5c3f; -[SCCloudUpdatePrivateEntriesOperation requiresSyncStatusUpdate] */

undefined8 FUN_107ed5c38(void)

{
  return 1;
}



/* Entry: 107ed5c40; end: 107ed5c47; -[SCCloudUpdatePrivateEntriesOperation needRunImmediately] */

undefined8 FUN_107ed5c40(void)

{
  return 0;
}



/* Entry: 107ed5c48; end: 107ed5c4f; -[SCCloudUpdatePrivateEntriesOperation processAndCleanupForOutOfOrderDeletions:dataObjectContext:logger:queue:snapDocManager:] */

undefined8 FUN_107ed5c48(void)

{
  return 0;
}



/* Entry: 107ed5c50; end: 107ed5e37; -[SCCloudUpdatePrivateEntriesOperation cleanupContextForOutOfOrderDeletionWithDataObjectContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ed5c50(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(param_1 + _DAT_1127711c4);
  _objc_retain(lVar8);
  lVar4 = lVar8;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar8);
      }
      uVar10 = *(undefined8 *)(lVar9 * 8);
      uVar5 = uVar10;
      func_0x00010c23f220(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2);
      _objc_release(uVar5);
      func_0x00010c23f220(uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar10;
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar3);
      _objc_release(uVar5);
      _objc_release(uVar10);
      lVar9 = lVar9 + 1;
    } while (lVar4 != lVar9);
    lVar4 = lVar8;
    func_0x00010bf52a60();
  }
  _objc_release(lVar8);
  puVar6 = PTR_PTR_1126d8370;
  _objc_alloc(PTR_PTR_1126d8370);
  func_0x00010bff2540();
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar2 + _DAT_1127711d0,0);
  _objc_storeStrong(puVar2 + _DAT_1127711cc,0);
  _objc_storeStrong(puVar2 + _DAT_1127711c4,0);
  _objc_storeStrong(puVar2 + _DAT_1127711c0,0);
  _objc_storeStrong(puVar2 + _DAT_1127711bc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar2 + _DAT_1127711b8,0);
  return;
}



/* Entry: 107ed5e38; end: 107ed5eb7; -[SCCloudUpdatePrivateEntriesOperation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ed5e38(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127711d0,0);
  _objc_storeStrong(param_1 + _DAT_1127711cc,0);
  _objc_storeStrong(param_1 + _DAT_1127711c4,0);
  _objc_storeStrong(param_1 + _DAT_1127711c0,0);
  _objc_storeStrong(param_1 + _DAT_1127711bc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127711b8,0);
  return;
}



/* Entry: 107ed5eb8; end: 107ed5ff7; -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE initWithProfile:gallerySnap:gallerySnapDetail:userContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107ed5eb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126fb9b8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127711d8);
    *(undefined1 **)((long)puVar1 + (long)_DAT_1127711d8) = puVar2;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_1127711dc;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_1127711e0;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_1127711e4;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    _objc_release(uVar3);
    uVar3 = param_6;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127711e8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127711e8) = uVar3;
    _objc_release(uVar4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107ed5ff8; end: 107ed5fff; -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE type] */

undefined8 FUN_107ed5ff8(void)

{
  return 10;
}



/* Entry: 107ed6000; end: 107ed6007; -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE analyticsType] */

undefined8 FUN_107ed6000(void)

{
  return 10;
}



/* Entry: 107ed6008; end: 107ed6037; -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE requestID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ed6008(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127711d8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ed6038; end: 107ed603f; -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE entryIds] */

undefined8 FUN_107ed6038(void)

{
  return 0;
}



/* Entry: 107ed6040; end: 107ed608b; -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE makeSnapshot] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ed6040(void)

{
  _objc_alloc(PTR_PTR_1126d8378);
  func_0x00010c03aca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ed608c; end: 107ed622b; -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE initWithSnapshot:requestID:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107ed608c(undefined1 *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 **ppuVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSObject_1126b1300;
  _objc_opt_class(PTR__OBJC_CLASS___NSObject_1126b1300);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  uVar4 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
  }
  uVar2 = uVar4;
  func_0x00010010fab4(uVar4,PTR_DAT_1126a5a98);
  if (uVar4 == 0 || (int)uVar2 == 0) {
    ppuVar3 = (undefined1 **)param_1;
    puVar7 = (undefined1 *)0x0;
  }
  else {
    puStack_48 = PTR_PTR_1126fb9b8;
    puStack_50 = param_1;
    _objc_msgSendSuper2(&puStack_50,PTR_s_init_1125d9248);
    if (ppuVar3 != (undefined1 **)0x0) {
      _objc_retain(param_3);
      uVar6 = param_4;
      func_0x00010bf51e00();
      uVar5 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_1127711d8);
      *(undefined8 *)((long)ppuVar3 + (long)_DAT_1127711d8) = uVar6;
      _objc_release(uVar5);
      uVar4 = param_3;
      func_0x00010c1164a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_1127711dc);
      *(ulong *)((long)ppuVar3 + (long)_DAT_1127711dc) = uVar4;
      _objc_release(uVar6);
      uVar4 = param_3;
      func_0x00010c242480();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_1127711e0);
      *(ulong *)((long)ppuVar3 + (long)_DAT_1127711e0) = uVar4;
      _objc_release(uVar6);
      uVar4 = param_3;
      func_0x00010bf6f600();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_1127711e4);
      *(ulong *)((long)ppuVar3 + (long)_DAT_1127711e4) = uVar4;
      _objc_release(uVar6);
      uVar4 = param_3;
      func_0x00010c2917c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
      uVar6 = *(undefined8 *)((long)ppuVar3 + (long)_DAT_1127711e8);
      *(ulong *)((long)ppuVar3 + (long)_DAT_1127711e8) = uVar4;
      _objc_release(uVar6);
    }
    _objc_retain(ppuVar3);
    puVar7 = (undefined1 *)ppuVar3;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(ppuVar3);
  return puVar7;
}



/* Entry: 107ed622c; end: 107ed6233; -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE detectAndResolveConflictsWithCloudFS:dataObjectContext:logger:snapDocManager:] */

undefined8 FUN_107ed622c(void)

{
  return 0;
}



/* Entry: 107ed6234; end: 107ed623b; -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE executeOptimisticallyWithDataObjectContext:] */

undefined8 FUN_107ed6234(void)

{
  return 1;
}



/* Entry: 107ed623c; end: 107ed6243; -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE isOperationValidBeforeRemoteSync:dataObjectContext:] */

undefined8 FUN_107ed623c(void)

{
  return 0;
}



/* Entry: 107ed6244; end: 107ed626b; -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE remoteSyncFromCloudFS:thumbnailFileGenerator:dataVault:dataObjectContext:networker:logger:coreConfigProvider:boltDataUploader:memoriesAssetRepository:snapUploadWorkflow:performer:progressHandler:failureHandler:successHandler:] */

void FUN_107ed6244(void)

{
  long in_stack_00000038;
  
  (**(code **)(in_stack_00000038 + 0x10))(in_stack_00000038,0);
                    /* WARNING: Could not recover jumptable at 0x00010bf8eb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126ae6b8,PTR_s_empty_1125c1470);
  return;
}



/* Entry: 107ed626c; end: 107ed6273; -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE commitWithEntryUpdates:dataObjectContext:] */

undefined8 FUN_107ed626c(void)

{
  return 0;
}



/* Entry: 107ed6274; end: 107ed6277; -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE cleanupWithContext:cloudFS:backupEventsSubject:snapDocManager:] */

void FUN_107ed6274(void)

{
  return;
}



/* Entry: 107ed6278; end: 107ed62e3; -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE changedSnapContextsWithEntryUpdate:] */

void FUN_107ed6278(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  if (param_3 != 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_107ed62e4;
    puStack_20 = &UNK_11085a2d8;
    uStack_18 = param_1;
    func_0x00010c0b8600(param_3,param_2,&puStack_38);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107ed62e4; end: 107ed63b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ed62e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126d8278;
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0c5180(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c079400(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c23f7c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107ed63b8; end: 107ed653b; -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE logParameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ed63b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010c1d0640();
  lVar4 = (long)_DAT_1127711e0;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c241220(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110e06db8);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c0c5180(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,uVar2,&PTR____CFConstantStringClassReference_110e4a098);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0da520(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      *(undefined8 *)(param_1 + _DAT_1127711d8));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110ec2278);
  _objc_release(puVar3);
  func_0x00010c1d0640(puVar1,param_2,&PTR____CFConstantStringClassReference_110ec2bd8,
                      &PTR____CFConstantStringClassReference_110ec2258);
  lVar4 = *(long *)(param_1 + _DAT_1127711e8);
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110ec2218);
    _objc_release(puVar3);
  }
  else {
    func_0x00010c1d0640(puVar1,param_2,lVar4,&PTR____CFConstantStringClassReference_110ec2218);
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107ed653c; end: 107ed6543; -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE eligibleForOutOfOrderExecution] */

undefined8 FUN_107ed653c(void)

{
  return 0;
}



/* Entry: 107ed6544; end: 107ed654b; -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE doesNotRequireMediaUpload] */

undefined8 FUN_107ed6544(void)

{
  return 0;
}



/* Entry: 107ed654c; end: 107ed6553; -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE allMediaUploadsCompleteWithBoltDataUploader:] */

undefined8 FUN_107ed654c(void)

{
  return 0;
}



/* Entry: 107ed6554; end: 107ed655b; -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE requiresSyncStatusUpdate] */

undefined8 FUN_107ed6554(void)

{
  return 0;
}



/* Entry: 107ed655c; end: 107ed6563; -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE needRunImmediately] */

undefined8 FUN_107ed655c(void)

{
  return 0;
}



/* Entry: 107ed6564; end: 107ed656b; -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE processAndCleanupForOutOfOrderDeletions:dataObjectContext:logger:queue:snapDocManager:] */

undefined8 FUN_107ed6564(void)

{
  return 0;
}



/* Entry: 107ed656c; end: 107ed6573; -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE cleanupContextForOutOfOrderDeletionWithDataObjectContext:] */

undefined8 FUN_107ed656c(void)

{
  return 0;
}



/* Entry: 107ed6574; end: 107ed657b; -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE isEligibleForTacomaWithCOFService:] */

undefined8 FUN_107ed6574(void)

{
  return 0;
}



/* Entry: 107ed657c; end: 107ed65eb; -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE snapPlaceholders] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107ed657c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  long lStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_20 = *(undefined8 *)(param_1 + _DAT_1127711e0);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    puVar4 = &uStack_40;
    pcStack_28 = FUN_107ed65ec;
    lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_40 = *(undefined8 *)(puVar1 + _DAT_1127711e4);
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_30 = &stack0xfffffffffffffff0;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_40,1);
    _objc_retainAutoreleasedReturnValue();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
      ___stack_chk_fail();
      puVar2 = PTR_PTR_1126af4d0;
      uVar5 = *(undefined8 *)(puVar1 + _DAT_1127711e0);
      _objc_retain(puVar4);
      func_0x00010c241220(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa72e0(puVar2,param_2,uVar5,puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      puVar1 = PTR_PTR_1126af4c0;
      func_0x00010bfa7060(PTR_PTR_1126af4c0,param_2,puVar2,0,puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar3 = puVar1;
      func_0x00010c07b240(puVar1);
      _objc_release(puVar1);
      _objc_release(puVar2);
      return puVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar1;
}



/* Entry: 107ed65ec; end: 107ed665b; -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE detailPlaceholders] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107ed65ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar4 = &uStack_20;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_20 = *(undefined8 *)(param_1 + _DAT_1127711e4);
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar1;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126af4d0;
  uVar5 = *(undefined8 *)(puVar1 + _DAT_1127711e0);
  _objc_retain(puVar4);
  func_0x00010c241220(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa72e0(puVar2,param_2,uVar5,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar1 = PTR_PTR_1126af4c0;
  func_0x00010bfa7060(PTR_PTR_1126af4c0,param_2,puVar2,0,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar3 = puVar1;
  func_0x00010c07b240(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar2);
  return puVar3;
}



/* Entry: 107ed665c; end: 107ed671f; -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE isPrivateWithDataObjectContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_107ed665c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126af4d0;
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127711e0);
  _objc_retain(param_3);
  func_0x00010c241220(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa72e0(puVar1,param_2,uVar4,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126af4c0;
  func_0x00010bfa7060(PTR_PTR_1126af4c0,param_2,puVar1,0,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = puVar2;
  func_0x00010c07b240(puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 107ed6720; end: 107ed67c3; -[SCCloudUploadOptionalMediaOperation_DEPRECATED_DO_NOT_USE .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107ed6720(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127711e8,0);
  _objc_storeStrong(param_1 + _DAT_1127711e4,0);
  _objc_storeStrong(param_1 + _DAT_1127711e0,0);
  _objc_storeStrong(param_1 + _DAT_1127711dc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127711d8,0);
  return;
}



/* Entry: 107ed67c4; end: 107ed68ab; -[SCCloudSync triggerSyncStateRefresh] */

void FUN_107ed67c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0f98a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 107ed68ac; end: 107ed68e7;  */

void FUN_107ed68ac(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0xcc) = 1;
    func_0x00010be1a360(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107ed68e8; end: 107ed690f; -[SCCloudSync observableForSnapBackupEvents] */

void FUN_107ed68e8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107ed6910; end: 107ed698f; -[SCCloudSync observableForBackupServiceStatus] */

void FUN_107ed6910(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c253480(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c260640();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf3e5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107ed6990; end: 107ed6993; -[SCCloudSync currentBackupStatus] */

void FUN_107ed6990(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c252d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_status_112672580);
  return;
}



/* Entry: 107ed6994; end: 107ed69e3; -[SCCloudSync appendOperationAndExecuteOptimistically:fromFailedEntry:tacomaOperationType:dependencyEntryIds:detailedState:origin:shouldNotRecluster:shouldNotScheduleBackupJobs:queue:completionHandler:] */

void FUN_107ed6994(void)

{
  func_0x00010bdcd340();
  return;
}



/* Entry: 107ed69e4; end: 107ed6a0b; -[SCCloudSync appendOperationAndExecuteOptimistically:fromFailedEntry:tacomaOperationType:dependencyEntryIds:detailedState:origin:queue:completionHandler:] */

void FUN_107ed69e4(void)

{
  func_0x00010bf06e60();
  return;
}



/* Entry: 107ed6a0c; end: 107ed6a33; -[SCCloudSync appendOperationAndExecuteOptimistically:fromFailedEntry:approximateTotalMediaSizeInBytes:tacomaOperationType:dependencyEntryIds:detailedState:queue:completionHandler:] */

void FUN_107ed6a0c(void)

{
  func_0x00010bf06e00();
  return;
}



/* Entry: 107ed6a34; end: 107ed6b5b; -[SCCloudSync appendOperationAndExecuteOptimistically:fromFailedEntry:approximateTotalMediaSizeInBytes:tacomaOperationType:dependencyEntryIds:detailedState:backupSchedulingGate:queue:completionHandler:] */

void FUN_107ed6a34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0df860(puVar1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcd340(param_1,param_2,param_3,param_4,puVar1,param_6,param_7,param_8,0,0,param_9,
                      param_10,param_11);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ed6b5c; end: 107ed6f77; -[SCCloudSync _appendOperationAndExecuteOptimistically:fromFailedEntry:approximateTotalMediaSizeInBytes:tacomaOperationType:dependencyEntryIds:detailedState:origin:shouldNotRecluster:shouldNotScheduleBackupJobs:backupSchedulingGate:queue:completionHandler:] */

void FUN_107ed6b5c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  uVar1 = param_1;
  func_0x00010be41400();
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0b3760();
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_107ed6f78;
    puStack_a0 = &UNK_11097e290;
    _objc_retain(param_13);
    uStack_80 = param_13;
    puStack_98 = puVar2;
    uStack_90 = uVar3;
    _objc_retain(param_3);
    ppuVar4 = &puStack_b8;
    uStack_88 = param_3;
    _objc_retainBlock();
    func_0x00010c27dd80(param_3);
    FUN_107eeed60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puStack_e0 = &uStack_e8;
    uStack_e8 = 0;
    uStack_d8 = 0x3032000000;
    pcStack_d0 = FUN_107ed6ff8;
    uStack_c8 = 0x107ed7008;
    uStack_c0 = 0;
    puStack_100 = &uStack_108;
    uStack_108 = 0;
    uStack_f8 = 0x2020000000;
    uStack_f0 = 0;
    uVar1 = param_1;
    func_0x00010be1f660();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(ppuVar4);
    _objc_retain(param_5);
    _objc_retain(param_7);
    _objc_retain(param_8);
    _objc_retain(param_11);
    _objc_retain(param_12);
    func_0x00010c0f8520(uVar5);
    _objc_release(uVar5);
    _objc_release(param_12);
    _objc_release(param_11);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_5);
    _objc_release(ppuVar4);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(uVar1);
    __Block_object_dispose(&uStack_108,8);
    __Block_object_dispose(&uStack_e8,8);
    _objc_release(uStack_c0);
    _objc_release(ppuVar4);
    _objc_release(uStack_88);
    _objc_release(uStack_80);
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107ed6f78; end: 107ed6ff7;  */

void FUN_107ed6f78(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_2 + 0x38) != 0) {
    (**(code **)(*(long *)(param_2 + 0x38) + 0x10))();
  }
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a16a0(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ed6ff8; end: 107ed700f;  */

void FUN_107ed6ff8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107ed7010; end: 107ed787b;  */

void FUN_107ed7010(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010be41400();
  if ((uVar1 & 1) != 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdfb900(uVar2,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar13 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar12 = *(undefined8 *)(lVar13 + 0x28);
  *(undefined8 *)(lVar13 + 0x28) = uVar2;
  _objc_release(uVar12);
  func_0x00010be8c040(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x30));
  lVar13 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
  if (lVar13 == 0) {
    return;
  }
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9afa0(lVar13,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126bc838;
  func_0x00010bf5a900(PTR_PTR_1126bc838,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126bc7e0;
  uVar12 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7de0(puVar4,param_2,uVar12,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar5 = puVar4;
  func_0x00010c15e520(puVar4);
  func_0x00010c1fce60(puVar3,param_2,puVar5 + 1);
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
  func_0x00010c1356e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebce0(puVar3,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
  func_0x00010c15e800(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9a60(puVar3,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010c1d7bc0(puVar3,param_2,*(undefined8 *)(param_1 + 0x38));
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c185360(puVar3,param_2,puVar5);
  _objc_release(puVar5);
  lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
  func_0x00010bf97260();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar6;
  func_0x00010bf529e0();
  if (lVar13 != 0) {
    lVar13 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
    func_0x00010c27dd80();
    _objc_release(lVar6);
    if (lVar13 == 2) goto LAB_107ed7250;
    lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
    func_0x00010bf97260(lVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar6;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212340(puVar3,param_2,lVar13);
    _objc_release(lVar13);
  }
  _objc_release(lVar6);
LAB_107ed7250:
  puVar5 = puVar3;
  func_0x00010c15e520();
  *(undefined **)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x18) = puVar5;
  puVar5 = PTR_PTR_1126bc7e0;
  uVar12 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa6bc0(puVar5,param_2,uVar12,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c0b3760(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar12;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
  func_0x00010c0ac020(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126bc7e0;
  uVar14 = *(undefined8 *)(param_1 + 0x38);
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf52cc0(puVar9,param_2,uVar14,0,uVar8);
  puVar10 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar5;
  func_0x00010bf59960(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380(puVar10,param_2,puVar11);
  func_0x00010c0aaec0(uVar2,param_2,uVar7,puVar9);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar2);
  _objc_release(uVar12);
  _objc_release(puVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107ed787c; end: 107ed7a63;  */

void FUN_107ed787c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_80 [8];
  undefined1 uStack_78;
  undefined1 auStack_70 [16];
  
  if (*(char *)(param_1 + 0x68) != '\0') {
    _objc_initWeak(auStack_70,*(undefined8 *)(param_1 + 0x20));
    uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x28);
    func_0x00010bf97260();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x28);
    func_0x00010c1356e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    func_0x00010c0f98a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = *(undefined1 *)(param_1 + 0x69);
    uVar7 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(uVar7);
    uVar8 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(*(undefined8 *)(param_1 + 0x48));
    _objc_copyWeak(auStack_80,auStack_70);
    func_0x00010beca560(uVar1);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_80);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_70);
  }
  return;
}



/* Entry: 107ed7a64; end: 107ed7b6b;  */

void FUN_107ed7a64(long param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_107ed7b6c;
  puStack_48 = &UNK_110841f80;
  uStack_38 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar1;
  _objc_retainBlock();
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x40);
    if (lVar3 == 0) {
      (**(code **)((long)ppuVar2 + 0x10))(ppuVar2);
    }
    else {
      (**(code **)(lVar3 + 0x10))(lVar3,ppuVar2);
    }
  }
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be93d80(param_1);
  }
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(ppuVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 107ed7b6c; end: 107ed7bc3;  */

void FUN_107ed7b6c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_1 + 0x28);
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107ed7bc4;
  puStack_20 = &UNK_110841f20;
  func_0x00010c14fc60(*(undefined8 *)(param_1 + 0x20),param_2,uStack_18,&puStack_38);
  return;
}



/* Entry: 107ed7bc4; end: 107ed7bc7;  */

void FUN_107ed7bc4(void)

{
  return;
}



/* Entry: 107ed7bc8; end: 107ed7c63;  */

void FUN_107ed7bc8(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),7);
  __Block_object_assign(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),7);
  __Block_object_assign(param_1 + 0x70,*(undefined8 *)(param_2 + 0x70),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x78,*(undefined8 *)(param_2 + 0x78),8);
  return;
}



/* Entry: 107ed7c64; end: 107ed7f9b; -[SCCloudSync _fastInsertionToTacomaWithResolvedOperation:operation:approximateTotalMediaSizeInBytes:tacomaOperationType:dependencyEntryIds:detailedState:origin:cloudSyncAppendSuccess:error:startTime:shouldNotScheduleBackupJobs:backupSchedulingGate:queue:completionHandlerWithLatencyReporting:] */

void FUN_107ed7c64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined1 param_10,undefined8 param_11,undefined8 param_12,
                  undefined1 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0c8c20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae960;
  puVar3 = PTR_PTR_1126bf9b8;
  func_0x00010c149e20(PTR_PTR_1126bf9b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c7a60(puVar4,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126aeec0;
  puVar5 = PTR_PTR_1126ae970;
  func_0x00010c292920(PTR_PTR_1126ae970);
  _objc_retainAutoreleasedReturnValue();
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_107ed7f9c;
  puStack_e8 = &UNK_110a11a90;
  uStack_70 = param_10;
  uStack_d0 = param_16;
  uStack_c8 = param_11;
  uStack_74 = param_9;
  uStack_6f = param_13;
  uStack_88 = param_17;
  uStack_80 = param_15;
  uStack_98 = param_12;
  uStack_e0 = uVar2;
  puStack_d8 = puVar1;
  lStack_c0 = param_1;
  uStack_b8 = param_3;
  uStack_b0 = param_7;
  uStack_a8 = param_8;
  uStack_a0 = param_5;
  uStack_90 = param_4;
  uStack_78 = param_6;
  _objc_retain();
  _objc_retain(param_12);
  _objc_retain(param_15);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_3);
  _objc_retain(param_11);
  _objc_retain(param_17);
  _objc_retain(param_16);
  _objc_retain(puVar1);
  func_0x00010bf0caa0(puVar3,param_2,puVar4,puVar5,0,&puStack_100);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_80);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c8);
  _objc_release(uStack_88);
  _objc_release(uStack_d0);
  _objc_release(puStack_d8);
  _objc_release(param_4);
  _objc_release(param_12);
  _objc_release(param_15);
  _objc_release(param_5);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_release(param_11);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar2);
  return;
}



/* Entry: 107ed7f9c; end: 107ed833b;  */

void FUN_107ed7f9c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_d0 [8];
  undefined4 uStack_c8;
  undefined1 uStack_c4;
  undefined1 uStack_c3;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined1 uStack_70;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010c0dd860();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380(puVar1);
  func_0x00010c0aeb00(uVar2);
  _objc_release(uVar2);
  if ((*(byte *)(param_1 + 0x90) & 1) == 0) {
    lVar6 = *(long *)(param_1 + 0x30);
    if (lVar6 == 0) {
      puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
      _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
      (**(code **)(*(long *)(param_1 + 0x78) + 0x10))
                (*(long *)(param_1 + 0x78),*(undefined1 *)(param_1 + 0x90),
                 *(undefined8 *)(param_1 + 0x38));
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380(puVar7);
      func_0x00010c0aeb00(uVar2);
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f380(puVar7);
      func_0x00010c0aeb00(uVar2);
      _objc_release(uVar2);
    }
    else {
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      pcStack_a8 = FUN_107ed833c;
      puStack_a0 = &UNK_11097c050;
      puVar7 = *(undefined **)(param_1 + 0x78);
      _objc_retain(puVar7);
      uStack_70 = *(undefined1 *)(param_1 + 0x90);
      uVar8 = *(undefined8 *)(param_1 + 0x38);
      puStack_78 = puVar7;
      _objc_retain(uVar8);
      uStack_90 = *(undefined8 *)(param_1 + 0x20);
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      uStack_98 = uVar8;
      puStack_88 = puVar1;
      _objc_retain(uVar2);
      uStack_80 = uVar2;
      func_0x00010007380c(lVar6,&puStack_b8);
      _objc_release(uStack_80);
      _objc_release(uStack_98);
      puVar7 = puStack_78;
    }
    _objc_release(puVar7);
  }
  else {
    _objc_initWeak(auStack_c0,*(undefined8 *)(param_1 + 0x40));
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010bf97260();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    uVar8 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c1356e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x19;
    _dispatch_get_global_queue(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    uStack_c4 = *(undefined1 *)(param_1 + 0x90);
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar9);
    uVar10 = *(undefined8 *)(param_1 + 0x78);
    _objc_retain(uVar10);
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar11);
    uStack_c8 = *(undefined4 *)(param_1 + 0x88);
    uStack_c3 = *(undefined1 *)(param_1 + 0x91);
    uVar12 = *(undefined8 *)(param_1 + 0x80);
    _objc_retain(uVar12);
    uVar13 = *(undefined8 *)(param_1 + 0x68);
    _objc_retain(uVar13);
    uVar5 = *(undefined8 *)(param_1 + 0x70);
    _objc_retain(uVar5);
    _objc_copyWeak(auStack_d0,auStack_c0);
    func_0x00010beca560(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar8);
    _objc_destroyWeak(auStack_d0);
    _objc_release(uVar5);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_c0);
  }
  _objc_release(puVar1);
  return;
}



/* Entry: 107ed833c; end: 107ed83f7;  */

void FUN_107ed833c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  (**(code **)(*(long *)(param_1 + 0x40) + 0x10))
            (*(long *)(param_1 + 0x40),*(undefined1 *)(param_1 + 0x48),
             *(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380(puVar1);
  func_0x00010c0aeb00(uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380(puVar1);
  func_0x00010c0aeb00(uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ed83f8; end: 107ed86fb;  */

void FUN_107ed83f8(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  byte bStack_78;
  
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380(puVar2);
  func_0x00010c0aeb00(uVar3);
  _objc_release(uVar3);
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  bVar1 = param_2 == 0 & *(byte *)(param_1 + 0x7c);
  lVar8 = *(long *)(param_1 + 0x30);
  if (lVar8 == 0) {
    puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
    (**(code **)(*(long *)(param_1 + 0x60) + 0x10))(*(long *)(param_1 + 0x60),bVar1,param_2);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380(puVar9);
    func_0x00010c0aeb00(uVar3);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380(puVar9);
    func_0x00010c0aeb00(uVar3);
    _objc_release(uVar3);
  }
  else {
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_107ed86fc;
    puStack_a8 = &UNK_11097c050;
    puVar9 = *(undefined **)(param_1 + 0x60);
    _objc_retain(puVar9);
    puStack_80 = puVar9;
    bStack_78 = bVar1;
    _objc_retain(param_2);
    uStack_98 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    lStack_a0 = param_2;
    puStack_90 = puVar2;
    _objc_retain(uVar3);
    uStack_88 = uVar3;
    func_0x00010007380c(lVar8,&puStack_c0);
    _objc_release(uStack_88);
    _objc_release(lStack_a0);
    puVar9 = puStack_80;
  }
  _objc_release(puVar9);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar3);
  puStack_f8 = puVar5;
  uStack_f0 = 0xc2000000;
  pcStack_e8 = FUN_107ed87b8;
  puStack_e0 = &UNK_1108a7688;
  uStack_d0 = *(undefined8 *)(param_1 + 0x48);
  uStack_c8 = *(undefined4 *)(param_1 + 0x78);
  ppuVar4 = &puStack_f8;
  uStack_d8 = uVar3;
  _objc_retainBlock();
  if ((*(byte *)(param_1 + 0x7d) & 1) == 0) {
    lVar8 = *(long *)(param_1 + 0x68);
    if (lVar8 == 0) {
      (*(code *)ppuVar4[2])(ppuVar4);
    }
    else {
      (**(code **)(lVar8 + 0x10))(lVar8,ppuVar4);
    }
  }
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  param_1 = param_1 + 0x70;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0f98a0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f7fc0();
    _objc_release(uVar7);
    _objc_release(uVar6);
  }
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 107ed86fc; end: 107ed87b7;  */

void FUN_107ed86fc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  (**(code **)(*(long *)(param_1 + 0x40) + 0x10))
            (*(long *)(param_1 + 0x40),*(undefined1 *)(param_1 + 0x48),
             *(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380(puVar1);
  func_0x00010c0aeb00(uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380(puVar1);
  func_0x00010c0aeb00(uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ed87b8; end: 107ed87cf;  */

void FUN_107ed87b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9adf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__scheduleBackupJobsIfNeeded_taco_112584520,
             *(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  return;
}



/* Entry: 107ed87d0; end: 107ed88eb;  */

void FUN_107ed87d0(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
  _objc_retain(*(undefined8 *)(param_2 + 0x50));
  _objc_retain(*(undefined8 *)(param_2 + 0x58));
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),7);
  __Block_object_assign(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x70,param_2 + 0x70);
  return;
}



/* Entry: 107ed88ec; end: 107ed891f; -[SCCloudSync schedulePendingBackupJobsForEnteringMemories] */

void FUN_107ed88ec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c150100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107ed8920; end: 107ed8a6b; -[SCCloudSync _scheduleBackupJobsIfNeeded:tacomaOperationType:] */

void FUN_107ed8920(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf14c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf4b900(uVar3,param_2,puVar4);
  _objc_release(puVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar2 == 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_107ed8a6c;
    puStack_50 = &UNK_110841f20;
    _objc_retain(param_3);
    uStack_48 = param_3;
    func_0x00010c14fc60(uVar1,param_2,param_3,&puStack_68);
    _objc_release(uVar1);
    uVar1 = uStack_48;
  }
  else {
    func_0x00010c150100(uVar1);
  }
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 107ed8a6c; end: 107ed8a6f;  */

void FUN_107ed8a6c(void)

{
  return;
}



/* Entry: 107ed8a70; end: 107ed8cab; -[SCCloudSync _tacomaBackupForEntryIds:operationType:dependencyEntryIds:detailedState:requestId:approximateTotalMediaSizeInBytes:origin:callbackQueue:callback:] */

void FUN_107ed8a70(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined *param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    if (param_12 == (undefined *)0x0) goto LAB_107ed8c54;
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260();
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_107ed8cac;
    puStack_78 = &UNK_11084aaa8;
    _objc_retain(param_12);
    puStack_68 = param_12;
    puStack_70 = puVar3;
    func_0x00010007380c(param_11,&puStack_90);
    _objc_release(puStack_68);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_6;
    func_0x00010bf63640(param_6);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_12);
    _objc_retain(param_11);
    func_0x00010bef70a0(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_11);
    puVar3 = param_12;
  }
  _objc_release(puVar3);
LAB_107ed8c54:
  _objc_release(param_3);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 107ed8cac; end: 107ed8cbb;  */

void FUN_107ed8cac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107ed8cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107ed8cbc; end: 107ed8d93;  */

void FUN_107ed8cbc(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)(param_1 + 0x28);
  if (lStack_38 != 0) {
    if ((param_2 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                          &PTR____CFConstantStringClassReference_110ec3358,
                          &PTR____CFConstantStringClassReference_110ec2c18,2);
      _objc_retainAutoreleasedReturnValue();
      lStack_38 = *(long *)(param_1 + 0x28);
    }
    else {
      puVar1 = (undefined *)0x0;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_107ed8d94;
    puStack_48 = &UNK_11084aaa8;
    _objc_retain(lStack_38);
    puStack_40 = puVar1;
    _objc_retain(puVar1);
    func_0x00010007380c(uVar2,&puStack_60);
    _objc_release(puStack_40);
    _objc_release(lStack_38);
    _objc_release(puVar1);
  }
  return;
}



/* Entry: 107ed8d94; end: 107ed8da3;  */

void FUN_107ed8d94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107ed8da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107ed8da4; end: 107ed8f73; -[SCCloudSync _updateStatusForUploadingForTacoma:snapIds:backupStatus:seqNum:shouldTransitionState:] */

void FUN_107ed8da4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,int param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) goto LAB_107ed8f54;
  if (param_5 < 3) {
    if (param_5 == 0) {
      uVar4 = 1;
    }
    else {
      if (param_5 == 1) {
        func_0x00010bdcb760(param_1,param_2,0,param_3,param_4);
        if (param_7 == 0) goto LAB_107ed8f54;
        func_0x00010bed6c40(param_1,param_2,param_6);
        func_0x00010bf3e4e0(*(undefined8 *)(param_1 + 0xd0),param_2,0,0);
        goto LAB_107ed8eb0;
      }
      if (param_5 != 2) goto LAB_107ed8f54;
      uVar4 = 2;
    }
LAB_107ed8f48:
    func_0x00010bdcb760(param_1,param_2,uVar4,param_3,param_4);
    goto LAB_107ed8f54;
  }
  if (param_5 == 3) {
    func_0x00010bdcb760(param_1,param_2,0,param_3,param_4);
    if (param_7 == 0) goto LAB_107ed8f54;
LAB_107ed8eb0:
    uVar4 = 2;
  }
  else {
    if (param_5 != 4) {
      if (param_5 != 5) goto LAB_107ed8f54;
      if (param_7 == 0) {
        uVar4 = 0;
        goto LAB_107ed8f48;
      }
      func_0x00010bed6c40(param_1,param_2,param_6);
      func_0x00010bdcb760(param_1,param_2,0,param_3,param_4);
      goto LAB_107ed8eb0;
    }
    func_0x00010bdcb760(param_1,param_2,0,param_3,param_4);
    if (param_7 == 0) goto LAB_107ed8f54;
    uVar4 = 6;
  }
  func_0x00010becf300(0,param_1,param_2,uVar4,0);
  puVar2 = PTR_PTR_1126c3a00;
  func_0x00010c22ba80(PTR_PTR_1126c3a00);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c3c50;
  func_0x00010bf69d80(PTR_PTR_1126c3c50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2254a0(puVar2,param_2,puVar3,param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
LAB_107ed8f54:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107ed8f74; end: 107ed9097; -[SCCloudSync _announceChangeEntrySyncStatus:entryId:snapIds:] */

void FUN_107ed8f74(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_5);
      }
      func_0x00010bf3e360(*(undefined8 *)(param_1 + 0xd0));
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = param_5;
    func_0x00010bf52a60();
  }
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = param_4;
  func_0x00010c252d60();
  if ((lVar2 != 7) && (lVar2 = param_4, func_0x00010c252d60(), lVar2 != 3)) {
    lVar2 = param_4;
    func_0x00010c252d60();
    if (lVar2 == 9) {
                    /* WARNING: Could not recover jumptable at 0x00010bf011b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_4,PTR_s_allowInitialSync_11259de10);
      return;
    }
    return;
  }
  func_0x00010becf300(0,param_4);
  puVar3 = PTR_PTR_1126c3a00;
  func_0x00010c22ba80(PTR_PTR_1126c3a00);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c3c50;
  func_0x00010bf69d80(PTR_PTR_1126c3c50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2254a0(puVar3);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 107ed9098; end: 107ed916b; -[SCCloudSync _resetStatusAfterUpload] */

void FUN_107ed9098(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  lVar1 = param_1;
  func_0x00010c252d60();
  if ((lVar1 != 7) && (lVar1 = param_1, func_0x00010c252d60(), lVar1 != 3)) {
    lVar1 = param_1;
    func_0x00010c252d60();
    if (lVar1 == 9) {
                    /* WARNING: Could not recover jumptable at 0x00010bf011b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_allowInitialSync_11259de10);
      return;
    }
    return;
  }
  func_0x00010becf300(0,param_1);
  puVar2 = PTR_PTR_1126c3a00;
  func_0x00010c22ba80(PTR_PTR_1126c3a00);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c3c50;
  func_0x00010bf69d80(PTR_PTR_1126c3c50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2254a0(puVar2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107ed916c; end: 107ed9173; -[SCCloudSync removeListener:] */

void FUN_107ed916c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xd0),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 107ed9174; end: 107ed92ef; -[SCCloudSync fetchLastErrorWithCompletionHandler:] */

void FUN_107ed9174(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0f98a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x107ed9234;
  puStack_48 = &UNK_11084aaa8;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_60);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107ed92f0; end: 107ed92ff;  */

void FUN_107ed92f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107ed92fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107ed9300; end: 107ed9483; -[SCCloudSync selectivelySyncOperationsWithEntryId:] */

void FUN_107ed9300(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0f98a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x107ed93c0;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_60);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107ed9484; end: 107ed94cf; -[SCCloudSync isInitialPageSyncCompleted] */

uint FUN_107ed9484(ulong param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = param_1;
  func_0x00010c266a00();
  if ((uVar1 & 1) == 0) {
    func_0x00010c252d60();
    uVar2 = 1;
    if (param_1 < 10) {
      uVar2 = 0x1dc >> (ulong)((uint)param_1 & 0x1f);
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2 & 1;
}



/* Entry: 107ed94d0; end: 107ed951b; -[SCCloudSync isFullySynced] */

uint FUN_107ed94d0(ulong param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = param_1;
  func_0x00010c266a00();
  if ((int)uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010c252d60();
    uVar2 = 1;
    if (param_1 < 10) {
      uVar2 = 0xdc >> (ulong)((uint)param_1 & 0x1f);
    }
  }
  return uVar2 & 1;
}



/* Entry: 107ed951c; end: 107ed9547; -[SCCloudSync isLoading] */

uint FUN_107ed951c(ulong param_1)

{
  func_0x00010c252d60();
  return (uint)(7 < param_1) | 0x23U >> (ulong)((uint)param_1 & 0x1f) & 1;
}



/* Entry: 107ed9548; end: 107ed9a07; -[SCCloudSync _uploadStateNotifierWithTacomaEnabled:] */

/* WARNING: Removing unreachable block (ram,0x000107ed970c) */
/* WARNING: Removing unreachable block (ram,0x000107ed9710) */

void FUN_107ed9548(undefined *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = param_1;
  func_0x00010c06cf80();
  puVar2 = PTR_PTR_1126bc7e0;
  if ((int)puVar12 != 0) {
    puVar2 = PTR_PTR_1126c3c50;
    func_0x00010bf69d80();
    _objc_retainAutoreleasedReturnValue();
    param_1 = puVar2;
    goto LAB_107ed99c8;
  }
  puVar12 = param_1;
  func_0x00010be1f660(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa6bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(puVar12);
  puVar12 = PTR_PTR_1126c3198;
  if (puVar2 == (undefined *)0x0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar3 = puVar2;
    func_0x00010c0f6420();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c1356e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6e8e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  puVar3 = param_1;
  func_0x00010bee5b40();
  if ((int)puVar3 == 0) {
    uVar10 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0c8940(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0809e0();
    func_0x00010be1ef40(param_1);
    _objc_retain(0);
    _objc_retain(0);
    _objc_release(uVar1);
    _objc_release(uVar10);
    if (param_3 == 0) {
LAB_107ed9780:
      puVar3 = PTR_PTR_1126c3c48;
      _objc_alloc();
      func_0x00010c02f0e0();
      puVar4 = PTR_PTR_1126d8398;
      _objc_alloc();
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0c8940(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c011f60();
      _objc_release(uVar10);
      _objc_release(uVar1);
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_1;
      func_0x00010be1cec0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bf529e0();
      puVar8 = puVar5;
      if (puVar7 != (undefined *)0x0) {
        puVar7 = PTR_PTR_1126d83a0;
        _objc_alloc(PTR_PTR_1126d83a0);
        uVar1 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c269d40(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c047fc0(puVar7);
        _objc_release(uVar1);
        func_0x00010bf09f60(puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        _objc_release(puVar7);
      }
      puVar7 = PTR_PTR_1126d83a8;
      _objc_alloc();
      puVar5 = PTR_DAT_1126a5a48;
      _objc_retain(puVar12);
      puVar9 = puVar12;
      func_0x00010010fab4(puVar12,puVar5);
      puVar5 = puVar12;
      if ((int)puVar9 == 0) {
        puVar5 = (undefined *)0x0;
      }
      _objc_retain(puVar5);
      _objc_release(puVar12);
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c00b740();
      _objc_release(puVar5);
      _objc_release(uVar1);
      puVar5 = puVar8;
      if (puVar7 != (undefined *)0x0) {
        func_0x00010bf09f60(puVar8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
      }
      param_1 = PTR_PTR_1126c3c38;
      func_0x00010c0ec8e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    else {
      uVar10 = *(undefined8 *)(param_1 + 0x58);
      uVar1 = *(undefined8 *)(param_1 + 0x108);
      func_0x00010bf51e00(uVar1);
      FUN_107f16360(uVar10,1,puVar12,puVar2,uVar1);
      _objc_release(uVar1);
      if ((int)uVar10 == 0) goto LAB_107ed9780;
      _objc_opt_class();
      func_0x00010bf69960();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(0);
    _objc_release(0);
  }
  else {
    param_1 = PTR_PTR_1126c3c50;
    func_0x00010bf69d80();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar12);
  _objc_release();
LAB_107ed99c8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    uVar10 = *(undefined8 *)(puVar2 + 8);
    func_0x00010c0f98a0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar10;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f7fc0();
    _objc_release(uVar1);
    _objc_release(uVar10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107ed9a08; end: 107ed9b33; -[SCCloudSync allowInitialSync] */

void FUN_107ed9a08(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0f98a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fc0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 107ed9b34; end: 107ed9ba3; -[SCCloudSync registerSyncService] */

void FUN_107ed9b34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c3a00;
  func_0x00010c22ba80(PTR_PTR_1126c3a00);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  _objc_opt_class(param_1);
  func_0x00010bf69960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13d860(puVar1,param_2,param_1,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107ed9ba4; end: 107ed9bb3; +[SCCloudSync defaultImmediateNotifier] */

void FUN_107ed9ba4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,PTR_PTR_1126c3c40,PTR_s_scheduleAfterSeconds__112631918);
  return;
}



/* Entry: 107ed9bb4; end: 107ed9bc7; +[SCCloudSync defaultLongRunningNotifier] */

void FUN_107ed9bb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4072c00000000000,PTR_PTR_1126c3c40,PTR_s_scheduleAfterSeconds__112631918);
  return;
}



/* Entry: 107ed9bc8; end: 107ed9c2f; -[SCCloudSync dedicatedQueue] */

void FUN_107ed9bc8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0f98a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107ed9c30; end: 107eda423; -[SCCloudSync runWithServiceTerm:] */

void FUN_107ed9c30(double param_1,undefined *param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar4 = param_2;
  func_0x00010be41400();
  if (((ulong)puVar4 & 1) != 0) goto LAB_107ed9d18;
  puVar4 = param_2;
  func_0x00010c252d60();
  if (4 < (long)puVar4) {
    if ((long)puVar4 < 8) {
      if ((puVar4 != (undefined *)0x5) && (puVar4 != (undefined *)0x6)) {
        if (puVar4 != (undefined *)0x7) goto LAB_107ed9d18;
        goto LAB_107ed9cdc;
      }
    }
    else if ((undefined *)0x1 < puVar4 + -8) goto LAB_107ed9d18;
LAB_107ed9d14:
    func_0x00010be95fe0(param_2);
    goto LAB_107ed9d18;
  }
  if (1 < (long)puVar4) {
    if (puVar4 == (undefined *)0x2) {
      func_0x00010bdde4a0(param_2);
      goto LAB_107ed9d18;
    }
    if (puVar4 != (undefined *)0x3) {
      if (puVar4 == (undefined *)0x4) {
        func_0x00010bee5f40(param_2);
      }
      goto LAB_107ed9d18;
    }
LAB_107ed9cdc:
    func_0x00010bdddbe0(param_2);
    goto LAB_107ed9d18;
  }
  if (puVar4 != (undefined *)0x0) {
    if (puVar4 != (undefined *)0x1) goto LAB_107ed9d18;
    goto LAB_107ed9d14;
  }
  func_0x00010c20a2c0(param_2);
  puVar4 = param_2;
  func_0x00010be343c0();
  param_2[200] = (char)puVar4;
  puVar4 = param_2;
  func_0x00010be1f660();
  _objc_retainAutoreleasedReturnValue();
  puStack_170 = puVar4;
  if (((param_2[200] & 1) == 0) && (puVar5 = puVar4, func_0x00010c298be0(), (long)puVar5 < 0)) {
    puStack_f8 = &uStack_100;
    uStack_100 = 0;
    uStack_f0 = 0x3032000000;
    pcStack_e8 = FUN_107ed6ff8;
    uStack_e0 = 0x107ed7008;
    uStack_d8 = 0;
    uVar13 = *(undefined8 *)(param_2 + 8);
    func_0x00010bf63f40(uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
    param_1 = 1.60807493534087e-314;
    uStack_128 = 0xc2000000;
    pcStack_120 = FUN_107eda424;
    puStack_118 = &UNK_11084b9d0;
    _objc_retain(puVar4);
    puStack_108 = &uStack_100;
    puStack_138 = (undefined *)0x0;
    puStack_110 = puVar4;
    func_0x00010c0f8540(uVar12);
    puVar5 = puStack_138;
    puStack_178 = puStack_138;
    _objc_retain();
    _objc_release(uVar12);
    _objc_release(uVar13);
    if ((puVar5 == (undefined *)0x0) && (puStack_f8[5] != 0)) {
      uVar13 = *(undefined8 *)(param_2 + 0x30);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar13;
      func_0x00010c074300();
      _objc_release(uVar13);
      if ((int)uVar12 != 0) {
        uVar12 = *(undefined8 *)(param_2 + 0x30);
        func_0x00010c269d40(uVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a1a40();
        _objc_release(uVar12);
        puStack_170 = (undefined *)puStack_f8[5];
        _objc_retain(puStack_170);
        _objc_release(puVar4);
      }
    }
    _objc_release(puStack_110);
    __Block_object_dispose(&uStack_100,8);
    _objc_release(uStack_d8);
  }
  else {
    puStack_178 = (undefined *)0x0;
  }
  uVar13 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar13;
  func_0x00010bfbce60();
  _objc_release(uVar13);
  if ((int)uVar12 == 0) {
    puVar4 = param_2;
    func_0x00010beb5660();
    if (((ulong)puVar4 & 1) != 0) {
      bVar2 = true;
      goto LAB_107ed9e10;
    }
    puVar4 = puStack_170;
    func_0x00010c088d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar4 == (undefined *)0x0) goto LAB_107ed9dd0;
    puVar4 = puStack_170;
    func_0x00010c088d40(puStack_170);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f3a0();
    bVar3 = param_1 < -3600.0;
    _objc_release(puVar4);
    bVar2 = false;
  }
  else {
    func_0x00010be93ac0(param_2);
LAB_107ed9dd0:
    bVar2 = false;
LAB_107ed9e10:
    bVar3 = true;
  }
  uVar12 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puStack_170;
  FUN_107eee49c(puStack_170,uVar12,*(undefined8 *)(param_2 + 0x78));
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0d3c80();
  uVar13 = *(undefined8 *)(param_2 + 0x108);
  *(undefined **)(param_2 + 0x108) = puVar5;
  _objc_release(uVar13);
  _objc_release(puVar4);
  _objc_release(uVar12);
  func_0x00010bdcc8a0(param_2);
  uVar13 = *(undefined8 *)(param_2 + 8);
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110e3ecf8;
  puVar4 = puStack_170;
  func_0x00010c2667e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110ec2c38;
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_a0 = puVar5;
  func_0x00010c25d8c0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110ec2c58;
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_98 = puVar6;
  func_0x00010c25d8c0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110ec2c78;
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_90 = puVar7;
  func_0x00010c25d8c0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110ec2c98;
  puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puStack_88 = puVar8;
  func_0x00010c25d8c0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110ec2cb8;
  puVar10 = puStack_178;
  puStack_80 = puVar9;
  if (puStack_178 == (undefined *)0x0) {
    puVar10 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_78 = puVar10;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3e500(uVar12);
  _objc_release(puVar11);
  if (puStack_178 == (undefined *)0x0) {
    _objc_release(puVar10);
  }
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  if (puVar4 == (undefined *)0x0) {
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  _objc_release(uVar12);
  _objc_release(uVar13);
  if (((param_2[0xcb] & 1) == 0) && ((param_2[200] & 1) == 0)) {
    puVar4 = puStack_170;
    func_0x00010c088d40();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = bVar2;
    if (puVar4 != (undefined *)0x0) {
      bVar1 = true;
    }
    _objc_release();
    if (bVar1) goto LAB_107eda088;
    param_2[0xca] = 1;
    func_0x00010becf300(0,param_2);
  }
  else {
LAB_107eda088:
    if ((bool)(bVar2 | bVar3)) {
      func_0x00010be95fe0(param_2);
    }
    else {
      func_0x00010c210e80(param_2);
      func_0x00010becf300(0,param_2);
    }
  }
  _objc_initWeak(&uStack_100,param_2);
  uVar15 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c2268e0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_2 + 8);
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar17;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_140,&uStack_100);
  uVar14 = uVar15;
  func_0x00010c0e0c60();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_2 + 0xe8) = uVar14;
  _objc_release(uVar16);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar17);
  _objc_release(puVar4);
  _objc_release(uVar15);
  _objc_release(&PTR____CFConstantStringClassReference_110e27918);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(&uStack_100);
  _objc_release(puStack_178);
  _objc_release(puStack_170);
LAB_107ed9d18:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_100,8);
  __Unwind_Resume();
  func_0x00010bf6b3a0(PTR_PTR_1126bc7f8);
  func_0x00010bf6b380(PTR_PTR_1126bc830);
  puVar4 = PTR_PTR_1126b2508;
  func_0x00010bf350c0(PTR_PTR_1126b2508);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7da0();
  func_0x00010c210d80(puVar4);
  func_0x00010c210d20(puVar4);
  func_0x00010c220e20(puVar4);
  puVar5 = PTR_PTR_1126b2500;
  _objc_alloc();
  uVar12 = *(undefined8 *)(param_4 + 0x20);
  func_0x00010c0e0160(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfed6a0(*(undefined8 *)(param_4 + 0x20));
  uVar13 = *(undefined8 *)(param_4 + 0x20);
  func_0x00010c088400(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_4 + 0x20);
  func_0x00010c088b00(uVar14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2439a0(*(undefined8 *)(param_4 + 0x20));
  uVar15 = *(undefined8 *)(param_4 + 0x20);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0308c0();
  lVar18 = *(long *)(*(long *)(param_4 + 0x28) + 8);
  uVar17 = *(undefined8 *)(lVar18 + 0x28);
  *(undefined **)(lVar18 + 0x28) = puVar5;
  _objc_release(uVar17);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 107eda424; end: 107eda5a3;  */

void FUN_107eda424(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  func_0x00010bf6b3a0(PTR_PTR_1126bc7f8);
  func_0x00010bf6b380(PTR_PTR_1126bc830);
  puVar1 = PTR_PTR_1126b2508;
  func_0x00010bf350c0(PTR_PTR_1126b2508,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7da0();
  func_0x00010c210d80(puVar1,param_2,0);
  func_0x00010c210d20(puVar1,param_2,0);
  func_0x00010c220e20(puVar1,param_2,0);
  puVar2 = PTR_PTR_1126b2500;
  _objc_alloc();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e0160(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfed6a0(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c088400(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c088b00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2439a0(uVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0308c0(puVar2,param_2,uVar3,uVar4,uVar5,uVar6,0,uVar7,0,0,uVar8,0);
  lVar9 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar4 = *(undefined8 *)(lVar9 + 0x28);
  *(undefined **)(lVar9 + 0x28) = puVar2;
  _objc_release(uVar4);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107eda5a4; end: 107eda5d7;  */

void FUN_107eda5a4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be1a360(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107eda5d8; end: 107eda83b; -[SCCloudSync _transitionToState:serviceTerm:backOffTimeInMilliseconds:] */

void FUN_107eda5d8(double param_1,ulong param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  
  _objc_retain(param_5);
  uVar1 = param_2;
  func_0x00010be41400();
  if ((uVar1 & 1) != 0) goto LAB_107eda7ac;
  if (param_4 < 5) {
    if (param_4 < 2) {
      if (param_4 != 0) {
        if (param_4 != 1) goto LAB_107eda7a4;
        func_0x00010c20a2c0(param_2,param_3,1);
        uVar1 = param_2;
        func_0x00010be343c0();
        *(char *)(param_2 + 200) = (char)uVar1;
        dVar5 = (double)NEON_fminnm(param_1 / 1000.0,0x40f5180000000000);
        if (dVar5 <= 1.0) {
          dVar5 = 1.0;
        }
        goto LAB_107eda778;
      }
      func_0x00010c20a2c0(param_2,param_3,0);
LAB_107eda70c:
      puVar2 = PTR_PTR_1126d8218;
      func_0x00010bf69ba0(PTR_PTR_1126d8218);
      _objc_retainAutoreleasedReturnValue();
LAB_107eda78c:
      func_0x00010bf95760(param_5,param_3,puVar2);
    }
    else {
      if (param_4 == 2) {
        func_0x00010c20a2c0(param_2,param_3,2);
        param_1 = param_1 / 1000.0;
        if (param_1 <= 0.0) {
          param_1 = 0.0;
        }
        dVar5 = 86400.0;
        if (param_1 <= 86400.0) {
          dVar5 = param_1;
        }
LAB_107eda778:
        puVar2 = PTR_PTR_1126c3c40;
        func_0x00010c14fbe0(dVar5,PTR_PTR_1126c3c40);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_107eda78c;
      }
      if (param_4 != 3) {
        if (param_4 == 4) {
          param_4 = 4;
          goto LAB_107eda6e4;
        }
        goto LAB_107eda7a4;
      }
      func_0x00010c20a2c0(param_2,param_3,3);
      *(undefined1 *)(param_2 + 200) = 1;
      puVar2 = *(undefined **)(param_2 + 8);
      func_0x00010c0c8940(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c0809e0();
      uVar1 = param_2;
      func_0x00010bee5e00(param_2,param_3,puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf95760(param_5,param_3,uVar1);
      _objc_release(uVar1);
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
  }
  else if (param_4 < 8) {
    if (param_4 - 5U < 2) {
LAB_107eda6e4:
      func_0x00010c20a2c0(param_2,param_3,param_4);
      puVar2 = PTR_PTR_1126c3c50;
      func_0x00010bf69d80(PTR_PTR_1126c3c50);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107eda78c;
    }
    if (param_4 == 7) {
      func_0x00010c20a2c0(param_2,param_3,7);
      func_0x00010c1af6a0(param_2,param_3,0);
      *(undefined1 *)(param_2 + 200) = 0;
      goto LAB_107eda70c;
    }
  }
  else {
    if (param_4 == 9) {
      func_0x00010c20a2c0(param_2,param_3,9);
      puVar2 = PTR_PTR_1126c3c50;
      func_0x00010c0d83e0(PTR_PTR_1126c3c50);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107eda78c;
    }
    if (param_4 == 8) goto LAB_107eda6e4;
  }
LAB_107eda7a4:
  func_0x00010bdcc8a0(param_2);
LAB_107eda7ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107eda83c; end: 107eda933; -[SCCloudSync setIsBackingUpNowAsynchronously:completionHandler:] */

void FUN_107eda83c(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c06cf80();
  if (param_3 == (int)lVar1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0f98a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_107eda934;
    puStack_60 = &UNK_1108523f8;
    uStack_48 = (undefined1)param_3;
    lStack_58 = param_1;
    _objc_retain(param_4);
    lStack_50 = param_4;
    func_0x00010c0f7fc0(uVar3,param_2,&puStack_78);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(lStack_50);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 107eda934; end: 107edaa9b;  */

void FUN_107eda934(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  func_0x00010c252d60();
  func_0x00010c1af6a0(*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c0809e0();
  _objc_release(uVar4);
  _objc_release(uVar2);
  if ((int)uVar3 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c06cf80();
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xa8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    if (iVar1 == 0) {
      func_0x00010bf2dba0(uVar4);
    }
    else {
      func_0x00010bf14f20(uVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    _objc_release(uVar4);
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c06cf80();
  if (iVar1 != 0) {
    puVar5 = PTR_PTR_1126c3a00;
    func_0x00010c22ba80(PTR_PTR_1126c3a00);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126c3c50;
    func_0x00010bf69d80(PTR_PTR_1126c3c50);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2254a0(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  func_0x00010bdcc8a0(*(undefined8 *)(param_1 + 0x20));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107edaa88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 107edaa9c; end: 107edaaa3;  */

void FUN_107edaa9c(void)

{
  return;
}



/* Entry: 107edaaa4; end: 107edab4b; -[SCCloudSync _galleryResyncRequired] */

void FUN_107edaaa4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  lVar1 = param_1;
  func_0x00010beb5660();
  if (((int)lVar1 != 0) &&
     ((lVar1 = param_1, func_0x00010c252d60(), lVar1 == 7 ||
      (lVar1 = param_1, func_0x00010c252d60(), lVar1 == 3)))) {
    puVar2 = PTR_PTR_1126c3a00;
    func_0x00010c22ba80(PTR_PTR_1126c3a00);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c3c50;
    func_0x00010bf69d80(PTR_PTR_1126c3c50);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2254a0(puVar2,param_2,puVar3,param_1);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 107edab4c; end: 107edab9b; -[SCCloudSync _shouldResyncWithRemote] */

byte FUN_107edab4c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfbdb00();
  if ((uVar2 & 1) == 0) {
    bVar3 = *(byte *)(param_1 + 0xcc);
  }
  else {
    bVar3 = 1;
  }
  _objc_release(uVar1);
  return bVar3 & 1;
}



/* Entry: 107edab9c; end: 107edabd7; -[SCCloudSync _resetResyncWithRemoteFlag] */

void FUN_107edab9c(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0xcc) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1da0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107edabd8; end: 107edad33; -[SCCloudSync _resyncAfterAbortingOperationSnapshot:serviceTerm:] */

void FUN_107edabd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_107edad34;
  puStack_78 = &UNK_110841f80;
  uVar5 = *(undefined8 *)(param_1 + 8);
  lStack_70 = param_1;
  uStack_68 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f98a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_107edadbc;
  puStack_a8 = &UNK_1108bbd78;
  lStack_a0 = param_1;
  uStack_98 = param_4;
  _objc_retain(param_4);
  func_0x00010c0f8520(uVar2,param_2,&puStack_90,uVar4,&puStack_c0);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uStack_98);
  _objc_release(uStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107edad34; end: 107edadbb;  */

void FUN_107edad34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_30 = *(undefined8 *)(param_1 + 0x28);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_30,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfa900(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010becf310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(puVar2 + 0x20),PTR_s__transitionToState_serviceTerm_b_112591668,6,
             *(undefined8 *)(puVar2 + 0x28));
  return;
}



/* Entry: 107edadbc; end: 107edadcf;  */

void FUN_107edadbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010becf310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x20),PTR_s__transitionToState_serviceTerm_b_112591668,6,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107edadd0; end: 107edb9ef; -[SCCloudSync _onOperationFailed:snapshot:serviceTerm:] */

undefined *
FUN_107edadd0(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  undefined *puVar21;
  undefined *puStack_418;
  undefined *puStack_410;
  undefined *puStack_408;
  undefined *puStack_3f0;
  undefined *puStack_3c0;
  undefined8 uStack_300;
  undefined8 *puStack_2f8;
  undefined8 uStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar9 = param_3;
  func_0x00010c137b40();
  if ((int)puVar9 != 0) {
    uVar13 = *(undefined8 *)(param_1 + 0xd0);
    puVar9 = param_3;
    FUN_107eedfd4(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_3;
    FUN_107eee018();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3e360(uVar13);
    _objc_release(puVar1);
    _objc_release(puVar9);
  }
  func_0x00010c15e520(param_4);
  func_0x00010bed6c40(param_1);
  puVar9 = param_3;
  func_0x00010c27dd80();
  if (puVar9 < (undefined *)0xd) {
    if ((1L << ((ulong)puVar9 & 0x3f) & 0x1ca5U) != 0) {
      func_0x00010be95fc0(param_1);
      goto LAB_107edb978;
    }
    _objc_retain(param_3);
    puVar9 = param_3;
    func_0x00010c2424c0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar9;
    func_0x00010bf529e0();
    _objc_release(puVar9);
    puStack_408 = PTR_PTR_1126af4c0;
    if (puVar1 == (undefined *)0x0) {
      func_0x00010be95fc0(param_1);
      _objc_release(param_3);
      goto LAB_107edb978;
    }
    puVar9 = param_3;
    func_0x00010bf97260(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar9;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa70a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar13);
    _objc_release(puVar1);
    _objc_release(puVar9);
    puStack_3f0 = param_3;
    func_0x00010c2424c0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    plStack_240 = (long *)0x0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    puVar1 = param_3;
    func_0x00010bf6f620();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf52a60();
    if (puVar2 != (undefined *)0x0) {
      lVar7 = *plStack_240;
      do {
        puVar18 = (undefined *)0x0;
        do {
          if (*plStack_240 != lVar7) {
            _objc_enumerationMutation(puVar1);
          }
          puVar21 = PTR_PTR_1126bf8f8;
          func_0x00010c2aebe0(PTR_PTR_1126bf8f8);
          _objc_retainAutoreleasedReturnValue();
          puVar19 = puVar21;
          func_0x00010c1d0720();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar19;
          func_0x00010bf21f60();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar19);
          _objc_release(puVar21);
          func_0x00010befa120(puVar9);
          _objc_release(puVar3);
          puVar18 = puVar18 + 1;
        } while (puVar2 != puVar18);
        puVar2 = puVar1;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined *)0x0);
    }
    _objc_release(puVar1);
    puStack_410 = puVar9;
    func_0x00010bf51e00();
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    plStack_280 = (long *)0x0;
    puVar2 = param_3;
    func_0x00010c0ce260();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar2;
    func_0x00010bf52a60();
    if (puVar18 != (undefined *)0x0) {
      lVar7 = *plStack_280;
      do {
        puVar21 = (undefined *)0x0;
        do {
          if (*plStack_280 != lVar7) {
            _objc_enumerationMutation(puVar2);
          }
          puVar19 = PTR_PTR_1126bf900;
          func_0x00010c2aec40(PTR_PTR_1126bf900);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar19;
          func_0x00010c1d0720();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010bf21f60();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar3);
          _objc_release(puVar19);
          func_0x00010befa120(puVar1);
          _objc_release(puVar4);
          puVar21 = puVar21 + 1;
        } while (puVar18 != puVar21);
        puVar18 = puVar2;
        func_0x00010bf52a60();
      } while (puVar18 != (undefined *)0x0);
    }
    _objc_release(puVar2);
    puStack_418 = puVar1;
    func_0x00010bf51e00();
    puStack_3c0 = param_3;
    func_0x00010bf64980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar9);
    _objc_release(param_3);
  }
  else {
    puStack_418 = (undefined *)0x0;
    puStack_3c0 = (undefined *)0x0;
    puStack_410 = (undefined *)0x0;
    puStack_408 = (undefined *)0x0;
    puStack_3f0 = (undefined *)0x0;
  }
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  lStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  plStack_2c0 = (long *)0x0;
  _objc_retain(puStack_3f0);
  puVar21 = puStack_3f0;
  func_0x00010bf52a60();
  if (puVar21 != (undefined *)0x0) {
    lVar7 = *plStack_2c0;
    do {
      puVar19 = (undefined *)0x0;
      do {
        if (*plStack_2c0 != lVar7) {
          _objc_enumerationMutation(puStack_3f0);
        }
        lVar16 = *(long *)(lStack_2c8 + (long)puVar19 * 8);
        func_0x00010011df08();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar16;
        func_0x00010c241220(lVar16);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puStack_3c0;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar12);
        if (puVar3 != (undefined *)0x0) {
          func_0x00010c1d0640(puVar18);
          puVar4 = PTR_PTR_1126bf910;
          func_0x00010c2aebc0(PTR_PTR_1126bf910);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0720();
          _objc_unsafeClaimAutoreleasedReturnValue();
          func_0x00010c204680(puVar4);
          _objc_unsafeClaimAutoreleasedReturnValue();
          lVar12 = lVar16;
          func_0x00010c13f700();
          _objc_retainAutoreleasedReturnValue();
          if (lVar12 == 0) {
            lVar14 = lVar16;
            func_0x00010c241220(lVar16);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1eda80(puVar4);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(lVar14);
          }
          else {
            func_0x00010c1eda80(puVar4);
            _objc_unsafeClaimAutoreleasedReturnValue();
          }
          _objc_release(lVar12);
          puVar5 = puVar4;
          func_0x00010bf21f60(puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar9);
          uVar11 = *(undefined8 *)(param_1 + 8);
          func_0x00010bf3e200(uVar11);
          _objc_retainAutoreleasedReturnValue();
          uVar13 = uVar11;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x0001080199ec(puVar5,lVar16,0,0,1,uVar13);
          _objc_release(uVar13);
          _objc_release(uVar11);
          func_0x00010c241220(lVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
          _objc_release(lVar16);
          func_0x00010befa120(puVar2);
          _objc_release(puVar5);
          _objc_release(puVar4);
        }
        _objc_release(puVar3);
        _objc_release();
        puVar19 = puVar19 + 1;
      } while (puVar21 != puVar19);
      puVar21 = puStack_3f0;
      func_0x00010bf52a60();
    } while (puVar21 != (undefined *)0x0);
  }
  _objc_release(puStack_3f0);
  puVar21 = PTR_PTR_1126bf8c8;
  func_0x00010c2aeac0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puStack_408;
  func_0x00010bfbdda0();
  func_0x00010b5fa33c();
  if (puVar19 == (undefined *)0x8) {
    func_0x00010c1a1e00(puVar21);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c196b00(puVar21);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar19 = puVar21;
  func_0x00010c1d0720(puVar21);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1968c0(puVar21);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar19);
  func_0x00010c199560(puVar21);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c189960(puVar21);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1da4e0(puVar21);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar19 = puStack_408;
  func_0x00010c13f6e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar19 == (undefined *)0x0) {
    puVar3 = puStack_408;
    func_0x00010bf97200(puStack_408);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1eda60(puVar21);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  else {
    func_0x00010c1eda60(puVar21);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(puVar19);
  FUN_107ee8c84(puStack_3f0);
  func_0x00010c207320(puVar21);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar19 = puVar21;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_408);
  uVar13 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf51e00(puVar1);
  puVar4 = puVar2;
  func_0x00010bf51e00(puVar2);
  puVar5 = PTR_PTR_1126bf788;
  _objc_alloc(PTR_PTR_1126bf788);
  func_0x00010c017ba0();
  func_0x00010bf8b080(uVar13);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar13);
  puStack_2f8 = &uStack_300;
  uStack_300 = 0;
  uStack_2f0 = 0x3032000000;
  pcStack_2e8 = FUN_107ed6ff8;
  uStack_2e0 = 0x107ed7008;
  uStack_2d8 = 0;
  lVar7 = param_1;
  func_0x00010be1f660();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar17);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_retain(puVar9);
  _objc_retain(puStack_410);
  _objc_retain(puStack_418);
  _objc_retain(puVar19);
  _objc_retain(puStack_3f0);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar13;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(puStack_3f0);
  _objc_retain(puVar9);
  _objc_retain(param_5);
  func_0x00010c0f8520(uVar17);
  _objc_release(uVar11);
  _objc_release(uVar13);
  _objc_release(uVar6);
  _objc_release(uVar17);
  _objc_release(param_5);
  _objc_release(puVar9);
  _objc_release(puStack_3f0);
  _objc_release(param_3);
  _objc_release(puStack_3f0);
  _objc_release(puVar19);
  _objc_release(puStack_418);
  _objc_release(puStack_410);
  _objc_release(puVar9);
  _objc_release(param_4);
  _objc_release(lVar7);
  __Block_object_dispose(&uStack_300,8);
  _objc_release(uStack_2d8);
  _objc_release(puVar21);
  _objc_release(puVar18);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar9);
  _objc_release(puStack_3c0);
  _objc_release(puStack_418);
  _objc_release(puStack_410);
  _objc_release(puStack_3f0);
  _objc_release(puVar19);
LAB_107edb978:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return param_3;
  }
  ___stack_chk_fail();
  uVar11 = 8;
  __Block_object_dispose(&uStack_300);
  __Unwind_Resume();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar13 = *(undefined8 *)(param_3 + 0x20);
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfa900(uVar13);
  _objc_release(puVar9);
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = *(long *)(param_3 + 0x30);
  func_0x00010bf529e0();
  iVar10 = (int)uVar11;
  if (lVar7 != 0) {
    uVar15 = 0;
    do {
      puVar1 = PTR_PTR_1126bc7f8;
      uVar13 = *(undefined8 *)(param_3 + 0x30);
      func_0x00010c0dfd40(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5a9c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar13);
      puVar2 = puVar1;
      func_0x00010c0fd8c0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar9);
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126bf8e8;
      uVar13 = *(undefined8 *)(param_3 + 0x38);
      func_0x00010c0dfd40(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5a9e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar13);
      puVar18 = puVar2;
      func_0x00010c0fd8e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18c580(puVar1);
      _objc_release(puVar18);
      puVar18 = PTR_PTR_1126bf8f0;
      uVar13 = *(undefined8 *)(param_3 + 0x40);
      func_0x00010c0dfd40(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5aa20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar13);
      puVar21 = puVar18;
      func_0x00010c0fd920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c8100(puVar1);
      _objc_release(puVar21);
      _objc_release(puVar18);
      _objc_release(puVar2);
      _objc_release(puVar1);
      uVar15 = uVar15 + 1;
      uVar8 = *(ulong *)(param_3 + 0x30);
      func_0x00010bf529e0();
      iVar10 = (int)uVar11;
    } while (uVar15 < uVar8);
  }
  lVar7 = *(long *)(param_3 + 0x30);
  func_0x00010bf529e0();
  if (lVar7 != 0) {
    puVar2 = PTR_PTR_1126bc830;
    func_0x00010bf5a940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d7c00();
    puVar18 = puVar9;
    func_0x00010bf51e00();
    puVar1 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
    func_0x00010bf529e0(*(undefined8 *)(param_3 + 0x58));
    func_0x00010bfed320();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066e00(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar18);
    _objc_release(puVar2);
  }
  func_0x00010bddefa0(*(undefined8 *)(param_3 + 0x20));
  func_0x00010be85f20(*(undefined8 *)(param_3 + 0x20));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return puVar9;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = *(undefined8 *)(*(long *)(puVar9 + 0x20) + 8);
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80(*(undefined8 *)(puVar9 + 0x28));
  func_0x00010bf529e0(*(undefined8 *)(puVar9 + 0x30));
  func_0x00010c0a1680(uVar13);
  _objc_release(uVar13);
  _objc_release(uVar11);
  func_0x00010bddd720(*(undefined8 *)(puVar9 + 0x20));
  lVar7 = 0x30;
  if (iVar10 == 0) {
    lVar7 = 0x38;
  }
  lVar14 = *(long *)(puVar9 + lVar7);
  _objc_retain(lVar14);
  lVar7 = lVar14;
  func_0x00010bf52a60();
  lVar16 = lRam0000000000000000;
  while (lVar7 != 0) {
    lVar20 = 0;
    do {
      if (lRam0000000000000000 != lVar16) {
        _objc_enumerationMutation(lVar14);
      }
      uVar17 = *(undefined8 *)(lVar20 * 8);
      uVar11 = *(undefined8 *)(*(long *)(puVar9 + 0x20) + 8);
      func_0x00010bf3e200(uVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar11;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080194b4(uVar17,uVar13);
      _objc_release(uVar13);
      _objc_release(uVar11);
      uVar11 = *(undefined8 *)(*(long *)(puVar9 + 0x20) + 0x40);
      func_0x00010c279ee0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar11;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c241220();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12bce0(uVar13);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar17);
      _objc_release(uVar13);
      _objc_release(uVar11);
      lVar20 = lVar20 + 1;
    } while (lVar7 != lVar20);
    lVar7 = lVar14;
    func_0x00010bf52a60();
  }
  _objc_release(lVar14);
  func_0x00010bf3e4e0(*(undefined8 *)(*(long *)(puVar9 + 0x20) + 0xd0));
  puVar9 = *(undefined **)(puVar9 + 0x20);
  func_0x00010becf300(0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return puVar9;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126bc7e0;
  puVar2 = puVar9;
  func_0x00010be1f660();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(puVar9 + 0x28);
  func_0x00010c269d40(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf52cc0(puVar1);
  _objc_release(uVar13);
  _objc_release(puVar2);
  return (undefined *)(ulong)(puVar1 != (undefined *)0x0);
}


