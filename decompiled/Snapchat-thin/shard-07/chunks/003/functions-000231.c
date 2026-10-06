/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105417264; end: 10541729f; -[SCUserAdIdProvider .cxx_destruct] */

void FUN_105417264(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054172a0; end: 105417343; -[SCAdCircumstanceEngineAdapterImpl initWithCircumstanceEngine:commonMetricsManager:] */

undefined1 *
FUN_1054172a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e8418;
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



/* Entry: 105417344; end: 1054173bf; -[SCAdCircumstanceEngineAdapterImpl configsTokenWithCompletion:] */

void FUN_105417344(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010c0a1da0(*(undefined8 *)(param_1 + 0x10));
    (**(code **)(param_3 + 0x10))(param_3,0);
  }
  else {
    func_0x00010bf46540(lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1054173c0; end: 1054173ef; -[SCAdCircumstanceEngineAdapterImpl .cxx_destruct] */

void FUN_1054173c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054173f0; end: 1054174ef; -[SCAdCompositeAdSource initWithPrimaryAdSource:shadowAdSource:configAdapter:shadowAdResponseDataStore:] */

undefined1 *
FUN_1054173f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_1126e8420;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = 0;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1054174f0; end: 10541758b; -[SCAdCompositeAdSource initializeWithMetadata:completion:] */

void FUN_1054174f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf91a00();
  *(char *)(param_1 + 8) = (char)uVar1;
  _objc_release(uVar2);
  func_0x00010c064c00(*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4);
  _objc_release(param_4);
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x00010c064c00(*(undefined8 *)(param_1 + 0x18),param_2,param_3,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10541758c; end: 1054176db; -[SCAdCompositeAdSource request:willMakeRequest:successBlock:failureBlock:] */

void FUN_10541758c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  byte bVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar8;
  func_0x00010bf91a00();
  *(char *)(param_1 + 8) = (char)uVar3;
  _objc_release(uVar8);
  uVar4 = *(ulong *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf863a0();
  if ((uVar5 & 1) == 0) {
    _objc_release(uVar4);
    bVar2 = false;
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = param_5;
    uVar8 = param_6;
  }
  else {
    bVar1 = *(byte *)(param_1 + 8);
    _objc_release(uVar4);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    bVar2 = (bVar1 & 1) != 0;
    uVar3 = 0;
    if (!bVar2) {
      uVar3 = param_5;
    }
    uVar8 = 0;
    if (!bVar2) {
      uVar8 = param_6;
    }
  }
  func_0x00010c1346a0(uVar6,param_2,param_3,param_4,uVar3,uVar8);
  _objc_release(param_4);
  if (*(char *)(param_1 + 8) == '\x01') {
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = param_3;
    func_0x00010bf51e00(param_3);
    uVar8 = param_6;
    uVar3 = param_5;
    if (!bVar2) {
      uVar3 = 0;
      uVar8 = 0;
    }
    func_0x00010c1346a0(uVar7,param_2,uVar6,0,uVar3,uVar8);
    _objc_release(uVar6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1054176dc; end: 1054176e3; -[SCAdCompositeAdSource protoAdRequestWithMetadata:completion:] */

void FUN_1054176dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c118ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_protoAdRequestWithMetadata_compl_112623e18);
  return;
}



/* Entry: 1054176e4; end: 10541782b; -[SCAdCompositeAdSource track:] */

void FUN_1054176e4(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf91a00();
  *(char *)(param_1 + 8) = (char)uVar3;
  _objc_release(uVar1);
  func_0x00010c277920(*(undefined8 *)(param_1 + 0x10));
  if ((*(char *)(param_1 + 8) == '\x01') &&
     (uVar2 = param_3, func_0x00010bf807e0(), (uVar2 & 1) == 0)) {
    _objc_initWeak(auStack_38,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = param_3;
    func_0x00010bef2c60(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bef4b00(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10541782c; end: 1054178e7;  */

void FUN_10541782c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c2a7c40(uVar1,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b8da0;
    func_0x00010c229f00(PTR_PTR_1126b8da0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c2a7e00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(uVar1);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    lVar4 = param_1;
    func_0x00010c229ee0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c277920();
    _objc_release(lVar4);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 1054178e8; end: 105417937; -[SCAdCompositeAdSource adExpired:] */

void FUN_1054178e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bef2940(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x00010bef2940(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105417938; end: 10541795f; -[SCAdCompositeAdSource tearDown] */

/* WARNING: Possible PIC construction at 0x00010541794c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105417950) */

void FUN_105417938(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26ab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_tearDown_112678508);
  return;
}



/* Entry: 105417960; end: 105417967; -[SCAdCompositeAdSource primary] */

undefined8 FUN_105417960(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105417968; end: 105417997; -[SCAdCompositeAdSource setPrimary:] */

void FUN_105417968(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105417998; end: 10541799f; -[SCAdCompositeAdSource shadow] */

undefined8 FUN_105417998(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1054179a0; end: 1054179cf; -[SCAdCompositeAdSource setShadow:] */

void FUN_1054179a0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1054179d0; end: 1054179d7; -[SCAdCompositeAdSource isShadowEnabled] */

undefined1 FUN_1054179d0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1054179d8; end: 1054179df; -[SCAdCompositeAdSource setIsShadowEnabled:] */

void FUN_1054179d8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 1054179e0; end: 1054179e7; -[SCAdCompositeAdSource configAdapter] */

undefined8 FUN_1054179e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1054179e8; end: 105417a17; -[SCAdCompositeAdSource setConfigAdapter:] */

void FUN_1054179e8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105417a18; end: 105417a1f; -[SCAdCompositeAdSource shadowAdResponseDataStore] */

undefined8 FUN_105417a18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105417a20; end: 105417a4f; -[SCAdCompositeAdSource setShadowAdResponseDataStore:] */

void FUN_105417a20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105417a50; end: 105417a97; -[SCAdCompositeAdSource .cxx_destruct] */

void FUN_105417a50(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105417a98; end: 105417e7f; -[SCAdDataService initWithAdSource:persistedDataAdapter:deviceInfoProvider:applicationInfo:userAgent:networkManager:snapTokenManager:adsPreferencesProviderImpl:primayServeResponseDataStore:shadowServeResponseDataStore:pixelTrackingCookieManager:requestInfoProvider:primaryNetworkManager:shadowNetworkManager:appInstalledInfoProvider:adOperationalLoggingServices:adConfigProviderV2:adResponseProvider:] */

undefined8 *
FUN_105417a98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  puStack_70 = PTR_PTR_1126e8428;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[6];
    puVar1[6] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[9];
    puVar1[9] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[10];
    puVar1[10] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[3];
    puVar1[3] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_20;
    _objc_release(uVar2);
  }
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105417e80; end: 105417f4f; -[SCAdDataService cleanupAd:] */

void FUN_105417e80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  func_0x00010bef2940(*(undefined8 *)(param_1 + 0x30),param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf42a60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef2940();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f480();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3a260();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105417f50; end: 105417f57; -[SCAdDataService makeAdRequest:willMakeRequest:successBlock:failureBlock:] */

void FUN_105417f50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1346b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_request_willMakeRequest_successB_11262abc8);
  return;
}



/* Entry: 105417f58; end: 105417f5f; -[SCAdDataService updateAdResponseList:completion:] */

void FUN_105417f58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c283470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_updateAdResponseList_completion__11267e740);
  return;
}



/* Entry: 105417f60; end: 105417f67; -[SCAdDataService serializedRequestWithMetadata:] */

undefined8 FUN_105417f60(void)

{
  return 0;
}



/* Entry: 105417f68; end: 105417f6f; -[SCAdDataService protoAdRequestWithMetadata:completion:] */

void FUN_105417f68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c118ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_protoAdRequestWithMetadata_compl_112623e18);
  return;
}



/* Entry: 105417f70; end: 105417f77; -[SCAdDataService initializeWithMetadata:completion:] */

void FUN_105417f70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c064c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_initializeWithMetadata_completio_1125f6d10);
  return;
}



/* Entry: 105417f78; end: 105417f7f; -[SCAdDataService trackSnapAd:] */

void FUN_105417f78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c277930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_track__11267b870);
  return;
}



/* Entry: 105417f80; end: 105417fa7; -[SCAdDataService tearDown] */

void FUN_105417f80(long param_1)

{
  func_0x00010bf3a200(*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010c26ab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_tearDown_112678508);
  return;
}



/* Entry: 105417fa8; end: 1054180af; -[SCAdDataService .cxx_destruct] */

void FUN_105417fa8(long param_1)

{
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
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



/* Entry: 1054180b0; end: 1054187df; -[SCAdSource initWithNetworkManager:pixelTrackingCookieManager:requestInfoProvider:renditionSelector:serveResponseDataStore:deviceTargetingManager:configAdapter:adConfigProviderV2:readinessChecker:grapheneRegistry:appStartExperimentReader:persistedDataAdapter:commonMetricsManager:initMetricsManager:serveMetricsManager:trackMetricsManager:lifecycleTracker:isPrimary:snapTokenManager:adsPreferencesManager:adsCircumstanceEngineAdapter:appInstalledInfoProvider:onDeviceFeatureGatingProvider:multiAdPodMetricsManager:webviewMetricsValidator:appInstallMetricsValidator:appStoreInfoProvider:trackRequestProcessor:spectrumLogger:backgroundTaskProcessor:flipper:trackFunnelEventTracker:promotedStoryMetricsManager:browserPrivacyInfoManager:dpaConfigProvider:notificationPool:webBrowsingConfigProvider:adRenderDataParser:trackSeqNumProvider:valdiRuntimeProvider:adResponseProvider:userBlizzard:impressionBuilder:adCrashLogger:unifiedAdTrackValidator:javascriptFetcher:applicationLifecycleEvents:] */

undefined8 *
FUN_1054180b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined4 param_20,
             undefined4 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined4 param_36,
             undefined4 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined4 param_41,undefined4 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_7);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  puVar2 = PTR_s_init_1125d9248;
  puStack_70 = PTR_PTR_1126e8430;
  uStack_78 = param_1;
  _objc_retain(param_52);
  _objc_retain(param_51);
  _objc_retain(param_50);
  _objc_retain(param_49);
  _objc_retain(param_48);
  _objc_retain(param_47);
  _objc_retain(param_46);
  _objc_retain(param_45);
  _objc_retain(param_44);
  _objc_retain(param_43);
  _objc_retain(param_40);
  _objc_retain(param_39);
  _objc_retain(param_38);
  _objc_retain(param_35);
  _objc_retain(param_34);
  _objc_retain(param_33);
  _objc_retain(param_32);
  _objc_retain(param_31);
  _objc_retain(param_30);
  _objc_retain(param_29);
  _objc_retain(param_28);
  _objc_retain(param_27);
  _objc_retain(param_26);
  _objc_retain(param_25);
  _objc_retain(param_19);
  _objc_retain(param_18);
  _objc_retain(param_17);
  _objc_retain(param_16);
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  puVar1 = &uStack_78;
  _objc_msgSendSuper2(puVar1,puVar2);
  uVar7 = puVar1[5];
  puVar1[5] = param_22;
  _objc_retain();
  _objc_release(uVar7);
  uVar7 = puVar1[6];
  puVar1[6] = param_23;
  _objc_retain(param_23);
  _objc_release(uVar7);
  uVar7 = puVar1[7];
  puVar1[7] = param_24;
  _objc_retain(param_24);
  _objc_release(uVar7);
  uVar7 = puVar1[4];
  puVar1[4] = param_7;
  _objc_retain();
  _objc_release(uVar7);
  puVar2 = PTR_PTR_1126b8da8;
  _objc_alloc_init();
  puVar3 = PTR_PTR_1126b8db0;
  _objc_alloc();
  uVar7 = param_9;
  func_0x00010c269d40(param_9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03f020();
  _objc_release(param_51);
  _objc_release(param_30);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_16);
  _objc_release(param_4);
  uVar4 = puVar1[1];
  puVar1[1] = puVar3;
  _objc_release(uVar4);
  _objc_release(uVar7);
  puVar3 = PTR_PTR_1126b8db8;
  _objc_alloc();
  uVar7 = param_9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03f040();
  _objc_release(param_50);
  _objc_release(param_49);
  _objc_release(param_48);
  _objc_release(param_47);
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_19);
  _objc_release(param_18);
  uVar4 = puVar1[2];
  puVar1[2] = puVar3;
  _objc_release(uVar4);
  _objc_release(uVar7);
  puVar5 = PTR_PTR_1126b8dc0;
  _objc_alloc();
  uVar4 = param_43;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_43);
  puVar3 = PTR_PTR_1126aeea8;
  _objc_opt_new();
  uVar7 = param_38;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_38);
  func_0x00010c03f060();
  _objc_release(param_52);
  _objc_release(param_46);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_27);
  _objc_release(param_17);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_3);
  uVar6 = puVar1[3];
  puVar1[3] = puVar5;
  _objc_release(uVar6);
  _objc_release(param_7);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(uVar7);
  _objc_release(puVar3);
  _objc_release(uVar4);
  _objc_release(puVar2);
  return puVar1;
}



/* Entry: 1054187e0; end: 1054187e7; -[SCAdSource initializeWithMetadata:completion:] */

void FUN_1054187e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c064c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_initializeWithMetadata_completio_1125f6d10);
  return;
}



/* Entry: 1054187e8; end: 1054188cf; -[SCAdSource request:willMakeRequest:successBlock:failureBlock:] */

void FUN_1054187e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bef55e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf51e00();
  uVar2 = param_3;
  func_0x000108494d70(param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar3);
  func_0x00010c0b6ee0(*(undefined8 *)(param_1 + 0x18));
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1054188d0; end: 1054188d7; -[SCAdSource protoAdRequestWithMetadata:completion:] */

void FUN_1054188d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c118ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_protoAdRequestWithMetadata_compl_112623e18);
  return;
}



/* Entry: 1054188d8; end: 1054188df; -[SCAdSource track:] */

void FUN_1054188d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c278890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_trackSnapAd__11267bc48);
  return;
}



/* Entry: 1054188e0; end: 105418923; -[SCAdSource adExpired:] */

void FUN_1054188e0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    func_0x00010c12aa00(*(undefined8 *)(param_1 + 0x20),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105418924; end: 10541892b; -[SCAdSource tearDown] */

void FUN_105418924(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26ab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_tearDown_112678508);
  return;
}



/* Entry: 10541892c; end: 105418997; -[SCAdSource .cxx_destruct] */

void FUN_10541892c(long param_1)

{
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



/* Entry: 105418998; end: 105419017; -[SCAdServer initWithRequestInfoProvider:configAdapter:deviceTargetingManager:networkManager:recentViewReceipts:adRenderDataParser:serveResponseDataStore:persistedDataAdapter:commonMetricsManager:serveMetricsManager:multiAdPodMetricsManager:isPrimary:snapTokenManager:adsInitializer:timeProvider:browserPrivacyInfoManager:dpaConfigProvider:adConfigProviderV2:appStartExperimentReader:notificationPool:adResponseProvider:readinessChecker:grapheneRegistry:applicationLifecycleEvents:] */

undefined8 *
FUN_105418998(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined1 param_14,undefined4 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,long param_27)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  puStack_80 = PTR_PTR_1126e8438;
  puVar2 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = puVar2[0xb];
    puVar2[0xb] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar2[0xc];
    puVar2[0xc] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar2[0xd];
    puVar2[0xd] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar2[0xe];
    puVar2[0xe] = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar2[0xf];
    puVar2[0xf] = param_7;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = puVar2[0x10];
    puVar2[0x10] = param_8;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = puVar2[0x11];
    puVar2[0x11] = param_9;
    _objc_release(uVar3);
    _objc_storeWeak(puVar2 + 0x17,param_10);
    *(undefined1 *)(puVar2 + 10) = param_14;
    _objc_storeWeak(puVar2 + 0x13,param_11);
    _objc_retain(param_12);
    uVar3 = puVar2[0x14];
    puVar2[0x14] = param_12;
    _objc_release(uVar3);
    _objc_storeWeak(puVar2 + 0x15,param_13);
    _objc_storeWeak(puVar2 + 0x12,param_16);
    _objc_storeWeak(puVar2 + 0x16,param_17);
    _objc_retain(param_18);
    uVar3 = puVar2[0x18];
    puVar2[0x18] = param_18;
    _objc_release(uVar3);
    _objc_retain(param_19);
    uVar3 = puVar2[1];
    puVar2[1] = param_19;
    _objc_release(uVar3);
    _objc_retain(param_20);
    uVar3 = puVar2[0x1a];
    puVar2[0x1a] = param_20;
    _objc_release(uVar3);
    _objc_storeWeak(puVar2 + 0x1b,param_21);
    _objc_retain(param_22);
    uVar3 = puVar2[2];
    puVar2[2] = param_22;
    _objc_release(uVar3);
    _objc_retain(param_23);
    uVar3 = puVar2[3];
    puVar2[3] = param_23;
    _objc_release(uVar3);
    _objc_storeWeak(puVar2 + 0x1c,param_24);
    _objc_retain(param_25);
    uVar3 = puVar2[7];
    puVar2[7] = param_25;
    _objc_release(uVar3);
    _objc_retain(param_26);
    uVar3 = puVar2[8];
    puVar2[8] = param_26;
    _objc_release(uVar3);
    *(undefined4 *)(puVar2 + 4) = 0;
    _objc_initWeak(auStack_90,puVar2);
    uVar3 = param_3;
    func_0x00010bf6fee0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126aeec0;
    puVar5 = PTR_PTR_1126ae960;
    puVar4 = PTR_PTR_1126b8dd8;
    func_0x00010bef4d60(PTR_PTR_1126b8dd8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef22a0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126ae970;
    func_0x00010bfe2ec0(PTR_PTR_1126ae970);
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_105419018;
    puStack_a8 = &UNK_11084b7a0;
    _objc_copyWeak(auStack_98,auStack_90);
    _objc_retain(uVar3);
    uStack_a0 = uVar3;
    func_0x00010bf0ca80(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    func_0x00010be9b580(puVar2);
    if (param_27 != 0) {
      puVar5 = PTR_PTR_1126ae810;
      _objc_opt_new();
      uVar9 = puVar2[9];
      puVar2[9] = puVar5;
      _objc_release(uVar9);
      lVar7 = param_27;
      func_0x00010c2a6420(param_27);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_c8,auStack_90);
      lVar8 = lVar7;
      func_0x00010c25ff60(lVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_destroyWeak(auStack_c8);
    }
    _objc_release(uStack_a0);
    _objc_destroyWeak(auStack_98);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 105419018; end: 1054190bf;  */

void FUN_105419018(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((param_2 & 1) != 0) {
    return;
  }
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (lVar2 = *(long *)(param_1 + 0x20), lVar2 != 0)) {
    func_0x00010bfc2ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfc4ea0();
    _objc_retainAutoreleasedReturnValue();
    _os_unfair_lock_lock(lVar1 + 0x20);
    uVar4 = *(undefined8 *)(lVar1 + 0x28);
    *(long *)(lVar1 + 0x28) = lVar2;
    _objc_retain(lVar2);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(lVar1 + 0x30);
    *(undefined8 *)(lVar1 + 0x30) = uVar3;
    _objc_release(uVar4);
    _objc_release(lVar2);
    _os_unfair_lock_unlock(lVar1 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1054190c0; end: 1054190eb;  */

void FUN_1054190c0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9b580();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054190ec; end: 10541928f; -[SCAdServer _schedulePrewarmCachedUserAdIdIfEnabled] */

void FUN_1054190ec(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c292860();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0xd8;
  _objc_loadWeakRetained();
  puVar1 = PTR_PTR_1126aeec0;
  puVar4 = PTR_PTR_1126ae960;
  puVar3 = PTR_PTR_1126b8dd8;
  func_0x00010bf27620(PTR_PTR_1126b8dd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef22a0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae970;
  func_0x00010bfe2ec0(PTR_PTR_1126ae970);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(uVar2);
  func_0x00010bf6f500(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_1);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105419290; end: 1054192ef;  */

void FUN_105419290(long param_1,uint param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((param_2 & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf1f480(uVar1,param_2,&PTR____CFConstantStringClassReference_110ddd238);
    if ((int)uVar1 != 0) {
      lVar2 = param_1 + 0x30;
      _objc_loadWeakRetained();
      if ((lVar2 != 0) && (*(long *)(param_1 + 0x28) != 0)) {
        func_0x00010c1129c0();
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar2);
      return;
    }
  }
  return;
}



/* Entry: 1054192f0; end: 1054196c7; -[SCAdServer makeAdRequest:willMakeRequest:successBlock:failureBlock:] */

void FUN_1054192f0(double param_1,long param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  double dVar9;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar1);
  puVar1 = param_4;
  func_0x00010c06b880();
  puVar8 = param_4;
  if ((int)puVar1 == 0) {
    puVar1 = param_4;
    func_0x00010c06b860();
    if ((int)puVar1 != 0) {
      lVar2 = param_2 + 0xd8;
      _objc_loadWeakRetained();
      lVar3 = lVar2;
      func_0x00010c0ec0c0();
      _objc_release(lVar2);
      if ((int)lVar3 != 0) {
        if (param_7 != 0) {
          puVar1 = PTR_PTR_1126b8de0;
          _objc_alloc(PTR_PTR_1126b8de0);
          func_0x00010c06a360(param_4);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar8;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010bef2c80();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_1054193e4;
        }
        goto LAB_105419590;
      }
    }
    puVar1 = param_4;
    func_0x000108494cac();
    if (((ulong)puVar1 & 1) != 0) {
      lVar2 = param_2 + 0xd8;
      _objc_loadWeakRetained();
      lVar3 = lVar2;
      func_0x00010c0b5060();
      _objc_release(lVar2);
      func_0x00010beec800(*(undefined8 *)(param_2 + 0xc0));
      uVar7 = *(undefined8 *)(param_2 + 0x58);
      dVar9 = param_1;
      func_0x00010c292860(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfc6c00();
      _objc_release(uVar7);
      if (((dVar9 == 0.0) || (*(char *)(param_2 + 0x50) != '\x01')) ||
         ((double)lVar3 / 1000.0 + dVar9 <= param_1)) {
        uVar7 = *(undefined8 *)(param_2 + 0x60);
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = param_4;
        func_0x0001084948a0(param_4,uVar7,*(undefined1 *)(param_2 + 0x50));
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        puVar8 = puVar1;
        func_0x00010c08fa60();
        if (puVar8 == (undefined *)0x0) {
          func_0x00010be90fa0(param_2);
        }
        else {
          puVar8 = param_4;
          func_0x00010bf90d40();
          if ((int)puVar8 == 0) {
            func_0x00010be5c220(param_2);
          }
          else {
            func_0x00010be5bea0(param_2);
          }
        }
        puVar8 = PTR_PTR_1126ae4e8;
        func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf95660();
        _objc_release(puVar8);
        goto LAB_1054195ac;
      }
    }
    func_0x00010be90fa0(param_2);
  }
  else if (param_7 != 0) {
    puVar1 = PTR_PTR_1126b8de0;
    _objc_alloc(PTR_PTR_1126b8de0);
    func_0x00010c06a360(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar8;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bef2c80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
LAB_1054193e4:
    func_0x00010c01b680(puVar1);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar8);
    (**(code **)(param_7 + 0x10))(param_7,puVar1);
    _objc_release(puVar1);
  }
LAB_105419590:
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
LAB_1054195ac:
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054196c8; end: 1054196cb; -[SCAdServer updateAdResponseList:completion:] */

void FUN_1054196c8(void)

{
  return;
}



/* Entry: 1054196cc; end: 1054196cf; -[SCAdServer cleanupAd:] */

void FUN_1054196cc(void)

{
  return;
}



/* Entry: 1054196d0; end: 1054197e3; -[SCAdServer serializedRequestWithMetadata:] */

void FUN_1054196d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = 0;
  _dispatch_semaphore_create();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1054197e4;
  uStack_40 = 0x1054197f4;
  uStack_38 = 0;
  func_0x00010be1a780(param_1);
  _dispatch_semaphore_wait(uVar1,0xffffffffffffffff);
  uVar2 = puStack_58[5];
  func_0x00010bf63640(uVar2);
  _objc_retainAutoreleasedReturnValue();
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1054197e4; end: 1054197fb;  */

void FUN_1054197e4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1054197fc; end: 105419857;  */

void FUN_1054197fc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105419858; end: 1054198eb; -[SCAdServer protoAdRequestWithMetadata:completion:] */

void FUN_105419858(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1054198ec;
  puStack_40 = &UNK_110887110;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010be1a780(param_1,param_2,param_3,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 1054198ec; end: 10541992f;  */

void FUN_1054198ec(long param_1,undefined8 param_2)

{
  func_0x00010bf63640(param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105419930; end: 105419eef; -[SCAdServer _handleNetworkResponse:error:requestMetadata:requestEndpoint:responseStatusCode:requestStartTimestamp:adIdentifierList:requestType:requestSize:adRequest:requestSuccessBlock:requestFailureBlock:] */

/* WARNING: Removing unreachable block (ram,0x000105419b94) */

void FUN_105419930(double param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,long param_8,undefined8 param_9,
                  long param_10,undefined4 param_11,undefined4 param_12,undefined8 param_13,
                  undefined8 param_14,undefined8 param_15)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  dVar10 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar1);
  if ((param_5 == 0) && (param_8 == 200)) {
    func_0x00010beec800(*(undefined8 *)(param_2 + 0xc0));
    dVar10 = dVar10 - param_1;
    uVar2 = *(undefined8 *)(param_2 + 0xa0);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    dVar8 = dVar10;
    func_0x00010c15ede0(dVar10);
    _objc_release(uVar2);
    lVar3 = param_4;
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      uVar2 = *(undefined8 *)(param_2 + 0xa0);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a07e0();
      _objc_release(uVar2);
      lVar3 = param_2 + 0x98;
      _objc_loadWeakRetained(lVar3);
      func_0x00010c116320();
      func_0x00010c08fa60();
      func_0x00010c1364a0(dVar10,lVar3);
      _objc_release(lVar3);
      puVar1 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf95660();
      _objc_release(puVar1);
      func_0x00010be90fa0(param_2);
    }
    else {
      func_0x00010beec800(*(undefined8 *)(param_2 + 0xc0));
      uVar2 = *(undefined8 *)(param_2 + 0xa0);
      dVar9 = dVar8;
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15ee80();
      _objc_release(uVar2);
      if (param_10 == 3) {
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0xc2000000;
        pcStack_90 = FUN_105419ef0;
        puStack_88 = &UNK_110847450;
        _objc_retain(param_6);
        ppuVar4 = &puStack_a0;
        uStack_80 = param_6;
        func_0x0001001071d4();
        _objc_release(uStack_80);
        puVar1 = PTR_PTR_1126b8de8;
        func_0x00010c0f40e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        lVar3 = param_2 + 0x98;
        _objc_loadWeakRetained(lVar3);
        puVar5 = puVar1;
        func_0x00010848d2e4(puVar1,param_6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c116320();
        func_0x00010c08fa60();
        func_0x00010c1364a0(dVar10,lVar3);
        _objc_release(puVar5);
        _objc_release(lVar3);
        puVar5 = puVar1;
        func_0x00010c06a420();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c084fe0(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf529e0();
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        func_0x00010be2e840(param_2);
        _objc_release(puVar1);
        _objc_release(0);
        func_0x0001000e2a84(ppuVar4);
        dVar9 = dVar10;
      }
      uVar2 = *(undefined8 *)(param_2 + 0xa0);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60(param_4);
      func_0x00010beec800(*(undefined8 *)(param_2 + 0xc0));
      func_0x00010c15ee20(dVar9 - dVar8,uVar2);
      _objc_release(uVar2);
      puVar1 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf95660();
      _objc_release(puVar1);
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0xa0);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a07e0();
    _objc_release(uVar2);
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95660();
    _objc_release(puVar1);
    func_0x00010beec800(*(undefined8 *)(param_2 + 0xc0));
    func_0x00010c08fa60(param_4);
    func_0x00010be91540(dVar10 - param_1,param_2);
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105419ef0; end: 105419f6b;  */

void FUN_105419ef0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126b8cd8;
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c116320(uVar1);
  func_0x00010c25d840(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110ddd2b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105419f6c; end: 10541a1ff; -[SCAdServer _generateAdRequest:completion:] */

void FUN_105419f6c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010bf38400();
  puVar2 = PTR_PTR_1126b8d98;
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf18ba0();
      _objc_release(puVar2);
      _objc_initWeak(auStack_58,param_1);
      uVar6 = *(undefined8 *)(param_1 + 0x78);
      _objc_copyWeak(auStack_60,auStack_58);
      _objc_retain(param_3);
      _objc_retain(param_4);
      func_0x00010bfc96c0(uVar6);
      puVar2 = PTR_PTR_1126ae4e8;
      func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf95660();
      _objc_release(puVar2);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
      goto LAB_10541a1b4;
    }
    if (lVar1 == 1) {
      func_0x00010bef48c0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10541a0fc;
    }
  }
  else {
    if (lVar1 == 2) {
      func_0x00010bef4900();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (lVar1 != 3) goto LAB_10541a1a0;
      func_0x00010bef48e0();
      _objc_retainAutoreleasedReturnValue();
    }
LAB_10541a0fc:
    puVar3 = PTR_PTR_1126b8cd8;
    if (puVar2 != (undefined *)0x0) {
      func_0x00010c116320(param_3);
      func_0x00010c25d840(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010c2ac460(puVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bef2aa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfec2a0();
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
  }
LAB_10541a1a0:
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
LAB_10541a1b4:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10541a200; end: 10541a253;  */

void FUN_10541a200(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be1a7a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10541a254; end: 10541a51b; -[SCAdServer _generateAdRequestWithViewReceipt:requestMetadata:completion:] */

void FUN_10541a254(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_70;
  
  puVar2 = PTR_PTR_1126ae4e8;
  if (param_5 != 0) {
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf18ba0();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf18ba0();
    _objc_release(puVar2);
    _os_unfair_lock_lock(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain();
    _objc_retain(uVar1);
    _os_unfair_lock_unlock(param_1 + 0x20);
    lVar3 = param_1;
    func_0x00010bee6560();
    if ((int)lVar3 == 0) {
      uStack_70 = 0;
    }
    else {
      uStack_70 = param_1;
      func_0x00010be86360();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar3 = param_1 + 0xd8;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010bf1f480();
    _objc_release(lVar3);
    uVar9 = *(undefined8 *)(param_1 + 0x58);
    uVar7 = param_4;
    func_0x00010bf8d400(param_4);
    lVar3 = param_1 + 0x98;
    _objc_loadWeakRetained(lVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 8);
    uVar11 = *(undefined8 *)(param_1 + 0xd0);
    lVar6 = param_1 + 0xd8;
    _objc_loadWeakRetained();
    func_0x000108490714(uVar9,param_4,param_3,uVar7,lVar3,uVar5,uVar10,uVar11,lVar6,
                        *(undefined8 *)(param_1 + 0x18),uVar1,uVar8,uStack_70,(char)lVar4);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(lVar6);
    _objc_release(uVar5);
    _objc_release(lVar3);
    uVar7 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    uVar8 = uVar9;
    func_0x00010bef4300(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15ebe0();
    func_0x00010c0ad540(uVar7);
    _objc_release(uVar8);
    _objc_release(uVar7);
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95660();
    _objc_release(puVar2);
    (**(code **)(param_5 + 0x10))(param_5,uVar9);
    _objc_release(param_5);
    puVar2 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95660();
    _objc_release(puVar2);
    _objc_release(uVar9);
    _objc_release(uStack_70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10541a51c; end: 10541a707; -[SCAdServer _makeServeRequest:requestURL:snapToken:willMakeRequest:requestSuccessBlock:requestFailureBlock:] */

void FUN_10541a51c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf17b60();
  _objc_release(puVar1);
  _objc_initWeak(auStack_68,param_1);
  puStack_70 = puVar2;
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_8);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010be1a780(param_1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_8);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10541a708; end: 10541a7ef;  */

void FUN_10541a708(long param_1,long param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  _objc_copyWeak(auStack_38,param_1 + 0x50);
  puVar2 = auStack_38;
  _objc_loadWeakRetained(puVar2);
  if (param_2 == 0) {
    func_0x00010be90fa0(puVar2);
  }
  else {
    func_0x00010be5bfc0(puVar2);
  }
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10541a7f0; end: 10541a85f;  */

void FUN_10541a7f0(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),7);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),7);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x50,param_2 + 0x50);
  return;
}



/* Entry: 10541a860; end: 10541af9f; -[SCAdServer _makeProtoServeRequest:requestMetadata:requestURL:snapToken:willMakeRequest:requestSuccessBlock:requestFailureBlock:] */

void FUN_10541a860(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8,undefined8 param_9
                  ,undefined8 param_10)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined1 auStack_138 [8];
  undefined **ppuStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [8];
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_2 + 0x60);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2 + 0xb8;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bfc1fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010848d1d0(uVar3,lVar5,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  uVar7 = 0;
  func_0x00010848cca0(0,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar7;
  func_0x00010c0d3c80();
  _objc_release(uVar7);
  uVar7 = param_5;
  func_0x00010bf90d40();
  if (((int)uVar7 != 0) && (lVar4 = param_7, func_0x00010c08fa60(), lVar4 != 0)) {
    func_0x00010c1d0640(uVar3);
  }
  uVar8 = param_2;
  func_0x00010bee6560();
  lVar4 = param_2 + 0x98;
  _objc_loadWeakRetained(lVar4);
  if ((uVar8 & 1) == 0) {
    uVar9 = *(ulong *)(param_2 + 0x58);
    func_0x00010c292860(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar9;
    func_0x00010bfcbcc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a0dc0(lVar4);
    _objc_release(uVar8);
  }
  else {
    uVar9 = param_2;
    func_0x00010be86360(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a0dc0(lVar4);
  }
  _objc_release(uVar9);
  _objc_release(lVar4);
  puVar2 = PTR_PTR_1126b8df0;
  _objc_alloc();
  uVar10 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010c291220(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar10;
  func_0x00010c291200();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_4;
  func_0x00010bf63640(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c116320();
  func_0x00010c05a360();
  _objc_release(uVar16);
  _objc_release(uVar7);
  _objc_release(uVar10);
  uVar7 = param_5;
  func_0x000108494adc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beec800(*(undefined8 *)(param_2 + 0xc0));
  if (param_8 != 0) {
    (**(code **)(param_8 + 0x10))(param_8,2);
  }
  uVar1 = *(undefined1 *)(param_2 + 0x50);
  uVar16 = param_5;
  func_0x00010c0b39c0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar16;
  func_0x00010c135fc0();
  _objc_release(uVar16);
  uVar16 = param_5;
  func_0x00010c116320();
  puVar15 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc0000000;
  pcStack_a0 = FUN_10541afa0;
  puStack_98 = &UNK_110887170;
  ppuVar11 = &puStack_b0;
  uStack_90 = uVar10;
  uStack_88 = uVar16;
  uStack_80 = uVar1;
  FUN_10541afa0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar11;
  _objc_retainAutorelease();
  func_0x00010bdc3520();
  func_0x00010029ce24();
  _objc_release(ppuVar11);
  _objc_initWeak(auStack_b8,param_2);
  lVar4 = param_2 + 0xd8;
  _objc_loadWeakRetained(lVar4);
  func_0x00010bf1f480();
  _objc_release(lVar4);
  uVar16 = *(undefined8 *)(param_2 + 0x70);
  puStack_120 = puVar15;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_10541b058;
  puStack_108 = &UNK_110887190;
  ppuStack_c8 = ppuVar12;
  _objc_copyWeak(auStack_d0,auStack_b8);
  _objc_retain(param_5);
  uStack_100 = param_5;
  _objc_retain(param_6);
  uStack_f8 = param_6;
  uStack_c0 = param_1;
  _objc_retain(uVar7);
  uStack_f0 = uVar7;
  _objc_retain(param_4);
  uStack_e8 = param_4;
  _objc_retain(param_9);
  uStack_e0 = param_9;
  _objc_retain(param_10);
  uStack_d8 = param_10;
  ppuStack_130 = ppuVar12;
  _objc_copyWeak(auStack_138,auStack_b8);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uStack_128 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_9);
  _objc_retain(param_10);
  func_0x00010c25ee00(uVar16);
  uVar16 = *(undefined8 *)(param_2 + 0xa0);
  func_0x00010c269d40(uVar16);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15ee00();
  _objc_release(uVar16);
  uVar16 = param_5;
  func_0x00010c06a360();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar16;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar10;
  func_0x00010c26a3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010c0821a0();
  _objc_release(uVar13);
  _objc_release(uVar10);
  _objc_release(uVar16);
  if ((int)uVar14 != 0) {
    uVar14 = *(undefined8 *)(param_2 + 0xa0);
    func_0x00010c269d40(uVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = param_5;
    func_0x00010c06a360(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar16;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar10;
    func_0x00010c26a3a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4240();
    func_0x00010c0a3800(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar10);
    _objc_release(uVar16);
    _objc_release(uVar14);
  }
  puVar15 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar15);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_138);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_b8);
  _objc_release(uVar7);
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_release(uVar6);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10541afa0; end: 10541b057;  */

void FUN_10541afa0(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    ppuVar1 = (undefined **)PTR_PTR_1126b8df8;
    func_0x00010c25d820(PTR_PTR_1126b8df8,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ddd398;
  }
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar2 = PTR_PTR_1126b8cd8;
  func_0x00010c25d840(PTR_PTR_1126b8cd8,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110ddd3b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10541b058; end: 10541b217;  */

void FUN_10541b058(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x0001002bf34c(uVar2);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c252ee0(param_2);
  _objc_release(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c15ebe0();
  func_0x00010be2cc60(uVar2,lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10541b218; end: 10541b47f; -[SCAdServer _makeMockProtoServeRequest:requestURL:willMakeRequest:requestSuccessBlock:requestFailureBlock:] */

void FUN_10541b218(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
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
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_10541b480;
  puStack_b8 = &UNK_1108871f0;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(param_3);
  uStack_b0 = param_3;
  _objc_retain(param_4);
  uStack_a8 = param_4;
  _objc_retain(param_5);
  uStack_a0 = param_5;
  _objc_retain(param_6);
  uStack_98 = param_6;
  _objc_retain(param_7);
  ppuVar2 = &puStack_d0;
  uStack_90 = param_7;
  _objc_retainBlock(ppuVar2);
  puStack_118 = puVar1;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_10541b544;
  puStack_100 = &UNK_110887220;
  _objc_copyWeak(auStack_d8,auStack_80);
  _objc_retain(param_3);
  uStack_f8 = param_3;
  _objc_retain(param_4);
  uStack_f0 = param_4;
  _objc_retain(param_6);
  uStack_e8 = param_6;
  _objc_retain(param_7);
  ppuVar3 = &puStack_118;
  uStack_e0 = param_7;
  _objc_retainBlock(ppuVar3);
  param_1 = param_1 + 0x90;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfa4940();
  _objc_release(param_1);
  _objc_release(ppuVar3);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_release(uStack_f8);
  _objc_destroyWeak(auStack_d8);
  _objc_release(ppuVar2);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10541b480; end: 10541b4db;  */

void FUN_10541b480(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010be5c220();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10541b4dc; end: 10541b543;  */

void FUN_10541b4dc(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),7);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),7);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x48,param_2 + 0x48);
  return;
}



/* Entry: 10541b544; end: 10541b5c3;  */

void FUN_10541b544(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2cc60(0);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10541b5c4; end: 10541cba3; -[SCAdServer _handleProtoAdResponse:requestMetadata:adRequest:requestEndpoint:responseStatusCode:requestSuccessBlock:] */

void FUN_10541b5c4(double param_1,long param_2,undefined8 param_3,undefined *param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  ulong uVar37;
  long lVar38;
  undefined8 uVar39;
  long lVar40;
  undefined8 uVar41;
  long lVar42;
  undefined *puVar43;
  ulong uVar44;
  long lVar45;
  undefined *puVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  undefined *puStack_250;
  undefined *puStack_210;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_f0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_a8;
  undefined *puStack_a0;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar2);
  puVar3 = param_4;
  func_0x00010c06a420();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar46 = param_5;
  func_0x00010c06a360();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar46;
  func_0x00010bf529e0();
  _objc_release(puVar46);
  puVar46 = puVar3;
  func_0x00010bf529e0();
  if (puVar46 <= puVar2) {
    puVar2 = puVar46;
  }
  if (0 < (long)puVar2) {
    puVar46 = (undefined *)0x0;
    do {
      puVar5 = puVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_5;
      func_0x00010c06a360();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar6 = puVar7;
      func_0x00010c26a3a0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bef2c80();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar5;
      func_0x00010c084fe0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010bf529e0();
      _objc_release(puVar9);
      if (puVar10 == (undefined *)0x0) {
        puVar9 = puVar8;
        func_0x00010bfb1920(puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = param_5;
        func_0x00010c0b39c0(param_5);
        _objc_retainAutoreleasedReturnValue();
        lVar38 = param_2;
        func_0x00010be1b380(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        _objc_release(lVar38);
        _objc_release(puVar10);
      }
      else {
        func_0x00010bef3ea0();
        puVar11 = puVar7;
        func_0x00010c06b920();
        func_0x00010c116320();
        puVar9 = PTR_PTR_1126b8c98;
        func_0x00010c0f00c0();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar5;
        func_0x00010c084fe0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar12;
        func_0x00010bf529e0();
        _objc_release(puVar12);
        puVar12 = puVar8;
        func_0x00010bf529e0();
        if (puVar12 <= puVar10) {
          puVar10 = puVar12;
        }
        if (0 < (long)puVar10) {
          do {
            puVar12 = puVar5;
            func_0x00010c084fe0();
            _objc_retainAutoreleasedReturnValue();
            puVar13 = puVar12;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar12);
            puVar12 = puVar9;
            func_0x00010bf529e0();
            if (puVar12 == (undefined *)0x0) {
              puStack_a8 = (undefined *)0x0;
              dVar55 = param_1;
            }
            else {
              func_0x00010bf529e0();
              puStack_a8 = puVar9;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              dVar55 = param_1;
            }
            puVar12 = puVar8;
            func_0x00010c0dfd20();
            _objc_retainAutoreleasedReturnValue();
            puVar14 = param_4;
            func_0x00010bf93ca0();
            _objc_retainAutoreleasedReturnValue();
            puVar15 = puVar13;
            func_0x00010bf939a0();
            _objc_retainAutoreleasedReturnValue();
            puVar16 = puVar5;
            func_0x00010c135700();
            _objc_retainAutoreleasedReturnValue();
            puVar17 = puVar16;
            func_0x00010c08fa60();
            if (puVar17 == (undefined *)0x0) {
              puStack_c8 = (undefined *)0x0;
            }
            else {
              puVar17 = PTR__OBJC_CLASS___NSUUID_1126b0270;
              _objc_alloc();
              puVar18 = puVar5;
              func_0x00010c135700(puVar5);
              _objc_retainAutoreleasedReturnValue();
              _objc_retainAutorelease();
              func_0x00010bf25f00();
              func_0x00010c057e80();
              puStack_c8 = puVar17;
              func_0x00010bdc3580();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar17);
              _objc_release(puVar18);
            }
            _objc_release(puVar16);
            puVar16 = puVar13;
            func_0x00010c15ed20();
            _objc_retainAutoreleasedReturnValue();
            puVar17 = puVar16;
            func_0x00010c08fa60();
            if (puVar17 == (undefined *)0x0) {
              puStack_d0 = (undefined *)0x0;
            }
            else {
              puVar17 = PTR__OBJC_CLASS___NSUUID_1126b0270;
              _objc_alloc();
              puVar18 = puVar13;
              func_0x00010c15ed20(puVar13);
              _objc_retainAutoreleasedReturnValue();
              _objc_retainAutorelease();
              func_0x00010bf25f00();
              func_0x00010c057e80();
              puStack_d0 = puVar17;
              func_0x00010bdc3580();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar17);
              _objc_release(puVar18);
            }
            _objc_release(puVar16);
            puVar16 = puVar13;
            func_0x00010c0fcb00();
            _objc_retainAutoreleasedReturnValue();
            puVar17 = puVar16;
            func_0x00010c08fa60();
            if (puVar17 == (undefined *)0x0) {
              puStack_d8 = (undefined *)0x0;
            }
            else {
              puVar17 = PTR__OBJC_CLASS___NSUUID_1126b0270;
              _objc_alloc();
              puVar18 = puVar13;
              func_0x00010c0fcb00(puVar13);
              _objc_retainAutoreleasedReturnValue();
              _objc_retainAutorelease();
              func_0x00010bf25f00();
              func_0x00010c057e80();
              puStack_d8 = puVar17;
              func_0x00010bdc3580();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar17);
              _objc_release(puVar18);
            }
            _objc_release(puVar16);
            puVar17 = puVar14;
            func_0x00010bf15dc0();
            _objc_retainAutoreleasedReturnValue();
            puVar18 = puVar15;
            func_0x00010bf15dc0();
            _objc_retainAutoreleasedReturnValue();
            _objc_retain(puVar6);
            puVar16 = PTR_PTR_1126b8dc8;
            puStack_a0 = puVar6;
            if ((int)puVar11 != 0) {
              _objc_retain(puVar6);
              _objc_alloc();
              func_0x00010bef4240();
              puVar43 = puVar6;
              func_0x00010c06a3a0();
              _objc_retainAutoreleasedReturnValue();
              puVar19 = puVar6;
              func_0x00010c06a4a0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c06a440();
              puVar20 = puVar6;
              func_0x00010c06a3c0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0821a0();
              func_0x00010bf2da00();
              func_0x00010c07b8e0();
              puVar21 = puVar6;
              func_0x00010bf65fc0();
              _objc_retainAutoreleasedReturnValue();
              puVar22 = puVar6;
              func_0x00010bf66360();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0703c0();
              func_0x00010c0cf580();
              func_0x00010c0cf560();
              func_0x00010c0cf5a0();
              puVar23 = puVar6;
              func_0x00010bf35520();
              _objc_retainAutoreleasedReturnValue();
              puVar24 = puVar6;
              func_0x00010bf35680();
              _objc_retainAutoreleasedReturnValue();
              puVar25 = puVar6;
              func_0x00010c116320();
              _objc_retainAutoreleasedReturnValue();
              puVar26 = puVar6;
              func_0x00010c11af80();
              _objc_retainAutoreleasedReturnValue();
              puVar27 = puVar6;
              func_0x00010bf8c980();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c11b1e0();
              puVar28 = puVar6;
              func_0x00010c1057c0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf8fe40();
              func_0x00010bf8fa80();
              func_0x00010bf91ea0();
              puVar29 = puVar6;
              func_0x00010c263040();
              _objc_retainAutoreleasedReturnValue();
              puVar30 = puVar6;
              func_0x00010c263100();
              _objc_retainAutoreleasedReturnValue();
              puStack_250 = puVar6;
              func_0x00010c23d840();
              _objc_retainAutoreleasedReturnValue();
              puVar31 = puVar6;
              func_0x00010c23d8e0();
              _objc_retainAutoreleasedReturnValue();
              puVar32 = puVar6;
              func_0x00010bf4bf60();
              _objc_retainAutoreleasedReturnValue();
              puVar33 = puVar6;
              func_0x00010c06a400();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bef62a0();
              _objc_release(puVar6);
              func_0x00010bff1b40();
              _objc_release(puVar33);
              _objc_release(puVar32);
              _objc_release(puVar31);
              _objc_release(puStack_250);
              _objc_release(puVar30);
              _objc_release(puVar29);
              _objc_release(puVar28);
              _objc_release(puVar27);
              _objc_release(puVar26);
              _objc_release(puVar25);
              _objc_release(puVar24);
              _objc_release(puVar23);
              _objc_release(puVar22);
              _objc_release(puVar21);
              _objc_release(puVar20);
              _objc_release(puVar19);
              _objc_release(puVar43);
              _objc_release(puVar6);
              puStack_a0 = puVar16;
            }
            _objc_retain(puVar13);
            puVar16 = puVar13;
            func_0x00010bfd3cc0();
            if ((int)puVar16 == 0) {
              puStack_f0 = (undefined *)0x0;
            }
            else {
              puVar16 = puVar13;
              func_0x00010bef2f80();
              fVar47 = SUB84(dVar55,0);
              _objc_retainAutoreleasedReturnValue();
              puStack_f0 = PTR_PTR_1126b8dd0;
              _objc_alloc();
              puVar43 = puVar16;
              func_0x00010c0cdba0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c296d80();
              puVar19 = puVar16;
              func_0x00010c0cda40();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c296d80();
              puVar20 = puVar16;
              func_0x00010c0cdce0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c296d80();
              puVar21 = puVar16;
              fVar48 = fVar47;
              func_0x00010c0cdb40();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c296d80();
              puVar22 = puVar16;
              func_0x00010c0cdaa0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c296d80();
              puVar23 = puVar16;
              func_0x00010c0cdca0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c296d80();
              puVar24 = puVar16;
              fVar49 = fVar48;
              func_0x00010c0cdb20();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c296d80();
              puVar25 = puVar16;
              func_0x00010c0cda60();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c296d80();
              puVar26 = puVar16;
              func_0x00010c0cdc40();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c296d80();
              puVar27 = puVar16;
              fVar50 = fVar49;
              func_0x00010c0cdd00();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c296d80();
              puVar28 = puVar16;
              fVar51 = fVar50;
              func_0x00010c0c2ea0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c296d80();
              puVar29 = puVar16;
              func_0x00010bf48240();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c296d80();
              puVar30 = puVar16;
              func_0x00010bf48200();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c296d80();
              puVar31 = puVar16;
              func_0x00010bf481e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c296d80();
              puVar32 = puVar16;
              func_0x00010bfd5440();
              puStack_210 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              if ((int)puVar32 == 0) {
                puStack_210 = (undefined *)0x0;
              }
              else {
                puStack_250 = puVar16;
                func_0x00010bf365e0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bfa3840();
                func_0x00010c0df760();
                _objc_retainAutoreleasedReturnValue();
              }
              dVar55 = (double)fVar47;
              puVar33 = puVar16;
              func_0x00010c0cdb60();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c296d80();
              puVar34 = puVar16;
              func_0x00010c0cdac0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c296d80();
              puVar35 = puVar16;
              func_0x00010c0cdc80(puVar16);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c296d80();
              puVar36 = puVar16;
              func_0x00010bf48220();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c296d80();
              func_0x00010c02c100(dVar55,(double)fVar48,(double)fVar49,(double)fVar50,(double)fVar51
                                 );
              _objc_release(puVar36);
              _objc_release(puVar35);
              _objc_release(puVar34);
              _objc_release(puVar33);
              if ((int)puVar32 != 0) {
                _objc_release(puStack_210);
                _objc_release(puStack_250);
              }
              _objc_release(puVar31);
              _objc_release(puVar30);
              _objc_release(puVar29);
              _objc_release(puVar28);
              _objc_release(puVar27);
              _objc_release(puVar26);
              _objc_release(puVar25);
              _objc_release(puVar24);
              _objc_release(puVar23);
              _objc_release(puVar22);
              _objc_release(puVar21);
              _objc_release(puVar20);
              _objc_release(puVar19);
              _objc_release(puVar43);
              _objc_release(puVar16);
            }
            _objc_release(puVar13);
            puVar16 = puVar13;
            func_0x00010c0ec0e0();
            func_0x0001084c72b4();
            if (*(char *)(param_2 + 0x50) == '\x01') {
              uVar37 = param_2 + 0xd8;
              _objc_loadWeakRetained();
              uVar44 = uVar37;
              func_0x00010c067f60();
              _objc_release(uVar37);
              lVar38 = param_2 + 0xd8;
              _objc_loadWeakRetained();
              lVar45 = lVar38;
              func_0x00010bf1f480();
              uVar1 = (uint)lVar45;
              _objc_release(lVar38);
            }
            else {
              uVar44 = 0;
              uVar1 = 0;
            }
            puVar43 = puVar13;
            func_0x00010bef3760();
            _objc_retainAutoreleasedReturnValue();
            puVar19 = puVar43;
            func_0x00010bef37a0();
            func_0x00010bfad6c0(param_5);
            if (0 < (long)puVar19) {
              dVar55 = (double)puVar19;
              func_0x00010c155420(PTR_PTR_1126afec0);
            }
            if (puVar16 == (undefined *)0x3) {
              uVar1 = 1;
            }
            dVar52 = (double)uVar44;
            if ((uVar1 & dVar55 < (double)uVar44) == 0) {
              dVar52 = dVar55;
            }
            dVar53 = dVar55;
            if (0.0 < dVar55) {
              dVar53 = dVar52;
            }
            param_1 = dVar55;
            if (0 < (long)uVar44) {
              param_1 = dVar53;
            }
            _objc_release(puVar43);
            puVar16 = PTR_PTR_1126afeb8;
            _objc_alloc();
            puVar43 = puVar13;
            func_0x00010bef4360(puVar13);
            _objc_retainAutoreleasedReturnValue();
            puVar19 = puVar13;
            func_0x00010bef5680();
            _objc_retainAutoreleasedReturnValue();
            puVar20 = puVar19;
            func_0x00010b70473c();
            _objc_retainAutoreleasedReturnValue();
            puVar21 = puVar13;
            func_0x00010bf2bf80();
            _objc_retainAutoreleasedReturnValue();
            puVar22 = puVar21;
            func_0x00010b70473c();
            _objc_retainAutoreleasedReturnValue();
            puVar23 = puVar13;
            func_0x00010bef1b20();
            _objc_retainAutoreleasedReturnValue();
            puVar24 = puVar23;
            func_0x00010b70473c();
            _objc_retainAutoreleasedReturnValue();
            puVar25 = param_5;
            func_0x00010c0b39c0();
            _objc_retainAutoreleasedReturnValue();
            puVar26 = puVar5;
            func_0x00010c119560();
            _objc_retainAutoreleasedReturnValue();
            puVar27 = puVar13;
            func_0x00010c29e0e0();
            _objc_retainAutoreleasedReturnValue();
            puVar28 = puVar13;
            func_0x00010bef3760();
            _objc_retainAutoreleasedReturnValue();
            puVar29 = puVar28;
            func_0x00010bef37a0();
            func_0x00010c0da780(param_5);
            if (0 < (long)puVar29) {
              dVar55 = (double)puVar29;
              func_0x00010c155420(dVar55,PTR_PTR_1126afec0);
            }
            puVar29 = puVar13;
            dVar52 = dVar55;
            func_0x00010bef3760();
            _objc_retainAutoreleasedReturnValue();
            puVar30 = puVar29;
            func_0x00010bef3740();
            func_0x00010bf14960(param_5);
            if (0 < (long)puVar30) {
              dVar52 = (double)puVar30;
              func_0x00010c155420(dVar52,PTR_PTR_1126afec0);
            }
            puVar30 = puVar13;
            dVar53 = dVar52;
            func_0x00010c15ef00(puVar13);
            func_0x00010bef5840();
            puVar31 = puVar13;
            func_0x00010bfdc1c0();
            if ((int)puVar31 != 0) {
              puStack_1c8 = puVar13;
              func_0x00010c23d7c0();
              _objc_retainAutoreleasedReturnValue();
              puStack_1d0 = puStack_a0;
              func_0x00010c23d840();
              _objc_retainAutoreleasedReturnValue();
              puStack_1d8 = puStack_a0;
              func_0x00010c23d8e0();
              _objc_retainAutoreleasedReturnValue();
              puStack_1e0 = puStack_1c8;
              func_0x0001084c1360(puStack_1c8,puStack_1d0);
              _objc_retainAutoreleasedReturnValue();
            }
            func_0x00010c0ed0a0(puVar13);
            uVar41 = param_6;
            dVar54 = dVar53;
            func_0x00010bf6e340();
            _objc_retainAutoreleasedReturnValue();
            if (puStack_a8 == (undefined *)0x0) {
              func_0x00010bf21060();
            }
            else {
              func_0x00010c067ec0();
            }
            func_0x00010bf604c0(PTR_PTR_1126afec0);
            func_0x00010bff1c00(param_1,dVar55,dVar52,(double)(long)puVar30,dVar53,dVar54,puVar16);
            _objc_release(uVar41);
            if ((int)puVar31 != 0) {
              _objc_release(puStack_1e0);
              _objc_release(puStack_1d8);
              _objc_release(puStack_1d0);
              _objc_release(puStack_1c8);
            }
            _objc_release(puVar29);
            _objc_release(puVar28);
            _objc_release(puVar27);
            _objc_release(puVar26);
            _objc_release(puVar25);
            _objc_release(puVar24);
            _objc_release(puVar23);
            _objc_release(puVar22);
            _objc_release(puVar21);
            _objc_release(puVar20);
            _objc_release(puVar19);
            _objc_release(puVar43);
            lVar38 = *(long *)(param_2 + 0x80);
            func_0x00010c0f3e00();
            _objc_retainAutoreleasedReturnValue();
            puVar43 = PTR_PTR_1126b8e00;
            func_0x00010bef27a0(puVar13);
            func_0x00010bfbae20(puVar43);
            if (lVar38 == 0) {
              lVar45 = 0;
            }
            else {
              lVar45 = lVar38;
              func_0x00010c2a77c0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar38);
              puVar43 = PTR_PTR_1126b8d98;
              func_0x00010bef4320(PTR_PTR_1126b8d98);
              _objc_retainAutoreleasedReturnValue();
              puVar19 = PTR_PTR_1126b8e00;
              func_0x00010c25d7c0(PTR_PTR_1126b8e00);
              _objc_retainAutoreleasedReturnValue();
              puVar20 = puVar43;
              func_0x00010c2ac460(puVar43);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar43);
              _objc_release(puVar19);
              puVar43 = PTR_PTR_1126b8cd8;
              func_0x00010c116320(param_5);
              func_0x00010c25d840(puVar43);
              _objc_retainAutoreleasedReturnValue();
              puVar19 = puVar20;
              func_0x00010c2ac460(puVar20);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar20);
              _objc_release(puVar43);
              uVar39 = *(undefined8 *)(param_2 + 0x40);
              func_0x00010c269d40(uVar39);
              _objc_retainAutoreleasedReturnValue();
              uVar41 = uVar39;
              func_0x00010bef2aa0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfec2a0();
              _objc_release(uVar41);
              _objc_release(uVar39);
              _objc_release(puVar19);
            }
            lVar38 = param_2 + 0xd8;
            _objc_loadWeakRetained();
            lVar40 = lVar38;
            func_0x00010bf1f480();
            _objc_release(lVar38);
            if ((int)lVar40 != 0) {
              lVar38 = param_2 + 0xe0;
              _objc_loadWeakRetained(lVar38);
              lVar40 = lVar38;
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bef6a80();
              _objc_release(lVar40);
              _objc_release(lVar38);
            }
            if (lVar45 == 0) {
              puVar43 = puVar8;
              func_0x00010bfb1920(puVar8);
              _objc_retainAutoreleasedReturnValue();
              puVar19 = param_5;
              func_0x00010c0b39c0(param_5);
              _objc_retainAutoreleasedReturnValue();
              lVar38 = param_2;
              func_0x00010be1b380(param_2);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar4);
              _objc_release(lVar38);
              _objc_release(puVar19);
LAB_10541c960:
              _objc_release(puVar43);
            }
            else {
              func_0x00010befa120(puVar4);
              func_0x00010bef6a60(*(undefined8 *)(param_2 + 0x88));
              uVar41 = *(undefined8 *)(param_2 + 0xa0);
              func_0x00010c269d40(uVar41);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c15ee60();
              _objc_release(uVar41);
              lVar38 = lVar45;
              func_0x00010bef52c0();
              _objc_retainAutoreleasedReturnValue();
              lVar40 = lVar38;
              func_0x00010bfb1920();
              _objc_retainAutoreleasedReturnValue();
              lVar42 = lVar40;
              func_0x00010c082160();
              _objc_release(lVar40);
              _objc_release(lVar38);
              if ((int)lVar42 != 0) {
                puVar43 = *(undefined **)(param_2 + 0xa0);
                func_0x00010c269d40(puVar43);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bef4240(lVar45);
                func_0x00010c0a37e0(puVar43);
                goto LAB_10541c960;
              }
            }
            _objc_release(puVar16);
            _objc_release(puStack_f0);
            _objc_release(puStack_a0);
            _objc_release(puVar18);
            _objc_release(puVar17);
            _objc_release(lVar45);
            _objc_release(puStack_d8);
            _objc_release(puStack_d0);
            _objc_release(puStack_c8);
            _objc_release(puVar15);
            _objc_release(puVar14);
            _objc_release(puVar12);
            _objc_release(puStack_a8);
            _objc_release(puVar13);
            puVar10 = puVar10 + -1;
          } while (puVar10 != (undefined *)0x0);
        }
      }
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar6);
      _objc_release(puVar7);
      _objc_release(puVar5);
      puVar46 = puVar46 + 1;
    } while (puVar46 != puVar2);
  }
  uVar41 = *(undefined8 *)(param_2 + 0xa0);
  func_0x00010c269d40(uVar41);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a07e0();
  _objc_release(uVar41);
  if (param_9 != 0) {
    puVar2 = puVar4;
    func_0x00010bf51e00(puVar4);
    (**(code **)(param_9 + 0x10))(param_9,puVar2);
    _objc_release(puVar2);
  }
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10541cba4; end: 10541cd5f; -[SCAdServer _requestNetworkFailed:errorStatusCode:requestURL:requestType:requestLatencyInSec:requestSize:responseSize:requestSuccessBlock:requestFailureBlock:] */

void FUN_10541cba4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 in_stack_00000008;
  
  _objc_retain(param_4);
  _objc_retain(in_stack_00000008);
  _objc_retain(param_6);
  lVar3 = param_2 + 0x98;
  _objc_loadWeakRetained(lVar3);
  uVar2 = param_4;
  func_0x000108494adc(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c116320(param_4);
  func_0x00010c1364a0(param_1,lVar3,param_3,uVar2,0,param_7,param_5,param_6,uVar1,
                      *(undefined1 *)(param_2 + 0x50));
  _objc_release(param_6);
  _objc_release(uVar2);
  _objc_release(lVar3);
  uVar2 = *(undefined8 *)(param_2 + 0xa0);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15ede0(param_1);
  _objc_release(uVar2);
  if (param_5 == 0x1ad) {
    if (*(char *)(param_2 + 0x50) != '\x01') goto LAB_10541cd10;
    lVar3 = *(long *)(param_2 + 0x58);
    func_0x00010c292860(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beec800(*(undefined8 *)(param_2 + 0xc0));
    func_0x00010c1b7660(lVar3);
    uVar2 = 1;
  }
  else {
    if (param_5 != 0x199) {
LAB_10541cd10:
      uVar2 = 1;
      goto LAB_10541cd14;
    }
    lVar3 = param_2 + 0xb0;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c120620();
    uVar2 = 4;
  }
  _objc_release(lVar3);
LAB_10541cd14:
  func_0x00010be90fa0(param_2,param_3,param_4,uVar2,param_7,6,in_stack_00000008);
  _objc_release(in_stack_00000008);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10541cd60; end: 10541ceb7; -[SCAdServer _requestFailed:errorResponseType:requestType:failedReason:requestFailureBlock:] */

void FUN_10541cd60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_x6;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b8de0;
  if (in_x6 != 0) {
    _objc_retain(in_x6);
    _objc_alloc(puVar1);
    uVar5 = param_3;
    func_0x00010c06a360(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bef2c80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01b680(puVar1);
    (**(code **)(in_x6 + 0x10))(in_x6,puVar1);
    _objc_release(in_x6);
    _objc_release(puVar1);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
  }
  uVar5 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15edc0();
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10541ceb8; end: 10541cfd7; -[SCAdServer _generateInvalidAdResponse:serveLoggingContext:targetingParameters:] */

void FUN_10541ceb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b8e08;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfe6000(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2af9a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2a7e20(puVar2,param_2,0x17);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c2b8460(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c2bada0(puVar2,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c2b5a20(puVar1,param_2,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10541cfd8; end: 10541d043; -[SCAdServer _useCachedUserAdID] */

uint FUN_10541cfd8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110ddd1f8,0,0);
  param_1 = param_1 + 0xd8;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf1f480();
  _objc_release(param_1);
  return ((uint)uVar1 | (uint)lVar2) & 1;
}



/* Entry: 10541d044; end: 10541d0cf; -[SCAdServer _readCachedUserAdId] */

void FUN_10541d044(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0xd8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf1f480();
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c292860(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  if ((int)lVar2 == 0) {
    func_0x00010bfc34c0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfc34e0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10541d0d0; end: 10541d0d7; -[SCAdServer requestInfoProvider] */

undefined8 FUN_10541d0d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10541d0d8; end: 10541d0df; -[SCAdServer configAdapter] */

undefined8 FUN_10541d0d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10541d0e0; end: 10541d0e7; -[SCAdServer deviceTargetingManager] */

undefined8 FUN_10541d0e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10541d0e8; end: 10541d0ef; -[SCAdServer networkManager] */

undefined8 FUN_10541d0e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10541d0f0; end: 10541d0f7; -[SCAdServer recentViewReceipts] */

undefined8 FUN_10541d0f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10541d0f8; end: 10541d0ff; -[SCAdServer adRenderDataParser] */

undefined8 FUN_10541d0f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10541d100; end: 10541d107; -[SCAdServer serveResponseDataStore] */

undefined8 FUN_10541d100(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10541d108; end: 10541d10f; -[SCAdServer isPrimary] */

undefined1 FUN_10541d108(long param_1)

{
  return *(undefined1 *)(param_1 + 0x50);
}



/* Entry: 10541d110; end: 10541d127; -[SCAdServer snapTokenManager] */

void FUN_10541d110(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10541d128; end: 10541d13f; -[SCAdServer commonMetricsManager] */

void FUN_10541d128(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10541d140; end: 10541d147; -[SCAdServer serveMetricsManager] */

undefined8 FUN_10541d140(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 10541d148; end: 10541d15f; -[SCAdServer multiAdPodMetricsManager] */

void FUN_10541d148(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10541d160; end: 10541d177; -[SCAdServer adsInitializer] */

void FUN_10541d160(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10541d178; end: 10541d18f; -[SCAdServer persistedDataAdapter] */

void FUN_10541d178(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10541d190; end: 10541d197; -[SCAdServer timeProvider] */

undefined8 FUN_10541d190(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 10541d198; end: 10541d19f; -[SCAdServer canOpenURLProvider] */

undefined8 FUN_10541d198(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 10541d1a0; end: 10541d1a7; -[SCAdServer dpaConfigProvider] */

undefined8 FUN_10541d1a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 10541d1a8; end: 10541d1bf; -[SCAdServer adConfigProviderV2] */

void FUN_10541d1a8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10541d1c0; end: 10541d1d7; -[SCAdServer adResponseProvider] */

void FUN_10541d1c0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xe0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10541d1d8; end: 10541d30b; -[SCAdServer .cxx_destruct] */

void FUN_10541d1d8(long param_1)

{
  _objc_destroyWeak(param_1 + 0xe0);
  _objc_destroyWeak(param_1 + 0xd8);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_destroyWeak(param_1 + 0xb8);
  _objc_destroyWeak(param_1 + 0xb0);
  _objc_destroyWeak(param_1 + 0xa8);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_destroyWeak(param_1 + 0x98);
  _objc_destroyWeak(param_1 + 0x90);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10541d30c; end: 10541d427; -[SCAdCanOpenURLImpl initWithAdConfigProvider:] */

undefined8 * FUN_10541d30c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e8440;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_initWeak(auStack_48,puVar1);
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10541d428; end: 10541d467;  */

void FUN_10541d428(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be20f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10541d468; end: 10541d4af; -[SCAdCanOpenURLImpl _getOnDeviceCanOpenURLMappingAppIdToScheme] */

void FUN_10541d468(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e36e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10541d4b0; end: 10541d583; -[SCAdCanOpenURLImpl canOpenAppWithAppURLScheme:] */

undefined * FUN_10541d4b0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110ddd438);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar2,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf2cf00();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10541d584; end: 10541d61b; -[SCAdCanOpenURLImpl availableAppURLSchemeList] */

void FUN_10541d584(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 8);
  if (lVar5 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x00010c0b6660();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bfedc40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_release(puVar1);
    lVar5 = *(long *)(param_1 + 8);
  }
  _objc_retain(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}


