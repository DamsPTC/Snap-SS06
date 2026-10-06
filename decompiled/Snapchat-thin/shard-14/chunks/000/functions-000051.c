/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10af687a0; end: 10af6880b; -[SCRTUSClientCacheMetricsLogger logGetEventsDeleteFailureForProduct:error:] */

void FUN_10af687a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf51380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  FUN_10af6b740(*(undefined8 *)(param_1 + 0x10),uVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10af6880c; end: 10af6887b; -[SCRTUSClientCacheMetricsLogger logPurgeEventsLatencyMillisForProduct:durationMillis:] */

void FUN_10af6880c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf51380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  FUN_10af6b8b4(*(undefined8 *)(param_1 + 0x10),uVar2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10af6887c; end: 10af688e7; -[SCRTUSClientCacheMetricsLogger logPurgeEventsFailureForProduct:error:] */

void FUN_10af6887c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf51380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  FUN_10af6ba28(*(undefined8 *)(param_1 + 0x10),uVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10af688e8; end: 10af68953; -[SCRTUSClientCacheMetricsLogger logEventsPurgedForProduct:] */

void FUN_10af688e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf51380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  FUN_10af6c2fc(*(undefined8 *)(param_1 + 0x10),uVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10af68954; end: 10af6895f; -[SCRTUSClientCacheMetricsLogger logPurgeEventsOnBackgroundLatencyMillis:] */

void FUN_10af68954(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 0x10) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110c99848,&uStack_40,param_3);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 10af68960; end: 10af689cb; -[SCRTUSClientCacheMetricsLogger logPurgeEventsOnBackgroundFailureForProduct:error:] */

void FUN_10af68960(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf51380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  FUN_10af6befc(*(undefined8 *)(param_1 + 0x10),uVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10af689cc; end: 10af689fb; -[SCRTUSClientCacheMetricsLogger .cxx_destruct] */

void FUN_10af689cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af689fc; end: 10af68a6f; -[SCRTUSClientCacheResultHandler initWithMetricsLogger:] */

undefined1 * FUN_10af689fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112702e58;
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



/* Entry: 10af68a70; end: 10af68aef; -[SCRTUSClientCacheResultHandler handleWriteEventResult:product:eventPayloadId:] */

void FUN_10af68a70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10af68af0;
  puStack_30 = &UNK_110c98fc8;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x10af68b0c;
  puStack_68 = &UNK_110c98ff8;
  uStack_60 = param_1;
  uStack_58 = param_4;
  uStack_50 = param_5;
  uStack_28 = param_1;
  uStack_20 = param_4;
  uStack_18 = param_5;
  func_0x00010c0c0800(param_3,param_2,&puStack_48,&puStack_80);
  return;
}



/* Entry: 10af68af0; end: 10af68b27;  */

void FUN_10af68af0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b3610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_logWriteEventResultForProduct_pa_11260a790,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),&PTR____CFConstantStringClassReference_110dab0d8);
  return;
}



/* Entry: 10af68b28; end: 10af68b7f; -[SCRTUSClientCacheResultHandler handleTrimAfterAddEventResult:product:] */

void FUN_10af68b28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10af68b80;
  puStack_28 = &UNK_11087ec20;
  uStack_20 = param_1;
  uStack_18 = param_4;
  func_0x00010c0c0800(param_3,param_2,0,&puStack_40);
  return;
}



/* Entry: 10af68b80; end: 10af68b8f;  */

void FUN_10af68b80(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a4a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_logDbTrimRecordsFailureForProduc_112606c90,*(undefined8 *)(param_1 + 0x28),
             param_2);
  return;
}



/* Entry: 10af68b90; end: 10af68cab; -[SCRTUSClientCacheResultHandler getNumProductRecordsFromSCResult:product:] */

undefined8 FUN_10af68b90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_10af68cac;
  uStack_40 = 0x10af68cbc;
  uStack_38 = 0;
  func_0x00010c0c0800(param_3);
  if (puStack_58[5] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(puStack_58[5] + 8);
  }
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10af68cac; end: 10af68cc3;  */

void FUN_10af68cac(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10af68cc4; end: 10af68d2b;  */

void FUN_10af68cc4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  _objc_release(uVar1);
  lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(lVar2 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0ab310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_logNumRecordsInDbForProduct_coun_1126086d0,*(undefined8 *)(param_1 + 0x30),uVar1)
  ;
  return;
}



/* Entry: 10af68d2c; end: 10af68d3b;  */

void FUN_10af68d2c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a7870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_logGetNumRecordsFailureForProduc_112607828,*(undefined8 *)(param_1 + 0x28),
             param_2);
  return;
}



/* Entry: 10af68d3c; end: 10af68e4f; -[SCRTUSClientCacheResultHandler getDbSchemaRtusEventsFromSCResult:product:] */

void FUN_10af68d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_10af68cac;
  uStack_40 = 0x10af68cbc;
  uStack_38 = 0;
  func_0x00010c0c0800(param_3);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af68e50; end: 10af68ecb;  */

void FUN_10af68e50(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010bf529e0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  func_0x00010c0ab320(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10af68ecc; end: 10af68edb;  */

void FUN_10af68ecc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a77b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_logGetEventsFailureForProduct_er_1126077f8,*(undefined8 *)(param_1 + 0x28),
             param_2);
  return;
}



/* Entry: 10af68edc; end: 10af68f33; -[SCRTUSClientCacheResultHandler handleGetEventsAsyncDeleteResult:product:] */

void FUN_10af68edc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10af68f34;
  puStack_28 = &UNK_11087ec20;
  uStack_20 = param_1;
  uStack_18 = param_4;
  func_0x00010c0c0800(param_3,param_2,0,&puStack_40);
  return;
}



/* Entry: 10af68f34; end: 10af68f43;  */

void FUN_10af68f34(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a7790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_logGetEventsDeleteFailureForProd_1126077f0,*(undefined8 *)(param_1 + 0x28),
             param_2);
  return;
}



/* Entry: 10af68f44; end: 10af68fbf; -[SCRTUSClientCacheResultHandler handlePurgeEventsOnNetworkResponseResult:product:] */

void FUN_10af68f44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10af68fc0;
  puStack_28 = &UNK_110922fb0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x10af68fcc;
  puStack_58 = &UNK_11087ec20;
  uStack_50 = param_1;
  uStack_48 = param_4;
  uStack_20 = param_1;
  uStack_18 = param_4;
  func_0x00010c0c0800(param_3,param_2,&puStack_40,&puStack_70);
  return;
}



/* Entry: 10af68fc0; end: 10af68fdb;  */

void FUN_10af68fc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0a5cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_logEventsPurgedForProduct__112607140,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10af68fdc; end: 10af69033; -[SCRTUSClientCacheResultHandler handlePurgeEventsOnBackgroundResult:product:] */

void FUN_10af68fdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10af69034;
  puStack_28 = &UNK_11087ec20;
  uStack_20 = param_1;
  uStack_18 = param_4;
  func_0x00010c0c0800(param_3,param_2,0,&puStack_40);
  return;
}



/* Entry: 10af69034; end: 10af69043;  */

void FUN_10af69034(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ad430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_logPurgeEventsOnBackgroundFailur_112608f18,*(undefined8 *)(param_1 + 0x28),
             param_2);
  return;
}



/* Entry: 10af69044; end: 10af6904f; -[SCRTUSClientCacheResultHandler .cxx_destruct] */

void FUN_10af69044(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af69050; end: 10af69193; +[SCRTUSHelpers getListProtoRtusEventsFromListDbSchemaRtusEvents:] */

void FUN_10af69050(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar3 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        uVar4 = param_1;
        func_0x00010be21c40(param_1,param_2,*(undefined8 *)(lStack_118 + lVar6 * 8));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1,param_2,uVar4);
        _objc_release(uVar4);
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = param_3;
      puVar3 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126dec08;
    _objc_retain(puVar3);
    _objc_opt_new(puVar1);
    if (puVar3 == (undefined8 *)0x0) {
      func_0x00010c17d280(puVar1,param_2,0);
      func_0x00010c1d9b20(puVar1,param_2,0);
      uVar4 = 0;
    }
    else {
      func_0x00010c17d280(puVar1,param_2,*(undefined8 *)((long)puVar3 + 0x18));
      func_0x00010c1d9b20(puVar1,param_2,*(undefined4 *)((long)puVar3 + 0x20));
      uVar4 = *(undefined8 *)((long)puVar3 + 0x28);
    }
    _objc_retain(uVar4);
    func_0x00010c1d9a80(puVar1,param_2,uVar4);
    _objc_release(uVar4);
    if (puVar3 == (undefined8 *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)((long)puVar3 + 0x10);
    }
    _objc_retain(uVar4);
    _objc_release(puVar3);
    func_0x00010c197860(puVar1,param_2,uVar4);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10af69194; end: 10af69267; +[SCRTUSHelpers _getProtoRtusEventFromDbSchemaRtusEvent:] */

void FUN_10af69194(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126dec08;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  if (param_3 == 0) {
    func_0x00010c17d280(puVar1,param_2,0);
    func_0x00010c1d9b20(puVar1,param_2,0);
    uVar2 = 0;
  }
  else {
    func_0x00010c17d280(puVar1,param_2,*(undefined8 *)(param_3 + 0x18));
    func_0x00010c1d9b20(puVar1,param_2,*(undefined4 *)(param_3 + 0x20));
    uVar2 = *(undefined8 *)(param_3 + 0x28);
  }
  _objc_retain(uVar2);
  func_0x00010c1d9a80(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_3 + 0x10);
  }
  _objc_retain(uVar2);
  _objc_release(param_3);
  func_0x00010c197860(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10af69268; end: 10af692b7; +[SCRTUSHelpers getCurrentTimeMillis] */

long FUN_10af69268(double param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  _objc_release(puVar1);
  return (long)(param_1 * 1000.0);
}



/* Entry: 10af692b8; end: 10af692c7; +[SCRTUSHelpers productEnumIsValid:] */

bool FUN_10af692b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 - 1U < 0xb;
}



/* Entry: 10af692c8; end: 10af6942b; +[SCRTUSHelpers metricsReasonForError:] */

void FUN_10af692c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110dabe78;
    goto LAB_10af6940c;
  }
  lVar2 = param_3;
  func_0x00010bf87dc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0720c0();
  _objc_release(lVar2);
  if ((int)lVar3 == 0) {
    lVar2 = param_3;
    func_0x00010bf87dc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0720c0();
    _objc_release(lVar2);
    if ((int)lVar3 == 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110f3d978;
      goto LAB_10af6940c;
    }
    lVar2 = param_3;
    func_0x00010bf3ec40();
    ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    uVar1 = (int)lVar2 - 1;
    if (((uVar1 & 0xff) < 0x1a) && ((0x21037f1U >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
      ppuVar5 = (undefined **)(&PTR_PTR_110c99028)[(ulong)uVar1 & 0xff];
      goto LAB_10af6940c;
    }
    func_0x00010bf3ec40();
    ppuVar4 = &PTR____CFConstantStringClassReference_110f3db18;
  }
  else {
    lVar2 = param_3;
    func_0x00010bf3ec40();
    ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (lVar2 == 1) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110f3d918;
      goto LAB_10af6940c;
    }
    func_0x00010bf3ec40();
    ppuVar4 = &PTR____CFConstantStringClassReference_110f3d938;
  }
  func_0x00010c14de00(ppuVar5,param_2,ppuVar4);
  _objc_retainAutoreleasedReturnValue();
LAB_10af6940c:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 10af6942c; end: 10af69567; -[SCRTUSV2MigrationManager initWithGraphene:workerQueue:fileManager:] */

undefined1 *
FUN_10af6942c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_112702e60;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = 0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    uVar3 = 5;
    _NSSearchPathForDirectoriesInDomains(5,1,1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c25ce00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x30) = 0;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af69568; end: 10af695c7; -[SCRTUSV2MigrationManager triggerV1FileCleanUp] */

void FUN_10af69568(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 8);
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfacbe0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
    if ((int)uVar1 != 0) {
      func_0x00010bdcff00(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 8);
  return;
}



/* Entry: 10af695c8; end: 10af6966f; -[SCRTUSV2MigrationManager _asyncKickOffV1Cleanup] */

void FUN_10af695c8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10af69670; end: 10af696a3;  */

void FUN_10af69670(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdf9c60(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10af696a4; end: 10af69703; -[SCRTUSV2MigrationManager _deleteAllFilesInV1RtusDirectory] */

void FUN_10af696a4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lStack_28;
  
  lStack_28 = 0;
  func_0x00010c12cc40(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      &lStack_28);
  lVar1 = lStack_28;
  _objc_retain(lStack_28);
  FUN_10af6c070(*(undefined8 *)(param_1 + 0x10),lVar1 == 0,1);
  _objc_release(lVar1);
  return;
}



/* Entry: 10af69704; end: 10af6974b; -[SCRTUSV2MigrationManager .cxx_destruct] */

void FUN_10af69704(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10af6974c; end: 10af697bf; -[SCGrapheneRtusMetric2 init] */

undefined1 * FUN_10af6974c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112702e68;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10af697c0; end: 10af69a7f;  */

/* WARNING: Removing unreachable block (ram,0x00010af6a288) */
/* WARNING: Removing unreachable block (ram,0x00010af69d08) */
/* WARNING: Removing unreachable block (ram,0x00010af69a48) */
/* WARNING: Removing unreachable block (ram,0x00010af69fc8) */
/* WARNING: Removing unreachable block (ram,0x00010af6a778) */

char * FUN_10af697c0(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  long *plVar15;
  char *unaff_x24;
  char *pcStack_490;
  undefined *puStack_488;
  char *pcStack_480;
  char *pcStack_478;
  undefined8 ***pppuStack_470;
  code *pcStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined1 *puStack_448;
  undefined8 auStack_440 [3];
  undefined1 auStack_428 [24];
  undefined8 auStack_410 [2];
  char cStack_3f9;
  long lStack_3f8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  char acStack_398 [24];
  char *pcStack_380;
  undefined8 auStack_378 [2];
  char cStack_361;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  char *pcStack_330;
  char *pcStack_328;
  char *pcStack_320;
  char *pcStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  char acStack_300 [24];
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [3];
  undefined1 auStack_2c8 [24];
  undefined8 auStack_2b0 [2];
  char cStack_299;
  long lStack_298;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  char acStack_240 [24];
  undefined1 *puStack_228;
  undefined8 auStack_220 [3];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  char acStack_180 [24];
  undefined1 *puStack_168;
  undefined8 auStack_160 [3];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar7 = param_3;
  pcVar10 = param_4;
  pcVar3 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_70,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x000107c27984(acStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_a8 = acStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar14 = 0;
    pcVar7 = pcVar2;
    pcVar10 = param_5;
    do {
      if ((&cStack_59)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar14 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = (char *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (char *)auStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar9 = acStack_180;
  pcStack_c8 = FUN_10af69a80;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar1;
  pcVar8 = pcVar7;
  pcVar11 = pcVar10;
  pcVar12 = pcVar3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar7);
  _objc_retain(pcVar10);
  if (pcVar2 != (char *)0x0) {
    plVar15 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x000107c278b8(auStack_160,pcVar2);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar2 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x000107c278b8(auStack_148,pcVar2);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar2 = pcVar10;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar10);
    func_0x000107c278b8(auStack_130,pcVar2);
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    func_0x000107c27984(acStack_180,auStack_160,&lStack_118,3);
    pcVar6 = "";
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_168 = acStack_180;
    func_0x000107c278ac(&puStack_168);
    lVar14 = 0;
    pcVar8 = pcVar9;
    pcVar11 = pcVar3;
    do {
      if ((&cStack_119)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = acStack_180;
    } while (lVar14 != -0x48);
  }
  _objc_release(pcVar10);
  _objc_release(pcVar7);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar10);
  do {
    unaff_x24 = (char *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (char *)auStack_160);
  _objc_release(pcVar10);
  _objc_release(pcVar7);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar9 = acStack_240;
  pcStack_188 = FUN_10af69d40;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar6;
  pcVar7 = pcVar8;
  pcVar10 = pcVar11;
  pcVar2 = pcVar12;
  ppuStack_190 = &puStack_d0;
  _objc_retain(pcVar6);
  _objc_retain(pcVar8);
  _objc_retain(pcVar11);
  if (pcVar3 != (char *)0x0) {
    plVar15 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    func_0x000107c278b8(auStack_220,pcVar1);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar1 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x000107c278b8(auStack_208,pcVar1);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar11);
      pcVar1 = pcVar11;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar11);
    func_0x000107c278b8(auStack_1f0,pcVar1);
    acStack_240[0] = '\0';
    acStack_240[1] = '\0';
    acStack_240[2] = '\0';
    acStack_240[3] = '\0';
    acStack_240[4] = '\0';
    acStack_240[5] = '\0';
    acStack_240[6] = '\0';
    acStack_240[7] = '\0';
    acStack_240[8] = '\0';
    acStack_240[9] = '\0';
    acStack_240[10] = '\0';
    acStack_240[0xb] = '\0';
    acStack_240[0xc] = '\0';
    acStack_240[0xd] = '\0';
    acStack_240[0xe] = '\0';
    acStack_240[0xf] = '\0';
    acStack_240[0x10] = '\0';
    acStack_240[0x11] = '\0';
    acStack_240[0x12] = '\0';
    acStack_240[0x13] = '\0';
    acStack_240[0x14] = '\0';
    acStack_240[0x15] = '\0';
    acStack_240[0x16] = '\0';
    acStack_240[0x17] = '\0';
    func_0x000107c27984(acStack_240,auStack_220,&lStack_1d8,3);
    pcVar1 = "";
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_228 = acStack_240;
    func_0x000107c278ac(&puStack_228);
    lVar14 = 0;
    pcVar7 = pcVar9;
    pcVar10 = pcVar12;
    do {
      if ((&cStack_1d9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = acStack_240;
    } while (lVar14 != -0x48);
  }
  _objc_release(pcVar11);
  _objc_release(pcVar8);
  pcVar3 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar11);
  do {
    unaff_x24 = (char *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (char *)auStack_220);
  _objc_release(pcVar11);
  _objc_release(pcVar8);
  _objc_release(pcVar6);
  __Unwind_Resume();
  pcVar9 = acStack_300;
  pcStack_248 = FUN_10af6a000;
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar1;
  pcVar8 = pcVar7;
  pcVar11 = pcVar10;
  pcVar12 = pcVar2;
  pppuStack_250 = &ppuStack_190;
  _objc_retain(pcVar1);
  _objc_retain(pcVar7);
  _objc_retain(pcVar10);
  if (pcVar3 != (char *)0x0) {
    plVar15 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x000107c278b8(auStack_2e0,pcVar3);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar3 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x000107c278b8(auStack_2c8,pcVar3);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar3 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar3 = pcVar10;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar10);
    func_0x000107c278b8(auStack_2b0,pcVar3);
    acStack_300[0] = '\0';
    acStack_300[1] = '\0';
    acStack_300[2] = '\0';
    acStack_300[3] = '\0';
    acStack_300[4] = '\0';
    acStack_300[5] = '\0';
    acStack_300[6] = '\0';
    acStack_300[7] = '\0';
    acStack_300[8] = '\0';
    acStack_300[9] = '\0';
    acStack_300[10] = '\0';
    acStack_300[0xb] = '\0';
    acStack_300[0xc] = '\0';
    acStack_300[0xd] = '\0';
    acStack_300[0xe] = '\0';
    acStack_300[0xf] = '\0';
    acStack_300[0x10] = '\0';
    acStack_300[0x11] = '\0';
    acStack_300[0x12] = '\0';
    acStack_300[0x13] = '\0';
    acStack_300[0x14] = '\0';
    acStack_300[0x15] = '\0';
    acStack_300[0x16] = '\0';
    acStack_300[0x17] = '\0';
    func_0x000107c27984(acStack_300,auStack_2e0,&lStack_298,3);
    pcVar6 = "";
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_2e8 = acStack_300;
    func_0x000107c278ac(&puStack_2e8);
    lVar14 = 0;
    pcVar8 = pcVar9;
    pcVar11 = pcVar2;
    do {
      if ((&cStack_299)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2b0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = acStack_300;
    } while (lVar14 != -0x48);
  }
  _objc_release(pcVar10);
  _objc_release(pcVar7);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar10);
  puStack_338 = auStack_2e0;
  do {
    unaff_x24 = (char *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (char *)puStack_338);
  _objc_release(pcVar10);
  _objc_release(pcVar7);
  _objc_release(pcVar1);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcStack_308 = FUN_10af6a2c0;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar6;
  pcVar9 = pcVar8;
  pcVar13 = pcVar11;
  puStack_340 = (undefined8 *)unaff_x24;
  pcStack_330 = pcVar3;
  pcStack_328 = pcVar10;
  pcStack_320 = pcVar7;
  pcStack_318 = pcVar1;
  pppuStack_310 = &pppuStack_250;
  _objc_retain(pcVar6);
  _objc_retain(pcVar8);
  if (pcVar4 != (char *)0x0) {
    plVar15 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar6;
      _objc_retainAutorelease(pcVar6);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar6);
    unaff_x24 = (char *)auStack_378;
    func_0x000107c278b8(auStack_378,pcVar1);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar8);
      pcVar1 = pcVar8;
      func_0x00010bdc3520(pcVar8);
    }
    _objc_release(pcVar8);
    func_0x000107c278b8(auStack_360,pcVar1);
    acStack_398[0] = '\0';
    acStack_398[1] = '\0';
    acStack_398[2] = '\0';
    acStack_398[3] = '\0';
    acStack_398[4] = '\0';
    acStack_398[5] = '\0';
    acStack_398[6] = '\0';
    acStack_398[7] = '\0';
    acStack_398[8] = '\0';
    acStack_398[9] = '\0';
    acStack_398[10] = '\0';
    acStack_398[0xb] = '\0';
    acStack_398[0xc] = '\0';
    acStack_398[0xd] = '\0';
    acStack_398[0xe] = '\0';
    acStack_398[0xf] = '\0';
    acStack_398[0x10] = '\0';
    acStack_398[0x11] = '\0';
    acStack_398[0x12] = '\0';
    acStack_398[0x13] = '\0';
    acStack_398[0x14] = '\0';
    acStack_398[0x15] = '\0';
    acStack_398[0x16] = '\0';
    acStack_398[0x17] = '\0';
    func_0x000107c27984(acStack_398,auStack_378,&lStack_348,2);
    pcVar2 = "";
    pcVar9 = acStack_398;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    pcStack_380 = acStack_398;
    func_0x000107c278ac(&pcStack_380);
    lVar14 = 0;
    pcVar13 = pcVar11;
    do {
      if ((&cStack_349)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_360 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(pcVar8);
  pcVar1 = pcVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_348) {
    ___stack_chk_fail();
    _objc_release(pcVar8);
    if (cStack_361 < '\0') {
      __ZdlPv(auStack_378[0]);
    }
    _objc_release(pcVar8);
    _objc_release(pcVar6);
    __Unwind_Resume();
    pcStack_3a8 = FUN_10af6a4f0;
    lStack_3f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppuStack_3b0 = &pppuStack_310;
    _objc_retain(pcVar2);
    _objc_retain(pcVar9);
    _objc_retain(pcVar13);
    if (pcVar1 != (char *)0x0) {
      plVar15 = *(long **)(pcVar1 + 8);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar2;
        _objc_retainAutorelease(pcVar2);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar2);
      func_0x000107c278b8(auStack_440,pcVar1);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar9);
        pcVar1 = pcVar9;
        func_0x00010bdc3520(pcVar9);
      }
      _objc_release(pcVar9);
      func_0x000107c278b8(auStack_428,pcVar1);
      _objc_retain(pcVar13);
      if (pcVar13 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar13);
        pcVar1 = pcVar13;
        func_0x00010bdc3520(pcVar13);
      }
      _objc_release(pcVar13);
      func_0x000107c278b8(auStack_410,pcVar1);
      uStack_460 = 0;
      uStack_458 = 0;
      uStack_450 = 0;
      func_0x000107c27984(&uStack_460,auStack_440,&lStack_3f8,3);
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110c99288,&uStack_460,pcVar12);
      puStack_448 = (undefined1 *)&uStack_460;
      func_0x000107c278ac(&puStack_448);
      lVar14 = 0;
      do {
        if ((&cStack_3f9)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_410 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
        unaff_x24 = (char *)&uStack_460;
      } while (lVar14 != -0x48);
    }
    _objc_release(pcVar13);
    _objc_release(pcVar9);
    pcVar1 = pcVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3f8) {
      ___stack_chk_fail();
      _objc_release(pcVar13);
      do {
        unaff_x24 = (char *)((long)unaff_x24 + -0x18);
      } while (unaff_x24 != (char *)auStack_440);
      _objc_release(pcVar13);
      _objc_release(pcVar9);
      _objc_release(pcVar2);
      __Unwind_Resume();
      ppcVar5 = &pcStack_490;
      pcStack_468 = FUN_10af6a7b0;
      puStack_488 = PTR_PTR_112702e70;
      pcStack_490 = pcVar1;
      pcStack_480 = pcVar9;
      pcStack_478 = pcVar2;
      pppuStack_470 = &pppuStack_3b0;
      _objc_msgSendSuper2(&pcStack_490,PTR_s_init_1125d9248);
      if (ppcVar5 != (char **)0x0) {
        pcVar1 = (char *)ppcVar5;
        (*(code *)PTR_DAT_113403208)();
        *(char **)((long)ppcVar5 + 8) = pcVar1;
      }
      return (char *)ppcVar5;
    }
    return pcVar1;
  }
  return pcVar1;
}



/* Entry: 10af69a80; end: 10af69d3f;  */

/* WARNING: Removing unreachable block (ram,0x00010af6a288) */
/* WARNING: Removing unreachable block (ram,0x00010af69d08) */
/* WARNING: Removing unreachable block (ram,0x00010af69fc8) */
/* WARNING: Removing unreachable block (ram,0x00010af6a778) */

char * FUN_10af69a80(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char **ppcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  long *plVar15;
  char *unaff_x24;
  char *pcStack_3d0;
  undefined *puStack_3c8;
  char *pcStack_3c0;
  char *pcStack_3b8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined1 *puStack_388;
  undefined8 auStack_380 [3];
  undefined1 auStack_368 [24];
  undefined8 auStack_350 [2];
  char cStack_339;
  long lStack_338;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  char acStack_2d8 [24];
  char *pcStack_2c0;
  undefined8 auStack_2b8 [2];
  char cStack_2a1;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  char *pcStack_270;
  char *pcStack_268;
  char *pcStack_260;
  char *pcStack_258;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  char acStack_240 [24];
  undefined1 *puStack_228;
  undefined8 auStack_220 [3];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  char acStack_180 [24];
  undefined1 *puStack_168;
  undefined8 auStack_160 [3];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar9 = param_3;
  pcVar5 = param_4;
  pcVar3 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_70,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x000107c27984(acStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_a8 = acStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar14 = 0;
    pcVar9 = pcVar2;
    pcVar5 = param_5;
    do {
      if ((&cStack_59)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar14 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = (char *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (char *)auStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar11 = acStack_180;
  pcStack_c8 = FUN_10af69d40;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar1;
  pcVar10 = pcVar9;
  pcVar12 = pcVar5;
  pcVar8 = pcVar3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar9);
  _objc_retain(pcVar5);
  if (pcVar2 != (char *)0x0) {
    plVar15 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x000107c278b8(auStack_160,pcVar2);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar9);
      pcVar2 = pcVar9;
      func_0x00010bdc3520(pcVar9);
    }
    _objc_release(pcVar9);
    func_0x000107c278b8(auStack_148,pcVar2);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar2 = pcVar5;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x000107c278b8(auStack_130,pcVar2);
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    func_0x000107c27984(acStack_180,auStack_160,&lStack_118,3);
    pcVar7 = "";
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_168 = acStack_180;
    func_0x000107c278ac(&puStack_168);
    lVar14 = 0;
    pcVar10 = pcVar11;
    pcVar12 = pcVar3;
    do {
      if ((&cStack_119)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = acStack_180;
    } while (lVar14 != -0x48);
  }
  _objc_release(pcVar5);
  _objc_release(pcVar9);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  do {
    unaff_x24 = (char *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (char *)auStack_160);
  _objc_release(pcVar5);
  _objc_release(pcVar9);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcVar11 = acStack_240;
  pcStack_188 = FUN_10af6a000;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar7;
  pcVar9 = pcVar10;
  pcVar5 = pcVar12;
  pcVar2 = pcVar8;
  ppuStack_190 = &puStack_d0;
  _objc_retain(pcVar7);
  _objc_retain(pcVar10);
  _objc_retain(pcVar12);
  if (pcVar3 != (char *)0x0) {
    plVar15 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar7;
      _objc_retainAutorelease(pcVar7);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar7);
    func_0x000107c278b8(auStack_220,pcVar1);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar1 = pcVar10;
      func_0x00010bdc3520(pcVar10);
    }
    _objc_release(pcVar10);
    func_0x000107c278b8(auStack_208,pcVar1);
    _objc_retain(pcVar12);
    if (pcVar12 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar12);
      pcVar1 = pcVar12;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar12);
    func_0x000107c278b8(auStack_1f0,pcVar1);
    acStack_240[0] = '\0';
    acStack_240[1] = '\0';
    acStack_240[2] = '\0';
    acStack_240[3] = '\0';
    acStack_240[4] = '\0';
    acStack_240[5] = '\0';
    acStack_240[6] = '\0';
    acStack_240[7] = '\0';
    acStack_240[8] = '\0';
    acStack_240[9] = '\0';
    acStack_240[10] = '\0';
    acStack_240[0xb] = '\0';
    acStack_240[0xc] = '\0';
    acStack_240[0xd] = '\0';
    acStack_240[0xe] = '\0';
    acStack_240[0xf] = '\0';
    acStack_240[0x10] = '\0';
    acStack_240[0x11] = '\0';
    acStack_240[0x12] = '\0';
    acStack_240[0x13] = '\0';
    acStack_240[0x14] = '\0';
    acStack_240[0x15] = '\0';
    acStack_240[0x16] = '\0';
    acStack_240[0x17] = '\0';
    func_0x000107c27984(acStack_240,auStack_220,&lStack_1d8,3);
    pcVar1 = "";
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_228 = acStack_240;
    func_0x000107c278ac(&puStack_228);
    lVar14 = 0;
    pcVar9 = pcVar11;
    pcVar5 = pcVar8;
    do {
      if ((&cStack_1d9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = acStack_240;
    } while (lVar14 != -0x48);
  }
  _objc_release(pcVar12);
  _objc_release(pcVar10);
  pcVar3 = pcVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d8) {
    ___stack_chk_fail();
    _objc_release(pcVar12);
    puStack_278 = auStack_220;
    do {
      unaff_x24 = (char *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (char *)puStack_278);
    _objc_release(pcVar12);
    _objc_release(pcVar10);
    _objc_release(pcVar7);
    pcVar4 = pcVar3;
    __Unwind_Resume();
    pcStack_248 = FUN_10af6a2c0;
    lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar8 = pcVar1;
    pcVar11 = pcVar9;
    pcVar13 = pcVar5;
    puStack_280 = (undefined8 *)unaff_x24;
    pcStack_270 = pcVar3;
    pcStack_268 = pcVar12;
    pcStack_260 = pcVar10;
    pcStack_258 = pcVar7;
    pppuStack_250 = &ppuStack_190;
    _objc_retain(pcVar1);
    _objc_retain(pcVar9);
    if (pcVar4 != (char *)0x0) {
      plVar15 = *(long **)(pcVar4 + 8);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        pcVar3 = pcVar1;
        _objc_retainAutorelease(pcVar1);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar1);
      unaff_x24 = (char *)auStack_2b8;
      func_0x000107c278b8(auStack_2b8,pcVar3);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        _objc_retainAutorelease(pcVar9);
        pcVar3 = pcVar9;
        func_0x00010bdc3520(pcVar9);
      }
      _objc_release(pcVar9);
      func_0x000107c278b8(auStack_2a0,pcVar3);
      acStack_2d8[0] = '\0';
      acStack_2d8[1] = '\0';
      acStack_2d8[2] = '\0';
      acStack_2d8[3] = '\0';
      acStack_2d8[4] = '\0';
      acStack_2d8[5] = '\0';
      acStack_2d8[6] = '\0';
      acStack_2d8[7] = '\0';
      acStack_2d8[8] = '\0';
      acStack_2d8[9] = '\0';
      acStack_2d8[10] = '\0';
      acStack_2d8[0xb] = '\0';
      acStack_2d8[0xc] = '\0';
      acStack_2d8[0xd] = '\0';
      acStack_2d8[0xe] = '\0';
      acStack_2d8[0xf] = '\0';
      acStack_2d8[0x10] = '\0';
      acStack_2d8[0x11] = '\0';
      acStack_2d8[0x12] = '\0';
      acStack_2d8[0x13] = '\0';
      acStack_2d8[0x14] = '\0';
      acStack_2d8[0x15] = '\0';
      acStack_2d8[0x16] = '\0';
      acStack_2d8[0x17] = '\0';
      func_0x000107c27984(acStack_2d8,auStack_2b8,&lStack_288,2);
      pcVar8 = "";
      pcVar11 = acStack_2d8;
      (**(code **)(*plVar15 + 0x18))(plVar15);
      pcStack_2c0 = acStack_2d8;
      func_0x000107c278ac(&pcStack_2c0);
      lVar14 = 0;
      pcVar13 = pcVar5;
      do {
        if ((&cStack_289)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_2a0 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
    _objc_release(pcVar9);
    pcVar5 = pcVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_288) {
      ___stack_chk_fail();
      _objc_release(pcVar9);
      if (cStack_2a1 < '\0') {
        __ZdlPv(auStack_2b8[0]);
      }
      _objc_release(pcVar9);
      _objc_release(pcVar1);
      __Unwind_Resume();
      pcStack_2e8 = FUN_10af6a4f0;
      lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pppuStack_2f0 = &pppuStack_250;
      _objc_retain(pcVar8);
      _objc_retain(pcVar11);
      _objc_retain(pcVar13);
      if (pcVar5 != (char *)0x0) {
        plVar15 = *(long **)(pcVar5 + 8);
        _objc_retain(pcVar8);
        if (pcVar8 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar8;
          _objc_retainAutorelease(pcVar8);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar8);
        func_0x000107c278b8(auStack_380,pcVar1);
        _objc_retain(pcVar11);
        if (pcVar11 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar11);
          pcVar1 = pcVar11;
          func_0x00010bdc3520(pcVar11);
        }
        _objc_release(pcVar11);
        func_0x000107c278b8(auStack_368,pcVar1);
        _objc_retain(pcVar13);
        if (pcVar13 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar13);
          pcVar1 = pcVar13;
          func_0x00010bdc3520(pcVar13);
        }
        _objc_release(pcVar13);
        func_0x000107c278b8(auStack_350,pcVar1);
        uStack_3a0 = 0;
        uStack_398 = 0;
        uStack_390 = 0;
        func_0x000107c27984(&uStack_3a0,auStack_380,&lStack_338,3);
        (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110c99288,&uStack_3a0,pcVar2);
        puStack_388 = (undefined1 *)&uStack_3a0;
        func_0x000107c278ac(&puStack_388);
        lVar14 = 0;
        do {
          if ((&cStack_339)[lVar14] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_350 + lVar14));
          }
          lVar14 = lVar14 + -0x18;
          unaff_x24 = (char *)&uStack_3a0;
        } while (lVar14 != -0x48);
      }
      _objc_release(pcVar13);
      _objc_release(pcVar11);
      pcVar1 = pcVar8;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_338) {
        ___stack_chk_fail();
        _objc_release(pcVar13);
        do {
          unaff_x24 = (char *)((long)unaff_x24 + -0x18);
        } while (unaff_x24 != (char *)auStack_380);
        _objc_release(pcVar13);
        _objc_release(pcVar11);
        _objc_release(pcVar8);
        __Unwind_Resume();
        ppcVar6 = &pcStack_3d0;
        pcStack_3a8 = FUN_10af6a7b0;
        puStack_3c8 = PTR_PTR_112702e70;
        pcStack_3d0 = pcVar1;
        pcStack_3c0 = pcVar11;
        pcStack_3b8 = pcVar8;
        pppuStack_3b0 = &pppuStack_2f0;
        _objc_msgSendSuper2(&pcStack_3d0,PTR_s_init_1125d9248);
        if (ppcVar6 != (char **)0x0) {
          pcVar1 = (char *)ppcVar6;
          (*(code *)PTR_DAT_113403208)();
          *(char **)((long)ppcVar6 + 8) = pcVar1;
        }
        return (char *)ppcVar6;
      }
      return pcVar1;
    }
    return pcVar5;
  }
  return pcVar3;
}



/* Entry: 10af69d40; end: 10af69fff;  */

/* WARNING: Removing unreachable block (ram,0x00010af6a288) */
/* WARNING: Removing unreachable block (ram,0x00010af69fc8) */
/* WARNING: Removing unreachable block (ram,0x00010af6a778) */

char * FUN_10af69d40(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  long *plVar15;
  char *unaff_x24;
  char *pcStack_310;
  undefined *puStack_308;
  char *pcStack_300;
  char *pcStack_2f8;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 *puStack_2c8;
  undefined8 auStack_2c0 [3];
  undefined1 auStack_2a8 [24];
  undefined8 auStack_290 [2];
  char cStack_279;
  long lStack_278;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  char acStack_218 [24];
  char *pcStack_200;
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  char *pcStack_1b0;
  char *pcStack_1a8;
  char *pcStack_1a0;
  char *pcStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  char acStack_180 [24];
  undefined1 *puStack_168;
  undefined8 auStack_160 [3];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar7 = param_3;
  pcVar10 = param_4;
  pcVar3 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_70,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x000107c27984(acStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_a8 = acStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar14 = 0;
    pcVar7 = pcVar2;
    pcVar10 = param_5;
    do {
      if ((&cStack_59)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar14 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = (char *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (char *)auStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar9 = acStack_180;
  pcStack_c8 = FUN_10af6a000;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar1;
  pcVar8 = pcVar7;
  pcVar11 = pcVar10;
  pcVar13 = pcVar3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar7);
  _objc_retain(pcVar10);
  if (pcVar2 != (char *)0x0) {
    plVar15 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x000107c278b8(auStack_160,pcVar2);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar2 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x000107c278b8(auStack_148,pcVar2);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar10);
      pcVar2 = pcVar10;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar10);
    func_0x000107c278b8(auStack_130,pcVar2);
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    func_0x000107c27984(acStack_180,auStack_160,&lStack_118,3);
    pcVar6 = "";
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_168 = acStack_180;
    func_0x000107c278ac(&puStack_168);
    lVar14 = 0;
    pcVar8 = pcVar9;
    pcVar11 = pcVar3;
    do {
      if ((&cStack_119)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = acStack_180;
    } while (lVar14 != -0x48);
  }
  _objc_release(pcVar10);
  _objc_release(pcVar7);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
    ___stack_chk_fail();
    _objc_release(pcVar10);
    puStack_1b8 = auStack_160;
    do {
      unaff_x24 = (char *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (char *)puStack_1b8);
    _objc_release(pcVar10);
    _objc_release(pcVar7);
    _objc_release(pcVar1);
    pcVar4 = pcVar3;
    __Unwind_Resume();
    pcStack_188 = FUN_10af6a2c0;
    lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar2 = pcVar6;
    pcVar9 = pcVar8;
    pcVar12 = pcVar11;
    puStack_1c0 = (undefined8 *)unaff_x24;
    pcStack_1b0 = pcVar3;
    pcStack_1a8 = pcVar10;
    pcStack_1a0 = pcVar7;
    pcStack_198 = pcVar1;
    ppuStack_190 = &puStack_d0;
    _objc_retain(pcVar6);
    _objc_retain(pcVar8);
    if (pcVar4 != (char *)0x0) {
      plVar15 = *(long **)(pcVar4 + 8);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar6;
        _objc_retainAutorelease(pcVar6);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar6);
      unaff_x24 = (char *)auStack_1f8;
      func_0x000107c278b8(auStack_1f8,pcVar1);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar8);
        pcVar1 = pcVar8;
        func_0x00010bdc3520(pcVar8);
      }
      _objc_release(pcVar8);
      func_0x000107c278b8(auStack_1e0,pcVar1);
      acStack_218[0] = '\0';
      acStack_218[1] = '\0';
      acStack_218[2] = '\0';
      acStack_218[3] = '\0';
      acStack_218[4] = '\0';
      acStack_218[5] = '\0';
      acStack_218[6] = '\0';
      acStack_218[7] = '\0';
      acStack_218[8] = '\0';
      acStack_218[9] = '\0';
      acStack_218[10] = '\0';
      acStack_218[0xb] = '\0';
      acStack_218[0xc] = '\0';
      acStack_218[0xd] = '\0';
      acStack_218[0xe] = '\0';
      acStack_218[0xf] = '\0';
      acStack_218[0x10] = '\0';
      acStack_218[0x11] = '\0';
      acStack_218[0x12] = '\0';
      acStack_218[0x13] = '\0';
      acStack_218[0x14] = '\0';
      acStack_218[0x15] = '\0';
      acStack_218[0x16] = '\0';
      acStack_218[0x17] = '\0';
      func_0x000107c27984(acStack_218,auStack_1f8,&lStack_1c8,2);
      pcVar2 = "";
      pcVar9 = acStack_218;
      (**(code **)(*plVar15 + 0x18))(plVar15);
      pcStack_200 = acStack_218;
      func_0x000107c278ac(&pcStack_200);
      lVar14 = 0;
      pcVar12 = pcVar11;
      do {
        if ((&cStack_1c9)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
    _objc_release(pcVar8);
    pcVar1 = pcVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c8) {
      ___stack_chk_fail();
      _objc_release(pcVar8);
      if (cStack_1e1 < '\0') {
        __ZdlPv(auStack_1f8[0]);
      }
      _objc_release(pcVar8);
      _objc_release(pcVar6);
      __Unwind_Resume();
      pcStack_228 = FUN_10af6a4f0;
      lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pppuStack_230 = &ppuStack_190;
      _objc_retain(pcVar2);
      _objc_retain(pcVar9);
      _objc_retain(pcVar12);
      if (pcVar1 != (char *)0x0) {
        plVar15 = *(long **)(pcVar1 + 8);
        _objc_retain(pcVar2);
        if (pcVar2 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar2;
          _objc_retainAutorelease(pcVar2);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar2);
        func_0x000107c278b8(auStack_2c0,pcVar1);
        _objc_retain(pcVar9);
        if (pcVar9 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar9);
          pcVar1 = pcVar9;
          func_0x00010bdc3520(pcVar9);
        }
        _objc_release(pcVar9);
        func_0x000107c278b8(auStack_2a8,pcVar1);
        _objc_retain(pcVar12);
        if (pcVar12 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar12);
          pcVar1 = pcVar12;
          func_0x00010bdc3520(pcVar12);
        }
        _objc_release(pcVar12);
        func_0x000107c278b8(auStack_290,pcVar1);
        uStack_2e0 = 0;
        uStack_2d8 = 0;
        uStack_2d0 = 0;
        func_0x000107c27984(&uStack_2e0,auStack_2c0,&lStack_278,3);
        (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110c99288,&uStack_2e0,pcVar13);
        puStack_2c8 = (undefined1 *)&uStack_2e0;
        func_0x000107c278ac(&puStack_2c8);
        lVar14 = 0;
        do {
          if ((&cStack_279)[lVar14] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_290 + lVar14));
          }
          lVar14 = lVar14 + -0x18;
          unaff_x24 = (char *)&uStack_2e0;
        } while (lVar14 != -0x48);
      }
      _objc_release(pcVar12);
      _objc_release(pcVar9);
      pcVar1 = pcVar2;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_278) {
        ___stack_chk_fail();
        _objc_release(pcVar12);
        do {
          unaff_x24 = (char *)((long)unaff_x24 + -0x18);
        } while (unaff_x24 != (char *)auStack_2c0);
        _objc_release(pcVar12);
        _objc_release(pcVar9);
        _objc_release(pcVar2);
        __Unwind_Resume();
        ppcVar5 = &pcStack_310;
        pcStack_2e8 = FUN_10af6a7b0;
        puStack_308 = PTR_PTR_112702e70;
        pcStack_310 = pcVar1;
        pcStack_300 = pcVar9;
        pcStack_2f8 = pcVar2;
        pppuStack_2f0 = &pppuStack_230;
        _objc_msgSendSuper2(&pcStack_310,PTR_s_init_1125d9248);
        if (ppcVar5 != (char **)0x0) {
          pcVar1 = (char *)ppcVar5;
          (*(code *)PTR_DAT_113403208)();
          *(char **)((long)ppcVar5 + 8) = pcVar1;
        }
        return (char *)ppcVar5;
      }
      return pcVar1;
    }
    return pcVar1;
  }
  return pcVar3;
}



/* Entry: 10af6a000; end: 10af6a2bf;  */

/* WARNING: Removing unreachable block (ram,0x00010af6a288) */
/* WARNING: Removing unreachable block (ram,0x00010af6a778) */

char * FUN_10af6a000(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  long *plVar12;
  char *unaff_x24;
  char *pcStack_250;
  undefined *puStack_248;
  char *pcStack_240;
  char *pcStack_238;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [3];
  undefined1 auStack_1e8 [24];
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  char acStack_158 [24];
  char *pcStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar7 = param_3;
  pcVar4 = param_4;
  pcVar10 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_70,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x000107c27984(acStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_a8 = acStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar11 = 0;
    pcVar7 = pcVar2;
    pcVar4 = param_5;
    do {
      if ((&cStack_59)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar11 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puStack_f8 = auStack_a0;
  do {
    unaff_x24 = (char *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (char *)puStack_f8);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_c8 = FUN_10af6a2c0;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar6 = pcVar1;
  pcVar8 = pcVar7;
  pcVar9 = pcVar4;
  puStack_100 = (undefined8 *)unaff_x24;
  pcStack_f0 = pcVar2;
  pcStack_e8 = param_4;
  pcStack_e0 = param_3;
  pcStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar7);
  if (pcVar3 != (char *)0x0) {
    plVar12 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x24 = (char *)auStack_138;
    func_0x000107c278b8(auStack_138,pcVar2);
    _objc_retain(pcVar7);
    if (pcVar7 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar7);
      pcVar2 = pcVar7;
      func_0x00010bdc3520(pcVar7);
    }
    _objc_release(pcVar7);
    func_0x000107c278b8(auStack_120,pcVar2);
    acStack_158[0] = '\0';
    acStack_158[1] = '\0';
    acStack_158[2] = '\0';
    acStack_158[3] = '\0';
    acStack_158[4] = '\0';
    acStack_158[5] = '\0';
    acStack_158[6] = '\0';
    acStack_158[7] = '\0';
    acStack_158[8] = '\0';
    acStack_158[9] = '\0';
    acStack_158[10] = '\0';
    acStack_158[0xb] = '\0';
    acStack_158[0xc] = '\0';
    acStack_158[0xd] = '\0';
    acStack_158[0xe] = '\0';
    acStack_158[0xf] = '\0';
    acStack_158[0x10] = '\0';
    acStack_158[0x11] = '\0';
    acStack_158[0x12] = '\0';
    acStack_158[0x13] = '\0';
    acStack_158[0x14] = '\0';
    acStack_158[0x15] = '\0';
    acStack_158[0x16] = '\0';
    acStack_158[0x17] = '\0';
    func_0x000107c27984(acStack_158,auStack_138,&lStack_108,2);
    pcVar6 = "";
    pcVar8 = acStack_158;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    pcStack_140 = acStack_158;
    func_0x000107c278ac(&pcStack_140);
    lVar11 = 0;
    pcVar9 = pcVar4;
    do {
      if ((&cStack_109)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(pcVar7);
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
    ___stack_chk_fail();
    _objc_release(pcVar7);
    if (cStack_121 < '\0') {
      __ZdlPv(auStack_138[0]);
    }
    _objc_release(pcVar7);
    _objc_release(pcVar1);
    __Unwind_Resume();
    pcStack_168 = FUN_10af6a4f0;
    lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_170 = &puStack_d0;
    _objc_retain(pcVar6);
    _objc_retain(pcVar8);
    _objc_retain(pcVar9);
    if (pcVar4 != (char *)0x0) {
      plVar12 = *(long **)(pcVar4 + 8);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar6;
        _objc_retainAutorelease(pcVar6);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar6);
      func_0x000107c278b8(auStack_200,pcVar1);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar8);
        pcVar1 = pcVar8;
        func_0x00010bdc3520(pcVar8);
      }
      _objc_release(pcVar8);
      func_0x000107c278b8(auStack_1e8,pcVar1);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar9);
        pcVar1 = pcVar9;
        func_0x00010bdc3520(pcVar9);
      }
      _objc_release(pcVar9);
      func_0x000107c278b8(auStack_1d0,pcVar1);
      uStack_220 = 0;
      uStack_218 = 0;
      uStack_210 = 0;
      func_0x000107c27984(&uStack_220,auStack_200,&lStack_1b8,3);
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110c99288,&uStack_220,pcVar10);
      puStack_208 = (undefined1 *)&uStack_220;
      func_0x000107c278ac(&puStack_208);
      lVar11 = 0;
      do {
        if ((&cStack_1b9)[lVar11] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1d0 + lVar11));
        }
        lVar11 = lVar11 + -0x18;
        unaff_x24 = (char *)&uStack_220;
      } while (lVar11 != -0x48);
    }
    _objc_release(pcVar9);
    _objc_release(pcVar8);
    pcVar1 = pcVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b8) {
      ___stack_chk_fail();
      _objc_release(pcVar9);
      do {
        unaff_x24 = (char *)((long)unaff_x24 + -0x18);
      } while (unaff_x24 != (char *)auStack_200);
      _objc_release(pcVar9);
      _objc_release(pcVar8);
      _objc_release(pcVar6);
      __Unwind_Resume();
      ppcVar5 = &pcStack_250;
      pcStack_228 = FUN_10af6a7b0;
      puStack_248 = PTR_PTR_112702e70;
      pcStack_250 = pcVar1;
      pcStack_240 = pcVar8;
      pcStack_238 = pcVar6;
      pppuStack_230 = &ppuStack_170;
      _objc_msgSendSuper2(&pcStack_250,PTR_s_init_1125d9248);
      if (ppcVar5 != (char **)0x0) {
        pcVar1 = (char *)ppcVar5;
        (*(code *)PTR_DAT_113403208)();
        *(char **)((long)ppcVar5 + 8) = pcVar1;
      }
      return (char *)ppcVar5;
    }
    return pcVar1;
  }
  return pcVar4;
}



/* Entry: 10af6a2c0; end: 10af6a4ef;  */

/* WARNING: Removing unreachable block (ram,0x00010af6a778) */

char * FUN_10af6a2c0(long param_1,char *param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  long *plVar7;
  undefined8 *unaff_x24;
  char *pcStack_190;
  undefined *puStack_188;
  char *pcStack_180;
  char *pcStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined8 auStack_140 [3];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar4 = param_3;
  pcVar5 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x000107c278b8(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x000107c27984(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    pcVar4 = acStack_98;
    (**(code **)(*plVar7 + 0x18))(plVar7);
    pcStack_80 = acStack_98;
    func_0x000107c278ac(&pcStack_80);
    lVar6 = 0;
    pcVar5 = param_4;
    do {
      if ((&cStack_49)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_3);
    if (cStack_61 < '\0') {
      __ZdlPv(auStack_78[0]);
    }
    _objc_release(param_3);
    _objc_release(param_2);
    __Unwind_Resume();
    pcStack_a8 = FUN_10af6a4f0;
    lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_b0 = &stack0xfffffffffffffff0;
    _objc_retain(pcVar1);
    _objc_retain(pcVar4);
    _objc_retain(pcVar5);
    if (pcVar2 != (char *)0x0) {
      plVar7 = *(long **)(pcVar2 + 8);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = pcVar1;
        _objc_retainAutorelease(pcVar1);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar1);
      func_0x000107c278b8(auStack_140,pcVar2);
      _objc_retain(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar4);
        pcVar2 = pcVar4;
        func_0x00010bdc3520(pcVar4);
      }
      _objc_release(pcVar4);
      func_0x000107c278b8(auStack_128,pcVar2);
      _objc_retain(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar5);
        pcVar2 = pcVar5;
        func_0x00010bdc3520(pcVar5);
      }
      _objc_release(pcVar5);
      func_0x000107c278b8(auStack_110,pcVar2);
      uStack_160 = 0;
      uStack_158 = 0;
      uStack_150 = 0;
      func_0x000107c27984(&uStack_160,auStack_140,&lStack_f8,3);
      (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110c99288,&uStack_160,param_5);
      puStack_148 = (undefined1 *)&uStack_160;
      func_0x000107c278ac(&puStack_148);
      lVar6 = 0;
      do {
        if ((&cStack_f9)[lVar6] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar6));
        }
        lVar6 = lVar6 + -0x18;
        unaff_x24 = &uStack_160;
      } while (lVar6 != -0x48);
    }
    _objc_release(pcVar5);
    _objc_release(pcVar4);
    pcVar2 = pcVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
      ___stack_chk_fail();
      _objc_release(pcVar5);
      do {
        unaff_x24 = unaff_x24 + -3;
      } while (unaff_x24 != auStack_140);
      _objc_release(pcVar5);
      _objc_release(pcVar4);
      _objc_release(pcVar1);
      __Unwind_Resume();
      ppcVar3 = &pcStack_190;
      pcStack_168 = FUN_10af6a7b0;
      puStack_188 = PTR_PTR_112702e70;
      pcStack_190 = pcVar2;
      pcStack_180 = pcVar4;
      pcStack_178 = pcVar1;
      ppuStack_170 = &puStack_b0;
      _objc_msgSendSuper2(&pcStack_190,PTR_s_init_1125d9248);
      if (ppcVar3 != (char **)0x0) {
        pcVar1 = (char *)ppcVar3;
        (*(code *)PTR_DAT_113403208)();
        *(char **)((long)ppcVar3 + 8) = pcVar1;
      }
      return (char *)ppcVar3;
    }
    return pcVar2;
  }
  return pcVar2;
}



/* Entry: 10af6a4f0; end: 10af6a7af;  */

/* WARNING: Removing unreachable block (ram,0x00010af6a778) */

char * FUN_10af6a4f0(long param_1,char *param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  char **ppcVar2;
  long lVar3;
  long *plVar4;
  undefined8 *unaff_x24;
  char *pcStack_f0;
  undefined *puStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
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
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_70,pcVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x000107c27984(&uStack_c0,auStack_a0,&lStack_58,3);
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110c99288,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar3 = 0;
    do {
      if ((&cStack_59)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar3 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_4);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_a0);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
    __Unwind_Resume();
    ppcVar2 = &pcStack_f0;
    pcStack_c8 = FUN_10af6a7b0;
    puStack_e8 = PTR_PTR_112702e70;
    pcStack_f0 = pcVar1;
    pcStack_e0 = param_3;
    pcStack_d8 = param_2;
    puStack_d0 = &stack0xfffffffffffffff0;
    _objc_msgSendSuper2(&pcStack_f0,PTR_s_init_1125d9248);
    if (ppcVar2 != (char **)0x0) {
      pcVar1 = (char *)ppcVar2;
      (*(code *)PTR_DAT_113403208)();
      *(char **)((long)ppcVar2 + 8) = pcVar1;
    }
    return (char *)ppcVar2;
  }
  return pcVar1;
}



/* Entry: 10af6a7b0; end: 10af6a823; -[SCGrapheneRtusV2Metric2 init] */

undefined1 * FUN_10af6a7b0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112702e70;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10af6a824; end: 10af6a997;  */

/* WARNING: Removing unreachable block (ram,0x00010af6ac20) */

void FUN_10af6a824(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *unaff_x24;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined1 *puStack_788;
  undefined *puStack_780;
  undefined *puStack_778;
  undefined8 ***pppuStack_770;
  code *pcStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined1 *puStack_748;
  undefined8 auStack_740 [2];
  char cStack_729;
  long lStack_728;
  undefined8 *puStack_720;
  undefined8 *puStack_718;
  undefined8 *puStack_710;
  long *plStack_708;
  undefined *puStack_700;
  undefined *puStack_6f8;
  undefined8 ***pppuStack_6f0;
  code *pcStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined1 *puStack_6c8;
  undefined8 auStack_6c0 [2];
  char cStack_6a9;
  long lStack_6a8;
  undefined8 *puStack_6a0;
  undefined8 *puStack_698;
  undefined8 *puStack_690;
  long *plStack_688;
  undefined *puStack_680;
  undefined *puStack_678;
  undefined8 ***pppuStack_670;
  code *pcStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined1 *puStack_648;
  undefined8 auStack_640 [2];
  char cStack_629;
  long lStack_628;
  undefined8 *puStack_620;
  undefined8 *puStack_618;
  undefined8 *puStack_610;
  long *plStack_608;
  undefined *puStack_600;
  undefined *puStack_5f8;
  undefined8 ***pppuStack_5f0;
  code *pcStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined1 *puStack_5c8;
  undefined8 auStack_5c0 [2];
  char cStack_5a9;
  long lStack_5a8;
  undefined8 *puStack_5a0;
  undefined8 *puStack_598;
  undefined8 *puStack_590;
  long *plStack_588;
  undefined *puStack_580;
  undefined *puStack_578;
  undefined8 ***pppuStack_570;
  code *pcStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined1 *puStack_548;
  undefined8 auStack_540 [2];
  char cStack_529;
  long lStack_528;
  undefined8 *puStack_520;
  undefined8 *puStack_518;
  undefined8 *puStack_510;
  undefined *puStack_508;
  undefined8 *puStack_500;
  undefined *puStack_4f8;
  undefined8 ***pppuStack_4f0;
  code *pcStack_4e8;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 *puStack_4c0;
  undefined8 auStack_4b8 [2];
  char cStack_4a1;
  undefined8 auStack_4a0 [2];
  char cStack_489;
  long lStack_488;
  undefined8 *puStack_480;
  undefined8 *puStack_478;
  undefined *puStack_470;
  long *plStack_468;
  undefined *puStack_460;
  undefined *puStack_458;
  undefined8 ***pppuStack_450;
  code *pcStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 *puStack_428;
  undefined8 auStack_420 [2];
  char cStack_409;
  long lStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined *puStack_3f0;
  long *plStack_3e8;
  undefined *puStack_3e0;
  undefined *puStack_3d8;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 *puStack_3a8;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined *puStack_370;
  long *plStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined *puStack_2f0;
  long *plStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined *puStack_270;
  long *plStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined *puStack_1f0;
  long *plStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined8 auStack_120 [3];
  undefined1 auStack_108 [24];
  undefined8 auStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar8 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110c993e8;
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar8 = puVar3;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar8 = puVar3;
      param_4 = param_3;
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
  puVar4 = &uStack_140;
  pcStack_88 = FUN_10af6a998;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar3 = puVar8;
  puVar11 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar8);
  _objc_retain(param_4);
  if (puVar2 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ec608;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_120,puVar2);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f6ec608;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar3 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x000107c278b8(auStack_108,puVar3);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f6ec608;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar3 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_f0,puVar3);
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    func_0x000107c27984(&uStack_140,auStack_120,&lStack_d8,3);
    puVar7 = &UNK_110c99438;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110c99438,&uStack_140,param_5);
    puStack_128 = (undefined1 *)&uStack_140;
    func_0x000107c278ac(&puStack_128);
    lVar13 = 0;
    puVar3 = puVar4;
    puVar11 = param_5;
    do {
      if ((&cStack_d9)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_f0 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = &uStack_140;
    } while (lVar13 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(puVar8);
  puVar4 = (undefined8 *)puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puVar14 = auStack_120;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puVar14);
  _objc_release(param_4);
  _objc_release(puVar8);
  _objc_release(puVar1);
  puVar5 = (undefined *)puVar4;
  __Unwind_Resume();
  puVar10 = &uStack_1c0;
  pcStack_148 = FUN_10af6ac58;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar7;
  puVar9 = puVar3;
  puStack_180 = unaff_x24;
  puStack_178 = puVar14;
  puStack_170 = (undefined *)puVar4;
  puStack_168 = param_4;
  puStack_160 = puVar8;
  puStack_158 = puVar1;
  ppuStack_150 = &puStack_90;
  _objc_retain(puVar7);
  plVar12 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar5 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    puVar14 = auStack_1a0;
    func_0x000107c278b8(auStack_1a0,puVar1);
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    func_0x000107c27984(&uStack_1c0,auStack_1a0,&lStack_188,1);
    puVar2 = &UNK_110c99488;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110c99488,&uStack_1c0,puVar3);
    puStack_1a8 = (undefined1 *)&uStack_1c0;
    func_0x000107c278ac(&puStack_1a8);
    puVar9 = puVar10;
    puVar11 = puVar3;
    puVar4 = &uStack_1c0;
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
      puVar9 = puVar10;
      puVar11 = puVar3;
      puVar4 = &uStack_1c0;
    }
  }
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar6 = puVar1;
  __Unwind_Resume();
  puVar3 = &uStack_240;
  pcStack_1c8 = FUN_10af6adcc;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar2;
  puVar8 = puVar9;
  puStack_200 = unaff_x24;
  puStack_1f8 = puVar14;
  puStack_1f0 = (undefined *)puVar4;
  plStack_1e8 = plVar12;
  puStack_1e0 = puVar1;
  puStack_1d8 = puVar7;
  pppuStack_1d0 = &ppuStack_150;
  _objc_retain(puVar2);
  plVar12 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar6 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    puVar14 = auStack_220;
    func_0x000107c278b8(auStack_220,puVar1);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x000107c27984(&uStack_240,auStack_220,&lStack_208,1);
    puVar5 = &UNK_110c994d8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110c994d8,&uStack_240,puVar9);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x000107c278ac(&puStack_228);
    puVar8 = puVar3;
    puVar11 = puVar9;
    puVar4 = &uStack_240;
    if (cStack_209 < '\0') {
      __ZdlPv(auStack_220[0]);
      puVar8 = puVar3;
      puVar11 = puVar9;
      puVar4 = &uStack_240;
    }
  }
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar6 = puVar1;
  __Unwind_Resume();
  puVar9 = &uStack_2c0;
  pcStack_248 = FUN_10af6af40;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar5;
  puVar3 = puVar8;
  puStack_280 = unaff_x24;
  puStack_278 = puVar14;
  puStack_270 = (undefined *)puVar4;
  plStack_268 = plVar12;
  puStack_260 = puVar1;
  puStack_258 = puVar2;
  pppuStack_250 = &pppuStack_1d0;
  _objc_retain(puVar5);
  plVar12 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar6 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    puVar14 = auStack_2a0;
    func_0x000107c278b8(auStack_2a0,puVar1);
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    func_0x000107c27984(&uStack_2c0,auStack_2a0,&lStack_288,1);
    puVar7 = &UNK_110c99528;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110c99528,&uStack_2c0,puVar8);
    puStack_2a8 = (undefined1 *)&uStack_2c0;
    func_0x000107c278ac(&puStack_2a8);
    puVar3 = puVar9;
    puVar11 = puVar8;
    puVar4 = &uStack_2c0;
    if (cStack_289 < '\0') {
      __ZdlPv(auStack_2a0[0]);
      puVar3 = puVar9;
      puVar11 = puVar8;
      puVar4 = &uStack_2c0;
    }
  }
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar6 = puVar1;
  __Unwind_Resume();
  puVar9 = &uStack_340;
  pcStack_2c8 = FUN_10af6b0b4;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar7;
  puVar8 = puVar3;
  puStack_300 = unaff_x24;
  puStack_2f8 = puVar14;
  puStack_2f0 = (undefined *)puVar4;
  plStack_2e8 = plVar12;
  puStack_2e0 = puVar1;
  puStack_2d8 = puVar5;
  pppuStack_2d0 = &pppuStack_250;
  _objc_retain(puVar7);
  plVar12 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar6 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    puVar14 = auStack_320;
    func_0x000107c278b8(auStack_320,puVar1);
    uStack_340 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    func_0x000107c27984(&uStack_340,auStack_320,&lStack_308,1);
    puVar2 = &UNK_110c99578;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110c99578,&uStack_340,puVar3);
    puStack_328 = (undefined1 *)&uStack_340;
    func_0x000107c278ac(&puStack_328);
    puVar8 = puVar9;
    puVar11 = puVar3;
    puVar4 = &uStack_340;
    if (cStack_309 < '\0') {
      __ZdlPv(auStack_320[0]);
      puVar8 = puVar9;
      puVar11 = puVar3;
      puVar4 = &uStack_340;
    }
  }
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar6 = puVar1;
  __Unwind_Resume();
  puVar9 = &uStack_3c0;
  pcStack_348 = FUN_10af6b228;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar2;
  puVar3 = puVar8;
  puStack_380 = unaff_x24;
  puStack_378 = puVar14;
  puStack_370 = (undefined *)puVar4;
  plStack_368 = plVar12;
  puStack_360 = puVar1;
  puStack_358 = puVar7;
  pppuStack_350 = &pppuStack_2d0;
  _objc_retain(puVar2);
  plVar12 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar6 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    puVar14 = auStack_3a0;
    func_0x000107c278b8(auStack_3a0,puVar1);
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    func_0x000107c27984(&uStack_3c0,auStack_3a0,&lStack_388,1);
    puVar5 = &UNK_110c995c8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110c995c8,&uStack_3c0,puVar8);
    puStack_3a8 = (undefined1 *)&uStack_3c0;
    func_0x000107c278ac(&puStack_3a8);
    puVar3 = puVar9;
    puVar11 = puVar8;
    puVar4 = &uStack_3c0;
    if (cStack_389 < '\0') {
      __ZdlPv(auStack_3a0[0]);
      puVar3 = puVar9;
      puVar11 = puVar8;
      puVar4 = &uStack_3c0;
    }
  }
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar6 = puVar1;
  __Unwind_Resume();
  puVar9 = &uStack_440;
  pcStack_3c8 = FUN_10af6b39c;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar5;
  puVar8 = puVar3;
  puStack_400 = unaff_x24;
  puStack_3f8 = puVar14;
  puStack_3f0 = (undefined *)puVar4;
  plStack_3e8 = plVar12;
  puStack_3e0 = puVar1;
  puStack_3d8 = puVar2;
  pppuStack_3d0 = &pppuStack_350;
  _objc_retain(puVar5);
  plVar12 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar6 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    puVar14 = auStack_420;
    func_0x000107c278b8(auStack_420,puVar1);
    uStack_440 = 0;
    uStack_438 = 0;
    uStack_430 = 0;
    func_0x000107c27984(&uStack_440,auStack_420,&lStack_408,1);
    puVar7 = &UNK_110c99618;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110c99618,&uStack_440,puVar3);
    puStack_428 = (undefined1 *)&uStack_440;
    func_0x000107c278ac(&puStack_428);
    puVar8 = puVar9;
    puVar11 = puVar3;
    puVar4 = &uStack_440;
    if (cStack_409 < '\0') {
      __ZdlPv(auStack_420[0]);
      puVar8 = puVar9;
      puVar11 = puVar3;
      puVar4 = &uStack_440;
    }
  }
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_408) {
    ___stack_chk_fail();
    _objc_release(puVar5);
    _objc_release(puVar5);
    puVar6 = puVar1;
    __Unwind_Resume();
    pcStack_448 = FUN_10af6b510;
    lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar2 = puVar7;
    puVar3 = puVar8;
    puStack_480 = unaff_x24;
    puStack_478 = puVar14;
    puStack_470 = (undefined *)puVar4;
    plStack_468 = plVar12;
    puStack_460 = puVar1;
    puStack_458 = puVar5;
    pppuStack_450 = &pppuStack_3d0;
    _objc_retain(puVar7);
    _objc_retain(puVar8);
    puVar4 = (undefined8 *)0x0;
    if (puVar6 != (undefined *)0x0) {
      plVar12 = *(long **)(puVar6 + 8);
      _objc_retain(puVar7);
      if (puVar7 == (undefined *)0x0) {
        puVar1 = &UNK_10f6ec608;
      }
      else {
        puVar1 = puVar7;
        _objc_retainAutorelease(puVar7);
        func_0x00010bdc3520();
      }
      _objc_release(puVar7);
      unaff_x24 = auStack_4b8;
      func_0x000107c278b8(auStack_4b8,puVar1);
      _objc_retain(puVar8);
      if (puVar8 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f6ec608;
      }
      else {
        _objc_retainAutorelease(puVar8);
        puVar3 = puVar8;
        func_0x00010bdc3520(puVar8);
      }
      _objc_release(puVar8);
      func_0x000107c278b8(auStack_4a0,puVar3);
      uStack_4d8 = 0;
      uStack_4d0 = 0;
      uStack_4c8 = 0;
      func_0x000107c27984(&uStack_4d8,auStack_4b8,&lStack_488,2);
      puVar2 = &UNK_110c99668;
      puVar14 = &uStack_4d8;
      puVar3 = &uStack_4d8;
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110c99668,puVar3,puVar11);
      puStack_4c0 = puVar14;
      func_0x000107c278ac(&puStack_4c0);
      lVar13 = 0;
      puVar4 = auStack_4b8;
      do {
        if ((&cStack_489)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_4a0 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != -0x30);
    }
    _objc_release(puVar8);
    puVar1 = puVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar8);
    if (cStack_4a1 < '\0') {
      __ZdlPv(auStack_4b8[0]);
    }
    _objc_release(puVar8);
    _objc_release(puVar7);
    puVar6 = puVar1;
    __Unwind_Resume();
    puVar9 = &uStack_560;
    pcStack_4e8 = FUN_10af6b740;
    lStack_528 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = puVar2;
    puVar11 = puVar3;
    puStack_520 = unaff_x24;
    puStack_518 = puVar14;
    puStack_510 = puVar4;
    puStack_508 = puVar1;
    puStack_500 = puVar8;
    puStack_4f8 = puVar7;
    pppuStack_4f0 = &pppuStack_450;
    _objc_retain(puVar2);
    plVar12 = (long *)0x0;
    if (puVar6 != (undefined *)0x0) {
      plVar12 = *(long **)(puVar6 + 8);
      _objc_retain(puVar2);
      if (puVar2 == (undefined *)0x0) {
        puVar1 = &UNK_10f6ec608;
      }
      else {
        puVar1 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      puVar14 = auStack_540;
      func_0x000107c278b8(auStack_540,puVar1);
      uStack_560 = 0;
      uStack_558 = 0;
      uStack_550 = 0;
      func_0x000107c27984(&uStack_560,auStack_540,&lStack_528,1);
      puVar5 = &UNK_110c996b8;
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110c996b8,&uStack_560,puVar3);
      puStack_548 = (undefined1 *)&uStack_560;
      func_0x000107c278ac(&puStack_548);
      puVar11 = puVar9;
      puVar4 = &uStack_560;
      if (cStack_529 < '\0') {
        __ZdlPv(auStack_540[0]);
        puVar11 = puVar9;
        puVar4 = &uStack_560;
      }
    }
    puVar1 = puVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_528) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar2);
    _objc_release(puVar2);
    puVar6 = puVar1;
    __Unwind_Resume();
    puVar3 = &uStack_5e0;
    pcStack_568 = FUN_10af6b8b4;
    lStack_5a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar7 = puVar5;
    puVar8 = puVar11;
    puStack_5a0 = unaff_x24;
    puStack_598 = puVar14;
    puStack_590 = puVar4;
    plStack_588 = plVar12;
    puStack_580 = puVar1;
    puStack_578 = puVar2;
    pppuStack_570 = &pppuStack_4f0;
    _objc_retain(puVar5);
    plVar12 = (long *)0x0;
    if (puVar6 != (undefined *)0x0) {
      plVar12 = *(long **)(puVar6 + 8);
      _objc_retain(puVar5);
      if (puVar5 == (undefined *)0x0) {
        puVar1 = &UNK_10f6ec608;
      }
      else {
        puVar1 = puVar5;
        _objc_retainAutorelease(puVar5);
        func_0x00010bdc3520();
      }
      _objc_release(puVar5);
      puVar14 = auStack_5c0;
      func_0x000107c278b8(auStack_5c0,puVar1);
      uStack_5e0 = 0;
      uStack_5d8 = 0;
      uStack_5d0 = 0;
      func_0x000107c27984(&uStack_5e0,auStack_5c0,&lStack_5a8,1);
      puVar7 = &UNK_110c99708;
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110c99708,&uStack_5e0,puVar11);
      puStack_5c8 = (undefined1 *)&uStack_5e0;
      func_0x000107c278ac(&puStack_5c8);
      puVar8 = puVar3;
      puVar4 = &uStack_5e0;
      if (cStack_5a9 < '\0') {
        __ZdlPv(auStack_5c0[0]);
        puVar8 = puVar3;
        puVar4 = &uStack_5e0;
      }
    }
    puVar1 = puVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_5a8) {
      ___stack_chk_fail();
      _objc_release(puVar5);
      _objc_release(puVar5);
      puVar6 = puVar1;
      __Unwind_Resume();
      puVar11 = &uStack_660;
      pcStack_5e8 = FUN_10af6ba28;
      lStack_628 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar2 = puVar7;
      puVar3 = puVar8;
      puStack_620 = unaff_x24;
      puStack_618 = puVar14;
      puStack_610 = puVar4;
      plStack_608 = plVar12;
      puStack_600 = puVar1;
      puStack_5f8 = puVar5;
      pppuStack_5f0 = &pppuStack_570;
      _objc_retain(puVar7);
      plVar12 = (long *)0x0;
      if (puVar6 != (undefined *)0x0) {
        plVar12 = *(long **)(puVar6 + 8);
        _objc_retain(puVar7);
        if (puVar7 == (undefined *)0x0) {
          puVar1 = &UNK_10f6ec608;
        }
        else {
          puVar1 = puVar7;
          _objc_retainAutorelease(puVar7);
          func_0x00010bdc3520();
        }
        _objc_release(puVar7);
        puVar14 = auStack_640;
        func_0x000107c278b8(auStack_640,puVar1);
        uStack_660 = 0;
        uStack_658 = 0;
        uStack_650 = 0;
        func_0x000107c27984(&uStack_660,auStack_640,&lStack_628,1);
        puVar2 = &UNK_110c99758;
        (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110c99758,&uStack_660,puVar8);
        puStack_648 = (undefined1 *)&uStack_660;
        func_0x000107c278ac(&puStack_648);
        puVar3 = puVar11;
        puVar4 = &uStack_660;
        if (cStack_629 < '\0') {
          __ZdlPv(auStack_640[0]);
          puVar3 = puVar11;
          puVar4 = &uStack_660;
        }
      }
      puVar1 = puVar7;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_628) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(puVar7);
      _objc_release(puVar7);
      puVar6 = puVar1;
      __Unwind_Resume();
      puVar11 = &uStack_6e0;
      pcStack_668 = FUN_10af6bb9c;
      lStack_6a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar5 = puVar2;
      puVar8 = puVar3;
      puStack_6a0 = unaff_x24;
      puStack_698 = puVar14;
      puStack_690 = puVar4;
      plStack_688 = plVar12;
      puStack_680 = puVar1;
      puStack_678 = puVar7;
      pppuStack_670 = &pppuStack_5f0;
      _objc_retain(puVar2);
      plVar12 = (long *)0x0;
      if (puVar6 != (undefined *)0x0) {
        plVar12 = *(long **)(puVar6 + 8);
        _objc_retain(puVar2);
        if (puVar2 == (undefined *)0x0) {
          puVar1 = &UNK_10f6ec608;
        }
        else {
          puVar1 = puVar2;
          _objc_retainAutorelease(puVar2);
          func_0x00010bdc3520();
        }
        _objc_release(puVar2);
        puVar14 = auStack_6c0;
        func_0x000107c278b8(auStack_6c0,puVar1);
        uStack_6e0 = 0;
        uStack_6d8 = 0;
        uStack_6d0 = 0;
        func_0x000107c27984(&uStack_6e0,auStack_6c0,&lStack_6a8,1);
        puVar5 = &UNK_110c997a8;
        (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110c997a8,&uStack_6e0,puVar3);
        puStack_6c8 = (undefined1 *)&uStack_6e0;
        func_0x000107c278ac(&puStack_6c8);
        puVar8 = puVar11;
        puVar4 = &uStack_6e0;
        if (cStack_6a9 < '\0') {
          __ZdlPv(auStack_6c0[0]);
          puVar8 = puVar11;
          puVar4 = &uStack_6e0;
        }
      }
      puVar1 = puVar2;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_6a8) {
        ___stack_chk_fail();
        _objc_release(puVar2);
        _objc_release(puVar2);
        puVar6 = puVar1;
        __Unwind_Resume();
        pcStack_6e8 = FUN_10af6bd10;
        lStack_728 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puVar7 = puVar5;
        puStack_720 = unaff_x24;
        puStack_718 = puVar14;
        puStack_710 = puVar4;
        plStack_708 = plVar12;
        puStack_700 = puVar1;
        puStack_6f8 = puVar2;
        pppuStack_6f0 = &pppuStack_670;
        _objc_retain(puVar5);
        if (puVar6 != (undefined *)0x0) {
          plVar12 = *(long **)(puVar6 + 8);
          _objc_retain(puVar5);
          if (puVar5 == (undefined *)0x0) {
            puVar1 = &UNK_10f6ec608;
          }
          else {
            puVar1 = puVar5;
            _objc_retainAutorelease(puVar5);
            func_0x00010bdc3520();
          }
          _objc_release(puVar5);
          func_0x000107c278b8(auStack_740,puVar1);
          uStack_760 = 0;
          uStack_758 = 0;
          uStack_750 = 0;
          func_0x000107c27984(&uStack_760,auStack_740,&lStack_728,1);
          puVar7 = &UNK_110c997f8;
          (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110c997f8,&uStack_760,puVar8);
          puStack_748 = (undefined1 *)&uStack_760;
          func_0x000107c278ac(&puStack_748);
          if (cStack_729 < '\0') {
            __ZdlPv(auStack_740[0]);
          }
        }
        puVar1 = puVar5;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_728) {
          ___stack_chk_fail();
          _objc_release(puVar5);
          _objc_release(puVar5);
          puVar2 = puVar1;
          __Unwind_Resume();
          puStack_788 = (undefined1 *)&uStack_7a0;
          pcStack_768 = FUN_10af6be84;
          if (puVar2 != (undefined *)0x0) {
            uStack_7a0 = 0;
            uStack_798 = 0;
            uStack_790 = 0;
            puStack_780 = puVar1;
            puStack_778 = puVar5;
            pppuStack_770 = &pppuStack_6f0;
            (**(code **)(**(long **)(puVar2 + 8) + 0x18))
                      (*(long **)(puVar2 + 8),&UNK_110c99848,&uStack_7a0,puVar7);
            func_0x000107c278ac(&puStack_788);
          }
          return;
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 10af6a998; end: 10af6ac57;  */

/* WARNING: Removing unreachable block (ram,0x00010af6ac20) */

void FUN_10af6a998(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *unaff_x24;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined1 *puStack_708;
  undefined *puStack_700;
  undefined *puStack_6f8;
  undefined8 ***pppuStack_6f0;
  code *pcStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined1 *puStack_6c8;
  undefined8 auStack_6c0 [2];
  char cStack_6a9;
  long lStack_6a8;
  undefined8 *puStack_6a0;
  undefined8 *puStack_698;
  undefined8 *puStack_690;
  long *plStack_688;
  undefined *puStack_680;
  undefined *puStack_678;
  undefined8 ***pppuStack_670;
  code *pcStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined1 *puStack_648;
  undefined8 auStack_640 [2];
  char cStack_629;
  long lStack_628;
  undefined8 *puStack_620;
  undefined8 *puStack_618;
  undefined8 *puStack_610;
  long *plStack_608;
  undefined *puStack_600;
  undefined *puStack_5f8;
  undefined8 ***pppuStack_5f0;
  code *pcStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined1 *puStack_5c8;
  undefined8 auStack_5c0 [2];
  char cStack_5a9;
  long lStack_5a8;
  undefined8 *puStack_5a0;
  undefined8 *puStack_598;
  undefined8 *puStack_590;
  long *plStack_588;
  undefined *puStack_580;
  undefined *puStack_578;
  undefined8 ***pppuStack_570;
  code *pcStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined1 *puStack_548;
  undefined8 auStack_540 [2];
  char cStack_529;
  long lStack_528;
  undefined8 *puStack_520;
  undefined8 *puStack_518;
  undefined8 *puStack_510;
  long *plStack_508;
  undefined *puStack_500;
  undefined *puStack_4f8;
  undefined8 ***pppuStack_4f0;
  code *pcStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined1 *puStack_4c8;
  undefined8 auStack_4c0 [2];
  char cStack_4a9;
  long lStack_4a8;
  undefined8 *puStack_4a0;
  undefined8 *puStack_498;
  undefined8 *puStack_490;
  undefined *puStack_488;
  undefined8 *puStack_480;
  undefined *puStack_478;
  undefined8 ***pppuStack_470;
  code *pcStack_468;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 *puStack_440;
  undefined8 auStack_438 [2];
  char cStack_421;
  undefined8 auStack_420 [2];
  char cStack_409;
  long lStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined *puStack_3f0;
  long *plStack_3e8;
  undefined *puStack_3e0;
  undefined *puStack_3d8;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 *puStack_3a8;
  undefined8 auStack_3a0 [2];
  char cStack_389;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined *puStack_370;
  long *plStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined *puStack_2f0;
  long *plStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined *puStack_270;
  long *plStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined8 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined *puStack_1f0;
  long *plStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined *puStack_170;
  long *plStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar3 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  puVar10 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_a0,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f6ec608;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_88,puVar2);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f6ec608;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_70,puVar2);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x000107c27984(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar1 = &UNK_110c99438;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110c99438,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar11 = 0;
    puVar2 = puVar3;
    puVar10 = param_5;
    do {
      if ((&cStack_59)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar11 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar3 = (undefined8 *)param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puVar13 = auStack_a0;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puVar13);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = (undefined *)puVar3;
  __Unwind_Resume();
  puVar9 = &uStack_140;
  pcStack_c8 = FUN_10af6ac58;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puVar8 = puVar2;
  puStack_100 = unaff_x24;
  puStack_f8 = puVar13;
  puStack_f0 = (undefined *)puVar3;
  puStack_e8 = param_4;
  puStack_e0 = param_3;
  puStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  plVar12 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar5 = &UNK_10f6ec608;
    }
    else {
      puVar5 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    puVar13 = auStack_120;
    func_0x000107c278b8(auStack_120,puVar5);
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    func_0x000107c27984(&uStack_140,auStack_120,&lStack_108,1);
    puVar5 = &UNK_110c99488;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110c99488,&uStack_140,puVar2);
    puStack_128 = (undefined1 *)&uStack_140;
    func_0x000107c278ac(&puStack_128);
    puVar8 = puVar9;
    puVar10 = puVar2;
    puVar3 = &uStack_140;
    if (cStack_109 < '\0') {
      __ZdlPv(auStack_120[0]);
      puVar8 = puVar9;
      puVar10 = puVar2;
      puVar3 = &uStack_140;
    }
  }
  puVar4 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar6 = puVar4;
  __Unwind_Resume();
  puVar9 = &uStack_1c0;
  pcStack_148 = FUN_10af6adcc;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar5;
  puVar2 = puVar8;
  puStack_180 = unaff_x24;
  puStack_178 = puVar13;
  puStack_170 = (undefined *)puVar3;
  plStack_168 = plVar12;
  puStack_160 = puVar4;
  puStack_158 = puVar1;
  ppuStack_150 = &puStack_d0;
  _objc_retain(puVar5);
  plVar12 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar6 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    puVar13 = auStack_1a0;
    func_0x000107c278b8(auStack_1a0,puVar1);
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    func_0x000107c27984(&uStack_1c0,auStack_1a0,&lStack_188,1);
    puVar7 = &UNK_110c994d8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110c994d8,&uStack_1c0,puVar8);
    puStack_1a8 = (undefined1 *)&uStack_1c0;
    func_0x000107c278ac(&puStack_1a8);
    puVar2 = puVar9;
    puVar10 = puVar8;
    puVar3 = &uStack_1c0;
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
      puVar2 = puVar9;
      puVar10 = puVar8;
      puVar3 = &uStack_1c0;
    }
  }
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar6 = puVar1;
  __Unwind_Resume();
  puVar9 = &uStack_240;
  pcStack_1c8 = FUN_10af6af40;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puVar8 = puVar2;
  puStack_200 = unaff_x24;
  puStack_1f8 = puVar13;
  puStack_1f0 = (undefined *)puVar3;
  plStack_1e8 = plVar12;
  puStack_1e0 = puVar1;
  puStack_1d8 = puVar5;
  pppuStack_1d0 = &ppuStack_150;
  _objc_retain(puVar7);
  plVar12 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar6 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    puVar13 = auStack_220;
    func_0x000107c278b8(auStack_220,puVar1);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x000107c27984(&uStack_240,auStack_220,&lStack_208,1);
    puVar4 = &UNK_110c99528;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110c99528,&uStack_240,puVar2);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x000107c278ac(&puStack_228);
    puVar8 = puVar9;
    puVar10 = puVar2;
    puVar3 = &uStack_240;
    if (cStack_209 < '\0') {
      __ZdlPv(auStack_220[0]);
      puVar8 = puVar9;
      puVar10 = puVar2;
      puVar3 = &uStack_240;
    }
  }
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar6 = puVar1;
  __Unwind_Resume();
  puVar9 = &uStack_2c0;
  pcStack_248 = FUN_10af6b0b4;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar4;
  puVar2 = puVar8;
  puStack_280 = unaff_x24;
  puStack_278 = puVar13;
  puStack_270 = (undefined *)puVar3;
  plStack_268 = plVar12;
  puStack_260 = puVar1;
  puStack_258 = puVar7;
  pppuStack_250 = &pppuStack_1d0;
  _objc_retain(puVar4);
  plVar12 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar6 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    puVar13 = auStack_2a0;
    func_0x000107c278b8(auStack_2a0,puVar1);
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    func_0x000107c27984(&uStack_2c0,auStack_2a0,&lStack_288,1);
    puVar5 = &UNK_110c99578;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110c99578,&uStack_2c0,puVar8);
    puStack_2a8 = (undefined1 *)&uStack_2c0;
    func_0x000107c278ac(&puStack_2a8);
    puVar2 = puVar9;
    puVar10 = puVar8;
    puVar3 = &uStack_2c0;
    if (cStack_289 < '\0') {
      __ZdlPv(auStack_2a0[0]);
      puVar2 = puVar9;
      puVar10 = puVar8;
      puVar3 = &uStack_2c0;
    }
  }
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  puVar6 = puVar1;
  __Unwind_Resume();
  puVar9 = &uStack_340;
  pcStack_2c8 = FUN_10af6b228;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar5;
  puVar8 = puVar2;
  puStack_300 = unaff_x24;
  puStack_2f8 = puVar13;
  puStack_2f0 = (undefined *)puVar3;
  plStack_2e8 = plVar12;
  puStack_2e0 = puVar1;
  puStack_2d8 = puVar4;
  pppuStack_2d0 = &pppuStack_250;
  _objc_retain(puVar5);
  plVar12 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar6 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    puVar13 = auStack_320;
    func_0x000107c278b8(auStack_320,puVar1);
    uStack_340 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    func_0x000107c27984(&uStack_340,auStack_320,&lStack_308,1);
    puVar7 = &UNK_110c995c8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110c995c8,&uStack_340,puVar2);
    puStack_328 = (undefined1 *)&uStack_340;
    func_0x000107c278ac(&puStack_328);
    puVar8 = puVar9;
    puVar10 = puVar2;
    puVar3 = &uStack_340;
    if (cStack_309 < '\0') {
      __ZdlPv(auStack_320[0]);
      puVar8 = puVar9;
      puVar10 = puVar2;
      puVar3 = &uStack_340;
    }
  }
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar6 = puVar1;
  __Unwind_Resume();
  puVar9 = &uStack_3c0;
  pcStack_348 = FUN_10af6b39c;
  lStack_388 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puVar2 = puVar8;
  puStack_380 = unaff_x24;
  puStack_378 = puVar13;
  puStack_370 = (undefined *)puVar3;
  plStack_368 = plVar12;
  puStack_360 = puVar1;
  puStack_358 = puVar5;
  pppuStack_350 = &pppuStack_2d0;
  _objc_retain(puVar7);
  plVar12 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar6 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    puVar13 = auStack_3a0;
    func_0x000107c278b8(auStack_3a0,puVar1);
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    func_0x000107c27984(&uStack_3c0,auStack_3a0,&lStack_388,1);
    puVar4 = &UNK_110c99618;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110c99618,&uStack_3c0,puVar8);
    puStack_3a8 = (undefined1 *)&uStack_3c0;
    func_0x000107c278ac(&puStack_3a8);
    puVar2 = puVar9;
    puVar10 = puVar8;
    puVar3 = &uStack_3c0;
    if (cStack_389 < '\0') {
      __ZdlPv(auStack_3a0[0]);
      puVar2 = puVar9;
      puVar10 = puVar8;
      puVar3 = &uStack_3c0;
    }
  }
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_388) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar6 = puVar1;
  __Unwind_Resume();
  pcStack_3c8 = FUN_10af6b510;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar4;
  puVar8 = puVar2;
  puStack_400 = unaff_x24;
  puStack_3f8 = puVar13;
  puStack_3f0 = (undefined *)puVar3;
  plStack_3e8 = plVar12;
  puStack_3e0 = puVar1;
  puStack_3d8 = puVar7;
  pppuStack_3d0 = &pppuStack_350;
  _objc_retain(puVar4);
  _objc_retain(puVar2);
  puVar3 = (undefined8 *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar6 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x24 = auStack_438;
    func_0x000107c278b8(auStack_438,puVar1);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f6ec608;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar3 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x000107c278b8(auStack_420,puVar3);
    uStack_458 = 0;
    uStack_450 = 0;
    uStack_448 = 0;
    func_0x000107c27984(&uStack_458,auStack_438,&lStack_408,2);
    puVar5 = &UNK_110c99668;
    puVar13 = &uStack_458;
    puVar8 = &uStack_458;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110c99668,puVar8,puVar10);
    puStack_440 = puVar13;
    func_0x000107c278ac(&puStack_440);
    lVar11 = 0;
    puVar3 = auStack_438;
    do {
      if ((&cStack_409)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_420 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(puVar2);
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_421 < '\0') {
    __ZdlPv(auStack_438[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar4);
  puVar6 = puVar1;
  __Unwind_Resume();
  puVar9 = &uStack_4e0;
  pcStack_468 = FUN_10af6b740;
  lStack_4a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar5;
  puVar10 = puVar8;
  puStack_4a0 = unaff_x24;
  puStack_498 = puVar13;
  puStack_490 = puVar3;
  puStack_488 = puVar1;
  puStack_480 = puVar2;
  puStack_478 = puVar4;
  pppuStack_470 = &pppuStack_3d0;
  _objc_retain(puVar5);
  plVar12 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar6 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    puVar13 = auStack_4c0;
    func_0x000107c278b8(auStack_4c0,puVar1);
    uStack_4e0 = 0;
    uStack_4d8 = 0;
    uStack_4d0 = 0;
    func_0x000107c27984(&uStack_4e0,auStack_4c0,&lStack_4a8,1);
    puVar7 = &UNK_110c996b8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110c996b8,&uStack_4e0,puVar8);
    puStack_4c8 = (undefined1 *)&uStack_4e0;
    func_0x000107c278ac(&puStack_4c8);
    puVar10 = puVar9;
    puVar3 = &uStack_4e0;
    if (cStack_4a9 < '\0') {
      __ZdlPv(auStack_4c0[0]);
      puVar10 = puVar9;
      puVar3 = &uStack_4e0;
    }
  }
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar6 = puVar1;
  __Unwind_Resume();
  puVar8 = &uStack_560;
  pcStack_4e8 = FUN_10af6b8b4;
  lStack_528 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puVar2 = puVar10;
  puStack_520 = unaff_x24;
  puStack_518 = puVar13;
  puStack_510 = puVar3;
  plStack_508 = plVar12;
  puStack_500 = puVar1;
  puStack_4f8 = puVar5;
  pppuStack_4f0 = &pppuStack_470;
  _objc_retain(puVar7);
  plVar12 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar6 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    puVar13 = auStack_540;
    func_0x000107c278b8(auStack_540,puVar1);
    uStack_560 = 0;
    uStack_558 = 0;
    uStack_550 = 0;
    func_0x000107c27984(&uStack_560,auStack_540,&lStack_528,1);
    puVar4 = &UNK_110c99708;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110c99708,&uStack_560,puVar10);
    puStack_548 = (undefined1 *)&uStack_560;
    func_0x000107c278ac(&puStack_548);
    puVar2 = puVar8;
    puVar3 = &uStack_560;
    if (cStack_529 < '\0') {
      __ZdlPv(auStack_540[0]);
      puVar2 = puVar8;
      puVar3 = &uStack_560;
    }
  }
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_528) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar6 = puVar1;
  __Unwind_Resume();
  puVar8 = &uStack_5e0;
  pcStack_568 = FUN_10af6ba28;
  lStack_5a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar4;
  puVar10 = puVar2;
  puStack_5a0 = unaff_x24;
  puStack_598 = puVar13;
  puStack_590 = puVar3;
  plStack_588 = plVar12;
  puStack_580 = puVar1;
  puStack_578 = puVar7;
  pppuStack_570 = &pppuStack_4f0;
  _objc_retain(puVar4);
  plVar12 = (long *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar12 = *(long **)(puVar6 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    puVar13 = auStack_5c0;
    func_0x000107c278b8(auStack_5c0,puVar1);
    uStack_5e0 = 0;
    uStack_5d8 = 0;
    uStack_5d0 = 0;
    func_0x000107c27984(&uStack_5e0,auStack_5c0,&lStack_5a8,1);
    puVar5 = &UNK_110c99758;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110c99758,&uStack_5e0,puVar2);
    puStack_5c8 = (undefined1 *)&uStack_5e0;
    func_0x000107c278ac(&puStack_5c8);
    puVar10 = puVar8;
    puVar3 = &uStack_5e0;
    if (cStack_5a9 < '\0') {
      __ZdlPv(auStack_5c0[0]);
      puVar10 = puVar8;
      puVar3 = &uStack_5e0;
    }
  }
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_5a8) {
    ___stack_chk_fail();
    _objc_release(puVar4);
    _objc_release(puVar4);
    puVar6 = puVar1;
    __Unwind_Resume();
    puVar8 = &uStack_660;
    pcStack_5e8 = FUN_10af6bb9c;
    lStack_628 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar7 = puVar5;
    puVar2 = puVar10;
    puStack_620 = unaff_x24;
    puStack_618 = puVar13;
    puStack_610 = puVar3;
    plStack_608 = plVar12;
    puStack_600 = puVar1;
    puStack_5f8 = puVar4;
    pppuStack_5f0 = &pppuStack_570;
    _objc_retain(puVar5);
    plVar12 = (long *)0x0;
    if (puVar6 != (undefined *)0x0) {
      plVar12 = *(long **)(puVar6 + 8);
      _objc_retain(puVar5);
      if (puVar5 == (undefined *)0x0) {
        puVar1 = &UNK_10f6ec608;
      }
      else {
        puVar1 = puVar5;
        _objc_retainAutorelease(puVar5);
        func_0x00010bdc3520();
      }
      _objc_release(puVar5);
      puVar13 = auStack_640;
      func_0x000107c278b8(auStack_640,puVar1);
      uStack_660 = 0;
      uStack_658 = 0;
      uStack_650 = 0;
      func_0x000107c27984(&uStack_660,auStack_640,&lStack_628,1);
      puVar7 = &UNK_110c997a8;
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110c997a8,&uStack_660,puVar10);
      puStack_648 = (undefined1 *)&uStack_660;
      func_0x000107c278ac(&puStack_648);
      puVar2 = puVar8;
      puVar3 = &uStack_660;
      if (cStack_629 < '\0') {
        __ZdlPv(auStack_640[0]);
        puVar2 = puVar8;
        puVar3 = &uStack_660;
      }
    }
    puVar1 = puVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_628) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar5);
    _objc_release(puVar5);
    puVar6 = puVar1;
    __Unwind_Resume();
    pcStack_668 = FUN_10af6bd10;
    lStack_6a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = puVar7;
    puStack_6a0 = unaff_x24;
    puStack_698 = puVar13;
    puStack_690 = puVar3;
    plStack_688 = plVar12;
    puStack_680 = puVar1;
    puStack_678 = puVar5;
    pppuStack_670 = &pppuStack_5f0;
    _objc_retain(puVar7);
    if (puVar6 != (undefined *)0x0) {
      plVar12 = *(long **)(puVar6 + 8);
      _objc_retain(puVar7);
      if (puVar7 == (undefined *)0x0) {
        puVar1 = &UNK_10f6ec608;
      }
      else {
        puVar1 = puVar7;
        _objc_retainAutorelease(puVar7);
        func_0x00010bdc3520();
      }
      _objc_release(puVar7);
      func_0x000107c278b8(auStack_6c0,puVar1);
      uStack_6e0 = 0;
      uStack_6d8 = 0;
      uStack_6d0 = 0;
      func_0x000107c27984(&uStack_6e0,auStack_6c0,&lStack_6a8,1);
      puVar4 = &UNK_110c997f8;
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110c997f8,&uStack_6e0,puVar2);
      puStack_6c8 = (undefined1 *)&uStack_6e0;
      func_0x000107c278ac(&puStack_6c8);
      if (cStack_6a9 < '\0') {
        __ZdlPv(auStack_6c0[0]);
      }
    }
    puVar1 = puVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_6a8) {
      ___stack_chk_fail();
      _objc_release(puVar7);
      _objc_release(puVar7);
      puVar5 = puVar1;
      __Unwind_Resume();
      puStack_708 = (undefined1 *)&uStack_720;
      pcStack_6e8 = FUN_10af6be84;
      if (puVar5 != (undefined *)0x0) {
        uStack_720 = 0;
        uStack_718 = 0;
        uStack_710 = 0;
        puStack_700 = puVar1;
        puStack_6f8 = puVar7;
        pppuStack_6f0 = &pppuStack_670;
        (**(code **)(**(long **)(puVar5 + 8) + 0x18))
                  (*(long **)(puVar5 + 8),&UNK_110c99848,&uStack_720,puVar4);
        func_0x000107c278ac(&puStack_708);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 10af6ac58; end: 10af6adcb;  */

void FUN_10af6ac58(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined1 *puStack_648;
  undefined *puStack_640;
  undefined *puStack_638;
  undefined8 ***pppuStack_630;
  code *pcStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined1 *puStack_608;
  undefined8 auStack_600 [2];
  char cStack_5e9;
  long lStack_5e8;
  undefined8 *puStack_5e0;
  undefined8 *puStack_5d8;
  undefined8 *puStack_5d0;
  long *plStack_5c8;
  undefined *puStack_5c0;
  undefined *puStack_5b8;
  undefined8 ***pppuStack_5b0;
  code *pcStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined1 *puStack_588;
  undefined8 auStack_580 [2];
  char cStack_569;
  long lStack_568;
  undefined8 *puStack_560;
  undefined8 *puStack_558;
  undefined8 *puStack_550;
  long *plStack_548;
  undefined *puStack_540;
  undefined *puStack_538;
  undefined8 ***pppuStack_530;
  code *pcStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined1 *puStack_508;
  undefined8 auStack_500 [2];
  char cStack_4e9;
  long lStack_4e8;
  undefined8 *puStack_4e0;
  undefined8 *puStack_4d8;
  undefined8 *puStack_4d0;
  long *plStack_4c8;
  undefined *puStack_4c0;
  undefined *puStack_4b8;
  undefined8 ***pppuStack_4b0;
  code *pcStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined1 *puStack_488;
  undefined8 auStack_480 [2];
  char cStack_469;
  long lStack_468;
  undefined8 *puStack_460;
  undefined8 *puStack_458;
  undefined8 *puStack_450;
  long *plStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  undefined8 ***pppuStack_430;
  code *pcStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined1 *puStack_408;
  undefined8 auStack_400 [2];
  char cStack_3e9;
  long lStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 *puStack_3d0;
  undefined *puStack_3c8;
  undefined8 *puStack_3c0;
  undefined *puStack_3b8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 *puStack_380;
  undefined8 auStack_378 [2];
  char cStack_361;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar7 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = auStack_60;
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110c99488;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c99488,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar3 = puVar7;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = puVar7;
      param_4 = param_3;
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
  puVar8 = &uStack_100;
  pcStack_88 = FUN_10af6adcc;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puVar7 = puVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ec608;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_e0;
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar5 = &UNK_110c994d8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c994d8,&uStack_100,puVar3);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    puVar7 = puVar8;
    param_4 = puVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar7 = puVar8;
      param_4 = puVar3;
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
  puVar8 = &uStack_180;
  pcStack_108 = FUN_10af6af40;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar5;
  puVar3 = puVar7;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar5);
  if (puVar2 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar2 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x23 = auStack_160;
    func_0x000107c278b8(auStack_160,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x000107c27984(&uStack_180,auStack_160,&lStack_148,1);
    puVar1 = &UNK_110c99528;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c99528,&uStack_180,puVar7);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x000107c278ac(&puStack_168);
    puVar3 = puVar8;
    param_4 = puVar7;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar3 = puVar8;
      param_4 = puVar7;
    }
  }
  puVar2 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  __Unwind_Resume();
  puVar8 = &uStack_200;
  pcStack_188 = FUN_10af6b0b4;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puVar7 = puVar3;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ec608;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_1e0;
    func_0x000107c278b8(auStack_1e0,puVar2);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x000107c27984(&uStack_200,auStack_1e0,&lStack_1c8,1);
    puVar5 = &UNK_110c99578;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c99578,&uStack_200,puVar3);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x000107c278ac(&puStack_1e8);
    puVar7 = puVar8;
    param_4 = puVar3;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      puVar7 = puVar8;
      param_4 = puVar3;
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
  puVar8 = &uStack_280;
  pcStack_208 = FUN_10af6b228;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar5;
  puVar3 = puVar7;
  pppuStack_210 = &pppuStack_190;
  _objc_retain(puVar5);
  if (puVar2 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar2 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x23 = auStack_260;
    func_0x000107c278b8(auStack_260,puVar1);
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    func_0x000107c27984(&uStack_280,auStack_260,&lStack_248,1);
    puVar1 = &UNK_110c995c8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c995c8,&uStack_280,puVar7);
    puStack_268 = (undefined1 *)&uStack_280;
    func_0x000107c278ac(&puStack_268);
    puVar3 = puVar8;
    param_4 = puVar7;
    if (cStack_249 < '\0') {
      __ZdlPv(auStack_260[0]);
      puVar3 = puVar8;
      param_4 = puVar7;
    }
  }
  puVar2 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  __Unwind_Resume();
  puVar8 = &uStack_300;
  pcStack_288 = FUN_10af6b39c;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puVar7 = puVar3;
  pppuStack_290 = &pppuStack_210;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ec608;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_2e0;
    func_0x000107c278b8(auStack_2e0,puVar2);
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    func_0x000107c27984(&uStack_300,auStack_2e0,&lStack_2c8,1);
    puVar5 = &UNK_110c99618;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c99618,&uStack_300,puVar3);
    puStack_2e8 = (undefined1 *)&uStack_300;
    func_0x000107c278ac(&puStack_2e8);
    puVar7 = puVar8;
    param_4 = puVar3;
    if (cStack_2c9 < '\0') {
      __ZdlPv(auStack_2e0[0]);
      puVar7 = puVar8;
      param_4 = puVar3;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  pcStack_308 = FUN_10af6b510;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar5;
  puVar3 = puVar7;
  pppuStack_310 = &pppuStack_290;
  _objc_retain(puVar5);
  _objc_retain(puVar7);
  puVar8 = (undefined8 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar2 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x24 = auStack_378;
    func_0x000107c278b8(auStack_378,puVar1);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f6ec608;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar3 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_360,puVar3);
    uStack_398 = 0;
    uStack_390 = 0;
    uStack_388 = 0;
    func_0x000107c27984(&uStack_398,auStack_378,&lStack_348,2);
    puVar1 = &UNK_110c99668;
    unaff_x23 = &uStack_398;
    puVar3 = &uStack_398;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c99668,puVar3,param_4);
    puStack_380 = unaff_x23;
    func_0x000107c278ac(&puStack_380);
    lVar12 = 0;
    puVar8 = auStack_378;
    do {
      if ((&cStack_349)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_360 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar7);
  puVar2 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  if (cStack_361 < '\0') {
    __ZdlPv(auStack_378[0]);
  }
  _objc_release(puVar7);
  _objc_release(puVar5);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar10 = &uStack_420;
  pcStack_3a8 = FUN_10af6b740;
  lStack_3e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar9 = puVar3;
  puStack_3e0 = unaff_x24;
  puStack_3d8 = unaff_x23;
  puStack_3d0 = puVar8;
  puStack_3c8 = puVar2;
  puStack_3c0 = puVar7;
  puStack_3b8 = puVar5;
  pppuStack_3b0 = &pppuStack_310;
  _objc_retain(puVar1);
  plVar11 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ec608;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_400;
    func_0x000107c278b8(auStack_400,puVar2);
    uStack_420 = 0;
    uStack_418 = 0;
    uStack_410 = 0;
    func_0x000107c27984(&uStack_420,auStack_400,&lStack_3e8,1);
    puVar6 = &UNK_110c996b8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c996b8,&uStack_420,puVar3);
    puStack_408 = (undefined1 *)&uStack_420;
    func_0x000107c278ac(&puStack_408);
    puVar9 = puVar10;
    puVar8 = &uStack_420;
    if (cStack_3e9 < '\0') {
      __ZdlPv(auStack_400[0]);
      puVar9 = puVar10;
      puVar8 = &uStack_420;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar7 = &uStack_4a0;
  pcStack_428 = FUN_10af6b8b4;
  lStack_468 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar6;
  puVar3 = puVar9;
  puStack_460 = unaff_x24;
  puStack_458 = unaff_x23;
  puStack_450 = puVar8;
  plStack_448 = plVar11;
  puStack_440 = puVar2;
  puStack_438 = puVar1;
  pppuStack_430 = &pppuStack_3b0;
  _objc_retain(puVar6);
  plVar11 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x23 = auStack_480;
    func_0x000107c278b8(auStack_480,puVar1);
    uStack_4a0 = 0;
    uStack_498 = 0;
    uStack_490 = 0;
    func_0x000107c27984(&uStack_4a0,auStack_480,&lStack_468,1);
    puVar5 = &UNK_110c99708;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c99708,&uStack_4a0,puVar9);
    puStack_488 = (undefined1 *)&uStack_4a0;
    func_0x000107c278ac(&puStack_488);
    puVar3 = puVar7;
    puVar8 = &uStack_4a0;
    if (cStack_469 < '\0') {
      __ZdlPv(auStack_480[0]);
      puVar3 = puVar7;
      puVar8 = &uStack_4a0;
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_468) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar9 = &uStack_520;
  pcStack_4a8 = FUN_10af6ba28;
  lStack_4e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar5;
  puVar7 = puVar3;
  puStack_4e0 = unaff_x24;
  puStack_4d8 = unaff_x23;
  puStack_4d0 = puVar8;
  plStack_4c8 = plVar11;
  puStack_4c0 = puVar1;
  puStack_4b8 = puVar6;
  pppuStack_4b0 = &pppuStack_430;
  _objc_retain(puVar5);
  plVar11 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x23 = auStack_500;
    func_0x000107c278b8(auStack_500,puVar1);
    uStack_520 = 0;
    uStack_518 = 0;
    uStack_510 = 0;
    func_0x000107c27984(&uStack_520,auStack_500,&lStack_4e8,1);
    puVar2 = &UNK_110c99758;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c99758,&uStack_520,puVar3);
    puStack_508 = (undefined1 *)&uStack_520;
    func_0x000107c278ac(&puStack_508);
    puVar7 = puVar9;
    puVar8 = &uStack_520;
    if (cStack_4e9 < '\0') {
      __ZdlPv(auStack_500[0]);
      puVar7 = puVar9;
      puVar8 = &uStack_520;
    }
  }
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar9 = &uStack_5a0;
  pcStack_528 = FUN_10af6bb9c;
  lStack_568 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar2;
  puVar3 = puVar7;
  puStack_560 = unaff_x24;
  puStack_558 = unaff_x23;
  puStack_550 = puVar8;
  plStack_548 = plVar11;
  puStack_540 = puVar1;
  puStack_538 = puVar5;
  pppuStack_530 = &pppuStack_4b0;
  _objc_retain(puVar2);
  plVar11 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x23 = auStack_580;
    func_0x000107c278b8(auStack_580,puVar1);
    uStack_5a0 = 0;
    uStack_598 = 0;
    uStack_590 = 0;
    func_0x000107c27984(&uStack_5a0,auStack_580,&lStack_568,1);
    puVar6 = &UNK_110c997a8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c997a8,&uStack_5a0,puVar7);
    puStack_588 = (undefined1 *)&uStack_5a0;
    func_0x000107c278ac(&puStack_588);
    puVar3 = puVar9;
    puVar8 = &uStack_5a0;
    if (cStack_569 < '\0') {
      __ZdlPv(auStack_580[0]);
      puVar3 = puVar9;
      puVar8 = &uStack_5a0;
    }
  }
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_568) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_5a8 = FUN_10af6bd10;
  lStack_5e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar6;
  puStack_5e0 = unaff_x24;
  puStack_5d8 = unaff_x23;
  puStack_5d0 = puVar8;
  plStack_5c8 = plVar11;
  puStack_5c0 = puVar1;
  puStack_5b8 = puVar2;
  pppuStack_5b0 = &pppuStack_530;
  _objc_retain(puVar6);
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    func_0x000107c278b8(auStack_600,puVar1);
    uStack_620 = 0;
    uStack_618 = 0;
    uStack_610 = 0;
    func_0x000107c27984(&uStack_620,auStack_600,&lStack_5e8,1);
    puVar5 = &UNK_110c997f8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c997f8,&uStack_620,puVar3);
    puStack_608 = (undefined1 *)&uStack_620;
    func_0x000107c278ac(&puStack_608);
    if (cStack_5e9 < '\0') {
      __ZdlPv(auStack_600[0]);
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar2 = puVar1;
  __Unwind_Resume();
  puStack_648 = (undefined1 *)&uStack_660;
  pcStack_628 = FUN_10af6be84;
  if (puVar2 != (undefined *)0x0) {
    uStack_660 = 0;
    uStack_658 = 0;
    uStack_650 = 0;
    puStack_640 = puVar1;
    puStack_638 = puVar6;
    pppuStack_630 = &pppuStack_5b0;
    (**(code **)(**(long **)(puVar2 + 8) + 0x18))
              (*(long **)(puVar2 + 8),&UNK_110c99848,&uStack_660,puVar5);
    func_0x000107c278ac(&puStack_648);
  }
  return;
}



/* Entry: 10af6adcc; end: 10af6af3f;  */

void FUN_10af6adcc(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined1 *puStack_5c8;
  undefined *puStack_5c0;
  undefined *puStack_5b8;
  undefined8 ***pppuStack_5b0;
  code *pcStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined1 *puStack_588;
  undefined8 auStack_580 [2];
  char cStack_569;
  long lStack_568;
  undefined8 *puStack_560;
  undefined8 *puStack_558;
  undefined8 *puStack_550;
  long *plStack_548;
  undefined *puStack_540;
  undefined *puStack_538;
  undefined8 ***pppuStack_530;
  code *pcStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined1 *puStack_508;
  undefined8 auStack_500 [2];
  char cStack_4e9;
  long lStack_4e8;
  undefined8 *puStack_4e0;
  undefined8 *puStack_4d8;
  undefined8 *puStack_4d0;
  long *plStack_4c8;
  undefined *puStack_4c0;
  undefined *puStack_4b8;
  undefined8 ***pppuStack_4b0;
  code *pcStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined1 *puStack_488;
  undefined8 auStack_480 [2];
  char cStack_469;
  long lStack_468;
  undefined8 *puStack_460;
  undefined8 *puStack_458;
  undefined8 *puStack_450;
  long *plStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  undefined8 ***pppuStack_430;
  code *pcStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined1 *puStack_408;
  undefined8 auStack_400 [2];
  char cStack_3e9;
  long lStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 *puStack_3d0;
  long *plStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined1 *puStack_388;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  undefined *puStack_348;
  undefined8 *puStack_340;
  undefined *puStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 *puStack_300;
  undefined8 auStack_2f8 [2];
  char cStack_2e1;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar7 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = auStack_60;
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110c994d8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c994d8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar7 = puVar3;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar7 = puVar3;
      param_4 = param_3;
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
  puVar8 = &uStack_100;
  pcStack_88 = FUN_10af6af40;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puVar3 = puVar7;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ec608;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_e0;
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar5 = &UNK_110c99528;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c99528,&uStack_100,puVar7);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    puVar3 = puVar8;
    param_4 = puVar7;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar3 = puVar8;
      param_4 = puVar7;
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
  puVar8 = &uStack_180;
  pcStack_108 = FUN_10af6b0b4;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar5;
  puVar7 = puVar3;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar5);
  if (puVar2 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar2 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x23 = auStack_160;
    func_0x000107c278b8(auStack_160,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x000107c27984(&uStack_180,auStack_160,&lStack_148,1);
    puVar1 = &UNK_110c99578;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c99578,&uStack_180,puVar3);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x000107c278ac(&puStack_168);
    puVar7 = puVar8;
    param_4 = puVar3;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar7 = puVar8;
      param_4 = puVar3;
    }
  }
  puVar2 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  __Unwind_Resume();
  puVar8 = &uStack_200;
  pcStack_188 = FUN_10af6b228;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puVar3 = puVar7;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ec608;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_1e0;
    func_0x000107c278b8(auStack_1e0,puVar2);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x000107c27984(&uStack_200,auStack_1e0,&lStack_1c8,1);
    puVar5 = &UNK_110c995c8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c995c8,&uStack_200,puVar7);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x000107c278ac(&puStack_1e8);
    puVar3 = puVar8;
    param_4 = puVar7;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      puVar3 = puVar8;
      param_4 = puVar7;
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
  puVar8 = &uStack_280;
  pcStack_208 = FUN_10af6b39c;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar5;
  puVar7 = puVar3;
  pppuStack_210 = &pppuStack_190;
  _objc_retain(puVar5);
  if (puVar2 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar2 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x23 = auStack_260;
    func_0x000107c278b8(auStack_260,puVar1);
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    func_0x000107c27984(&uStack_280,auStack_260,&lStack_248,1);
    puVar1 = &UNK_110c99618;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c99618,&uStack_280,puVar3);
    puStack_268 = (undefined1 *)&uStack_280;
    func_0x000107c278ac(&puStack_268);
    puVar7 = puVar8;
    param_4 = puVar3;
    if (cStack_249 < '\0') {
      __ZdlPv(auStack_260[0]);
      puVar7 = puVar8;
      param_4 = puVar3;
    }
  }
  puVar2 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  __Unwind_Resume();
  pcStack_288 = FUN_10af6b510;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puVar3 = puVar7;
  pppuStack_290 = &pppuStack_210;
  _objc_retain(puVar1);
  _objc_retain(puVar7);
  puVar8 = (undefined8 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ec608;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_2f8;
    func_0x000107c278b8(auStack_2f8,puVar2);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f6ec608;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar3 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_2e0,puVar3);
    uStack_318 = 0;
    uStack_310 = 0;
    uStack_308 = 0;
    func_0x000107c27984(&uStack_318,auStack_2f8,&lStack_2c8,2);
    puVar5 = &UNK_110c99668;
    unaff_x23 = &uStack_318;
    puVar3 = &uStack_318;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c99668,puVar3,param_4);
    puStack_300 = unaff_x23;
    func_0x000107c278ac(&puStack_300);
    lVar12 = 0;
    puVar8 = auStack_2f8;
    do {
      if ((&cStack_2c9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2e0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar7);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  if (cStack_2e1 < '\0') {
    __ZdlPv(auStack_2f8[0]);
  }
  _objc_release(puVar7);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar10 = &uStack_3a0;
  pcStack_328 = FUN_10af6b740;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar5;
  puVar9 = puVar3;
  puStack_360 = unaff_x24;
  puStack_358 = unaff_x23;
  puStack_350 = puVar8;
  puStack_348 = puVar2;
  puStack_340 = puVar7;
  puStack_338 = puVar1;
  pppuStack_330 = &pppuStack_290;
  _objc_retain(puVar5);
  plVar11 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x23 = auStack_380;
    func_0x000107c278b8(auStack_380,puVar1);
    uStack_3a0 = 0;
    uStack_398 = 0;
    uStack_390 = 0;
    func_0x000107c27984(&uStack_3a0,auStack_380,&lStack_368,1);
    puVar6 = &UNK_110c996b8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c996b8,&uStack_3a0,puVar3);
    puStack_388 = (undefined1 *)&uStack_3a0;
    func_0x000107c278ac(&puStack_388);
    puVar9 = puVar10;
    puVar8 = &uStack_3a0;
    if (cStack_369 < '\0') {
      __ZdlPv(auStack_380[0]);
      puVar9 = puVar10;
      puVar8 = &uStack_3a0;
    }
  }
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar3 = &uStack_420;
  pcStack_3a8 = FUN_10af6b8b4;
  lStack_3e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar6;
  puVar7 = puVar9;
  puStack_3e0 = unaff_x24;
  puStack_3d8 = unaff_x23;
  puStack_3d0 = puVar8;
  plStack_3c8 = plVar11;
  puStack_3c0 = puVar1;
  puStack_3b8 = puVar5;
  pppuStack_3b0 = &pppuStack_330;
  _objc_retain(puVar6);
  plVar11 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x23 = auStack_400;
    func_0x000107c278b8(auStack_400,puVar1);
    uStack_420 = 0;
    uStack_418 = 0;
    uStack_410 = 0;
    func_0x000107c27984(&uStack_420,auStack_400,&lStack_3e8,1);
    puVar2 = &UNK_110c99708;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c99708,&uStack_420,puVar9);
    puStack_408 = (undefined1 *)&uStack_420;
    func_0x000107c278ac(&puStack_408);
    puVar7 = puVar3;
    puVar8 = &uStack_420;
    if (cStack_3e9 < '\0') {
      __ZdlPv(auStack_400[0]);
      puVar7 = puVar3;
      puVar8 = &uStack_420;
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar9 = &uStack_4a0;
  pcStack_428 = FUN_10af6ba28;
  lStack_468 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar2;
  puVar3 = puVar7;
  puStack_460 = unaff_x24;
  puStack_458 = unaff_x23;
  puStack_450 = puVar8;
  plStack_448 = plVar11;
  puStack_440 = puVar1;
  puStack_438 = puVar6;
  pppuStack_430 = &pppuStack_3b0;
  _objc_retain(puVar2);
  plVar11 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x23 = auStack_480;
    func_0x000107c278b8(auStack_480,puVar1);
    uStack_4a0 = 0;
    uStack_498 = 0;
    uStack_490 = 0;
    func_0x000107c27984(&uStack_4a0,auStack_480,&lStack_468,1);
    puVar5 = &UNK_110c99758;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c99758,&uStack_4a0,puVar7);
    puStack_488 = (undefined1 *)&uStack_4a0;
    func_0x000107c278ac(&puStack_488);
    puVar3 = puVar9;
    puVar8 = &uStack_4a0;
    if (cStack_469 < '\0') {
      __ZdlPv(auStack_480[0]);
      puVar3 = puVar9;
      puVar8 = &uStack_4a0;
    }
  }
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_468) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar9 = &uStack_520;
  pcStack_4a8 = FUN_10af6bb9c;
  lStack_4e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar5;
  puVar7 = puVar3;
  puStack_4e0 = unaff_x24;
  puStack_4d8 = unaff_x23;
  puStack_4d0 = puVar8;
  plStack_4c8 = plVar11;
  puStack_4c0 = puVar1;
  puStack_4b8 = puVar2;
  pppuStack_4b0 = &pppuStack_430;
  _objc_retain(puVar5);
  plVar11 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x23 = auStack_500;
    func_0x000107c278b8(auStack_500,puVar1);
    uStack_520 = 0;
    uStack_518 = 0;
    uStack_510 = 0;
    func_0x000107c27984(&uStack_520,auStack_500,&lStack_4e8,1);
    puVar6 = &UNK_110c997a8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c997a8,&uStack_520,puVar3);
    puStack_508 = (undefined1 *)&uStack_520;
    func_0x000107c278ac(&puStack_508);
    puVar7 = puVar9;
    puVar8 = &uStack_520;
    if (cStack_4e9 < '\0') {
      __ZdlPv(auStack_500[0]);
      puVar7 = puVar9;
      puVar8 = &uStack_520;
    }
  }
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_528 = FUN_10af6bd10;
  lStack_568 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar6;
  puStack_560 = unaff_x24;
  puStack_558 = unaff_x23;
  puStack_550 = puVar8;
  plStack_548 = plVar11;
  puStack_540 = puVar1;
  puStack_538 = puVar5;
  pppuStack_530 = &pppuStack_4b0;
  _objc_retain(puVar6);
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    func_0x000107c278b8(auStack_580,puVar1);
    uStack_5a0 = 0;
    uStack_598 = 0;
    uStack_590 = 0;
    func_0x000107c27984(&uStack_5a0,auStack_580,&lStack_568,1);
    puVar2 = &UNK_110c997f8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c997f8,&uStack_5a0,puVar7);
    puStack_588 = (undefined1 *)&uStack_5a0;
    func_0x000107c278ac(&puStack_588);
    if (cStack_569 < '\0') {
      __ZdlPv(auStack_580[0]);
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_568) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar5 = puVar1;
  __Unwind_Resume();
  puStack_5c8 = (undefined1 *)&uStack_5e0;
  pcStack_5a8 = FUN_10af6be84;
  if (puVar5 != (undefined *)0x0) {
    uStack_5e0 = 0;
    uStack_5d8 = 0;
    uStack_5d0 = 0;
    puStack_5c0 = puVar1;
    puStack_5b8 = puVar6;
    pppuStack_5b0 = &pppuStack_530;
    (**(code **)(**(long **)(puVar5 + 8) + 0x18))
              (*(long **)(puVar5 + 8),&UNK_110c99848,&uStack_5e0,puVar2);
    func_0x000107c278ac(&puStack_5c8);
  }
  return;
}



/* Entry: 10af6af40; end: 10af6b0b3;  */

void FUN_10af6af40(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined1 *puStack_548;
  undefined *puStack_540;
  undefined *puStack_538;
  undefined8 ***pppuStack_530;
  code *pcStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined1 *puStack_508;
  undefined8 auStack_500 [2];
  char cStack_4e9;
  long lStack_4e8;
  undefined8 *puStack_4e0;
  undefined8 *puStack_4d8;
  undefined8 *puStack_4d0;
  long *plStack_4c8;
  undefined *puStack_4c0;
  undefined *puStack_4b8;
  undefined8 ***pppuStack_4b0;
  code *pcStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined1 *puStack_488;
  undefined8 auStack_480 [2];
  char cStack_469;
  long lStack_468;
  undefined8 *puStack_460;
  undefined8 *puStack_458;
  undefined8 *puStack_450;
  long *plStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  undefined8 ***pppuStack_430;
  code *pcStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined1 *puStack_408;
  undefined8 auStack_400 [2];
  char cStack_3e9;
  long lStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 *puStack_3d0;
  long *plStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined1 *puStack_388;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  long *plStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined1 *puStack_308;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 *puStack_280;
  undefined8 auStack_278 [2];
  char cStack_261;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar7 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = auStack_60;
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110c99528;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c99528,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar3 = puVar7;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = puVar7;
      param_4 = param_3;
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
  puVar8 = &uStack_100;
  pcStack_88 = FUN_10af6b0b4;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puVar7 = puVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ec608;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_e0;
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar5 = &UNK_110c99578;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c99578,&uStack_100,puVar3);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    puVar7 = puVar8;
    param_4 = puVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar7 = puVar8;
      param_4 = puVar3;
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
  puVar8 = &uStack_180;
  pcStack_108 = FUN_10af6b228;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar5;
  puVar3 = puVar7;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar5);
  if (puVar2 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar2 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x23 = auStack_160;
    func_0x000107c278b8(auStack_160,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x000107c27984(&uStack_180,auStack_160,&lStack_148,1);
    puVar1 = &UNK_110c995c8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c995c8,&uStack_180,puVar7);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x000107c278ac(&puStack_168);
    puVar3 = puVar8;
    param_4 = puVar7;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar3 = puVar8;
      param_4 = puVar7;
    }
  }
  puVar2 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  __Unwind_Resume();
  puVar8 = &uStack_200;
  pcStack_188 = FUN_10af6b39c;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puVar7 = puVar3;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ec608;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_1e0;
    func_0x000107c278b8(auStack_1e0,puVar2);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x000107c27984(&uStack_200,auStack_1e0,&lStack_1c8,1);
    puVar5 = &UNK_110c99618;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c99618,&uStack_200,puVar3);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x000107c278ac(&puStack_1e8);
    puVar7 = puVar8;
    param_4 = puVar3;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      puVar7 = puVar8;
      param_4 = puVar3;
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
  pcStack_208 = FUN_10af6b510;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar5;
  puVar3 = puVar7;
  pppuStack_210 = &pppuStack_190;
  _objc_retain(puVar5);
  _objc_retain(puVar7);
  puVar8 = (undefined8 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar2 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x24 = auStack_278;
    func_0x000107c278b8(auStack_278,puVar1);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f6ec608;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar3 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_260,puVar3);
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_288 = 0;
    func_0x000107c27984(&uStack_298,auStack_278,&lStack_248,2);
    puVar1 = &UNK_110c99668;
    unaff_x23 = &uStack_298;
    puVar3 = &uStack_298;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c99668,puVar3,param_4);
    puStack_280 = unaff_x23;
    func_0x000107c278ac(&puStack_280);
    lVar12 = 0;
    puVar8 = auStack_278;
    do {
      if ((&cStack_249)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_260 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar7);
  puVar2 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  if (cStack_261 < '\0') {
    __ZdlPv(auStack_278[0]);
  }
  _objc_release(puVar7);
  _objc_release(puVar5);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar10 = &uStack_320;
  pcStack_2a8 = FUN_10af6b740;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar9 = puVar3;
  puStack_2e0 = unaff_x24;
  puStack_2d8 = unaff_x23;
  puStack_2d0 = puVar8;
  puStack_2c8 = puVar2;
  puStack_2c0 = puVar7;
  puStack_2b8 = puVar5;
  pppuStack_2b0 = &pppuStack_210;
  _objc_retain(puVar1);
  plVar11 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ec608;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_300;
    func_0x000107c278b8(auStack_300,puVar2);
    uStack_320 = 0;
    uStack_318 = 0;
    uStack_310 = 0;
    func_0x000107c27984(&uStack_320,auStack_300,&lStack_2e8,1);
    puVar6 = &UNK_110c996b8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c996b8,&uStack_320,puVar3);
    puStack_308 = (undefined1 *)&uStack_320;
    func_0x000107c278ac(&puStack_308);
    puVar9 = puVar10;
    puVar8 = &uStack_320;
    if (cStack_2e9 < '\0') {
      __ZdlPv(auStack_300[0]);
      puVar9 = puVar10;
      puVar8 = &uStack_320;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar7 = &uStack_3a0;
  pcStack_328 = FUN_10af6b8b4;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar6;
  puVar3 = puVar9;
  puStack_360 = unaff_x24;
  puStack_358 = unaff_x23;
  puStack_350 = puVar8;
  plStack_348 = plVar11;
  puStack_340 = puVar2;
  puStack_338 = puVar1;
  pppuStack_330 = &pppuStack_2b0;
  _objc_retain(puVar6);
  plVar11 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x23 = auStack_380;
    func_0x000107c278b8(auStack_380,puVar1);
    uStack_3a0 = 0;
    uStack_398 = 0;
    uStack_390 = 0;
    func_0x000107c27984(&uStack_3a0,auStack_380,&lStack_368,1);
    puVar5 = &UNK_110c99708;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c99708,&uStack_3a0,puVar9);
    puStack_388 = (undefined1 *)&uStack_3a0;
    func_0x000107c278ac(&puStack_388);
    puVar3 = puVar7;
    puVar8 = &uStack_3a0;
    if (cStack_369 < '\0') {
      __ZdlPv(auStack_380[0]);
      puVar3 = puVar7;
      puVar8 = &uStack_3a0;
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar9 = &uStack_420;
  pcStack_3a8 = FUN_10af6ba28;
  lStack_3e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar5;
  puVar7 = puVar3;
  puStack_3e0 = unaff_x24;
  puStack_3d8 = unaff_x23;
  puStack_3d0 = puVar8;
  plStack_3c8 = plVar11;
  puStack_3c0 = puVar1;
  puStack_3b8 = puVar6;
  pppuStack_3b0 = &pppuStack_330;
  _objc_retain(puVar5);
  plVar11 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x23 = auStack_400;
    func_0x000107c278b8(auStack_400,puVar1);
    uStack_420 = 0;
    uStack_418 = 0;
    uStack_410 = 0;
    func_0x000107c27984(&uStack_420,auStack_400,&lStack_3e8,1);
    puVar2 = &UNK_110c99758;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c99758,&uStack_420,puVar3);
    puStack_408 = (undefined1 *)&uStack_420;
    func_0x000107c278ac(&puStack_408);
    puVar7 = puVar9;
    puVar8 = &uStack_420;
    if (cStack_3e9 < '\0') {
      __ZdlPv(auStack_400[0]);
      puVar7 = puVar9;
      puVar8 = &uStack_420;
    }
  }
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar9 = &uStack_4a0;
  pcStack_428 = FUN_10af6bb9c;
  lStack_468 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar2;
  puVar3 = puVar7;
  puStack_460 = unaff_x24;
  puStack_458 = unaff_x23;
  puStack_450 = puVar8;
  plStack_448 = plVar11;
  puStack_440 = puVar1;
  puStack_438 = puVar5;
  pppuStack_430 = &pppuStack_3b0;
  _objc_retain(puVar2);
  plVar11 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x23 = auStack_480;
    func_0x000107c278b8(auStack_480,puVar1);
    uStack_4a0 = 0;
    uStack_498 = 0;
    uStack_490 = 0;
    func_0x000107c27984(&uStack_4a0,auStack_480,&lStack_468,1);
    puVar6 = &UNK_110c997a8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c997a8,&uStack_4a0,puVar7);
    puStack_488 = (undefined1 *)&uStack_4a0;
    func_0x000107c278ac(&puStack_488);
    puVar3 = puVar9;
    puVar8 = &uStack_4a0;
    if (cStack_469 < '\0') {
      __ZdlPv(auStack_480[0]);
      puVar3 = puVar9;
      puVar8 = &uStack_4a0;
    }
  }
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_468) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_4a8 = FUN_10af6bd10;
  lStack_4e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar6;
  puStack_4e0 = unaff_x24;
  puStack_4d8 = unaff_x23;
  puStack_4d0 = puVar8;
  plStack_4c8 = plVar11;
  puStack_4c0 = puVar1;
  puStack_4b8 = puVar2;
  pppuStack_4b0 = &pppuStack_430;
  _objc_retain(puVar6);
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    func_0x000107c278b8(auStack_500,puVar1);
    uStack_520 = 0;
    uStack_518 = 0;
    uStack_510 = 0;
    func_0x000107c27984(&uStack_520,auStack_500,&lStack_4e8,1);
    puVar5 = &UNK_110c997f8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c997f8,&uStack_520,puVar3);
    puStack_508 = (undefined1 *)&uStack_520;
    func_0x000107c278ac(&puStack_508);
    if (cStack_4e9 < '\0') {
      __ZdlPv(auStack_500[0]);
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar2 = puVar1;
  __Unwind_Resume();
  puStack_548 = (undefined1 *)&uStack_560;
  pcStack_528 = FUN_10af6be84;
  if (puVar2 != (undefined *)0x0) {
    uStack_560 = 0;
    uStack_558 = 0;
    uStack_550 = 0;
    puStack_540 = puVar1;
    puStack_538 = puVar6;
    pppuStack_530 = &pppuStack_4b0;
    (**(code **)(**(long **)(puVar2 + 8) + 0x18))
              (*(long **)(puVar2 + 8),&UNK_110c99848,&uStack_560,puVar5);
    func_0x000107c278ac(&puStack_548);
  }
  return;
}



/* Entry: 10af6b0b4; end: 10af6b227;  */

void FUN_10af6b0b4(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined1 *puStack_4c8;
  undefined *puStack_4c0;
  undefined *puStack_4b8;
  undefined8 ***pppuStack_4b0;
  code *pcStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined1 *puStack_488;
  undefined8 auStack_480 [2];
  char cStack_469;
  long lStack_468;
  undefined8 *puStack_460;
  undefined8 *puStack_458;
  undefined8 *puStack_450;
  long *plStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  undefined8 ***pppuStack_430;
  code *pcStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined1 *puStack_408;
  undefined8 auStack_400 [2];
  char cStack_3e9;
  long lStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 *puStack_3d0;
  long *plStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined1 *puStack_388;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  long *plStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined1 *puStack_308;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  long *plStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  undefined *puStack_248;
  undefined8 *puStack_240;
  undefined *puStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar7 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = auStack_60;
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110c99578;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c99578,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar7 = puVar3;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar7 = puVar3;
      param_4 = param_3;
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
  puVar8 = &uStack_100;
  pcStack_88 = FUN_10af6b228;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puVar3 = puVar7;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ec608;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_e0;
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar5 = &UNK_110c995c8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c995c8,&uStack_100,puVar7);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    puVar3 = puVar8;
    param_4 = puVar7;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar3 = puVar8;
      param_4 = puVar7;
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
  puVar8 = &uStack_180;
  pcStack_108 = FUN_10af6b39c;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar5;
  puVar7 = puVar3;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar5);
  if (puVar2 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar2 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x23 = auStack_160;
    func_0x000107c278b8(auStack_160,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x000107c27984(&uStack_180,auStack_160,&lStack_148,1);
    puVar1 = &UNK_110c99618;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c99618,&uStack_180,puVar3);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x000107c278ac(&puStack_168);
    puVar7 = puVar8;
    param_4 = puVar3;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar7 = puVar8;
      param_4 = puVar3;
    }
  }
  puVar2 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  __Unwind_Resume();
  pcStack_188 = FUN_10af6b510;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puVar3 = puVar7;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(puVar1);
  _objc_retain(puVar7);
  puVar8 = (undefined8 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ec608;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_1f8;
    func_0x000107c278b8(auStack_1f8,puVar2);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f6ec608;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar3 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_1e0,puVar3);
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_208 = 0;
    func_0x000107c27984(&uStack_218,auStack_1f8,&lStack_1c8,2);
    puVar5 = &UNK_110c99668;
    unaff_x23 = &uStack_218;
    puVar3 = &uStack_218;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c99668,puVar3,param_4);
    puStack_200 = unaff_x23;
    func_0x000107c278ac(&puStack_200);
    lVar12 = 0;
    puVar8 = auStack_1f8;
    do {
      if ((&cStack_1c9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar7);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  if (cStack_1e1 < '\0') {
    __ZdlPv(auStack_1f8[0]);
  }
  _objc_release(puVar7);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar10 = &uStack_2a0;
  pcStack_228 = FUN_10af6b740;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar5;
  puVar9 = puVar3;
  puStack_260 = unaff_x24;
  puStack_258 = unaff_x23;
  puStack_250 = puVar8;
  puStack_248 = puVar2;
  puStack_240 = puVar7;
  puStack_238 = puVar1;
  pppuStack_230 = &pppuStack_190;
  _objc_retain(puVar5);
  plVar11 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x23 = auStack_280;
    func_0x000107c278b8(auStack_280,puVar1);
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    func_0x000107c27984(&uStack_2a0,auStack_280,&lStack_268,1);
    puVar6 = &UNK_110c996b8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c996b8,&uStack_2a0,puVar3);
    puStack_288 = (undefined1 *)&uStack_2a0;
    func_0x000107c278ac(&puStack_288);
    puVar9 = puVar10;
    puVar8 = &uStack_2a0;
    if (cStack_269 < '\0') {
      __ZdlPv(auStack_280[0]);
      puVar9 = puVar10;
      puVar8 = &uStack_2a0;
    }
  }
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar3 = &uStack_320;
  pcStack_2a8 = FUN_10af6b8b4;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar6;
  puVar7 = puVar9;
  puStack_2e0 = unaff_x24;
  puStack_2d8 = unaff_x23;
  puStack_2d0 = puVar8;
  plStack_2c8 = plVar11;
  puStack_2c0 = puVar1;
  puStack_2b8 = puVar5;
  pppuStack_2b0 = &pppuStack_230;
  _objc_retain(puVar6);
  plVar11 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x23 = auStack_300;
    func_0x000107c278b8(auStack_300,puVar1);
    uStack_320 = 0;
    uStack_318 = 0;
    uStack_310 = 0;
    func_0x000107c27984(&uStack_320,auStack_300,&lStack_2e8,1);
    puVar2 = &UNK_110c99708;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c99708,&uStack_320,puVar9);
    puStack_308 = (undefined1 *)&uStack_320;
    func_0x000107c278ac(&puStack_308);
    puVar7 = puVar3;
    puVar8 = &uStack_320;
    if (cStack_2e9 < '\0') {
      __ZdlPv(auStack_300[0]);
      puVar7 = puVar3;
      puVar8 = &uStack_320;
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar9 = &uStack_3a0;
  pcStack_328 = FUN_10af6ba28;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar2;
  puVar3 = puVar7;
  puStack_360 = unaff_x24;
  puStack_358 = unaff_x23;
  puStack_350 = puVar8;
  plStack_348 = plVar11;
  puStack_340 = puVar1;
  puStack_338 = puVar6;
  pppuStack_330 = &pppuStack_2b0;
  _objc_retain(puVar2);
  plVar11 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x23 = auStack_380;
    func_0x000107c278b8(auStack_380,puVar1);
    uStack_3a0 = 0;
    uStack_398 = 0;
    uStack_390 = 0;
    func_0x000107c27984(&uStack_3a0,auStack_380,&lStack_368,1);
    puVar5 = &UNK_110c99758;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c99758,&uStack_3a0,puVar7);
    puStack_388 = (undefined1 *)&uStack_3a0;
    func_0x000107c278ac(&puStack_388);
    puVar3 = puVar9;
    puVar8 = &uStack_3a0;
    if (cStack_369 < '\0') {
      __ZdlPv(auStack_380[0]);
      puVar3 = puVar9;
      puVar8 = &uStack_3a0;
    }
  }
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar9 = &uStack_420;
  pcStack_3a8 = FUN_10af6bb9c;
  lStack_3e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar5;
  puVar7 = puVar3;
  puStack_3e0 = unaff_x24;
  puStack_3d8 = unaff_x23;
  puStack_3d0 = puVar8;
  plStack_3c8 = plVar11;
  puStack_3c0 = puVar1;
  puStack_3b8 = puVar2;
  pppuStack_3b0 = &pppuStack_330;
  _objc_retain(puVar5);
  plVar11 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x23 = auStack_400;
    func_0x000107c278b8(auStack_400,puVar1);
    uStack_420 = 0;
    uStack_418 = 0;
    uStack_410 = 0;
    func_0x000107c27984(&uStack_420,auStack_400,&lStack_3e8,1);
    puVar6 = &UNK_110c997a8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c997a8,&uStack_420,puVar3);
    puStack_408 = (undefined1 *)&uStack_420;
    func_0x000107c278ac(&puStack_408);
    puVar7 = puVar9;
    puVar8 = &uStack_420;
    if (cStack_3e9 < '\0') {
      __ZdlPv(auStack_400[0]);
      puVar7 = puVar9;
      puVar8 = &uStack_420;
    }
  }
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_428 = FUN_10af6bd10;
  lStack_468 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar6;
  puStack_460 = unaff_x24;
  puStack_458 = unaff_x23;
  puStack_450 = puVar8;
  plStack_448 = plVar11;
  puStack_440 = puVar1;
  puStack_438 = puVar5;
  pppuStack_430 = &pppuStack_3b0;
  _objc_retain(puVar6);
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    func_0x000107c278b8(auStack_480,puVar1);
    uStack_4a0 = 0;
    uStack_498 = 0;
    uStack_490 = 0;
    func_0x000107c27984(&uStack_4a0,auStack_480,&lStack_468,1);
    puVar2 = &UNK_110c997f8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c997f8,&uStack_4a0,puVar7);
    puStack_488 = (undefined1 *)&uStack_4a0;
    func_0x000107c278ac(&puStack_488);
    if (cStack_469 < '\0') {
      __ZdlPv(auStack_480[0]);
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_468) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar5 = puVar1;
  __Unwind_Resume();
  puStack_4c8 = (undefined1 *)&uStack_4e0;
  pcStack_4a8 = FUN_10af6be84;
  if (puVar5 != (undefined *)0x0) {
    uStack_4e0 = 0;
    uStack_4d8 = 0;
    uStack_4d0 = 0;
    puStack_4c0 = puVar1;
    puStack_4b8 = puVar6;
    pppuStack_4b0 = &pppuStack_430;
    (**(code **)(**(long **)(puVar5 + 8) + 0x18))
              (*(long **)(puVar5 + 8),&UNK_110c99848,&uStack_4e0,puVar2);
    func_0x000107c278ac(&puStack_4c8);
  }
  return;
}



/* Entry: 10af6b228; end: 10af6b39b;  */

void FUN_10af6b228(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined1 *puStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  undefined8 ***pppuStack_430;
  code *pcStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined1 *puStack_408;
  undefined8 auStack_400 [2];
  char cStack_3e9;
  long lStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 *puStack_3d0;
  long *plStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined1 *puStack_388;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  long *plStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined1 *puStack_308;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  long *plStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar7 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = auStack_60;
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110c995c8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c995c8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar3 = puVar7;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = puVar7;
      param_4 = param_3;
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
  puVar8 = &uStack_100;
  pcStack_88 = FUN_10af6b39c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puVar7 = puVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ec608;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_e0;
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar5 = &UNK_110c99618;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c99618,&uStack_100,puVar3);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    puVar7 = puVar8;
    param_4 = puVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar7 = puVar8;
      param_4 = puVar3;
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
  pcStack_108 = FUN_10af6b510;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar5;
  puVar3 = puVar7;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar5);
  _objc_retain(puVar7);
  puVar8 = (undefined8 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar2 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x24 = auStack_178;
    func_0x000107c278b8(auStack_178,puVar1);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f6ec608;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar3 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_160,puVar3);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    func_0x000107c27984(&uStack_198,auStack_178,&lStack_148,2);
    puVar1 = &UNK_110c99668;
    unaff_x23 = &uStack_198;
    puVar3 = &uStack_198;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c99668,puVar3,param_4);
    puStack_180 = unaff_x23;
    func_0x000107c278ac(&puStack_180);
    lVar12 = 0;
    puVar8 = auStack_178;
    do {
      if ((&cStack_149)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(puVar7);
  puVar2 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  _objc_release(puVar7);
  _objc_release(puVar5);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar10 = &uStack_220;
  pcStack_1a8 = FUN_10af6b740;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar9 = puVar3;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar8;
  puStack_1c8 = puVar2;
  puStack_1c0 = puVar7;
  puStack_1b8 = puVar5;
  pppuStack_1b0 = &ppuStack_110;
  _objc_retain(puVar1);
  plVar11 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ec608;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_200;
    func_0x000107c278b8(auStack_200,puVar2);
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x000107c27984(&uStack_220,auStack_200,&lStack_1e8,1);
    puVar6 = &UNK_110c996b8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c996b8,&uStack_220,puVar3);
    puStack_208 = (undefined1 *)&uStack_220;
    func_0x000107c278ac(&puStack_208);
    puVar9 = puVar10;
    puVar8 = &uStack_220;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      puVar9 = puVar10;
      puVar8 = &uStack_220;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar7 = &uStack_2a0;
  pcStack_228 = FUN_10af6b8b4;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar6;
  puVar3 = puVar9;
  puStack_260 = unaff_x24;
  puStack_258 = unaff_x23;
  puStack_250 = puVar8;
  plStack_248 = plVar11;
  puStack_240 = puVar2;
  puStack_238 = puVar1;
  pppuStack_230 = &pppuStack_1b0;
  _objc_retain(puVar6);
  plVar11 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x23 = auStack_280;
    func_0x000107c278b8(auStack_280,puVar1);
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    func_0x000107c27984(&uStack_2a0,auStack_280,&lStack_268,1);
    puVar5 = &UNK_110c99708;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c99708,&uStack_2a0,puVar9);
    puStack_288 = (undefined1 *)&uStack_2a0;
    func_0x000107c278ac(&puStack_288);
    puVar3 = puVar7;
    puVar8 = &uStack_2a0;
    if (cStack_269 < '\0') {
      __ZdlPv(auStack_280[0]);
      puVar3 = puVar7;
      puVar8 = &uStack_2a0;
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar9 = &uStack_320;
  pcStack_2a8 = FUN_10af6ba28;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar5;
  puVar7 = puVar3;
  puStack_2e0 = unaff_x24;
  puStack_2d8 = unaff_x23;
  puStack_2d0 = puVar8;
  plStack_2c8 = plVar11;
  puStack_2c0 = puVar1;
  puStack_2b8 = puVar6;
  pppuStack_2b0 = &pppuStack_230;
  _objc_retain(puVar5);
  plVar11 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x23 = auStack_300;
    func_0x000107c278b8(auStack_300,puVar1);
    uStack_320 = 0;
    uStack_318 = 0;
    uStack_310 = 0;
    func_0x000107c27984(&uStack_320,auStack_300,&lStack_2e8,1);
    puVar2 = &UNK_110c99758;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c99758,&uStack_320,puVar3);
    puStack_308 = (undefined1 *)&uStack_320;
    func_0x000107c278ac(&puStack_308);
    puVar7 = puVar9;
    puVar8 = &uStack_320;
    if (cStack_2e9 < '\0') {
      __ZdlPv(auStack_300[0]);
      puVar7 = puVar9;
      puVar8 = &uStack_320;
    }
  }
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar9 = &uStack_3a0;
  pcStack_328 = FUN_10af6bb9c;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar2;
  puVar3 = puVar7;
  puStack_360 = unaff_x24;
  puStack_358 = unaff_x23;
  puStack_350 = puVar8;
  plStack_348 = plVar11;
  puStack_340 = puVar1;
  puStack_338 = puVar5;
  pppuStack_330 = &pppuStack_2b0;
  _objc_retain(puVar2);
  plVar11 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x23 = auStack_380;
    func_0x000107c278b8(auStack_380,puVar1);
    uStack_3a0 = 0;
    uStack_398 = 0;
    uStack_390 = 0;
    func_0x000107c27984(&uStack_3a0,auStack_380,&lStack_368,1);
    puVar6 = &UNK_110c997a8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c997a8,&uStack_3a0,puVar7);
    puStack_388 = (undefined1 *)&uStack_3a0;
    func_0x000107c278ac(&puStack_388);
    puVar3 = puVar9;
    puVar8 = &uStack_3a0;
    if (cStack_369 < '\0') {
      __ZdlPv(auStack_380[0]);
      puVar3 = puVar9;
      puVar8 = &uStack_3a0;
    }
  }
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_3a8 = FUN_10af6bd10;
  lStack_3e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar6;
  puStack_3e0 = unaff_x24;
  puStack_3d8 = unaff_x23;
  puStack_3d0 = puVar8;
  plStack_3c8 = plVar11;
  puStack_3c0 = puVar1;
  puStack_3b8 = puVar2;
  pppuStack_3b0 = &pppuStack_330;
  _objc_retain(puVar6);
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    func_0x000107c278b8(auStack_400,puVar1);
    uStack_420 = 0;
    uStack_418 = 0;
    uStack_410 = 0;
    func_0x000107c27984(&uStack_420,auStack_400,&lStack_3e8,1);
    puVar5 = &UNK_110c997f8;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c997f8,&uStack_420,puVar3);
    puStack_408 = (undefined1 *)&uStack_420;
    func_0x000107c278ac(&puStack_408);
    if (cStack_3e9 < '\0') {
      __ZdlPv(auStack_400[0]);
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar2 = puVar1;
  __Unwind_Resume();
  puStack_448 = (undefined1 *)&uStack_460;
  pcStack_428 = FUN_10af6be84;
  if (puVar2 != (undefined *)0x0) {
    uStack_460 = 0;
    uStack_458 = 0;
    uStack_450 = 0;
    puStack_440 = puVar1;
    puStack_438 = puVar6;
    pppuStack_430 = &pppuStack_3b0;
    (**(code **)(**(long **)(puVar2 + 8) + 0x18))
              (*(long **)(puVar2 + 8),&UNK_110c99848,&uStack_460,puVar5);
    func_0x000107c278ac(&puStack_448);
  }
  return;
}



/* Entry: 10af6b39c; end: 10af6b50f;  */

void FUN_10af6b39c(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined1 *puStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined1 *puStack_388;
  undefined8 auStack_380 [2];
  char cStack_369;
  long lStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  long *plStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined1 *puStack_308;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  long *plStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined *puStack_148;
  undefined8 *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar7 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = auStack_60;
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110c99618;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110c99618,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar7 = puVar3;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar7 = puVar3;
      param_4 = param_3;
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
  pcStack_88 = FUN_10af6b510;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puVar3 = puVar7;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar7);
  puVar12 = (undefined8 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ec608;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_f8;
    func_0x000107c278b8(auStack_f8,puVar2);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f6ec608;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar3 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_e0,puVar3);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x000107c27984(&uStack_118,auStack_f8,&lStack_c8,2);
    puVar5 = &UNK_110c99668;
    unaff_x23 = &uStack_118;
    puVar3 = &uStack_118;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110c99668,puVar3,param_4);
    puStack_100 = unaff_x23;
    func_0x000107c278ac(&puStack_100);
    lVar11 = 0;
    puVar12 = auStack_f8;
    do {
      if ((&cStack_c9)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(puVar7);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar7);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar9 = &uStack_1a0;
  pcStack_128 = FUN_10af6b740;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar5;
  puVar8 = puVar3;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar12;
  puStack_148 = puVar2;
  puStack_140 = puVar7;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_90;
  _objc_retain(puVar5);
  plVar10 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar4 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x23 = auStack_180;
    func_0x000107c278b8(auStack_180,puVar1);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x000107c27984(&uStack_1a0,auStack_180,&lStack_168,1);
    puVar6 = &UNK_110c996b8;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110c996b8,&uStack_1a0,puVar3);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x000107c278ac(&puStack_188);
    puVar8 = puVar9;
    puVar12 = &uStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      puVar8 = puVar9;
      puVar12 = &uStack_1a0;
    }
  }
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar3 = &uStack_220;
  pcStack_1a8 = FUN_10af6b8b4;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar6;
  puVar7 = puVar8;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar12;
  plStack_1c8 = plVar10;
  puStack_1c0 = puVar1;
  puStack_1b8 = puVar5;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(puVar6);
  plVar10 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x23 = auStack_200;
    func_0x000107c278b8(auStack_200,puVar1);
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x000107c27984(&uStack_220,auStack_200,&lStack_1e8,1);
    puVar2 = &UNK_110c99708;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110c99708,&uStack_220,puVar8);
    puStack_208 = (undefined1 *)&uStack_220;
    func_0x000107c278ac(&puStack_208);
    puVar7 = puVar3;
    puVar12 = &uStack_220;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      puVar7 = puVar3;
      puVar12 = &uStack_220;
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar8 = &uStack_2a0;
  pcStack_228 = FUN_10af6ba28;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar2;
  puVar3 = puVar7;
  puStack_260 = unaff_x24;
  puStack_258 = unaff_x23;
  puStack_250 = puVar12;
  plStack_248 = plVar10;
  puStack_240 = puVar1;
  puStack_238 = puVar6;
  pppuStack_230 = &pppuStack_1b0;
  _objc_retain(puVar2);
  plVar10 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar4 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x23 = auStack_280;
    func_0x000107c278b8(auStack_280,puVar1);
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    func_0x000107c27984(&uStack_2a0,auStack_280,&lStack_268,1);
    puVar5 = &UNK_110c99758;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110c99758,&uStack_2a0,puVar7);
    puStack_288 = (undefined1 *)&uStack_2a0;
    func_0x000107c278ac(&puStack_288);
    puVar3 = puVar8;
    puVar12 = &uStack_2a0;
    if (cStack_269 < '\0') {
      __ZdlPv(auStack_280[0]);
      puVar3 = puVar8;
      puVar12 = &uStack_2a0;
    }
  }
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar8 = &uStack_320;
  pcStack_2a8 = FUN_10af6bb9c;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar5;
  puVar7 = puVar3;
  puStack_2e0 = unaff_x24;
  puStack_2d8 = unaff_x23;
  puStack_2d0 = puVar12;
  plStack_2c8 = plVar10;
  puStack_2c0 = puVar1;
  puStack_2b8 = puVar2;
  pppuStack_2b0 = &pppuStack_230;
  _objc_retain(puVar5);
  plVar10 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar4 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x23 = auStack_300;
    func_0x000107c278b8(auStack_300,puVar1);
    uStack_320 = 0;
    uStack_318 = 0;
    uStack_310 = 0;
    func_0x000107c27984(&uStack_320,auStack_300,&lStack_2e8,1);
    puVar6 = &UNK_110c997a8;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110c997a8,&uStack_320,puVar3);
    puStack_308 = (undefined1 *)&uStack_320;
    func_0x000107c278ac(&puStack_308);
    puVar7 = puVar8;
    puVar12 = &uStack_320;
    if (cStack_2e9 < '\0') {
      __ZdlPv(auStack_300[0]);
      puVar7 = puVar8;
      puVar12 = &uStack_320;
    }
  }
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_328 = FUN_10af6bd10;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar6;
  puStack_360 = unaff_x24;
  puStack_358 = unaff_x23;
  puStack_350 = puVar12;
  plStack_348 = plVar10;
  puStack_340 = puVar1;
  puStack_338 = puVar5;
  pppuStack_330 = &pppuStack_2b0;
  _objc_retain(puVar6);
  if (puVar4 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    func_0x000107c278b8(auStack_380,puVar1);
    uStack_3a0 = 0;
    uStack_398 = 0;
    uStack_390 = 0;
    func_0x000107c27984(&uStack_3a0,auStack_380,&lStack_368,1);
    puVar2 = &UNK_110c997f8;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110c997f8,&uStack_3a0,puVar7);
    puStack_388 = (undefined1 *)&uStack_3a0;
    func_0x000107c278ac(&puStack_388);
    if (cStack_369 < '\0') {
      __ZdlPv(auStack_380[0]);
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar5 = puVar1;
  __Unwind_Resume();
  puStack_3c8 = (undefined1 *)&uStack_3e0;
  pcStack_3a8 = FUN_10af6be84;
  if (puVar5 != (undefined *)0x0) {
    uStack_3e0 = 0;
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    puStack_3c0 = puVar1;
    puStack_3b8 = puVar6;
    pppuStack_3b0 = &pppuStack_330;
    (**(code **)(**(long **)(puVar5 + 8) + 0x18))
              (*(long **)(puVar5 + 8),&UNK_110c99848,&uStack_3e0,puVar2);
    func_0x000107c278ac(&puStack_3c8);
  }
  return;
}



/* Entry: 10af6b510; end: 10af6b73f;  */

void FUN_10af6b510(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined1 *puStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined1 *puStack_308;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  long *plStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar11 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x000107c278b8(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f6ec608;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110c99668;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110c99668,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x000107c278ac(&puStack_80);
    lVar9 = 0;
    puVar11 = auStack_78;
    do {
      if ((&cStack_49)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  puVar8 = &uStack_120;
  pcStack_a8 = FUN_10af6b740;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar7 = puVar2;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar11;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  plVar10 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f6ec608;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_100;
    func_0x000107c278b8(auStack_100,puVar3);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x000107c27984(&uStack_120,auStack_100,&lStack_e8,1);
    puVar6 = &UNK_110c996b8;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110c996b8,&uStack_120,puVar2);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x000107c278ac(&puStack_108);
    puVar7 = puVar8;
    puVar11 = &uStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar7 = puVar8;
      puVar11 = &uStack_120;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar5 = puVar3;
  __Unwind_Resume();
  puVar8 = &uStack_1a0;
  pcStack_128 = FUN_10af6b8b4;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar6;
  puVar2 = puVar7;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar11;
  plStack_148 = plVar10;
  puStack_140 = puVar3;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_b0;
  _objc_retain(puVar6);
  plVar10 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar5 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x23 = auStack_180;
    func_0x000107c278b8(auStack_180,puVar1);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x000107c27984(&uStack_1a0,auStack_180,&lStack_168,1);
    puVar4 = &UNK_110c99708;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110c99708,&uStack_1a0,puVar7);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x000107c278ac(&puStack_188);
    puVar2 = puVar8;
    puVar11 = &uStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      puVar2 = puVar8;
      puVar11 = &uStack_1a0;
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar5 = puVar1;
  __Unwind_Resume();
  puVar8 = &uStack_220;
  pcStack_1a8 = FUN_10af6ba28;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar4;
  puVar7 = puVar2;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar11;
  plStack_1c8 = plVar10;
  puStack_1c0 = puVar1;
  puStack_1b8 = puVar6;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(puVar4);
  plVar10 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar5 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x23 = auStack_200;
    func_0x000107c278b8(auStack_200,puVar1);
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x000107c27984(&uStack_220,auStack_200,&lStack_1e8,1);
    puVar3 = &UNK_110c99758;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110c99758,&uStack_220,puVar2);
    puStack_208 = (undefined1 *)&uStack_220;
    func_0x000107c278ac(&puStack_208);
    puVar7 = puVar8;
    puVar11 = &uStack_220;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      puVar7 = puVar8;
      puVar11 = &uStack_220;
    }
  }
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  puVar5 = puVar1;
  __Unwind_Resume();
  puVar8 = &uStack_2a0;
  pcStack_228 = FUN_10af6bb9c;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar3;
  puVar2 = puVar7;
  puStack_260 = unaff_x24;
  puStack_258 = unaff_x23;
  puStack_250 = puVar11;
  plStack_248 = plVar10;
  puStack_240 = puVar1;
  puStack_238 = puVar4;
  pppuStack_230 = &pppuStack_1b0;
  _objc_retain(puVar3);
  plVar10 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar5 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x23 = auStack_280;
    func_0x000107c278b8(auStack_280,puVar1);
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    func_0x000107c27984(&uStack_2a0,auStack_280,&lStack_268,1);
    puVar6 = &UNK_110c997a8;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110c997a8,&uStack_2a0,puVar7);
    puStack_288 = (undefined1 *)&uStack_2a0;
    func_0x000107c278ac(&puStack_288);
    puVar2 = puVar8;
    puVar11 = &uStack_2a0;
    if (cStack_269 < '\0') {
      __ZdlPv(auStack_280[0]);
      puVar2 = puVar8;
      puVar11 = &uStack_2a0;
    }
  }
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar5 = puVar1;
  __Unwind_Resume();
  pcStack_2a8 = FUN_10af6bd10;
  lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar6;
  puStack_2e0 = unaff_x24;
  puStack_2d8 = unaff_x23;
  puStack_2d0 = puVar11;
  plStack_2c8 = plVar10;
  puStack_2c0 = puVar1;
  puStack_2b8 = puVar3;
  pppuStack_2b0 = &pppuStack_230;
  _objc_retain(puVar6);
  if (puVar5 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar5 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    func_0x000107c278b8(auStack_300,puVar1);
    uStack_320 = 0;
    uStack_318 = 0;
    uStack_310 = 0;
    func_0x000107c27984(&uStack_320,auStack_300,&lStack_2e8,1);
    puVar4 = &UNK_110c997f8;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110c997f8,&uStack_320,puVar2);
    puStack_308 = (undefined1 *)&uStack_320;
    func_0x000107c278ac(&puStack_308);
    if (cStack_2e9 < '\0') {
      __ZdlPv(auStack_300[0]);
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar3 = puVar1;
  __Unwind_Resume();
  puStack_348 = (undefined1 *)&uStack_360;
  pcStack_328 = FUN_10af6be84;
  if (puVar3 != (undefined *)0x0) {
    uStack_360 = 0;
    uStack_358 = 0;
    uStack_350 = 0;
    puStack_340 = puVar1;
    puStack_338 = puVar6;
    pppuStack_330 = &pppuStack_2b0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_110c99848,&uStack_360,puVar4);
    func_0x000107c278ac(&puStack_348);
  }
  return;
}



/* Entry: 10af6b740; end: 10af6b8b3;  */

void FUN_10af6b740(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110c996b8;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110c996b8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
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
  puVar6 = &uStack_100;
  pcStack_88 = FUN_10af6b8b4;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puVar7 = puVar5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ec608;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar4 = &UNK_110c99708;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110c99708,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    puVar7 = (undefined1 *)puVar6;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar7 = (undefined1 *)puVar6;
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
  puVar6 = &uStack_180;
  pcStack_108 = FUN_10af6ba28;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar4;
  puVar5 = puVar7;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar4);
  if (puVar2 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar2 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    func_0x000107c278b8(auStack_160,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x000107c27984(&uStack_180,auStack_160,&lStack_148,1);
    puVar1 = &UNK_110c99758;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110c99758,&uStack_180,puVar7);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x000107c278ac(&puStack_168);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  puVar2 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  __Unwind_Resume();
  puVar6 = &uStack_200;
  pcStack_188 = FUN_10af6bb9c;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puVar7 = puVar5;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ec608;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_1e0,puVar2);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x000107c27984(&uStack_200,auStack_1e0,&lStack_1c8,1);
    puVar4 = &UNK_110c997a8;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110c997a8,&uStack_200,puVar5);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x000107c278ac(&puStack_1e8);
    puVar7 = (undefined1 *)puVar6;
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
      puVar7 = (undefined1 *)puVar6;
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
  pcStack_208 = FUN_10af6bd10;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar4;
  pppuStack_210 = &pppuStack_190;
  _objc_retain(puVar4);
  if (puVar2 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar2 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    func_0x000107c278b8(auStack_260,puVar1);
    uStack_280 = 0;
    uStack_278 = 0;
    uStack_270 = 0;
    func_0x000107c27984(&uStack_280,auStack_260,&lStack_248,1);
    puVar1 = &UNK_110c997f8;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110c997f8,&uStack_280,puVar7);
    puStack_268 = (undefined1 *)&uStack_280;
    func_0x000107c278ac(&puStack_268);
    if (cStack_249 < '\0') {
      __ZdlPv(auStack_260[0]);
    }
  }
  puVar2 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_2a8 = (undefined1 *)&uStack_2c0;
  pcStack_288 = FUN_10af6be84;
  if (puVar3 != (undefined *)0x0) {
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    puStack_2a0 = puVar2;
    puStack_298 = puVar4;
    pppuStack_290 = &pppuStack_210;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_110c99848,&uStack_2c0,puVar1);
    func_0x000107c278ac(&puStack_2a8);
  }
  return;
}



/* Entry: 10af6b8b4; end: 10af6ba27;  */

void FUN_10af6b8b4(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined8 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110c99708;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110c99708,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
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
  puVar6 = &uStack_100;
  pcStack_88 = FUN_10af6ba28;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puVar7 = puVar5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ec608;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar4 = &UNK_110c99758;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110c99758,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    puVar7 = (undefined1 *)puVar6;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar7 = (undefined1 *)puVar6;
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
  puVar6 = &uStack_180;
  pcStack_108 = FUN_10af6bb9c;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar4;
  puVar5 = puVar7;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar4);
  if (puVar2 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar2 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    func_0x000107c278b8(auStack_160,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x000107c27984(&uStack_180,auStack_160,&lStack_148,1);
    puVar1 = &UNK_110c997a8;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110c997a8,&uStack_180,puVar7);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x000107c278ac(&puStack_168);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  puVar2 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  __Unwind_Resume();
  pcStack_188 = FUN_10af6bd10;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  pppuStack_190 = &ppuStack_110;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ec608;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_1e0,puVar2);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x000107c27984(&uStack_200,auStack_1e0,&lStack_1c8,1);
    puVar4 = &UNK_110c997f8;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110c997f8,&uStack_200,puVar5);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x000107c278ac(&puStack_1e8);
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
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_228 = (undefined1 *)&uStack_240;
  pcStack_208 = FUN_10af6be84;
  if (puVar3 != (undefined *)0x0) {
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    puStack_220 = puVar2;
    puStack_218 = puVar1;
    pppuStack_210 = &pppuStack_190;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_110c99848,&uStack_240,puVar4);
    func_0x000107c278ac(&puStack_228);
  }
  return;
}



/* Entry: 10af6ba28; end: 10af6bb9b;  */

void FUN_10af6ba28(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined1 ***pppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110c99758;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110c99758,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
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
  puVar6 = &uStack_100;
  pcStack_88 = FUN_10af6bb9c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puVar7 = puVar5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ec608;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar4 = &UNK_110c997a8;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110c997a8,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    puVar7 = (undefined1 *)puVar6;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar7 = (undefined1 *)puVar6;
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
  pcStack_108 = FUN_10af6bd10;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar4;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar4);
  if (puVar2 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar2 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    func_0x000107c278b8(auStack_160,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x000107c27984(&uStack_180,auStack_160,&lStack_148,1);
    puVar1 = &UNK_110c997f8;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110c997f8,&uStack_180,puVar7);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x000107c278ac(&puStack_168);
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
    }
  }
  puVar2 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_1a8 = (undefined1 *)&uStack_1c0;
  pcStack_188 = FUN_10af6be84;
  if (puVar3 != (undefined *)0x0) {
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    puStack_1a0 = puVar2;
    puStack_198 = puVar4;
    pppuStack_190 = &ppuStack_110;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_110c99848,&uStack_1c0,puVar1);
    func_0x000107c278ac(&puStack_1a8);
  }
  return;
}



/* Entry: 10af6bb9c; end: 10af6bd0f;  */

void FUN_10af6bb9c(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110c997a8;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110c997a8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
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
  pcStack_88 = FUN_10af6bd10;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ec608;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar4 = &UNK_110c997f8;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110c997f8,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
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
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_128 = (undefined1 *)&uStack_140;
  pcStack_108 = FUN_10af6be84;
  if (puVar3 != (undefined *)0x0) {
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    puStack_120 = puVar2;
    puStack_118 = puVar1;
    ppuStack_110 = &puStack_90;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_110c99848,&uStack_140,puVar4);
    func_0x000107c278ac(&puStack_128);
  }
  return;
}



/* Entry: 10af6bd10; end: 10af6be83;  */

void FUN_10af6bd10(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110c997f8;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110c997f8,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
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
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_10af6be84;
  if (puVar3 != (undefined *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = puVar2;
    puStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_110c99848,&uStack_c0,puVar1);
    func_0x000107c278ac(&puStack_a8);
  }
  return;
}



/* Entry: 10af6be84; end: 10af6befb;  */

void FUN_10af6be84(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110c99848,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 10af6befc; end: 10af6c06f;  */

void FUN_10af6befc(long param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long **pplVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined *puVar9;
  long *plVar10;
  long lVar11;
  undefined8 *unaff_x22;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 *puStack_270;
  undefined8 auStack_268 [2];
  char cStack_251;
  undefined8 auStack_250 [2];
  char cStack_239;
  long lStack_238;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 *puStack_1d8;
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 *puStack_158;
  undefined8 auStack_150 [2];
  char cStack_139;
  long lStack_138;
  long alStack_f0 [3];
  long *plStack_d8;
  long **applStack_d0 [2];
  char cStack_b9;
  long lStack_b8;
  undefined1 *puStack_b0;
  long *plStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar7 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_2;
  puVar4 = param_3;
  _objc_retain(param_2);
  plVar10 = (long *)0x0;
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar9 = &UNK_10f6ec608;
    }
    else {
      puVar9 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar9);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar9 = &UNK_110c99898;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110c99898,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar4 = (undefined *)puVar7;
    param_4 = param_3;
    unaff_x22 = &uStack_80;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined *)puVar7;
      param_4 = param_3;
      unaff_x22 = &uStack_80;
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
  puVar2 = puVar1;
  __Unwind_Resume();
  plVar8 = alStack_f0;
  pcStack_88 = FUN_10af6c070;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar3 = (long **)0x0;
  puVar5 = puVar4;
  puStack_b0 = (undefined1 *)unaff_x22;
  plStack_a8 = plVar10;
  puStack_a0 = puVar1;
  puStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  if (puVar2 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar2 + 8);
    puVar1 = &UNK_10f6ec78e;
    if ((int)puVar9 == 0) {
      puVar1 = &UNK_10f6ec793;
    }
    func_0x000107c278b8(applStack_d0,puVar1);
    alStack_f0[0] = 0;
    alStack_f0[1] = 0;
    alStack_f0[2] = 0;
    func_0x000107c27984(alStack_f0,applStack_d0,&lStack_b8,1);
    puVar9 = &UNK_110c998e8;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110c998e8,alStack_f0,puVar4);
    pplVar3 = &plStack_d8;
    plStack_d8 = alStack_f0;
    func_0x000107c278ac();
    puVar5 = (undefined *)plVar8;
    param_4 = puVar4;
    plVar10 = alStack_f0;
    if (cStack_b9 < '\0') {
      pplVar3 = applStack_d0[0];
      __ZdlPv();
      puVar5 = (undefined *)plVar8;
      param_4 = puVar4;
      plVar10 = alStack_f0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  plStack_d8 = plVar10;
  func_0x000107c278ac(&plStack_d8);
  if (cStack_b9 < '\0') {
    __ZdlPv(applStack_d0[0]);
  }
  __Unwind_Resume();
  puVar7 = &uStack_170;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar9;
  puVar1 = puVar5;
  _objc_retain(puVar9);
  if (pplVar3 != (long **)0x0) {
    plVar10 = pplVar3[1];
    _objc_retain(puVar9);
    if (puVar9 == (undefined *)0x0) {
      puVar4 = &UNK_10f6ec608;
    }
    else {
      puVar4 = puVar9;
      _objc_retainAutorelease(puVar9);
      func_0x00010bdc3520();
    }
    _objc_release(puVar9);
    func_0x000107c278b8(auStack_150,puVar4);
    uStack_170 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    func_0x000107c27984(&uStack_170,auStack_150,&lStack_138,1);
    puVar4 = &UNK_110c99938;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110c99938,&uStack_170,puVar5);
    puStack_158 = (undefined1 *)&uStack_170;
    func_0x000107c278ac(&puStack_158);
    puVar1 = (undefined *)puVar7;
    param_4 = puVar5;
    if (cStack_139 < '\0') {
      __ZdlPv(auStack_150[0]);
      puVar1 = (undefined *)puVar7;
      param_4 = puVar5;
    }
  }
  puVar2 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar9);
  _objc_release(puVar9);
  __Unwind_Resume();
  puVar7 = &uStack_1f0;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar4;
  puVar5 = puVar1;
  _objc_retain(puVar4);
  if (puVar2 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar2 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar9 = &UNK_10f6ec608;
    }
    else {
      puVar9 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    func_0x000107c278b8(auStack_1d0,puVar9);
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    func_0x000107c27984(&uStack_1f0,auStack_1d0,&lStack_1b8,1);
    puVar9 = &UNK_110c99988;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110c99988,&uStack_1f0,puVar1);
    puStack_1d8 = (undefined1 *)&uStack_1f0;
    func_0x000107c278ac(&puStack_1d8);
    puVar5 = (undefined *)puVar7;
    param_4 = puVar1;
    if (cStack_1b9 < '\0') {
      __ZdlPv(auStack_1d0[0]);
      puVar5 = (undefined *)puVar7;
      param_4 = puVar1;
    }
  }
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b8) {
    ___stack_chk_fail();
    _objc_release(puVar4);
    _objc_release(puVar4);
    __Unwind_Resume();
    lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar9);
    _objc_retain(puVar5);
    if (puVar1 != (undefined *)0x0) {
      plVar10 = *(long **)(puVar1 + 8);
      _objc_retain(puVar9);
      if (puVar9 == (undefined *)0x0) {
        puVar4 = &UNK_10f6ec608;
      }
      else {
        puVar4 = puVar9;
        _objc_retainAutorelease(puVar9);
        func_0x00010bdc3520();
      }
      _objc_release(puVar9);
      func_0x000107c278b8(auStack_268,puVar4);
      _objc_retain(puVar5);
      if (puVar5 == (undefined *)0x0) {
        puVar4 = &UNK_10f6ec608;
      }
      else {
        _objc_retainAutorelease(puVar5);
        puVar4 = puVar5;
        func_0x00010bdc3520(puVar5);
      }
      _objc_release(puVar5);
      func_0x000107c278b8(auStack_250,puVar4);
      uStack_288 = 0;
      uStack_280 = 0;
      uStack_278 = 0;
      func_0x000107c27984(&uStack_288,auStack_268,&lStack_238,2);
      (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110c999d8,&uStack_288,param_4);
      puStack_270 = &uStack_288;
      func_0x000107c278ac(&puStack_270);
      lVar11 = 0;
      do {
        if ((&cStack_239)[lVar11] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_250 + lVar11));
        }
        lVar11 = lVar11 + -0x18;
      } while (lVar11 != -0x30);
    }
    _objc_release(puVar5);
    puVar4 = puVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_238) {
      ___stack_chk_fail();
      _objc_release(puVar5);
      if (cStack_251 < '\0') {
        __ZdlPv(auStack_268[0]);
      }
      _objc_release(puVar5);
      _objc_release(puVar9);
      __Unwind_Resume(puVar4);
      lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar9 = PTR_PTR_1126b84f8;
      _objc_alloc(PTR_PTR_1126b84f8);
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126b8500;
      _objc_alloc();
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c016840();
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c060a40(puVar9);
      _objc_release(puVar5);
      _objc_release(puVar1);
      _objc_release(puVar2);
      puVar6 = puVar4;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
        ___stack_chk_fail();
        _objc_release(puVar5);
        _objc_release(puVar1);
        _objc_release(puVar2);
        _objc_release(puVar4);
        __Unwind_Resume();
        puVar9 = *(undefined **)(puVar6 + 8);
        _objc_retain(puVar9);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10af6c070; end: 10af6c187;  */

void FUN_10af6c070(long param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  undefined1 **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long *plVar9;
  undefined8 *unaff_x21;
  long lVar10;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 auStack_1e8 [2];
  char cStack_1d1;
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 *puStack_158;
  undefined8 auStack_150 [2];
  char cStack_139;
  long lStack_138;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 *puStack_d8;
  undefined8 auStack_d0 [2];
  char cStack_b9;
  long lStack_b8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  puVar7 = &uStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined1 **)0x0;
  puVar8 = param_3;
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    puVar8 = &UNK_10f6ec78e;
    if ((int)param_2 == 0) {
      puVar8 = &UNK_10f6ec793;
    }
    func_0x000107c278b8(appuStack_50,puVar8);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x000107c27984(&uStack_70,appuStack_50,&lStack_38,1);
    param_2 = &UNK_110c998e8;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110c998e8,&uStack_70,param_3);
    ppuVar1 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x000107c278ac();
    puVar8 = (undefined *)puVar7;
    param_4 = param_3;
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar1 = appuStack_50[0];
      __ZdlPv();
      puVar8 = (undefined *)puVar7;
      param_4 = param_3;
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x000107c278ac(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  puVar7 = &uStack_f0;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  puVar3 = puVar8;
  _objc_retain(param_2);
  if (ppuVar1 != (undefined1 **)0x0) {
    plVar9 = (long *)ppuVar1[1];
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ec608;
    }
    else {
      puVar2 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_d0,puVar2);
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    func_0x000107c27984(&uStack_f0,auStack_d0,&lStack_b8,1);
    puVar2 = &UNK_110c99938;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110c99938,&uStack_f0,puVar8);
    puStack_d8 = (undefined1 *)&uStack_f0;
    func_0x000107c278ac(&puStack_d8);
    puVar3 = (undefined *)puVar7;
    param_4 = puVar8;
    if (cStack_b9 < '\0') {
      __ZdlPv(auStack_d0[0]);
      puVar3 = (undefined *)puVar7;
      param_4 = puVar8;
    }
  }
  puVar8 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar7 = &uStack_170;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar2;
  puVar5 = puVar3;
  _objc_retain(puVar2);
  if (puVar8 != (undefined *)0x0) {
    plVar9 = *(long **)(puVar8 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar8 = &UNK_10f6ec608;
    }
    else {
      puVar8 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x000107c278b8(auStack_150,puVar8);
    uStack_170 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    func_0x000107c27984(&uStack_170,auStack_150,&lStack_138,1);
    puVar4 = &UNK_110c99988;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110c99988,&uStack_170,puVar3);
    puStack_158 = (undefined1 *)&uStack_170;
    func_0x000107c278ac(&puStack_158);
    puVar5 = (undefined *)puVar7;
    param_4 = puVar3;
    if (cStack_139 < '\0') {
      __ZdlPv(auStack_150[0]);
      puVar5 = (undefined *)puVar7;
      param_4 = puVar3;
    }
  }
  puVar8 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_138) {
    ___stack_chk_fail();
    _objc_release(puVar2);
    _objc_release(puVar2);
    __Unwind_Resume();
    lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar4);
    _objc_retain(puVar5);
    if (puVar8 != (undefined *)0x0) {
      plVar9 = *(long **)(puVar8 + 8);
      _objc_retain(puVar4);
      if (puVar4 == (undefined *)0x0) {
        puVar8 = &UNK_10f6ec608;
      }
      else {
        puVar8 = puVar4;
        _objc_retainAutorelease(puVar4);
        func_0x00010bdc3520();
      }
      _objc_release(puVar4);
      func_0x000107c278b8(auStack_1e8,puVar8);
      _objc_retain(puVar5);
      if (puVar5 == (undefined *)0x0) {
        puVar8 = &UNK_10f6ec608;
      }
      else {
        _objc_retainAutorelease(puVar5);
        puVar8 = puVar5;
        func_0x00010bdc3520(puVar5);
      }
      _objc_release(puVar5);
      func_0x000107c278b8(auStack_1d0,puVar8);
      uStack_208 = 0;
      uStack_200 = 0;
      uStack_1f8 = 0;
      func_0x000107c27984(&uStack_208,auStack_1e8,&lStack_1b8,2);
      (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110c999d8,&uStack_208,param_4);
      puStack_1f0 = &uStack_208;
      func_0x000107c278ac(&puStack_1f0);
      lVar10 = 0;
      do {
        if ((&cStack_1b9)[lVar10] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1d0 + lVar10));
        }
        lVar10 = lVar10 + -0x18;
      } while (lVar10 != -0x30);
    }
    _objc_release(puVar5);
    puVar8 = puVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b8) {
      ___stack_chk_fail();
      _objc_release(puVar5);
      if (cStack_1d1 < '\0') {
        __ZdlPv(auStack_1e8[0]);
      }
      _objc_release(puVar5);
      _objc_release(puVar4);
      __Unwind_Resume(puVar8);
      lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar8 = PTR_PTR_1126b84f8;
      _objc_alloc(PTR_PTR_1126b84f8);
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126b8500;
      _objc_alloc();
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c016840();
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c060a40(puVar8);
      _objc_release(puVar5);
      _objc_release(puVar3);
      _objc_release(puVar4);
      puVar6 = puVar2;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
        ___stack_chk_fail();
        _objc_release(puVar5);
        _objc_release(puVar3);
        _objc_release(puVar4);
        _objc_release(puVar2);
        __Unwind_Resume();
        puVar8 = *(undefined **)(puVar6 + 8);
        _objc_retain(puVar8);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10af6c188; end: 10af6c2fb;  */

void FUN_10af6c188(long param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 auStack_178 [2];
  char cStack_161;
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
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_2;
  puVar2 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar7 = &UNK_10f6ec608;
    }
    else {
      puVar7 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar7);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar7 = &UNK_110c99938;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110c99938,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar2 = (undefined *)puVar6;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar2 = (undefined *)puVar6;
      param_4 = param_3;
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
  puVar6 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar7;
  puVar4 = puVar2;
  _objc_retain(puVar7);
  if (puVar1 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar1 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_e0,puVar1);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar3 = &UNK_110c99988;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110c99988,&uStack_100,puVar2);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    puVar4 = (undefined *)puVar6;
    param_4 = puVar2;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar4 = (undefined *)puVar6;
      param_4 = puVar2;
    }
  }
  puVar2 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  __Unwind_Resume();
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar3);
  _objc_retain(puVar4);
  if (puVar2 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar2 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar7 = &UNK_10f6ec608;
    }
    else {
      puVar7 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x000107c278b8(auStack_178,puVar7);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar7 = &UNK_10f6ec608;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar7 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x000107c278b8(auStack_160,puVar7);
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    func_0x000107c27984(&uStack_198,auStack_178,&lStack_148,2);
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110c999d8,&uStack_198,param_4);
    puStack_180 = &uStack_198;
    func_0x000107c278ac(&puStack_180);
    lVar9 = 0;
    do {
      if ((&cStack_149)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(puVar4);
  puVar7 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_148) {
    ___stack_chk_fail();
    _objc_release(puVar4);
    if (cStack_161 < '\0') {
      __ZdlPv(auStack_178[0]);
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
    __Unwind_Resume(puVar7);
    lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar7 = PTR_PTR_1126b84f8;
    _objc_alloc(PTR_PTR_1126b84f8);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b8500;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c016840();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c060a40(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar1);
    _objc_release(puVar3);
    puVar5 = puVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
      ___stack_chk_fail();
      _objc_release(puVar4);
      _objc_release(puVar1);
      _objc_release(puVar3);
      _objc_release(puVar2);
      __Unwind_Resume();
      puVar7 = *(undefined **)(puVar5 + 8);
      _objc_retain(puVar7);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  return;
}



/* Entry: 10af6c2fc; end: 10af6c46f;  */

void FUN_10af6c2fc(long param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
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
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_2;
  puVar2 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar7 = &UNK_10f6ec608;
    }
    else {
      puVar7 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar7);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar7 = &UNK_110c99988;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110c99988,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar2 = (undefined *)puVar6;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar2 = (undefined *)puVar6;
      param_4 = param_3;
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
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar7);
  _objc_retain(puVar2);
  if (puVar1 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar1 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_f8,puVar1);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ec608;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar1 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x000107c278b8(auStack_e0,puVar1);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x000107c27984(&uStack_118,auStack_f8,&lStack_c8,2);
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110c999d8,&uStack_118,param_4);
    puStack_100 = &uStack_118;
    func_0x000107c278ac(&puStack_100);
    lVar9 = 0;
    do {
      if ((&cStack_c9)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(puVar2);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
    ___stack_chk_fail();
    _objc_release(puVar2);
    if (cStack_e1 < '\0') {
      __ZdlPv(auStack_f8[0]);
    }
    _objc_release(puVar2);
    _objc_release(puVar7);
    __Unwind_Resume(puVar1);
    lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar7 = PTR_PTR_1126b84f8;
    _objc_alloc(PTR_PTR_1126b84f8);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b8500;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c016840();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c060a40(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar1);
    _objc_release(puVar3);
    puVar5 = puVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
      ___stack_chk_fail();
      _objc_release(puVar4);
      _objc_release(puVar1);
      _objc_release(puVar3);
      _objc_release(puVar2);
      __Unwind_Resume();
      puVar7 = *(undefined **)(puVar5 + 8);
      _objc_retain(puVar7);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  return;
}



/* Entry: 10af6c470; end: 10af6c69f;  */

void FUN_10af6c470(long param_1,undefined *param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar6 = &UNK_10f6ec608;
    }
    else {
      puVar6 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_78,puVar6);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar6 = &UNK_10f6ec608;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar6 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar6);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110c999d8,&uStack_98,param_4);
    puStack_80 = &uStack_98;
    func_0x000107c278ac(&puStack_80);
    lVar7 = 0;
    do {
      if ((&cStack_49)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
  }
  _objc_release(param_3);
  puVar6 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_3);
    if (cStack_61 < '\0') {
      __ZdlPv(auStack_78[0]);
    }
    _objc_release(param_3);
    _objc_release(param_2);
    __Unwind_Resume(puVar6);
    lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar6 = PTR_PTR_1126b84f8;
    _objc_alloc(PTR_PTR_1126b84f8);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b8500;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c016840();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c060a40(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar3);
    puVar5 = puVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
      ___stack_chk_fail();
      _objc_release(puVar4);
      _objc_release(puVar2);
      _objc_release(puVar3);
      _objc_release(puVar1);
      __Unwind_Resume();
      puVar6 = *(undefined **)(puVar5 + 8);
      _objc_retain(puVar6);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  return;
}



/* Entry: 10af6c6a0; end: 10af6c81b; +[SCSQLRTUSClientCacheDatabase schema] */

void FUN_10af6c6a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = PTR_PTR_1126b84f8;
  _objc_alloc(PTR_PTR_1126b84f8);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f6ec7e0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b8500;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f6ecab9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c016840(puVar2,param_2,0,1,puVar3);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_50,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c060a40(puVar6,param_2,1,puVar1,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar3);
  puVar5 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar1);
    __Unwind_Resume();
    puVar6 = *(undefined **)(puVar5 + 8);
    _objc_retain(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10af6c81c; end: 10af6c843; -[SCSQLRTUSClientCacheDatabase getConn] */

void FUN_10af6c81c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af6c844; end: 10af6c8cb; -[SCSQLRTUSClientCacheDatabase initWithSqliteConnection:] */

undefined1 * FUN_10af6c844(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112702e78;
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



/* Entry: 10af6c8cc; end: 10af6c97f; -[SCSQLRTUSClientCacheDatabase .cxx_destruct] */

void FUN_10af6c8cc(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af6c980; end: 10af6c98f; -[SCSQLRTUSClientCacheDatabase .cxx_construct] */

void FUN_10af6c980(long param_1)

{
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 10af6c990; end: 10af6cab7;  */

void FUN_10af6c990(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      lVar1 = param_1 + 0x10;
      func_0x000107c30770(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10e53ecd0,0x3a);
      func_0x000107c3140c();
      func_0x000107c30760(lVar1,FUN_10af6cab8);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af6cab8; end: 10af6cafb;  */

void FUN_10af6cab8(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dec10;
  _objc_alloc(PTR_PTR_1126dec10);
  FUN_10b5ef268(param_1,0);
  func_0x00010af6d5ec(puVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af6cafc; end: 10af6cc37;  */

void FUN_10af6cafc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010befa1c0(*(undefined8 *)(param_1 + 8));
      lVar1 = param_1 + 0x18;
      func_0x000107c30770(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10e53ed0b,0x1af);
      func_0x000107c3140c();
      func_0x000107c3140c(lVar1,2,param_3);
      func_0x000107c30760(lVar1,FUN_10af6cc38);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af6cc38; end: 10af6cd2b;  */

void FUN_10af6cc38(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126dec18;
  _objc_alloc(PTR_PTR_1126dec18);
  uVar2 = param_1;
  FUN_10b5ef268(param_1,0);
  uVar3 = param_1;
  func_0x000107c30768(param_1,1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  FUN_10b5ef268(param_1,2);
  uVar5 = param_1;
  FUN_10b5ef268(param_1,3);
  func_0x000107c3076c(param_1,4);
  _objc_retainAutoreleasedReturnValue();
  FUN_10af6d6f4(puVar1,uVar2,uVar3,uVar4,uVar5,param_1);
  _objc_release(param_1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10af6cd2c; end: 10af6cf13;  */

void FUN_10af6cd2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  long lVar2;
  int iStack_54;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_7);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = param_1 + 0x20;
      func_0x000107c30770(lVar2,*(undefined8 *)(param_1 + 8),&UNK_10e53eebb,0x98);
      iStack_54 = 1;
      func_0x000107c3075c();
      iVar1 = iStack_54;
      iStack_54 = iStack_54 + 1;
      func_0x000107c3140c(lVar2,iVar1,param_3);
      func_0x000107c3075c(lVar2,&iStack_54,param_4);
      iVar1 = iStack_54;
      func_0x000107c3140c(lVar2,iStack_54,param_5);
      iStack_54 = iVar1 + 2;
      func_0x000107c3140c(lVar2,iVar1 + 1,param_6);
      FUN_10b5eec6c(lVar2,&iStack_54,param_7);
      FUN_10b5ef0d0(lVar2);
    }
  }
  _objc_release(param_7);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10af6cf14; end: 10af6d02f;  */

void FUN_10af6cf14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x28;
      func_0x000107c30770(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10e53ef54,0x8b);
      func_0x000107c3140c();
      func_0x000107c3140c(lVar1,2,param_3);
      FUN_10b5ef0d0(lVar1);
    }
  }
  return;
}



/* Entry: 10af6d030; end: 10af6d14b;  */

void FUN_10af6d030(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x30;
      func_0x000107c30770(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10e53efe0,0x3f);
      func_0x000107c3140c();
      func_0x000107c3140c(lVar1,2,param_3);
      FUN_10b5ef0d0(lVar1);
    }
  }
  return;
}



/* Entry: 10af6d14c; end: 10af6d2df;  */

void FUN_10af6d14c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uStack_3c;
  long *plStack_38;
  
  _objc_retain(param_3);
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      uVar4 = *(undefined8 *)(param_1 + 8);
      uVar3 = param_3;
      func_0x00010bf529e0(param_3);
      func_0x000105440200(&plStack_38,uVar4,&UNK_10e53f020,0x46,uVar3);
      uStack_3c = 2;
      func_0x000107c3140c(plStack_38,1,param_2);
      func_0x00010544033c(plStack_38,&uStack_3c,param_3);
      FUN_10b5ef0d0(plStack_38);
      plVar1 = plStack_38;
      plStack_38 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10af6d2e0; end: 10af6d3e7;  */

void FUN_10af6d2e0(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bfc5240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x38;
      func_0x000107c30770(lVar1,*(undefined8 *)(param_1 + 8),&UNK_10e53f067,0x32);
      func_0x000107c3140c();
      FUN_10b5ef0d0(lVar1);
    }
  }
  return;
}



/* Entry: 10af6d3e8; end: 10af6d40b; -[SCSQLRtusEvent copyWithZone:] */

undefined8 FUN_10af6d3e8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af6d40c; end: 10af6d4af; -[SCSQLRtusEvent hash] */

long * FUN_10af6d40c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  plVar2 = &lStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  lStack_60 = -lVar4;
  if (-1 < lVar4) {
    lStack_60 = lVar4;
  }
  func_0x00010bfde980();
  lVar4 = *(long *)(param_1 + 0x18);
  uStack_48 = *(undefined8 *)(param_1 + 0x20);
  lStack_50 = -lVar4;
  if (-1 < lVar4) {
    lStack_50 = lVar4;
  }
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x30));
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&lStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar2 == (long *)param_3) {
LAB_10af6d588:
    puVar5 = (undefined1 *)0x1;
  }
  else {
    puVar5 = (undefined1 *)0x0;
    if ((plVar2 == (long *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10af6d594;
    puVar5 = (undefined1 *)plVar2;
    _objc_opt_class(plVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if (((((ulong)puVar3 & 1) != 0) &&
        (((*(long *)((long)plVar2 + 8) == *(long *)(param_3 + 8) &&
          (*(long *)((long)plVar2 + 0x18) == *(long *)(param_3 + 0x18))) &&
         (*(long *)((long)plVar2 + 0x28) == *(long *)(param_3 + 0x28))))) &&
       (*(long *)((long)plVar2 + 0x30) == *(long *)(param_3 + 0x30))) {
      lVar4 = *(long *)((long)plVar2 + 0x10);
      if ((lVar4 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
        lVar4 = *(long *)((long)plVar2 + 0x20);
        if ((lVar4 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
          puVar5 = *(undefined1 **)((long)plVar2 + 0x38);
          if (puVar5 != *(undefined1 **)(param_3 + 0x38)) {
            func_0x00010c071ae0();
            goto LAB_10af6d594;
          }
          goto LAB_10af6d588;
        }
      }
    }
    puVar5 = (undefined1 *)0x0;
  }
LAB_10af6d594:
  _objc_release(param_3);
  return (long *)puVar5;
}



/* Entry: 10af6d4b0; end: 10af6d5af; -[SCSQLRtusEvent isEqual:] */

long FUN_10af6d4b0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af6d588:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af6d594;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        (((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
          (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) &&
         (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) &&
       (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x38);
          if (lVar3 != *(long *)(param_3 + 0x38)) {
            func_0x00010c071ae0();
            goto LAB_10af6d594;
          }
          goto LAB_10af6d588;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10af6d594:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af6d5b0; end: 10af6d637; -[SCSQLRtusEvent .cxx_destruct] */

void FUN_10af6d5b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10af6d638; end: 10af6d65b; -[SCSQLNumRecordsForProduct copyWithZone:] */

undefined8 FUN_10af6d638(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af6d65c; end: 10af6d66b; -[SCSQLNumRecordsForProduct hash] */

long FUN_10af6d65c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar1 = -lVar2;
  if (-1 < lVar2) {
    lVar1 = lVar2;
  }
  return lVar1;
}



/* Entry: 10af6d66c; end: 10af6d6f3; -[SCSQLNumRecordsForProduct isEqual:] */

bool FUN_10af6d66c(ulong param_1,undefined8 param_2,ulong param_3)

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
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10af6d6f4; end: 10af6d7bf;  */

undefined1 *
FUN_10af6d6f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar4 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_48 = PTR_PTR_112702e90;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      uVar2 = param_3;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x10);
      *(undefined8 *)((long)plVar1 + 0x10) = uVar2;
      _objc_release(uVar3);
      *(undefined8 *)((long)plVar1 + 0x18) = param_4;
      *(undefined8 *)((long)plVar1 + 0x20) = param_5;
      uVar2 = param_6;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = uVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10af6d7c0; end: 10af6d7e3; -[SCSQLEventsForProductWithinTtl copyWithZone:] */

undefined8 FUN_10af6d7c0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af6d7e4; end: 10af6d86f; -[SCSQLEventsForProductWithinTtl hash] */

long * FUN_10af6d7e4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  plVar3 = &lStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  lStack_50 = -lVar5;
  if (-1 < lVar5) {
    lStack_50 = lVar5;
  }
  func_0x00010bfde980();
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&lStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == (long *)param_3) {
LAB_10af6d920:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10af6d92c;
    puVar6 = (undefined1 *)plVar3;
    _objc_opt_class(plVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(long *)((long)plVar3 + 8) == *(long *)(param_3 + 8) &&
         (*(long *)((long)plVar3 + 0x18) == *(long *)(param_3 + 0x18))) &&
        (*(long *)((long)plVar3 + 0x20) == *(long *)(param_3 + 0x20))))) {
      lVar5 = *(long *)((long)plVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)plVar3 + 0x28);
        if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
          func_0x00010c071ae0();
          goto LAB_10af6d92c;
        }
        goto LAB_10af6d920;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10af6d92c:
  _objc_release(param_3);
  return (long *)puVar6;
}



/* Entry: 10af6d870; end: 10af6d947; -[SCSQLEventsForProductWithinTtl isEqual:] */

long FUN_10af6d870(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af6d920:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af6d92c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
         (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) &&
        (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x28);
        if (lVar3 != *(long *)(param_3 + 0x28)) {
          func_0x00010c071ae0();
          goto LAB_10af6d92c;
        }
        goto LAB_10af6d920;
      }
    }
    lVar3 = 0;
  }
LAB_10af6d92c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af6d948; end: 10af6d977; -[SCSQLEventsForProductWithinTtl .cxx_destruct] */

void FUN_10af6d948(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10af6d978; end: 10af6d983; -[SCRTUSConfigServices .cxx_destruct] */

void FUN_10af6d978(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af6d984; end: 10af6da87; -[SCRTUSEvent initWithEventName:eventId:product:protoPayload:payloadId:clientTs:] */

undefined1 *
FUN_10af6d984(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_112702ea0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c197940(puVar1);
    func_0x00010c197860(puVar1);
    func_0x00010c1e3a60(puVar1);
    func_0x00010c1e5220(puVar1);
    func_0x00010c1d9b20(puVar1);
    func_0x00010c17d280(puVar1);
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af6da88; end: 10af6da8f; -[SCRTUSEvent eventName] */

undefined8 FUN_10af6da88(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af6da90; end: 10af6dabf; -[SCRTUSEvent setEventName:] */

void FUN_10af6da90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af6dac0; end: 10af6dac7; -[SCRTUSEvent eventId] */

undefined8 FUN_10af6dac0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af6dac8; end: 10af6daf7; -[SCRTUSEvent setEventId:] */

void FUN_10af6dac8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af6daf8; end: 10af6daff; -[SCRTUSEvent product] */

undefined8 FUN_10af6daf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af6db00; end: 10af6db07; -[SCRTUSEvent setProduct:] */

void FUN_10af6db00(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10af6db08; end: 10af6db0f; -[SCRTUSEvent protoPayload] */

undefined8 FUN_10af6db08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


