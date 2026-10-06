/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107cbc550; end: 107cbc557; -[SCStoriesEverywherePostStoryActionDataModel userId] */

undefined8 FUN_107cbc550(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107cbc558; end: 107cbc55f; -[SCStoriesEverywherePostStoryActionDataModel initialStory] */

undefined8 FUN_107cbc558(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107cbc560; end: 107cbc567; -[SCStoriesEverywherePostStoryActionDataModel allMixedStories] */

undefined8 FUN_107cbc560(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107cbc568; end: 107cbc56f; -[SCStoriesEverywherePostStoryActionDataModel loggingInfo] */

undefined8 FUN_107cbc568(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107cbc570; end: 107cbc5c3; -[SCStoriesEverywherePostStoryActionDataModel .cxx_destruct] */

void FUN_107cbc570(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107cbc5c4; end: 107cbc723; +[SCCReportReason listWithReasonId:reasonText:subheaderText:reasons:] */

void FUN_107cbc5c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126b0a18;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c03d260();
  _objc_release(param_6);
  puVar2 = PTR_PTR_1126d7570;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04ee80(puVar2,param_2,param_5,puVar3);
  _objc_release(param_5);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b0a10;
  _objc_alloc();
  uVar5 = param_4;
  puVar6 = PTR_PTR_1133bb230;
  func_0x00010c03d220();
  _objc_release(param_4);
  _objc_release(param_3);
  puVar4 = puVar2;
  func_0x00010c1be0c0(puVar3,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126d7578;
    _objc_retain(param_7);
    _objc_retain(puVar6);
    _objc_retain(uVar5);
    _objc_retain(puVar4);
    _objc_opt_new(puVar1);
    func_0x00010c20efa0();
    _objc_release(puVar6);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eee0(puVar1,param_2,puVar2);
    _objc_release(puVar2);
    func_0x00010c1df420(puVar1,param_2,param_7);
    _objc_release(param_7);
    puVar3 = PTR_PTR_1126b0a10;
    _objc_alloc(PTR_PTR_1126b0a10);
    func_0x00010c03d220();
    _objc_release(uVar5);
    _objc_release(puVar4);
    func_0x00010c17ee40(puVar3,param_2,puVar1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107cbc724; end: 107cbc837; +[SCCReportReason commentWithReasonId:reasonText:subheaderText:commentRequired:postSubmit:] */

void FUN_107cbc724(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d7578;
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c20efa0();
  _objc_release(param_5);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17eee0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1df420(puVar1,param_2,param_7);
  _objc_release(param_7);
  puVar2 = PTR_PTR_1126b0a10;
  _objc_alloc(PTR_PTR_1126b0a10);
  func_0x00010c03d220();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c17ee40(puVar2,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107cbc838; end: 107cbc8ef; +[SCCReportReason webViewWithReasonId:reasonText:urlString:] */

void FUN_107cbc838(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d7580;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c059ea0();
  _objc_release(param_5);
  puVar2 = PTR_PTR_1126b0a10;
  _objc_alloc(PTR_PTR_1126b0a10);
  func_0x00010c03d220();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c225040(puVar2,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107cbc8f0; end: 107cbc9a7; +[SCCReportReason submitWithReasonId:reasonText:postSubmit:] */

void FUN_107cbc8f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d7588;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1df420();
  _objc_release(param_5);
  puVar2 = PTR_PTR_1126b0a10;
  _objc_alloc(PTR_PTR_1126b0a10);
  func_0x00010c03d220();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c20f1e0(puVar2,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107cbc9a8; end: 107cbc9d7;  */

void FUN_107cbc9a8(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110eb68b8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110eb68b8,
                      &PTR____CFConstantStringClassReference_110eb68d8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 107cbc9d8; end: 107cbca93; -[SCStoriesBoltMediaDownloadConfig initWithContentKey:boltContentObject:mediaType:isFirstFrame:] */

undefined1 *
FUN_107cbc9d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126fa678;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    *(undefined1 *)((long)puVar1 + 8) = param_6;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107cbca94; end: 107cbca9b; -[SCStoriesBoltMediaDownloadConfig contentKey] */

undefined8 FUN_107cbca94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107cbca9c; end: 107cbcaa3; -[SCStoriesBoltMediaDownloadConfig boltContentObject] */

undefined8 FUN_107cbca9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107cbcaa4; end: 107cbcaab; -[SCStoriesBoltMediaDownloadConfig mediaType] */

undefined8 FUN_107cbcaa4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107cbcaac; end: 107cbcab3; -[SCStoriesBoltMediaDownloadConfig isFirstFrame] */

undefined1 FUN_107cbcaac(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107cbcab4; end: 107cbcae3; -[SCStoriesBoltMediaDownloadConfig .cxx_destruct] */

void FUN_107cbcab4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107cbcae4; end: 107cbcb63; -[SCStoriesContentDeliveryApiImpl2 _contentDeliveryUsingPlaybackService] */

void FUN_107cbcae4(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    _objc_alloc(PTR_PTR_1126d7590);
    func_0x00010c029c80();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107cbcb64; end: 107cbcf4b; -[SCStoriesContentDeliveryApiImpl2 downloadContentForMedia:userInitiated:request:contexts:trigger:expirationDate:completePrefetch:successBlock:failureBlock:] */

void FUN_107cbcb64(ulong param_1,undefined8 param_2,long param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,long param_12)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_80 [8];
  undefined1 uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  uVar7 = param_1;
  func_0x00010be44380();
  if ((uVar7 & 1) == 0) {
    (**(code **)(param_12 + 0x10))(param_12,3,0);
    param_1 = 0;
  }
  else {
    puVar1 = PTR_PTR_1126b1060;
    _objc_alloc();
    func_0x00010c032f60();
    puVar2 = PTR_PTR_1126b1378;
    func_0x00010c25b720();
    func_0x00010c108220();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010bf1eea0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fa60();
    _objc_release(lVar4);
    _objc_release(lVar3);
    if (lVar5 == 0) {
      _objc_initWeak(auStack_70,param_1);
      puVar6 = PTR_PTR_1126b9f60;
      _objc_alloc(PTR_PTR_1126b9f60);
      func_0x00010c040f00();
      uVar7 = *(ulong *)(param_1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      FUN_107cc6524();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_3;
      func_0x00010bf93e00();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = param_3;
      func_0x00010bf93e00();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010c085300();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_80,auStack_70);
      _objc_retain(param_3);
      uStack_78 = (undefined1)param_4;
      _objc_retain(param_12);
      _objc_retain(param_11);
      param_1 = uVar7;
      func_0x00010bf88aa0(uVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_11);
      _objc_release(param_12);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_80);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(uVar7);
      _objc_release(puVar6);
      _objc_destroyWeak(auStack_70);
    }
    else {
      lVar3 = param_3;
      FUN_107cc696c(param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be94820(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
    }
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107cbcf4c; end: 107cbd01b;  */

void FUN_107cbcf4c(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be527c0();
  _objc_release(lVar1);
  if (param_2 == 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
  }
  else {
    uVar2 = param_3;
    func_0x00010bf987e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010b7f5498();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2,uVar3);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107cbd01c; end: 107cbd1f7; -[SCStoriesContentDeliveryApiImpl2 retrieveContentForMedia:contexts:completion:] */

void FUN_107cbd01c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010be44380();
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126d7598;
    func_0x00010c258540(PTR_PTR_1126d7598);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_5 + 0x10))(param_5,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    puVar2 = PTR__OBJC_CLASS___NSThread_1126b47e0;
    func_0x00010c077480();
    if ((int)puVar2 == 0) {
      func_0x00010be965a0(param_1);
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(param_3);
      _objc_retain(param_4);
      _objc_retain(param_5);
      func_0x00010c0f7fc0(uVar4);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_50);
    }
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107cbd1f8; end: 107cbd22f;  */

void FUN_107cbd1f8(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be965a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107cbd230; end: 107cbd44b; -[SCStoriesContentDeliveryApiImpl2 queryContentStatusForMedia:] */

long FUN_107cbd230(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be44380(param_1,param_2,param_3);
  if ((int)lVar1 == 0) {
    param_1 = 3;
    goto LAB_107cbd42c;
  }
  uVar2 = *(ulong *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf90f00();
  if ((uVar5 & 1) == 0) {
    _objc_release(uVar2);
  }
  else {
    lVar1 = param_3;
    func_0x00010bf1eea0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c08fa60();
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(uVar2);
    if (lVar4 != 0) {
      lVar1 = param_3;
      FUN_107cbd44c(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      func_0x00010c27dd80();
      uVar9 = 1;
      if (((lVar3 + 1U < 0x1c) && ((1L << (lVar3 + 1U & 0x3f) & 0xb4b5dbbU) != 0)) &&
         (lVar3 + 1U < 0x1b)) {
        uVar9 = 0x1394288 >> (ulong)((uint)(lVar3 + 1U) & 0x1f);
      }
      uVar5 = *(ulong *)(param_1 + 0x28);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      if ((uVar9 & 1) == 0) {
        uVar2 = uVar5;
        func_0x00010c070da0();
        _objc_release(uVar5);
        if ((int)uVar2 != 0) goto LAB_107cbd390;
LAB_107cbd420:
        param_1 = 1;
      }
      else {
        uVar2 = uVar5;
        func_0x00010bfd6700();
        _objc_release(uVar5);
        if ((uVar2 & 1) == 0) goto LAB_107cbd420;
LAB_107cbd390:
        lVar3 = param_3;
        func_0x00010bf1eea0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c0ef4a0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar4;
        func_0x00010c08fa60();
        _objc_release(lVar4);
        _objc_release(lVar3);
        if (lVar6 != 0) {
          lVar3 = param_3;
          FUN_107cbd44c(param_3);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010c070da0();
          _objc_release(uVar7);
          _objc_release(lVar3);
          if ((int)uVar8 == 0) goto LAB_107cbd420;
        }
        param_1 = 0;
      }
      _objc_release(lVar1);
      goto LAB_107cbd42c;
    }
  }
  func_0x00010be85240(param_1,param_2,param_3);
LAB_107cbd42c:
  _objc_release(param_3);
  return param_1;
}



/* Entry: 107cbd44c; end: 107cbd62f;  */

void FUN_107cbd44c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  
  _objc_retain();
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  lVar1 = param_1;
  func_0x00010bf1eea0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf649c0(puVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126c0248;
  func_0x00010bf562e0(PTR_PTR_1126c0248,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf93e00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c08fa60();
  puVar8 = puVar4;
  if (lVar5 == 0) {
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  else {
    lVar5 = param_1;
    func_0x00010bf93e00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c085300();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c08fa60();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar7 != 0) {
      lVar1 = param_1;
      func_0x00010bf93e00(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c086560();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010bf93e00(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c085300();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2ad2a0(puVar4,param_2,lVar2,lVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar2);
      _objc_release(lVar1);
      goto LAB_107cbd5fc;
    }
  }
  _objc_retain(puVar4);
LAB_107cbd5fc:
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 107cbd630; end: 107cbd78f; -[SCStoriesContentDeliveryApiImpl2 queryContentStatusForMedia:completion:] */

void FUN_107cbd630(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010be44380();
  if ((uVar1 & 1) == 0) {
    (**(code **)(param_4 + 0x10))(param_4,3);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    puVar2 = PTR__OBJC_CLASS___NSThread_1126b47e0;
    func_0x00010c077480();
    if ((int)puVar2 == 0) {
      puVar3 = auStack_38;
      _objc_loadWeakRetained(puVar3);
      func_0x00010be85260();
      _objc_release(puVar3);
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      _objc_copyWeak(auStack_40,auStack_38);
      _objc_retain(param_3);
      _objc_retain(param_4);
      func_0x00010c0f7fc0(uVar4);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_40);
    }
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107cbd790; end: 107cbd7c3;  */

void FUN_107cbd790(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be85260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107cbd7c4; end: 107cbdb83; -[SCStoriesContentDeliveryApiImpl2 removeContentForMedias:completion:] */

void FUN_107cbd7c4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
      _objc_release(param_3);
      _objc_release(param_3);
      uVar9 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_4);
      _objc_retain(puVar2);
      _objc_retain(param_3);
      func_0x00010c12b940(uVar9);
      _objc_release(uVar9);
      _objc_release(param_4);
      _objc_release(puVar2);
      _objc_release(param_3);
      _objc_release(param_4);
      _objc_release(puVar2);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
        return;
      }
      ___stack_chk_fail();
      uVar9 = *(undefined8 *)(param_3 + 0x20);
      func_0x00010c0b8600(uVar9);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(*(long *)(param_3 + 0x30) + 0x10))(*(long *)(param_3 + 0x30),uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar9);
      return;
    }
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      lVar12 = *(long *)(lVar11 * 8);
      lVar4 = lVar12;
      FUN_107cc6524(lVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2);
      _objc_release(lVar4);
      lVar4 = lVar12;
      func_0x00010bf1eea0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c0c3fe0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c08fa60();
      if (lVar6 == 0) {
        _objc_release(lVar5);
LAB_107cbd984:
        _objc_release(lVar4);
      }
      else {
        lVar6 = lVar12;
        func_0x00010bf1eea0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010c0ef4a0();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010c08fa60();
        _objc_release(lVar7);
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_release(lVar4);
        if (lVar8 != 0) {
          lVar4 = lVar12;
          FUN_107cc65c0(lVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
          _objc_release(lVar4);
          lVar4 = lVar12;
          func_0x000107cc66ac(lVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
          goto LAB_107cbd984;
        }
      }
      lVar4 = lVar12;
      func_0x00010bf1eea0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bfb11c0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c08fa60();
      _objc_release(lVar5);
      _objc_release(lVar4);
      if (lVar6 != 0) {
        lVar4 = lVar12;
        func_0x000107cc6798(lVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(lVar4);
      }
      lVar4 = lVar12;
      func_0x00010bf1eea0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c260dc0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c08fa60();
      _objc_release(lVar5);
      _objc_release(lVar4);
      if (lVar6 != 0) {
        func_0x000107cc6880(lVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2);
        _objc_release(lVar12);
      }
      lVar11 = lVar11 + 1;
    } while (lVar3 != lVar11);
    lVar3 = param_3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 107cbdb84; end: 107cbdbcf;  */

void FUN_107cbdb84(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0b8600(uVar1,param_2,&PTR___NSConcreteGlobalBlock_110a06aa0);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107cbdbd0; end: 107cbdbd7;  */

void FUN_107cbdbd0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf267f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_cacheKey_1125a73a0);
  return;
}



/* Entry: 107cbdbd8; end: 107cbdd5f; -[SCStoriesContentDeliveryApiImpl2 removeAllContentWithCompletion:] */

void FUN_107cbdbd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  uVar2 = param_3;
  _objc_retain();
  _dispatch_group_create();
  _dispatch_group_enter();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107cbdd60;
  puStack_60 = &UNK_110842e18;
  _objc_retain(uVar2);
  uStack_58 = uVar2;
  func_0x00010c12abe0(uVar3);
  _objc_release(uVar3);
  _dispatch_group_enter(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x107cbdd68;
  puStack_88 = &UNK_110842e18;
  uStack_80 = uVar2;
  _objc_retain(uVar2);
  func_0x00010c12abe0(uVar3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_107cbdd70;
  puStack_b0 = &UNK_110849530;
  uStack_a8 = param_3;
  _objc_retain(param_3);
  func_0x000100bc0718(uVar2,uVar3,&puStack_c8);
  _objc_release(uVar3);
  _objc_release(uStack_a8);
  _objc_release(uStack_80);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 107cbdd60; end: 107cbdd6f;  */

void FUN_107cbdd60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 107cbdd70; end: 107cbddaf;  */

void FUN_107cbdd70(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_alloc_init(PTR__OBJC_CLASS___NSSet_1126ae870);
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107cbddb0; end: 107cbdf07; -[SCStoriesContentDeliveryApiImpl2 saveLocalContentForMedia:data:completion:] */

void FUN_107cbddb0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010be44380();
  if ((uVar1 & 1) == 0) {
    (**(code **)(param_5 + 0x10))(param_5,0);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    FUN_107cc6524(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_3;
    func_0x00010bf9c720(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_5);
    func_0x00010c14a860(uVar2);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(param_5);
    _objc_release(param_3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107cbdf08; end: 107cbdf13;  */

void FUN_107cbdf08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107cbdf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 107cbdf14; end: 107cbe053; -[SCStoriesContentDeliveryApiImpl2 releaseLocalAuthoritativeContentForCacheKeys:] */

void FUN_107cbdf14(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar5 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  puVar6 = auStack_d8;
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar8 = *plStack_110;
    do {
      lVar9 = 0;
      do {
        if (*plStack_110 != lVar8) {
          _objc_enumerationMutation(param_3);
        }
        uVar7 = *(undefined8 *)(lStack_118 + lVar9 * 8);
        uVar2 = *(undefined8 *)(param_1 + 8);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        FUN_107cc64d8();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1285c0(uVar2);
        _objc_release(uVar7);
        _objc_release(uVar2);
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      puVar6 = auStack_d8;
      lVar1 = param_3;
      puVar5 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  _objc_retain(puVar6);
  puVar3 = (undefined1 *)puVar5;
  func_0x00010c08fa60();
  if (puVar3 == (undefined1 *)0x0) {
    (**(code **)(puVar6 + 0x10))(puVar6,0,0);
  }
  else {
    puVar4 = PTR_PTR_1126b1060;
    _objc_alloc(PTR_PTR_1126b1060);
    func_0x00010c032f60();
    uVar2 = *(undefined8 *)(param_3 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar5;
    FUN_107cc64d8(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar5);
    _objc_retain(puVar6);
    func_0x00010c13e560(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(puVar6);
  _objc_release(puVar5);
  return;
}



/* Entry: 107cbe054; end: 107cbe19f; -[SCStoriesContentDeliveryApiImpl2 retrieveLocalContentToUpload:completion:] */

void FUN_107cbe054(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    (**(code **)(param_4 + 0x10))(param_4,0,0);
  }
  else {
    puVar2 = PTR_PTR_1126b1060;
    _objc_alloc(PTR_PTR_1126b1060);
    func_0x00010c032f60();
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    FUN_107cc64d8(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c13e560(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(uVar3);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107cbe1a0; end: 107cbe2bf;  */

void FUN_107cbe1a0(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfcaaa0();
  if (uVar1 == 0) {
    uVar1 = param_2;
    func_0x00010bf58280();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 == 0) goto LAB_107cbe1cc;
    uVar3 = param_2;
    func_0x00010bfc68c0();
    if ((uVar3 & 1) == 0) {
      lVar2 = *(long *)(param_1 + 0x28);
      uVar3 = param_2;
      func_0x00010b7f5374(param_2);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar2 + 0x10))(lVar2,uVar3,1);
      _objc_release(uVar3);
LAB_107cbe2ac:
      _objc_release(uVar1);
      goto LAB_107cbe1e0;
    }
    uVar3 = param_2;
    func_0x00010bfcc4c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    lVar2 = *(long *)(param_1 + 0x28);
    if (uVar3 != 0) {
      uVar1 = uVar3;
      func_0x00010bfc48a0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar2 + 0x10))(lVar2,uVar1,1);
      _objc_release(uVar1);
      uVar1 = uVar3;
      goto LAB_107cbe2ac;
    }
    pcVar4 = *(code **)(lVar2 + 0x10);
  }
  else {
LAB_107cbe1cc:
    lVar2 = *(long *)(param_1 + 0x28);
    pcVar4 = *(code **)(lVar2 + 0x10);
  }
  (*pcVar4)(lVar2,0,0);
LAB_107cbe1e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107cbe2c0; end: 107cbe4c7; -[SCStoriesContentDeliveryApiImpl2 retrieveNonStreamingContentForMedia:contexts:completion:] */

void FUN_107cbe2c0(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010be44380();
  if ((uVar1 & 1) == 0) {
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_5 + 0x10))(param_5,0,puVar6);
    _objc_release(puVar6);
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf90f00();
    if ((uVar1 & 1) == 0) {
      _objc_release(uVar2);
    }
    else {
      lVar3 = param_3;
      func_0x00010bf1eea0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0c3fe0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c08fa60();
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(uVar2);
      if (lVar5 != 0) {
        func_0x00010be96a00(param_1);
        goto LAB_107cbe478;
      }
    }
    _objc_initWeak(auStack_58,param_1);
    _objc_retain(param_3);
    _objc_retain(param_5);
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c13e540(param_1);
    _objc_destroyWeak(auStack_60);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_58);
  }
LAB_107cbe478:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107cbe4c8; end: 107cbe5df;  */

void FUN_107cbe4c8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = param_2;
    func_0x00010c0db020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      param_1 = param_1 + 0x30;
      _objc_loadWeakRetained(param_1);
      lVar1 = param_2;
      func_0x00010c25c760(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be29d20(param_1);
      _objc_release(lVar1);
      goto LAB_107cbe57c;
    }
    lVar4 = *(long *)(param_1 + 0x28);
    lVar1 = param_2;
    func_0x00010c0db020(param_2);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = *(code **)(lVar4 + 0x10);
    lVar2 = 0;
    param_1 = lVar1;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x28);
    lVar2 = param_2;
    func_0x00010bf987e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = *(code **)(lVar4 + 0x10);
    lVar1 = 0;
    param_1 = lVar2;
  }
  (*pcVar3)(lVar4,lVar1,lVar2);
LAB_107cbe57c:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107cbe5e0; end: 107cbe9d3; -[SCStoriesContentDeliveryApiImpl2 _retrieveNonStreamingContentForMediaWithNewAPI:contexts:completion:] */

void FUN_107cbe5e0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_107cbe9d4;
  uStack_88 = 0x107cbe9e4;
  uStack_80 = 0;
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_107cbe9d4;
  uStack_b8 = 0x107cbe9e4;
  uStack_b0 = 0;
  puStack_100 = &uStack_108;
  uStack_108 = 0;
  uStack_f8 = 0x3032000000;
  pcStack_f0 = FUN_107cbe9d4;
  uStack_e8 = 0x107cbe9e4;
  uStack_e0 = 0;
  puStack_130 = &uStack_138;
  uStack_138 = 0;
  uStack_128 = 0x3032000000;
  pcStack_120 = FUN_107cbe9d4;
  uStack_118 = 0x107cbe9e4;
  uStack_110 = 0;
  lVar1 = param_3;
  func_0x00010bf1eea0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0ef4a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126bcb88;
  _objc_alloc();
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c030440();
  func_0x00010c25b720();
  lVar1 = param_3;
  FUN_107cbd44c(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar3);
  func_0x00010bf88a60(uVar4);
  _objc_release(uVar4);
  lVar2 = param_3;
  func_0x00010bf1eea0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c0ef4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08fa60();
  _objc_release(lVar5);
  _objc_release(lVar2);
  if (lVar6 != 0) {
    lVar2 = param_3;
    FUN_107cbd44c(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar3);
    func_0x00010bf88a60(uVar4);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(lVar2);
  }
  _objc_release(puVar3);
  _objc_release(lVar1);
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_138,8);
  _objc_release(uStack_110);
  __Block_object_dispose(&uStack_108,8);
  _objc_release(uStack_e0);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107cbe9d4; end: 107cbe9eb;  */

void FUN_107cbe9d4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107cbe9ec; end: 107cbec0b;  */

void FUN_107cbe9ec(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28) != 0) {
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28) == 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      func_0x00010bf1eea0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c0ef4a0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar4;
      func_0x00010c08fa60();
      _objc_release(lVar4);
      _objc_release(lVar2);
      if (lVar3 != 0) goto LAB_107cbeab4;
    }
    puVar1 = PTR_PTR_1126d75a0;
    _objc_alloc(PTR_PTR_1126d75a0);
    func_0x00010c0473a0();
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
LAB_107cbeab4:
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
  if (lVar4 == 0) {
    lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x000107cbeae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,lVar4);
  return;
}



/* Entry: 107cbec0c; end: 107cbed1f; -[SCStoriesContentDeliveryApiImpl2 _handleFetchingCompleteStreamingContentForMedia:streamingContent:completion:] */

void FUN_107cbec0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bf4d380(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_107cbed20;
  puStack_58 = &UNK_110941cc0;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c13e420(uVar1,param_2,uVar2,uVar3,&puStack_70);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_5);
  return;
}



/* Entry: 107cbed20; end: 107cbee03;  */

void FUN_107cbed20(long param_1,long param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  if ((param_3 == 0) || (param_2 == 0)) {
    lVar2 = *(long *)(param_1 + 0x28);
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = *(code **)(lVar2 + 0x10);
    puVar3 = (undefined *)0x0;
    puVar6 = puVar4;
  }
  else {
    puVar3 = PTR_PTR_1126d75a0;
    _objc_alloc(PTR_PTR_1126d75a0);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0ef700(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0473a0(puVar3);
    _objc_release(uVar1);
    lVar2 = *(long *)(param_1 + 0x28);
    pcVar5 = *(code **)(lVar2 + 0x10);
    puVar4 = (undefined *)0x0;
    puVar6 = puVar3;
  }
  (*pcVar5)(lVar2,puVar3,puVar4);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107cbee04; end: 107cbefdb; -[SCStoriesContentDeliveryApiImpl2 _retrieveStoriesContentForBoltMedia:contexts:completion:] */

void FUN_107cbee04(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf1eea0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0ef4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar1 = param_3;
    FUN_107cc6524(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be96c20(param_1);
    _objc_release(lVar1);
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    FUN_107cc6524(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010c11d240(uVar3);
    _objc_release(lVar1);
    _objc_release(uVar3);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107cbefdc; end: 107cbf05b;  */

void FUN_107cbefdc(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (param_2 == 3) {
    func_0x00010be96be0(lVar1);
  }
  else {
    FUN_107cc6524(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be96c20(lVar1);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107cbf05c; end: 107cbf1ff; -[SCStoriesContentDeliveryApiImpl2 _retrieveStoriesContentForBoltVideoAndOverlayMedia:contexts:completion:] */

void FUN_107cbf05c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b1060;
  _objc_alloc();
  func_0x00010c032f60();
  _objc_initWeak(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  FUN_107cc65c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(puVar1);
  _objc_retain(param_5);
  func_0x00010c13e560(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107cbf200; end: 107cbf257;  */

void FUN_107cbf200(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be96c00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107cbf258; end: 107cbf3ef; -[SCStoriesContentDeliveryApiImpl2 _retrieveStoriesContentForBoltVideoAndOverlayMediaUsingVideoResult:mediaInfo:pageInfo:completion:] */

void FUN_107cbf258(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x000107cc66ac(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  func_0x00010c13e560(uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107cbf3f0; end: 107cbf447;  */

void FUN_107cbf3f0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be96c60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107cbf448; end: 107cbf73f; -[SCStoriesContentDeliveryApiImpl2 _retrieveStoriesContentUsingVideoResult:overlayResult:mediaInfo:completion:] */

void FUN_107cbf448(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = param_3;
  func_0x00010bfcaaa0();
  puVar2 = param_4;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = param_3;
  }
  func_0x00010bfcaaa0();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = param_3;
    func_0x00010bfc68a0();
    puVar1 = PTR_PTR_1126d7598;
    _objc_alloc(PTR_PTR_1126d7598);
    if ((int)puVar2 == 0) {
      puVar8 = param_3;
      func_0x00010b7f5374(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_4;
      func_0x00010b7f5374(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0473a0(puVar1);
      (**(code **)(param_6 + 0x10))(param_6,puVar1);
      _objc_release(puVar1);
    }
    else {
      puVar8 = param_4;
      func_0x00010b7f5374(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c003b60(puVar1);
      (**(code **)(param_6 + 0x10))(param_6,puVar1);
      puVar2 = puVar1;
    }
  }
  else {
    uVar3 = param_5;
    FUN_107cc6524(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfc68a0(param_3);
    func_0x00010be57e40(param_1);
    _objc_release(uVar3);
    puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010b7f5470();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_3;
    func_0x00010bfc79a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    if (puVar5 == (undefined *)0x0) {
      uStack_78 = param_4;
      func_0x00010bfc79a0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = uStack_78;
      func_0x00010bf987e0();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar7 = puVar6;
    func_0x00010b7f5498(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99280(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    if (puVar5 == (undefined *)0x0) {
      _objc_release(puVar6);
      _objc_release(uStack_78);
    }
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126d7598;
    func_0x00010c258540(PTR_PTR_1126d7598);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_6 + 0x10))(param_6,puVar2);
  }
  _objc_release(puVar2);
  _objc_release(puVar8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107cbf740; end: 107cbf8ab; -[SCStoriesContentDeliveryApiImpl2 _retrieveStoriesContentForContentKey:contexts:completion:] */

void FUN_107cbf740(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x00010c032f60();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010c13e560(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107cbf8ac; end: 107cbfa7f;  */

void FUN_107cbf8ac(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010bfcaaa0();
  puVar2 = (undefined *)(param_1 + 0x30);
  _objc_loadWeakRetained(puVar2);
  if (puVar1 == (undefined *)0x0) {
    func_0x00010be96c40(puVar2);
  }
  else {
    func_0x00010bfc68a0(param_2);
    func_0x00010bfc68c0(param_2);
    func_0x00010be57e40(puVar2);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar3 = param_2;
    func_0x00010bfcaaa0();
    func_0x00010b7f5470();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfcaaa0(param_2);
    puVar4 = param_2;
    func_0x00010bfc79a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    puVar5 = puVar4;
    func_0x00010bf987e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010b7f5498();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99280(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar1);
    _objc_release(puVar3);
    lVar7 = *(long *)(param_1 + 0x28);
    param_2 = PTR_PTR_1126d7598;
    func_0x00010c258540(PTR_PTR_1126d7598);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar7 + 0x10))(lVar7,param_2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107cbfa80; end: 107cbfc97; -[SCStoriesContentDeliveryApiImpl2 _retrieveStoriesContentForContentResult:contentKey:completion:] */

void FUN_107cbfa80(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_3;
  func_0x00010bfc68c0();
  if ((int)puVar1 == 0) {
    puVar1 = param_3;
    func_0x00010bfc68a0();
    puVar3 = PTR_PTR_1126d7598;
    _objc_alloc(PTR_PTR_1126d7598);
    if ((int)puVar1 != 0) {
      func_0x00010c003b60(puVar3);
      goto LAB_107cbfc28;
    }
    puVar1 = param_3;
    func_0x00010b7f5374(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0473a0(puVar3);
  }
  else {
    puVar1 = param_1;
    func_0x00010beebee0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126d7598;
      func_0x00010c258540(PTR_PTR_1126d7598);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar3 = PTR_PTR_1126d7598;
      _objc_alloc(PTR_PTR_1126d7598);
      puVar4 = puVar1;
      func_0x00010c0e00e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c0e00e0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0473a0(puVar3);
      _objc_release(puVar2);
    }
    _objc_release(puVar4);
  }
  _objc_release(puVar1);
LAB_107cbfc28:
  func_0x00010bfc68a0(param_3);
  func_0x00010bfc68c0(param_3);
  func_0x00010be57e40(param_1);
  (**(code **)(param_5 + 0x10))(param_5,puVar3);
  _objc_release(param_5);
  _objc_release(puVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107cbfc98; end: 107cbfca7; -[SCStoriesContentDeliveryApiImpl2 _logDownloadForMedia:success:prefetch:] */

void FUN_107cbfc98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain();
  func_0x00010c071640();
  func_0x00010c083e00(param_3);
  uVar1 = param_3;
  func_0x00010bf1eea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf267e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126d62a8;
  _objc_alloc_init(PTR_PTR_1126d62a8);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  FUN_107cd0620(puVar3,puVar4,puVar5,puVar6,puVar7,1);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107cbfca8; end: 107cbfe1f; -[SCStoriesContentDeliveryApiImpl2 _logRetrieveContentForContentKey:IsStreaming:isZipped:success:] */

void FUN_107cbfca8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  FUN_107cd0270(uVar5,puVar1,puVar2,puVar3,1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 107cbfe20; end: 107cc003b; -[SCStoriesContentDeliveryApiImpl2 _zipContentsFromContentResult:contentKey:] */

void FUN_107cbfe20(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 unaff_x22;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long lVar9;
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined *puStack_160;
  undefined8 *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 *puStack_138;
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
  puVar8 = param_3;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x000108461f24();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined8 *)0x0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(puVar1);
    puVar8 = &uStack_130;
    param_4 = auStack_f0;
    param_5 = 0x10;
    puStack_138 = puVar1;
    func_0x00010bf52a60();
    if (puVar1 != (undefined8 *)0x0) {
      lVar9 = *plStack_120;
      unaff_x23 = &PTR____CFConstantStringClassReference_110db9458;
      unaff_x24 = &PTR____CFConstantStringClassReference_110de71b8;
      do {
        puVar8 = (undefined8 *)0x0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(puStack_138);
          }
          unaff_x25 = *(undefined8 **)(lStack_128 + (long)puVar8 * 8);
          puVar2 = unaff_x25;
          func_0x00010bfda7c0();
          if ((int)puVar2 != 0) {
            unaff_x26 = param_3;
            func_0x00010bfcc4e0();
            _objc_retainAutoreleasedReturnValue();
            puVar2 = unaff_x26;
            func_0x00010bfc48a0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar7);
            _objc_release(puVar2);
            _objc_release(unaff_x26);
          }
          puVar2 = unaff_x25;
          func_0x00010bfda7c0();
          if ((int)puVar2 != 0) {
            unaff_x25 = param_3;
            func_0x00010bfcc4e0();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = unaff_x25;
            func_0x00010bfc48a0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar7);
            _objc_release(unaff_x26);
            _objc_release(unaff_x25);
          }
          puVar8 = (undefined8 *)((long)puVar8 + 1);
        } while (puVar1 != puVar8);
        puVar8 = &uStack_130;
        param_4 = auStack_f0;
        param_5 = 0x10;
        puVar1 = puStack_138;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined8 *)0x0);
    }
    unaff_x22 = 0;
    _objc_release(puStack_138);
    puVar1 = puStack_138;
  }
  _objc_release(puVar1);
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_148 = FUN_107cc003c;
  puStack_190 = unaff_x26;
  puStack_188 = unaff_x25;
  ppuStack_180 = unaff_x24;
  ppuStack_178 = unaff_x23;
  uStack_170 = unaff_x22;
  puStack_168 = puVar1;
  puStack_160 = puVar7;
  puStack_158 = param_3;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar3 = puVar2[5];
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf90f00();
  if ((uVar4 & 1) == 0) {
    _objc_release(uVar3);
  }
  else {
    puVar1 = puVar8;
    func_0x00010bf1eea0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c08fa60();
    _objc_release(puVar5);
    _objc_release(puVar1);
    _objc_release(uVar3);
    if (puVar6 != (undefined8 *)0x0) {
      func_0x00010be965c0(puVar2);
      goto LAB_107cc01ac;
    }
  }
  _objc_initWeak(auStack_198,puVar2);
  _objc_copyWeak(auStack_1a0,auStack_198);
  _objc_retain(puVar8);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010be96bc0(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar8);
  _objc_destroyWeak(auStack_1a0);
  _objc_destroyWeak(auStack_198);
LAB_107cc01ac:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar8);
  return;
}



/* Entry: 107cc003c; end: 107cc01fb; -[SCStoriesContentDeliveryApiImpl2 _retrieveContentForMedia:contexts:completion:] */

void FUN_107cc003c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf90f00();
  if ((uVar2 & 1) == 0) {
    _objc_release(uVar1);
  }
  else {
    lVar3 = param_3;
    func_0x00010bf1eea0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fa60();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(uVar1);
    if (lVar5 != 0) {
      func_0x00010be965c0(param_1);
      goto LAB_107cc01ac;
    }
  }
  _objc_initWeak(auStack_58,param_1);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010be96bc0(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
LAB_107cc01ac:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107cc01fc; end: 107cc0253;  */

void FUN_107cc01fc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be5df00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107cc0254; end: 107cc06a7; -[SCStoriesContentDeliveryApiImpl2 _retrieveContentForMediaWithNewAPI:contexts:completion:] */

void FUN_107cc0254(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c25b720();
  puStack_f0 = &uStack_a8;
  uStack_a8 = 0;
  uVar8 = 0x1d;
  if (lVar1 != 3) {
    uVar8 = 0x10;
  }
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_107cbe9d4;
  uStack_88 = 0x107cbe9e4;
  uStack_80 = 0;
  uVar6 = 4;
  if (lVar1 != 0) {
    uVar6 = uVar8;
  }
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_107cbe9d4;
  uStack_b8 = 0x107cbe9e4;
  uStack_b0 = 0;
  puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_107cc06a8;
  puStack_108 = &UNK_1108d52e0;
  puStack_d0 = &uStack_d8;
  puStack_a0 = puStack_f0;
  _objc_retain(param_3);
  lStack_100 = param_3;
  _objc_retain(param_5);
  ppuVar2 = &puStack_120;
  uStack_f8 = param_5;
  puStack_e8 = &uStack_d8;
  uStack_e0 = uVar6;
  _objc_retainBlock();
  lVar1 = param_3;
  func_0x00010bf1eea0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0ef4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf1eea0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfb11c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  _objc_release(lVar1);
  puVar9 = PTR_PTR_1126c0248;
  if (lVar5 == 0) {
LAB_107cc0478:
    if (lVar4 == 0) {
      (*(code *)ppuVar2[2])(ppuVar2);
      goto LAB_107cc05fc;
    }
    puVar9 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf1eea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bfb11c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf562e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar1);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010c070da0();
    _objc_release(uVar6);
    if ((int)uVar8 == 0) {
      _objc_release(puVar9);
      goto LAB_107cc0478;
    }
  }
  puVar7 = PTR_PTR_1126bcb88;
  _objc_alloc();
  func_0x00010c030440();
  lVar1 = param_3;
  func_0x00010bf1eea0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0ef4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  _objc_release(lVar1);
  if (lVar4 != 0) {
    lVar1 = param_3;
    FUN_107cbd44c(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar7);
    func_0x00010bf88a60(uVar8);
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(lVar1);
  }
  if (puVar9 != (undefined *)0x0) {
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar7);
    func_0x00010bf88a60(uVar8);
    _objc_release(uVar8);
    _objc_release(puVar7);
  }
  _objc_release(puVar7);
  _objc_release(puVar9);
LAB_107cc05fc:
  _objc_release(ppuVar2);
  _objc_release(uStack_f8);
  _objc_release(lStack_100);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107cc06a8; end: 107cc0897;  */

void FUN_107cc06a8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf1eea0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar1;
  func_0x00010c0ef4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c08fa60();
  if (lVar10 == 0) {
    _objc_release(lVar9);
    _objc_release(lVar1);
  }
  else {
    lVar10 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    _objc_release(lVar9);
    _objc_release(lVar1);
    if (lVar10 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = *(long *)(param_1 + 0x28);
      puVar3 = PTR_PTR_1126d7598;
      func_0x00010c258540(PTR_PTR_1126d7598);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar9 + 0x10))(lVar9,puVar3);
      goto LAB_107cc0874;
    }
  }
  puVar2 = *(undefined **)(param_1 + 0x20);
  FUN_107cbd44c(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126bfed8;
  _objc_alloc(PTR_PTR_1126bfed8);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf93e00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf93e00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c085300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0291c0(puVar3);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  lVar9 = *(long *)(param_1 + 0x28);
  puVar8 = PTR_PTR_1126d7598;
  _objc_alloc(PTR_PTR_1126d7598);
  func_0x00010c002dc0();
  (**(code **)(lVar9 + 0x10))(lVar9,puVar8);
  _objc_release(puVar8);
LAB_107cc0874:
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107cc0898; end: 107cc094f;  */

void FUN_107cc0898(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  func_0x00010c0e7120(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107cc0950; end: 107cc0b83; -[SCStoriesContentDeliveryApiImpl2 _maybeAddFirstFrameToStoriesContent:media:contexts:completion:] */

void FUN_107cc0950(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_4;
  func_0x00010bf1eea0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb11c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
LAB_107cc09e8:
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  else {
    lVar3 = param_3;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      _objc_release();
      goto LAB_107cc09e8;
    }
    lVar4 = *(long *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_4;
    func_0x000107cc6798(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c11d220();
    _objc_release(lVar3);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar5 == 0) {
      puVar6 = PTR_PTR_1126b1060;
      _objc_alloc(PTR_PTR_1126b1060);
      func_0x00010c032f60();
      uVar7 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_4;
      func_0x000107cc6798(param_4);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_4);
      _objc_retain(param_6);
      _objc_retain(param_3);
      func_0x00010c13e480(uVar7);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar1);
      _objc_release(uVar7);
      _objc_release(param_3);
      _objc_release(param_6);
      _objc_release(param_4);
      _objc_release(puVar6);
      goto LAB_107cc0a08;
    }
  }
  (**(code **)(param_6 + 0x10))(param_6,param_3);
LAB_107cc0a08:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107cc0b84; end: 107cc0ccb;  */

void FUN_107cc0b84(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  if ((param_4 & 1) == 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
              (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
  }
  else {
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x00010c25c760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar2 = PTR_PTR_1126d7598;
    _objc_alloc(PTR_PTR_1126d7598);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    if (lVar1 == 0) {
      func_0x00010c0db020(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c02fb40(puVar2);
    }
    else {
      func_0x00010c25c760();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf4d380();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c25c760(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0ef700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c003b60(puVar2);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
    _objc_release(uVar3);
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107cc0ccc; end: 107cc0fc7; -[SCStoriesContentDeliveryApiImpl2 _queryContentStatusForUseBoltContentMedia:] */

undefined * FUN_107cc0ccc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  puVar10 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  puVar2 = param_3;
  func_0x00010bf1eea0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c08fa60();
  puVar7 = param_3;
  if (puVar4 == (undefined1 *)0x0) {
    _objc_release(puVar3);
    _objc_release(puVar2);
LAB_107cc0de4:
    FUN_107cc6524(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = param_3;
    func_0x00010bf1eea0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0ef4a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c08fa60();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    if (puVar6 == (undefined1 *)0x0) goto LAB_107cc0de4;
    puVar2 = param_3;
    FUN_107cc65c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(puVar2);
    func_0x000107cc66ac(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010befa120(puVar1);
  _objc_release(puVar7);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(puVar1);
  puVar2 = auStack_f0;
  puVar9 = puVar1;
  func_0x00010bf52a60();
  if (puVar9 == (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
    puVar9 = puVar1;
LAB_107cc0f68:
    _objc_release(puVar9);
  }
  else {
    puVar13 = (undefined *)0x0;
    lVar15 = *plStack_120;
    do {
      puVar16 = (undefined *)0x0;
      puVar14 = puVar13;
      do {
        if (*plStack_120 != lVar15) {
          _objc_enumerationMutation(puVar1);
        }
        puVar8 = *(undefined **)(param_1 + 8);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar8;
        func_0x00010c11d220();
        _objc_release(puVar8);
        if (puVar13 + -1 < (undefined *)0x4) {
          uVar11 = *(ulong *)(&UNK_10dee5480 + (long)(puVar13 + -1) * 8);
        }
        else {
          uVar11 = 0;
        }
        if (puVar14 + -1 < (undefined *)0x4) {
          uVar12 = *(ulong *)(&UNK_10dee5480 + (long)(puVar14 + -1) * 8);
        }
        else {
          uVar12 = 0;
        }
        if (uVar11 <= uVar12) {
          puVar13 = puVar14;
        }
        puVar16 = puVar16 + 1;
        puVar14 = puVar13;
      } while (puVar9 != puVar16);
      puVar2 = auStack_f0;
      puVar9 = puVar1;
      puVar10 = &uStack_130;
      func_0x00010bf52a60();
    } while (puVar9 != (undefined *)0x0);
    _objc_release(puVar1);
    if (puVar13 == (undefined *)0x3) {
      puVar9 = puVar1;
      func_0x00010bf529e0();
      if (puVar9 == (undefined *)0x2) {
        puVar9 = *(undefined **)(param_1 + 8);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = param_3;
        FUN_107cc6524();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar9;
        puVar10 = (undefined8 *)puVar3;
        func_0x00010c11d220();
        _objc_release(puVar3);
        goto LAB_107cc0f68;
      }
      puVar13 = (undefined *)0x3;
    }
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar13;
  }
  ___stack_chk_fail();
  _objc_retain(puVar10);
  _objc_retain(puVar2);
  uVar12 = *(ulong *)(param_3 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar12;
  func_0x00010bf90f00();
  if ((uVar11 & 1) == 0) {
    _objc_release(uVar12);
  }
  else {
    puVar3 = (undefined1 *)puVar10;
    func_0x00010bf1eea0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010c08fa60();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar12);
    if (puVar7 != (undefined1 *)0x0) {
      func_0x00010c11d260(param_3);
      (**(code **)(puVar2 + 0x10))(puVar2,param_3);
      goto LAB_107cc10e0;
    }
  }
  puVar3 = (undefined1 *)puVar10;
  func_0x00010bf1eea0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0ef4a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010c08fa60();
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (puVar7 == (undefined1 *)0x0) {
    func_0x00010be85200(param_3);
  }
  else {
    func_0x00010be85220();
  }
LAB_107cc10e0:
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar10);
  return (undefined *)puVar10;
}



/* Entry: 107cc0fc8; end: 107cc1103; -[SCStoriesContentDeliveryApiImpl2 _queryContentStatusForUseBoltContentMedia:completion:] */

void FUN_107cc0fc8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf90f00();
  if ((uVar2 & 1) == 0) {
    _objc_release(uVar1);
  }
  else {
    lVar3 = param_3;
    func_0x00010bf1eea0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0c3fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fa60();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(uVar1);
    if (lVar5 != 0) {
      func_0x00010c11d260(param_1);
      (**(code **)(param_4 + 0x10))(param_4,param_1);
      goto LAB_107cc10e0;
    }
  }
  lVar3 = param_3;
  func_0x00010bf1eea0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0ef4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  _objc_release(lVar3);
  if (lVar5 == 0) {
    func_0x00010be85200(param_1);
  }
  else {
    func_0x00010be85220();
  }
LAB_107cc10e0:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107cc1104; end: 107cc13a3; -[SCStoriesContentDeliveryApiImpl2 _queryContentStatusAsyncForVideoAndOverlayMedia:completion:] */

void FUN_107cc1104(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_78,param_1);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 0;
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x2020000000;
  uStack_a0 = 0;
  puVar1 = PTR_PTR_1126bcb88;
  _objc_alloc();
  _objc_copyWeak(auStack_c0,auStack_78);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c030440();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  FUN_107cc65c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  func_0x00010c11d240(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x000107cc66ac(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar1);
  func_0x00010c11d240(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_c0);
  __Block_object_dispose(&uStack_b8,8);
  __Block_object_dispose(&uStack_98,8);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107cc13a4; end: 107cc145f;  */

void FUN_107cc13a4(long param_1)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) - 1;
  if (uVar2 < 4) {
    uVar2 = *(ulong *)(&UNK_10dee5480 + uVar2 * 8);
  }
  else {
    uVar2 = 0;
  }
  uVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) - 1;
  if (uVar3 < 4) {
    uVar3 = *(ulong *)(&UNK_10dee5480 + uVar3 * 8);
  }
  else {
    uVar3 = 0;
  }
  plVar1 = (long *)(param_1 + 0x38);
  if (uVar2 <= uVar3) {
    plVar1 = (long *)(param_1 + 0x30);
  }
  if (*(long *)(*(long *)(*plVar1 + 8) + 0x18) == 3) {
    param_1 = param_1 + 0x40;
    _objc_loadWeakRetained(param_1);
    func_0x00010be85200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000107cc145c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 107cc1460; end: 107cc1487;  */

void FUN_107cc1460(long param_1,undefined8 param_2)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010c0e7130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onTaskComplete_112617660);
  return;
}



/* Entry: 107cc1488; end: 107cc1517; -[SCStoriesContentDeliveryApiImpl2 _queryContentStatusAsyncForSingleMedia:completion:] */

void FUN_107cc1488(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  FUN_107cc6524(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c11d240(uVar2,param_2,uVar1,param_4);
  _objc_release(param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107cc1518; end: 107cc159b; -[SCStoriesContentDeliveryApiImpl2 _isStoriesMediaInfoValid:] */

bool FUN_107cc1518(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_3;
  func_0x00010bf267e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  bVar2 = param_3 != 0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110eb6a38;
  if (!bVar2) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110eb6a18;
  }
  if (lVar4 == 0 || !bVar2) {
    FUN_107cd00fc(*(undefined8 *)(param_1 + 0x38),ppuVar1,1);
  }
  return lVar4 != 0 && bVar2;
}



/* Entry: 107cc159c; end: 107cc16a7; -[SCStoriesContentDeliveryApiImpl2 _resolveAndDownloadMedia:mediaDownloadConfigList:requestContext:userInitiated:expirationDate:completePrefetch:successBlock:failureBlock:] */

void FUN_107cc159c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c13a580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107cc16a8; end: 107cc171f; -[SCStoriesContentDeliveryApiImpl2 .cxx_destruct] */

void FUN_107cc16a8(long param_1)

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



/* Entry: 107cc1720; end: 107cc1793; -[SCStoriesContentDeliveryImplUsingPlaybackService initWithMediaResolver:] */

undefined1 * FUN_107cc1720(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fa688;
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



/* Entry: 107cc1794; end: 107cc1923; -[SCStoriesContentDeliveryImplUsingPlaybackService resolveAndDownloadMedia:mediaDownloadConfigList:requestContext:userInitiated:expirationDate:completePrefetch:successBlock:failureBlock:] */

void FUN_107cc1794(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_initWeak(auStack_68,param_1);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_9);
  _objc_retain(param_10);
  func_0x00010be94880(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107cc1924; end: 107cc197f;  */

void FUN_107cc1924(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfffc0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107cc1980; end: 107cc1ccb; -[SCStoriesContentDeliveryImplUsingPlaybackService _resolveAndLoadMedia:mediaDownloadConfigList:expirationDate:userInitiated:completePrefetch:requestContext:completion:] */

void FUN_107cc1980(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_148 [8];
  undefined1 uStack_140;
  undefined1 auStack_138 [8];
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
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(param_4);
        }
        lVar3 = param_3;
        FUN_107cc6f34(param_3,*(undefined8 *)(lStack_128 + lVar9 * 8),param_5,param_6,param_7,
                      param_8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(lVar3);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = param_4;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_4);
  puVar4 = PTR_PTR_1126c98e8;
  _objc_alloc(PTR_PTR_1126c98e8);
  puVar5 = PTR_PTR_1126c98f0;
  _objc_alloc(PTR_PTR_1126c98f0);
  func_0x00010c25b720();
  lVar2 = param_3;
  func_0x00010c0c5180(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c029180(puVar5);
  func_0x00010c029c60(puVar4);
  _objc_release(puVar5);
  _objc_release(lVar2);
  _objc_initWeak(auStack_138,param_1);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = auStack_138;
  _objc_copyWeak(auStack_148,puVar8);
  _objc_retain(param_9);
  _objc_retain(param_3);
  uStack_140 = (undefined1)param_6;
  uVar7 = uVar6;
  func_0x00010c13ace0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_9);
  _objc_destroyWeak(auStack_148);
  _objc_release(uVar6);
  _objc_destroyWeak(auStack_138);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_148);
  _objc_destroyWeak(auStack_138);
  __Unwind_Resume();
  _objc_retain(puVar8);
  param_3 = param_3 + 0x30;
  _objc_loadWeakRetained(param_3);
  func_0x00010becedc0();
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107cc1ccc; end: 107cc1d23;  */

void FUN_107cc1ccc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010becedc0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107cc1d24; end: 107cc1edf; -[SCStoriesContentDeliveryImplUsingPlaybackService _transformResult:completion:media:userInitiated:] */

void FUN_107cc1d24(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_107cc1ee0;
  uStack_60 = 0x107cc1ef0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x2020000000;
  uStack_88 = 0;
  uVar2 = param_3;
  puStack_58 = puVar1;
  func_0x00010bf007e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  func_0x00010bf97e80(uVar2);
  _objc_release(uVar2);
  uVar3 = puStack_98[3];
  uVar2 = puStack_78[5];
  FUN_107cd132c(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_4 + 0x10))(param_4,uVar3,uVar2);
  _objc_release(uVar2);
  _objc_release(param_5);
  __Block_object_dispose(&uStack_a0,8);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(puStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107cc1ee0; end: 107cc1ef7;  */

void FUN_107cc1ee0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107cc1ef8; end: 107cc2047;  */

void FUN_107cc1ef8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  _objc_retain(param_2);
  NEON_ext(*(undefined1 (*) [16])(param_1 + 0x28),*(undefined1 (*) [16])(param_1 + 0x28),8,1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  NEON_ext(*(undefined1 (*) [16])(param_1 + 0x28),*(undefined1 (*) [16])(param_1 + 0x28),8,1);
  _objc_retain(param_2);
  func_0x00010c0c1140(param_2);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 107cc2048; end: 107cc20af;  */

void FUN_107cc2048(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  func_0x00010c08fa60();
  if (param_2 != 0) {
    return;
  }
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  ppuVar1 = &PTR____CFConstantStringClassReference_110eb6a58;
  FUN_107cc20b0(&PTR____CFConstantStringClassReference_110eb6a58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 107cc20b0; end: 107cc218b;  */

void FUN_107cc20b0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  lVar6 = param_2;
  func_0x00010bfcaaa0(param_2);
  FUN_107cc6278(*(undefined8 *)(puVar1 + 0x20),lVar6 == 0,(puVar1[0x40] ^ 0xff) & 1);
  lVar6 = *(long *)(puVar1 + 0x28);
  func_0x00010bf4aec0();
  if (lVar6 == 1) {
    lVar6 = param_2;
    func_0x00010bfcaaa0();
    if (lVar6 - 1U < 4) {
      uVar7 = *(ulong *)(&UNK_10dee54a0 + (lVar6 - 1U) * 8);
    }
    else {
      uVar7 = 0;
    }
    uVar8 = *(long *)(*(long *)(*(long *)(puVar1 + 0x30) + 8) + 0x18) - 1;
    if (uVar8 < 4) {
      uVar8 = *(ulong *)(&UNK_10dee54a0 + uVar8 * 8);
    }
    else {
      uVar8 = 0;
    }
    if (uVar8 < uVar7) {
      lVar6 = param_2;
      func_0x00010bfcaaa0();
      *(long *)(*(long *)(*(long *)(puVar1 + 0x30) + 8) + 0x18) = lVar6;
      lVar6 = param_2;
      func_0x00010bfc79a0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar6;
      func_0x00010bf987e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010b7f5498();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(lVar6);
      uVar9 = *(undefined8 *)(*(long *)(*(long *)(puVar1 + 0x38) + 8) + 0x28);
      if (lVar4 == 0) {
        ppuVar5 = &PTR____CFConstantStringClassReference_110eb6a78;
        FUN_107cc20b0(&PTR____CFConstantStringClassReference_110eb6a78);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar9);
        _objc_release(ppuVar5);
      }
      else {
        func_0x00010befa120(uVar9);
      }
      _objc_release(lVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107cc218c; end: 107cc22fb;  */

void FUN_107cc218c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfcaaa0(param_2);
  FUN_107cc6278(*(undefined8 *)(param_1 + 0x20),lVar1 == 0,(*(byte *)(param_1 + 0x40) ^ 0xff) & 1);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf4aec0();
  if (lVar1 == 1) {
    lVar1 = param_2;
    func_0x00010bfcaaa0();
    if (lVar1 - 1U < 4) {
      uVar5 = *(ulong *)(&UNK_10dee54a0 + (lVar1 - 1U) * 8);
    }
    else {
      uVar5 = 0;
    }
    uVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) - 1;
    if (uVar6 < 4) {
      uVar6 = *(ulong *)(&UNK_10dee54a0 + uVar6 * 8);
    }
    else {
      uVar6 = 0;
    }
    if (uVar6 < uVar5) {
      lVar1 = param_2;
      func_0x00010bfcaaa0();
      *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = lVar1;
      lVar1 = param_2;
      func_0x00010bfc79a0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf987e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010b7f5498();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar1);
      uVar7 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
      if (lVar3 == 0) {
        ppuVar4 = &PTR____CFConstantStringClassReference_110eb6a78;
        FUN_107cc20b0(&PTR____CFConstantStringClassReference_110eb6a78);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar7);
        _objc_release(ppuVar4);
      }
      else {
        func_0x00010befa120(uVar7);
      }
      _objc_release(lVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107cc22fc; end: 107cc22ff;  */

void FUN_107cc22fc(void)

{
  return;
}



/* Entry: 107cc2300; end: 107cc2407;  */

void FUN_107cc2300(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_2);
  FUN_107cc6278(*(undefined8 *)(param_1 + 0x20),0,(*(byte *)(param_1 + 0x40) ^ 0xff) & 1);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf4aec0();
  if (lVar1 == 1) {
    lVar1 = param_2;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0720c0();
    if ((int)lVar2 == 0) {
      _objc_release(lVar1);
      uVar4 = 3;
      uVar3 = 4;
    }
    else {
      lVar2 = param_2;
      func_0x00010bf3ec40();
      _objc_release(lVar1);
      uVar3 = 3;
      if (lVar2 != 5) {
        uVar3 = 4;
      }
      uVar4 = 3;
      if (lVar2 == 5) {
        uVar4 = 4;
      }
    }
    lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar5 = *(long *)(lVar1 + 0x18) - 1;
    if (uVar5 < 4) {
      uVar5 = *(ulong *)(&UNK_10dee54a0 + uVar5 * 8);
    }
    else {
      uVar5 = 0;
    }
    if (uVar5 < uVar4) {
      *(undefined8 *)(lVar1 + 0x18) = uVar3;
    }
    func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107cc2408; end: 107cc2427; -[SCStoriesContentDeliveryImplUsingPlaybackService _didResolveAndLoadMediaWithError:status:successBlock:failureBlock:] */

void FUN_107cc2408(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107cc2418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_6 + 0x10))(param_6,param_4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000107cc2424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_5 + 0x10))(param_5);
  return;
}



/* Entry: 107cc2428; end: 107cc2433; -[SCStoriesContentDeliveryImplUsingPlaybackService .cxx_destruct] */

void FUN_107cc2428(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107cc2434; end: 107cc255f; -[SCStoriesFirstFrameExtraction initWithGrapheneRegistry:circumstanceEngine:] */

undefined1 *
FUN_107cc2434(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fa690;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126d62a8;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar3);
    uVar3 = param_4;
    func_0x00010c067f00();
    *(int *)((long)puVar1 + 0x18) = (int)uVar3;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107cc2560; end: 107cc2563; -[SCStoriesFirstFrameExtraction extractFirstImageFromVideoAsset:isSpectaclesVideo:clientId:] */

void FUN_107cc2560(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0db30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__extractFirstImageWithTimeoutFro_112561068);
  return;
}



/* Entry: 107cc2564; end: 107cc27f7; -[SCStoriesFirstFrameExtraction _extractFirstImageWithTimeoutFromVideoAsset:isSpectaclesVideo:clientId:] */

void FUN_107cc2564(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar2 = PTR_PTR_1126b33c0;
  _objc_opt_new();
  func_0x00010be91da0(&uStack_88,param_2);
  _CACurrentMediaTime();
  _objc_initWeak(auStack_90,param_2);
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  uVar5 = *(undefined8 *)(param_2 + 8);
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_107cc27f8;
  puStack_e8 = &UNK_110a06c90;
  _objc_retain(param_4);
  uStack_a8 = uStack_80;
  uStack_b0 = uStack_88;
  uStack_a0 = uStack_78;
  uStack_e0 = param_4;
  _objc_copyWeak(auStack_c0,auStack_90);
  uStack_b8 = param_1;
  _objc_retain(puVar2);
  puStack_d8 = puVar2;
  _objc_retain(param_6);
  uStack_d0 = param_6;
  uStack_98 = param_5;
  _objc_retain(puVar1);
  puStack_c8 = puVar1;
  func_0x00010c0f7fc0(uVar5);
  uVar5 = 0;
  _dispatch_time(0,(long)*(int *)(param_2 + 0x18) * 1000000);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_140 = puVar4;
  uStack_138 = 0xc2000000;
  pcStack_130 = FUN_107cc2a04;
  puStack_128 = &UNK_110850cf8;
  _objc_retain(puVar2);
  puStack_120 = puVar2;
  _objc_retain(param_6);
  uStack_118 = param_6;
  _objc_copyWeak(auStack_108,auStack_90);
  _objc_retain(puVar1);
  puStack_110 = puVar1;
  func_0x00010058c530(uVar5,uVar3,&puStack_140);
  _objc_release(uVar3);
  puVar4 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_110);
  _objc_destroyWeak(auStack_108);
  _objc_release(uStack_118);
  _objc_release(puStack_120);
  _objc_release(puStack_c8);
  _objc_release(uStack_d0);
  _objc_release(puStack_d8);
  _objc_destroyWeak(auStack_c0);
  _objc_release(uStack_e0);
  _objc_destroyWeak(auStack_90);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107cc27f8; end: 107cc2923;  */

void FUN_107cc27f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_48,param_1 + 0x40);
  uStack_40 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uStack_38 = *(undefined1 *)(param_1 + 0x68);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar5);
  func_0x00010bf9eda0(*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),0x3ff0000000000000,uVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 107cc2924; end: 107cc2a03;  */

void FUN_107cc2924(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar2);
  func_0x00010be53840(*(undefined8 *)(param_1 + 0x48));
  _objc_release(lVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bfec280();
  if (iVar1 == 1) {
    if (param_3 == 0) {
      func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x38));
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c279200(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0da9e0();
      _objc_release(uVar4);
      _objc_release(uVar3);
      func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x38));
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107cc2a04; end: 107cc2a8f;  */

void FUN_107cc2a04(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bfec280();
  if (iVar1 == 1) {
    lVar2 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar2);
    func_0x00010be53860();
    _objc_release(lVar2);
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110ea2ad8,
                        &PTR____CFConstantStringClassReference_110eb6af8,200);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x30),param_2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 107cc2a90; end: 107cc2abb; -[SCStoriesFirstFrameExtraction _requestedTimeToleranceForIsSpectaclesVideo:clientId:] */

void FUN_107cc2a90(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)PTR__kCMTimeZero_110348670;
  if (param_4 != 0) {
    puVar1 = (undefined8 *)PTR__kCMTimePositiveInfinity_110348658;
  }
  uVar2 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  param_1[2] = puVar1[2];
  return;
}



/* Entry: 107cc2abc; end: 107cc2aff; -[SCStoriesFirstFrameExtraction _logFirstFrameExtractionLatencyForStartTime:] */

void FUN_107cc2abc(double param_1,long param_2)

{
  long *plVar1;
  double dVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  dVar2 = param_1;
  _CACurrentMediaTime();
  if (*(long *)(param_2 + 0x28) != 0) {
    plVar1 = *(long **)(*(long *)(param_2 + 0x28) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    (**(code **)(*plVar1 + 0x18))
              (plVar1,&UNK_110a071b0,&uStack_40,(long)((dVar2 - param_1) * 1000.0));
    func_0x00010007e5dc(&stack0xffffffffffffffd8);
  }
  return;
}



/* Entry: 107cc2b00; end: 107cc2b0b; -[SCStoriesFirstFrameExtraction _logFirstFrameExtractionTimeout] */

void FUN_107cc2b00(long param_1)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 0x28) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110a07200,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 107cc2b0c; end: 107cc2b83; -[SCStoriesFirstFrameExtraction .cxx_destruct] */

void FUN_107cc2b0c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107cc2b84; end: 107cc2c8b; -[SCStoriesMediaCoordinatorUsingContentManagerImpl queryMediaStateForMedia:completion:] */

void FUN_107cc2b84(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    func_0x00010be8f860(param_1);
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_4);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c11d280(uVar1);
    _objc_destroyWeak(auStack_40);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107cc2c8c; end: 107cc2cdb;  */

void FUN_107cc2c8c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5ec00();
  (**(code **)(lVar2 + 0x10))(lVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107cc2cdc; end: 107cc2d3f; -[SCStoriesMediaCoordinatorUsingContentManagerImpl mediaStateForMedia:] */

long FUN_107cc2cdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010be8f860(param_1,param_2,param_3,&PTR____CFConstantStringClassReference_110eb6b38);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11d260(uVar1,param_2,param_3);
  func_0x00010be5ec00(param_1,param_2,uVar1);
  _objc_release(param_3);
  return param_1;
}


