/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10005e358; end: 10005e4df; -[SCSpotlightStoryFetcher _prefetchMediaWithUrl:notificationType:compositeStoryId:completion:] */

void FUN_10005e358(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x0001000745e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_10005f0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar2);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_6);
  func_0x000100071840(uVar1);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10005e4e0; end: 10005e56b;  */

void FUN_10005e4e0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uStack_38 = 0;
    func_0x00010006e820(*(undefined8 *)(param_1 + 0x20),param_2,param_2,&uStack_38);
    uVar1 = uStack_38;
    _objc_retain(uStack_38);
  }
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010006c5e0();
  _objc_release(param_1);
  _objc_release(uVar1);
  return;
}



/* Entry: 10005e56c; end: 10005e7b7; -[SCSpotlightStoryFetcher _makeRequestToFetchVideoMetadataWithSnapToken:compositeStoryId:successBlock:] */

void FUN_10005e56c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar1 = PTR__OBJC_CLASS___SCAPIAuth_1000d2088;
  lStack_68 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x0001000745a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_98 = *(undefined8 *)PTR__kSCAuthSnapTokenHeader_1000a04c8;
  ppuStack_90 = &PTR____CFConstantStringClassReference_1000a49e8;
  ppuStack_78 = &PTR____CFConstantStringClassReference_1000a9b88;
  ppuStack_88 = &PTR____CFConstantStringClassReference_1000a9ba8;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  uStack_80 = param_4;
  puStack_70 = puVar1;
  func_0x00010006ecc0(PTR__OBJC_CLASS___NSDictionary_1000d1d40,param_3,&uStack_80,&uStack_98,3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010006d440(param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar5 = PTR__OBJC_CLASS___NSString_1000d1d68;
  uVar11 = *(undefined8 *)(param_2 + 0x10);
  puVar4 = PTR_PTR_1000d2310;
  func_0x000100073cc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100072860(puVar5,param_3,&PTR____CFConstantStringClassReference_1000a9bc8);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010006e9c0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_2 + 8);
  func_0x00010006dfa0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_2 + 8);
  func_0x0001000746a0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_2 + 8);
  func_0x0001000745e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar5;
  func_0x000100071900(uVar11,param_3,puVar5,lVar6,0,PTR____NSDictionary0__struct_1000a0078,puVar2,
                      uVar7,uVar8,uVar9,param_6);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = PTR_PTR_1000d2318;
  _objc_retain(puVar10);
  _objc_opt_new(puVar5);
  puVar2 = puVar5;
  _SCUUID();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000734e0(puVar5,param_3,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSDate_1000d1bb8;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1000d1bb8);
  func_0x000100074240();
  func_0x000100073540(puVar5,param_3,(long)(param_1 * 1000.0));
  _objc_release(puVar2);
  func_0x0001000733a0(puVar5,param_3,1);
  func_0x000100073520(puVar5,param_3,0x14);
  puVar2 = puVar1;
  func_0x00010006c360(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100072c40(puVar5,param_3,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1000d2320;
  _objc_opt_new(PTR_PTR_1000d2320);
  puVar4 = PTR_PTR_1000d2328;
  _objc_opt_new(PTR_PTR_1000d2328);
  func_0x000100072f60();
  func_0x000100072ee0(puVar2,param_3,puVar4);
  func_0x00010006bfe0(puVar1,param_3,puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  func_0x000100072ca0(puVar2,param_3,puVar1);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1000d1c48;
  func_0x00010006dde0(PTR__OBJC_CLASS___NSMutableArray_1000d1c48,param_3,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100073500(puVar5,param_3,puVar1);
  _objc_release(puVar1);
  puVar1 = puVar5;
  func_0x0001000726c0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010006dae0();
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar5);
  return;
}



/* Entry: 10005e7b8; end: 10005e96b; -[SCSpotlightStoryFetcher _requestWithCompositeStoryId:] */

void FUN_10005e7b8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1000d2318;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  puVar2 = puVar1;
  _SCUUID();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000734e0(puVar1,param_3,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSDate_1000d1bb8;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1000d1bb8);
  func_0x000100074240();
  func_0x000100073540(puVar1,param_3,(long)(param_1 * 1000.0));
  _objc_release(puVar2);
  func_0x0001000733a0(puVar1,param_3,1);
  func_0x000100073520(puVar1,param_3,0x14);
  uVar3 = param_2;
  func_0x00010006c360(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100072c40(puVar1,param_3,uVar3);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1000d2320;
  _objc_opt_new(PTR_PTR_1000d2320);
  puVar4 = PTR_PTR_1000d2328;
  _objc_opt_new(PTR_PTR_1000d2328);
  func_0x000100072f60();
  func_0x000100072ee0(puVar2,param_3,puVar4);
  func_0x00010006bfe0(param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x000100072ca0(puVar2,param_3,param_2);
  _objc_release(param_2);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1000d1c48;
  func_0x00010006dde0(PTR__OBJC_CLASS___NSMutableArray_1000d1c48,param_3,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100073500(puVar1,param_3,puVar5);
  _objc_release(puVar5);
  puVar5 = puVar1;
  func_0x0001000726c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010006dae0();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar1);
  return;
}



/* Entry: 10005e96c; end: 10005ea63; -[SCSpotlightStoryFetcher _SCSSMEXTCompositeStoryIdFromCompositeStoryId:] */

void FUN_10005e96c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  func_0x00010006e600(param_3,param_2,&PTR____CFConstantStringClassReference_1000a9c08);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010006e840();
  if (lVar1 == 3) {
    puVar3 = PTR_PTR_1000d2330;
    _objc_alloc_init(PTR_PTR_1000d2330);
    lVar1 = param_3;
    func_0x000100072000(param_3,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x000100071000();
    func_0x000100072d60(puVar3,param_2,lVar2);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x000100072000(param_3,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100072fa0(puVar3,param_2,lVar1);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x000100072000(param_3,param_2,2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x000100071780();
    func_0x000100073860(puVar3,param_2,lVar2);
    _objc_release(lVar1);
  }
  else {
    puVar3 = (undefined *)0x0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar3);
  return;
}



/* Entry: 10005ea64; end: 10005eb4f; -[SCSpotlightStoryFetcher _saveToFileWithMetadata:notificationType:compositeStoryId:response:error:] */

undefined8
FUN_10005ea64(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,long param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_7 == 0) {
    lVar2 = param_6;
    func_0x000100073d60();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
    if (lVar2 == 200) {
      lVar2 = param_3;
      func_0x0001000713a0();
      if (lVar2 != 0) {
        func_0x00010006d760(param_1,param_2,param_3,param_4,param_5);
        goto LAB_10005eb18;
      }
    }
    else {
      lVar2 = param_6;
      func_0x000100073d60(param_6);
      func_0x000100071f60(puVar1,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
    }
  }
  param_1 = 0;
LAB_10005eb18:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10005eb50; end: 10005ec5b; -[SCSpotlightStoryFetcher _storeDataToFile:notificationType:compositeStoryId:] */

undefined1
FUN_10005eb50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSKeyedArchiver_1000d1db0;
  func_0x00010006dd60(PTR__OBJC_CLASS___NSKeyedArchiver_1000d1db0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x0001000745e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_10005f0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x000100074800(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(0);
  _objc_release(param_5);
  _objc_release(param_4);
  return 1;
}



/* Entry: 10005ec5c; end: 10005edb7; -[SCSpotlightStoryFetcher _clientInfo] */

void FUN_10005ec5c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1000d2338;
  _objc_opt_new(PTR_PTR_1000d2338);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x0001000745e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000737e0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1000d2340;
  _objc_opt_new(PTR_PTR_1000d2340);
  func_0x0001000733c0();
  func_0x000100072aa0(puVar1,param_2,puVar3);
  puVar4 = PTR__OBJC_CLASS___NSLocale_1000d2110;
  func_0x00010006e960(PTR__OBJC_CLASS___NSLocale_1000d2110);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x000100072040();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100072d80(puVar1,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSLocale_1000d2110;
  func_0x00010006e960(PTR__OBJC_CLASS___NSLocale_1000d2110);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x0001000714e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000730a0(puVar1,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSLocale_1000d2110;
  func_0x000100072240(PTR__OBJC_CLASS___NSLocale_1000d2110);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x000100071be0();
  func_0x000100073080(puVar1,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar1);
  return;
}



/* Entry: 10005edb8; end: 10005edcf; -[SCSpotlightStoryFetcher _finishPrefetching:success:] */

void FUN_10005edb8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010005edc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3,param_4);
    return;
  }
  return;
}



/* Entry: 10005edd0; end: 10005edff; -[SCSpotlightStoryFetcher .cxx_destruct] */

void FUN_10005edd0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 10005ee00; end: 10005eebb; -[SCSpotlightStorySDNTaskHandler initWithProcessingScope:] */

undefined8 FUN_10005ee00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000100074680(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___SCExtensionNetworkingAPIClient_1000d1e58;
  func_0x0001000739c0(PTR__OBJC_CLASS___SCExtensionNetworkingAPIClient_1000d1e58);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010006e640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar3;
  func_0x000100073b60(uVar3);
  func_0x000100070f80(param_1,param_2,uVar1,puVar2,uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10005eebc; end: 10005eec3; -[SCSpotlightStorySDNTaskHandler initWithUserSession:networkingApiClient:] */

void FUN_10005eebc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000100070f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000a0598)
            (param_1,PTR_s_initWithUserSession_networkingAp_1000d0bd8,param_3,param_4,0);
  return;
}



/* Entry: 10005eec4; end: 10005ef6f; -[SCSpotlightStorySDNTaskHandler initWithUserSession:networkingApiClient:skipMediaDownloadInNSE:] */

undefined1 *
FUN_10005eec4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1000d26f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1000d2308;
    _objc_alloc();
    func_0x000100070f60();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10005ef70; end: 10005f0a7; -[SCSpotlightStorySDNTaskHandler handleNotification:notificationType:notificationId:completion:] */

void FUN_10005ef70(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010006f340();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010006f360();
  if ((int)lVar1 == 1) {
    lVar1 = param_3;
    func_0x000100073ce0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x00010006e620();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x0001000713a0();
      if (lVar3 == 0) {
        (**(code **)(param_6 + 0x10))(param_6,0);
      }
      else {
        lVar3 = lVar1;
        func_0x0001000719e0(lVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010006f420(*(undefined8 *)(param_1 + 8));
        _objc_release(lVar3);
      }
      _objc_release(lVar2);
      _objc_release(lVar1);
      goto LAB_10005f074;
    }
  }
  (**(code **)(param_6 + 0x10))(param_6,0);
LAB_10005f074:
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_4);
  return;
}



/* Entry: 10005f0a8; end: 10005f0b3; -[SCSpotlightStorySDNTaskHandler identifier] */

undefined ** FUN_10005f0a8(void)

{
  return &PTR____CFConstantStringClassReference_1000a9c28;
}



/* Entry: 10005f0b4; end: 10005f0bf; -[SCSpotlightStorySDNTaskHandler .cxx_destruct] */

void FUN_10005f0b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 10005f0c0; end: 10005f1f3;  */

void FUN_10005f0c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x0001000717c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___SCExtensionSharedDirectory_1000d1f78;
  _objc_retain();
  _objc_retain(param_1);
  _objc_alloc(puVar1);
  func_0x00010006ffe0();
  _objc_release(param_1);
  puVar2 = PTR__OBJC_CLASS___SCExtensionSharedDirectory_1000d1f78;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionSharedDirectory_1000d1f78);
  func_0x000100070700();
  _objc_release(param_2);
  _objc_release(puVar1);
  _objc_release(param_1);
  _objc_release(param_2);
  puVar1 = PTR__OBJC_CLASS___SCExtensionSharedDirectory_1000d1f78;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionSharedDirectory_1000d1f78);
  func_0x000100070700();
  _objc_release(param_3);
  puVar3 = puVar1;
  func_0x0001000739e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar3);
  return;
}



/* Entry: 10005f1f4; end: 10005f26f;  */

undefined * FUN_10005f1f4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001000e9e90 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0;
    func_0x00010006dc20(PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0,param_2,
                        &PTR____CFConstantStringClassReference_1000a9c68,&UNK_100091100,
                        &UNK_100091138,5,FUN_10005f270,0);
    do {
      if (puRam00000001000e9e90 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001000e9e90;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1000e9e90,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001000e9e90 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001000e9e90;
}



/* Entry: 10005f270; end: 10005f28f;  */

uint FUN_10005f270(ulong param_1)

{
  return (uint)((uint)param_1 < 0x24) & (uint)(0xc00030001 >> (param_1 & 0x3f));
}



/* Entry: 10005f290; end: 10005f30b;  */

undefined * FUN_10005f290(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001000e9e98 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0;
    func_0x00010006dc20(PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0,param_2,
                        &PTR____CFConstantStringClassReference_1000a9c88,&UNK_10009114c,
                        &UNK_100091170,4,FUN_10005f30c,0);
    do {
      if (puRam00000001000e9e98 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001000e9e98;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1000e9e98,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001000e9e98 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001000e9e98;
}



/* Entry: 10005f30c; end: 10005f317;  */

bool FUN_10005f30c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10005f318; end: 10005f393;  */

undefined * FUN_10005f318(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001000e9ea0 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0;
    func_0x00010006dc20(PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0,param_2,
                        &PTR____CFConstantStringClassReference_1000a9ca8,&UNK_100091180,
                        &UNK_1000911a4,2,FUN_10005f394,0);
    do {
      if (puRam00000001000e9ea0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001000e9ea0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1000e9ea0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001000e9ea0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001000e9ea0;
}



/* Entry: 10005f394; end: 10005f39f;  */

bool FUN_10005f394(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10005f3a0; end: 10005f41b;  */

undefined * FUN_10005f3a0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001000e9ea8 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0;
    func_0x00010006dc20(PTR__OBJC_CLASS___GPBEnumDescriptor_1000d1ed0,param_2,
                        &PTR____CFConstantStringClassReference_1000a9cc8,&UNK_1000911ac,
                        &UNK_1000911d0,2,FUN_10005f41c,0);
    do {
      if (puRam00000001000e9ea8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001000e9ea8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1000e9ea8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001000e9ea8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001000e9ea8;
}



/* Entry: 10005f41c; end: 10005f42b;  */

bool FUN_10005f41c(int param_1)

{
  return param_1 == 0 || param_1 == 0x14;
}



/* Entry: 10005f42c; end: 10005f493; +[SCSSMEXTStoryCorpus descriptor] */

void FUN_10005f42c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9eb0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000dc7c0,
                        &PTR____CFConstantStringClassReference_1000a9ce8,
                        &PTR_s_ranking_serving_jaguar_ext_1000e7fa8,0,0,4,0x1c);
    puRam00000001000e9eb0 = puVar1;
  }
  return;
}



/* Entry: 10005f494; end: 10005f4fb; +[SCSSMEXTCompositeStoryId descriptor] */

void FUN_10005f494(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9eb8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000dc810,
                        &PTR____CFConstantStringClassReference_1000a9d08,
                        &PTR_s_ranking_serving_jaguar_ext_1000e7fa8,&PTR_s_corpus_1000e8020,3,0x18,
                        0x1c);
    puRam00000001000e9eb8 = puVar1;
  }
  return;
}



/* Entry: 10005f4fc; end: 10005f563; +[SCSSMEXTOsType descriptor] */

void FUN_10005f4fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9ec0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000dc860,
                        &PTR____CFConstantStringClassReference_1000a9d28,
                        &PTR_s_ranking_serving_jaguar_ext_1000e7fa8,0,0,4,0x1c);
    puRam00000001000e9ec0 = puVar1;
  }
  return;
}



/* Entry: 10005f564; end: 10005f5cb; +[SCSSMEXTAppInfo descriptor] */

void FUN_10005f564(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9ec8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000dc8b0,
                        &PTR____CFConstantStringClassReference_1000a9d48,
                        &PTR_s_ranking_serving_jaguar_ext_1000e7fa8,&PTR_s_appVersion_1000e8080,3,
                        0x18,0x1c);
    puRam00000001000e9ec8 = puVar1;
  }
  return;
}



/* Entry: 10005f5cc; end: 10005f633; +[SCSSMEXTClientInfo descriptor] */

void FUN_10005f5cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9ed0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000dc900,
                        &PTR____CFConstantStringClassReference_1000a9d68,
                        &PTR_s_ranking_serving_jaguar_ext_1000e7fa8,&PTR_s_userId_1000e80e0,5,0x30,
                        0x1c);
    puRam00000001000e9ed0 = puVar1;
  }
  return;
}



/* Entry: 10005f634; end: 10005f69b; +[SCSSMEXTStoryLookupRequestItem descriptor] */

void FUN_10005f634(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9ed8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000dc950,
                        &PTR____CFConstantStringClassReference_1000a9d88,
                        &PTR_s_ranking_serving_jaguar_ext_1000e7fa8,
                        &PTR_s_compositeStoryId_1000e7fe0,2,0x18,0x1c);
    puRam00000001000e9ed8 = puVar1;
  }
  return;
}



/* Entry: 10005f69c; end: 10005f717; +[SCSSMEXTStoryLookupRequestItem_EnvironmentInfo descriptor] */

undefined * FUN_10005f69c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9ee0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000dc9a0,
                        &PTR____CFConstantStringClassReference_1000a9da8,
                        &PTR_s_ranking_serving_jaguar_ext_1000e7fa8,&PTR_s_feedType_1000e7fc0,1,8,
                        0x1c);
    func_0x000100073920();
    puRam00000001000e9ee0 = puVar1;
  }
  return puRam00000001000e9ee0;
}



/* Entry: 10005f718; end: 10005f77f; +[SCSSMEXTBatchStoryLookupRequest descriptor] */

void FUN_10005f718(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9ee8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000dc9f0,
                        &PTR____CFConstantStringClassReference_1000a9dc8,
                        &PTR_s_ranking_serving_jaguar_ext_1000e7fa8,&PTR_s_requestId_1000e8180,6,
                        0x30,0x1c);
    puRam00000001000e9ee8 = puVar1;
  }
  return;
}



/* Entry: 10005f780; end: 10005f7f3; -[SCStoryOptInMediaFetchTaskHandler initWithProcessingScope:] */

undefined8 FUN_10005f780(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___SCExtensionNetworkingAPIClient_1000d1e58;
  _objc_retain(param_3);
  func_0x0001000739c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100070a40(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 10005f7f4; end: 10005f8bb; -[SCStoryOptInMediaFetchTaskHandler initWithProcessingScope:networkClient:] */

undefined1 *
FUN_10005f7f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1000d2700;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3;
    func_0x000100074680();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x0001000745e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10005f8bc; end: 10005fc17; -[SCStoryOptInMediaFetchTaskHandler didReceiveNotificationRequest:withCompletionHandler:] */

void FUN_10005f8bc(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  
  lVar12 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_4);
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = lVar2;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x0001000713a0();
  if (lVar4 == 0) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
  else {
    lVar4 = lVar3;
    func_0x00010006ea00();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSJSONSerialization_1000d1df8;
    func_0x00010006bec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    puVar6 = puVar5;
    func_0x00010006e840();
    if (puVar6 == (undefined *)0x0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
    else {
      _dispatch_group_create();
      _objc_retain(puVar5);
      puVar7 = puVar5;
      func_0x00010006e860();
      lVar1 = lRam0000000000000000;
      while (puVar7 != (undefined *)0x0) {
        puVar14 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar5);
          }
          lVar13 = *(long *)((long)puVar14 * 8);
          lVar8 = lVar13;
          func_0x000100072060();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar13;
          func_0x000100072060();
          _objc_retainAutoreleasedReturnValue();
          func_0x000100072060();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar8;
          func_0x0001000713a0();
          if (((lVar10 != 0) && (lVar10 = lVar9, func_0x0001000713a0(), lVar10 != 0)) &&
             (lVar10 = lVar13, func_0x0001000713a0(), lVar10 != 0)) {
            _dispatch_group_enter(puVar6);
            _objc_retain(puVar6);
            func_0x00010006f0a0(param_1);
            _objc_release(puVar6);
          }
          _objc_release(lVar13);
          _objc_release(lVar9);
          _objc_release(lVar8);
          puVar14 = puVar14 + 1;
        } while (puVar7 != puVar14);
        puVar7 = puVar5;
        func_0x00010006e860();
      }
      _objc_release(puVar5);
      uVar11 = 0;
      _dispatch_time(0,20000000000);
      _dispatch_group_wait(puVar6,uVar11);
      (**(code **)(param_4 + 0x10))(param_4);
      _objc_release(puVar6);
    }
    _objc_release(puVar5);
    _objc_release(0);
    _objc_release(lVar4);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 != lVar12) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010006b914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__dispatch_group_leave_1000a0178)(*(undefined8 *)(param_4 + 0x20));
    return;
  }
  return;
}



/* Entry: 10005fc18; end: 10005fc1f;  */

void FUN_10005fc18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006b914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_1000a0178)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10005fc20; end: 10005fd77; -[SCStoryOptInMediaFetchTaskHandler downloadSnapWithSnapHash:snapId:snapMediaURL:completion:] */

void FUN_10005fc20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSString_1000d1d68;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x000100072860(puVar1,param_2,&PTR____CFConstantStringClassReference_1000a9e88);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1000d1d68;
  func_0x000100072860(PTR__OBJC_CLASS___NSString_1000d1d68,param_2,
                      &PTR____CFConstantStringClassReference_1000a9ea8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  puStack_88 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10005fd78;
  puStack_70 = &UNK_1000a34e0;
  lStack_68 = param_1;
  puStack_60 = puVar2;
  uStack_58 = param_6;
  _objc_retain(param_6);
  _objc_retain(puVar2);
  ppuVar3 = &puStack_88;
  _objc_retainBlock(ppuVar3);
  func_0x000100071880(*(undefined8 *)(param_1 + 0x10),param_2,puVar1,0,ppuVar3);
  _objc_release(ppuVar3);
  _objc_release(uStack_58);
  _objc_release(puStack_60);
  _objc_release(param_6);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 10005fd78; end: 10005fea7;  */

void FUN_10005fd78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = 0;
  _dispatch_get_global_queue(0,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10005fea8;
  puStack_78 = &UNK_1000a34b0;
  uStack_60 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_70 = param_2;
  uStack_68 = param_4;
  uStack_58 = param_3;
  _objc_retain(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar1;
  _objc_retain(uVar3);
  uStack_48 = uVar3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_2);
  _dispatch_async(uVar2,&puStack_90);
  _objc_release(uVar2);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 10005fea8; end: 10005ff17;  */

void FUN_10005fea8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___SCExtensionNetworkingAPIClient_1000d1e58;
  func_0x0001000711e0(PTR__OBJC_CLASS___SCExtensionNetworkingAPIClient_1000d1e58,param_2,
                      *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  puVar1 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
  if ((int)puVar2 == 0) {
    func_0x000100073d60(*(undefined8 *)(param_1 + 0x20));
    func_0x000100071f60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
  else {
    func_0x000100072780(*(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010005ff14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x48) + 0x10))();
  return;
}



/* Entry: 10005ff18; end: 10005ff9f; -[SCStoryOptInMediaFetchTaskHandler saveDataToFile:withFileName:] */

void FUN_10005ff18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___SCExtensionSharedFile_1000d1d98;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x000100070000();
  _objc_release(param_4);
  func_0x000100074800(puVar1,param_2,param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_3);
  return;
}



/* Entry: 10005ffa0; end: 10005ffcf; -[SCStoryOptInMediaFetchTaskHandler .cxx_destruct] */

void FUN_10005ffa0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 10005ffd0; end: 10005ffe3; -[SCStoryOptInNotificationBadgeUpdater badgeCountProviderType] */

void FUN_10005ffd0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000723f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000a0598)
            (PTR__OBJC_CLASS___SCNotifExtBadgeCountProviderType_1000d1c30,
             PTR_s_pushTypeWithTypes__1000d10f0,&PTR__OBJC_CLASS___NSConstantArray_1000abe20);
  return;
}



/* Entry: 10005ffe4; end: 100060237; -[SCStoryOptInNotificationBadgeUpdater provideBadgeCount:incomingNotification:completionHandler:] */

long FUN_10005ffe4(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 != 0) {
    func_0x00010006fda0(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
  uVar12 = (ulong)(param_4 != 0);
  lVar1 = param_4;
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar1;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar11;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  _objc_release(lVar1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_3);
  puVar8 = &uStack_130;
  lVar1 = param_3;
  func_0x00010006e860();
  if (lVar1 != 0) {
    lVar11 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(param_3);
        }
        uVar3 = *(undefined8 *)(lStack_128 + lVar10 * 8);
        func_0x0001000726a0();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar3;
        func_0x00010006e720();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar9;
        func_0x000100074620();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x000100072060();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        _objc_release(uVar9);
        _objc_release(uVar3);
        uVar9 = uVar5;
        func_0x000100071100();
        uVar12 = uVar12 + ((uint)uVar9 ^ 1);
        _objc_release(uVar5);
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      puVar8 = &uStack_130;
      lVar1 = param_3;
      func_0x00010006e860();
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  (**(code **)(param_5 + 0x10))(param_5,uVar12 != 0);
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(puVar8);
    puVar6 = PTR__OBJC_CLASS___SCLazy_1000d1d48;
    _objc_retain(puVar8);
    func_0x00010006dfc0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_3 + 0x30);
    *(undefined **)(param_3 + 0x30) = puVar6;
    _objc_release(uVar9);
    puVar6 = PTR__OBJC_CLASS___SCLazy_1000d1d48;
    _objc_retain(puVar8);
    func_0x00010006dfc0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_3 + 0x38);
    *(undefined **)(param_3 + 0x38) = puVar6;
    _objc_release(uVar9);
    puVar6 = PTR__OBJC_CLASS___SCExtensionNetworkingAPIClient_1000d1e58;
    func_0x0001000739c0(PTR__OBJC_CLASS___SCExtensionNetworkingAPIClient_1000d1e58);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar8;
    func_0x00010006e640(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100070360(param_3);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar8);
    _objc_release(puVar8);
    _objc_release(puVar8);
    return param_3;
  }
  return param_3;
}



/* Entry: 100060238; end: 1000603af; -[SCStoryOptInNotificationModifier initWithProcessingScope:] */

long FUN_100060238(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
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
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___SCLazy_1000d1d48;
  puVar3 = PTR___NSConcreteStackBlock_1000a00f0;
  puStack_78 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1000603b0;
  puStack_60 = &UNK_1000a2558;
  _objc_retain(param_3);
  uStack_58 = param_3;
  func_0x00010006dfc0(puVar2,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar2;
  _objc_release(uVar5);
  puVar2 = PTR__OBJC_CLASS___SCLazy_1000d1d48;
  puStack_a0 = puVar3;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x1000603e0;
  puStack_88 = &UNK_1000a2528;
  uStack_80 = param_3;
  _objc_retain(param_3);
  func_0x00010006dfc0(puVar2,param_2,&puStack_a0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar2;
  _objc_release(uVar5);
  puVar3 = PTR__OBJC_CLASS___SCExtensionNetworkingAPIClient_1000d1e58;
  func_0x0001000739c0(PTR__OBJC_CLASS___SCExtensionNetworkingAPIClient_1000d1e58);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = param_3;
  func_0x00010006e640(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100070360(param_1,param_2,puVar3,param_3,uVar5,uVar1,uVar4);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uStack_80);
  _objc_release(uStack_58);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1000603b0; end: 10006040f;  */

void FUN_1000603b0(void)

{
  _objc_alloc(PTR_PTR_1000d1ea0);
  func_0x0001000707c0();
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)();
  return;
}



/* Entry: 100060410; end: 100060533; -[SCStoryOptInNotificationModifier initWithExtensionNetworkingAPIClient:processingScope:intentDonatorLazy:avatarLazy:configs:] */

undefined1 *
FUN_100060410(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1000d2708;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100060534; end: 100060d5f; -[SCStoryOptInNotificationModifier didReceiveNotificationRequest:withModifierCallback:suppressionEnabled:] */

void FUN_100060534(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  long lStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000100071be0();
  uVar13 = *(undefined8 *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar2;
  _objc_release(uVar13);
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar3;
  func_0x000100071be0();
  uVar14 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar13;
  _objc_release(uVar14);
  _objc_release(uVar3);
  lVar1 = param_3;
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x0001000720a0(param_4);
    goto LAB_100060cec;
  }
  lVar4 = lVar2;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = 0;
  _dispatch_semaphore_create();
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_100060d60;
  uStack_88 = 0x100060d70;
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1000d1c48;
  puStack_a0 = &uStack_a8;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 8);
  puStack_80 = puVar5;
  func_0x000100071d40();
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_100060d78;
  puStack_c8 = &UNK_1000a2f40;
  _objc_retain(lVar4);
  lStack_c0 = lVar4;
  puStack_b0 = &uStack_a8;
  _objc_retain(uVar13);
  uStack_b8 = uVar13;
  func_0x00010006f6e0(uVar3);
  _dispatch_semaphore_wait(uVar13,0xffffffffffffffff);
  lVar6 = puStack_a0[5];
  func_0x00010006e840();
  if (lVar6 != 0) {
    uVar14 = *(undefined8 *)(param_1 + 8);
    func_0x000100071d40(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001000725c0();
    _objc_release(uVar14);
  }
  uVar14 = 0;
  _dispatch_semaphore_create();
  _objc_release(uVar13);
  puStack_118 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_100060f50;
  puStack_100 = &UNK_1000a3510;
  _objc_retain(lVar1);
  lStack_f8 = lVar1;
  uStack_f0 = param_1;
  _objc_retain(uVar14);
  ppuVar7 = &puStack_118;
  uStack_e8 = uVar14;
  _objc_retainBlock();
  lVar6 = lVar1;
  func_0x000100073fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar2;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar2;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar6;
  func_0x000100071100();
  lVar15 = lVar2;
  if ((int)lVar11 == 0) {
    lVar11 = lVar6;
    func_0x000100071100();
    if ((int)lVar11 != 0) {
      func_0x000100072060();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = param_1;
      func_0x00010006d540();
      if ((int)uVar12 == 0) {
        uVar12 = param_1;
        func_0x00010006d6c0();
        if ((((int)uVar12 == 0) ||
            (_SCNotifExtPhoneSupportsLeftImageOnCommNotif(), (uVar12 & 1) == 0)) &&
           (lVar11 = lVar15, func_0x0001000713a0(), lVar11 != 0)) {
          uVar16 = *(undefined8 *)(param_1 + 8);
          func_0x00010006e640();
          _objc_retainAutoreleasedReturnValue();
          uVar13 = uVar16;
          func_0x000100073aa0();
          _objc_release(uVar16);
          if ((int)uVar13 != 0) {
            func_0x0001000718a0(*(undefined8 *)(param_1 + 0x20));
            goto LAB_100060b60;
          }
        }
        goto LAB_100060b58;
      }
      uVar13 = *(undefined8 *)(param_1 + 0x38);
      func_0x000100074180(uVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(uVar14);
      func_0x00010006f040(uVar13);
      _objc_release(uVar13);
      goto LAB_100060a34;
    }
    lVar11 = lVar6;
    func_0x000100071100();
    if ((int)lVar11 == 0) {
      _dispatch_semaphore_signal(uVar14);
      lVar15 = 0;
    }
    else {
      func_0x000100072060();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = param_1;
      func_0x00010006d540();
      if ((int)uVar12 != 0) {
        uVar13 = *(undefined8 *)(param_1 + 0x38);
        func_0x000100074180(uVar13);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(uVar14);
        func_0x00010006f040(uVar13);
        _objc_release(uVar13);
        goto LAB_100060a34;
      }
      uVar12 = param_1;
      func_0x00010006d6c0();
      if ((((int)uVar12 == 0) || (_SCNotifExtPhoneSupportsLeftImageOnCommNotif(), (uVar12 & 1) == 0)
          ) && (lVar11 = lVar15, func_0x0001000713a0(), lVar11 != 0)) {
        uVar16 = *(undefined8 *)(param_1 + 8);
        func_0x00010006e640();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar16;
        func_0x000100073aa0();
        _objc_release(uVar16);
        if ((int)uVar13 != 0) {
          func_0x0001000718a0(*(undefined8 *)(param_1 + 0x20));
          goto LAB_100060b60;
        }
      }
LAB_100060b58:
      _dispatch_semaphore_signal(uVar14);
    }
  }
  else {
    func_0x000100072060();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar8;
    func_0x0001000713a0();
    if (lVar11 == 0) {
      uVar12 = param_1;
      func_0x00010006d6c0();
      if ((((int)uVar12 != 0) && (_SCNotifExtPhoneSupportsLeftImageOnCommNotif(), (uVar12 & 1) != 0)
          ) || (lVar11 = lVar15, func_0x0001000713a0(), lVar11 == 0)) goto LAB_100060b58;
      func_0x0001000718a0(*(undefined8 *)(param_1 + 0x20));
      goto LAB_100060b60;
    }
    uVar13 = *(undefined8 *)(param_1 + 0x38);
    func_0x000100074180(uVar13);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar14);
    func_0x00010006f040(uVar13);
    _objc_release(uVar13);
LAB_100060a34:
    _objc_release(uVar14);
  }
LAB_100060b60:
  uVar13 = 0;
  _dispatch_time(0,10000000000);
  _dispatch_semaphore_wait(uVar14,uVar13);
  uVar12 = param_1;
  func_0x00010006c900();
  if ((((uVar12 & 1) == 0) && (uVar12 = param_1, func_0x00010006c920(), (int)uVar12 == 0)) ||
     (uVar12 = param_1, func_0x00010006d6c0(), (int)uVar12 == 0)) {
    func_0x0001000720a0(param_4);
  }
  else {
    uVar16 = *(undefined8 *)(param_1 + 0x28);
    uVar13 = *(undefined8 *)(param_1 + 0x10);
    uVar12 = param_1;
    func_0x00010006c920(param_1);
    _SCNotifExtModifyContentForCommNotif(uVar16,uVar13,uVar12);
    if (lVar15 != 0) {
      func_0x000100073360(*(undefined8 *)(param_1 + 0x28));
      func_0x000100073800(*(undefined8 *)(param_1 + 0x10));
    }
    uVar13 = *(undefined8 *)(param_1 + 0x30);
    func_0x000100074180(uVar13);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    func_0x00010006ef80(uVar13);
    _objc_release(uVar13);
    _objc_release(param_4);
  }
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar15);
  _objc_release(lVar6);
  _objc_release(ppuVar7);
  _objc_release(uStack_e8);
  _objc_release(lStack_f8);
  _objc_release(uStack_b8);
  _objc_release(lStack_c0);
  _objc_release(uVar3);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(puStack_80);
  _objc_release(uVar14);
  _objc_release(lVar4);
LAB_100060cec:
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 100060d60; end: 100060d77;  */

void FUN_100060d60(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 100060d78; end: 100060f4f;  */

void FUN_100060d78(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
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
  
  lStack_70 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_2);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar6 = &uStack_130;
  puVar7 = auStack_f0;
  lVar1 = param_2;
  func_0x00010006e860();
  if (lVar1 != 0) {
    lVar12 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(param_2);
        }
        uVar10 = *(undefined8 *)(lStack_128 + lVar8 * 8);
        uVar2 = uVar10;
        func_0x0001000726a0();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar2;
        func_0x00010006e720();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar11;
        func_0x000100074620();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar9;
        func_0x000100072060();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar9);
        _objc_release(uVar11);
        _objc_release(uVar2);
        uVar2 = uVar3;
        func_0x000100071100();
        if ((int)uVar2 != 0) {
          uVar11 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
          func_0x0001000726a0();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar10;
          func_0x00010006fda0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010006dae0(uVar11);
          _objc_release(uVar2);
          _objc_release(uVar10);
        }
        _objc_release(uVar3);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      puVar6 = &uStack_130;
      puVar7 = auStack_f0;
      lVar1 = param_2;
      func_0x00010006e860();
    } while (lVar1 != 0);
  }
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x28));
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if (puVar7 == (undefined1 *)0x0) {
    uVar9 = *(undefined8 *)(param_2 + 0x20);
    _objc_retain(puVar6);
    func_0x000100073e00(uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSURL_1000d2020;
    uVar2 = uVar9;
    _SCCacheDirectory();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar2;
    func_0x000100073dc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010006f480(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar11);
    _objc_release(uVar2);
    puVar5 = puVar6;
    func_0x000100072880();
    _objc_release(puVar6);
    if ((int)puVar5 != 0) {
      func_0x00010006cfa0(*(undefined8 *)(param_2 + 0x28));
    }
    _objc_release(puVar4);
    _objc_release(uVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010006b980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_1000a01c0)(*(undefined8 *)(param_2 + 0x30));
  return;
}



/* Entry: 100060f50; end: 10006103f;  */

void FUN_100060f50(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  if (param_4 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_3);
    func_0x000100073e00(uVar4,param_2,&PTR____CFConstantStringClassReference_1000a9f28);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSURL_1000d2020;
    uVar1 = uVar4;
    _SCCacheDirectory();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x000100073dc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010006f480(puVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x000100072880(param_3,param_2,puVar3,1);
    _objc_release(param_3);
    if ((int)uVar1 != 0) {
      func_0x00010006cfa0(*(undefined8 *)(param_1 + 0x28),param_2,puVar3);
    }
    _objc_release(puVar3);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010006b980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_1000a01c0)(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 100061040; end: 100061057;  */

void FUN_100061040(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006b980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_1000a01c0)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 100061058; end: 1000610c3;  */

void FUN_100061058(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x000100071f00(PTR__OBJC_CLASS___NSNumber_1000d1bf0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x0001000720a0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_3);
  return;
}



/* Entry: 1000610c4; end: 10006117b; -[SCStoryOptInNotificationModifier bestAttemptContent] */

ulong FUN_1000610c4(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_1000a0110;
  if (*(long *)(param_1 + 0x18) != 0) {
    puVar2 = PTR__OBJC_CLASS___NSArray_1000d1d38;
    lStack_30 = *(long *)(param_1 + 0x18);
    func_0x00010006de40(PTR__OBJC_CLASS___NSArray_1000d1d38,param_2,&lStack_30,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100072b00(*(undefined8 *)(param_1 + 0x10),param_2,puVar2);
    _objc_release(puVar2);
  }
  func_0x000100073660(*(undefined8 *)(param_1 + 0x10),param_2,0);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x000100073800(*(undefined8 *)(param_1 + 0x10),param_2,uVar6);
  uVar7 = *(ulong *)(param_1 + 0x10);
  uVar3 = uVar7;
  _objc_retain();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(uVar7);
    return uVar7;
  }
  ___stack_chk_fail();
  lStack_68 = *(long *)PTR____stack_chk_guard_1000a0110;
  uStack_78 = 0;
  puVar2 = PTR__OBJC_CLASS___UNNotificationAttachment_1000d2250;
  func_0x00010006df40(PTR__OBJC_CLASS___UNNotificationAttachment_1000d2250,param_2,
                      &PTR____CFConstantStringClassReference_1000a3a08,uVar6,0,&uStack_78);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uStack_78;
  _objc_retain(uStack_78);
  uVar6 = *(undefined8 *)(uVar3 + 0x18);
  *(undefined **)(uVar3 + 0x18) = puVar2;
  _objc_release(uVar6);
  if (uVar7 == 0) {
    uStack_70 = *(undefined8 *)(uVar3 + 0x18);
    puVar2 = PTR__OBJC_CLASS___NSArray_1000d1d38;
    func_0x00010006de40(PTR__OBJC_CLASS___NSArray_1000d1d38,param_2,&uStack_70,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100072b00(*(undefined8 *)(uVar3 + 0x10),param_2,puVar2);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_68) {
    return uVar7;
  }
  ___stack_chk_fail();
  uVar4 = *(undefined8 *)(uVar7 + 8);
  func_0x000100074640(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x000100074180();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010006e360();
  _objc_release(uVar6);
  _objc_release(uVar4);
  uVar1 = (uint)uVar4;
  _SCNotifExtPhoneSupportsCommNotif();
  return (ulong)(uVar1 & (uint)uVar5);
}



/* Entry: 10006117c; end: 100061263; -[SCStoryOptInNotificationModifier _makeAttachment:] */

ulong FUN_10006117c(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_1000a0110;
  uStack_48 = 0;
  puVar2 = PTR__OBJC_CLASS___UNNotificationAttachment_1000d2250;
  func_0x00010006df40(PTR__OBJC_CLASS___UNNotificationAttachment_1000d2250,param_2,
                      &PTR____CFConstantStringClassReference_1000a3a08,param_3,0,&uStack_48);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uStack_48;
  _objc_retain(uStack_48);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar2;
  _objc_release(uVar3);
  if (uVar4 == 0) {
    uStack_40 = *(undefined8 *)(param_1 + 0x18);
    puVar2 = PTR__OBJC_CLASS___NSArray_1000d1d38;
    func_0x00010006de40(PTR__OBJC_CLASS___NSArray_1000d1d38,param_2,&uStack_40,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100072b00(*(undefined8 *)(param_1 + 0x10),param_2,puVar2);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_38) {
    return uVar4;
  }
  ___stack_chk_fail();
  uVar5 = *(undefined8 *)(uVar4 + 8);
  func_0x000100074640(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x000100074180();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010006e360();
  _objc_release(uVar3);
  _objc_release(uVar5);
  uVar1 = (uint)uVar5;
  _SCNotifExtPhoneSupportsCommNotif();
  return (ulong)(uVar1 & (uint)uVar6);
}



/* Entry: 100061264; end: 1000612cf; -[SCStoryOptInNotificationModifier _shouldSendCommunicationNotification] */

uint FUN_100061264(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000100074640(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100074180();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010006e360();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar1 = (uint)uVar2;
  _SCNotifExtPhoneSupportsCommNotif();
  return uVar1 & (uint)uVar4;
}



/* Entry: 1000612d0; end: 10006132f; -[SCStoryOptInNotificationModifier _isFriendOrPublicUserNotification:] */

ulong FUN_1000612d0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000100071100(param_3,param_2,&PTR____CFConstantStringClassReference_1000a5d28);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x000100071100(param_3,param_2,&PTR____CFConstantStringClassReference_1000a9f08);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 100061330; end: 10006133f; -[SCStoryOptInNotificationModifier _isPublisherNotification:] */

void FUN_100061330(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100071110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000a0598)
            (param_3,PTR_s_isEqualToString__1000d0c38,
             &PTR____CFConstantStringClassReference_1000a5d08);
  return;
}



/* Entry: 100061340; end: 1000613a7; -[SCStoryOptInNotificationModifier _shallAttachThumbnailFromURL:thumbnailImageKey:thumbnailImageIv:] */

bool FUN_100061340(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  bool bVar2;
  
  _objc_retain(param_4);
  func_0x0001000713a0();
  if (param_3 == 0) {
    bVar2 = false;
  }
  else {
    lVar1 = param_4;
    func_0x0001000713a0(param_4);
    bVar2 = param_5 != 0 && lVar1 != 0;
  }
  _objc_release(param_4);
  return bVar2;
}



/* Entry: 1000613a8; end: 10006141f; -[SCStoryOptInNotificationModifier .cxx_destruct] */

void FUN_1000613a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100061420; end: 100061493; -[SCStoryOptInNotificationModifierProvider initWithProcessingScope:] */

undefined1 * FUN_100061420(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1000d2710;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100061494; end: 1000614c3; -[SCStoryOptInNotificationModifierProvider getModifier:] */

void FUN_100061494(void)

{
  _objc_alloc(PTR_PTR_1000d2348);
  func_0x0001000707c0();
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)();
  return;
}



/* Entry: 1000614c4; end: 10006155b; -[SCStoryOptInNotificationModifierProvider getTaskHandlers:] */

void FUN_1000614c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR____stack_chk_guard_1000a0110;
  puVar1 = PTR_PTR_1000d2350;
  _objc_alloc();
  func_0x0001000707c0();
  puVar2 = PTR__OBJC_CLASS___NSArray_1000d1d38;
  func_0x00010006de40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_1000a0110 != lVar3) {
    ___stack_chk_fail();
    lVar3 = *(long *)PTR____stack_chk_guard_1000a0110;
    puVar1 = PTR_PTR_1000d2358;
    _objc_alloc_init();
    puVar2 = PTR__OBJC_CLASS___NSArray_1000d1d38;
    func_0x00010006de40(PTR__OBJC_CLASS___NSArray_1000d1d38);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    if (*(long *)PTR____stack_chk_guard_1000a0110 != lVar3) {
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_storeStrong_1000a0600)(puVar1 + 8,0);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar2);
  return;
}



/* Entry: 10006155c; end: 1000615e7; -[SCStoryOptInNotificationModifierProvider getBadgeCountProviders] */

void FUN_10006155c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR____stack_chk_guard_1000a0110;
  puVar1 = PTR_PTR_1000d2358;
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___NSArray_1000d1d38;
  func_0x00010006de40(PTR__OBJC_CLASS___NSArray_1000d1d38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar2);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(puVar1 + 8,0);
  return;
}



/* Entry: 1000615e8; end: 1000615f3; -[SCStoryOptInNotificationModifierProvider .cxx_destruct] */

void FUN_1000615e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 1000615f4; end: 1000616cb; -[SCNotifExtIntentDonator initWithProcessingScope:] */

undefined8 FUN_1000615f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1000d1e98;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x0001000707c0();
  uVar2 = param_3;
  func_0x00010006e640(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010006f900(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___SCTimeProvider_1000d1de0;
  _objc_opt_new(PTR__OBJC_CLASS___SCTimeProvider_1000d1de0);
  func_0x0001000708a0(param_1,param_2,param_3,puVar1,uVar2,uVar3,puVar4);
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1000616cc; end: 100061857; -[SCNotifExtIntentDonator initWithProcessingScope:avatar:configs:grapheneLogger:timeProvider:] */

undefined1 *
FUN_1000616cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1000d2718;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___SCQueuePerformer_1000d1f70;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1000d1d68;
    func_0x000100073f00(PTR__OBJC_CLASS___NSString_1000d1d68);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100070520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100061858; end: 100061993; -[SCNotifExtIntentDonator donateIntentWithMutableNotificationContent:isGroupCommNotif:completionHandler:] */

void FUN_100061858(long param_1,undefined8 param_2,undefined8 param_3,int param_4,long param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x000100073aa0();
  if (iVar1 != 0) {
    _SCNotifExtPhoneSupportsLeftImageOnCommNotif();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010006e920();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  _objc_release(uVar6);
  puVar3 = PTR__OBJC_CLASS___SCNotificationSenderInfo_1000d2068;
  _objc_alloc();
  uVar2 = param_3;
  func_0x000100074620(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100070b40();
  _objc_release(uVar2);
  puVar4 = puVar3;
  func_0x00010006ee40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x0001000713a0();
  _objc_release(puVar4);
  if (puVar5 == (undefined *)0x0) {
    (**(code **)(param_5 + 0x10))(param_5,0,0);
  }
  else if (param_4 == 0) {
    func_0x00010006d260(param_1);
  }
  else {
    func_0x00010006c6c0();
  }
  _objc_release(puVar3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_3);
  return;
}



/* Entry: 100061994; end: 100061b0b; -[SCNotifExtIntentDonator _oneOnOneDonateIntentWithNotificationContent:showBitmoji:completionHandler:] */

void FUN_100061994(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  )

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_4 == 0) {
    func_0x00010006c500(param_1);
  }
  else {
    uVar2 = param_3;
    func_0x000100074620(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x000100072060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_5);
    func_0x00010006f080(uVar2);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar1);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 100061b0c; end: 100061b63;  */

void FUN_100061b0c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010006c500();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_1);
  return;
}



/* Entry: 100061b64; end: 10006261b; -[SCNotifExtIntentDonator _groupDonateIntentWithNotificationContent:showBitmoji:completionHandler:] */

void FUN_100061b64(long param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  undefined *puStack_3b8;
  undefined *puStack_398;
  undefined *puStack_390;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined *puStack_350;
  undefined8 uStack_348;
  code *pcStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  long lStack_320;
  undefined8 uStack_318;
  undefined1 auStack_310 [8];
  undefined1 uStack_308;
  undefined *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined **ppuStack_2d8;
  undefined1 auStack_2d0 [8];
  long lStack_2c8;
  undefined1 uStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  code *pcStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined **ppuStack_280;
  undefined8 *puStack_278;
  undefined1 auStack_270 [8];
  undefined1 auStack_268 [8];
  undefined8 uStack_260;
  undefined8 *puStack_258;
  undefined8 uStack_250;
  code *pcStack_248;
  code *pcStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  code *pcStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_4 == 0) {
    func_0x00010006c500(param_1);
    goto LAB_100062574;
  }
  lVar1 = param_3;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010006e920();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010006c9e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010006e920();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100074260();
  lVar5 = param_3;
  func_0x000100074620(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = 
  PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
  func_0x0001000743a0(
                     PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                     );
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x000100072060(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010006cc60(param_1);
  _objc_release(lVar6);
  _objc_release(puVar17);
  _objc_release(lVar5);
  puVar17 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
  func_0x00010006e840(lVar1);
  func_0x000100071fa0(puVar17);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar5 = param_3;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    puStack_3b8 = (undefined *)0x0;
    puStack_358 = (undefined *)0x0;
LAB_100061e24:
    _objc_release(lVar5);
  }
  else {
    puStack_3b8 = PTR__OBJC_CLASS___NSURL_1000d2020;
    _objc_alloc();
    lVar18 = param_3;
    func_0x000100074620(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar18;
    func_0x000100072060();
    _objc_retainAutoreleasedReturnValue();
    func_0x000100070c40();
    _objc_release(lVar20);
    _objc_release(lVar18);
    _objc_release(lVar6);
    _objc_release(lVar5);
    if (puStack_3b8 != (undefined *)0x0) {
      puStack_358 = PTR__OBJC_CLASS___SCExtensionBitmojiAvatarInfo_1000d2260;
      _objc_alloc();
      lVar5 = param_3;
      func_0x000100074620(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x000100072060();
      _objc_retainAutoreleasedReturnValue();
      func_0x000100070e20();
      _objc_release(lVar6);
      goto LAB_100061e24;
    }
    puStack_3b8 = (undefined *)0x0;
    puStack_358 = (undefined *)0x0;
  }
  lVar5 = lVar1;
  func_0x00010006e840();
  lStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  _objc_retain(lVar1);
  lVar6 = lVar1;
  func_0x00010006e860();
  if (lVar6 == 0) {
    puStack_398 = (undefined *)0x0;
    puStack_390 = (undefined *)0x0;
  }
  else {
    puStack_398 = (undefined *)0x0;
    puStack_390 = (undefined *)0x0;
    lVar18 = *plStack_1b0;
    do {
      lVar20 = 0;
      do {
        if (*plStack_1b0 != lVar18) {
          _objc_enumerationMutation(lVar1);
        }
        puVar17 = *(undefined **)(lStack_1b8 + lVar20 * 8);
        if (((puStack_358 != (undefined *)0x0) && (puStack_390 != (undefined *)0x0)) &&
           (puStack_398 != (undefined *)0x0)) goto LAB_100061fb8;
        puVar7 = puVar17;
        func_0x0001000745e0();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = param_3;
        func_0x000100074620(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar8;
        func_0x000100072060();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar7;
        func_0x000100071100();
        _objc_release(lVar9);
        _objc_release(lVar8);
        _objc_release(puVar7);
        if ((int)puVar10 == 0) {
          if (puStack_390 == (undefined *)0x0) {
            _objc_retain(puVar17);
            puStack_390 = puVar17;
          }
          else if (puStack_398 == (undefined *)0x0) {
            _objc_retain(puVar17);
            puStack_398 = puVar17;
          }
        }
        else {
          _objc_retain(puVar17);
          _objc_release(puStack_358);
          puStack_358 = puVar17;
        }
        lVar20 = lVar20 + 1;
      } while (lVar6 != lVar20);
      lVar6 = lVar1;
      func_0x00010006e860();
    } while (lVar6 != 0);
  }
LAB_100061fb8:
  _objc_release(lVar1);
  puVar17 = PTR__OBJC_CLASS___NSMutableArray_1000d1c48;
  _objc_opt_new();
  if (puStack_358 == (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___SCExtensionBitmojiAvatarInfo_1000d2260;
    _objc_alloc(PTR__OBJC_CLASS___SCExtensionBitmojiAvatarInfo_1000d2260);
    lVar6 = param_3;
    func_0x000100074620(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar6;
    func_0x000100072060();
    _objc_retainAutoreleasedReturnValue();
    func_0x000100070e20(puVar7);
    func_0x00010006dae0(puVar17);
    _objc_release(puVar7);
    _objc_release(lVar18);
    _objc_release(lVar6);
  }
  else {
    func_0x00010006dae0(puVar17);
  }
  if (puStack_390 != (undefined *)0x0) {
    func_0x00010006dae0(puVar17);
  }
  if (puStack_398 != (undefined *)0x0) {
    func_0x00010006dae0(puVar17);
  }
  puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_1000d1da8;
  _objc_opt_new();
  puVar10 = puVar7;
  _dispatch_group_create();
  lVar18 = *(long *)(param_1 + 8);
  func_0x00010006e640();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar18;
  func_0x00010006f3e0();
  _objc_release(lVar18);
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  lStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  plStack_1f0 = (long *)0x0;
  _objc_retain(puVar17);
  puStack_360 = puVar17;
  func_0x00010006e860();
  if (puStack_360 != (undefined *)0x0) {
    lVar18 = *plStack_1f0;
    do {
      puVar19 = (undefined *)0x0;
      do {
        if (*plStack_1f0 != lVar18) {
          _objc_enumerationMutation(puVar17);
        }
        puVar16 = *(undefined **)(lStack_1f8 + (long)puVar19 * 8);
        puStack_230 = PTR___NSConcreteStackBlock_1000a00f0;
        uStack_228 = 0xc2000000;
        pcStack_220 = FUN_10006261c;
        puStack_218 = &UNK_1000a1d58;
        _objc_retain(puVar7);
        ppuVar11 = &puStack_230;
        puStack_210 = puVar7;
        puStack_208 = puVar16;
        _objc_retainBlock();
        puVar12 = puVar16;
        func_0x00010006e1a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar12 == (undefined *)0x0) {
          func_0x000100072180(*(undefined8 *)(param_1 + 0x20));
        }
        else {
          _dispatch_group_enter(puVar10);
          puStack_258 = &uStack_260;
          uStack_260 = 0;
          uStack_250 = 0x3032000000;
          pcStack_248 = FUN_1000626d4;
          pcStack_240 = FUN_1000626fc;
          uStack_238 = 0;
          _objc_initWeak(auStack_268,param_1);
          puStack_2b8 = PTR___NSConcreteStackBlock_1000a00f0;
          uStack_2b0 = 0xc2000000;
          pcStack_2a8 = FUN_100062704;
          puStack_2a0 = &UNK_1000a35a0;
          puStack_278 = &uStack_260;
          _objc_copyWeak(auStack_270,auStack_268);
          _objc_retain(puVar7);
          puStack_298 = puVar7;
          puStack_290 = puVar16;
          ppuStack_280 = ppuVar11;
          _objc_retain(puVar10);
          ppuVar13 = &puStack_2b8;
          puStack_288 = puVar10;
          _objc_retainBlock();
          func_0x00010006cc20(param_1);
          if ((puVar16 != puStack_358) && (lVar6 != 0)) {
            puStack_300 = PTR___NSConcreteStackBlock_1000a00f0;
            uStack_2f8 = 0xc2000000;
            uStack_2f0 = 0x1000629e8;
            puStack_2e8 = &UNK_1000a35d0;
            puStack_2e0 = puVar16;
            lStack_2c8 = lVar6;
            _objc_copyWeak(auStack_2d0,auStack_268);
            uVar14 = 0;
            ppuStack_2d8 = ppuVar13;
            uStack_2c0 = puVar16 == puStack_358;
            _dispatch_block_create(0,&puStack_300);
            uVar15 = puStack_258[5];
            puStack_258[5] = uVar14;
            _objc_release(uVar15);
            uVar14 = 0;
            _dispatch_time(0,lVar6 * 1000000);
            uVar15 = *(undefined8 *)(param_1 + 0x20);
            func_0x000100072400(uVar15);
            _objc_retainAutoreleasedReturnValue();
            _dispatch_after(uVar14,uVar15,puStack_258[5]);
            _objc_release(uVar15);
            _objc_destroyWeak(auStack_2d0);
          }
          uVar14 = *(undefined8 *)(param_1 + 0x18);
          func_0x00010006e1a0(puVar16);
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar16;
          func_0x00010006d980();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010006f080(uVar14);
          _objc_release(puVar12);
          _objc_release(puVar16);
          _objc_release(ppuVar13);
          _objc_release(puStack_288);
          _objc_release(puStack_298);
          _objc_destroyWeak(auStack_270);
          _objc_destroyWeak(auStack_268);
          __Block_object_dispose(&uStack_260,8);
          _objc_release(uStack_238);
        }
        _objc_release(ppuVar11);
        _objc_release(puStack_210);
        puVar19 = puVar19 + 1;
      } while (puStack_360 != puVar19);
      puStack_360 = puVar17;
      func_0x00010006e860();
    } while (puStack_360 != (undefined *)0x0);
  }
  _objc_release(puVar17);
  _objc_initWeak(&uStack_260,param_1);
  uVar14 = *(undefined8 *)(param_1 + 0x20);
  func_0x000100072400(uVar14);
  _objc_retainAutoreleasedReturnValue();
  puStack_350 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_348 = 0xc2000000;
  pcStack_340 = FUN_100062a40;
  puStack_338 = &UNK_1000a3600;
  puStack_330 = puVar17;
  puStack_328 = puVar7;
  uStack_308 = lVar5 != 0;
  _objc_retain(puVar7);
  _objc_retain(puVar17);
  _objc_copyWeak(auStack_310,&uStack_260);
  _objc_retain(param_3);
  lStack_320 = param_3;
  _objc_retain(param_5);
  uStack_318 = param_5;
  _dispatch_group_notify(puVar10,uVar14,&puStack_350);
  _objc_release(uVar14);
  _objc_release(uStack_318);
  _objc_release(lStack_320);
  _objc_destroyWeak(auStack_310);
  _objc_release(puStack_328);
  _objc_release(puStack_330);
  _objc_release(puVar7);
  _objc_release(puVar17);
  _objc_destroyWeak(&uStack_260);
  _objc_release(puVar10);
  _objc_release(puStack_398);
  _objc_release(puStack_390);
  _objc_release(puStack_358);
  _objc_release(puStack_3b8);
  _objc_release(uVar4);
  _objc_release(lVar1);
  _objc_release(uVar3);
  _objc_release(lVar2);
LAB_100062574:
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 != lStack_80) {
    ___stack_chk_fail();
    _objc_destroyWeak(&uStack_260);
    __Unwind_Resume();
    puVar17 = PTR_PTR_1000d2288;
    puVar7 = PTR__OBJC_CLASS___UIColor_1000d2290;
    func_0x0001000713e0(PTR__OBJC_CLASS___UIColor_1000d2290);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 1;
    _SCAvatarViewSilhouetteImageWithStrokeAndCroppedToCircle(1,puVar7,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100073b00(puVar17);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(puVar7);
    uVar3 = *(undefined8 *)(param_3 + 0x20);
    uVar4 = *(undefined8 *)(param_3 + 0x28);
    func_0x0001000745e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100073360(uVar3);
    _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_1000a05d0)(puVar17);
    return;
  }
  return;
}



/* Entry: 10006261c; end: 1000626d3;  */

void FUN_10006261c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR_PTR_1000d2288;
  puVar1 = PTR__OBJC_CLASS___UIColor_1000d2290;
  func_0x0001000713e0(PTR__OBJC_CLASS___UIColor_1000d2290);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 1;
  _SCAvatarViewSilhouetteImageWithStrokeAndCroppedToCircle(1,puVar1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100073b00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x0001000745e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100073360(uVar2);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(puVar3);
  return;
}



/* Entry: 1000626d4; end: 1000626fb;  */

void FUN_1000626d4(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  _objc_retainBlock();
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}



/* Entry: 1000626fc; end: 100062703;  */

void FUN_1000626fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100062704; end: 100062817;  */

void FUN_100062704(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28) != 0) {
    _dispatch_block_cancel();
    lVar2 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x28) = 0;
    _objc_release(uVar1);
  }
  lVar2 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(lVar2 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    _objc_retain(param_2);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar4);
    func_0x000100072180(uVar1);
    _objc_release(uVar4);
    _objc_release(param_2);
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 100062818; end: 1000628ef;  */

void FUN_100062818(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar2 = *(long *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x0001000745e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100072060(lVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar1);
  if (lVar2 != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))();
  }
  else {
    puVar3 = PTR_PTR_1000d2288;
    func_0x00010006e300(PTR_PTR_1000d2288);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x0001000745e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100073360(uVar1,param_2,puVar3,uVar4);
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010006b914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_1000a0178)(*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 1000628f0; end: 100062a3f;  */

void FUN_1000628f0(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010006b818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_1000a00d8)(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),7);
  return;
}



/* Entry: 100062a40; end: 100062d27;  */

void FUN_100062a40(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  
  lVar16 = *(long *)PTR____stack_chk_guard_1000a0110;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1000d1c48;
  _objc_opt_new();
  lVar17 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar17);
  lVar2 = lVar17;
  func_0x00010006e860();
  lVar12 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar20 = 0;
    do {
      if (lRam0000000000000000 != lVar12) {
        _objc_enumerationMutation(lVar17);
      }
      uVar3 = *(undefined8 *)(lVar20 * 8);
      lVar19 = *(long *)(param_1 + 0x28);
      func_0x0001000745e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000100072060();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      if (lVar19 != 0) {
        func_0x00010006dae0(puVar1);
      }
      _objc_release(lVar19);
      lVar20 = lVar20 + 1;
    } while (lVar2 != lVar20);
    lVar2 = lVar17;
    func_0x00010006e860();
  }
  _objc_release(lVar17);
  if (((*(byte *)(param_1 + 0x48) & 1) == 0) &&
     (puVar4 = puVar1, func_0x00010006e840(), puVar18 = PTR_PTR_1000d2288,
     puVar4 == (undefined *)0x1)) {
    puVar4 = PTR__OBJC_CLASS___UIColor_1000d2290;
    func_0x0001000713e0(PTR__OBJC_CLASS___UIColor_1000d2290);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 1;
    _SCAvatarViewSilhouetteImageWithStrokeAndCroppedToCircle(1,puVar4,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100073b00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1000d2288;
    puVar5 = PTR__OBJC_CLASS___UIColor_1000d2290;
    func_0x0001000713e0(PTR__OBJC_CLASS___UIColor_1000d2290);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 1;
    _SCAvatarViewSilhouetteImageWithStrokeAndCroppedToCircle(1,puVar5,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100073b00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSArray_1000d1d38;
    func_0x00010006de40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010006db00(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar18);
  }
  puVar18 = puVar1;
  func_0x00010006e840();
  if (puVar18 == (undefined *)0x0) {
    puVar18 = (undefined *)0x0;
  }
  else {
    puVar4 = puVar1;
    func_0x00010006e800();
    puVar18 = puVar4;
    FUN_1000667e4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained();
  lVar12 = *(long *)(param_1 + 0x30);
  lVar17 = *(long *)(param_1 + 0x38);
  uVar13 = 1;
  puVar4 = puVar18;
  func_0x00010006c500();
  _objc_release(lVar2);
  _objc_release(puVar18);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  iVar15 = (int)uVar13;
  lVar16 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(lVar12);
  _objc_retain(puVar4);
  _objc_retain(lVar17);
  puVar5 = PTR__OBJC_CLASS___SCNotificationSenderInfo_1000d2068;
  _objc_alloc();
  lVar2 = lVar12;
  func_0x000100074620(lVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100070b40();
  _objc_release(lVar2);
  puVar6 = PTR__OBJC_CLASS___INPersonHandle_1000d22b8;
  _objc_alloc();
  puVar18 = puVar5;
  func_0x00010006ee40(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100070fe0();
  _objc_release(puVar18);
  puVar7 = PTR__OBJC_CLASS___NSPersonNameComponents_1000d22d0;
  _objc_opt_new();
  puVar18 = (undefined *)0x0;
  if (puVar4 != (undefined *)0x0) {
    puVar18 = PTR__OBJC_CLASS___INImage_1000d22c0;
    func_0x00010006fe60();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar2 = lVar12;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar2;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar8 = PTR__OBJC_CLASS___INPerson_1000d22c8;
  _objc_alloc();
  puVar9 = puVar5;
  func_0x00010006ee40(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100070760();
  _objc_release(puVar9);
  lVar2 = lVar12;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar2;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar9 = PTR__OBJC_CLASS___INSpeakableString_1000d22d8;
  _objc_alloc();
  if ((uVar13 & 1) == 0) {
    puVar11 = puVar5;
    func_0x00010006ee40(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100070c00();
    _objc_release(puVar11);
    puVar11 = puVar5;
    func_0x00010006ee40(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100073760(lVar12);
    _objc_release(puVar11);
    puVar11 = PTR__OBJC_CLASS___INSendMessageIntent_1000d22e0;
    _objc_alloc();
    func_0x000100070b00();
  }
  else {
    func_0x000100070c00();
    puVar11 = PTR__OBJC_CLASS___INSendMessageIntent_1000d22e0;
    _objc_alloc();
    puVar10 = PTR__OBJC_CLASS___NSArray_1000d1d38;
    func_0x00010006de40(PTR__OBJC_CLASS___NSArray_1000d1d38);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100070b00();
    _objc_release(puVar10);
    if (puVar4 != (undefined *)0x0) {
      puVar10 = PTR__OBJC_CLASS___INImage_1000d22c0;
      func_0x00010006fe60(PTR__OBJC_CLASS___INImage_1000d22c0);
      _objc_retainAutoreleasedReturnValue();
      func_0x000100072fc0(puVar11);
      _objc_release(puVar10);
    }
  }
  lVar2 = lVar12;
  puVar10 = puVar11;
  lVar14 = lVar17;
  func_0x00010006c5c0(puVar1);
  _objc_release(puVar11);
  _objc_release(lVar19);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(lVar20);
  _objc_release(puVar18);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar17);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar2);
  puVar1 = PTR__OBJC_CLASS___INInteraction_1000d22b0;
  _objc_retain(lVar14);
  _objc_retain(puVar10);
  _objc_alloc(puVar1);
  func_0x000100070500();
  func_0x000100072e20();
  func_0x00010006efa0(puVar1);
  lVar16 = lVar2;
  func_0x00010006e740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  uVar3 = 0;
  if (lVar16 == 0) {
    _objc_retain(0);
    func_0x00010006ec60(0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(0);
    _objc_release(uVar3);
    (**(code **)(lVar14 + 0x10))(lVar14,0,0);
  }
  else {
    lVar19 = *(long *)(lVar12 + 0x38);
    _objc_retain(0);
    func_0x00010006e920();
    _objc_retainAutoreleasedReturnValue();
    func_0x000100074260();
    _objc_release(0);
    lVar17 = lVar2;
    func_0x000100074620(lVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = 
    PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
    func_0x0001000743a0(
                       PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                       );
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar17;
    func_0x000100072060(lVar17);
    _objc_retainAutoreleasedReturnValue();
    if (iVar15 == 0) {
      func_0x00010006cca0(lVar12);
    }
    else {
      func_0x00010006cc00();
    }
    _objc_release(lVar20);
    _objc_release(puVar18);
    _objc_release(lVar17);
    (**(code **)(lVar14 + 0x10))(lVar14,1,lVar16);
    _objc_release(lVar14);
    lVar14 = lVar19;
  }
  _objc_release(lVar14);
  _objc_release(lVar16);
  _objc_release(puVar1);
  _objc_release(lVar2);
  return;
}



/* Entry: 100062d28; end: 10006310f; -[SCNotifExtIntentDonator _donateIntentWithMutableNotificationContent:notificationBitmojiAvatarImage:isGroupNotification:completionHandler:] */

void FUN_100062d28(undefined8 param_1,undefined8 param_2,long param_3,long param_4,uint param_5,
                  long param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  
  lVar13 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___SCNotificationSenderInfo_1000d2068;
  _objc_alloc();
  lVar2 = param_3;
  func_0x000100074620(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100070b40();
  _objc_release(lVar2);
  puVar3 = PTR__OBJC_CLASS___INPersonHandle_1000d22b8;
  _objc_alloc();
  puVar4 = puVar1;
  func_0x00010006ee40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100070fe0();
  _objc_release(puVar4);
  puVar5 = PTR__OBJC_CLASS___NSPersonNameComponents_1000d22d0;
  _objc_opt_new();
  puVar4 = (undefined *)0x0;
  if (param_4 != 0) {
    puVar4 = PTR__OBJC_CLASS___INImage_1000d22c0;
    func_0x00010006fe60();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar2 = param_3;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar7 = PTR__OBJC_CLASS___INPerson_1000d22c8;
  _objc_alloc();
  puVar8 = puVar1;
  func_0x00010006ee40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100070760();
  _objc_release(puVar8);
  lVar2 = param_3;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar2;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar8 = PTR__OBJC_CLASS___INSpeakableString_1000d22d8;
  _objc_alloc();
  if ((param_5 & 1) == 0) {
    puVar11 = puVar1;
    func_0x00010006ee40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100070c00();
    _objc_release(puVar11);
    puVar11 = puVar1;
    func_0x00010006ee40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100073760(param_3);
    _objc_release(puVar11);
    puVar11 = PTR__OBJC_CLASS___INSendMessageIntent_1000d22e0;
    _objc_alloc();
    func_0x000100070b00();
  }
  else {
    func_0x000100070c00();
    puVar11 = PTR__OBJC_CLASS___INSendMessageIntent_1000d22e0;
    _objc_alloc();
    puVar10 = PTR__OBJC_CLASS___NSArray_1000d1d38;
    func_0x00010006de40(PTR__OBJC_CLASS___NSArray_1000d1d38);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100070b00();
    _objc_release(puVar10);
    if (param_4 != 0) {
      puVar10 = PTR__OBJC_CLASS___INImage_1000d22c0;
      func_0x00010006fe60(PTR__OBJC_CLASS___INImage_1000d22c0);
      _objc_retainAutoreleasedReturnValue();
      func_0x000100072fc0(puVar11);
      _objc_release(puVar10);
    }
  }
  lVar2 = param_3;
  puVar10 = puVar11;
  lVar12 = param_6;
  func_0x00010006c5c0(param_1);
  _objc_release(puVar11);
  _objc_release(lVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(lVar6);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 != lVar13) {
    ___stack_chk_fail();
    _objc_retain(lVar2);
    puVar4 = PTR__OBJC_CLASS___INInteraction_1000d22b0;
    _objc_retain(lVar12);
    _objc_retain(puVar10);
    _objc_alloc(puVar4);
    func_0x000100070500();
    func_0x000100072e20();
    func_0x00010006efa0(puVar4);
    lVar13 = lVar2;
    func_0x00010006e740();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    uVar15 = 0;
    if (lVar13 == 0) {
      _objc_retain(0);
      func_0x00010006ec60(0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(0);
      _objc_release(uVar15);
      (**(code **)(lVar12 + 0x10))(lVar12,0,0);
    }
    else {
      lVar14 = *(long *)(param_3 + 0x38);
      _objc_retain(0);
      func_0x00010006e920();
      _objc_retainAutoreleasedReturnValue();
      func_0x000100074260();
      _objc_release(0);
      lVar6 = lVar2;
      func_0x000100074620(lVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = 
      PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
      func_0x0001000743a0(
                         PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                         );
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar6;
      func_0x000100072060(lVar6);
      _objc_retainAutoreleasedReturnValue();
      if (param_5 == 0) {
        func_0x00010006cca0(param_3);
      }
      else {
        func_0x00010006cc00();
      }
      _objc_release(lVar9);
      _objc_release(puVar1);
      _objc_release(lVar6);
      (**(code **)(lVar12 + 0x10))(lVar12,1,lVar13);
      _objc_release(lVar12);
      lVar12 = lVar14;
    }
    _objc_release(lVar12);
    _objc_release(lVar13);
    _objc_release(puVar4);
    _objc_release(lVar2);
    return;
  }
  return;
}



/* Entry: 100063110; end: 100063327; -[SCNotifExtIntentDonator _finishDonatingIntentAndCallingCompletionHandlerWithMutableNotificationContent:sendMessageIntent:completionHandler:isGroupNotification:] */

void FUN_100063110(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  int param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___INInteraction_1000d22b0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x000100070500();
  func_0x000100072e20();
  func_0x00010006efa0(puVar1);
  lVar2 = param_3;
  func_0x00010006e740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar7 = 0;
  if (lVar2 == 0) {
    _objc_retain(0);
    func_0x00010006ec60(0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(0);
    _objc_release(uVar7);
    (**(code **)(param_5 + 0x10))(param_5,0,0);
  }
  else {
    lVar6 = *(long *)(param_1 + 0x38);
    _objc_retain(0);
    func_0x00010006e920();
    _objc_retainAutoreleasedReturnValue();
    func_0x000100074260();
    _objc_release(0);
    lVar3 = param_3;
    func_0x000100074620(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = 
    PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
    func_0x0001000743a0(
                       PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                       );
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x000100072060(lVar3);
    _objc_retainAutoreleasedReturnValue();
    if (param_6 == 0) {
      func_0x00010006cca0(param_1);
    }
    else {
      func_0x00010006cc00();
    }
    _objc_release(lVar5);
    _objc_release(puVar4);
    _objc_release(lVar3);
    (**(code **)(param_5 + 0x10))(param_5,1,lVar2);
    _objc_release(param_5);
    param_5 = lVar6;
  }
  _objc_release(param_5);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 100063328; end: 10006354b; -[SCNotifExtIntentDonator _loadBitmojiInfoForGroupConversationId:] */

void FUN_100063328(long param_1,undefined8 param_2,undefined **param_3,undefined1 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  int iVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  ppuVar9 = &puStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x000100074660();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar1;
  func_0x000100074180();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = &PTR____CFConstantStringClassReference_1000a96a8;
  uVar2 = uVar12;
  func_0x000100072040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  _objc_release(uVar1);
  if (uVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1000d21a0;
    _objc_opt_class(PTR__OBJC_CLASS___NSNull_1000d21a0);
    uVar12 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    if ((uVar12 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1000d1da0;
      _objc_alloc();
      func_0x00010006ffa0();
      func_0x000100073560();
      puVar4 = puVar3;
      func_0x00010006eb40();
      _objc_retainAutoreleasedReturnValue();
      lStack_128 = 0;
      puStack_130 = (undefined *)0x0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      _objc_retain();
      param_4 = auStack_f0;
      puVar5 = puVar4;
      func_0x00010006e860();
      uVar12 = 0;
      if (puVar5 != (undefined *)0x0) {
        lVar11 = *plStack_120;
        do {
          puVar13 = (undefined *)0x0;
          do {
            if (*plStack_120 != lVar11) {
              _objc_enumerationMutation(puVar4);
            }
            uVar12 = *(ulong *)(lStack_128 + (long)puVar13 * 8);
            uVar1 = uVar12;
            func_0x00010006f960();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar1;
            ppuVar9 = param_3;
            func_0x000100071100();
            _objc_release(uVar1);
            if ((uVar6 & 1) != 0) {
              func_0x00010006e1e0();
              _objc_retainAutoreleasedReturnValue();
              goto LAB_1000634e4;
            }
            puVar13 = puVar13 + 1;
          } while (puVar5 != puVar13);
          param_4 = auStack_f0;
          puVar5 = puVar4;
          ppuVar9 = &puStack_130;
          func_0x00010006e860();
        } while (puVar5 != (undefined *)0x0);
        uVar12 = 0;
      }
LAB_1000634e4:
      _objc_release(puVar4);
      _objc_release(puVar4);
      _objc_release(puVar3);
      goto LAB_1000634fc;
    }
  }
  ppuVar9 = ppuVar8;
  uVar12 = 0;
LAB_1000634fc:
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(uVar12);
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lVar11 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_4);
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  ppuVar8 = &PTR____CFConstantStringClassReference_1000a9f48;
  func_0x000100070720();
  puVar5 = puVar4;
  func_0x00010006db80((double)(long)ppuVar9,param_3[5]);
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lVar11 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(ppuVar8);
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  ppuVar9 = &PTR____CFConstantStringClassReference_1000a9f68;
  func_0x000100070720();
  puVar10 = puVar13;
  func_0x00010006db80((double)(long)puVar5,*(undefined8 *)(puVar3 + 0x28));
  _objc_release(ppuVar8);
  _objc_release(puVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lVar11 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(ppuVar9);
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  puVar13 = puVar5;
  func_0x00010006db80((double)(long)puVar10,*(undefined8 *)(puVar4 + 0x28));
  iVar7 = (int)puVar13;
  _objc_release(ppuVar9);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)PTR____stack_chk_guard_1000a0110;
  puVar5 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  ppuVar8 = &PTR____CFConstantStringClassReference_1000a4768;
  if (iVar7 == 0) {
    ppuVar8 = &PTR____CFConstantStringClassReference_1000a4788;
  }
  _objc_retain(ppuVar8);
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar8);
  func_0x000100070720();
  _objc_release(puVar4);
  puVar4 = puVar5;
  func_0x00010006ff00(*(undefined8 *)(puVar3 + 0x28));
  iVar7 = (int)puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)PTR____stack_chk_guard_1000a0110;
  puVar4 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  ppuVar8 = &PTR____CFConstantStringClassReference_1000a4768;
  if (iVar7 == 0) {
    ppuVar8 = &PTR____CFConstantStringClassReference_1000a4788;
  }
  _objc_retain(ppuVar8);
  func_0x00010006ecc0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar8);
  func_0x000100070720();
  _objc_release(puVar3);
  func_0x00010006ff00(*(undefined8 *)(puVar5 + 0x28));
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar4 + 0x38,0);
  _objc_storeStrong(puVar4 + 0x30,0);
  _objc_storeStrong(puVar4 + 0x28,0);
  _objc_storeStrong(puVar4 + 0x20,0);
  _objc_storeStrong(puVar4 + 0x18,0);
  _objc_storeStrong(puVar4 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(puVar4 + 8,0);
  return;
}



/* Entry: 10006354c; end: 100063653; -[SCNotifExtIntentDonator _logGrapheneExtensionLoadGroupInfoLatency:notificationType:] */

void FUN_10006354c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lVar9 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_4);
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  ppuVar7 = &PTR____CFConstantStringClassReference_1000a9f48;
  func_0x000100070720();
  puVar4 = puVar2;
  func_0x00010006db80((double)param_3,*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lVar9 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(ppuVar7);
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  ppuVar8 = &PTR____CFConstantStringClassReference_1000a9f68;
  func_0x000100070720();
  puVar6 = puVar3;
  func_0x00010006db80((double)(long)puVar4,*(undefined8 *)(puVar1 + 0x28));
  _objc_release(ppuVar7);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lVar9 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(ppuVar8);
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  puVar3 = puVar4;
  func_0x00010006db80((double)(long)puVar6,*(undefined8 *)(puVar2 + 0x28));
  iVar5 = (int)puVar3;
  _objc_release(ppuVar8);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_1000a0110;
  puVar4 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  ppuVar7 = &PTR____CFConstantStringClassReference_1000a4768;
  if (iVar5 == 0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_1000a4788;
  }
  _objc_retain(ppuVar7);
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar7);
  func_0x000100070720();
  _objc_release(puVar2);
  puVar2 = puVar4;
  func_0x00010006ff00(*(undefined8 *)(puVar1 + 0x28));
  iVar5 = (int)puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_1000a0110;
  puVar2 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  ppuVar7 = &PTR____CFConstantStringClassReference_1000a4768;
  if (iVar5 == 0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_1000a4788;
  }
  _objc_retain(ppuVar7);
  func_0x00010006ecc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar7);
  func_0x000100070720();
  _objc_release(puVar1);
  func_0x00010006ff00(*(undefined8 *)(puVar4 + 0x28));
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar2 + 0x38,0);
  _objc_storeStrong(puVar2 + 0x30,0);
  _objc_storeStrong(puVar2 + 0x28,0);
  _objc_storeStrong(puVar2 + 0x20,0);
  _objc_storeStrong(puVar2 + 0x18,0);
  _objc_storeStrong(puVar2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(puVar2 + 8,0);
  return;
}



/* Entry: 100063654; end: 10006375b; -[SCNotifExtIntentDonator _logGrapheneExtensionOneOnOneIntentDonatorLatency:notificationType:] */

void FUN_100063654(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lVar8 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_4);
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  ppuVar7 = &PTR____CFConstantStringClassReference_1000a9f68;
  func_0x000100070720();
  puVar4 = puVar2;
  func_0x00010006db80((double)param_3,*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lVar8 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(ppuVar7);
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  puVar6 = puVar3;
  func_0x00010006db80((double)(long)puVar4,*(undefined8 *)(puVar1 + 0x28));
  iVar5 = (int)puVar6;
  _objc_release(ppuVar7);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_1000a0110;
  puVar4 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  ppuVar7 = &PTR____CFConstantStringClassReference_1000a4768;
  if (iVar5 == 0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_1000a4788;
  }
  _objc_retain(ppuVar7);
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar7);
  func_0x000100070720();
  _objc_release(puVar1);
  puVar1 = puVar4;
  func_0x00010006ff00(*(undefined8 *)(puVar2 + 0x28));
  iVar5 = (int)puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_1000a0110;
  puVar2 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  ppuVar7 = &PTR____CFConstantStringClassReference_1000a4768;
  if (iVar5 == 0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_1000a4788;
  }
  _objc_retain(ppuVar7);
  func_0x00010006ecc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar7);
  func_0x000100070720();
  _objc_release(puVar1);
  func_0x00010006ff00(*(undefined8 *)(puVar4 + 0x28));
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar2 + 0x38,0);
  _objc_storeStrong(puVar2 + 0x30,0);
  _objc_storeStrong(puVar2 + 0x28,0);
  _objc_storeStrong(puVar2 + 0x20,0);
  _objc_storeStrong(puVar2 + 0x18,0);
  _objc_storeStrong(puVar2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(puVar2 + 8,0);
  return;
}



/* Entry: 10006375c; end: 100063863; -[SCNotifExtIntentDonator _logGrapheneExtensionGroupIntentDonatorLatency:notificationType:] */

void FUN_10006375c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lVar6 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_4);
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  puVar4 = puVar3;
  func_0x00010006db80((double)param_3,*(undefined8 *)(param_1 + 0x28));
  iVar5 = (int)puVar4;
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)PTR____stack_chk_guard_1000a0110;
  puVar4 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  ppuVar1 = &PTR____CFConstantStringClassReference_1000a4768;
  if (iVar5 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_1000a4788;
  }
  _objc_retain(ppuVar1);
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  func_0x000100070720();
  _objc_release(puVar3);
  puVar3 = puVar4;
  func_0x00010006ff00(*(undefined8 *)(puVar2 + 0x28));
  iVar5 = (int)puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)PTR____stack_chk_guard_1000a0110;
  puVar3 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  ppuVar1 = &PTR____CFConstantStringClassReference_1000a4768;
  if (iVar5 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_1000a4788;
  }
  _objc_retain(ppuVar1);
  func_0x00010006ecc0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  func_0x000100070720();
  _objc_release(puVar2);
  func_0x00010006ff00(*(undefined8 *)(puVar4 + 0x28));
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar3 + 0x38,0);
  _objc_storeStrong(puVar3 + 0x30,0);
  _objc_storeStrong(puVar3 + 0x28,0);
  _objc_storeStrong(puVar3 + 0x20,0);
  _objc_storeStrong(puVar3 + 0x18,0);
  _objc_storeStrong(puVar3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(puVar3 + 8,0);
  return;
}



/* Entry: 100063864; end: 10006397b; -[SCNotifExtIntentDonator _logGrapheneExtensionGroupSelfieAvatarLoadWithIsMainSelfie:] */

void FUN_100063864(long param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_1000a0110;
  puVar2 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  ppuVar1 = &PTR____CFConstantStringClassReference_1000a4768;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_1000a4788;
  }
  _objc_retain(ppuVar1);
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  func_0x000100070720();
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010006ff00(*(undefined8 *)(param_1 + 0x28));
  iVar5 = (int)puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)PTR____stack_chk_guard_1000a0110;
  puVar4 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  ppuVar1 = &PTR____CFConstantStringClassReference_1000a4768;
  if (iVar5 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_1000a4788;
  }
  _objc_retain(ppuVar1);
  func_0x00010006ecc0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  func_0x000100070720();
  _objc_release(puVar3);
  func_0x00010006ff00(*(undefined8 *)(puVar2 + 0x28));
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar4 + 0x38,0);
  _objc_storeStrong(puVar4 + 0x30,0);
  _objc_storeStrong(puVar4 + 0x28,0);
  _objc_storeStrong(puVar4 + 0x20,0);
  _objc_storeStrong(puVar4 + 0x18,0);
  _objc_storeStrong(puVar4 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(puVar4 + 8,0);
  return;
}



/* Entry: 10006397c; end: 100063a93; -[SCNotifExtIntentDonator _logGrapheneExtensionGroupSelfieAvatarTimeoutWithIsMainSelfie:] */

void FUN_10006397c(long param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_1000a0110;
  puVar2 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  ppuVar1 = &PTR____CFConstantStringClassReference_1000a4768;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_1000a4788;
  }
  _objc_retain(ppuVar1);
  func_0x00010006ecc0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  func_0x000100070720();
  _objc_release(puVar3);
  func_0x00010006ff00(*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar2 + 0x38,0);
  _objc_storeStrong(puVar2 + 0x30,0);
  _objc_storeStrong(puVar2 + 0x28,0);
  _objc_storeStrong(puVar2 + 0x20,0);
  _objc_storeStrong(puVar2 + 0x18,0);
  _objc_storeStrong(puVar2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(puVar2 + 8,0);
  return;
}



/* Entry: 100063a94; end: 100063aff; -[SCNotifExtIntentDonator .cxx_destruct] */

void FUN_100063a94(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100063b00; end: 100063bb7; -[SCNotifExtAvatar initWithProcessingScope:] */

undefined8 FUN_100063b00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___SCNotifExtAttachmentModifier_1000d1ef8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x0001000707c0();
  uVar2 = param_3;
  func_0x00010006f900(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___SCTimeProvider_1000d1de0;
  _objc_opt_new(PTR__OBJC_CLASS___SCTimeProvider_1000d1de0);
  func_0x0001000700c0(param_1,param_2,puVar1,param_3,uVar2,puVar3);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 100063bb8; end: 100063cdf; -[SCNotifExtAvatar initWithAttachmentModifier:processingScope:grapheneLogger:timeProvider:] */

undefined1 *
FUN_100063bb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1000d2720;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010006e640();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010006e160();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100063ce0; end: 100064043; -[SCNotifExtAvatar downloadOrReadFromCacheWithNotifContent:imageUrl:avatarType:is3D:completionHandler:] */

void FUN_100063ce0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  lVar1 = param_4;
  func_0x0001000713a0();
  if (lVar1 == 0) {
    (**(code **)(param_7 + 0x10))(param_7,0);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010006e920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = uVar2;
    _objc_release(uVar5);
    lVar1 = param_4;
    FUN_1000661a8(param_4,*(undefined8 *)(param_1 + 0x10),0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1000d1d68;
    func_0x00010006bf00(PTR__OBJC_CLASS___NSString_1000d1d68);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    puVar4 = puVar3;
    func_0x000100073de0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_7);
    _objc_retain(lVar1);
    func_0x000100072500(uVar2);
    _objc_release(puVar4);
    _objc_release(lVar1);
    _objc_release(param_7);
    _objc_release(param_3);
    _objc_release(lVar1);
    _objc_release(puVar3);
  }
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 100064044; end: 100064123; -[SCNotifExtAvatar downloadAndAddBitmojiToMutableNotifContent:overlayIconName:avatarType:is3D:completionHandler:] */

void FUN_100064044(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000100074620(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010006f000(param_1,param_2,param_3,uVar2,param_4,1,param_5,param_6,0);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(uVar2);
  return;
}



/* Entry: 100064124; end: 1000643f7; -[SCNotifExtAvatar downloadAndAddThumbnailWithBitmojiFallbackToMutableNotifContent:overlayIconName:addOverlayToThumbnailOnly:avatarType:is3D:completionHandler:] */

void FUN_100064124(long param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5,
                  undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_8);
  lVar3 = param_3;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = param_3;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = lVar4;
  func_0x0001000713a0();
  if (((lVar3 == 0) || (lVar3 = lVar5, func_0x0001000713a0(), lVar3 == 0)) ||
     (lVar3 = lVar6, func_0x0001000713a0(), lVar3 == 0)) {
    lVar3 = lVar4;
    func_0x0001000713a0();
    if (lVar3 == 0) {
      iVar2 = (int)*(undefined8 *)(param_1 + 8);
      func_0x000100073aa0();
      lVar3 = param_3;
      func_0x000100074620(param_3);
      _objc_retainAutoreleasedReturnValue();
      if (iVar2 == 0) {
        puVar7 = 
        PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
        func_0x0001000743a0();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar3;
        func_0x000100072060(lVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010006cb80(param_1);
        _objc_release(lVar8);
        _objc_release(puVar7);
        _objc_release(lVar3);
        (**(code **)(param_8 + 0x10))(param_8,0);
      }
      else {
        lVar8 = lVar3;
        func_0x000100072060(lVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        uVar1 = 0;
        if (param_5 == 0) {
          uVar1 = param_4;
        }
        _objc_retain(uVar1);
        _objc_release(param_4);
        func_0x00010006f000(param_1);
        _objc_release(lVar8);
        param_4 = uVar1;
      }
    }
    else {
      func_0x00010006f000(param_1);
    }
  }
  else {
    func_0x00010006c520(param_1);
  }
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_8);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_3);
  return;
}



/* Entry: 1000643f8; end: 1000646eb; -[SCNotifExtAvatar downloadAndAddThumbnailToMutableNotifContent:imageUrl:mediaKey:mediaIv:isWrappedThumbnail:avatarType:is3D:completionHandler:] */

void FUN_1000643f8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined4 param_10,long param_11)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_11);
  lVar1 = param_4;
  func_0x0001000713a0();
  if (lVar1 == 0) {
    uVar2 = param_3;
    func_0x000100074620(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = 
    PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
    func_0x0001000743a0(
                       PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                       );
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x000100072060(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010006cb80(param_1);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(uVar2);
    (**(code **)(param_11 + 0x10))(param_11,0);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010006e920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = uVar2;
    _objc_release(uVar5);
    lVar1 = param_4;
    FUN_1000661a8(param_4,*(undefined8 *)(param_1 + 0x10),0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1000d1d68;
    func_0x00010006bf00();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_68,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    puVar3 = puVar4;
    func_0x000100073de0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_68);
    _objc_retain(puVar4);
    _objc_retain(param_3);
    uStack_70 = param_9;
    uStack_78 = param_8;
    _objc_retain(param_11);
    _objc_retain(lVar1);
    func_0x0001000724c0(uVar2);
    _objc_release(puVar3);
    _objc_release(lVar1);
    _objc_release(param_11);
    _objc_release(param_3);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar4);
    _objc_release(lVar1);
  }
  _objc_release(param_11);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1000646ec; end: 1000648db;  */

void FUN_1000646ec(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x000100074620(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = 
    PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
    func_0x0001000743a0(
                       PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                       );
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x000100072060(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010006cb80(uVar1);
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(uVar3);
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),0);
  }
  else {
    lVar2 = param_1 + 0x48;
    _objc_loadWeakRetained(lVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x000100073de0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010006c400(lVar2);
    _objc_release(uVar3);
    _objc_release(lVar2);
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x28);
    func_0x00010006e920(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100074260();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x000100074620(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = 
    PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
    func_0x0001000743a0(
                       PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                       );
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x000100072060(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010006cba0(uVar1);
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(uVar3);
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),1);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_2);
  return;
}



/* Entry: 1000648dc; end: 10006497b;  */

void FUN_1000648dc(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),7);
                    /* WARNING: Could not recover jumptable at 0x00010006baac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_1000a0570)(param_1 + 0x48,param_2 + 0x48);
  return;
}



/* Entry: 10006497c; end: 100064c87; -[SCNotifExtAvatar downloadAndAddImageToMutableNotifContent:imageUrl:overlayIconName:canUse3DBitmojiUrl:avatarType:is3D:isReaction:completionHandler:] */

void FUN_10006497c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,undefined1 param_8,
                  undefined1 param_9,undefined4 param_10,long param_11)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_11);
  lVar1 = param_4;
  func_0x0001000713a0();
  if (lVar1 == 0) {
    uVar2 = param_3;
    func_0x000100074620(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = 
    PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
    func_0x0001000743a0(
                       PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                       );
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x000100072060(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010006cb80(param_1);
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(uVar2);
    (**(code **)(param_11 + 0x10))(param_11,0);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010006e920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = uVar2;
    _objc_release(uVar5);
    lVar1 = param_4;
    if ((param_6 & 1) == 0) {
      _objc_retain(param_4);
    }
    else {
      FUN_1000661a8(param_4,*(undefined8 *)(param_1 + 0x10),param_9);
      _objc_retainAutoreleasedReturnValue();
    }
    puVar3 = PTR__OBJC_CLASS___NSString_1000d1d68;
    func_0x00010006bf00();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_68,param_1);
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = param_3;
    func_0x00010006e800(param_3);
    puVar4 = puVar3;
    func_0x000100073de0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_68);
    _objc_retain(puVar3);
    _objc_retain(param_5);
    _objc_retain(param_3);
    uStack_78 = param_7;
    uStack_70 = param_8;
    _objc_retain(param_11);
    _objc_retain(lVar1);
    func_0x000100072500(uVar5);
    _objc_release(puVar4);
    _objc_release(uVar2);
    _objc_release(lVar1);
    _objc_release(param_11);
    _objc_release(param_3);
    _objc_release(param_5);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_11);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 100064c88; end: 100064e73;  */

void FUN_100064c88(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x000100074620(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = 
    PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
    func_0x0001000743a0(
                       PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                       );
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x000100072060(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010006cb80(uVar1);
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(uVar3);
    (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),0);
  }
  else {
    lVar2 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x000100073de0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010006c400(lVar2);
    _objc_release(uVar3);
    _objc_release(lVar2);
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x28);
    func_0x00010006e920(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100074260();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x000100074620(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = 
    PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
    func_0x0001000743a0(
                       PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                       );
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x000100072060(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010006cba0(uVar1);
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(uVar3);
    (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),1);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_2);
  return;
}



/* Entry: 100064e74; end: 100064f23;  */

void FUN_100064e74(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),7);
                    /* WARNING: Could not recover jumptable at 0x00010006baac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_1000a0570)(param_1 + 0x50,param_2 + 0x50);
  return;
}



/* Entry: 100064f24; end: 10006524b; -[SCNotifExtAvatar _downloadDecryptAndAddImageToMutableNotifContent:imageUrl:mediaKey:mediaIv:overlayIconName:avatarType:is3D:completionHandler:] */

void FUN_100064f24(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6,undefined8 param_7,undefined8 param_8,undefined1 param_9,
                  undefined4 param_10,long param_11)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_11);
  lVar1 = param_4;
  func_0x0001000713a0();
  if (((lVar1 == 0) || (lVar1 = param_5, func_0x0001000713a0(), lVar1 == 0)) ||
     (lVar1 = param_6, func_0x0001000713a0(), lVar1 == 0)) {
    uVar2 = param_3;
    func_0x000100074620(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = 
    PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
    func_0x0001000743a0(
                       PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                       );
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x000100072060(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010006cb80(param_1);
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(uVar2);
    (**(code **)(param_11 + 0x10))(param_11,0);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010006e920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = uVar2;
    _objc_release(uVar5);
    lVar1 = param_4;
    FUN_1000661a8(param_4,*(undefined8 *)(param_1 + 0x10),0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_1000d1d68;
    func_0x00010006bf00();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_68,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    puVar3 = puVar4;
    func_0x000100073de0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_68);
    _objc_retain(puVar4);
    _objc_retain(param_7);
    _objc_retain(param_3);
    uStack_70 = param_9;
    uStack_78 = param_8;
    _objc_retain(param_11);
    _objc_retain(lVar1);
    func_0x0001000724a0(uVar2);
    _objc_release(puVar3);
    _objc_release(lVar1);
    _objc_release(param_11);
    _objc_release(param_3);
    _objc_release(param_7);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar4);
    _objc_release(lVar1);
  }
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10006524c; end: 100065437;  */

void FUN_10006524c(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x000100074620(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = 
    PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
    func_0x0001000743a0(
                       PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                       );
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x000100072060(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010006cb80(uVar1);
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(uVar3);
    (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),0);
  }
  else {
    lVar2 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x000100073de0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010006c400(lVar2);
    _objc_release(uVar3);
    _objc_release(lVar2);
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x28);
    func_0x00010006e920(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100074260();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x000100074620(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = 
    PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
    func_0x0001000743a0(
                       PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                       );
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x000100072060(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010006cba0(uVar1);
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(uVar3);
    (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),1);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_2);
  return;
}


