/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107c10b00; end: 107c10c47; -[SCStoriesReadReceiptMixerRequester _resetFailureCountForEndpoint:] */

void FUN_107c10b00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)uVar5 != 0) {
    _objc_retain(param_3);
    func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110eb3cd8);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if (lVar4 != 0) {
      func_0x00010c067fc0(lVar4);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560();
    _objc_release(param_3);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560();
    _objc_release(uVar5);
    _objc_release(lVar4);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c10c48; end: 107c10cbf; -[SCStoriesReadReceiptMixerRequester .cxx_destruct] */

void FUN_107c10c48(long param_1)

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



/* Entry: 107c10cc0; end: 107c10ed3; -[SCStoriesSnapViewersNetworkRequester initWithProtobufRequestManager:grapheneMetricsEmitter:circumstanceEngine:currentUserId:networkConnectivityMonitor:locationProvider:] */

undefined1 *
FUN_107c10cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126fa350;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    uVar2 = param_5;
    func_0x00010c067f00(param_5);
    puVar3 = PTR_PTR_1126cf450;
    _objc_alloc();
    func_0x00010c034d20((double)(int)uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
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



/* Entry: 107c10ed4; end: 107c110db; -[SCStoriesSnapViewersNetworkRequester fetchViewerInfoWithBatchSnapsByType:requestSource:completion:] */

void FUN_107c10ed4(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_4;
  func_0x00010c0720c0();
  if ((((uVar1 & 1) == 0) && (uVar1 = param_4, func_0x00010c0720c0(), (uVar1 & 1) == 0)) &&
     (uVar1 = param_4, func_0x00010c0720c0(), (int)uVar1 == 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    puVar2 = auStack_90;
    _objc_copyWeak(puVar2,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(param_5);
    _objc_release(param_4);
    uVar3 = param_3;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_107c110dc;
    puStack_70 = &UNK_110857fd0;
    puVar2 = auStack_50;
    _objc_copyWeak(puVar2,auStack_48);
    _objc_retain(param_3);
    uStack_68 = param_3;
    _objc_retain(param_4);
    uStack_60 = param_4;
    _objc_retain(param_5);
    uStack_58 = param_5;
    func_0x00010c0f7fc0(uVar3);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
    uVar3 = uStack_68;
  }
  _objc_release(uVar3);
  _objc_destroyWeak(puVar2);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107c110dc; end: 107c1114b;  */

void FUN_107c110dc(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdf8580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107c1114c; end: 107c11283; -[SCStoriesSnapViewersNetworkRequester _debouceFetchViewerInfoWithBatchSnapsByType:requestSource:completion:] */

void FUN_107c1114c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf0dac0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107c11284; end: 107c11287;  */

void FUN_107c11284(void)

{
  return;
}



/* Entry: 107c11288; end: 107c1135b;  */

void FUN_107c11288(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (((param_2 & 1) == 0) && (lVar1 != 0)) {
    uVar3 = *(undefined8 *)(lVar1 + 0x40);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 107c1135c; end: 107c1136b;  */

void FUN_107c1135c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be15550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__fetchViewerInfoWithBatchSnapsBy_112562ef0,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 107c1136c; end: 107c11553; -[SCStoriesSnapViewersNetworkRequester _fetchViewerInfoWithBatchSnapsByType:requestSource:completion:] */

void FUN_107c1136c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    (**(code **)(param_5 + 0x10))(param_5,0);
  }
  else {
    _objc_initWeak(auStack_68,param_1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_107c11554;
    puStack_80 = &UNK_11094a660;
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    lStack_78 = param_3;
    _objc_opt_class(PTR_PTR_1126d72d8);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_a0,auStack_68);
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010c0b77a0(uVar3);
    _objc_release(uVar2);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_a0);
    _objc_release(lStack_78);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107c11554; end: 107c115bb;  */

void FUN_107c11554(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf2880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107c115bc; end: 107c11677;  */

void FUN_107c115bc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_2);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c0f66a0(param_2);
  _objc_release(param_2);
  func_0x00010c15ebe0(param_5);
  func_0x00010be564c0(lVar2);
  _objc_release(lVar2);
  uVar1 = param_5;
  if (param_4 != 0) {
    uVar1 = 0;
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107c11678; end: 107c119bb; -[SCStoriesSnapViewersNetworkRequester _createRequestWithSnapAccessToken:batchSnapsByType:] */

void FUN_107c11678(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d72e0;
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  uVar13 = *(undefined8 *)(param_1 + 0x28);
  uVar14 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar12);
  _objc_retain(uVar13);
  _objc_retain(uVar14);
  _objc_opt_new();
  func_0x00010c1ebd20();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  func_0x00010c1ec1a0(puVar1);
  _objc_release(puVar2);
  func_0x00010c1d64a0(puVar1);
  uVar3 = uVar12;
  func_0x00010057694c(uVar12,uVar13,uVar14);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  func_0x00010c17cd40(puVar1);
  _objc_release(uVar3);
  uVar12 = param_4;
  func_0x00010c0d3c80(param_4);
  func_0x00010c16f940(puVar1);
  _objc_release(uVar12);
  uVar12 = *(undefined8 *)(param_1 + 0x10);
  ppuVar4 = &PTR____CFConstantStringClassReference_110eb3cf8;
  _objc_retain(&PTR____CFConstantStringClassReference_110eb3cf8);
  func_0x000108f41eb8(uVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010059c344(&PTR____CFConstantStringClassReference_110eb3cf8,uVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110eb3cf8);
  _objc_release(uVar12);
  puVar2 = PTR_PTR_1126b4960;
  puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  if (puVar6 == (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126b19f8;
  _objc_retain(&PTR____CFConstantStringClassReference_110eb3cf8);
  func_0x00010c11f9e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = 0;
  func_0x00010bf58760(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(&PTR____CFConstantStringClassReference_110eb3cf8);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  if (puVar6 == (undefined *)0x0) {
    _objc_release(puVar7);
  }
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  uVar13 = *(undefined8 *)(param_3 + 0x18);
  _objc_retain(uVar12);
  ppuVar4 = &PTR____CFConstantStringClassReference_110eb3cf8;
  FUN_107c0ba20(&PTR____CFConstantStringClassReference_110eb3cf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0da0(uVar13);
  _objc_release(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar4);
  return;
}



/* Entry: 107c119bc; end: 107c11a3f; -[SCStoriesSnapViewersNetworkRequester _logNetworkMetricsWithSuccess:requestSource:requestSize:responseSize:] */

void FUN_107c119bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_4);
  ppuVar1 = &PTR____CFConstantStringClassReference_110eb3cf8;
  FUN_107c0ba20(&PTR____CFConstantStringClassReference_110eb3cf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0da0(uVar2,param_2,ppuVar1,param_4,param_3,param_5,param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 107c11a40; end: 107c11ab7; -[SCStoriesSnapViewersNetworkRequester .cxx_destruct] */

void FUN_107c11a40(long param_1)

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



/* Entry: 107c11ab8; end: 107c11b83; -[SCStoryLookupNetworkRequester initWithProtobufRequestManager:endpointManager:grapheneMetricsEmitter:] */

undefined1 *
FUN_107c11ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fa358;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107c11b84; end: 107c11eb7; -[SCStoryLookupNetworkRequester fetchStoryWithSource:requestSource:requestConstructionBlock:completionQueue:completion:] */

void FUN_107c11b84(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined **ppuStack_90;
  long lStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_98,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c106e80();
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c25a1e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  lVar3 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf95de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x000108f599e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010c08fa60();
  if (lVar6 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    ppuStack_90 = &PTR____CFConstantStringClassReference_110dadcb8;
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_88 = lVar3;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_107c11eb8;
  puStack_c0 = &UNK_110a00eb8;
  _objc_retain(param_5);
  uStack_a0 = param_5;
  _objc_retain(lVar4);
  lStack_b8 = lVar4;
  _objc_retain(uVar1);
  uStack_b0 = uVar1;
  _objc_retain(puVar8);
  puStack_a8 = puVar8;
  _objc_opt_class(PTR_PTR_1126b7628);
  puVar5 = auStack_98;
  _objc_copyWeak(auStack_e0,puVar5);
  _objc_retain(uVar1);
  _objc_retain(param_4);
  _objc_retain(param_7);
  func_0x00010c0b77a0(uVar2);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_e0);
  _objc_release(puStack_a8);
  _objc_release(uStack_b0);
  _objc_release(lStack_b8);
  _objc_release(uStack_a0);
  _objc_release(puVar8);
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_98);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_98);
  __Unwind_Resume();
  lVar6 = *(long *)(param_4 + 0x38);
  pcVar7 = *(code **)(lVar6 + 0x10);
  _objc_retain(puVar5);
  (*pcVar7)(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar6;
  func_0x00010059c104();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 107c11eb8; end: 107c11f33;  */

void FUN_107c11eb8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  lVar2 = *(long *)(param_1 + 0x38);
  pcVar3 = *(code **)(lVar2 + 0x10);
  _objc_retain(param_2);
  (*pcVar3)(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010059c104();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107c11f34; end: 107c1203f;  */

void FUN_107c11f34(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_2);
  lVar4 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c0f66a0(param_2);
  func_0x00010c15ebe0(param_5);
  func_0x00010be56480(lVar4);
  _objc_release(lVar4);
  lVar4 = *(long *)(param_1 + 0x30);
  uVar1 = param_2;
  func_0x00010c135700(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  if (param_4 == 0) {
    lVar3 = 0;
    uVar2 = param_5;
  }
  else {
    uVar2 = 0;
    lVar3 = param_4;
  }
  (**(code **)(lVar4 + 0x10))(lVar4,uVar1,uVar2,lVar3);
  _objc_release(uVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107c12040; end: 107c12047; -[SCStoryLookupNetworkRequester _logNetworkMetricsWithPath:requestSource:success:requestSize:responseSize:] */

void FUN_107c12040(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b0db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_logStoriesNetworkRequestWithEndp_112609d78);
  return;
}



/* Entry: 107c12048; end: 107c12083; -[SCStoryLookupNetworkRequester .cxx_destruct] */

void FUN_107c12048(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107c12084; end: 107c120f3; -[SCStoriesInteractionHistoryConfigDataModel initWithInteractionHistoryUploadSize:interactionHistoryMinUploadImpressionCount:interactionHistoryMinUploadImpressionTimeInSeconds:interactionHistoryUploadTTLInSeconds:interactionHistoryLocalRerankMaximumSize:] */

void FUN_107c12084(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126fa360;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  return;
}



/* Entry: 107c120f4; end: 107c12117; -[SCStoriesInteractionHistoryConfigDataModel copyWithZone:] */

undefined8 FUN_107c120f4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107c12118; end: 107c1218b; -[SCStoriesInteractionHistoryConfigDataModel hash] */

undefined8 * FUN_107c12118(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_20;
  long lStack_18;
  
  puVar1 = &uStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 8));
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_28 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  lVar3 = *(long *)(param_1 + 0x28);
  lStack_20 = -lVar3;
  if (-1 < lVar3) {
    lStack_20 = lVar3;
  }
  func_0x000100505190(&uStack_40,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x1;
  }
  else {
    puVar4 = (undefined1 *)0x0;
    if ((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar4 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if (((((ulong)puVar2 & 1) == 0) ||
          (((*(long *)((long)puVar1 + 8) != *(long *)(param_3 + 8) ||
            (*(long *)((long)puVar1 + 0x10) != *(long *)(param_3 + 0x10))) ||
           (*(long *)((long)puVar1 + 0x18) != *(long *)(param_3 + 0x18))))) ||
         (*(long *)((long)puVar1 + 0x20) != *(long *)(param_3 + 0x20))) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        puVar4 = (undefined1 *)(ulong)(*(long *)((long)puVar1 + 0x28) == *(long *)(param_3 + 0x28));
      }
    }
  }
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 107c1218c; end: 107c12253; -[SCStoriesInteractionHistoryConfigDataModel isEqual:] */

bool FUN_107c1218c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((((uVar3 & 1) == 0) ||
          (((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
            (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) ||
           (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) ||
         (*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 107c12254; end: 107c1225b; -[SCStoriesInteractionHistoryConfigDataModel interactionHistoryUploadSize] */

undefined8 FUN_107c12254(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107c1225c; end: 107c12263; -[SCStoriesInteractionHistoryConfigDataModel interactionHistoryMinUploadImpressionCount] */

undefined8 FUN_107c1225c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107c12264; end: 107c1226b; -[SCStoriesInteractionHistoryConfigDataModel interactionHistoryMinUploadImpressionTimeInSeconds] */

undefined8 FUN_107c12264(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107c1226c; end: 107c12273; -[SCStoriesInteractionHistoryConfigDataModel interactionHistoryUploadTTLInSeconds] */

undefined8 FUN_107c1226c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107c12274; end: 107c1227b; -[SCStoriesInteractionHistoryConfigDataModel interactionHistoryLocalRerankMaximumSize] */

undefined8 FUN_107c12274(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107c1227c; end: 107c122e3; +[MFCGetFeedCardsRequest descriptor] */

void FUN_107c1227c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137277b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b757e0,
                        &PTR____CFConstantStringClassReference_110eb3d78,&PTR_DAT_1132428e0,
                        &PTR_DAT_113242998,6,0x38,0x1c);
    puRam00000001137277b8 = puVar1;
  }
  return;
}



/* Entry: 107c122e4; end: 107c1236f; +[MFCLookupParams descriptor] */

undefined * FUN_107c122e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137277c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b75830,
                        &PTR____CFConstantStringClassReference_110eb3d98,&PTR_DAT_1132428e0,
                        &PTR_DAT_113242918,4,0x28,0x1c);
    func_0x00010c229040();
    puRam00000001137277c0 = puVar1;
  }
  return puRam00000001137277c0;
}



/* Entry: 107c12370; end: 107c123d7; +[MFCSnapSelection descriptor] */

void FUN_107c12370(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137277c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b75880,
                        &PTR____CFConstantStringClassReference_110eb3db8,&PTR_DAT_1132428e0,
                        &PTR_DAT_1132428f8,1,0x10,0x1c);
    puRam00000001137277c8 = puVar1;
  }
  return;
}



/* Entry: 107c123d8; end: 107c1243f; +[MFCExperiments descriptor] */

void FUN_107c123d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137277d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b75920,
                        &PTR____CFConstantStringClassReference_110eb3dd8,&PTR_DAT_113242a58,
                        &PTR_DAT_113242a70,2,0x10,0x1c);
    puRam00000001137277d0 = puVar1;
  }
  return;
}



/* Entry: 107c12440; end: 107c124a7; +[MFCSnapClientInternal descriptor] */

void FUN_107c12440(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137277d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b75970,
                        &PTR____CFConstantStringClassReference_110eb3df8,&PTR_DAT_113242a58,
                        &PTR_DAT_113242ab0,2,0x10,0x1c);
    puRam00000001137277d8 = puVar1;
  }
  return;
}



/* Entry: 107c124a8; end: 107c1250f; +[MFCDevice descriptor] */

void FUN_107c124a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137277e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b75a10,
                        &PTR____CFConstantStringClassReference_110e00438,&PTR_DAT_113242af0,
                        &PTR_DAT_113242b08,2,0x10,0x1c);
    puRam00000001137277e0 = puVar1;
  }
  return;
}



/* Entry: 107c12510; end: 107c12737; -[SCRTUSSignalManager initWithRTUSClientCacheManager:rtusConfigProvider:] */

undefined ***
FUN_107c12510(undefined **param_1,undefined8 param_2,undefined ***param_3,undefined **param_4)

{
  undefined ***pppuVar1;
  undefined **ppuVar2;
  undefined ***pppuVar3;
  undefined **ppuVar4;
  undefined **ppuStack_170;
  undefined *puStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  pppuVar1 = &ppuStack_170;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar3 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_168 = PTR_PTR_1126fa368;
  ppuStack_170 = param_1;
  _objc_msgSendSuper2(&ppuStack_170,PTR_s_init_1125d9248);
  if (pppuVar1 != (undefined ***)0x0) {
    _objc_retain(param_3);
    ppuVar2 = pppuVar1[1];
    pppuVar1[1] = (undefined **)param_3;
    _objc_release(ppuVar2);
    _objc_retain(param_4);
    ppuVar2 = pppuVar1[2];
    pppuVar1[2] = param_4;
    _objc_release(ppuVar2);
    ppuVar2 = (undefined **)PTR_PTR_1126d72e8;
    _objc_opt_new();
    ppuVar4 = pppuVar1[3];
    pppuVar1[3] = ppuVar2;
    _objc_release(ppuVar4);
    ppuStack_f0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cbd28;
    ppuStack_e8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cbd58;
    ppuStack_b0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cbd40;
    ppuStack_a8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cbd70;
    ppuStack_e0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cbd88;
    ppuStack_d8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cbdb8;
    ppuStack_a0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cbda0;
    ppuStack_98 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cbdd0;
    ppuStack_d0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cbde8;
    ppuStack_c8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cbe18;
    ppuStack_90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cbe00;
    ppuStack_88 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cbe00;
    ppuStack_c0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cbe30;
    ppuStack_b8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cbe48;
    ppuStack_80 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cbe00;
    ppuStack_78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cbe60;
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = pppuVar1[4];
    pppuVar1[4] = ppuVar2;
    _objc_release(ppuVar4);
    ppuStack_160 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cbda0;
    ppuStack_158 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cbe00;
    ppuStack_128 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cbd40;
    ppuStack_120 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cbd70;
    ppuStack_150 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cbe60;
    ppuStack_148 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cbe78;
    ppuStack_118 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cbda0;
    ppuStack_110 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cbdd0;
    ppuStack_140 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cbe90;
    ppuStack_138 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cbd40;
    ppuStack_108 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cbe00;
    ppuStack_100 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cbea8;
    ppuStack_130 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cbdd0;
    ppuStack_f8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cbe60;
    pppuVar3 = &ppuStack_128;
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = pppuVar1[5];
    pppuVar1[5] = ppuVar2;
    _objc_release(ppuVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return pppuVar1;
  }
  ___stack_chk_fail();
  if (pppuVar3 == (undefined ***)0x0) {
    param_3 = (undefined ***)0x0;
  }
  else {
    func_0x00010bdcf540();
    func_0x00010be21de0(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return param_3;
}



/* Entry: 107c12738; end: 107c1277b; -[SCRTUSSignalManager getRTUSSignalForRTUSProduct:mixerEndpointSource:] */

void FUN_107c12738(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010bdcf540();
    func_0x00010be21de0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107c1277c; end: 107c128e3; -[SCRTUSSignalManager _assertActualProductSameAsExpectedProduct:mixerEndpointSource:] */

void FUN_107c1277c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x28);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar7;
  func_0x00010c067fc0();
  _objc_release(lVar7);
  _objc_release(puVar1);
  if (lVar2 == param_3) {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf51380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf51380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  FUN_107c12d10(*(undefined8 *)(param_1 + 0x18),uVar4,puVar6,uVar3,1);
  _objc_release(puVar6);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 107c128e4; end: 107c1294b; -[SCRTUSSignalManager purgeRTUSEventsForRTUSProduct:rtusResponse:] */

void FUN_107c128e4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11bde0();
    _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 107c1294c; end: 107c12ac7; -[SCRTUSSignalManager getRTUSEnabledProductFromFeedTypes:] */

undefined * FUN_107c1294c(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_107c12ac8;
  puStack_60 = &UNK_110886d58;
  puVar1 = param_3;
  lStack_58 = param_1;
  func_0x0001006372a4(param_3,&puStack_78);
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar5 = puVar1;
  func_0x000100504554();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = puVar2;
  func_0x00010bf529e0();
  if (puVar5 == (undefined *)0x1) {
    puVar3 = puVar2;
    func_0x00010bf04a20(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c067fc0();
  }
  else {
    puVar5 = puVar2;
    func_0x00010bf529e0();
    if (puVar5 < (undefined *)0x2) {
      puVar5 = (undefined *)0x0;
      goto LAB_107c12a90;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    puVar3 = param_3;
    func_0x00010bf446e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_107c12fd0(uVar4,puVar3,1);
    puVar5 = (undefined *)0x0;
  }
  _objc_release(puVar3);
LAB_107c12a90:
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  return puVar5;
}



/* Entry: 107c12ac8; end: 107c12b5b;  */

void FUN_107c12ac8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010be223a0(lVar1,param_2,param_2);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07b380();
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 107c12b5c; end: 107c12b63; -[SCRTUSSignalManager shouldIncludeInteractionHistory:] */

undefined8 FUN_107c12b5c(void)

{
  return 1;
}



/* Entry: 107c12b64; end: 107c12c07; -[SCRTUSSignalManager _getRTUSForProduct:] */

void FUN_107c12b64(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126d72f0;
  _objc_opt_new(PTR_PTR_1126d72f0);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfc53e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c171ac0(puVar1,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107c12c08; end: 107c12c47; -[SCRTUSSignalManager _getRtusProductIntFromFeedTypeNumber:] */

undefined8 FUN_107c12c08(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0dff20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067fc0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 107c12c48; end: 107c12c9b; -[SCRTUSSignalManager .cxx_destruct] */

void FUN_107c12c48(long param_1)

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



/* Entry: 107c12c9c; end: 107c12d0f; -[SCGrapheneDiscoverRtusMetric2 init] */

undefined1 * FUN_107c12c9c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fa370;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107c12d10; end: 107c12fcf;  */

/* WARNING: Removing unreachable block (ram,0x000107c12f98) */

void FUN_107c12d10(long param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *unaff_x24;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar5 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar4 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f44e788;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f44e788;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar1 = &UNK_10f44e788;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar1 = &UNK_110a00f48;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a00f48,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar6 = 0;
    puVar4 = (undefined *)puVar5;
    do {
      if ((&cStack_59)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar6 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_4);
    puStack_f8 = auStack_a0;
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)puStack_f8);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
    puVar3 = puVar2;
    __Unwind_Resume();
    pcStack_c8 = FUN_107c12fd0;
    lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_100 = (undefined1 *)unaff_x24;
    puStack_f0 = puVar2;
    puStack_e8 = param_4;
    puStack_e0 = param_3;
    puStack_d8 = param_2;
    puStack_d0 = &stack0xfffffffffffffff0;
    _objc_retain(puVar1);
    if (puVar3 != (undefined *)0x0) {
      plVar7 = *(long **)(puVar3 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = &UNK_10f44e788;
      }
      else {
        puVar2 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_120,puVar2);
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_130 = 0;
      func_0x00010007e1e8(&uStack_140,auStack_120,&lStack_108,1);
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110a00f98,&uStack_140,puVar4);
      puStack_128 = (undefined1 *)&uStack_140;
      func_0x00010007e5dc(&puStack_128);
      if (cStack_109 < '\0') {
        __ZdlPv(auStack_120[0]);
      }
    }
    puVar4 = puVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
      ___stack_chk_fail();
      _objc_release(puVar1);
      _objc_release(puVar1);
      __Unwind_Resume(puVar4);
      if (puRam00000001137277e8 == (undefined *)0x0) {
        puVar1 = PTR_PTR_1126ae978;
        func_0x00010bf00dc0();
        puRam00000001137277e8 = puVar1;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 107c12fd0; end: 107c13143;  */

void FUN_107c12fd0(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
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
    plVar2 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f44e788;
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
    (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110a00f98,&uStack_80,param_3);
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
  __Unwind_Resume(puVar1);
  if (puRam00000001137277e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0();
    puRam00000001137277e8 = puVar1;
  }
  return;
}



/* Entry: 107c13144; end: 107c131ab; +[BatchUploadReadReceiptsRequest descriptor] */

void FUN_107c13144(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137277e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b75b50,
                        &PTR____CFConstantStringClassReference_110eb3e18,&PTR_DAT_113242b48,
                        &PTR_s_metadata_113242c40,3,0x20,0x1c);
    puRam00000001137277e8 = puVar1;
  }
  return;
}



/* Entry: 107c131ac; end: 107c13213; +[BatchUploadReadReceiptsResponse descriptor] */

void FUN_107c131ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137277f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b75ba0,
                        &PTR____CFConstantStringClassReference_110eb3e38,&PTR_DAT_113242b48,
                        &PTR_s_requestId_113242b60,1,0x10,0x1c);
    puRam00000001137277f0 = puVar1;
  }
  return;
}



/* Entry: 107c13214; end: 107c1327b; +[IndexPremiumReadReceiptsRequest descriptor] */

void FUN_107c13214(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137277f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b75bf0,
                        &PTR____CFConstantStringClassReference_110eb3e58,&PTR_DAT_113242b48,
                        &PTR_s_metadata_113242bc0,2,0x18,0x1c);
    puRam00000001137277f8 = puVar1;
  }
  return;
}



/* Entry: 107c1327c; end: 107c132e3; +[IndexPremiumReadReceiptsResponse descriptor] */

void FUN_107c1327c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727800 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b75c40,
                        &PTR____CFConstantStringClassReference_110eb3e78,&PTR_DAT_113242b48,
                        &PTR_s_requestId_113242b80,1,0x10,0x1c);
    puRam0000000113727800 = puVar1;
  }
  return;
}



/* Entry: 107c132e4; end: 107c1334b; +[BackfillReadReceiptsRequest descriptor] */

void FUN_107c132e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727808 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b75c90,
                        &PTR____CFConstantStringClassReference_110eb3e98,&PTR_DAT_113242b48,
                        &PTR_s_metadata_113242c00,2,0x18,0x1c);
    puRam0000000113727808 = puVar1;
  }
  return;
}



/* Entry: 107c1334c; end: 107c133b3; +[BackfillReadReceiptsResponse descriptor] */

void FUN_107c1334c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727810 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b75ce0,
                        &PTR____CFConstantStringClassReference_110eb3eb8,&PTR_DAT_113242b48,
                        &PTR_s_error_113242ba0,1,0x10,0x1c);
    puRam0000000113727810 = puVar1;
  }
  return;
}



/* Entry: 107c133b4; end: 107c135f7; -[SCDiscoverFeedCollapsedCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107c133b4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126fa378;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276bfcc);
    *(undefined **)((long)puVar1 + (long)_DAT_11276bfcc) = puVar2;
    _objc_release(uVar4);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126b6138;
    _objc_opt_new();
    lVar6 = (long)_DAT_11276bfd0;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    func_0x00010c1c3c80(0x3ff1f06f60000000,*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010c160fc0(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbd40(*(undefined8 *)((long)puVar1 + lVar6));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_opt_new();
    lVar7 = (long)_DAT_11276bfd4;
    uVar5 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar2;
    _objc_release(uVar5);
    FUN_107c7ac60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    FUN_107c139ec();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(uVar4);
    _objc_release(uVar5);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(puVar2);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar6));
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010c178280();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107c135f8; end: 107c1374f; -[SCDiscoverFeedCollapsedCollectionViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c135f8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126d72f8;
  _objc_opt_class(PTR_PTR_1126d72f8);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar6 = (long)_DAT_11276bfd8;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar5);
  _objc_retain(uVar1);
  if (uVar5 == uVar1) {
    _objc_release(uVar1);
    _objc_release(uVar5);
  }
  else {
    if (uVar1 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar3 = uVar5;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar5);
      if ((uVar3 & 1) != 0) goto LAB_107c13730;
    }
    _objc_retain(uVar1);
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar1;
    _objc_release(uVar4);
    uVar5 = uVar1;
    func_0x00010bf0df20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_11276bfcc;
    func_0x00010c16b720(*(undefined8 *)(param_1 + lVar6));
    _objc_release(uVar5);
    func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar6));
    uVar5 = uVar1;
    func_0x00010c112fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + _DAT_11276bfdc);
    *(ulong *)(param_1 + _DAT_11276bfdc) = uVar5;
    _objc_release(uVar4);
    func_0x00010c1cbe20(param_1);
  }
LAB_107c13730:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c13750; end: 107c138db; -[SCDiscoverFeedCollapsedCollectionViewCell layoutSubviews] */

/* WARNING: Possible PIC construction at 0x000107c13830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107c13820: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107c13834) */
/* WARNING: Removing unreachable block (ram,0x000107c13824) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c13750(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_11276bfd0);
  iVar2 = (int)*puVar1;
  func_0x00010c074c20();
  if (iVar2 == 0) {
    lVar4 = (long)_DAT_11276bfd4;
    func_0x00010c23d620(*(undefined8 *)(param_5 + lVar4));
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar4));
    dVar7 = param_3 + 16.0;
    func_0x00010bf20c00(param_5);
    param_4 = param_4 + -2.0;
    uVar3 = *puVar1;
    func_0x00010c08c0e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(param_4 * 0.5);
    _objc_release(uVar3);
    func_0x00010bf20c00(param_5);
    dVar5 = (param_3 - dVar7) + -8.0;
    uVar3 = *puVar1;
    uVar6 = 0x4000000000000000;
  }
  else {
    dVar5 = *(double *)PTR__CGRectZero_110347608;
    uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    dVar7 = *(double *)(PTR__CGRectZero_110347608 + 0x10);
    param_4 = *(double *)(PTR__CGRectZero_110347608 + 0x18);
    uVar3 = *puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(dVar5,uVar6,dVar7,param_4,uVar3,PTR_s_setFrame__112645658);
  return;
}



/* Entry: 107c138dc; end: 107c138fb; -[SCDiscoverFeedCollapsedCollectionViewCell _handleTapAction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c138dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd0150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276bfe0),
             PTR_s_handleActionWithSender_actionMod_1125d19f8,param_1,
             *(undefined8 *)(param_1 + _DAT_11276bfdc),param_1);
  return;
}



/* Entry: 107c138fc; end: 107c13903; +[SCDiscoverFeedCollapsedCollectionViewCell sizeWithViewModel:constrainedToSize:] */

void FUN_107c138fc(void)

{
  return;
}



/* Entry: 107c13904; end: 107c1390b; -[SCDiscoverFeedCollapsedCollectionViewCell viewToAnimateOnTap:] */

undefined8 FUN_107c13904(void)

{
  return 0;
}



/* Entry: 107c1390c; end: 107c1391b; -[SCDiscoverFeedCollapsedCollectionViewCell actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c1390c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276bfe0);
}



/* Entry: 107c1391c; end: 107c1395b; -[SCDiscoverFeedCollapsedCollectionViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1391c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276bfe0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c1395c; end: 107c1396b; -[SCDiscoverFeedCollapsedCollectionViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c1395c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276bfd8);
}



/* Entry: 107c1396c; end: 107c139eb; -[SCDiscoverFeedCollapsedCollectionViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1396c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276bfd8,0);
  _objc_storeStrong(param_1 + _DAT_11276bfe0,0);
  _objc_storeStrong(param_1 + _DAT_11276bfd4,0);
  _objc_storeStrong(param_1 + _DAT_11276bfd0,0);
  _objc_storeStrong(param_1 + _DAT_11276bfdc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276bfcc,0);
  return;
}



/* Entry: 107c139ec; end: 107c13bcf;  */

void FUN_107c139ec(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_opt_new();
  func_0x00010c1c82e0(0x402e000000000000);
  func_0x00010c1c3ba0(0x402e000000000000,puVar1);
  func_0x00010c1bdb00(puVar1);
  func_0x00010c166c00(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSShadow_1126b6158;
  _objc_opt_new();
  func_0x00010c1fe7a0(*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8));
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010bf51e00();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = param_1;
  FUN_107c925f4(param_1,puVar6);
  _objc_release(param_1);
  _objc_release(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126aea98;
    _objc_retain();
    _objc_alloc(puVar1);
    func_0x00010bffd260();
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107c13bd0; end: 107c13c23;  */

void FUN_107c13bd0(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aea98;
  _objc_retain();
  _objc_alloc(puVar1);
  func_0x00010bffd260();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107c13c24; end: 107c13ed3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107c13c24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR_PTR_1126b02a8;
  _objc_retain(param_2);
  _objc_alloc();
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110eb62f8;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_c0 = param_2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b460();
  _objc_release(puVar2);
  puVar3 = PTR_PTR_1126d72f8;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  _objc_retain(param_1);
  _objc_opt_new();
  func_0x00010c1c82e0(0x402e000000000000);
  func_0x00010c1c3ba0(0x402e000000000000,puVar2);
  func_0x00010c1bdb00(puVar2);
  func_0x00010c166c00(puVar2);
  puVar4 = PTR__OBJC_CLASS___NSShadow_1126b6158;
  _objc_opt_new();
  func_0x00010c1fe7a0(*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8));
  uStack_b8 = *(undefined8 *)PTR__NSShadowAttributeName_110345828;
  uStack_b0 = *(undefined8 *)PTR__NSKernAttributeName_110345808;
  ppuStack_88 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cbec0;
  uStack_a8 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
  puStack_90 = puVar4;
  func_0x00010bf6d680(0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  uStack_a0 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_80 = puVar5;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  uStack_98 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820;
  puVar7 = puVar2;
  puStack_78 = puVar6;
  func_0x00010bf51e00();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar7;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  uVar11 = param_1;
  FUN_107c925f4(param_1,puVar8);
  _objc_release(param_1);
  _objc_release(puVar8);
  puVar2 = puVar3;
  func_0x00010bff4e20();
  _objc_release(uVar11);
  _objc_release(puVar1);
  uVar11 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  puVar9 = &uStack_110;
  pcStack_d8 = FUN_107c13ed4;
  puStack_108 = PTR_PTR_1126fa380;
  uStack_110 = uVar11;
  puStack_100 = puVar3;
  puStack_f8 = puVar2;
  puStack_f0 = puVar1;
  uStack_e8 = param_1;
  puStack_e0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&uStack_110,PTR_s_initWithFrame__1125e2948);
  if (puVar9 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126aeff0;
    _objc_alloc();
    func_0x00010bfffb60();
    lVar12 = (long)_DAT_11276bfe4;
    uVar11 = *(undefined8 *)((long)puVar9 + lVar12);
    *(undefined **)((long)puVar9 + lVar12) = puVar2;
    _objc_release(uVar11);
    func_0x00010c24dbc0(*(undefined8 *)((long)puVar9 + lVar12));
    puVar10 = (undefined1 *)puVar9;
    func_0x00010bf4dce0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar10);
  }
  return (undefined1 *)puVar9;
}



/* Entry: 107c13ed4; end: 107c13f7f; -[SCDiscoverFeedLoadingViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107c13ed4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fa380;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126aeff0;
    _objc_alloc();
    func_0x00010bfffb60();
    lVar5 = (long)_DAT_11276bfe4;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010c24dbc0(*(undefined8 *)((long)puVar1 + lVar5));
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107c13f80; end: 107c14073; -[SCDiscoverFeedLoadingViewCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c13f80(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c2110;
  _objc_opt_class(PTR_PTR_1126c2110);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  lVar6 = (long)_DAT_11276bfe8;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar5);
  _objc_retain(uVar1);
  if (uVar5 == uVar1) {
    _objc_release(uVar1);
    _objc_release(uVar5);
  }
  else {
    if (uVar1 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar3 = uVar5;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar5);
      if ((uVar3 & 1) != 0) goto LAB_107c14054;
    }
    _objc_retain(uVar1);
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar1;
    _objc_release(uVar4);
    func_0x00010c1cbe20(param_1);
  }
LAB_107c14054:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c14074; end: 107c14177; -[SCDiscoverFeedLoadingViewCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c14074(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126fa380;
  lStack_40 = param_4;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_4);
  lVar6 = (long)_DAT_11276bfe4;
  func_0x00010c19f0e0((param_3 + -30.0) * 0.5,0x4034000000000000,0x403e000000000000,
                      0x403e000000000000,*(undefined8 *)(param_4 + lVar6));
  puVar2 = PTR_PTR_1126c2110;
  uVar5 = *(ulong *)(param_4 + _DAT_11276bfe8);
  _objc_retain(uVar5);
  _objc_opt_class(puVar2);
  uVar3 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar1 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  if ((uVar1 != 0) && (func_0x00010c233120(), (int)uVar5 != 0)) {
    lVar4 = param_4;
    func_0x00010bf4dce0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf345e0();
    func_0x00010c17a6a0(*(undefined8 *)(param_4 + lVar6));
    _objc_release(lVar4);
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 107c14178; end: 107c141fb; -[SCDiscoverFeedLoadingViewCell applyLayoutAttributes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c14178(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_applyLayoutAttributes__112527ed0;
  puStack_38 = PTR_PTR_1126fa380;
  lStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_40,puVar1,param_3);
  func_0x00010c074c20(param_3);
  _objc_release(param_3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11276bfe4));
  return;
}



/* Entry: 107c141fc; end: 107c1428b; +[SCDiscoverFeedLoadingViewCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_107c141fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  uVar4 = param_1;
  _objc_retain(param_5);
  if (param_5 == 0) {
    param_2 = 0x4064000000000000;
  }
  else {
    puVar2 = PTR_PTR_1126c2110;
    _objc_opt_class(PTR_PTR_1126c2110);
    uVar3 = param_5;
    _objc_opt_isKindOfClass(param_5,puVar2);
    uVar1 = param_5;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    func_0x00010c106920(uVar1);
    _objc_release(uVar1);
    param_1 = uVar4;
  }
  _objc_release(param_5);
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 107c1428c; end: 107c1429b; -[SCDiscoverFeedLoadingViewCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107c1428c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276bfe8);
}



/* Entry: 107c1429c; end: 107c142db; -[SCDiscoverFeedLoadingViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c1429c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276bfe8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276bfe4,0);
  return;
}



/* Entry: 107c142dc; end: 107c14357;  */

void FUN_107c142dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c2110;
  _objc_alloc(PTR_PTR_1126c2110);
  func_0x00010c0383a0(param_1,param_2);
  puVar2 = PTR_PTR_1126aea98;
  _objc_alloc(PTR_PTR_1126aea98);
  func_0x00010bffd260();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107c14358; end: 107c1435f; -[SCDiscoverFeedLoadingViewCellViewModel virtualSection] */

undefined8 FUN_107c14358(void)

{
  return 1;
}



/* Entry: 107c14360; end: 107c14367; -[SCDiscoverFeedLoadingViewCellViewModel countsTowardVirtualSectionExpansion] */

undefined8 FUN_107c14360(void)

{
  return 0;
}



/* Entry: 107c14368; end: 107c14373; +[SCDiscoverFeedStoryCollectionViewCell announcerIdentifier] */

undefined ** FUN_107c14368(void)

{
  return &PTR____CFConstantStringClassReference_110eb3ef8;
}



/* Entry: 107c14374; end: 107c14383; -[SCDiscoverFeedStoryCollectionViewCell addListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c14374(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276bff4),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 107c14384; end: 107c14393; -[SCDiscoverFeedStoryCollectionViewCell removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c14384(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276bff4),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 107c14394; end: 107c14423; -[SCDiscoverFeedStoryCollectionViewCell setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c14394(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276bff8);
  *(undefined8 *)(param_1 + _DAT_11276bff8) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c161980(*(undefined8 *)(param_1 + _DAT_11276bffc),param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c000);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161980();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c14424; end: 107c14a4f; -[SCDiscoverFeedStoryCollectionViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107c14424(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_100 [8];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  puStack_88 = PTR_PTR_1126fa388;
  puVar1 = &uStack_90;
  uStack_90 = param_5;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1af000(puVar1);
    func_0x00010c160fc0(puVar1);
    puVar2 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17d4c0();
    _objc_release(puVar2);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276bff4);
    *(undefined **)((long)puVar1 + (long)_DAT_11276bff4) = puVar3;
    _objc_release(uVar6);
    puVar2 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    FUN_107c1a278(puVar1,PTR_s__handleTapAction__112528440);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x000107c1a2dc(puVar1,PTR_s__handleLongPressAction__112531790);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar2);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    lVar7 = (long)_DAT_11276c004;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar3;
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010c08c0e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4018000000000000);
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010c08c0e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    _objc_release(uVar6);
    puVar2 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c008);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c008) = puVar3;
    _objc_release(uVar6);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar7));
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_opt_new();
    lVar8 = (long)_DAT_11276c00c;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar3;
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar8);
    func_0x00010c08c0e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c8160();
    _objc_release(uVar6);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar8));
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14cfc0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)((long)puVar1 + lVar8));
    _objc_release(puVar3);
    _objc_release(puVar5);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar7));
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc0000000;
    pcStack_c0 = FUN_107c14a50;
    puStack_b8 = &UNK_110a01028;
    puVar3 = PTR_PTR_1126ae720;
    uStack_b0 = param_1;
    uStack_a8 = param_2;
    uStack_a0 = param_3;
    uStack_98 = param_4;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c010);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c010) = puVar3;
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126d5ad0;
    _objc_alloc();
    func_0x00010c013de0(param_1,param_2,param_3,param_4);
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c014);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c014) = puVar3;
    _objc_release(uVar6);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_initWeak(auStack_d8,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    uStack_f8 = param_1;
    uStack_f0 = param_2;
    uStack_e8 = param_3;
    uStack_e0 = param_4;
    _objc_copyWeak(auStack_100,auStack_d8);
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c000);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c000) = puVar3;
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c018);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c018) = puVar3;
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c01c);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c01c) = puVar3;
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c020);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c020) = puVar3;
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c024);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c024) = puVar3;
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126d7318;
    _objc_alloc();
    puVar2 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c003f40();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c028);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c028) = puVar3;
    _objc_release(uVar6);
    _objc_release(puVar2);
    puVar3 = PTR_PTR_1126d7320;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c02c);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c02c) = puVar3;
    _objc_release(uVar6);
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar7));
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276c030);
    *(undefined **)((long)puVar1 + (long)_DAT_11276c030) = puVar3;
    _objc_release(uVar6);
    _objc_destroyWeak(auStack_100);
    _objc_destroyWeak(auStack_d8);
  }
  return puVar1;
}



/* Entry: 107c14a50; end: 107c14a83;  */

void FUN_107c14a50(long param_1)

{
  _objc_alloc(PTR_PTR_1126d5ab8);
  func_0x00010c013de0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107c14a84; end: 107c14afb;  */

void FUN_107c14a84(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126d5a18;
  _objc_alloc(PTR_PTR_1126d5a18);
  func_0x00010c013de0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107c14afc; end: 107c14b2f;  */

void FUN_107c14afc(long param_1)

{
  _objc_alloc(PTR_PTR_1126d7300);
  func_0x00010c013de0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107c14b30; end: 107c14b4b;  */

void FUN_107c14b30(void)

{
  _objc_opt_new(PTR_PTR_1126d7308);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107c14b4c; end: 107c14bc3;  */

void FUN_107c14b4c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d5ae0;
  _objc_alloc(PTR_PTR_1126d5ae0);
  func_0x00010c013de0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  func_0x00010c21e900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107c14bc4; end: 107c14c43; -[SCDiscoverFeedStoryCollectionViewCell setImageFetchingService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c14bc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c034);
  *(undefined8 *)(param_1 + _DAT_11276c034) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c010);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aa2c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c14c44; end: 107c14c7b; -[SCDiscoverFeedStoryCollectionViewCell setFriendsContextLabelBuilder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c14c44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c038);
  *(undefined8 *)(param_1 + _DAT_11276c038) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c14c7c; end: 107c14cfb; -[SCDiscoverFeedStoryCollectionViewCell setStoriesConfigProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c14c7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c03c);
  *(undefined8 *)(param_1 + _DAT_11276c03c) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c010);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20c5a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c14cfc; end: 107c14d33; -[SCDiscoverFeedStoryCollectionViewCell setBitmojiImageFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c14cfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c040);
  *(undefined8 *)(param_1 + _DAT_11276c040) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107c14d34; end: 107c14d43; -[SCDiscoverFeedStoryCollectionViewCell storyThumbnailImageLoaded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107c14d34(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276c044);
}



/* Entry: 107c14d44; end: 107c14d8b; -[SCDiscoverFeedStoryCollectionViewCell layoutSubviews] */

void FUN_107c14d44(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fa388;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010be49a40(param_1);
  return;
}



/* Entry: 107c14d8c; end: 107c14dcf; -[SCDiscoverFeedStoryCollectionViewCell sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c14d8c(undefined8 param_1,undefined8 param_2)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010c23d6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,param_2);
  return;
}



/* Entry: 107c14dd0; end: 107c14eeb; -[SCDiscoverFeedStoryCollectionViewCell viewportDidUpdateViewportFrame:dragging:decelerating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c14dd0(double param_1,double param_2,double param_3,double param_4,ulong param_5,
                  undefined8 param_6,uint param_7,uint param_8)

{
  double *pdVar1;
  int iVar2;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  ulong uVar3;
  
  pdVar1 = (double *)(param_5 + (long)_DAT_11276c04c);
  uVar3 = param_5;
  dVar6 = param_1;
  dVar8 = param_2;
  dVar10 = param_3;
  dVar12 = param_4;
  func_0x00010bfb68e0();
  iVar2 = (int)uVar3;
  dVar7 = *pdVar1;
  dVar9 = pdVar1[1];
  dVar11 = pdVar1[2];
  dVar13 = pdVar1[3];
  _CGRectIntersectsRect(dVar7,dVar9,dVar11,dVar13,dVar6,dVar8,dVar10,dVar12);
  uVar3 = param_5;
  func_0x00010bfb68e0();
  dVar6 = param_1;
  _CGRectIntersectsRect(param_1,param_2,param_3,param_4,dVar7,dVar9,dVar11,dVar13);
  if ((iVar2 != 0) && ((uVar3 & 1) == 0)) {
    func_0x00010be2fa60(param_5);
  }
  *pdVar1 = param_1;
  pdVar1[1] = param_2;
  pdVar1[2] = param_3;
  pdVar1[3] = param_4;
  func_0x00010bed4440(param_5);
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  lVar4 = (long)_DAT_11276c050;
  if (((param_7 | param_8) != 1) || (0.1 < dVar6 - *(double *)(param_5 + lVar4))) {
    lVar5 = (long)_DAT_11276c054;
    *(double *)(param_5 + lVar5) = param_1;
    ((double *)(param_5 + lVar5))[1] = param_2;
    *(double *)(param_5 + lVar4) = dVar6;
  }
  return;
}



/* Entry: 107c14eec; end: 107c14f4f; -[SCDiscoverFeedStoryCollectionViewCell _handleScrollOutOfScreenAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c14eec(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276bff8);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11276c058);
  lVar1 = param_1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar2,param_2,param_1,uVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107c14f50; end: 107c14fe3; -[SCDiscoverFeedStoryCollectionViewCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107c14f50(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fa388;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + _DAT_11276c05c));
  *(undefined8 *)(param_1 + _DAT_11276c060) = 0;
  *(undefined8 *)(param_1 + _DAT_11276c064) = 0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276c068);
  *(undefined8 *)(param_1 + _DAT_11276c068) = 0;
  _objc_release(uVar1);
  func_0x00010c16ce60(*(undefined8 *)(param_1 + _DAT_11276c014));
  *(undefined8 *)(param_1 + _DAT_11276c06c) = 0;
  *(undefined8 *)(param_1 + _DAT_11276c070) = 0;
  return;
}



/* Entry: 107c14fe4; end: 107c15053; -[SCDiscoverFeedStoryCollectionViewCell setViewModel:] */

void FUN_107c14fe4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c22b8;
  _objc_opt_class(PTR_PTR_1126c22b8);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010bde26c0(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107c15054; end: 107c15113; +[SCDiscoverFeedStoryCollectionViewCell sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_107c15054(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126c22b8;
  _objc_opt_class(PTR_PTR_1126c22b8);
  uVar3 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar2);
  uVar1 = param_5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  func_0x00010c106920(uVar1);
  uVar3 = uVar1;
  dVar4 = param_2;
  func_0x00010c087660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    func_0x00010bf27b00(uVar1);
    param_2 = param_2 + dVar4;
  }
  func_0x00010b8165e8(param_1,param_2);
  _objc_release(uVar1);
  _objc_release(param_5);
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}


