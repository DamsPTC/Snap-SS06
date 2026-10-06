/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1003d6518; end: 1003d651f; -[SCLensCarouselStudySettingsServices lensCarouselStudySettings] */

undefined8 FUN_1003d6518(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1003d6520; end: 1003d6543;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003d6520(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_112784914);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1003d6544; end: 1003d654b; -[SCUserLocationServices locationProvider] */

undefined8 FUN_1003d6544(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1003d654c; end: 1003d655b; -[SCLensPlusTierCheckServices tierCheckServiceObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003d654c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113036520));
  return;
}



/* Entry: 1003d655c; end: 1003d65cf; -[SCMixerFeedContextProvider initWithTierCheckService:] */

undefined1 * FUN_1003d655c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1127016a8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003d65d0; end: 1003d65d7; -[SCLensUserProviderServices lensUserProvider] */

undefined8 FUN_1003d65d0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1003d65d8; end: 1003d669f; -[SCLensScheduleNamespaceServiceEntryPoint _storeProviderWithDocObjectContext:scheduleResponseProcessor:lensDataConfig:] */

void FUN_1003d65d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126de2d8;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c610fc(puVar1);
  puVar2 = PTR_PTR_1126de488;
  func_0x000107c610f4(PTR_PTR_1126de488);
  func_0x000107c47424();
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  puVar3 = PTR_PTR_1126de490;
  func_0x000107c610f4(PTR_PTR_1126de490);
  func_0x000107c46834();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1003d66a0; end: 1003d685b; -[SCLensScheduleNamespaceMetadataStoreFactory initWithLensUpdateResolver:docObjectContext:lensExtensionSerializer:lensDataConfig:] */

undefined8 *
FUN_1003d66a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_68 = PTR_PTR_1127016d0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_5);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_5);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_5);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1003d685c; end: 1003d68eb; -[SCLensScheduleNamespaceMetadataStoreProvider initWithFactory:] */

undefined1 * FUN_1003d685c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1127016d8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003d68ec; end: 1003d68f7; +[SCLensScheduleNamespaceServiceEntryPoint _defaultLocationThrottlingSec] */

undefined8 FUN_1003d68ec(void)

{
  return 0x4072c00000000000;
}



/* Entry: 1003d68f8; end: 1003d696f; -[SCLensGtqRequestLocationProvider initWithLocationProvider:fetchLocationThrottlingInterval:] */

long FUN_1003d68f8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x000107c61174(param_4);
  if (param_2 != 0) {
    func_0x000107c61174(param_4);
    uVar1 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = param_4;
    func_0x000107c61170(uVar1);
    *(undefined8 *)(param_2 + 0x10) = param_1;
    puVar2 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(undefined **)(param_2 + 0x18) = puVar2;
    func_0x000107c61170(uVar1);
  }
  func_0x000107c61170(param_4);
  return param_2;
}



/* Entry: 1003d6970; end: 1003d6977; -[SCLensInteractionHistoryServices interactionHistoryProvider] */

undefined8 FUN_1003d6970(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1003d6978; end: 1003d697f; -[SCUserUnifiedGRPCServices grpcClientFactory] */

undefined8 FUN_1003d6978(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1003d6980; end: 1003d69b3; -[_TtC16AdUserIdServices16AdUserIdServices userAdIdProvider] */

void FUN_1003d6980(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1003d2494();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1003d69b4; end: 1003d69bb; -[SCLensCacheServices lensCacheMetadataProvider] */

undefined8 FUN_1003d69b4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1003d69bc; end: 1003d69cb; -[SCNetworkBandwidthEstimatorServices bandwidthEstimator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003d69bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307a4d0));
  return;
}



/* Entry: 1003d69cc; end: 1003d69d3; -[SCLensMetadataMappingServices lensMetadataMapper] */

undefined8 FUN_1003d69cc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1003d69d4; end: 1003d69fb; -[SCPromise future] */

void FUN_1003d69d4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1003d69fc; end: 1003d6e0f; -[SCLensScheduleNamespaceServiceEntryPoint _mixerMetadataFetcherWithCircumstanceEngine:grpcClientFactory:locationProvider:lensDataConfig:userAdIdProvider:cacheMetadataProvider:bandwidthEstimator:networkConnectivityMonitor:interactionHistoryProvider:lensMetadataMapper:featureInfoProviders:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003d69fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c610f4();
  func_0x000107c470d0();
  puVar2 = PTR_PTR_1126de460;
  func_0x000107c610f4(PTR_PTR_1126de460);
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_112784958;
    func_0x000107c61148(lVar10);
  }
  func_0x000107c45e04(puVar2);
  func_0x000107c61170(lVar10);
  puVar3 = PTR_PTR_1126de468;
  func_0x000107c610f4();
  func_0x000107c47a38();
  puVar4 = puVar3;
  func_0x000107c40a2c();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_11278493c;
    func_0x000107c61148();
  }
  lVar5 = lVar10;
  func_0x000107c40870();
  func_0x000107c61180();
  func_0x000107c61170(lVar10);
  func_0x000107c61144(auStack_70,param_1);
  puVar6 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_78,auStack_70);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(lVar5);
  func_0x000107c3e4fc(puVar6);
  func_0x000107c61180();
  puVar7 = PTR_PTR_1126aeea8;
  func_0x000107c61160(PTR_PTR_1126aeea8);
  puVar8 = PTR_PTR_1126de478;
  func_0x000107c610f4(PTR_PTR_1126de478);
  func_0x000107c473fc();
  puVar9 = PTR_PTR_1126de480;
  func_0x000107c610f4(PTR_PTR_1126de480);
  func_0x000107c46ac0();
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_5);
  func_0x000107c61120(auStack_78);
  func_0x000107c61120(auStack_70);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1003d6e10; end: 1003d6eb3; -[SCMixerNetworkConfigProvider initWithCircumstanceEngine:lensCoreVersionProvider:] */

undefined1 *
FUN_1003d6e10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112701600;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003d6eb4; end: 1003d6f7f; -[SCGatorServiceFactory initWithNetworkConfig:performer:clientFactory:] */

undefined1 *
FUN_1003d6eb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1127015e0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003d6f80; end: 1003d706f; -[SCGatorServiceFactory createGatorService] */

void FUN_1003d6f80(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c61174(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61174(uVar4);
  puVar1 = PTR_PTR_1126ae720;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  puStack_58 = &UNK_10aea3bb8;
  puStack_50 = &UNK_110c8ded0;
  uStack_48 = uVar2;
  uStack_40 = uVar4;
  uStack_38 = uVar3;
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar2);
  func_0x000107c3e4fc(puVar1,param_2,&puStack_68);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1003d7070; end: 1003d70cf;  */

void FUN_1003d7070(long param_1,long param_2)

{
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x20));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x28));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x30));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x38));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x40));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x48));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x58,param_2 + 0x58);
  return;
}



/* Entry: 1003d70d0; end: 1003d719b; -[SCMixerResponseParser initWithLensSnapchatMapper:timeProvider:lensDataConfigProvider:] */

undefined1 *
FUN_1003d70d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_112701610;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003d719c; end: 1003d7333; -[SCMixerMetadataFetcher initWithGRPCService:requestFeatureInfoProviders:requestProvider:responseParser:networkConfig:timeProvider:performer:] */

undefined1 *
FUN_1003d719c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  puStack_58 = PTR_PTR_1127015f8;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003d7334; end: 1003d736f; -[SCGatorServiceFactory .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001003d734c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001003d7350) */

void FUN_1003d7334(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1003d7370; end: 1003d73e3; -[SCLensMetadataFetchingActiveUserInfoProvider initWithLensUserProvider:] */

undefined1 * FUN_1003d7370(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1127015d0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003d73e4; end: 1003d74af; -[SCLazy map:] */

void FUN_1003d73e4(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c61174(param_3);
  if (param_3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x000107c611ec(param_1 + 0x18);
    cVar1 = *(char *)(param_1 + 0x1c);
    func_0x000107c611f0(param_1 + 0x18);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c610f4(PTR_PTR_1126ae720);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x100743d28;
    puStack_48 = &UNK_110cb7910;
    func_0x000107c61174(param_3);
    lStack_40 = param_1;
    lStack_38 = param_3;
    func_0x000107c46ea8(puVar2,param_2,&puStack_60,cVar1 != '\0');
    func_0x000107c61170(lStack_38);
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1003d74b0; end: 1003d7553; -[SCMixerBackgroundUpdateBlocker initWithMetadataUpdateDateProvider:interactionHistoryProvider:] */

undefined1 *
FUN_1003d74b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1127016f8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003d7554; end: 1003d75f7; -[SCLensScheduleNamespaceUpdateStrategy initWithLensNamespaceTtlUpdateStrategy:lensDataConfig:updateBlocker:locationProvider:timeProvider:fetchLocationThrottlingInterval:] */

undefined1 *
FUN_1003d7554(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1127016f0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003d75f8; end: 1003d75ff; -[SCLensDataLoggerServices scheduleDataLogger] */

undefined8 FUN_1003d75f8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1003d7600; end: 1003d763f;  */

void FUN_1003d7600(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3c470();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1003d7640; end: 1003d773f; -[SCLensDataLoggerServiceProvider _scheduleDataLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003d7640(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  lVar1 = param_1 + _DAT_112726554;
  func_0x000107c61148(lVar1);
  lVar2 = lVar1;
  func_0x000107c444a4();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c4b1a4();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  puVar5 = PTR_PTR_1126bbad8;
  func_0x000107c61160(PTR_PTR_1126bbad8);
  param_1 = param_1 + _DAT_112726558;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puVar6 = PTR_PTR_1126bbb70;
  func_0x000107c610f4(PTR_PTR_1126bbb70);
  func_0x000107c46b88();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1003d7740; end: 1003d77c7; -[SCGrapheneRegistry lensGraphene] */

void FUN_1003d7740(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1003d77c8;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001137f8f10 != -1) {
    FUN_10002a2fc(0x1137f8f10,&puStack_48);
  }
  uVar1 = uRam00000001137f8f08;
  func_0x000107c61174(uRam00000001137f8f08);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1003d77c8; end: 1003d7a7f;  */

undefined * FUN_1003d77c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined1 *puStack_1e0;
  code *pcStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
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
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  ppuStack_1d0 = &PTR____CFConstantStringClassReference_110ef0e58;
  ppuStack_1c8 = &PTR____CFConstantStringClassReference_110ef0e78;
  ppuStack_1c0 = &PTR____CFConstantStringClassReference_110ef0e98;
  ppuStack_1b8 = &PTR____CFConstantStringClassReference_110ef0eb8;
  ppuStack_1b0 = &PTR____CFConstantStringClassReference_110f76bb8;
  ppuStack_1a8 = &PTR____CFConstantStringClassReference_110f76bd8;
  ppuStack_1a0 = &PTR____CFConstantStringClassReference_110f76bf8;
  ppuStack_198 = &PTR____CFConstantStringClassReference_110f76c18;
  ppuStack_190 = &PTR____CFConstantStringClassReference_110f76c38;
  ppuStack_188 = &PTR____CFConstantStringClassReference_110f5ddb8;
  ppuStack_180 = &PTR____CFConstantStringClassReference_110f76c58;
  ppuStack_178 = &PTR____CFConstantStringClassReference_110f76c78;
  ppuStack_170 = &PTR____CFConstantStringClassReference_110f76c98;
  ppuStack_168 = &PTR____CFConstantStringClassReference_110f76cb8;
  ppuStack_160 = &PTR____CFConstantStringClassReference_110f76cd8;
  ppuStack_158 = &PTR____CFConstantStringClassReference_110f76cf8;
  ppuStack_150 = &PTR____CFConstantStringClassReference_110f76d18;
  ppuStack_148 = &PTR____CFConstantStringClassReference_110f76d38;
  ppuStack_140 = &PTR____CFConstantStringClassReference_110f76d58;
  ppuStack_138 = &PTR____CFConstantStringClassReference_110f76d78;
  ppuStack_130 = &PTR____CFConstantStringClassReference_110f76d98;
  ppuStack_128 = &PTR____CFConstantStringClassReference_110f76db8;
  ppuStack_120 = &PTR____CFConstantStringClassReference_110f76dd8;
  ppuStack_118 = &PTR____CFConstantStringClassReference_110f76df8;
  ppuStack_110 = &PTR____CFConstantStringClassReference_110f76e18;
  ppuStack_108 = &PTR____CFConstantStringClassReference_110f76e38;
  ppuStack_100 = &PTR____CFConstantStringClassReference_110f76e58;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110f76e78;
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110f76e98;
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110f76eb8;
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110f76ed8;
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110f76ef8;
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110f76f18;
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110f76f38;
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110f76f58;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110f76f78;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110f76f98;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110f76fb8;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110f76fd8;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110f76ff8;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110f77018;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110f77038;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110f77058;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110f77078;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110f77098;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110f770b8;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110f770d8;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110f770f8;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110f77118;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110f77138;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110f77158;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_1d0,0x33);
  func_0x000107c61180();
  uVar3 = uVar7;
  func_0x000107c4fc78();
  func_0x000107c61180();
  uVar1 = uRam00000001137f8f08;
  uRam00000001137f8f08 = uVar3;
  func_0x000107c61170(uVar1);
  puVar4 = puVar2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar4;
  }
  func_0x000107c60e78();
  ppuVar5 = &puStack_200;
  pcStack_1d8 = FUN_1003d7a80;
  puStack_1f8 = PTR_PTR_11270a260;
  puStack_200 = puVar4;
  puStack_1f0 = puVar2;
  uStack_1e8 = uVar7;
  puStack_1e0 = &stack0xfffffffffffffff0;
  func_0x000107c61154(&puStack_200,PTR_s_init_1125d9248);
  if (ppuVar5 != (undefined **)0x0) {
    puVar6 = (undefined1 *)ppuVar5;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)ppuVar5 + 8) = puVar6;
  }
  return (undefined *)ppuVar5;
}



/* Entry: 1003d7a80; end: 1003d7af3; -[SCGrapheneLensMetric2 init] */

undefined1 * FUN_1003d7a80(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270a260;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1003d7af4; end: 1003d7bbf; -[SCLensScheduleDataLogger initWithGraphene:grapheneLoggerV2:circumstanceEngine:] */

undefined1 *
FUN_1003d7af4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126f05c8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003d7bc0; end: 1003d7bc7; -[SCLensFetchTypeProvidingServices lensFetchTypeProvider] */

undefined8 FUN_1003d7bc0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1003d7bc8; end: 1003d7bcf; -[SCUserLocationServices userLocationPermissionsManager] */

undefined8 FUN_1003d7bc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1003d7bd0; end: 1003d7bdb; -[SCMixerMetadataFetcher fetchEventObservable] */

void FUN_1003d7bd0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x28,1);
  return;
}



/* Entry: 1003d7bdc; end: 1003d7c03; -[SCLensGtqRequestLocationProvider locationRequestObservable] */

void FUN_1003d7bdc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1003d7c04; end: 1003d7d43; -[SCMixerLogWorkflow initWithScheduleDataLogger:lensFetchTypeProvider:userLocationPermissionsManager:fetchEventsObservable:locationRequestObservable:] */

undefined1 *
FUN_1003d7c04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_58 = PTR_PTR_112701620;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c3c9a8(PTR_PTR_1126de3f0);
    func_0x000107c3c9b8(PTR_PTR_1126de3f0);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003d7d44; end: 1003d7dff; +[SCMixerLogWorkflow _subscribeOnFetchEvents:dataLogger:disposeBag:] */

void FUN_1003d7d44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_4);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  puStack_48 = &UNK_10aeab368;
  puStack_40 = &UNK_110c8e558;
  uStack_38 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c5c320(param_3,param_2,&puStack_58);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 1003d7e00; end: 1003d7f0f; +[SCMixerLogWorkflow _subscribeOnLocationRequestEvents:scheduleDataLogger:lensFetchTypeProvider:userLocationPermissionsManager:disposeBag:] */

void FUN_1003d7e00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  puStack_68 = &UNK_10aeabc9c;
  puStack_60 = &UNK_110c8e5e8;
  uStack_58 = param_4;
  uStack_50 = param_6;
  uStack_48 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_7);
  func_0x000107c5c320(param_3,param_2,&puStack_78);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 1003d7f10; end: 1003d7fd3; -[SCMixerBlizzardLogWorkflow initWithBlizzardLogger:fetchEventsObservable:] */

undefined1 *
FUN_1003d7f10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112701618;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c3c9a4(PTR_PTR_1126de3f8);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003d7fd4; end: 1003d808f; +[SCMixerBlizzardLogWorkflow _subscribeOnFetchEvents:blizzardLogger:disposeBag:] */

void FUN_1003d7fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_4);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  puStack_48 = &UNK_10aeaa9f0;
  puStack_40 = &UNK_110c8e558;
  uStack_38 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c5c320(param_3,param_2,&puStack_58);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 1003d8090; end: 1003d80e7;  */

/* WARNING: Possible PIC construction at 0x0001003d80a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003d80b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003d80c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003d80d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001003d80c8) */
/* WARNING: Removing unreachable block (ram,0x0001003d80b8) */
/* WARNING: Removing unreachable block (ram,0x0001003d80a8) */
/* WARNING: Removing unreachable block (ram,0x0001003d80d8) */

void FUN_1003d8090(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(param_2 + 0x20));
  return;
}



/* Entry: 1003d80e8; end: 1003d815b; -[SCMixerNamespaceServices initWithMixerNamespaceServiceProvider:] */

undefined1 * FUN_1003d80e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112701a18;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003d815c; end: 1003d81ff; -[SCLensScheduleNamespaceServices initWithScheduleServiceProvider:scheduleNetworkUpdateProvider:] */

undefined1 *
FUN_1003d815c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_11270a3a8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003d8200; end: 1003d8213; -[SCUcoStudySettingsServices studySettingsProvider] */

undefined8 FUN_1003d8200(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1003d8214; end: 1003d831f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003d8214(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  uVar2 = uStack_48;
  func_0x000107c3fa04(uStack_48);
  func_0x000107c61180();
  func_0x000107c61170(uStack_48);
  FUN_100083b20(&lStack_50);
  uVar5 = *(undefined8 *)(lStack_50 + _DAT_113092298);
  func_0x000107c615f0(uVar5);
  func_0x000107c61170(lStack_50);
  FUN_100083b20(&lStack_58);
  uVar4 = *(undefined8 *)(lStack_58 + _DAT_113077160);
  func_0x000107c615f0(uVar4);
  func_0x000107c61170(lStack_58);
  puVar3 = PTR_PTR_1126b8520;
  func_0x000107c610f8();
  func_0x000107c45dbc();
  func_0x000107c615e8(uVar2);
  func_0x000107c615e8(uVar5);
  func_0x000107c615e8(uVar4);
  if (puVar3 != (undefined *)0x0) {
    *param_1 = puVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003d8320);
  (*pcVar1)();
}



/* Entry: 1003d8320; end: 1003d8327;  */

void FUN_1003d8320(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  uVar1 = 0;
  FUN_1001deaf0(0);
  func_0x000107c610f8();
  FUN_1003d855c(uStack_28,uVar1);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1003d8328; end: 1003d837b;  */

void FUN_1003d8328(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  uVar1 = 0;
  FUN_1001deaf0(0);
  func_0x000107c610f8();
  FUN_1003d855c(uStack_28,uVar1);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1003d837c; end: 1003d8383;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003d837c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long *plVar6;
  long lStack_60;
  long lStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  plVar6 = &lStack_60;
  FUN_100083b20(&uStack_48);
  lVar2 = 0;
  FUN_1003d8448();
  lVar3 = lVar2;
  func_0x000107c610f8();
  lVar1 = _DAT_112dc66f0;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1003d8468();
  puStack_50 = puVar4;
  FUN_1000285a8(0x112dc66d8,&UNK_10d986630);
  func_0x000107c613fc();
  ppuVar5 = &puStack_50;
  FUN_10006c248();
  *(undefined ***)(lVar3 + lVar1) = ppuVar5;
  *(undefined8 *)(lVar3 + _DAT_112dc66e8) = uStack_48;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  *param_1 = plVar6;
  return;
}



/* Entry: 1003d8384; end: 1003d8447;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003d8384(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long *plVar6;
  long lStack_60;
  long lStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  plVar6 = &lStack_60;
  FUN_100083b20(&uStack_48);
  lVar2 = 0;
  FUN_1003d8448();
  lVar3 = lVar2;
  func_0x000107c610f8();
  lVar1 = _DAT_112dc66f0;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1003d8468();
  puStack_50 = puVar4;
  FUN_1000285a8(0x112dc66d8,&UNK_10d986630);
  func_0x000107c613fc();
  ppuVar5 = &puStack_50;
  FUN_10006c248();
  *(undefined ***)(lVar3 + lVar1) = ppuVar5;
  *(undefined8 *)(lVar3 + _DAT_112dc66e8) = uStack_48;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  *param_1 = plVar6;
  return;
}



/* Entry: 1003d8448; end: 1003d8467;  */

void FUN_1003d8448(void)

{
  func_0x000107c61168(&PTR_PTR_1127e8d10);
  return;
}



/* Entry: 1003d8468; end: 1003d855b;  */

undefined * FUN_1003d8468(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 uVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  
  puVar9 = *(undefined **)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar9 != (undefined *)0x0) {
    FUN_1000285a8(0x112d7e670,&UNK_10d9e4e40);
    puVar6 = puVar9;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined1 *)(param_1 + 0x30);
    do {
      uVar2 = *(ulong *)(puVar10 + -0x10);
      uVar3 = *(ulong *)(puVar10 + -8);
      uVar4 = *puVar10;
      func_0x000107c61434(uVar3);
      uVar7 = uVar2;
      uVar8 = uVar3;
      func_0x000100029284();
      if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1003d8558);
        (*pcVar5)();
      }
      uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar6 + uVar8 + 0x40) = *(ulong *)(puVar6 + uVar8 + 0x40) | 1L << (uVar7 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar7 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined1 *)(*(long *)(puVar6 + 0x38) + uVar7) = uVar4;
      if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1003d855c);
        (*pcVar5)();
      }
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      puVar9 = puVar9 + -1;
      puVar10 = puVar10 + 0x18;
    } while (puVar9 != (undefined *)0x0);
    func_0x000107c61574(puVar6);
  }
  return puVar6;
}



/* Entry: 1003d855c; end: 1003d85a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003d855c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113077160) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1003d85a8; end: 1003d869b; -[SCUcoStudySettingsProviderImpl initWithCircumstanceEngine:appStartExperimentReader:snapEditorTweaks:] */

undefined1 *
FUN_1003d85a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126e8058;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126b8520;
    func_0x000107c3cdac();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003d869c; end: 1003d8733; +[SCUcoStudySettingsProviderImpl _venueFilterIdWithCircumstanceEngine:] */

void FUN_1003d869c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126ae720;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  puStack_38 = &UNK_1053d5db0;
  puStack_30 = &UNK_110847450;
  uStack_28 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c3e4fc(puVar1,param_2,&puStack_48);
  func_0x000107c61180();
  func_0x000107c61170(uStack_28);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1003d8734; end: 1003d8767;  */

void FUN_1003d8734(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003d8768; end: 1003d880b; -[SCLensScheduleNamespaceSettings initWithCircumstanceEngine:ucoStudySettingsProvider:] */

undefined1 *
FUN_1003d8768(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1127015a8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003d880c; end: 1003d8d17; -[SCLensScheduleMetadataStoreProvider initWithScheduleV3ServiceProvider:namespaceSettings:studySettingsProvider:lensDataConfig:] */

undefined1 *
FUN_1003d880c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar1 = &uStack_80;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_78 = PTR_PTR_112701720;
  uStack_80 = param_1;
  func_0x000107c61154(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x88);
    *(long *)((long)puVar1 + 0x88) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x90);
    *(undefined8 *)((long)puVar1 + 0x90) = param_6;
    func_0x000107c61170(uVar2);
    lVar7 = param_4;
    func_0x000107c4b6c4();
    if (lVar7 == 0) {
      puVar3 = (undefined1 *)puVar1;
      func_0x000107c61158();
      func_0x000107c3b340();
      func_0x000107c61180();
      uVar2 = *(undefined8 *)((long)puVar1 + 8);
      *(undefined1 **)((long)puVar1 + 8) = puVar3;
      func_0x000107c61170(uVar2);
      puVar3 = (undefined1 *)puVar1;
      func_0x000107c61158();
      func_0x000107c3b330();
      func_0x000107c61180();
      lVar7 = *(long *)((long)puVar1 + 0x48);
      *(undefined1 **)((long)puVar1 + 0x48) = puVar3;
    }
    else {
      lVar7 = param_4;
      func_0x000107c5c824(param_4);
      func_0x000107c61180();
      puVar3 = (undefined1 *)puVar1;
      func_0x000107c61158();
      func_0x000107c3b33c();
      func_0x000107c61180();
      uVar2 = *(undefined8 *)((long)puVar1 + 8);
      *(undefined1 **)((long)puVar1 + 8) = puVar3;
      func_0x000107c61170(uVar2);
      puVar3 = (undefined1 *)puVar1;
      func_0x000107c61158();
      func_0x000107c3b334();
      func_0x000107c61180();
      uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
      *(undefined1 **)((long)puVar1 + 0x48) = puVar3;
      func_0x000107c61170(uVar2);
    }
    func_0x000107c61170(lVar7);
    puVar3 = (undefined1 *)puVar1;
    func_0x000107c61158();
    func_0x000107c3b340();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined1 **)((long)puVar1 + 0x10) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c3cb18(puVar1);
    puVar3 = (undefined1 *)puVar1;
    func_0x000107c61158();
    func_0x000107c3b340();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined1 **)((long)puVar1 + 0x18) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x000107c61158();
    func_0x000107c3b334();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined1 **)((long)puVar1 + 0x50) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x000107c61158();
    func_0x000107c3b334();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined1 **)((long)puVar1 + 0x58) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x000107c61158();
    func_0x000107c3b340();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined1 **)((long)puVar1 + 0x28) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x000107c61158();
    func_0x000107c3b334();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined1 **)((long)puVar1 + 0x68) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x000107c61158();
    func_0x000107c3b340();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined1 **)((long)puVar1 + 0x30) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x000107c61158();
    func_0x000107c3b334();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined1 **)((long)puVar1 + 0x70) = puVar3;
    func_0x000107c61170(uVar2);
    FUN_1003d9110();
    func_0x000107c61180();
    puVar4 = PTR_PTR_1126b6868;
    func_0x000107c610f4();
    func_0x000107c47914();
    puVar3 = (undefined1 *)puVar1;
    func_0x000107c61158();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar4;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61180();
    func_0x000107c3b338();
    func_0x000107c61180();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined1 **)((long)puVar1 + 0x20) = puVar3;
    func_0x000107c61170(uVar6);
    func_0x000107c61170(puVar5);
    puVar3 = (undefined1 *)puVar1;
    func_0x000107c61158();
    func_0x000107c3b334();
    func_0x000107c61180();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined1 **)((long)puVar1 + 0x60) = puVar3;
    func_0x000107c61170(uVar6);
    puVar3 = (undefined1 *)puVar1;
    func_0x000107c61158();
    func_0x000107c3b340();
    func_0x000107c61180();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined1 **)((long)puVar1 + 0x38) = puVar3;
    func_0x000107c61170(uVar6);
    puVar3 = (undefined1 *)puVar1;
    func_0x000107c61158();
    func_0x000107c3b334();
    func_0x000107c61180();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined1 **)((long)puVar1 + 0x78) = puVar3;
    func_0x000107c61170(uVar6);
    puVar3 = (undefined1 *)puVar1;
    func_0x000107c61158();
    func_0x000107c3b340();
    func_0x000107c61180();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined1 **)((long)puVar1 + 0x40) = puVar3;
    func_0x000107c61170(uVar6);
    puVar3 = (undefined1 *)puVar1;
    func_0x000107c61158();
    func_0x000107c3b334();
    func_0x000107c61180();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined1 **)((long)puVar1 + 0x80) = puVar3;
    func_0x000107c61170(uVar6);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return (undefined1 *)puVar1;
  }
  func_0x000107c60e78();
  return (undefined1 *)0x0;
}



/* Entry: 1003d8d18; end: 1003d8d1f; -[SCLensScheduleNamespaceSettings liveCameraNamespaceType] */

undefined8 FUN_1003d8d18(void)

{
  return 0;
}



/* Entry: 1003d8d20; end: 1003d8dbf; +[SCLensScheduleMetadataStoreProvider _createScheduleServiceWithScheduleV3ServiceProvider:studySettingsProvider:serviceType:] */

void FUN_1003d8d20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x100743bd8;
  puStack_48 = &UNK_110c8f678;
  uStack_40 = param_4;
  uStack_38 = param_5;
  func_0x000107c61174(param_4);
  func_0x000107c436a8(param_3,param_2,&puStack_60);
  func_0x000107c61180();
  func_0x000107c61170(uStack_40);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1003d8dc0; end: 1003d8e8b; -[SCLazy flatMap:] */

void FUN_1003d8dc0(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  func_0x000107c61174(param_3);
  if (param_3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x000107c611ec(param_1 + 0x18);
    cVar1 = *(char *)(param_1 + 0x1c);
    func_0x000107c611f0(param_1 + 0x18);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c610f4(PTR_PTR_1126ae720);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_100743ac0;
    puStack_48 = &UNK_110cb7910;
    func_0x000107c61174(param_3);
    lStack_40 = param_1;
    lStack_38 = param_3;
    func_0x000107c46ea8(puVar2,param_2,&puStack_60,cVar1 != '\0');
    func_0x000107c61170(lStack_38);
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1003d8e8c; end: 1003d8f4f; +[SCLensScheduleMetadataStoreProvider _createScheduleMetadataStoreCreatorWithScheduleService:lensDataConfig:] */

void FUN_1003d8e8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puVar1 = PTR_PTR_1126de4d8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_100bcd8fc;
  puStack_48 = &UNK_110c8f708;
  uStack_40 = param_3;
  uStack_38 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c40d18(puVar1,param_2,&puStack_60);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1003d8f50; end: 1003d8f97; +[SCLensFilteredMetadataStoreBlockCreator creatorWithCreationBlock:] */

void FUN_1003d8f50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c610f4(param_1);
  func_0x000107c4624c();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1003d8f98; end: 1003d900f; -[SCLensFilteredMetadataStoreBlockCreator initWithCreationBlock:] */

undefined1 * FUN_1003d8f98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112701708;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c61184();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003d9010; end: 1003d9033; -[SCLensScheduleMetadataStoreProvider _ucoServiceTypeFromNamespaceSettings:] */

undefined8 FUN_1003d9010(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x88);
  func_0x000107c5d15c();
  uVar1 = 2;
  if (lVar2 != 0) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 1003d9034; end: 1003d903b; -[SCLensScheduleNamespaceSettings ucoNamespaceType] */

void FUN_1003d9034(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c150010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_scheduleNamespaceType_112631a20);
  return;
}



/* Entry: 1003d903c; end: 1003d9043; -[SCUcoStudySettingsProviderImpl scheduleNamespaceType] */

undefined8 FUN_1003d903c(void)

{
  return 0;
}



/* Entry: 1003d9044; end: 1003d910f; +[SCLensScheduleMetadataStoreProvider _createScheduleNamespaceFilteredMetadataStoreCreatorWithScheduleService:lensDataConfig:filteringByApplicableContext:] */

void FUN_1003d9044(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puVar1 = PTR_PTR_1126de4d8;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10042a348;
  puStack_50 = &UNK_110c8f798;
  uStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_5;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c40d18(puVar1,param_2,&puStack_68);
  func_0x000107c61180();
  func_0x000107c61170(uStack_40);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1003d9110; end: 1003d911b;  */

undefined ** FUN_1003d9110(void)

{
  return &PTR____CFConstantStringClassReference_110f72c18;
}



/* Entry: 1003d911c; end: 1003d91c7; -[SCLensScheduleNamespace initWithNamespaceId:] */

undefined8 FUN_1003d911c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c4adac();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x000107c5c184(param_3,param_2,&PTR____CFConstantStringClassReference_110db2d98,
                        &PTR____CFConstantStringClassReference_110daafd8);
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c4adac();
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      func_0x000107c45da0(param_1,param_2,param_3);
      func_0x000107c61174();
      uVar3 = param_1;
    }
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return uVar3;
}



/* Entry: 1003d91c8; end: 1003d925f; -[SCLensScheduleNamespace initWithCheckedNamespaceId:] */

undefined1 * FUN_1003d91c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_11270a398;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    func_0x000107c61174(uVar3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003d9260; end: 1003d931f; +[SCLensScheduleMetadataStoreProvider _createScheduleServiceWithScheduleV3ServiceProvider:lensScheduleNamespaces:studySettingsProvider:] */

void FUN_1003d9260(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  puStack_50 = &UNK_10aeb8ba4;
  puStack_48 = &UNK_110c8f6a8;
  uStack_40 = param_4;
  uStack_38 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c436a8(param_3,param_2,&puStack_60);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1003d9320; end: 1003d9347; -[SCLensScheduleMetadataStoreProvider replyCameraNoParentingScheduleService] */

void FUN_1003d9320(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1003d9348; end: 1003d936f; -[SCLensScheduleMetadataStoreProvider replyCameraNoParentingScheduleMetadataStoreCreator] */

void FUN_1003d9348(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1003d9370; end: 1003d9397; -[SCLensScheduleMetadataStoreProvider liveCameraScheduleService] */

void FUN_1003d9370(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1003d9398; end: 1003d93bf; -[SCLensScheduleMetadataStoreProvider liveCameraScheduleMetadataStoreCreator] */

void FUN_1003d9398(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1003d93c0; end: 1003d93e7; -[SCLensScheduleMetadataStoreProvider ucoScheduleService] */

void FUN_1003d93c0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1003d93e8; end: 1003d940f; -[SCLensScheduleMetadataStoreProvider ucoMetadataStoreCreator] */

void FUN_1003d93e8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1003d9410; end: 1003d9437; -[SCLensScheduleMetadataStoreProvider directorModeScheduleService] */

void FUN_1003d9410(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1003d9438; end: 1003d945f; -[SCLensScheduleMetadataStoreProvider directorModeMetadataStoreCreator] */

void FUN_1003d9438(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1003d9460; end: 1003d9487; -[SCLensScheduleMetadataStoreProvider cheeriosScheduleService] */

void FUN_1003d9460(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1003d9488; end: 1003d94af; -[SCLensScheduleMetadataStoreProvider cheeriosMetadataStoreCreator] */

void FUN_1003d9488(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1003d94b0; end: 1003d94d7; -[SCLensScheduleMetadataStoreProvider cameraRollScheduleService] */

void FUN_1003d94b0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1003d94d8; end: 1003d94ff; -[SCLensScheduleMetadataStoreProvider cameraRollMetadataStoreCreator] */

void FUN_1003d94d8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1003d9500; end: 1003d9527; -[SCLensScheduleMetadataStoreProvider newportDataStoreCreator] */

void FUN_1003d9500(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1003d9528; end: 1003d954f; -[SCLensScheduleMetadataStoreProvider callingCarouselMetadataStoreCreator] */

void FUN_1003d9528(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1003d9550; end: 1003d989f; -[SCLensScheduleMetadataStoreServices initWithLiveCameraScheduleV3Service:liveCameraScheduleMetadataStoreCreator:replyCameraScheduleService:replyCameraScheduleMetadataStoreCreator:ucoScheduleService:ucoScheduleMetadataStoreCreator:directorModeScheduleService:directorModeScheduleMetadataStoreCreator:cheeriosScheduleService:cheeriosScheduleMetadataStoreCreator:cameraRollScheduleService:cameraRollScheduleMetadataStoreCreator:sponsoredLensScheduleService:newportMetadataStoreCreator:callingCarouselMetadataStoreCreator:] */

undefined8 *
FUN_1003d9550(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  puStack_70 = PTR_PTR_112701ee0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[5];
    puVar1[5] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[8];
    puVar1[8] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[4];
    puVar1[4] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[6];
    puVar1[6] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[7];
    puVar1[7] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[9];
    puVar1[9] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[10];
    puVar1[10] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1003d98a0; end: 1003d98a7; -[SCLensMetadataFetchingServices lensMetadataFetcher] */

undefined8 FUN_1003d98a0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1003d98a8; end: 1003d991b; -[SCLensMetadataRetrievingServices initWithCentralizedLensMetadataStoreProvider:] */

undefined1 * FUN_1003d98a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1127058a8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1003d991c; end: 1003d994b; -[SCLensGtqRequestLocationProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001003d9934: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001003d9938) */

void FUN_1003d991c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1003d994c; end: 1003d999b; -[SCPublishSubject dealloc] */

void FUN_1003d994c(ulong param_1)

{
  ulong uVar1;
  ulong uStack_30;
  undefined *puStack_28;
  
  uVar1 = param_1;
  func_0x000107c49b78();
  if ((uVar1 & 1) == 0) {
    func_0x000107c3fedc(param_1);
  }
  puStack_28 = PTR_PTR_11270e5c0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1003d999c; end: 1003d99cb; -[SCPublishSubject complete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003d999c(long param_1,undefined8 param_2)

{
  func_0x000107c555c0(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112796808),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 1003d99cc; end: 1003d99db; -[SCPublishSubject setIsComplete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003d99cc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112796800) = param_3;
  return;
}



/* Entry: 1003d99dc; end: 1003d9a03; -[SCAssertingObserver complete] */

void FUN_1003d99dc(long param_1)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  
  pcVar1 = (char *)(param_1 + 0x10);
  do {
    if (*pcVar1 != '\0') {
      ClearExclusiveLocal();
      break;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
    if (bVar3) {
      *pcVar1 = '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 1003d9a04; end: 1003d9a83; -[SCMulticastObserver complete] */

void FUN_1003d9a04(void)

{
  long lVar1;
  long lVar2;
  long lStack_48;
  long lStack_40;
  
  func_0x000107c3c044(&lStack_48);
  for (lVar2 = lStack_48; lVar2 != lStack_40; lVar2 = lVar2 + 8) {
    lVar1 = lVar2;
    func_0x000107c61148(lVar2);
    func_0x000107c3fedc();
    func_0x000107c61170(lVar1);
  }
  FUN_10008a518(&lStack_48);
  return;
}


