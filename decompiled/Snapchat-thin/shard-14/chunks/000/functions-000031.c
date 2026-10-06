/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10af386e0; end: 10af386e7; -[SCGtqNetworkRequest shouldPersist] */

undefined1 FUN_10af386e0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 10af386e8; end: 10af386ef; -[SCGtqNetworkRequest setShouldPersist:] */

void FUN_10af386e8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10af386f0; end: 10af386f7; -[SCGtqNetworkRequest retryCount] */

undefined8 FUN_10af386f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af386f8; end: 10af386ff; -[SCGtqNetworkRequest setRetryCount:] */

void FUN_10af386f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10af38700; end: 10af38707; -[SCGtqNetworkRequest key] */

undefined8 FUN_10af38700(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af38708; end: 10af3870f; -[SCGtqNetworkRequest setKey:] */

void FUN_10af38708(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10af38710; end: 10af38717; -[SCGtqNetworkRequest numberOfAttempts] */

undefined8 FUN_10af38710(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10af38718; end: 10af3871f; -[SCGtqNetworkRequest setNumberOfAttempts:] */

void FUN_10af38718(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10af38720; end: 10af38727; -[SCGtqNetworkRequest pathComponents] */

undefined8 FUN_10af38720(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10af38728; end: 10af38757; -[SCGtqNetworkRequest setPathComponents:] */

void FUN_10af38728(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af38758; end: 10af3875f; -[SCGtqNetworkRequest parameters] */

undefined8 FUN_10af38758(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10af38760; end: 10af3878f; -[SCGtqNetworkRequest setParameters:] */

void FUN_10af38760(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af38790; end: 10af38797; -[SCGtqNetworkRequest additionalHTTPHeaders] */

undefined8 FUN_10af38790(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10af38798; end: 10af387c7; -[SCGtqNetworkRequest setAdditionalHTTPHeaders:] */

void FUN_10af38798(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af387c8; end: 10af387cf; -[SCGtqNetworkRequest contexts] */

undefined8 FUN_10af387c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10af387d0; end: 10af387ff; -[SCGtqNetworkRequest setContexts:] */

void FUN_10af387d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af38800; end: 10af38807; -[SCGtqNetworkRequest path] */

undefined8 FUN_10af38800(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10af38808; end: 10af38837; -[SCGtqNetworkRequest setPath:] */

void FUN_10af38808(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af38838; end: 10af3883f; -[SCGtqNetworkRequest host] */

undefined8 FUN_10af38838(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10af38840; end: 10af3886f; -[SCGtqNetworkRequest setHost:] */

void FUN_10af38840(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af38870; end: 10af38877; -[SCGtqNetworkRequest requestParser] */

undefined8 FUN_10af38870(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10af38878; end: 10af388a7; -[SCGtqNetworkRequest setRequestParser:] */

void FUN_10af38878(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10af388a8; end: 10af388af; -[SCGtqNetworkRequest requestType] */

undefined8 FUN_10af388a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10af388b0; end: 10af388b7; -[SCGtqNetworkRequest setRequestType:] */

void FUN_10af388b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 10af388b8; end: 10af388bf; -[SCGtqNetworkRequest maxAttempts] */

undefined8 FUN_10af388b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10af388c0; end: 10af388c7; -[SCGtqNetworkRequest setMaxAttempts:] */

void FUN_10af388c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x70) = param_3;
  return;
}



/* Entry: 10af388c8; end: 10af388cf; -[SCGtqNetworkRequest method] */

undefined8 FUN_10af388c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10af388d0; end: 10af388d7; -[SCGtqNetworkRequest setMethod:] */

void FUN_10af388d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x78) = param_3;
  return;
}



/* Entry: 10af388d8; end: 10af388df; -[SCGtqNetworkRequest priority] */

undefined8 FUN_10af388d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10af388e0; end: 10af388e7; -[SCGtqNetworkRequest setPriority:] */

void FUN_10af388e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x80) = param_3;
  return;
}



/* Entry: 10af388e8; end: 10af388ef; -[SCGtqNetworkRequest connectivity] */

undefined8 FUN_10af388e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10af388f0; end: 10af388f7; -[SCGtqNetworkRequest setConnectivity:] */

void FUN_10af388f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x88) = param_3;
  return;
}



/* Entry: 10af388f8; end: 10af388ff; -[SCGtqNetworkRequest useGzipRequestCompression] */

undefined1 FUN_10af388f8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 10af38900; end: 10af38907; -[SCGtqNetworkRequest setUseGzipRequestCompression:] */

void FUN_10af38900(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x11) = param_3;
  return;
}



/* Entry: 10af38908; end: 10af3890f; -[SCGtqNetworkRequest tokenAccessType] */

undefined8 FUN_10af38908(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10af38910; end: 10af38917; -[SCGtqNetworkRequest setTokenAccessType:] */

void FUN_10af38910(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x90) = param_3;
  return;
}



/* Entry: 10af38918; end: 10af3899b; -[SCGtqNetworkRequest .cxx_destruct] */

void FUN_10af38918(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af3899c; end: 10af389a3; +[SCRequest createRequestFromGtqNetworkRequest:] */

void FUN_10af3899c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2721d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_toSCRequest_11267a298);
  return;
}



/* Entry: 10af389a4; end: 10af38adb; -[SCGtqRetriableRequestPreparer prepareRequest:callback:] */

void FUN_10af389a4(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126dea90;
  _objc_opt_class(PTR_PTR_1126dea90);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((uVar2 & 1) == 0) {
    (**(code **)(param_4 + 0x10))(param_4,param_3,1);
  }
  else {
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x11;
    func_0x000107c312b8(0x11,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010bfaa3c0(param_3);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_release(param_3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10af38adc; end: 10af38aef;  */

void FUN_10af38adc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010af38aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),1);
  return;
}



/* Entry: 10af38af0; end: 10af38afb; -[SCGtqRetriableRequestPreparer .cxx_destruct] */

void FUN_10af38af0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af38afc; end: 10af38b6b;  */

void FUN_10af38afc(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  
  if (param_1 == (undefined **)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f38f98;
  }
  else {
    func_0x00010c25d7a0(param_1,param_2,&PTR____CFConstantStringClassReference_110f38fb8,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = param_1;
    func_0x00010c08fa60();
    if (ppuVar1 == (undefined **)0x0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f38f98;
    }
    else {
      _objc_retain(param_1);
      ppuVar1 = param_1;
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10af38b6c; end: 10af38b7f;  */

void FUN_10af38b6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25da90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSString_1126ae4d0,PTR_s_stringWithUTF8String__1126750c8,
             &UNK_10f6e60b9);
  return;
}



/* Entry: 10af38b80; end: 10af38bfb;  */

undefined * FUN_10af38b80(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137efea8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f38fd8,
                        &UNK_10e539f68,&UNK_10e539f7c,3,FUN_10af38bfc,0);
    do {
      if (puRam00000001137efea8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137efea8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137efea8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137efea8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137efea8;
}



/* Entry: 10af38bfc; end: 10af38c07;  */

bool FUN_10af38bfc(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10af38c08; end: 10af38c6f; +[SCAdsAppStorePagePrefetchConfig descriptor] */

void FUN_10af38c08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efeb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c1dc60,
                        &PTR____CFConstantStringClassReference_110f38ff8,
                        &PTR_s_snapchat_ads_abconfig_113331fb0,&PTR_DAT_113331fc8,4,8,0x1c);
    puRam00000001137efeb0 = puVar1;
  }
  return;
}



/* Entry: 10af38c70; end: 10af38cd7; +[SCAdsAppStorePreloadConfig descriptor] */

void FUN_10af38c70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efeb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c1dd00,
                        &PTR____CFConstantStringClassReference_110f39018,
                        &PTR_s_snapchat_ads_abconfig_113332048,&PTR_DAT_113332060,3,0x10,0x1c);
    puRam00000001137efeb8 = puVar1;
  }
  return;
}



/* Entry: 10af38cd8; end: 10af38d3f; +[SCULUserExperiments descriptor] */

void FUN_10af38cd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efec0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c1dda0,
                        &PTR____CFConstantStringClassReference_110f39038,&PTR_DAT_1133320c0,
                        &PTR_DAT_1133320d8,1,0x10,0x1c);
    puRam00000001137efec0 = puVar1;
  }
  return;
}



/* Entry: 10af38d40; end: 10af38da7; +[SCULExperiment descriptor] */

void FUN_10af38d40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137efec8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c1de40,
                        &PTR____CFConstantStringClassReference_110f39058,&PTR_DAT_1133320f8,
                        &PTR_DAT_113332110,2,0x18,0x1c);
    puRam00000001137efec8 = puVar1;
  }
  return;
}



/* Entry: 10af38da8; end: 10af38e1b; -[SCBillboardStringsServices initWithStringFetcher:] */

undefined1 * FUN_10af38da8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112702908;
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



/* Entry: 10af38e1c; end: 10af38e23; -[SCBillboardStringsServices stringFetcher] */

undefined8 FUN_10af38e1c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af38e24; end: 10af38e2f; -[SCBillboardStringsServices .cxx_destruct] */

void FUN_10af38e24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af38e30; end: 10af38ea3; -[SCSearchRemoteServices initWithSearchserviceClientFactory:] */

undefined1 * FUN_10af38e30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112702910;
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



/* Entry: 10af38ea4; end: 10af38eab; -[SCSearchRemoteServices searchServiceClientFactory] */

undefined8 FUN_10af38ea4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af38eac; end: 10af38eb7; -[SCSearchRemoteServices .cxx_destruct] */

void FUN_10af38eac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af38eb8; end: 10af38ebf; -[SCSearchServices indexFactory] */

undefined8 FUN_10af38eb8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af38ec0; end: 10af38ecb; -[SCSearchServices .cxx_destruct] */

void FUN_10af38ec0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af38ecc; end: 10af38f3f; -[SCSearchUIServices initWithSearchUIUserSearchingFactory:] */

undefined1 * FUN_10af38ecc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112702920;
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



/* Entry: 10af38f40; end: 10af38f47; -[SCSearchUIServices searchUIUserSearchingFactory] */

undefined8 FUN_10af38f40(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af38f48; end: 10af38f4f; -[SCSearchUIServices userSearchingDependencies] */

undefined8 FUN_10af38f48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af38f50; end: 10af38f7f; -[SCSearchUIServices .cxx_destruct] */

void FUN_10af38f50(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af38f80; end: 10af39027; -[SCUniversalSearchServices initWithSearchClientBuilder:searchDependencies:] */

undefined1 *
FUN_10af38f80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112702928;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af39028; end: 10af3902f; -[SCUniversalSearchServices buildSearchClient] */

undefined8 FUN_10af39028(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af39030; end: 10af39037; -[SCUniversalSearchServices searchDependencies] */

undefined8 FUN_10af39030(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af39038; end: 10af39067; -[SCUniversalSearchServices .cxx_destruct] */

void FUN_10af39038(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af39068; end: 10af39107; -[SCSearchServicesResultDoc initWithDocId:score:corpus:docValue:] */

undefined1 *
FUN_10af39068(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112702930;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 10af39108; end: 10af3912b; -[SCSearchServicesResultDoc copyWithZone:] */

undefined8 FUN_10af39108(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af3912c; end: 10af391bb; -[SCSearchServicesResultDoc hash] */

long * FUN_10af3912c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  double dVar8;
  double dVar9;
  long lStack_38;
  ulong uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  uVar6 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  lStack_38 = -lVar1;
  if (-1 < lVar1) {
    lStack_38 = lVar1;
  }
  uStack_30 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_28 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfde980();
  plVar4 = &lStack_38;
  uStack_20 = uVar3;
  func_0x000107c3191c(plVar4,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar4 == param_3) {
LAB_10af39278:
    plVar7 = (long *)0x1;
  }
  else {
    plVar7 = (long *)0x0;
    if ((plVar4 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_10af39284;
    plVar7 = plVar4;
    _objc_opt_class(plVar4);
    plVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar7);
    if ((((ulong)plVar5 & 1) != 0) && ((plVar4[1] == param_3[1] && (plVar4[3] == param_3[3])))) {
      dVar9 = ABS((double)plVar4[2] - (double)param_3[2]);
      dVar8 = ABS((double)plVar4[2] + (double)param_3[2]) * 2.220446049250313e-16;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar9) && (bVar2 = false, !NAN(dVar9) && !NAN(dVar8))) {
        bVar2 = dVar9 < dVar8;
      }
      if (bVar2) {
        plVar7 = (long *)plVar4[4];
        if (plVar7 != (long *)param_3[4]) {
          func_0x00010c071ae0();
          goto LAB_10af39284;
        }
        goto LAB_10af39278;
      }
    }
    plVar7 = (long *)0x0;
  }
LAB_10af39284:
  _objc_release(param_3);
  return plVar7;
}



/* Entry: 10af391bc; end: 10af3929f; -[SCSearchServicesResultDoc isEqual:] */

long FUN_10af391bc(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af39278:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af39284;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar5 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 0x20);
        if (lVar4 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10af39284;
        }
        goto LAB_10af39278;
      }
    }
    lVar4 = 0;
  }
LAB_10af39284:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10af392a0; end: 10af392a7; -[SCSearchServicesResultDoc docId] */

undefined8 FUN_10af392a0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af392a8; end: 10af392af; -[SCSearchServicesResultDoc score] */

undefined8 FUN_10af392a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af392b0; end: 10af392b7; -[SCSearchServicesResultDoc corpus] */

undefined8 FUN_10af392b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af392b8; end: 10af392bf; -[SCSearchServicesResultDoc docValue] */

undefined8 FUN_10af392b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af392c0; end: 10af392cb; -[SCSearchServicesResultDoc .cxx_destruct] */

void FUN_10af392c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 10af392cc; end: 10af393b7; -[SCSearchservicesRemoteOptions initWithCoder:] */

undefined1 * FUN_10af392cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112702938;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66ee0();
    *(int *)((long)puVar1 + 8) = (int)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af393b8; end: 10af3949f; -[SCSearchservicesRemoteOptions initWithFlavorContext:baseURL:routeTag:sessionID:] */

undefined1 *
FUN_10af393b8(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_112702938;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
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



/* Entry: 10af394a0; end: 10af394c3; -[SCSearchservicesRemoteOptions copyWithZone:] */

undefined8 FUN_10af394a0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af394c4; end: 10af3954b; -[SCSearchservicesRemoteOptions encodeWithCoder:] */

void FUN_10af394c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92f80(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f39078);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f39098);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f390b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110ebfff8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af3954c; end: 10af395d3; -[SCSearchservicesRemoteOptions hash] */

long * FUN_10af3954c(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_48 = (long)*(int *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  plVar3 = &lStack_48;
  uStack_30 = uVar1;
  func_0x000107c3191c(plVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 == param_3) {
LAB_10af3967c:
    plVar6 = (long *)0x1;
  }
  else {
    plVar6 = (long *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_10af39688;
    plVar6 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar6);
    if ((((ulong)plVar4 & 1) != 0) && ((int)plVar3[1] == (int)param_3[1])) {
      lVar5 = plVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = plVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          plVar6 = (long *)plVar3[4];
          if (plVar6 != (long *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_10af39688;
          }
          goto LAB_10af3967c;
        }
      }
    }
    plVar6 = (long *)0x0;
  }
LAB_10af39688:
  _objc_release(param_3);
  return plVar6;
}



/* Entry: 10af395d4; end: 10af396a3; -[SCSearchservicesRemoteOptions isEqual:] */

long FUN_10af395d4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af3967c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af39688;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(int *)(param_1 + 8) == *(int *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10af39688;
          }
          goto LAB_10af3967c;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10af39688:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af396a4; end: 10af396ab; -[SCSearchservicesRemoteOptions flavorContext] */

undefined4 FUN_10af396a4(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10af396ac; end: 10af396b3; -[SCSearchservicesRemoteOptions baseURL] */

undefined8 FUN_10af396ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10af396b4; end: 10af396bb; -[SCSearchservicesRemoteOptions routeTag] */

undefined8 FUN_10af396b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10af396bc; end: 10af396c3; -[SCSearchservicesRemoteOptions sessionID] */

undefined8 FUN_10af396bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10af396c4; end: 10af396ff; -[SCSearchservicesRemoteOptions .cxx_destruct] */

void FUN_10af396c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10af39700; end: 10af39777; -[SCSearchservicesClientUserResult initWithUsers:] */

undefined1 * FUN_10af39700(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112702940;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10af39778; end: 10af3979b; -[SCSearchservicesClientUserResult copyWithZone:] */

undefined8 FUN_10af39778(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af3979c; end: 10af397a3; -[SCSearchservicesClientUserResult hash] */

void FUN_10af3979c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10af397a4; end: 10af39833; -[SCSearchservicesClientUserResult isEqual:] */

long FUN_10af397a4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af39818;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10af39818;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10af39818;
    }
  }
  lVar3 = 1;
LAB_10af39818:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af39834; end: 10af3983b; -[SCSearchservicesClientUserResult users] */

undefined8 FUN_10af39834(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10af3983c; end: 10af3984b; -[SCSearchservicesClientUserResult .cxx_destruct] */

void FUN_10af3983c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af3984c; end: 10af3985f;  */

void FUN_10af3984c(void)

{
  FUN_10af39940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10af39860; end: 10af3986b;  */

long FUN_10af39860(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110c97e80;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10af3986c; end: 10af398ab;  */

void FUN_10af3986c(void)

{
  func_0x00010af39950();
  return;
}



/* Entry: 10af398ac; end: 10af3993f;  */

long FUN_10af398ac(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110c97e80;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10af39940; end: 10af3995b;  */

void FUN_10af39940(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c97ec0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10af3995c; end: 10af399db; -[SCNComplianceContextHelper initWithCpp:] */

undefined1 * FUN_10af3995c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar4 = &uStack_40;
  puStack_38 = PTR_PTR_112702948;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar4 != (undefined8 *)0x0) {
    uVar6 = param_3[1];
    uVar5 = *param_3;
    if (param_3[1] != 0) {
      plVar1 = (long *)(param_3[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_28 = *(undefined8 *)((long)puVar4 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar4 + 0x18);
    *(undefined8 *)((long)puVar4 + 0x20) = uVar6;
    *(undefined8 *)((long)puVar4 + 0x18) = uVar5;
    func_0x00010af39b10(&uStack_30);
  }
  return (undefined1 *)puVar4;
}



/* Entry: 10af399dc; end: 10af39a67; +[SCNComplianceContextHelper contextToString:] */

void FUN_10af399dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x00010af39b48(auStack_38,param_3);
  func_0x000107c27f28(auStack_38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af39b3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af39a68; end: 10af39ac3; -[SCNComplianceContextHelper .cxx_destruct] */

void FUN_10af39a68(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110c97f50;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x00010af39b10((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10af39ac4; end: 10af39b3b; -[SCNComplianceContextHelper .cxx_construct] */

undefined8 * FUN_10af39ac4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_1;
  func_0x000107c31704();
  lVar5 = puVar4[1];
  uVar6 = *puVar4;
  param_1[2] = puVar4[1];
  param_1[1] = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}


