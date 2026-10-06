/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b0db9a8; end: 10b0dba5f; -[SCLensMockDataCache _mockDataPathForURLString:] */

void FUN_10b0db9a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  func_0x00010bf64920(param_3,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110f5df38;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110f5df38,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x000107c3129c();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010c25ce00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 10b0dba60; end: 10b0dba8f; -[SCLensMockDataCache .cxx_destruct] */

void FUN_10b0dba60(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0dba90; end: 10b0dbbeb; -[SCSingleLensDataFetchingAdapter initWithLens:lensDataFetcherFactory:strategyFactory:successCondition:] */

undefined1 *
FUN_10b0dba90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_112705a58;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c0923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    func_0x00010bef9980();
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _dispatch_group_create();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0dbbec; end: 10b0dbbf7; -[SCSingleLensDataFetchingAdapter performLensFetchingWithCompletion:completionPerformer:fetchSourceType:] */

void FUN_10b0dbbec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f89f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_performLensFetchingWithCompletio_11261bc98,param_3,param_4,6,param_5);
  return;
}



/* Entry: 10b0dbbf8; end: 10b0dbd73; -[SCSingleLensDataFetchingAdapter performLensFetchingWithCompletion:completionPerformer:requestTiming:fetchSourceType:] */

void FUN_10b0dbbf8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010be0a800(param_1);
  func_0x00010be0a800(param_1);
  uStack_60 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa7fa0(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10b0dbd74;
  puStack_80 = &UNK_11084a9e8;
  lStack_78 = param_1;
  uStack_70 = param_4;
  lStack_68 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x000107c27d98(uVar1,uVar3,&puStack_98);
  _objc_release(uVar3);
  _objc_release(uStack_70);
  _objc_release(lStack_68);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c12cf80(*(undefined8 *)(*(long *)(param_3 + 0x20) + 0x10));
  if (*(long *)(param_3 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdd8b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_3 + 0x20),PTR_s__callCompletion_completionPerfor_112553c70,
               *(long *)(param_3 + 0x30),*(undefined8 *)(param_3 + 0x28));
    return;
  }
  return;
}



/* Entry: 10b0dbd74; end: 10b0dbdb3;  */

void FUN_10b0dbd74(long param_1)

{
  func_0x00010c12cf80(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdd8b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__callCompletion_completionPerfor_112553c70,
               *(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}



/* Entry: 10b0dbdb4; end: 10b0dbf0f; -[SCSingleLensDataFetchingAdapter performIconFetchingWithCompletion:completionPerformer:fetchSourceType:] */

void FUN_10b0dbdb4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010be0a800(param_1);
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa77c0(uVar1);
  _objc_release(puVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10b0dbf10;
  puStack_70 = &UNK_11084a9e8;
  lStack_68 = param_1;
  uStack_60 = param_4;
  lStack_58 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x000107c27d98(uVar1,uVar3,&puStack_88);
  _objc_release(uVar3);
  _objc_release(uStack_60);
  _objc_release(lStack_58);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c12cf80(*(undefined8 *)(*(long *)(param_3 + 0x20) + 0x10));
  if (*(long *)(param_3 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdd8b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_3 + 0x20),PTR_s__callCompletion_completionPerfor_112553c70,
               *(long *)(param_3 + 0x30),*(undefined8 *)(param_3 + 0x28));
    return;
  }
  return;
}



/* Entry: 10b0dbf10; end: 10b0dbf4f;  */

void FUN_10b0dbf10(long param_1)

{
  func_0x00010c12cf80(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdd8b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__callCompletion_completionPerfor_112553c70,
               *(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}



/* Entry: 10b0dbf50; end: 10b0dc007; -[SCSingleLensDataFetchingAdapter _isResourcePresentForCondition:] */

bool FUN_10b0dbf50(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_3 == 2) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfe5b40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c08fa60();
  }
  else {
    if (param_3 != 1) {
      return false;
    }
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c13b280(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf5fe00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bdc3360();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  return lVar4 != 0;
}



/* Entry: 10b0dc008; end: 10b0dc047; -[SCSingleLensDataFetchingAdapter _enterDispatchGroupIfNeededForCondition:] */

void FUN_10b0dc008(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  
  if (((*(ulong *)(param_1 + 0x18) & param_3) != 0) &&
     (lVar1 = param_1, func_0x00010be434a0(), (int)lVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbdee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__dispatch_group_enter_11034c078)(*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 10b0dc048; end: 10b0dc0af; -[SCSingleLensDataFetchingAdapter _leaveDispatchGroupIfNeededForCondition:collectError:] */

void FUN_10b0dc048(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  if ((*(ulong *)(param_1 + 0x18) & param_3) != 0) {
    func_0x00010bdcd080(param_1,param_2,param_4);
    lVar1 = param_1;
    func_0x00010be434a0(param_1,param_2,param_3);
    if ((int)lVar1 != 0) {
      _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b0dc0b0; end: 10b0dc18f; -[SCSingleLensDataFetchingAdapter _callCompletion:completionPerformer:] */

void FUN_10b0dc0b0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_4;
  if (param_4 == 0) {
    lVar1 = *(long *)(param_1 + 0x28);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b0dc190;
  puStack_48 = &UNK_11084aaa8;
  uStack_40 = uVar2;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(uVar2);
  _objc_retain(lVar1);
  _objc_retain(param_4);
  func_0x00010c0f88c0(lVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 10b0dc190; end: 10b0dc1db;  */

void FUN_10b0dc190(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar1 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x10);
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010b0dc1d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(lVar2,lVar1 == 0,uVar3);
  return;
}



/* Entry: 10b0dc1dc; end: 10b0dc273; -[SCSingleLensDataFetchingAdapter _appendError:] */

void FUN_10b0dc1dc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10b0dc274;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10b0dc274; end: 10b0dc347;  */

void FUN_10b0dc274(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
  if (lVar1 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_30 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_30,1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
    *(undefined **)(*(long *)(param_1 + 0x20) + 0x30) = puVar3;
    _objc_release(uVar2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
      return;
    }
  }
  else {
    func_0x00010bf09f60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
    *(long *)(*(long *)(param_1 + 0x20) + 0x30) = lVar1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 10b0dc348; end: 10b0dc34b; -[SCSingleLensDataFetchingAdapter willStartLoadingLens:lensAssets:externalData:fromAsf:lensDataFetcher:] */

void FUN_10b0dc348(void)

{
  return;
}



/* Entry: 10b0dc34c; end: 10b0dc34f; -[SCSingleLensDataFetchingAdapter willStartLoadingContentForLens:fromCache:fromAsf:lensDataFetcher:] */

void FUN_10b0dc34c(void)

{
  return;
}



/* Entry: 10b0dc350; end: 10b0dc3f3; -[SCSingleLensDataFetchingAdapter didFinishLoadingContentForLens:contentPath:error:fromCache:fromAsf:lensDataFetcher:] */

void FUN_10b0dc350(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c071ae0(param_3,param_2,*(undefined8 *)(param_1 + 8));
  if ((int)param_3 != 0) {
    lVar1 = param_4;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126dcfa0;
      func_0x00010bed0dc0(PTR_PTR_1126dcfa0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdcd080(param_1,param_2,puVar2);
      _objc_release(puVar2);
    }
    func_0x00010be49de0(param_1,param_2,1,param_5);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b0dc3f4; end: 10b0dc3f7; -[SCSingleLensDataFetchingAdapter willStartLoadingAsset:lens:fromAsf:lensDataFetcher:] */

void FUN_10b0dc3f4(void)

{
  return;
}



/* Entry: 10b0dc3f8; end: 10b0dc3fb; -[SCSingleLensDataFetchingAdapter didFinishLoadingContentForAsset:lens:content:error:fromAsf:lensDataFetcher:] */

void FUN_10b0dc3f8(void)

{
  return;
}



/* Entry: 10b0dc3fc; end: 10b0dc3ff; -[SCSingleLensDataFetchingAdapter willStartLoadingImageForLens:fromCache:fromAsf:lensDataFetcher:] */

void FUN_10b0dc3fc(void)

{
  return;
}



/* Entry: 10b0dc400; end: 10b0dc457; -[SCSingleLensDataFetchingAdapter didFinishLoadingImageForLens:image:error:fromCache:fromAsf:lensDataFetcher:] */

void FUN_10b0dc400(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  func_0x00010c071ae0(param_3,param_2,*(undefined8 *)(param_1 + 8));
  if ((int)param_3 != 0) {
    func_0x00010be49de0(param_1,param_2,2,param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10b0dc458; end: 10b0dc45b; -[SCSingleLensDataFetchingAdapter didFinishLoadingExternalDataForLens:error:fromAsf:lensDataFetcher:] */

void FUN_10b0dc458(void)

{
  return;
}



/* Entry: 10b0dc45c; end: 10b0dc45f; -[SCSingleLensDataFetchingAdapter willStartLoadingExternalDataForLens:fromAsf:lensDataFetcher:] */

void FUN_10b0dc45c(void)

{
  return;
}



/* Entry: 10b0dc460; end: 10b0dc53f; +[SCSingleLensDataFetchingAdapter _unableToGetLensContentError] */

void FUN_10b0dc460(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0dc540; end: 10b0dc593; -[SCSingleLensDataFetchingAdapter .cxx_destruct] */

void FUN_10b0dc540(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0dc594; end: 10b0dc9fb; -[SCLensRemoteAssetArchiver archiveAssetWithPath:error:] */

/* WARNING: Removing unreachable block (ram,0x00010b0dc7f0) */
/* WARNING: Removing unreachable block (ram,0x00010b0dc6e8) */
/* WARNING: Removing unreachable block (ram,0x00010b0dc97c) */

void FUN_10b0dc594(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar11 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    _objc_alloc_init();
    puVar3 = PTR_PTR_1126b9fb0;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008480();
    _objc_retain(0);
    _objc_release(puVar4);
    lVar2 = param_3;
    func_0x00010c0899c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c25ce40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfacc00();
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    puVar7 = PTR_PTR_1126b9fa8;
    func_0x00010bf095e0(PTR_PTR_1126b9fa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar6);
    _objc_release(puVar7);
    _objc_retain(0);
    lVar2 = 0;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(0);
        }
        lVar8 = param_3;
        func_0x00010c25ce00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfacc00();
        puVar7 = PTR_PTR_1126b9fa8;
        lVar9 = lVar5;
        func_0x00010c25ce00(lVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(lVar8);
        func_0x00010bf09600(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar6);
        _objc_release(puVar7);
        _objc_release(lVar9);
        _objc_release(lVar8);
        _objc_release(lVar8);
        lVar12 = lVar12 + 1;
      } while (lVar2 != lVar12);
      lVar2 = 0;
      func_0x00010bf52a60();
    }
    _objc_release(0);
    func_0x00010c2858e0(puVar3);
    _objc_retain(0);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(0);
    _objc_release(lVar5);
    _objc_retain(puVar11);
    _objc_release(puVar3);
    _objc_release(puVar11);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf64a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR__OBJC_CLASS___NSData_1126ae778,PTR_s_dataWithContentsOfFile__1125b6c48,
               *(undefined8 *)(param_3 + 0x20));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 10b0dc9fc; end: 10b0dca0f;  */

void FUN_10b0dc9fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf64a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSData_1126ae778,PTR_s_dataWithContentsOfFile__1125b6c48,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10b0dca10; end: 10b0dca93; -[SCLensRemoteAssetArchiver unarchiveAssetWithData:toDirectoryURL:error:] */

void FUN_10b0dca10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b9fb0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c008480();
  _objc_release(param_3);
  func_0x00010c27f220(puVar1,param_2,param_4,param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b0dca94; end: 10b0dcbe7; -[SCLensCreatorBlocklistManager initWithBlocklistFilter:unlockableDataStore:requestManager:snapTokenProvider:circumstanceEngine:userId:] */

undefined1 *
FUN_10b0dca94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_112705a60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0dcbe8; end: 10b0dcbf3; -[SCLensCreatorBlocklistManager blockLensCreatorWithLens:] */

void FUN_10b0dcbe8(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdd4e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__blockLensCreatorWithLens__112552d40);
    return;
  }
  return;
}



/* Entry: 10b0dcbf4; end: 10b0dccb7; -[SCLensCreatorBlocklistManager _blockLensCreatorWithLens:] */

void FUN_10b0dcbf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c094540(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdd4e40(param_1);
  _objc_release(uVar1);
  func_0x00010bef7f80(*(undefined8 *)(param_1 + 0x18));
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b0dccb8;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x000107c312d0("APPSTORE",&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0dccb8; end: 10b0dccf7;  */

void FUN_10b0dccb8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010c094540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c284f40(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0dccf8; end: 10b0dce57; -[SCLensCreatorBlocklistManager _blockCreatorWithLensId:] */

void FUN_10b0dccf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10b0dce58;
  puStack_60 = &UNK_110859c28;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  ppuVar1 = &puStack_78;
  uStack_58 = param_3;
  _objc_retainBlock(ppuVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x15;
  func_0x000107c312b8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0x15;
  func_0x000107c312b8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa48e0(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0dce58; end: 10b0dceab;  */

void FUN_10b0dce58(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9e9c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b0dceac; end: 10b0dceaf;  */

void FUN_10b0dceac(void)

{
  return;
}



/* Entry: 10b0dceb0; end: 10b0dcf7f; -[SCLensCreatorBlocklistManager _sendBlockCreatorRequestWithLensId:accessToken:] */

void FUN_10b0dceb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c25d780(uVar3,param_2,&PTR____CFConstantStringClassReference_110df7938,
                      &PTR____CFConstantStringClassReference_110def498,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = PTR_PTR_1126b4960;
  func_0x00010bfe2960(PTR_PTR_1126b4960,param_2,uVar3,param_4,param_3,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c25f5e0(uVar1,param_2,puVar2,PTR___dispatch_main_q_11034be20,
                      &PTR___NSConcreteGlobalBlock_110cb93e8);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10b0dcf80; end: 10b0dcf83;  */

void FUN_10b0dcf80(void)

{
  return;
}



/* Entry: 10b0dcf84; end: 10b0dcfe3; -[SCLensCreatorBlocklistManager .cxx_destruct] */

void FUN_10b0dcf84(long param_1)

{
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



/* Entry: 10b0dcfe4; end: 10b0dd2eb; +[SCRequest hideStoryRequestWithBaseUrl:accessToken:lensId:userId:] */

void FUN_10b0dcfe4(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar1 = PTR_PTR_1126c0fa8;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_opt_new();
  puVar2 = PTR_PTR_1126dfac8;
  _objc_opt_new(PTR_PTR_1126dfac8);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0de9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  puVar4 = puVar3;
  func_0x00010c0b4ca0(puVar3);
  func_0x00010c1bbd60(puVar2,param_3,puVar4);
  _objc_release(puVar3);
  puStack_88 = puVar1;
  func_0x00010c1bc420(puVar1,param_3,puVar2);
  puVar4 = PTR_PTR_1126c0fa0;
  _objc_opt_new(PTR_PTR_1126c0fa0);
  func_0x00010c21e620();
  _objc_release(param_7);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c17d2c0(puVar4,param_3,(long)(param_1 * 1000.0));
  _objc_release(puVar3);
  func_0x00010c216900(puVar4,param_3,1);
  func_0x00010c206c40(puVar4,param_3,5);
  func_0x00010c20d3a0(puVar4,param_3,puVar1);
  puVar3 = PTR_PTR_1126b4960;
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110e15df8;
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uStack_b0 = param_4;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                      &PTR____CFConstantStringClassReference_110dae518);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bdc3460(puVar1,param_3,puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010bf63640(puVar4);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_78 = &PTR____CFConstantStringClassReference_110dad998;
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_70 = param_5;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&uStack_70,&ppuStack_78,1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b19f8;
  func_0x00010c11f9e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_80 = puVar8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&puStack_80,1);
  _objc_retainAutoreleasedReturnValue();
  uStack_90 = 1;
  uStack_a0 = 3;
  uStack_98 = 1;
  uStack_b0 = 3;
  ppuStack_a8 = (undefined **)0x1;
  func_0x00010bf58780(puVar3,param_3,puVar1,0,puVar6,puVar7,
                      &PTR____CFConstantStringClassReference_110edd118,puVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar1 = puStack_88;
  _objc_release(puStack_88);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_b8 = FUN_10b0dd2ec;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    uStack_d0 = param_5;
    puStack_c8 = puVar9;
    puStack_c0 = &stack0xfffffffffffffff0;
    _objc_opt_new();
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_10b0dd380;
    puStack_e0 = &UNK_110cb9438;
    puStack_d8 = puVar2;
    _objc_retain();
    func_0x00010becf760(puVar1,param_3,&puStack_f8);
    puVar3 = puVar2;
    func_0x00010bf51e00(puVar2);
    _objc_release(puStack_d8);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b0dd2ec; end: 10b0dd37f; -[SCChainedLensFilter _arrayRepresentation] */

void FUN_10b0dd2ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10b0dd380;
  puStack_30 = &UNK_110cb9438;
  puStack_28 = puVar1;
  _objc_retain();
  func_0x00010becf760(param_1,param_2,&puStack_48);
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puStack_28);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0dd380; end: 10b0dd38b;  */

void FUN_10b0dd380(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__11259c1f0,param_2);
  return;
}



/* Entry: 10b0dd38c; end: 10b0dd433; -[SCDecoratingLensPrefetchFilter initWithInnerFilter:filterBlock:] */

undefined1 *
FUN_10b0dd38c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112705a70;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0dd434; end: 10b0dd4bb; -[SCDecoratingLensPrefetchFilter filterLenses:precachedLensIds:] */

void FUN_10b0dd434(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfae0c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b0dd4bc; end: 10b0dd4cb;  */

void FUN_10b0dd4bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b0dd4c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_1 + 0x20) + 0x10) + 0x10))();
  return;
}



/* Entry: 10b0dd4cc; end: 10b0dd4fb; -[SCDecoratingLensPrefetchFilter .cxx_destruct] */

void FUN_10b0dd4cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0dd4fc; end: 10b0dd557; -[SCDuplicateByLensIdFilter isEqual:] */

long FUN_10b0dd4fc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_1 != param_3) {
    _objc_retain(param_3);
    _objc_opt_class(param_1);
    lVar1 = param_3;
    func_0x00010c077980(param_3,param_2,param_1);
    _objc_release(param_3);
    return lVar1;
  }
  return 1;
}



/* Entry: 10b0dd558; end: 10b0dd6d3; -[SCLensCompoundFilter filterLenses:precachedLensIds:] */

void FUN_10b0dd558(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar3 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x10b0dd668;
  puStack_48 = &UNK_110cb9468;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf09f00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c124d20(uVar3,param_2,&puStack_60,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar2 = uVar3;
  func_0x00010c12c0a0(uVar3,param_2,&PTR___NSConcreteGlobalBlock_110cb9498);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b0dd6d4; end: 10b0dd6db;  */

void FUN_10b0dd6d4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c094550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_lensId_112602b60);
  return;
}



/* Entry: 10b0dd6dc; end: 10b0dd6e7; -[SCLensCompoundFilter .cxx_destruct] */

void FUN_10b0dd6dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0dd6e8; end: 10b0dd707; -[SCLensMetadataProviderSettingsFilterFactory produceFilterForLensFilteredContainer:] */

void FUN_10b0dd6e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c115c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_produceFilterForLensFilteredCont_112623120,param_3,0);
  return;
}



/* Entry: 10b0dd708; end: 10b0dd777;  */

void FUN_10b0dd708(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_2);
    _objc_opt_class();
    func_0x00010bfadce0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x28) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10b0dd778; end: 10b0dd83f; +[SCLensMetadataProviderSettingsFilterFactory filterForApplicableContexts:] */

void FUN_10b0dd778(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126df980;
  _objc_alloc(PTR_PTR_1126df980);
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10b0dd840;
  puStack_40 = &UNK_110ae0418;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c1063a0(puVar2,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c037fe0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0dd840; end: 10b0dd887;  */

undefined8 FUN_10b0dd840(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf07540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c069880();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 10b0dd888; end: 10b0dd94f; +[SCLensMetadataProviderSettingsFilterFactory filterForRemovedLensIds:] */

void FUN_10b0dd888(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126df980;
  _objc_alloc(PTR_PTR_1126df980);
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10b0dd950;
  puStack_40 = &UNK_110ae0418;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c1063a0(puVar2,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c037fe0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0dd950; end: 10b0dd99b;  */

uint FUN_10b0dd950(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar1);
  _objc_release(param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 10b0dd99c; end: 10b0dda6f; +[SCLensMetadataProviderSettingsFilterFactory filterForNamespaceId:] */

void FUN_10b0dd99c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126df980;
    _objc_alloc(PTR_PTR_1126df980);
    puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10b0dda70;
    puStack_40 = &UNK_110ae0418;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010c1063a0(puVar1,param_2,&puStack_58);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c037fe0(puVar2,param_2,puVar1);
    _objc_release(puVar1);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0dda70; end: 10b0ddab7;  */

undefined8 FUN_10b0dda70(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0d53e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 10b0ddab8; end: 10b0ddbb7; -[SCLensSelectionFilter filterLenses:precachedLensIds:] */

void FUN_10b0ddab8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11d040(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b0ddbb8;
  puStack_48 = &UNK_110cb94e8;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar2 = uVar1;
  func_0x00010bfb2660(uVar1,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c12c0a0(uVar2,param_2,&PTR___NSConcreteGlobalBlock_110cb9518);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b0ddbb8; end: 10b0ddcdb;  */

void FUN_10b0ddbb8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar3 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar3);
  lVar1 = param_2;
  func_0x00010bf5c3e0();
  lVar2 = lVar3;
  if (lVar1 != 0) {
    lVar1 = param_2;
    func_0x00010bf5c3c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar4);
    lVar2 = lVar1;
    func_0x00010c124d20(lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(uVar4);
  }
  lVar1 = param_2;
  func_0x00010c099040();
  lVar3 = lVar2;
  if (-1 < (int)lVar1) {
    func_0x00010c099040(param_2);
    func_0x00010c099060(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10b0ddcdc; end: 10b0ddcff;  */

void FUN_10b0ddcdc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be16590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126df968,PTR_s__filteredLenses_precachedLensIds_112563300,param_2,
             *(undefined8 *)(param_1 + 0x20),param_3);
  return;
}



/* Entry: 10b0ddd00; end: 10b0de0c7; +[SCLensSelectionFilter _filteredLenses:precachedLensIds:criterion:] */

void FUN_10b0ddd00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_5;
  func_0x00010c0c1b60();
  puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  iVar1 = (int)uVar2;
  uVar2 = param_3;
  if (iVar1 < 5) {
    if (2 < iVar1) {
      if (iVar1 == 3) {
        puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b0 = 0xc2000000;
        pcStack_a8 = FUN_10b0de170;
        puStack_a0 = &UNK_110ae0418;
        _objc_retain(param_5);
        uStack_98 = param_5;
        func_0x00010c1063a0(puVar3,param_2,&puStack_b8);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uStack_98;
      }
      else {
        if (iVar1 != 4) goto LAB_10b0de0b8;
        puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_d8 = 0xc2000000;
        pcStack_d0 = FUN_10b0de18c;
        puStack_c8 = &UNK_110ae0418;
        _objc_retain(param_5);
        uStack_c0 = param_5;
        func_0x00010c1063a0(puVar3,param_2,&puStack_e0);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uStack_c0;
      }
      goto LAB_10b0ddff0;
    }
    if (iVar1 != 0) {
      if (iVar1 != 2) {
LAB_10b0de0b8:
        _objc_retain(param_3);
        goto LAB_10b0de084;
      }
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_10b0de138;
      puStack_78 = &UNK_110ae0418;
      _objc_retain(param_5);
      uStack_70 = param_5;
      func_0x00010c1063a0(puVar3,param_2,&puStack_90);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uStack_70;
      goto LAB_10b0ddff0;
    }
    func_0x00010c1063e0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (iVar1 < 8) {
      if (iVar1 == 5) {
        puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_100 = 0xc2000000;
        pcStack_f8 = FUN_10b0de1c4;
        puStack_f0 = &UNK_110ae0418;
        _objc_retain(param_5);
        uStack_e8 = param_5;
        func_0x00010c1063a0(puVar3,param_2,&puStack_108);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uStack_e8;
      }
      else {
        if (iVar1 != 7) goto LAB_10b0de0b8;
        puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_60 = 0xc2000000;
        pcStack_58 = FUN_10b0de0c8;
        puStack_50 = &UNK_110ae0418;
        _objc_retain(param_5);
        uStack_48 = param_5;
        func_0x00010c1063a0(puVar3,param_2,&puStack_68);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uStack_48;
      }
    }
    else {
      if (iVar1 == 8) {
        func_0x00010c1063a0(PTR__OBJC_CLASS___NSPredicate_1126b06d0,param_2,
                            &PTR___NSConcreteGlobalBlock_110cb9538);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10b0de018;
      }
      if (iVar1 != 9) goto LAB_10b0de0b8;
      puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_128 = 0xc2000000;
      pcStack_120 = FUN_10b0de23c;
      puStack_118 = &UNK_110ae0418;
      _objc_retain(param_4);
      uStack_110 = param_4;
      func_0x00010c1063a0(puVar3,param_2,&puStack_130);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uStack_110;
    }
LAB_10b0ddff0:
    _objc_release(uVar4);
  }
LAB_10b0de018:
  _objc_retain(param_3);
  if (puVar3 != (undefined *)0x0) {
    uVar4 = param_5;
    func_0x00010c06a500();
    puVar5 = puVar3;
    if ((int)uVar4 != 0) {
      puVar5 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
      func_0x00010c0db960(PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
    }
    func_0x00010bfaea40(param_3,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(puVar5);
  }
LAB_10b0de084:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b0de0c8; end: 10b0de137;  */

undefined8 FUN_10b0de0c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0d53e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d5440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 10b0de138; end: 10b0de16f;  */

uint FUN_10b0de138(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c07f200(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c24a140(uVar1);
  return (uint)param_2 ^ (uint)uVar1 ^ 1;
}



/* Entry: 10b0de170; end: 10b0de18b;  */

uint FUN_10b0de170(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2454c0(uVar1);
  return (uint)uVar1 ^ 1;
}



/* Entry: 10b0de18c; end: 10b0de1c3;  */

uint FUN_10b0de18c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c294b60(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c26d1e0(uVar1);
  return (uint)param_2 ^ (uint)uVar1 ^ 1;
}



/* Entry: 10b0de1c4; end: 10b0de233;  */

undefined8 FUN_10b0de1c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf07540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf07500(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf4b900(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 10b0de234; end: 10b0de23b;  */

void FUN_10b0de234(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07de30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_isShoppingLens_1125fd198);
  return;
}



/* Entry: 10b0de23c; end: 10b0de2cb;  */

undefined8 FUN_10b0de23c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_2;
    func_0x00010c094540(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900(uVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 10b0de2cc; end: 10b0de2d7; -[SCLensSelectionFilter .cxx_destruct] */

void FUN_10b0de2cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0de2d8; end: 10b0de357; -[SCMaxLimitLensFilter filterLenses:] */

void FUN_10b0de2d8(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf529e0();
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (puVar1 != (undefined *)0x0) {
    puVar1 = param_3;
    func_0x00010c099060(param_3,param_2,*(undefined8 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 != (undefined *)0x0) {
      puVar2 = puVar1;
    }
    _objc_retain(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0de358; end: 10b0de3d7; -[SCMaxLimitLensFilter filterLenses:precachedLensIds:] */

void FUN_10b0de358(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf529e0();
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (puVar1 != (undefined *)0x0) {
    puVar1 = param_3;
    func_0x00010c099060(param_3,param_2,*(undefined8 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 != (undefined *)0x0) {
      puVar2 = puVar1;
    }
    _objc_retain(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0de3d8; end: 10b0de3db; -[SCPredicateLensFilter filterLenses:precachedLensIds:] */

void FUN_10b0de3d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be16170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__filterLenses__1125631f8);
  return;
}



/* Entry: 10b0de3dc; end: 10b0de44f; -[SCPredicateLensFilter isEqual:] */

undefined8 FUN_10b0de3dc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    uVar3 = 1;
  }
  else {
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010c071ae0(uVar3);
    }
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 10b0de450; end: 10b0de457; -[SCLensMetadataProviderSortStrategyResult initWithLenses:] */

void FUN_10b0de450(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c025db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithLenses_lensToPreselect__1125e7150,param_3,0);
  return;
}



/* Entry: 10b0de458; end: 10b0de45f; -[SCLensMetadataProviderSortStrategyResult initWithLenses:lensToPreselect:] */

void FUN_10b0de458(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c025dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithLenses_lensToPreselect_d_1125e7158,param_3,param_4,0);
  return;
}



/* Entry: 10b0de460; end: 10b0de473; -[SCLensMetadataProviderSortStrategyResult initWithLenses:lensToPreselect:didPerformDeduplication:] */

void FUN_10b0de460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c025d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithLenses_leftCarousel_righ_1125e7148,param_3,0,0,param_4,param_5);
  return;
}



/* Entry: 10b0de474; end: 10b0de577; -[SCLensMetadataProviderSortStrategyResult initWithLenses:leftCarousel:rightCarousel:lensToPreselect:didPerformDeduplication:] */

undefined1 *
FUN_10b0de474(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112705a98;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_6;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x10) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0de578; end: 10b0de59f; -[SCLensMetadataProviderSortStrategyResult lensToPreselect] */

void FUN_10b0de578(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b0de5a0; end: 10b0de5a7; -[SCLensMetadataProviderSortStrategyResult lenses] */

undefined8 FUN_10b0de5a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0de5a8; end: 10b0de5af; -[SCLensMetadataProviderSortStrategyResult leftCarousel] */

undefined8 FUN_10b0de5a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b0de5b0; end: 10b0de5b7; -[SCLensMetadataProviderSortStrategyResult rightCarousel] */

undefined8 FUN_10b0de5b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b0de5b8; end: 10b0de5bf; -[SCLensMetadataProviderSortStrategyResult didPerformDeduplication] */

undefined1 FUN_10b0de5b8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 10b0de5c0; end: 10b0de607; -[SCLensMetadataProviderSortStrategyResult .cxx_destruct] */

void FUN_10b0de5c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0de608; end: 10b0de79b; -[SCLensPositionKeeper addLensIfAbsent:rightCarousel:leftCarousel:] */

void FUN_10b0de608(long param_1,undefined8 param_2,long param_3,ulong param_4,ulong param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar2 != 0) {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10b0de79c;
    puStack_70 = &UNK_110857a38;
    _objc_retain(lVar1);
    uVar3 = param_4;
    lStack_68 = lVar1;
    func_0x00010bf04920(param_4,param_2,&puStack_88);
    if ((uVar3 & 1) == 0) {
      puStack_b0 = puVar4;
      uStack_a8 = 0xc2000000;
      uStack_a0 = 0x10b0de7e8;
      puStack_98 = &UNK_110857a38;
      _objc_retain(lVar1);
      uVar3 = param_5;
      lStack_90 = lVar1;
      func_0x00010bf04920(param_5,param_2,&puStack_b0);
      if ((uVar3 & 1) == 0) {
        puVar4 = PTR_PTR_1126dfad8;
        func_0x00010be38c60(PTR_PTR_1126dfad8,param_2,lVar1,*(undefined8 *)(param_1 + 8));
        uVar3 = param_4;
        if ((puVar4 == (undefined *)0x7fffffffffffffff) &&
           (puVar4 = PTR_PTR_1126dfad8,
           func_0x00010be38c60(PTR_PTR_1126dfad8,param_2,lVar1,*(undefined8 *)(param_1 + 0x10)),
           uVar3 = param_5, puVar4 == (undefined *)0x7fffffffffffffff)) {
          func_0x00010befa120(param_4,param_2,param_3);
        }
        else {
          func_0x00010be3c580(PTR_PTR_1126dfad8,param_2,param_3,uVar3,puVar4);
        }
      }
      _objc_release(lStack_90);
    }
    _objc_release(lStack_68);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0de79c; end: 10b0de833;  */

undefined8 FUN_10b0de79c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c094540(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0(uVar1);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 10b0de834; end: 10b0de89b; -[SCLensPositionKeeper updateRightCarousel:leftCarousel:] */

void FUN_10b0de834(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010bf51e00();
  _objc_release(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0de89c; end: 10b0de9b7; +[SCLensPositionKeeper _indexOfLensWithId:lenses:] */

long FUN_10b0de89c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    lVar1 = 0x7fffffffffffffff;
  }
  else {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x10b0de954;
    puStack_40 = &UNK_110ae0b58;
    _objc_retain(param_3);
    lVar1 = param_4;
    uStack_38 = param_3;
    func_0x00010bfece40(param_4,param_2,&puStack_58);
    _objc_release(uStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 10b0de9b8; end: 10b0dea3f; +[SCLensPositionKeeper _insertLens:intoLenses:index:] */

void FUN_10b0de9b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  ulong param_5)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bf529e0();
  if (uVar1 == 0) {
    param_5 = 0;
  }
  else {
    uVar1 = param_4;
    func_0x00010bf529e0();
    if (uVar1 <= param_5) {
      param_5 = param_4;
      func_0x00010bf529e0(param_4);
    }
  }
  func_0x00010c066b00(param_4,param_2,param_3,param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0dea40; end: 10b0dea6f; -[SCLensPositionKeeper .cxx_destruct] */

void FUN_10b0dea40(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0dea70; end: 10b0deae3; -[SCLensPrefetchSortStrategy initWithPreliminarySortStrategy:] */

undefined1 * FUN_10b0dea70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112705aa0;
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



/* Entry: 10b0deae4; end: 10b0decef; -[SCLensPrefetchSortStrategy executeWithLenses:precachedLenses:sortStrategyParameters:] */

void FUN_10b0deae4(undefined *param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if ((lVar1 == 0) &&
     (lVar1 = param_4, func_0x00010bf529e0(), puVar5 = PTR____NSArray0__struct_11034ab48, lVar1 == 0
     )) goto LAB_10b0decac;
  puVar2 = param_1;
  func_0x00010be0bc20(param_1,param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08e600();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c140a60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_1;
  func_0x00010be0be60(param_1,param_2,puVar3,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010bf783a0();
  lVar1 = param_4;
  func_0x00010bf529e0();
  puVar4 = puVar5;
  if (lVar1 == 0) {
    if (((ulong)puVar3 & 1) == 0) goto LAB_10b0dec6c;
  }
  else {
    puVar3 = param_1;
    func_0x00010be0bc20(param_1,param_2,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010c08e600();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010c140a60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be0be60(param_1,param_2,puVar6,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar6);
    func_0x00010bf09f80(puVar5,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(param_1);
    _objc_release(puVar3);
LAB_10b0dec6c:
    puVar3 = PTR_PTR_1126ddd58;
    _objc_opt_new(PTR_PTR_1126ddd58);
    puVar5 = puVar3;
    func_0x00010bfae0a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
LAB_10b0decac:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10b0decf0; end: 10b0ded8f; -[SCLensPrefetchSortStrategy _executeMainSortWithLenses:sortStrategyParameters:] */

void FUN_10b0decf0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) {
    lVar1 = param_1;
    func_0x00010bdf9780(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_4);
    lVar1 = param_4;
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf9b100(uVar2,param_2,param_3,0xffffffffffffffff,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b0ded90; end: 10b0deed7; -[SCLensPrefetchSortStrategy _executeSpiralSortWithLeftCarousel:rightCarousel:] */

void FUN_10b0ded90(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar4 = param_3;
  func_0x00010bf529e0(param_3);
  uVar1 = param_4;
  func_0x00010bf529e0(param_4);
  func_0x00010bf0a0e0(puVar2,param_2,uVar1 + uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf529e0();
  uVar1 = param_4;
  func_0x00010bf529e0();
  if (uVar1 != 0 || uVar4 != 0) {
    uVar4 = 0;
    do {
      uVar1 = param_4;
      func_0x00010bf529e0();
      if (uVar4 < uVar1) {
        uVar1 = param_4;
        func_0x00010c0dfd40(param_4,param_2,uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2,param_2,uVar1);
        _objc_release(uVar1);
      }
      uVar1 = param_3;
      func_0x00010bf529e0();
      if (uVar4 < uVar1) {
        uVar1 = param_3;
        func_0x00010c0dfd40(param_3,param_2,uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2,param_2,uVar1);
        _objc_release(uVar1);
      }
      uVar4 = uVar4 + 1;
      uVar1 = param_3;
      func_0x00010bf529e0();
      uVar3 = param_4;
      func_0x00010bf529e0();
      if (uVar1 <= uVar3) {
        uVar1 = uVar3;
      }
    } while (uVar4 < uVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0deed8; end: 10b0def0f; -[SCLensPrefetchSortStrategy _defaultSortStrategyParamenters] */

void FUN_10b0deed8(void)

{
  _objc_alloc(PTR_PTR_1126ddd60);
  func_0x00010c0463a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0def10; end: 10b0def1b; -[SCLensPrefetchSortStrategy .cxx_destruct] */

void FUN_10b0def10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0def1c; end: 10b0df063; +[SCLensSortHelpers addLens:toLensesMutableArray:ifNotFoundInLensesArray:] */

void FUN_10b0def1c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 != 0) {
    if (param_5 != 0) {
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      uStack_48 = 0x10b0defec;
      puStack_40 = &UNK_110ae0b58;
      _objc_retain(param_3);
      lVar1 = param_5;
      lStack_38 = param_3;
      func_0x00010bfece40(param_5,param_2,&puStack_58);
      _objc_release(lStack_38);
      if (lVar1 != 0x7fffffffffffffff) goto LAB_10b0defc4;
    }
    func_0x00010befa120(param_4,param_2,param_3);
  }
LAB_10b0defc4:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0df064; end: 10b0df2f7; +[SCLensSortHelpers sortedLensesWithCarouselPositionFromLenses:cameraPosition:] */

ulong FUN_10b0df064(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf09f00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063a0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar2);
  _objc_release(puVar3);
  if (param_4 != -1) {
    ppuVar1 = &PTR_PTR_1133c9298;
    if (param_4 != 1) {
      ppuVar1 = &PTR_PTR_1133c9290;
    }
    puVar8 = *ppuVar1;
    _objc_retain(puVar8);
    puVar3 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    _objc_retain(puVar8);
    func_0x00010c1063a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar8);
    _objc_release(puVar8);
  }
  puVar3 = PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0;
  func_0x00010bf02a20(PTR__OBJC_CLASS___NSCompoundPredicate_1126c0ea0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bfaea40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = uVar4;
  func_0x00010c0d3c80();
  _objc_release(uVar4);
  _objc_release(puVar3);
  uVar4 = uVar5;
  func_0x00010bf529e0();
  if (uVar4 != 0) {
    puVar8 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    func_0x00010c246980();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
    puVar6 = PTR_s_lensId_112602b60;
    _NSStringFromSelector(PTR_s_lensId_112602b60);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c246960();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c246bc0(uVar5);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(puVar8);
  }
  uVar4 = uVar5;
  func_0x00010bf51e00(uVar5);
  _objc_release(uVar5);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
    return uVar4;
  }
  ___stack_chk_fail();
  func_0x00010beec6c0(param_2);
  return (ulong)((uint)((ulong)param_2 >> 0x3f) ^ 1);
}



/* Entry: 10b0df2f8; end: 10b0df317;  */

uint FUN_10b0df2f8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010beec6c0(param_2);
  return (uint)((ulong)param_2 >> 0x3f) ^ 1;
}



/* Entry: 10b0df318; end: 10b0df35f;  */

undefined8 FUN_10b0df318(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf29280(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf4b900();
  _objc_release(param_2);
  return uVar1;
}


