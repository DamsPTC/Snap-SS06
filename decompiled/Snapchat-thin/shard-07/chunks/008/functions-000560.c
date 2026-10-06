/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105a65ec8; end: 105a65edb; -[SCSpectaclesOTAContentDeliveryDownloader _generateExpirationDate] */

void FUN_105a65ec8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf65610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x410fa40000000000,PTR__OBJC_CLASS___NSDate_1126ae770,
             PTR_s_dateWithTimeIntervalSinceNow__1125b6f28);
  return;
}



/* Entry: 105a65edc; end: 105a65ee7; -[SCSpectaclesOTAContentDeliveryDownloader .cxx_destruct] */

void FUN_105a65edc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a65ee8; end: 105a66057; -[SCSpectaclesOTAGrpcClient initWithPerformer:unifiedGRPCClientFactory:] */

undefined1 *
FUN_105a65ee8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126eb7a0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae728;
    func_0x00010bf24820(PTR_PTR_1126ae728);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196320();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1eeba0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c214be0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c17ca40(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf56360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126c1ac8;
    _objc_alloc();
    func_0x00010c058f80();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar5;
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a66058; end: 105a660d7; -[SCSpectaclesOTAGrpcClient getVersionSetWithRequest:completion:] */

void FUN_105a66058(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ae748;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf24820(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcc0a0(uVar2,param_2,param_3,puVar1,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a660d8; end: 105a66107; -[SCSpectaclesOTAGrpcClient .cxx_destruct] */

void FUN_105a660d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a66108; end: 105a661ab; -[SCSpectaclesOTAMetadataFetcher initWithHttpMetadataService:httpRequestModifier:] */

undefined1 *
FUN_105a66108(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126eb7a8;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a661ac; end: 105a662fb; -[SCSpectaclesOTAMetadataFetcher fetchMetadataWithUrl:completion:] */

void FUN_105a661ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105a662fc;
  puStack_70 = &UNK_1108cfdb8;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  uStack_68 = param_4;
  _objc_copyWeak(auStack_90,auStack_58);
  _objc_retain(param_4);
  func_0x00010be15620(param_1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_90);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105a662fc; end: 105a663a3;  */

void FUN_105a662fc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be14c00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a663a4; end: 105a6644f; -[SCSpectaclesOTAMetadataFetcher _fetchSucceededWithResponse:completion:] */

void FUN_105a663a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_4 != 0) {
    _objc_retain(param_4);
    _objc_retain(param_3);
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    (**(code **)(param_4 + 0x10))(param_4,uVar1,uVar2,0);
    _objc_release(param_4);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105a66450; end: 105a6646f; -[SCSpectaclesOTAMetadataFetcher _fetchFailedWithError:completion:] */

void FUN_105a66450(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105a66468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_4 + 0x10))(param_4,0,0,param_3);
    return;
  }
  return;
}



/* Entry: 105a66470; end: 105a66657; -[SCSpectaclesOTAMetadataFetcher _fetchWithURL:successBlock:failureBlock:] */

void FUN_105a66470(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  ppuVar7 = &puStack_80;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf225e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b7220;
  func_0x00010c135080(PTR_PTR_1126b7220);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2bcaa0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  uVar2 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105a6665c;
  puStack_68 = &UNK_11089e820;
  uStack_60 = param_5;
  uStack_58 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retainBlock(&puStack_80);
  uVar8 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f600();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(ppuVar7);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(uVar2);
  _objc_release(puVar6);
  _objc_release(uVar3);
  _objc_release(puVar1);
  return;
}



/* Entry: 105a66658; end: 105a6665b;  */

void FUN_105a66658(void)

{
  return;
}



/* Entry: 105a6665c; end: 105a6677f;  */

/* WARNING: Removing unreachable block (ram,0x000105a66720) */

void FUN_105a6665c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (1 < param_3 - 1U) {
    if (param_3 != 0) goto LAB_105a66744;
    lVar1 = param_5;
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar2);
      _objc_release(puVar2);
      _objc_release(0);
      goto LAB_105a66744;
    }
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_6);
LAB_105a66744:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 105a66780; end: 105a667af; -[SCSpectaclesOTAMetadataFetcher .cxx_destruct] */

void FUN_105a66780(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a667b0; end: 105a66823; -[UNISpectaclesOtaService initWithUnifiedGrpcService:] */

undefined1 * FUN_105a667b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eb7b0;
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



/* Entry: 105a66824; end: 105a66907; -[UNISpectaclesOtaService getVersionSetWithRequest:callOptionsBuilder:handler:] */

void FUN_105a66824(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126c1ad0;
  _objc_opt_class(PTR_PTR_1126c1ad0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e196b8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105a66908; end: 105a66913; -[UNISpectaclesOtaService .cxx_destruct] */

void FUN_105a66908(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a66914; end: 105a66b63; -[SCSpectaclesOTAUpdateServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a66914(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  lVar1 = param_1 + _DAT_11272e24c;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c07a940();
  puVar7 = PTR_PTR_1126ae720;
  if ((int)lVar1 == 0) {
    lVar1 = lVar3;
    func_0x00010c06e7e0();
    puVar7 = PTR_PTR_1126ae720;
    if ((int)lVar1 == 0) {
      lVar1 = lVar3;
      func_0x00010c074be0();
      puVar7 = PTR_PTR_1126ae720;
      if ((int)lVar1 == 0) {
        puVar7 = (undefined *)0x0;
        goto LAB_105a66ac8;
      }
      puVar6 = auStack_90;
      _objc_copyWeak(puVar6,auStack_38);
      func_0x00010bf11fe0(puVar7);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0xc2000000;
      uStack_78 = 0x105a66ba4;
      puStack_70 = &UNK_1108cfe38;
      puVar6 = auStack_68;
      _objc_copyWeak(puVar6,auStack_38);
      func_0x00010bf11fe0(puVar7);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105a66b64;
    puStack_48 = &UNK_1108cfe08;
    puVar6 = auStack_40;
    _objc_copyWeak(puVar6,auStack_38);
    func_0x00010bf11fe0(puVar7);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_destroyWeak(puVar6);
LAB_105a66ac8:
  uVar5 = *(undefined8 *)(param_1 + _DAT_11272e250);
  puVar4 = PTR_PTR_1126c1ad8;
  _objc_alloc(PTR_PTR_1126c1ad8);
  func_0x00010c032600();
  func_0x00010bf9d660(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar7);
  _objc_release(lVar3);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105a66b64; end: 105a66c23;  */

void FUN_105a66b64(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdef300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105a66c24; end: 105a66cef; -[SCSpectaclesOTAUpdateServicesEntryPoint _createLegacyOtaManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a66c24(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126c1ae0;
  _objc_alloc(PTR_PTR_1126c1ae0);
  lVar5 = (long)_DAT_11272e24c;
  lVar2 = param_1 + lVar5;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar5;
  _objc_loadWeakRetained(param_1);
  lVar5 = param_1;
  func_0x00010bfb0bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00be60(puVar1,param_2,lVar3,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar5);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a66cf0; end: 105a670f7; -[SCSpectaclesOTAUpdateServicesEntryPoint _createCheeriosOtaManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a66cf0(long param_1)

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
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  undefined8 uVar21;
  long lVar22;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  lVar1 = param_1 + _DAT_11272e254;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126ae720;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_105a670f8;
  puStack_98 = &UNK_1108cfe98;
  _objc_copyWeak(auStack_88,auStack_80);
  lStack_90 = lVar4;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_b8,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c1ae8;
  _objc_alloc();
  lVar22 = (long)_DAT_11272e24c;
  lVar1 = param_1 + lVar22;
  _objc_loadWeakRetained();
  lVar8 = lVar1;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + lVar22;
  _objc_loadWeakRetained();
  lVar9 = lVar2;
  func_0x00010bf6fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + lVar22;
  _objc_loadWeakRetained();
  lVar11 = lVar3;
  func_0x00010bf638a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_11272e258;
  _objc_loadWeakRetained(lVar12);
  lVar13 = lVar12;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + lVar22;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010c249020();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + lVar22;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c006fe0();
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar3);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar2);
  _objc_release(lVar8);
  _objc_release(lVar1);
  puVar20 = PTR_PTR_1126c1af0;
  _objc_alloc();
  lVar22 = param_1 + lVar22;
  _objc_loadWeakRetained(lVar22);
  lVar1 = lVar22;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bdf09e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0306c0();
  uVar21 = *(undefined8 *)(param_1 + _DAT_11272e25c);
  *(undefined **)(param_1 + _DAT_11272e25c) = puVar20;
  _objc_release(uVar21);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar22);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_b8);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_88);
  _objc_release(lVar4);
  _objc_destroyWeak(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105a670f8; end: 105a6717f;  */

void FUN_105a670f8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf0e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105a67180; end: 105a67283; -[SCSpectaclesOTAUpdateServicesEntryPoint _createOTALogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a67180(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar1 = param_1 + _DAT_11272e24c;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfd38e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c06e7e0();
  if ((int)lVar1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126c1af8;
    _objc_alloc(PTR_PTR_1126c1af8);
    lVar1 = 0;
    if (param_1 != 0) {
      lVar1 = param_1 + _DAT_11272e26c;
      _objc_loadWeakRetained(lVar1);
    }
    lVar2 = lVar1;
    func_0x00010c293fc0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff8500(puVar5,param_2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105a67284; end: 105a67387; -[SCSpectaclesOTAUpdateServicesEntryPoint _createHermosaOtaManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a67284(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126c1b00;
  _objc_alloc(PTR_PTR_1126c1b00);
  lVar7 = (long)_DAT_11272e24c;
  lVar2 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bf48c40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar7;
  _objc_loadWeakRetained(param_1);
  lVar7 = param_1;
  func_0x00010bf6fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c006f60(puVar1,param_2,lVar3,lVar5,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a67388; end: 105a67577; -[SCSpectaclesOTAUpdateServicesEntryPoint _createOtaFetcherWithPerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a67388(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126c1b08;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar8 = (long)_DAT_11272e260;
  lVar2 = param_1 + lVar8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bfe4c00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + lVar8;
  _objc_loadWeakRetained(lVar8);
  lVar4 = lVar8;
  func_0x00010bfe4d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01ac20(puVar1,param_2,lVar3,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar8);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar5 = PTR_PTR_1126c1b10;
  _objc_alloc(PTR_PTR_1126c1b10);
  lVar2 = param_1 + _DAT_11272e264;
  _objc_loadWeakRetained(lVar2);
  lVar8 = lVar2;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0351e0(puVar5,param_2,param_3,lVar8);
  _objc_release(param_3);
  _objc_release(lVar8);
  _objc_release(lVar2);
  puVar6 = PTR_PTR_1126c1b18;
  _objc_alloc(PTR_PTR_1126c1b18);
  lVar2 = param_1 + _DAT_11272e268;
  _objc_loadWeakRetained(lVar2);
  lVar8 = lVar2;
  func_0x00010bf4c240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002e80(puVar6,param_2,lVar8);
  _objc_release(lVar8);
  _objc_release(lVar2);
  puVar7 = PTR_PTR_1126c1b20;
  _objc_alloc(PTR_PTR_1126c1b20);
  param_1 = param_1 + _DAT_11272e24c;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00bfc0(puVar7,param_2,lVar2,puVar5,puVar1,puVar6);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105a67578; end: 105a675f3; -[SCSpectaclesOTAUpdateServicesEntryPoint _createFirmwareUpdateClient] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a67578(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c1b28;
  _objc_alloc(PTR_PTR_1126c1b28);
  param_1 = param_1 + _DAT_11272e24c;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf48c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002100(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a675f4; end: 105a67687; -[SCSpectaclesOTAUpdateServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a675f4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272e250,0);
  _objc_destroyWeak(param_1 + _DAT_11272e26c);
  _objc_destroyWeak(param_1 + _DAT_11272e258);
  _objc_destroyWeak(param_1 + _DAT_11272e268);
  _objc_destroyWeak(param_1 + _DAT_11272e260);
  _objc_destroyWeak(param_1 + _DAT_11272e264);
  _objc_destroyWeak(param_1 + _DAT_11272e254);
  _objc_destroyWeak(param_1 + _DAT_11272e24c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272e25c,0);
  return;
}



/* Entry: 105a67688; end: 105a676ab;  */

undefined * FUN_105a67688(long param_1)

{
  if (param_1 - 1U < 0x11) {
    return (&PTR_PTR_1108cfef8)[param_1 - 1U];
  }
  return (undefined *)0x0;
}



/* Entry: 105a676ac; end: 105a677d7; -[SCSpectaclesOTAPackageServerInfo initWithReleaseSpecificTag:otaNewVersion:otaNewVersionChecksum:isDeltaUpdate:isRequiredUpdate:binaryUrl:binarySizeBytes:] */

undefined1 *
FUN_105a676ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126eb7b8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    *(undefined1 *)((long)puVar1 + 9) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
  }
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a677d8; end: 105a677fb; -[SCSpectaclesOTAPackageServerInfo copyWithZone:] */

undefined8 FUN_105a677d8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105a677fc; end: 105a67897; -[SCSpectaclesOTAPackageServerInfo hash] */

undefined8 * FUN_105a677fc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uStack_40 = (ulong)*(byte *)(param_1 + 9);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_105a67978:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105a67984;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(char *)((long)puVar3 + 8) == param_3[8] && (*(char *)((long)puVar3 + 9) == param_3[9]))
        && (*(long *)((long)puVar3 + 0x30) == *(long *)(param_3 + 0x30))))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
            if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_105a67984;
            }
            goto LAB_105a67978;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_105a67984:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105a67898; end: 105a6799f; -[SCSpectaclesOTAPackageServerInfo isEqual:] */

long FUN_105a67898(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105a67978:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105a67984;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
         (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
        (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_105a67984;
            }
            goto LAB_105a67978;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_105a67984:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105a679a0; end: 105a679a7; -[SCSpectaclesOTAPackageServerInfo releaseSpecificTag] */

undefined8 FUN_105a679a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105a679a8; end: 105a679af; -[SCSpectaclesOTAPackageServerInfo otaNewVersion] */

undefined8 FUN_105a679a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105a679b0; end: 105a679b7; -[SCSpectaclesOTAPackageServerInfo otaNewVersionChecksum] */

undefined8 FUN_105a679b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105a679b8; end: 105a679bf; -[SCSpectaclesOTAPackageServerInfo isDeltaUpdate] */

undefined1 FUN_105a679b8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105a679c0; end: 105a679c7; -[SCSpectaclesOTAPackageServerInfo isRequiredUpdate] */

undefined1 FUN_105a679c0(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 105a679c8; end: 105a679cf; -[SCSpectaclesOTAPackageServerInfo binaryUrl] */

undefined8 FUN_105a679c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105a679d0; end: 105a679d7; -[SCSpectaclesOTAPackageServerInfo binarySizeBytes] */

undefined8 FUN_105a679d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105a679d8; end: 105a67a9b; -[SCSpectaclesOTAPackageServerInfo .cxx_destruct] */

void FUN_105a679d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105a67a9c; end: 105a67aa7;  */

bool FUN_105a67a9c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 105a67aa8; end: 105a67b23;  */

undefined * FUN_105a67aa8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c1ac0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e19918,
                        &UNK_10ddca1dc,&UNK_10ddca1ec,2,FUN_105a67b24,0);
    do {
      if (puRam00000001136c1ac0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c1ac0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c1ac0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c1ac0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c1ac0;
}



/* Entry: 105a67b24; end: 105a67b2f;  */

bool FUN_105a67b24(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 105a67b30; end: 105a67bab;  */

undefined * FUN_105a67b30(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c1ac8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e19938,
                        &UNK_10ddca1f4,&UNK_10ddca210,3,FUN_105a67bac,0);
    do {
      if (puRam00000001136c1ac8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c1ac8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c1ac8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c1ac8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c1ac8;
}



/* Entry: 105a67bac; end: 105a67bb7;  */

bool FUN_105a67bac(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 105a67bb8; end: 105a67c33;  */

undefined * FUN_105a67bb8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c1ad0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e19958,
                        &UNK_10ddca21c,&UNK_10ddca244,3,FUN_105a67c34,0);
    do {
      if (puRam00000001136c1ad0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c1ad0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c1ad0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c1ad0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c1ad0;
}



/* Entry: 105a67c34; end: 105a67c3f;  */

bool FUN_105a67c34(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 105a67c40; end: 105a67ca7; +[SCSpectaclesOtaPbEmpty descriptor] */

void FUN_105a67c40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1ad8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a85c90,
                        &PTR____CFConstantStringClassReference_110e19978,&PTR_DAT_113117718,0,0,4,
                        0x1c);
    puRam00000001136c1ad8 = puVar1;
  }
  return;
}



/* Entry: 105a67ca8; end: 105a67d23; +[SCSpectaclesOtaPbOsVersion descriptor] */

undefined * FUN_105a67ca8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1ae0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a85ce0,
                        &PTR____CFConstantStringClassReference_110e19998,&PTR_DAT_113117718,
                        &PTR_DAT_113118450,0x10,0x78,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c1ae0 = puVar1;
  }
  return puRam00000001136c1ae0;
}



/* Entry: 105a67d24; end: 105a67d9f; +[SCSpectaclesOtaPbAppVersion descriptor] */

undefined * FUN_105a67d24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1ae8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a85d30,
                        &PTR____CFConstantStringClassReference_110df4198,&PTR_DAT_113117718,
                        &PTR_DAT_113117ff0,10,0x50,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c1ae8 = puVar1;
  }
  return puRam00000001136c1ae8;
}



/* Entry: 105a67da0; end: 105a67e1b; +[SCSpectaclesOtaPbVersionSet descriptor] */

undefined * FUN_105a67da0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1af0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a85d80,
                        &PTR____CFConstantStringClassReference_110e199b8,&PTR_DAT_113117718,
                        &PTR_DAT_113117e10,7,0x40,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c1af0 = puVar1;
  }
  return puRam00000001136c1af0;
}



/* Entry: 105a67e1c; end: 105a67e97; +[SCSpectaclesOtaPbReleaseNotes descriptor] */

undefined * FUN_105a67e1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1af8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a85dd0,
                        &PTR____CFConstantStringClassReference_110e199d8,&PTR_DAT_113117718,
                        &PTR_DAT_113117770,2,0x18,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c1af8 = puVar1;
  }
  return puRam00000001136c1af8;
}



/* Entry: 105a67e98; end: 105a67f13; +[SCSpectaclesOtaPbDifferentialMapEntry descriptor] */

undefined * FUN_105a67e98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1b00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a85e20,
                        &PTR____CFConstantStringClassReference_110e199f8,&PTR_DAT_113117718,
                        &PTR_DAT_1131177b0,2,0x18,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c1b00 = puVar1;
  }
  return puRam00000001136c1b00;
}



/* Entry: 105a67f14; end: 105a67f8f; +[SCSpectaclesOtaPbCreateVersionSetRequest descriptor] */

undefined * FUN_105a67f14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1b08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a85e70,
                        &PTR____CFConstantStringClassReference_110e19a18,&PTR_DAT_113117718,
                        &PTR_DAT_1131178f0,3,0x20,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c1b08 = puVar1;
  }
  return puRam00000001136c1b08;
}



/* Entry: 105a67f90; end: 105a6800b; +[SCSpectaclesOtaPbGetVersionSetRequest descriptor] */

undefined * FUN_105a67f90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1b10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a85ec0,
                        &PTR____CFConstantStringClassReference_110e19a38,&PTR_DAT_113117718,
                        &PTR_DAT_113117ef0,8,0x40,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c1b10 = puVar1;
  }
  return puRam00000001136c1b10;
}



/* Entry: 105a6800c; end: 105a68087; +[SCSpectaclesOtaPbListVersionSetRequest descriptor] */

undefined * FUN_105a6800c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1b18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a85f10,
                        &PTR____CFConstantStringClassReference_110e19a58,&PTR_DAT_113117718,
                        &PTR_DAT_113117730,1,0x10,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c1b18 = puVar1;
  }
  return puRam00000001136c1b18;
}



/* Entry: 105a68088; end: 105a68103; +[SCSpectaclesOtaPbListOsVersionRequest descriptor] */

undefined * FUN_105a68088(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1b20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a85f60,
                        &PTR____CFConstantStringClassReference_110e19a78,&PTR_DAT_113117718,
                        &PTR_DAT_1131177f0,2,0x18,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c1b20 = puVar1;
  }
  return puRam00000001136c1b20;
}



/* Entry: 105a68104; end: 105a6817f; +[SCSpectaclesOtaPbUpdateVersionSetRequest descriptor] */

undefined * FUN_105a68104(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1b28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a85fb0,
                        &PTR____CFConstantStringClassReference_110e19a98,&PTR_DAT_113117718,
                        &PTR_DAT_113118130,0xc,0x60,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c1b28 = puVar1;
  }
  return puRam00000001136c1b28;
}



/* Entry: 105a68180; end: 105a681fb; +[SCSpectaclesOtaPbGetVersionSetResponse descriptor] */

undefined * FUN_105a68180(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1b30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a86000,
                        &PTR____CFConstantStringClassReference_110e19ab8,&PTR_DAT_113117718,
                        &PTR_DAT_1131182b0,0xd,0x68,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c1b30 = puVar1;
  }
  return puRam00000001136c1b30;
}



/* Entry: 105a681fc; end: 105a68277; +[SCSpectaclesOtaPbListVersionSetResponse descriptor] */

undefined * FUN_105a681fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1b38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a86050,
                        &PTR____CFConstantStringClassReference_110e19ad8,&PTR_DAT_113117718,
                        &PTR_DAT_113117a10,4,0x28,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c1b38 = puVar1;
  }
  return puRam00000001136c1b38;
}



/* Entry: 105a68278; end: 105a682f3; +[SCSpectaclesOtaPbListOsVersionResponse descriptor] */

undefined * FUN_105a68278(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1b40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a860a0,
                        &PTR____CFConstantStringClassReference_110e19af8,&PTR_DAT_113117718,
                        &PTR_DAT_113117950,3,0x20,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c1b40 = puVar1;
  }
  return puRam00000001136c1b40;
}



/* Entry: 105a682f4; end: 105a6836f; +[SCSpectaclesOtaPbPublishVersionSetRequest descriptor] */

undefined * FUN_105a682f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1b48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a860f0,
                        &PTR____CFConstantStringClassReference_110e19b18,&PTR_DAT_113117718,
                        &PTR_DAT_113117830,2,0x10,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c1b48 = puVar1;
  }
  return puRam00000001136c1b48;
}



/* Entry: 105a68370; end: 105a683eb; +[SCSpectaclesOtaPbPromoteOsVersionRequest descriptor] */

undefined * FUN_105a68370(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1b50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a86140,
                        &PTR____CFConstantStringClassReference_110e19b38,&PTR_DAT_113117718,
                        &PTR_DAT_113117bd0,6,0x38,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c1b50 = puVar1;
  }
  return puRam00000001136c1b50;
}



/* Entry: 105a683ec; end: 105a68467; +[SCSpectaclesOtaPbDeleteOsVersionRequest descriptor] */

undefined * FUN_105a683ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1b58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a86190,
                        &PTR____CFConstantStringClassReference_110e19b58,&PTR_DAT_113117718,
                        &PTR_DAT_113117a90,5,0x30,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c1b58 = puVar1;
  }
  return puRam00000001136c1b58;
}



/* Entry: 105a68468; end: 105a684e3; +[SCSpectaclesOtaPbSetLatestOsVersionRequest descriptor] */

undefined * FUN_105a68468(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1b60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a861e0,
                        &PTR____CFConstantStringClassReference_110e19b78,&PTR_DAT_113117718,
                        &PTR_DAT_113117b30,5,0x30,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c1b60 = puVar1;
  }
  return puRam00000001136c1b60;
}



/* Entry: 105a684e4; end: 105a6855f; +[SCSpectaclesOtaPbSetInstalledVersionUpdateRequirementRequest descriptor] */

undefined * FUN_105a684e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1b68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a86230,
                        &PTR____CFConstantStringClassReference_110e19b98,&PTR_DAT_113117718,
                        &PTR_DAT_113117c90,6,0x30,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c1b68 = puVar1;
  }
  return puRam00000001136c1b68;
}



/* Entry: 105a68560; end: 105a685db; +[SCSpectaclesOtaPbGetOsTargetFilesPackagesRequest descriptor] */

undefined * FUN_105a68560(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1b70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a86280,
                        &PTR____CFConstantStringClassReference_110e19bb8,&PTR_DAT_113117718,
                        &PTR_DAT_113117870,2,0x18,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c1b70 = puVar1;
  }
  return puRam00000001136c1b70;
}



/* Entry: 105a685dc; end: 105a68657; +[SCSpectaclesOtaPbGetOsTargetFilesPackagesResponse descriptor] */

undefined * FUN_105a685dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1b78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a862d0,
                        &PTR____CFConstantStringClassReference_110e19bd8,&PTR_DAT_113117718,
                        &PTR_DAT_1131178b0,2,0x18,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c1b78 = puVar1;
  }
  return puRam00000001136c1b78;
}



/* Entry: 105a68658; end: 105a686d3; +[SCSpectaclesOtaPbPublishDifferentialBuildRequest descriptor] */

undefined * FUN_105a68658(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1b80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a86320,
                        &PTR____CFConstantStringClassReference_110e19bf8,&PTR_DAT_113117718,
                        &PTR_DAT_113117d50,6,0x38,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c1b80 = puVar1;
  }
  return puRam00000001136c1b80;
}



/* Entry: 105a686d4; end: 105a6874f; +[SCSpectaclesOtaPbListDifferentialBuildRequest descriptor] */

undefined * FUN_105a686d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1b88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a86370,
                        &PTR____CFConstantStringClassReference_110e19c18,&PTR_DAT_113117718,
                        &PTR_DAT_1131179b0,3,0x20,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c1b88 = puVar1;
  }
  return puRam00000001136c1b88;
}



/* Entry: 105a68750; end: 105a687cb; +[SCSpectaclesOtaPbListDifferentialBuildResponse descriptor] */

undefined * FUN_105a68750(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1b90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a863c0,
                        &PTR____CFConstantStringClassReference_110e19c38,&PTR_DAT_113117718,
                        &PTR_DAT_113117750,1,0x10,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c1b90 = puVar1;
  }
  return puRam00000001136c1b90;
}



/* Entry: 105a687cc; end: 105a688a3; -[SCSpectaclesCheeriosDeviceInfoImpl initWithSpectaclesDevice:] */

undefined1 * FUN_105a687cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126eb7c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c15e740();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar4;
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010bfb0d20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar4);
    uVar2 = param_3;
    func_0x00010bfd38e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a688a4; end: 105a688ab; -[SCSpectaclesCheeriosDeviceInfoImpl deviceId] */

undefined8 FUN_105a688a4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105a688ac; end: 105a688b3; -[SCSpectaclesCheeriosDeviceInfoImpl setDeviceId:] */

void FUN_105a688ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105a688b4; end: 105a688bb; -[SCSpectaclesCheeriosDeviceInfoImpl firmwareVersion] */

undefined8 FUN_105a688b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105a688bc; end: 105a688eb; -[SCSpectaclesCheeriosDeviceInfoImpl setFirmwareVersion:] */

void FUN_105a688bc(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105a688ec; end: 105a688f3; -[SCSpectaclesCheeriosDeviceInfoImpl hardwareVersion] */

undefined8 FUN_105a688ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105a688f4; end: 105a68923; -[SCSpectaclesCheeriosDeviceInfoImpl setHardwareVersion:] */

void FUN_105a688f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a68924; end: 105a6895f; -[SCSpectaclesCheeriosDeviceInfoImpl .cxx_destruct] */

void FUN_105a68924(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a68960; end: 105a68a1f; -[SCSpectaclesCheeriosFirmwareUpdateSessionInfoImpl initWithSessionId:targetFirmware:updateDuration:isManualUpdate:] */

undefined1 *
FUN_105a68960(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126eb7c8;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 105a68a20; end: 105a68a27; -[SCSpectaclesCheeriosFirmwareUpdateSessionInfoImpl isManualUpdate] */

undefined1 FUN_105a68a20(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105a68a28; end: 105a68a2f; -[SCSpectaclesCheeriosFirmwareUpdateSessionInfoImpl setIsManualUpdate:] */

void FUN_105a68a28(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 105a68a30; end: 105a68a37; -[SCSpectaclesCheeriosFirmwareUpdateSessionInfoImpl sessionId] */

undefined8 FUN_105a68a30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105a68a38; end: 105a68a3f; -[SCSpectaclesCheeriosFirmwareUpdateSessionInfoImpl setSessionId:] */

void FUN_105a68a38(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105a68a40; end: 105a68a47; -[SCSpectaclesCheeriosFirmwareUpdateSessionInfoImpl updateDurationInSec] */

undefined8 FUN_105a68a40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105a68a48; end: 105a68a4f; -[SCSpectaclesCheeriosFirmwareUpdateSessionInfoImpl setUpdateDurationInSec:] */

void FUN_105a68a48(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 105a68a50; end: 105a68a57; -[SCSpectaclesCheeriosFirmwareUpdateSessionInfoImpl targetFirmwareVersion] */

undefined8 FUN_105a68a50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105a68a58; end: 105a68a87; -[SCSpectaclesCheeriosFirmwareUpdateSessionInfoImpl setTargetFirmwareVersion:] */

void FUN_105a68a58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a68a88; end: 105a68ab7; -[SCSpectaclesCheeriosFirmwareUpdateSessionInfoImpl .cxx_destruct] */

void FUN_105a68a88(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105a68ab8; end: 105a68b2b; -[SCSpectaclesCheeriosOTALogger initWithBlizzardLogger:] */

undefined1 * FUN_105a68ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eb7d0;
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



/* Entry: 105a68b2c; end: 105a68c2f; -[SCSpectaclesCheeriosOTALogger _logCheeriosUpdateSessionEvent:deviceInfo:sessionInfo:] */

void FUN_105a68b2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_5;
  func_0x00010c077560(param_5);
  func_0x00010c21c8e0(param_3,param_2,(uint)uVar1 ^ 1);
  func_0x00010c285560(param_5);
  func_0x00010c192ec0(param_3);
  uVar1 = param_5;
  func_0x00010c15ffa0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21c780(param_3,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010c269f00(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar2 = uVar1;
  func_0x00010bf6e340(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212360(param_3,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010be58e00(param_1,param_2,param_3,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a68c30; end: 105a68d43; -[SCSpectaclesCheeriosOTALogger _logSpectaclesTrackedEvent:deviceInfo:] */

void FUN_105a68c30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010bf70720(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c9a0(param_3,param_2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bfd38e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a5640(param_3,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bfb0d20(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar2 = uVar1;
  func_0x00010bf6e340(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19cd80(param_3,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c19f260(param_3,param_2,6);
  func_0x00010c0b2e60(*(undefined8 *)(param_1 + 8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a68d44; end: 105a68da3; -[SCSpectaclesCheeriosOTALogger firmwareUpdateCheckWithDeviceInfo:] */

void FUN_105a68d44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1b30;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010be58e00(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a68da4; end: 105a68e03; -[SCSpectaclesCheeriosOTALogger firmwareUpdateTapWithDeviceInfo:] */

void FUN_105a68da4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1b38;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010be58e00(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a68e04; end: 105a68e63; -[SCSpectaclesCheeriosOTALogger firmwareUpdateEnterWithDeviceInfo:] */

void FUN_105a68e04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1b40;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010be58e00(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a68e64; end: 105a68ec3; -[SCSpectaclesCheeriosOTALogger firmwareUpdateShowWithDeviceInfo:] */

void FUN_105a68e64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1b48;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010be58e00(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a68ec4; end: 105a68f5f; -[SCSpectaclesCheeriosOTALogger firmwareUpdateFailure:deviceInfo:sessionInfo:] */

void FUN_105a68ec4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1b50;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c19a060();
  _objc_release(param_3);
  func_0x00010be51a80(param_1,param_2,puVar1,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a68f60; end: 105a68fd7; -[SCSpectaclesCheeriosOTALogger firmwareUpdateStartWithDeviceInfo:sessionInfo:] */

void FUN_105a68f60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1b58;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010be51a80(param_1,param_2,puVar1,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a68fd8; end: 105a6904f; -[SCSpectaclesCheeriosOTALogger firmwareUpdateSuccessWithDeviceInfo:sessionInfo:] */

void FUN_105a68fd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1b60;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010be51a80(param_1,param_2,puVar1,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a69050; end: 105a690c7; -[SCSpectaclesCheeriosOTALogger firmwareUpdateDownloadStartWithDeviceInfo:sessionInfo:] */

void FUN_105a69050(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1b68;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010be51a80(param_1,param_2,puVar1,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


