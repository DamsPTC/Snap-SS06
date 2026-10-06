/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1053b5238; end: 1053b5353; -[SCDeltaSyncGrapheneMetricsReporter updateRequestInitiatedForItemKey:client:] */

void FUN_1053b5238(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1053b5354;
  puStack_58 = &UNK_110841f80;
  lStack_50 = param_1;
  uStack_48 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c09fac0(uVar2,param_2,&puStack_70);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b81f8;
  func_0x00010c289380(PTR_PTR_1126b81f8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bfcecc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be60300(param_1,param_2,puVar1,uVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bfec2a0(uVar3,param_2,param_1);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(uStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053b5354; end: 1053b53ab;  */

void FUN_1053b5354(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf5fd80(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
  func_0x00010c0df720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60),param_2,puVar1,
                      *(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053b53ac; end: 1053b55d3; -[SCDeltaSyncGrapheneMetricsReporter updateRequestSucceededForItemKey:client:] */

void FUN_1053b53ac(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf5fd80(*(undefined8 *)(param_2 + 0x10));
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_1053b3a48;
  uStack_70 = 0x1053b3a58;
  uStack_68 = 0;
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  dVar5 = 1.60807493534087e-314;
  _objc_retain(param_4);
  func_0x00010c09fac0(uVar3);
  if (puStack_88[5] != 0) {
    uVar4 = *(undefined8 *)(param_2 + 8);
    puVar1 = PTR_PTR_1126b81f8;
    func_0x00010c289560(PTR_PTR_1126b81f8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010bfcecc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010be60300(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0(puStack_88[5]);
    func_0x00010befc000(param_1 - dVar5,uVar4);
    _objc_release(lVar2);
    _objc_release(uVar3);
    _objc_release(puVar1);
    uVar4 = *(undefined8 *)(param_2 + 8);
    puVar1 = PTR_PTR_1126b81f8;
    func_0x00010c289580(PTR_PTR_1126b81f8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010bfcecc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be60300(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(uVar4);
    _objc_release(param_2);
    _objc_release(uVar3);
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1053b55d4; end: 1053b5623;  */

void FUN_1053b55d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
  func_0x00010c0e00e0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60),PTR_s_removeObjectForKey__112628f18,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1053b5624; end: 1053b57a7; -[SCDeltaSyncGrapheneMetricsReporter updateRequestFailedForItemKey:client:errorStatus:] */

void FUN_1053b5624(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1053b57a8;
  puStack_68 = &UNK_110841f80;
  lStack_60 = param_1;
  _objc_retain(param_3);
  uStack_58 = param_3;
  _objc_retain(param_4);
  func_0x00010c09fac0(uVar5,param_2,&puStack_80);
  puVar1 = PTR_PTR_1126b81f8;
  func_0x00010c289540(PTR_PTR_1126b81f8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bfcecc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be60300(param_1,param_2,puVar1,uVar5,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar5);
  _objc_release(puVar1);
  lVar4 = lVar2;
  if (param_5 != 0) {
    lVar3 = param_5;
    func_0x00010c25d700(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ac460(lVar2,param_2,&PTR____CFConstantStringClassReference_110dd6078,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar3);
  }
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(uStack_58);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1053b57a8; end: 1053b57b3;  */

void FUN_1053b57a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60),PTR_s_removeObjectForKey__112628f18,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1053b57b4; end: 1053b5847; -[SCDeltaSyncGrapheneMetricsReporter duplexSyncTriggerForType:] */

void FUN_1053b57b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b81f8;
  func_0x00010bf8afe0(PTR_PTR_1126b81f8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010bfec2a0(*(undefined8 *)(param_1 + 8),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1053b5848; end: 1053b58ef; -[SCDeltaSyncGrapheneMetricsReporter _metric:groupKey:client:isInitialSync:] */

void FUN_1053b5848(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010be60300();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c013ce0();
  uVar2 = param_1;
  func_0x00010c2ac460(param_1,param_2,&PTR____CFConstantStringClassReference_110dd6058,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1053b58f0; end: 1053b5997; -[SCDeltaSyncGrapheneMetricsReporter .cxx_destruct] */

void FUN_1053b58f0(long param_1)

{
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



/* Entry: 1053b5998; end: 1053b59ff; +[SCDeltaSyncPutCallback onSuccess:onFailure:] */

void FUN_1053b5998(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c031720();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1053b5a00; end: 1053b5aab; -[SCDeltaSyncPutCallback initWithOnSuccess:onFailure:] */

undefined1 *
FUN_1053b5a00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e7db0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1053b5aac; end: 1053b5abb; -[SCDeltaSyncPutCallback onSuccess:] */

void FUN_1053b5aac(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001053b5ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),param_3);
  return;
}



/* Entry: 1053b5abc; end: 1053b5acb; -[SCDeltaSyncPutCallback onError:] */

void FUN_1053b5abc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001053b5ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))(*(long *)(param_1 + 0x10),param_3);
  return;
}



/* Entry: 1053b5acc; end: 1053b5afb; -[SCDeltaSyncPutCallback .cxx_destruct] */

void FUN_1053b5acc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053b5afc; end: 1053b5b63; +[SCDeltaSyncUpdateCallback onSuccess:onFailure:] */

void FUN_1053b5afc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c031720();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1053b5b64; end: 1053b5c0f; -[SCDeltaSyncUpdateCallback initWithOnSuccess:onFailure:] */

undefined1 *
FUN_1053b5b64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e7db8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1053b5c10; end: 1053b5c1f; -[SCDeltaSyncUpdateCallback onSuccess:] */

void FUN_1053b5c10(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001053b5c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),param_3);
  return;
}



/* Entry: 1053b5c20; end: 1053b5c2f; -[SCDeltaSyncUpdateCallback onError:] */

void FUN_1053b5c20(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001053b5c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))(*(long *)(param_1 + 0x10),param_3);
  return;
}



/* Entry: 1053b5c30; end: 1053b5c5f; -[SCDeltaSyncUpdateCallback .cxx_destruct] */

void FUN_1053b5c30(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053b5c60; end: 1053b5c67; -[SCSpartaService processLogInSyncData:] */

void FUN_1053b5c60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c114eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_processLogInSyncData__112622dc8);
  return;
}



/* Entry: 1053b5c68; end: 1053b5c6f; -[SCSpartaService observeLoginComplete:] */

void FUN_1053b5c68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e0d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_observeLoginComplete__112615d70);
  return;
}



/* Entry: 1053b5c70; end: 1053b5c77; -[SCSpartaService hasSynced:] */

void FUN_1053b5c70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfdd150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hasSynced__1125d4e10);
  return;
}



/* Entry: 1053b5c78; end: 1053b5c87; -[SCSpartaService putItem:client:] */

void FUN_1053b5c78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be85050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__putItem_conditions_client__11257edb0,param_3,
             PTR____NSArray0__struct_11034ab48,param_4);
  return;
}



/* Entry: 1053b5c88; end: 1053b5d13; -[SCSpartaService putLargerValueItem:client:] */

void FUN_1053b5c88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x0001053af11c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be85040(param_1,param_2,param_3,uVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1053b5d14; end: 1053b5f5b; -[SCSpartaService updateItemKey:addValue:client:] */

void FUN_1053b5d14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  func_0x00010c2893e0(*(undefined8 *)(param_1 + 0x18));
  _objc_initWeak(auStack_68,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bdfac00(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b8200;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1053b5f5c;
  puStack_90 = &UNK_110881d40;
  _objc_retain(param_3);
  uStack_88 = param_3;
  _objc_retain(puVar1);
  puStack_80 = puVar1;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_5);
  uStack_78 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_copyWeak(auStack_b0,auStack_68);
  _objc_retain(puVar1);
  func_0x00010c0e6d00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c283220(uVar3);
  _objc_release(puVar2);
  _objc_release(param_1);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_b0);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_release(puStack_80);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1053b5f5c; end: 1053b6067;  */

void FUN_1053b5f5c(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  
  func_0x0001053ae7ec(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b8148;
  _objc_alloc(PTR_PTR_1126b8148);
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_new(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  func_0x00010bfcf560(param_2);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  uVar3 = param_2;
  func_0x00010c0ebb00(param_2);
  func_0x00010bf655e0((double)uVar3,puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0202a0(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar2);
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28));
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c289400(*(undefined8 *)(param_1 + 0x18));
  }
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1053b6068; end: 1053b617b;  */

void FUN_1053b6068(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c252d60(param_2);
  _objc_release(param_2);
  func_0x00010bed79a0(lVar1);
  func_0x00010bf99240(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x30));
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bf3ec40(puVar2);
    func_0x00010c0df780(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2893a0(uVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1053b617c; end: 1053b6183; -[SCSpartaService shutdown] */

void FUN_1053b617c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23b4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_shutdown_11266c760);
  return;
}



/* Entry: 1053b6184; end: 1053b618b; -[SCSpartaService clearSyncTokenForGroupKey:] */

void FUN_1053b6184(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3c2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_clearSyncTokenForGroupKey__1125aca50);
  return;
}



/* Entry: 1053b618c; end: 1053b6193; -[SCSpartaService syncGroupWithKey:client:processor:] */

void FUN_1053b618c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c266050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_syncGroupWithKey_client_processo_112677238);
  return;
}



/* Entry: 1053b6194; end: 1053b619b; -[SCSpartaService processLogout:] */

void FUN_1053b6194(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c114ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_processLogout__112622dd0);
  return;
}



/* Entry: 1053b619c; end: 1053b63fb; -[SCSpartaService _putItem:conditions:client:] */

void FUN_1053b619c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  func_0x00010c11c8c0(*(undefined8 *)(param_1 + 0x18));
  _objc_initWeak(auStack_78,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bdfabc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b8208;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_1053b63fc;
  puStack_a0 = &UNK_110881da0;
  _objc_retain(param_3);
  uStack_98 = param_3;
  _objc_retain(puVar1);
  puStack_90 = puVar1;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(param_5);
  uStack_88 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_copyWeak(auStack_c0,auStack_78);
  _objc_retain(puVar1);
  func_0x00010c0e6d00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf45d40(uVar3);
  _objc_release(puVar2);
  _objc_release(param_1);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_c0);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(puStack_90);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1053b63fc; end: 1053b65ff;  */

void FUN_1053b63fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_1053ae748(param_2);
  puVar1 = PTR_PTR_1126b8148;
  _objc_alloc(PTR_PTR_1126b8148);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c084700(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c118b40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0896a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0202a0(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28));
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c11c900(*(undefined8 *)(param_1 + 0x18));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053b6600; end: 1053b6707; -[SCSpartaService _deltaforcePutRequestForItem:conditions:] */

void FUN_1053b6600(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  FUN_1053aefac(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b80e0;
  _objc_alloc(PTR_PTR_1126b80e0);
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008240(puVar2);
  func_0x00010c044a60(puVar1);
  _objc_release(puVar2);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x000100504554(param_4,&PTR___NSConcreteGlobalBlock_110881df0);
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126b80a0;
  _objc_alloc(PTR_PTR_1126b80a0);
  func_0x00010c01fc80();
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1053b6708; end: 1053b67a7;  */

void FUN_1053b6708(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b8090;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
  uVar3 = param_2;
  func_0x00010bf63640(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c008240(puVar2);
  func_0x00010c0449e0(puVar1);
  _objc_release(puVar2);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053b67a8; end: 1053b6ab3; -[SCSpartaService _deltaforceUpdateRequestForItemKey:addValue:] */

undefined *
FUN_1053b67a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  
  puVar1 = PTR_PTR_1126b8180;
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b8210;
  func_0x00010c0cb140(PTR_PTR_1126b8210);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167a40(puVar1);
  _objc_release(puVar2);
  puVar3 = PTR_PTR_1126b8090;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
  puVar4 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008240(puVar2);
  func_0x00010c0449e0();
  _objc_release(puVar2);
  _objc_release(puVar4);
  uVar5 = param_3;
  func_0x00010bfcecc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c0f5860(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  FUN_1053aeb94(uVar5,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  puVar4 = PTR_PTR_1126b80e8;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
  uVar5 = uVar7;
  func_0x00010bf63640(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008240(puVar2);
  func_0x00010c044a80();
  _objc_release(puVar2);
  _objc_release(uVar5);
  uVar5 = param_3;
  FUN_1053af43c(param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar8 = PTR_PTR_1126b80f8;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
  uVar6 = uVar5;
  func_0x00010bf63640(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008240(puVar2);
  func_0x00010c044ae0();
  _objc_release(puVar2);
  _objc_release(uVar6);
  puVar9 = PTR_PTR_1126b8120;
  _objc_alloc(PTR_PTR_1126b8120);
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  func_0x00010c020260(puVar9);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(uVar7);
  _objc_release(puVar3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return puVar9;
  }
  ___stack_chk_fail();
  if ((undefined *)0x9 < puVar2) {
    puVar2 = (undefined *)0xa;
  }
  return puVar2;
}



/* Entry: 1053b6ab4; end: 1053b6ac3; -[SCSpartaService _putErrorFromStatusCode:] */

ulong FUN_1053b6ab4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (9 < param_3) {
    param_3 = 10;
  }
  return param_3;
}



/* Entry: 1053b6ac4; end: 1053b6ad3; -[SCSpartaService _updateErrorFromStatusCode:] */

ulong FUN_1053b6ac4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (9 < param_3) {
    param_3 = 10;
  }
  return param_3;
}



/* Entry: 1053b6ad4; end: 1053b6b0f; -[SCSpartaService .cxx_destruct] */

void FUN_1053b6ad4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053b6b10; end: 1053b6b37;  */

void FUN_1053b6b10(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1053b6b38; end: 1053b6ba7;  */

undefined8 * FUN_1053b6b38(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110881e20;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1053b6ba8; end: 1053b73f7; -[SCDeltaSyncTokenRepository syncTokenForGroupKey:docObjectFetcher:] */

void FUN_1053b6ba8(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined4 uStack_540;
  undefined1 uStack_539;
  long lStack_538;
  long lStack_530;
  undefined8 uStack_528;
  long lStack_520;
  long lStack_518;
  undefined **ppuStack_508;
  undefined4 uStack_500;
  undefined4 uStack_4f0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  long lStack_4c0;
  long lStack_4b8;
  undefined8 uStack_4b0;
  long *plStack_4a8;
  long *plStack_4a0;
  undefined1 uStack_491;
  undefined **ppuStack_490;
  undefined4 uStack_488;
  undefined2 uStack_478;
  byte bStack_476;
  byte bStack_475;
  undefined1 *puStack_458;
  undefined ***pppuStack_450;
  long lStack_448;
  long lStack_440;
  undefined8 uStack_438;
  long *plStack_430;
  long *plStack_428;
  undefined **ppuStack_420;
  undefined4 uStack_418;
  undefined4 uStack_408;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined *puStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  long *plStack_3c0;
  long *plStack_3b8;
  undefined1 uStack_3a9;
  undefined **ppuStack_3a8;
  undefined4 uStack_3a0;
  undefined2 uStack_390;
  byte bStack_38e;
  byte bStack_38d;
  undefined1 *puStack_370;
  undefined ***pppuStack_368;
  undefined *puStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  long *plStack_348;
  long *plStack_340;
  undefined **ppuStack_338;
  undefined4 uStack_330;
  undefined4 uStack_320;
  long lStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  long *plStack_2d8;
  long *plStack_2d0;
  undefined1 uStack_2c1;
  undefined **ppuStack_2c0;
  undefined4 uStack_2b8;
  undefined2 uStack_2a8;
  undefined2 uStack_2a6;
  undefined1 *puStack_288;
  undefined ***pppuStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long *plStack_260;
  long *plStack_258;
  undefined **ppuStack_250;
  undefined4 uStack_248;
  undefined2 uStack_238;
  byte bStack_236;
  byte bStack_235;
  undefined ***pppuStack_218;
  undefined ***pppuStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long *plStack_1f0;
  long *plStack_1e8;
  undefined **ppuStack_1e0;
  undefined4 uStack_1d8;
  undefined2 uStack_1c8;
  byte bStack_1c6;
  byte bStack_1c5;
  undefined ***pppuStack_1a8;
  undefined ***pppuStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long *plStack_180;
  long *plStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined8 *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined4 uStack_8c;
  code *pcStack_88;
  undefined8 uStack_80;
  long alStack_78 [3];
  
  alStack_78[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_c8 = 0;
  uStack_b8 = 0x3032000000;
  pcStack_b0 = FUN_1053b6b10;
  uStack_a8 = 0x1053b6b20;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110daafd8;
  uStack_e8 = 0;
  uStack_d8 = 0x2020000000;
  uStack_d0 = 0;
  lVar7 = param_3;
  puStack_e0 = &uStack_e8;
  puStack_c0 = &uStack_c8;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_1053b73f8;
  puStack_f8 = &UNK_110864a68;
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  pcStack_128 = FUN_1053b7430;
  puStack_120 = &UNK_110864a98;
  puStack_118 = &uStack_e8;
  puStack_f0 = &uStack_c8;
  func_0x00010c0bee60();
  _objc_release(lVar7);
  _objc_opt_class(PTR_PTR_1126b8218);
  if (param_4 == 0) {
    uStack_140 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_170,param_4);
  }
  puVar2 = &uStack_2c1;
  func_0x000100c17874();
  lVar7 = param_3;
  func_0x00010c087060();
  _objc_retainAutoreleasedReturnValue();
  uStack_330 = 0xf;
  uStack_320 = 0x100;
  _objc_retain();
  ppuStack_338 = &PTR_SUB_110862760;
  uStack_2f8 = 0;
  uStack_300 = 0;
  uStack_2e8 = 0;
  puStack_2f0 = (undefined *)0x0;
  plStack_2d8 = (long *)0x0;
  uStack_2e0 = 0;
  plStack_2d0 = (long *)0x0;
  uStack_2a6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_2b8 = 10;
  uStack_2a8 = 0x100;
  ppuStack_2c0 = &PTR_FUN_110862700;
  pppuStack_280 = &ppuStack_338;
  uStack_270 = 0;
  puStack_278 = (undefined *)0x0;
  plStack_260 = (long *)0x0;
  uStack_268 = 0;
  plStack_258 = (long *)0x0;
  puVar3 = &uStack_3a9;
  lStack_308 = lVar7;
  puStack_288 = puVar2;
  func_0x000100c178d8();
  uStack_418 = 0xf;
  uStack_408 = 0x100;
  uVar9 = puStack_c0[5];
  _objc_retain(uVar9);
  ppuStack_420 = &PTR_SUB_110862760;
  uStack_3e0 = 0;
  uStack_3e8 = 0;
  uStack_3d0 = 0;
  puStack_3d8 = (undefined *)0x0;
  plStack_3c0 = (long *)0x0;
  uStack_3c8 = 0;
  plStack_3b8 = (long *)0x0;
  bStack_38e = puVar3[0x1a];
  bStack_38d = puVar3[0x1b];
  uStack_3a0 = 10;
  uStack_390 = 0x100;
  ppuStack_3a8 = &PTR_FUN_110862700;
  pppuStack_368 = &ppuStack_420;
  pppuStack_210 = &ppuStack_3a8;
  uStack_358 = 0;
  puStack_360 = (undefined *)0x0;
  plStack_348 = (long *)0x0;
  uStack_350 = 0;
  plStack_340 = (long *)0x0;
  bStack_236 = (byte)uStack_2a6 | bStack_38e;
  bStack_235 = uStack_2a6._1_1_ & bStack_38d;
  uStack_248 = 4;
  uStack_238 = 0x100;
  ppuStack_250 = &PTR_SUB_1108629c8;
  pppuStack_218 = &ppuStack_2c0;
  plStack_1e8 = (long *)0x0;
  plStack_1f0 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  lStack_208 = 0;
  puVar2 = &uStack_491;
  uStack_3f0 = uVar9;
  puStack_370 = puVar3;
  func_0x000100c1793c();
  uStack_500 = 0xf;
  uStack_4f0 = 0x100;
  uStack_4d8 = puStack_e0[3];
  ppuStack_508 = &PTR_FUN_110862958;
  plStack_4a0 = (long *)0x0;
  plStack_4a8 = (long *)0x0;
  uStack_4b0 = 0;
  lStack_4b8 = 0;
  lStack_4c0 = 0;
  uStack_4c8 = 0;
  uStack_4d0 = 0;
  bStack_476 = puVar2[0x1a];
  bStack_475 = puVar2[0x1b];
  uStack_488 = 10;
  uStack_478 = 0x100;
  ppuStack_490 = &PTR_FUN_110881e20;
  pppuStack_450 = &ppuStack_508;
  lStack_440 = 0;
  lStack_448 = 0;
  plStack_430 = (long *)0x0;
  uStack_438 = 0;
  plStack_428 = (long *)0x0;
  bStack_1c6 = bStack_236 | bStack_476;
  bStack_1c5 = bStack_235 & bStack_475;
  uStack_1d8 = 4;
  uStack_1c8 = 0x100;
  ppuStack_1e0 = &PTR_SUB_1108629c8;
  pppuStack_1a8 = &ppuStack_250;
  pppuStack_1a0 = &ppuStack_490;
  plStack_178 = (long *)0x0;
  plStack_180 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  lStack_198 = 0;
  puVar3 = &uStack_539;
  puStack_458 = puVar2;
  FUN_1053b91f8();
  uStack_98 = *(undefined8 *)(puVar3 + 0x10);
  uStack_90 = puVar3[0x19];
  uStack_8f = puVar3[0x18];
  uStack_80 = *(undefined8 *)(puVar3 + 0x28);
  uStack_8c = 1;
  pcStack_88 = FUN_1053b8340;
  lStack_530 = 0;
  uStack_528 = 0;
  lStack_538 = 0;
  func_0x000100c435d0(&lStack_538,&uStack_98,alStack_78,1);
  func_0x000100c436b8(&lStack_520,&lStack_538);
  uStack_540 = 1;
  puVar4 = &uStack_170;
  func_0x0001000e77a0(puVar4,&ppuStack_1e0,&lStack_520,&uStack_540);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_520 != 0) {
    lStack_518 = lStack_520;
    __ZdlPv();
  }
  if (lStack_538 != 0) {
    lStack_530 = lStack_538;
    __ZdlPv();
  }
  plVar1 = plStack_178;
  ppuStack_1e0 = &PTR_SUB_1108629c8;
  plStack_178 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_180;
  plStack_180 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_198 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_428;
  ppuStack_490 = &PTR_FUN_110881e20;
  plStack_428 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_430;
  plStack_430 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_448 != 0) {
    lStack_440 = lStack_448;
    __ZdlPv();
  }
  plVar1 = plStack_4a0;
  ppuStack_508 = &PTR_FUN_110862958;
  plStack_4a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_4a8;
  plStack_4a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_4c0 != 0) {
    lStack_4b8 = lStack_4c0;
    __ZdlPv();
  }
  plVar1 = plStack_1e8;
  ppuStack_250 = &PTR_SUB_1108629c8;
  plStack_1e8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1f0;
  plStack_1f0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_208 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_340;
  puVar5 = (undefined8 *)&UNK_1108626f0;
  ppuStack_3a8 = &PTR_FUN_110862700;
  plStack_340 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_348;
  plStack_348 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_490 = &puStack_360;
  func_0x000100105004(&ppuStack_490);
  plVar1 = plStack_3b8;
  ppuStack_420 = &PTR_SUB_110862760;
  plStack_3b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_3c0;
  plStack_3c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_490 = &puStack_3d8;
  func_0x000100105004(&ppuStack_490);
  _objc_release(uStack_3f0);
  plVar1 = plStack_258;
  ppuStack_2c0 = &PTR_FUN_110862700;
  plStack_258 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_260;
  plStack_260 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_3a8 = &puStack_278;
  func_0x000100105004(&ppuStack_3a8);
  plVar1 = plStack_2d0;
  ppuStack_338 = &PTR_SUB_110862760;
  plStack_2d0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_2d8;
  plStack_2d8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_3a8 = &puStack_2f0;
  func_0x000100105004(&ppuStack_3a8);
  _objc_release(lStack_308);
  _objc_release(lVar7);
  func_0x0001000e76e0(&uStack_148);
  _objc_release(uStack_158);
  _objc_release(uStack_160);
  puVar8 = puVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    puVar5 = puVar4;
    func_0x00010bfb1920(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    func_0x00010bf4df40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  __Block_object_dispose(&uStack_e8,8);
  __Block_object_dispose(&uStack_c8,8);
  _objc_release(ppuStack_a0);
  _objc_release(param_4);
  lVar7 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_78[0]) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar4);
  __Block_object_dispose(&uStack_e8,8);
  uVar6 = 8;
  __Block_object_dispose(&uStack_c8);
  _objc_release(ppuStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(uVar6);
  lVar7 = *(long *)(*(long *)(lVar7 + 0x20) + 8);
  uVar9 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined8 *)(lVar7 + 0x28) = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 1053b73f8; end: 1053b742f;  */

void FUN_1053b73f8(long param_1,undefined8 param_2)

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



/* Entry: 1053b7430; end: 1053b743f;  */

void FUN_1053b7430(long param_1,undefined8 param_2)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 1053b7440; end: 1053b769f; -[SCDeltaSyncTokenRepository persistSyncToken:forGroupKey:version:transactionContext:] */

void FUN_1053b7440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined **ppuStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_1053b6b10;
  uStack_60 = 0x1053b6b20;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110daafd8;
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x2020000000;
  uStack_88 = 0;
  uVar1 = param_4;
  func_0x00010bfe5ec0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bee60();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b8218;
  _objc_alloc(PTR_PTR_1126b8218);
  uVar1 = param_4;
  func_0x00010c087060(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0211e0(puVar2);
  _objc_release(uVar1);
  puVar3 = puVar2;
  FUN_1053b9964(puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_a0,8);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(ppuStack_58);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1053b76a0; end: 1053b76d7;  */

void FUN_1053b76a0(long param_1,undefined8 param_2)

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



/* Entry: 1053b76d8; end: 1053b76e7;  */

void FUN_1053b76d8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 1053b76e8; end: 1053b81b7; -[SCDeltaSyncTokenRepository clearSyncTokenForGroupKey:version:transactionContext:] */

void FUN_1053b76e8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined ***pppuVar11;
  undefined ***pppuStack_5e0;
  undefined4 uStack_5d4;
  long lStack_5d0;
  long lStack_5c8;
  undefined8 uStack_5c0;
  undefined **ppuStack_5b8;
  undefined4 uStack_5b0;
  undefined4 uStack_5a0;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  long lStack_570;
  long lStack_568;
  undefined8 uStack_560;
  long *plStack_558;
  long *plStack_550;
  undefined1 uStack_541;
  undefined **ppuStack_540;
  undefined4 uStack_538;
  undefined2 uStack_528;
  byte bStack_526;
  byte bStack_525;
  undefined1 *puStack_508;
  undefined ***pppuStack_500;
  long lStack_4f8;
  long lStack_4f0;
  undefined8 uStack_4e8;
  long *plStack_4e0;
  long *plStack_4d8;
  undefined **ppuStack_4d0;
  undefined4 uStack_4c8;
  undefined4 uStack_4b8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined *puStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  long *plStack_470;
  long *plStack_468;
  undefined1 uStack_459;
  undefined8 uStack_458;
  undefined4 uStack_450;
  undefined2 uStack_440;
  byte bStack_43e;
  byte bStack_43d;
  undefined1 *puStack_420;
  undefined ***pppuStack_418;
  undefined *puStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  long *plStack_3f8;
  long *plStack_3f0;
  undefined **ppuStack_3e8;
  undefined **ppuStack_3e0;
  undefined8 uStack_3d8;
  undefined4 uStack_3d0;
  long lStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  long *plStack_388;
  long *plStack_380;
  undefined1 uStack_371;
  undefined **ppuStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined1 *puStack_338;
  undefined ***pppuStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long *plStack_310;
  long *plStack_308;
  undefined **ppuStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c0;
  long lStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined **ppuStack_278;
  undefined4 uStack_270;
  undefined4 uStack_260;
  long lStack_248;
  undefined ***pppuStack_240;
  undefined8 *puStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long *plStack_218;
  long *plStack_210;
  undefined **ppuStack_208;
  undefined4 uStack_200;
  undefined2 uStack_1f0;
  undefined2 uStack_1ee;
  undefined ***pppuStack_1d0;
  undefined ***pppuStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined8 *puStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined8 uStack_108;
  undefined **ppuStack_100;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  uStack_128 = 0;
  uStack_118 = 0x3032000000;
  pcStack_110 = FUN_1053b6b10;
  uStack_108 = 0x1053b6b20;
  ppuStack_100 = &PTR____CFConstantStringClassReference_110daafd8;
  uStack_148 = 0;
  uStack_138 = 0x2020000000;
  uStack_130 = 0;
  lVar9 = param_3;
  puStack_140 = &uStack_148;
  puStack_120 = &uStack_128;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uStack_168 = 0xc2000000;
  pcStack_160 = FUN_1053b81b8;
  puStack_158 = &UNK_110864a68;
  puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_190 = 0xc2000000;
  pcStack_188 = FUN_1053b81f0;
  puStack_180 = &UNK_110864a98;
  puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_178 = &uStack_148;
  puStack_150 = &uStack_128;
  func_0x00010c0bee60();
  _objc_release(lVar9);
  if ((puStack_140[3] == 0) && (puStack_120[5] == 0)) {
    _objc_opt_class(PTR_PTR_1126b8218);
    if (param_5 == 0) {
      uStack_340 = 0;
      uStack_348 = 0;
      uStack_350 = 0;
      uStack_358 = 0;
      uStack_360 = 0;
      uStack_368 = 0;
      ppuStack_370 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_370,param_5);
    }
    pppuVar5 = &ppuStack_4d0;
    func_0x000100c17874();
    lVar9 = param_3;
    func_0x00010c087060();
    _objc_retainAutoreleasedReturnValue();
    uStack_270 = 0xf;
    uStack_260 = 0x100;
    _objc_retain();
    ppuStack_278 = &PTR_SUB_110862760;
    puStack_238 = (undefined8 *)0x0;
    pppuStack_240 = (undefined ***)0x0;
    uStack_228 = 0;
    puStack_230 = (undefined *)0x0;
    plStack_218 = (long *)0x0;
    uStack_220 = 0;
    plStack_210 = (long *)0x0;
    ppuStack_208 = &PTR_FUN_110862700;
    uStack_200 = 10;
    uStack_1f0 = 0x100;
    uStack_1ee = *(undefined2 *)((long)pppuVar5 + 0x1a);
    pppuStack_1c8 = &ppuStack_278;
    uStack_1b8 = 0;
    puStack_1c0 = (undefined *)0x0;
    plStack_1a8 = (long *)0x0;
    uStack_1b0 = 0;
    plStack_1a0 = (long *)0x0;
    ppuStack_3e8 = (undefined **)0x0;
    ppuStack_3e0 = (undefined **)0x0;
    uStack_3d8 = 0;
    uStack_458 = (undefined **)((ulong)uStack_458._4_4_ << 0x20);
    pppuStack_5e0 = &ppuStack_370;
    lStack_248 = lVar9;
    pppuStack_1d0 = pppuVar5;
    func_0x0001000e77a0(pppuStack_5e0,&ppuStack_208,&ppuStack_3e8,&uStack_458);
    _objc_retainAutoreleasedReturnValue();
    if (ppuStack_3e8 != (undefined **)0x0) {
      ppuStack_3e0 = ppuStack_3e8;
      __ZdlPv();
    }
    plVar1 = plStack_1a0;
    ppuStack_208 = &PTR_FUN_110862700;
    plStack_1a0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_1a8;
    plStack_1a8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    ppuStack_3e8 = &puStack_1c0;
    func_0x000100105004(&ppuStack_3e8);
    plVar1 = plStack_210;
    ppuStack_278 = &PTR_SUB_110862760;
    plStack_210 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_218;
    plStack_218 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    ppuStack_3e8 = &puStack_230;
    func_0x000100105004(&ppuStack_3e8);
    _objc_release(lStack_248);
    _objc_release(lVar9);
    func_0x0001000e76e0(&uStack_348);
    _objc_release(uStack_358);
    _objc_release(uStack_360);
    pppuVar5 = pppuStack_5e0;
    func_0x00010bf0a540();
    _objc_retainAutoreleasedReturnValue();
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    lStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2a8 = 0;
    plStack_2b0 = (long *)0x0;
    _objc_retain();
    pppuVar6 = pppuVar5;
    func_0x00010bf52a60();
    pppuVar4 = pppuVar5;
    if (pppuVar6 != (undefined ***)0x0) {
      lVar9 = *plStack_2b0;
      do {
        pppuVar11 = (undefined ***)0x0;
        do {
          if (*plStack_2b0 != lVar9) {
            _objc_enumerationMutation(pppuVar5);
          }
          puVar7 = PTR_PTR_1126b8220;
          FUN_1053b98f0(PTR_PTR_1126b8220,*(undefined8 *)(lStack_2b8 + (long)pppuVar11 * 8));
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25ed40(param_5);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar7);
          pppuVar11 = (undefined ***)((long)pppuVar11 + 1);
        } while (pppuVar6 != pppuVar11);
        pppuVar6 = pppuVar5;
        func_0x00010bf52a60();
      } while (pppuVar6 != (undefined ***)0x0);
    }
  }
  else {
    _objc_opt_class(PTR_PTR_1126b8218);
    if (param_5 == 0) {
      uStack_2d0 = 0;
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      uStack_2d8 = 0;
      uStack_2e0 = 0;
      uStack_2f8 = 0;
      ppuStack_300 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_300,param_5);
    }
    puVar2 = &uStack_371;
    func_0x000100c17874();
    lVar9 = param_3;
    func_0x00010c087060();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_3e0 = (undefined **)CONCAT44(ppuStack_3e0._4_4_,0xf);
    uStack_3d0 = 0x100;
    _objc_retain();
    ppuStack_3e8 = &PTR_SUB_110862760;
    uStack_3a8 = 0;
    uStack_3b0 = 0;
    uStack_398 = 0;
    uStack_3a0 = 0;
    plStack_388 = (long *)0x0;
    uStack_390 = 0;
    plStack_380 = (long *)0x0;
    uStack_368 = CONCAT44(uStack_368._4_4_,10);
    uStack_358._0_4_ = CONCAT22(*(undefined2 *)(puVar2 + 0x1a),0x100);
    ppuStack_370 = &PTR_FUN_110862700;
    uStack_320 = 0;
    uStack_328 = 0;
    plStack_310 = (long *)0x0;
    uStack_318 = 0;
    plStack_308 = (long *)0x0;
    puVar3 = &uStack_459;
    lStack_3b8 = lVar9;
    puStack_338 = puVar2;
    pppuStack_330 = &ppuStack_3e8;
    func_0x000100c178d8();
    uStack_4c8 = 0xf;
    uStack_4b8 = 0x100;
    uVar10 = puStack_120[5];
    _objc_retain(uVar10);
    ppuStack_4d0 = &PTR_SUB_110862760;
    uStack_490 = 0;
    uStack_498 = 0;
    uStack_480 = 0;
    puStack_488 = (undefined *)0x0;
    plStack_470 = (long *)0x0;
    uStack_478 = 0;
    plStack_468 = (long *)0x0;
    bStack_43e = puVar3[0x1a];
    bStack_43d = puVar3[0x1b];
    uStack_450 = 10;
    uStack_440 = 0x100;
    uStack_458 = &PTR_FUN_110862700;
    puStack_238 = &uStack_458;
    uStack_408 = 0;
    puStack_410 = (undefined *)0x0;
    plStack_3f8 = (long *)0x0;
    uStack_400 = 0;
    plStack_3f0 = (long *)0x0;
    uStack_270 = 4;
    uStack_260 = CONCAT13(uStack_358._3_1_ & bStack_43d,
                          CONCAT12(uStack_358._2_1_ | bStack_43e,0x100));
    ppuStack_278 = &PTR_SUB_1108629c8;
    pppuStack_240 = &ppuStack_370;
    plStack_210 = (long *)0x0;
    uStack_228 = 0;
    puStack_230 = (undefined *)0x0;
    plStack_218 = (long *)0x0;
    uStack_220 = 0;
    puVar2 = &uStack_541;
    uStack_4a0 = uVar10;
    puStack_420 = puVar3;
    pppuStack_418 = &ppuStack_4d0;
    func_0x000100c1793c();
    uStack_588 = puStack_140[3];
    uStack_5b0 = 0xf;
    uStack_5a0 = 0x100;
    ppuStack_5b8 = &PTR_FUN_110862958;
    uStack_578 = 0;
    uStack_580 = 0;
    lStack_568 = 0;
    lStack_570 = 0;
    plStack_558 = (long *)0x0;
    uStack_560 = 0;
    plStack_550 = (long *)0x0;
    bStack_526 = puVar2[0x1a];
    bStack_525 = puVar2[0x1b];
    uStack_538 = 10;
    uStack_528 = 0x100;
    ppuStack_540 = &PTR_FUN_110881e20;
    plStack_4d8 = (long *)0x0;
    lStack_4f0 = 0;
    lStack_4f8 = 0;
    plStack_4e0 = (long *)0x0;
    uStack_4e8 = 0;
    uStack_200 = 4;
    uStack_1f0 = 0x100;
    uStack_1ee = CONCAT11(uStack_260._3_1_ & bStack_525,uStack_260._2_1_ | bStack_526);
    ppuStack_208 = &PTR_SUB_1108629c8;
    pppuStack_1d0 = &ppuStack_278;
    pppuStack_1c8 = &ppuStack_540;
    plStack_1a0 = (long *)0x0;
    plStack_1a8 = (long *)0x0;
    uStack_1b0 = 0;
    uStack_1b8 = 0;
    puStack_1c0 = (undefined *)0x0;
    lStack_5d0 = 0;
    lStack_5c8 = 0;
    uStack_5c0 = 0;
    uStack_5d4 = 0;
    pppuStack_5e0 = &ppuStack_300;
    puStack_508 = puVar2;
    pppuStack_500 = &ppuStack_5b8;
    func_0x0001000e77a0(pppuStack_5e0,&ppuStack_208,&lStack_5d0,&uStack_5d4);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_5d0 != 0) {
      lStack_5c8 = lStack_5d0;
      __ZdlPv();
    }
    plVar1 = plStack_1a0;
    ppuStack_208 = &PTR_SUB_1108629c8;
    plStack_1a0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_1a8;
    plStack_1a8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (puStack_1c0 != (undefined *)0x0) {
      __ZdlPv();
    }
    plVar1 = plStack_4d8;
    ppuStack_540 = &PTR_FUN_110881e20;
    plStack_4d8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_4e0;
    plStack_4e0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_4f8 != 0) {
      lStack_4f0 = lStack_4f8;
      __ZdlPv();
    }
    plVar1 = plStack_550;
    ppuStack_5b8 = &PTR_FUN_110862958;
    plStack_550 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_558;
    plStack_558 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_570 != 0) {
      lStack_568 = lStack_570;
      __ZdlPv();
    }
    plVar1 = plStack_210;
    ppuStack_278 = &PTR_SUB_1108629c8;
    plStack_210 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_218;
    plStack_218 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (puStack_230 != (undefined *)0x0) {
      __ZdlPv();
    }
    plVar1 = plStack_3f0;
    uStack_458 = &PTR_FUN_110862700;
    plStack_3f0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_3f8;
    plStack_3f8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    ppuStack_540 = &puStack_410;
    func_0x000100105004(&ppuStack_540);
    plVar1 = plStack_468;
    ppuStack_4d0 = &PTR_SUB_110862760;
    plStack_468 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_470;
    plStack_470 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    ppuStack_540 = &puStack_488;
    func_0x000100105004(&ppuStack_540);
    _objc_release(uStack_4a0);
    plVar1 = plStack_308;
    ppuStack_370 = &PTR_FUN_110862700;
    plStack_308 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_310;
    plStack_310 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    uStack_458 = (undefined **)&uStack_328;
    func_0x000100105004(&uStack_458);
    plVar1 = plStack_380;
    ppuStack_3e8 = &PTR_SUB_110862760;
    plStack_380 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_388;
    plStack_388 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    uStack_458 = (undefined **)&uStack_3a0;
    func_0x000100105004(&uStack_458);
    _objc_release(lStack_3b8);
    _objc_release(lVar9);
    func_0x0001000e76e0(&uStack_2d8);
    _objc_release(uStack_2e8);
    _objc_release(uStack_2f0);
    pppuVar4 = pppuStack_5e0;
    func_0x00010bfb1920(pppuStack_5e0);
    _objc_retainAutoreleasedReturnValue();
    pppuVar5 = (undefined ***)PTR_PTR_1126b8220;
    FUN_1053b98f0(PTR_PTR_1126b8220,pppuVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25ed40(param_5);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(pppuVar5);
  _objc_release(pppuVar4);
  _objc_release(pppuStack_5e0);
  __Block_object_dispose(&uStack_148,8);
  __Block_object_dispose(&uStack_128,8);
  _objc_release(ppuStack_100);
  _objc_release(param_5);
  lVar9 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    ___stack_chk_fail();
    _objc_release(pppuVar5);
    _objc_release(pppuVar5);
    _objc_release(pppuStack_5e0);
    __Block_object_dispose(&uStack_148,8);
    uVar8 = 8;
    __Block_object_dispose(&uStack_128);
    _objc_release(ppuStack_100);
    _objc_release(param_5);
    _objc_release(param_3);
    __Unwind_Resume();
    __Unwind_Resume();
    _objc_retain(uVar8);
    lVar9 = *(long *)(*(long *)(lVar9 + 0x20) + 8);
    uVar10 = *(undefined8 *)(lVar9 + 0x28);
    *(undefined8 *)(lVar9 + 0x28) = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar10);
    return;
  }
  return;
}



/* Entry: 1053b81b8; end: 1053b81ef;  */

void FUN_1053b81b8(long param_1,undefined8 param_2)

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



/* Entry: 1053b81f0; end: 1053b81ff;  */

void FUN_1053b81f0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 1053b8200; end: 1053b8293;  */

undefined8 * FUN_1053b8200(undefined8 *param_1,int param_2,long *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  
  lVar4 = *param_3;
  uVar1 = *(undefined1 *)(lVar4 + 0x19);
  uVar2 = *(undefined1 *)(lVar4 + 0x1a);
  if (param_2 == 0) {
    bVar5 = 1;
  }
  else {
    bVar5 = *(byte *)(lVar4 + 0x1b);
  }
  *(int *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x19) = uVar1;
  *(undefined1 *)((long)param_1 + 0x1a) = uVar2;
  *(byte *)((long)param_1 + 0x1b) = bVar5 & 1;
  *param_1 = &PTR_FUN_110881e20;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 1053b8294; end: 1053b832b;  */

undefined8 * FUN_1053b8294(undefined8 *param_1,undefined4 param_2,long *param_3,long *param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_3;
  uVar2 = *(undefined2 *)(lVar4 + 0x19);
  uVar1 = *(undefined1 *)(lVar4 + 0x1b);
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined2 *)((long)param_1 + 0x19) = uVar2;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar1;
  *param_1 = &PTR_FUN_110881e20;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  func_0x0001006581c0(param_1 + 9,*param_4,param_4[1],param_4[1] - *param_4 >> 3);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 1053b832c; end: 1053b833f;  */

undefined4 FUN_1053b832c(undefined8 param_1,long param_2,code *param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bStack_42;
  byte bStack_41;
  
  puVar2 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  _objc_retain();
  _objc_retain(param_2);
  puVar3 = puVar2;
  (*param_3)(puVar2,&bStack_41);
  lVar4 = param_2;
  (*param_3)(param_2,&bStack_42);
  uVar5 = 2;
  if (bStack_42 == 0) {
    uVar5 = 0;
  }
  if (bStack_41 == 0) {
    uVar5 = 1;
  }
  uVar6 = 1;
  if ((long)puVar3 <= lVar4) {
    uVar6 = 2;
  }
  uVar1 = 0;
  if (lVar4 <= (long)puVar3) {
    uVar1 = uVar6;
  }
  uVar6 = uVar5;
  if ((bStack_42 & 1) == 0) {
    uVar6 = uVar1;
  }
  if ((bStack_41 & 1) == 0) {
    uVar5 = uVar6;
  }
  _objc_release(param_2);
  _objc_release(puVar2);
  return uVar5;
}



/* Entry: 1053b8340; end: 1053b83ef;  */

undefined4 FUN_1053b8340(long param_1,long param_2,code *param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bStack_32;
  byte bStack_31;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar2 = param_1;
  (*param_3)(param_1,&bStack_31);
  lVar3 = param_2;
  (*param_3)(param_2,&bStack_32);
  uVar4 = 2;
  if (bStack_32 == 0) {
    uVar4 = 0;
  }
  if (bStack_31 == 0) {
    uVar4 = 1;
  }
  uVar5 = 1;
  if (lVar2 <= lVar3) {
    uVar5 = 2;
  }
  uVar1 = 0;
  if (lVar3 <= lVar2) {
    uVar1 = uVar5;
  }
  uVar5 = uVar4;
  if ((bStack_32 & 1) == 0) {
    uVar5 = uVar1;
  }
  if ((bStack_31 & 1) == 0) {
    uVar4 = uVar5;
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 1053b83f0; end: 1053b84d7; -[SCDeltaSyncResponse initWithIsFullSync:updates:deletions:latestSyncToken:] */

undefined1 *
FUN_1053b83f0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e7dc8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1053b84d8; end: 1053b84fb; -[SCDeltaSyncResponse copyWithZone:] */

undefined8 FUN_1053b84d8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1053b84fc; end: 1053b8583; -[SCDeltaSyncResponse hash] */

ulong * FUN_1053b84fc(long param_1,undefined8 param_2,ulong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar1;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1053b862c:
    puVar6 = (ulong *)0x1;
  }
  else {
    puVar6 = (ulong *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_1053b8638;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && ((char)puVar3[1] == (char)param_3[1])) {
      uVar5 = puVar3[2];
      if ((uVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)uVar5 != 0)) {
        uVar5 = puVar3[3];
        if ((uVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)uVar5 != 0)) {
          puVar6 = (ulong *)puVar3[4];
          if (puVar6 != (ulong *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_1053b8638;
          }
          goto LAB_1053b862c;
        }
      }
    }
    puVar6 = (ulong *)0x0;
  }
LAB_1053b8638:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 1053b8584; end: 1053b8653; -[SCDeltaSyncResponse isEqual:] */

long FUN_1053b8584(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1053b862c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1053b8638;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_1053b8638;
          }
          goto LAB_1053b862c;
        }
      }
    }
    lVar3 = 0;
  }
LAB_1053b8638:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1053b8654; end: 1053b865b; -[SCDeltaSyncResponse isFullSync] */

undefined1 FUN_1053b8654(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1053b865c; end: 1053b8663; -[SCDeltaSyncResponse updates] */

undefined8 FUN_1053b865c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1053b8664; end: 1053b866b; -[SCDeltaSyncResponse deletions] */

undefined8 FUN_1053b8664(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1053b866c; end: 1053b8673; -[SCDeltaSyncResponse latestSyncToken] */

undefined8 FUN_1053b866c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1053b8674; end: 1053b86af; -[SCDeltaSyncResponse .cxx_destruct] */

void FUN_1053b8674(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1053b86b0; end: 1053b8783; -[SCDeltaSyncJobContext initWithGroupKey:clientType:deltaSyncProcessor:] */

undefined1 *
FUN_1053b86b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e7dd0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
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



/* Entry: 1053b8784; end: 1053b87a7; -[SCDeltaSyncJobContext copyWithZone:] */

undefined8 FUN_1053b8784(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1053b87a8; end: 1053b8827; -[SCDeltaSyncJobContext hash] */

undefined8 * FUN_1053b87a8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1053b88c0:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1053b88cc;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_1053b88cc;
          }
          goto LAB_1053b88c0;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1053b88cc:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1053b8828; end: 1053b88e7; -[SCDeltaSyncJobContext isEqual:] */

long FUN_1053b8828(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1053b88c0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1053b88cc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_1053b88cc;
          }
          goto LAB_1053b88c0;
        }
      }
    }
    lVar3 = 0;
  }
LAB_1053b88cc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1053b88e8; end: 1053b88ef; -[SCDeltaSyncJobContext groupKey] */

undefined8 FUN_1053b88e8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1053b88f0; end: 1053b88f7; -[SCDeltaSyncJobContext clientType] */

undefined8 FUN_1053b88f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1053b88f8; end: 1053b88ff; -[SCDeltaSyncJobContext deltaSyncProcessor] */

undefined8 FUN_1053b88f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1053b8900; end: 1053b893b; -[SCDeltaSyncJobContext .cxx_destruct] */

void FUN_1053b8900(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053b893c; end: 1053b8967; +[SCGrapheneDeltaforceMetric fullSyncRequestCount] */

void FUN_1053b893c(void)

{
  _objc_alloc(PTR_PTR_1126b81f8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053b8968; end: 1053b8993; +[SCGrapheneDeltaforceMetric syncDatabaseOperationsTime] */

void FUN_1053b8968(void)

{
  _objc_alloc(PTR_PTR_1126b81f8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053b8994; end: 1053b89bf; +[SCGrapheneDeltaforceMetric databaseOperationsTime] */

void FUN_1053b8994(void)

{
  _objc_alloc(PTR_PTR_1126b81f8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053b89c0; end: 1053b89eb; +[SCGrapheneDeltaforceMetric syncResponseLatency] */

void FUN_1053b89c0(void)

{
  _objc_alloc(PTR_PTR_1126b81f8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053b89ec; end: 1053b8a17; +[SCGrapheneDeltaforceMetric syncResponseSuccessCount] */

void FUN_1053b89ec(void)

{
  _objc_alloc(PTR_PTR_1126b81f8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053b8a18; end: 1053b8a43; +[SCGrapheneDeltaforceMetric syncResponseRowCount] */

void FUN_1053b8a18(void)

{
  _objc_alloc(PTR_PTR_1126b81f8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053b8a44; end: 1053b8a6f; +[SCGrapheneDeltaforceMetric syncResponseUpsertRowCount] */

void FUN_1053b8a44(void)

{
  _objc_alloc(PTR_PTR_1126b81f8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053b8a70; end: 1053b8a9b; +[SCGrapheneDeltaforceMetric syncResponseDeleteRowCount] */

void FUN_1053b8a70(void)

{
  _objc_alloc(PTR_PTR_1126b81f8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053b8a9c; end: 1053b8ac7; +[SCGrapheneDeltaforceMetric syncEmptyResponseCount] */

void FUN_1053b8a9c(void)

{
  _objc_alloc(PTR_PTR_1126b81f8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053b8ac8; end: 1053b8af3; +[SCGrapheneDeltaforceMetric syncResponseFailureCount] */

void FUN_1053b8ac8(void)

{
  _objc_alloc(PTR_PTR_1126b81f8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053b8af4; end: 1053b8b1f; +[SCGrapheneDeltaforceMetric putRequestCount] */

void FUN_1053b8af4(void)

{
  _objc_alloc(PTR_PTR_1126b81f8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053b8b20; end: 1053b8b4b; +[SCGrapheneDeltaforceMetric putRequestMasterCount] */

void FUN_1053b8b20(void)

{
  _objc_alloc(PTR_PTR_1126b81f8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053b8b4c; end: 1053b8b77; +[SCGrapheneDeltaforceMetric putResponseSuccessCount] */

void FUN_1053b8b4c(void)

{
  _objc_alloc(PTR_PTR_1126b81f8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053b8b78; end: 1053b8ba3; +[SCGrapheneDeltaforceMetric putResponseFailureCount] */

void FUN_1053b8b78(void)

{
  _objc_alloc(PTR_PTR_1126b81f8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053b8ba4; end: 1053b8bcf; +[SCGrapheneDeltaforceMetric putResponseLatency] */

void FUN_1053b8ba4(void)

{
  _objc_alloc(PTR_PTR_1126b81f8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053b8bd0; end: 1053b8bfb; +[SCGrapheneDeltaforceMetric updateRequestCount] */

void FUN_1053b8bd0(void)

{
  _objc_alloc(PTR_PTR_1126b81f8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053b8bfc; end: 1053b8c27; +[SCGrapheneDeltaforceMetric updateResponseSuccessCount] */

void FUN_1053b8bfc(void)

{
  _objc_alloc(PTR_PTR_1126b81f8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053b8c28; end: 1053b8c53; +[SCGrapheneDeltaforceMetric updateResponseFailureCount] */

void FUN_1053b8c28(void)

{
  _objc_alloc(PTR_PTR_1126b81f8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053b8c54; end: 1053b8c7f; +[SCGrapheneDeltaforceMetric updateResponseLatency] */

void FUN_1053b8c54(void)

{
  _objc_alloc(PTR_PTR_1126b81f8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053b8c80; end: 1053b8cab; +[SCGrapheneDeltaforceMetric duplexSyncTriggerCount] */

void FUN_1053b8c80(void)

{
  _objc_alloc(PTR_PTR_1126b81f8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053b8cac; end: 1053b8cd7; +[SCGrapheneDeltaforceMetric loginProcessingScheduled] */

void FUN_1053b8cac(void)

{
  _objc_alloc(PTR_PTR_1126b81f8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053b8cd8; end: 1053b8d03; +[SCGrapheneDeltaforceMetric loginProcessingCompleted] */

void FUN_1053b8cd8(void)

{
  _objc_alloc(PTR_PTR_1126b81f8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053b8d04; end: 1053b8d2f; +[SCGrapheneDeltaforceMetric logoutProcessingScheduled] */

void FUN_1053b8d04(void)

{
  _objc_alloc(PTR_PTR_1126b81f8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053b8d30; end: 1053b8d5b; +[SCGrapheneDeltaforceMetric logoutProcessingCompleted] */

void FUN_1053b8d30(void)

{
  _objc_alloc(PTR_PTR_1126b81f8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053b8d5c; end: 1053b8d87; +[SCGrapheneDeltaforceMetric logoutCleanupCompleted] */

void FUN_1053b8d5c(void)

{
  _objc_alloc(PTR_PTR_1126b81f8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053b8d88; end: 1053b8db3; +[SCGrapheneDeltaforceMetric cleanupProcessingCount] */

void FUN_1053b8d88(void)

{
  _objc_alloc(PTR_PTR_1126b81f8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053b8db4; end: 1053b8ddf; +[SCGrapheneDeltaforceMetric cleanupProcessingCompleted] */

void FUN_1053b8db4(void)

{
  _objc_alloc(PTR_PTR_1126b81f8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053b8de0; end: 1053b8e7f; -[SCGrapheneDeltaforceMetric description] */

void FUN_1053b8de0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd6118;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dd6118,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e7dd8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1053b8e80; end: 1053b8ea3; -[SCDeltaSyncPersistedToken copyWithZone:] */

undefined8 FUN_1053b8e80(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}


