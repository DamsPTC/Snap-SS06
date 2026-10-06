/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106bf96dc; end: 106bf9833; -[SCAppInstalledInfoProvider _logAppInstallInfoBlizzard:said:idfv:idfa:] */

void FUN_106bf96dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106bf9834; end: 106bf986b;  */

void FUN_106bf9834(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be57e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106bf986c; end: 106bf9957; -[SCAppInstalledInfoProvider _logResultsInBlizzard:said:idfv:idfa:] */

void FUN_106bf986c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a1dc0();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf604e0(PTR_PTR_1126afec0);
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c1b7850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_setLastCanOpenURLUploadingTimest_11264b838,
             *(undefined8 *)(param_1 + 0x48));
  return;
}



/* Entry: 106bf9958; end: 106bf995f; -[SCAppInstalledInfoProvider lastCOUploadingTimestampInSec] */

undefined8 FUN_106bf9958(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106bf9960; end: 106bf998f; -[SCAppInstalledInfoProvider setLastCOUploadingTimestampInSec:] */

void FUN_106bf9960(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106bf9990; end: 106bf9a13; -[SCAppInstalledInfoProvider .cxx_destruct] */

void FUN_106bf9990(long param_1)

{
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



/* Entry: 106bf9a14; end: 106bf9a3b; -[SCAdNetworkUserAgent userAgent] */

void FUN_106bf9a14(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106bf9a3c; end: 106bf9a47; -[SCAdNetworkUserAgent .cxx_destruct] */

void FUN_106bf9a3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bf9a48; end: 106bf9abb; -[SCAdPreferencesProviderImpl initWithFeatureSettingsService:] */

undefined1 * FUN_106bf9a48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f5ad8;
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



/* Entry: 106bf9abc; end: 106bf9bab; -[SCAdPreferencesProviderImpl retrieveAdsPreferences] */

void FUN_106bf9abc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126c3618;
  _objc_alloc(PTR_PTR_1126c3618);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf0ece0();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf9de60();
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c26d200();
  uVar8 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf8acc0();
  func_0x00010bff5140(puVar1,param_2,uVar3,uVar5,uVar7,uVar9);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106bf9bac; end: 106bf9bb7; -[SCAdPreferencesProviderImpl .cxx_destruct] */

void FUN_106bf9bac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bf9bb8; end: 106bf9c5b; -[SCAdSnapTokenManager initWithSnapTokenProvider:initMetricsManager:] */

undefined1 *
FUN_106bf9bb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f5ae0;
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



/* Entry: 106bf9c5c; end: 106bf9c93; -[SCAdSnapTokenManager fetchAccessTokenWithPrimaryDataSource:successBlock:failureBlock:] */

void FUN_106bf9c5c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR___dispatch_main_q_11034be20;
  func_0x00010bfa4960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106bf9c94; end: 106bf9e5f; -[SCAdSnapTokenManager fetchAccessTokenWithPrimaryDataSource:successQueue:failureQueue:successBlock:failureBlock:] */

void FUN_106bf9c94(undefined8 param_1,long param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [8];
  undefined1 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010bf604e0(PTR_PTR_1126afec0);
  _objc_initWeak(auStack_68,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106bf9e60;
  puStack_90 = &UNK_110968120;
  _objc_copyWeak(auStack_80,auStack_68);
  uStack_78 = param_1;
  uStack_70 = param_4;
  _objc_retain(param_7);
  uStack_88 = param_7;
  _objc_copyWeak(auStack_b8,auStack_68);
  uStack_b0 = param_4;
  _objc_retain(param_8);
  func_0x00010bfa4900(uVar1);
  _objc_release(uVar1);
  _objc_release(param_8);
  _objc_destroyWeak(auStack_b8);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 106bf9e60; end: 106bf9efb;  */

void FUN_106bf9e60(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_2 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c08fa60(param_3);
  func_0x00010bf604e0(PTR_PTR_1126afec0);
  func_0x00010be30780(param_1 - *(double *)(param_2 + 0x30),lVar1);
  _objc_release(lVar1);
  lVar1 = *(long *)(param_2 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106bf9efc; end: 106bf9f63;  */

void FUN_106bf9efc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be30760();
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106bf9f64; end: 106bf9f77; -[SCAdSnapTokenManager _handleSnapTokenFetchSuccess:isPrimary:snapTokenFetchingLatencyInSec:] */

void FUN_106bf9f64(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0afed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x10),PTR_s_logSnapTokenGenerationLatencyInS_1126099c0,
               param_4);
    return;
  }
  return;
}



/* Entry: 106bf9f78; end: 106bf9f8b; -[SCAdSnapTokenManager _handleSnapTokenFetchFailure:isPrimary:] */

void FUN_106bf9f78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0afeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_logSnapTokenFailedToGenerate_err_1126099b8,
             param_4,param_3);
  return;
}



/* Entry: 106bf9f8c; end: 106bf9fbb; -[SCAdSnapTokenManager .cxx_destruct] */

void FUN_106bf9f8c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bf9fbc; end: 106bf9fdb; -[SCSnapchatApplicationInfo getApplicationType] */

undefined8 FUN_106bf9fbc(int param_1)

{
  undefined8 uVar1;
  
  func_0x000100150168();
  uVar1 = 1;
  if (param_1 != 0) {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 106bf9fdc; end: 106bf9fe3; -[SCSnapchatApplicationInfo getApplicationDesignType] */

undefined8 FUN_106bf9fdc(void)

{
  return 0;
}



/* Entry: 106bf9fe4; end: 106bf9fef; -[SCFeatureSettingsService isAudienceMatchOptOut] */

void FUN_106bf9fe4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e78938);
  return;
}



/* Entry: 106bf9ff0; end: 106bf9ffb; -[SCFeatureSettingsService audienceMatchOptOutServerParam] */

undefined ** FUN_106bf9ff0(void)

{
  return &PTR____CFConstantStringClassReference_110e78938;
}



/* Entry: 106bf9ffc; end: 106bfa00b; -[SCFeatureSettingsService setAudienceMatchOptOut:] */

void FUN_106bf9ffc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e78938,param_3);
  return;
}



/* Entry: 106bfa00c; end: 106bfa013; -[SCFeatureSettingsService audience_match_opt_out_client_value:] */

undefined * FUN_106bfa00c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106bfa014; end: 106bfa01b; -[SCFeatureSettingsService audience_match_opt_out_server_value:] */

void FUN_106bfa014(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106bfa01c; end: 106bfa02b; -[SCFeatureSettingsService audienceMatchOptOut] */

void FUN_106bfa01c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e78938,0);
  return;
}



/* Entry: 106bfa02c; end: 106bfa037; -[SCFeatureSettingsService isExternalActivityMatchOptOut] */

void FUN_106bfa02c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e78958);
  return;
}



/* Entry: 106bfa038; end: 106bfa043; -[SCFeatureSettingsService externalActivityMatchOptOutServerParam] */

undefined ** FUN_106bfa038(void)

{
  return &PTR____CFConstantStringClassReference_110e78958;
}



/* Entry: 106bfa044; end: 106bfa053; -[SCFeatureSettingsService setExternalActivityMatchOptOut:] */

void FUN_106bfa044(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e78958,param_3);
  return;
}



/* Entry: 106bfa054; end: 106bfa05b; -[SCFeatureSettingsService external_activity_match_opt_out_client_value:] */

undefined * FUN_106bfa054(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106bfa05c; end: 106bfa063; -[SCFeatureSettingsService external_activity_match_opt_out_server_value:] */

void FUN_106bfa05c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106bfa064; end: 106bfa073; -[SCFeatureSettingsService externalActivityMatchOptOut] */

void FUN_106bfa064(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e78958,0);
  return;
}



/* Entry: 106bfa074; end: 106bfa07f; -[SCFeatureSettingsService isThirdPartyAdNetworkOptOut] */

void FUN_106bfa074(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e78978);
  return;
}



/* Entry: 106bfa080; end: 106bfa08b; -[SCFeatureSettingsService thirdPartyAdNetworkOptOutServerParam] */

undefined ** FUN_106bfa080(void)

{
  return &PTR____CFConstantStringClassReference_110e78978;
}



/* Entry: 106bfa08c; end: 106bfa09b; -[SCFeatureSettingsService setThirdPartyAdNetworkOptOut:] */

void FUN_106bfa08c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e78978,param_3);
  return;
}



/* Entry: 106bfa09c; end: 106bfa0a3; -[SCFeatureSettingsService third_party_ad_network_opt_out_client_value:] */

undefined * FUN_106bfa09c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 106bfa0a4; end: 106bfa0ab; -[SCFeatureSettingsService third_party_ad_network_opt_out_server_value:] */

void FUN_106bfa0a4(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106bfa0ac; end: 106bfa0bb; -[SCFeatureSettingsService thirdPartyAdNetworkOptOut] */

void FUN_106bfa0ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110e78978,0);
  return;
}



/* Entry: 106bfa0bc; end: 106bfa0c7; -[SCFeatureSettingsService hasSponsoredSnapEUModalOptInStatus] */

void FUN_106bfa0bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e78998);
  return;
}



/* Entry: 106bfa0c8; end: 106bfa0d3; -[SCFeatureSettingsService sponsoredSnapEUModalOptInStatusServerParam] */

undefined ** FUN_106bfa0c8(void)

{
  return &PTR____CFConstantStringClassReference_110e78998;
}



/* Entry: 106bfa0d4; end: 106bfa0e3; -[SCFeatureSettingsService setSponsoredSnapEUModalOptInStatus:] */

void FUN_106bfa0d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e78998,param_3);
  return;
}



/* Entry: 106bfa0e4; end: 106bfa0eb; -[SCFeatureSettingsService sponsored_snap_eu_modal_opt_in_status_client_value:] */

void FUN_106bfa0e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 106bfa0ec; end: 106bfa0f3; -[SCFeatureSettingsService sponsored_snap_eu_modal_opt_in_status_server_value:] */

void FUN_106bfa0ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 106bfa0f4; end: 106bfa103; -[SCFeatureSettingsService sponsoredSnapEUModalOptInStatus] */

void FUN_106bfa0f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e78998,0);
  return;
}



/* Entry: 106bfa104; end: 106bfa10f; -[SCFeatureSettingsService hasSponsoredSnapEUModalLastShownTimestampMs] */

void FUN_106bfa104(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e789b8);
  return;
}



/* Entry: 106bfa110; end: 106bfa11b; -[SCFeatureSettingsService sponsoredSnapEUModalLastShownTimestampMsServerParam] */

undefined ** FUN_106bfa110(void)

{
  return &PTR____CFConstantStringClassReference_110e789b8;
}



/* Entry: 106bfa11c; end: 106bfa12b; -[SCFeatureSettingsService setSponsoredSnapEUModalLastShownTimestampMs:] */

void FUN_106bfa11c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e789b8,param_3);
  return;
}



/* Entry: 106bfa12c; end: 106bfa133; -[SCFeatureSettingsService sponsored_snap_eu_modal_last_shown_timestamp_ms_client_value:] */

void FUN_106bfa12c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 106bfa134; end: 106bfa13b; -[SCFeatureSettingsService sponsored_snap_eu_modal_last_shown_timestamp_ms_server_value:] */

void FUN_106bfa134(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 106bfa13c; end: 106bfa14b; -[SCFeatureSettingsService sponsoredSnapEUModalLastShownTimestampMs] */

void FUN_106bfa13c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e789b8,0);
  return;
}



/* Entry: 106bfa14c; end: 106bfa157; -[SCFeatureSettingsService hasSponsoredSnapEUModalShownCount] */

void FUN_106bfa14c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e789d8);
  return;
}



/* Entry: 106bfa158; end: 106bfa163; -[SCFeatureSettingsService sponsoredSnapEUModalShownCountServerParam] */

undefined ** FUN_106bfa158(void)

{
  return &PTR____CFConstantStringClassReference_110e789d8;
}



/* Entry: 106bfa164; end: 106bfa173; -[SCFeatureSettingsService setSponsoredSnapEUModalShownCount:] */

void FUN_106bfa164(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110e789d8,param_3);
  return;
}



/* Entry: 106bfa174; end: 106bfa17b; -[SCFeatureSettingsService sponsored_snap_eu_modal_shown_count_client_value:] */

void FUN_106bfa174(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 106bfa17c; end: 106bfa183; -[SCFeatureSettingsService sponsored_snap_eu_modal_shown_count_server_value:] */

void FUN_106bfa17c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 106bfa184; end: 106bfa193; -[SCFeatureSettingsService sponsoredSnapEUModalShownCount] */

void FUN_106bfa184(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110e789d8,0);
  return;
}



/* Entry: 106bfa194; end: 106bfa2fb; -[SCOneTapLoginRegistryJobSchedulerEntryPoint begin] */

void FUN_106bfa194(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar5 = param_1;
  FUN_106bfa2fc();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c293780();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c073d80();
  if ((int)uVar2 == 0) {
    uVar2 = param_1;
    FUN_106bfa2fc();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c293780();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c073c40();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar5);
    if ((int)uVar4 == 0) {
      func_0x00010bec6100(param_1);
      goto LAB_106bfa2c8;
    }
  }
  else {
    _objc_release(uVar1);
    _objc_release(uVar5);
  }
  uVar5 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106bfa320;
  puStack_58 = &UNK_1108434b0;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010007380c(uVar5,&puStack_70);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_50);
LAB_106bfa2c8:
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106bfa2fc; end: 106bfa31f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bfa2fc(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11275aaac);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bfa320; end: 106bfa34b;  */

void FUN_106bfa320(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2bc00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106bfa34c; end: 106bfa49f; -[SCOneTapLoginRegistryJobSchedulerEntryPoint _submitJob] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bfa34c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126b7228;
  _objc_opt_new(PTR_PTR_1126b7228);
  func_0x00010c1b6840();
  func_0x00010c198180(puVar1,param_2,1);
  func_0x00010c1b6780(puVar1,param_2,0);
  puVar2 = PTR_PTR_1126b7240;
  _objc_opt_new(PTR_PTR_1126b7240);
  func_0x00010c1cc140();
  puVar3 = puVar2;
  func_0x00010bf06200(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010bf06200(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar3);
  func_0x00010c20bfc0(puVar2,param_2,0);
  func_0x00010c168b40(puVar2,param_2,0);
  func_0x00010c1b66e0(puVar1,param_2,puVar2);
  param_1 = param_1 + _DAT_11275aaa4;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c085740();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f200();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106bfa4a0; end: 106bfa52f; -[SCOneTapLoginRegistryJobSchedulerEntryPoint _handleLoginOrRegistration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bfa4a0(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = param_1;
  func_0x00010be6dfe0();
  if ((uVar1 & 1) != 0) {
    return;
  }
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + (long)_DAT_11275aab0;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c08d7c0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24f800();
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106bfa530; end: 106bfa733; -[SCOneTapLoginRegistryJobSchedulerEntryPoint _optUserInto1TLIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106bfa530(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = param_1 + _DAT_11275aaa8;
  _objc_loadWeakRetained();
  lVar6 = lVar1;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11275aaac;
  _objc_loadWeakRetained(lVar1);
  lVar6 = lVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x000106bfe1dc(lVar2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar6 = 0;
  }
  else {
    func_0x000106bfe15c(lVar2,lVar3);
    lVar6 = lVar1;
    func_0x00010bf002e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    _objc_release(lVar4);
    _objc_release(lVar6);
    lVar4 = lVar1;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf1f3c0();
    _objc_release(lVar5);
    _objc_release(lVar4);
    param_1 = param_1 + _DAT_11275aab0;
    _objc_loadWeakRetained(param_1);
    lVar4 = param_1;
    func_0x00010c08d7c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(param_1);
    if ((int)lVar6 == 0) {
      func_0x00010c0ebf40(lVar5);
    }
    else {
      func_0x00010c0ebd80();
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010bfa4d60(lVar5);
    }
    _objc_release(lVar5);
  }
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  return lVar6;
}



/* Entry: 106bfa734; end: 106bfa737;  */

void FUN_106bfa734(void)

{
  return;
}



/* Entry: 106bfa738; end: 106bfa793; -[SCOneTapLoginRegistryJobSchedulerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bfa738(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275aaa8);
  _objc_destroyWeak(param_1 + _DAT_11275aab0);
  _objc_destroyWeak(param_1 + _DAT_11275aaa4);
  _objc_destroyWeak(param_1 + _DAT_11275aab4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275aaac);
  return;
}



/* Entry: 106bfa794; end: 106bfa887; -[SCOneTapLoginRegistryServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bfa794(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11275aab8);
  *(undefined **)(param_1 + _DAT_11275aab8) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126d14b0;
  _objc_alloc(PTR_PTR_1126d14b0);
  func_0x00010c021f00();
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106bfa888; end: 106bfa8c7;  */

void FUN_106bfa888(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be6cca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106bfa8c8; end: 106bfaa1b; -[SCOneTapLoginRegistryServiceProvider end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bfa8c8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lStack_60;
  undefined *puStack_58;
  
  lVar10 = (long)_DAT_11275aab8;
  uVar1 = *(ulong *)(param_1 + lVar10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06fd40();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = param_1 + _DAT_11275aabc;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c0f5400();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1 + _DAT_11275aac0;
    _objc_loadWeakRetained(lVar6);
    lVar7 = lVar6;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d840(lVar5);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  uVar9 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c269d40(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2563c0();
  _objc_release(uVar9);
  puStack_58 = PTR_PTR_1126f5ae8;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bfaa1c; end: 106bfad73; -[SCOneTapLoginRegistryServiceProvider _oneTapLoginRegistry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bfaa1c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
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
  long lVar21;
  long lVar22;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_initWeak(auStack_70,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_78,auStack_70);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d14b8;
  _objc_alloc();
  lVar3 = param_1 + _DAT_11275aac0;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11275aac4;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11275aac8;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_11275aacc;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c0e86e0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = (long)_DAT_11275aad0;
  lVar13 = param_1 + lVar22;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010c1256a0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + lVar22;
  _objc_loadWeakRetained();
  lVar15 = lVar22;
  func_0x00010bf3e1a0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_11275aad4;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010c069440();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_11275aad8;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR_PTR_1126d14c0;
  _objc_alloc();
  param_1 = param_1 + _DAT_11275aadc;
  _objc_loadWeakRetained(param_1);
  lVar21 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffe1e0();
  func_0x00010c05b880();
  _objc_release(puVar20);
  _objc_release(lVar21);
  _objc_release(param_1);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar22);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106bfad74; end: 106bfadb3;  */

void FUN_106bfad74(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdd46e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106bfadb4; end: 106bfaf9b; -[SCOneTapLoginRegistryServiceProvider _bitmojiFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bfadb4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d14c8;
  _objc_alloc(PTR_PTR_1126d14c8);
  lVar3 = param_1 + _DAT_11275aac0;
  _objc_loadWeakRetained(lVar3);
  lVar4 = lVar3;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11275aae0;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_11275aae4;
  lVar7 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010c15ada0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar9;
  _objc_loadWeakRetained(param_1);
  lVar9 = param_1;
  func_0x00010c15afc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05cfc0(puVar2);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106bfaf9c; end: 106bfafdb;  */

void FUN_106bfaf9c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5aa40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106bfafdc; end: 106bfb0ff; -[SCOneTapLoginRegistryServiceProvider _logger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bfafdc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126af498;
  _objc_alloc(PTR_PTR_1126af498);
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_11275aad8;
    _objc_loadWeakRetained(lVar6);
  }
  lVar2 = lVar6;
  func_0x00010c293fc0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_11275aae8;
    _objc_loadWeakRetained(lVar7);
  }
  lVar3 = lVar7;
  func_0x00010bfcdfa0(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = 0;
  if (param_1 != 0) {
    lVar4 = param_1 + _DAT_11275aaec;
    _objc_loadWeakRetained(lVar4);
  }
  lVar5 = lVar4;
  func_0x00010bf70800(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05f280(puVar1,param_2,lVar2,lVar3,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106bfb100; end: 106bfb1cb; -[SCOneTapLoginRegistryServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106bfb100(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275aabc);
  _objc_destroyWeak(param_1 + _DAT_11275aad4);
  _objc_destroyWeak(param_1 + _DAT_11275aad0);
  _objc_destroyWeak(param_1 + _DAT_11275aae0);
  _objc_destroyWeak(param_1 + _DAT_11275aae4);
  _objc_destroyWeak(param_1 + _DAT_11275aaec);
  _objc_destroyWeak(param_1 + _DAT_11275aad8);
  _objc_destroyWeak(param_1 + _DAT_11275aacc);
  _objc_destroyWeak(param_1 + _DAT_11275aae8);
  _objc_destroyWeak(param_1 + _DAT_11275aadc);
  _objc_destroyWeak(param_1 + _DAT_11275aac4);
  _objc_destroyWeak(param_1 + _DAT_11275aac8);
  _objc_destroyWeak(param_1 + _DAT_11275aac0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275aab8,0);
  return;
}



/* Entry: 106bfb1cc; end: 106bfb387; -[SCOneTapLoginRegistryExperimentHelper initWithCircumstanceEngine:] */

undefined8 * FUN_106bfb1cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126f5af0;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    uVar2 = puVar1[1];
    func_0x00010c0b84a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar7);
    lVar3 = puVar1[2];
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf04a80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar4 = lVar5;
    func_0x00010c08fa60();
    if (lVar4 != 0) {
      puVar6 = PTR_PTR_1126c36b0;
      _objc_alloc();
      func_0x00010c008360();
      _objc_retain(0);
      uVar2 = puVar1[3];
      puVar1[3] = puVar6;
      _objc_release(uVar2);
      _objc_release(0);
    }
    if (puVar1[3] == 0) {
      puVar6 = PTR_PTR_1126c36b0;
      func_0x00010c0cb140();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = puVar1[3];
      puVar1[3] = puVar6;
      _objc_release(uVar2);
      func_0x00010c20c0c0(puVar1[3]);
      func_0x00010c216c60(puVar1[3]);
      func_0x00010c212d80(puVar1[3]);
      func_0x00010c1fefe0(puVar1[3]);
      func_0x00010c1b5340(puVar1[3]);
      func_0x00010c17d820(puVar1[3]);
    }
    _objc_release(lVar5);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106bfb388; end: 106bfb38f; -[SCOneTapLoginRegistryExperimentHelper tokenTtlSeconds] */

void FUN_106bfb388(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2732d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_tokenTtlSeconds_11267a6d8);
  return;
}



/* Entry: 106bfb390; end: 106bfb397; -[SCOneTapLoginRegistryExperimentHelper tenuredThresholdSeconds] */

void FUN_106bfb390(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_tenuredThresholdSeconds_112678710);
  return;
}



/* Entry: 106bfb398; end: 106bfb39f; -[SCOneTapLoginRegistryExperimentHelper sharedDeviceThreshold] */

void FUN_106bfb398(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22b970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_sharedDeviceThreshold_112668880);
  return;
}



/* Entry: 106bfb3a0; end: 106bfb4bf; -[SCOneTapLoginRegistryExperimentHelper configResult] */

void FUN_106bfb3a0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  _objc_opt_respondsToSelector(uVar1,PTR_s_configResult_1125af238);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((uVar1 & 1) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf46240(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c25df20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00();
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)puVar4 == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010bf46240(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf9c4e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c078c00();
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar3);
      _objc_release(uVar2);
      if (((ulong)puVar7 & 1) == 0) {
        func_0x00010bf46240(*(undefined8 *)(param_1 + 0x10));
        _objc_retainAutoreleasedReturnValue();
        goto LAB_106bfb498;
      }
    }
    else {
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
  }
  _objc_alloc(PTR_PTR_1126b6c60);
  func_0x00010c04e9c0();
LAB_106bfb498:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106bfb4c0; end: 106bfb4f3; -[SCOneTapLoginRegistryExperimentHelper enableCloudPersistent] */

bool FUN_106bfb4c0(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf9d480(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf3e320(uVar1);
  return (int)uVar1 == 2;
}



/* Entry: 106bfb4f4; end: 106bfb513; -[SCOneTapLoginRegistryExperimentHelper enableCloudDryMode] */

bool FUN_106bfb4f4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf3e320(uVar1);
  return (int)uVar1 == 1;
}



/* Entry: 106bfb514; end: 106bfb55b; -[SCOneTapLoginRegistryExperimentHelper .cxx_destruct] */

void FUN_106bfb514(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bfb55c; end: 106bfb67f; -[SCOneTapLoginBitmojiFetcher initWithUserSession:avatarProvider:selfieFetcher:selfieProvider:logger:] */

undefined1 *
FUN_106bfb55c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f5af8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106bfb680; end: 106bfb96f; -[SCOneTapLoginBitmojiFetcher fetchAndPersistBitmoji:completion:] */

void FUN_106bfb680(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined **unaff_x28;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(long *)(param_1 + 0x40) = param_3;
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c15ade0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  _objc_release(uVar10);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  _objc_release(uVar10);
  _objc_release(uVar3);
  puVar9 = *(undefined **)(param_1 + 0x30);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00();
  if (((ulong)puVar4 & 1) == 0) {
    puVar9 = *(undefined **)(param_1 + 0x38);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078c00();
    if ((int)puVar4 != 0) goto LAB_106bfb788;
    puVar9 = *(undefined **)(param_1 + 0x30);
    lVar5 = param_1;
    func_0x00010be3e6e0();
    if ((int)lVar5 == 0) {
      func_0x00010be8b8a0(param_1);
      puVar4 = PTR_PTR_1126b4bc0;
      _objc_alloc();
      func_0x00010c05ace0();
      _objc_initWeak(auStack_78,param_1);
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_106bfb970;
      puStack_90 = &UNK_110853e40;
      unaff_x28 = &puStack_a8;
      _objc_copyWeak(auStack_80,auStack_78);
      _objc_retain(param_4);
      ppuVar6 = &puStack_a8;
      lStack_88 = param_4;
      _objc_retainBlock(ppuVar6);
      puVar7 = PTR_PTR_1126b19f8;
      func_0x00010bf1aae0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_70 = puVar7;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = 0x19;
      param_2 = 0;
      func_0x0001000819a8(0x19,0);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar4;
      func_0x00010be100e0(param_1);
      _objc_release(uVar1);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(ppuVar6);
      _objc_release(lStack_88);
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_78);
      _objc_release(puVar4);
      goto LAB_106bfb7a0;
    }
  }
  else {
LAB_106bfb788:
    func_0x00010be8b8a0(param_1);
  }
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
LAB_106bfb7a0:
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x28 + 5);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  _objc_retain(param_2);
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained(param_3);
  if (puVar9 == (undefined *)0x0) {
    func_0x00010be11be0();
  }
  else {
    func_0x00010be11ac0();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106bfb970; end: 106bfb9d7;  */

void FUN_106bfb970(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  if (param_3 == 0) {
    func_0x00010be11be0();
  }
  else {
    func_0x00010be11ac0();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106bfb9d8; end: 106bfbaf7; -[SCOneTapLoginBitmojiFetcher _fetchBitmojiSelfieWithRequest:contexts:feature:completionQueue:completion:] */

void FUN_106bfb9d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106bfbaf8;
  puStack_60 = &UNK_110860500;
  uStack_58 = param_7;
  _objc_retain(param_7);
  ppuVar1 = &puStack_78;
  _objc_retainBlock(ppuVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfaa020();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106bfbaf8; end: 106bfbbc3;  */

void FUN_106bfbaf8(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x20);
  if (param_2 == 0) {
    if (lVar1 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,puVar2);
      _objc_release(puVar2);
    }
  }
  else if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,0);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106bfbbc4; end: 106bfbc53; -[SCOneTapLoginBitmojiFetcher _fetchImageSucceeded:callback:] */

void FUN_106bfbbc4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab700();
  _objc_release(uVar1);
  func_0x00010be73060(param_1,param_2,param_3,*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38));
  _objc_release(param_3);
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106bfbc54; end: 106bfbcb3; -[SCOneTapLoginBitmojiFetcher _fetchImageFailedWithCallback:] */

void FUN_106bfbc54(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab700();
  _objc_release(uVar1);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106bfbcb4; end: 106bfbdc7; -[SCOneTapLoginBitmojiFetcher _isBitmojiCached:avatarId:] */

undefined8 FUN_106bfbcb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c0e84a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
LAB_106bfbd8c:
    uVar5 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x40);
    func_0x00010c0e8460();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
LAB_106bfbd94:
      uVar5 = 0;
    }
    else {
      lVar3 = *(long *)(param_1 + 0x40);
      func_0x00010c0e8420();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar3 == 0) goto LAB_106bfbd8c;
      lVar1 = *(long *)(param_1 + 0x40);
      func_0x00010c0e84a0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0720c0();
      if ((int)lVar2 == 0) goto LAB_106bfbd94;
      uVar4 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c0e8460(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0720c0();
      _objc_release(uVar4);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 106bfbdc8; end: 106bfbe03; -[SCOneTapLoginBitmojiFetcher _removeCachedBitmoji] */

void FUN_106bfbdc8(long param_1,undefined8 param_2)

{
  func_0x00010c1d47c0(*(undefined8 *)(param_1 + 0x40),param_2,0);
  func_0x00010c1d4840(*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010c1d4810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_setOneTapLoginBitmojiAvatarId__112652c28,0);
  return;
}



/* Entry: 106bfbe04; end: 106bfbe7f; -[SCOneTapLoginBitmojiFetcher _persistBitmojiAvatar:selfieId:avatarId:] */

void FUN_106bfbe04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c1d47c0(uVar1,param_2,param_3);
  func_0x00010c1d4840(*(undefined8 *)(param_1 + 0x40),param_2,param_4);
  _objc_release(param_4);
  func_0x00010c1d4800(*(undefined8 *)(param_1 + 0x40),param_2,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106bfbe80; end: 106bfbef7; -[SCOneTapLoginBitmojiFetcher .cxx_destruct] */

void FUN_106bfbe80(long param_1)

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



/* Entry: 106bfbef8; end: 106bfbf6b; -[SCOneTapLoginRegistryBackgroundJobProcessor initWithOneTapLoginRegistryServices:] */

undefined1 * FUN_106bfbef8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f5b00;
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



/* Entry: 106bfbf6c; end: 106bfbff3; -[SCOneTapLoginRegistryBackgroundJobProcessor processJobWithJobConfig:input:context:onComplete:] */

undefined8 FUN_106bfbf6c(long param_1)

{
  undefined8 uVar1;
  long in_x5;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(in_x5);
  func_0x00010c08d7c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24f920();
  _objc_release(uVar1);
  _objc_release(uVar2);
  (**(code **)(in_x5 + 0x10))(in_x5,0,0);
  _objc_release(in_x5);
  return 0;
}



/* Entry: 106bfbff4; end: 106bfbfff; -[SCOneTapLoginRegistryBackgroundJobProcessor .cxx_destruct] */

void FUN_106bfbff4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106bfc000; end: 106bfc25b; -[SCOneTapLoginRegistryImpl initWithUserId:preferences:usernameProvider:multiAccountRepositories:bitmojiFetcher:refreshTokenUpdates:cloud1TLTokenUpdates:snapTokenManager:userTrackedLogger:experimentHelper:maxAccountCount:] */

undefined8 *
FUN_106bfc000(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined4 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  puStack_68 = PTR_PTR_1126f5b08;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 0xc) = param_13;
    *(undefined4 *)(puVar1 + 0xe) = 0;
    func_0x00010be3b680(puVar1);
  }
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



/* Entry: 106bfc25c; end: 106bfc263; -[SCOneTapLoginRegistryImpl startObservingIfNecessary] */

void FUN_106bfc25c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec0af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startObservingIfNecessary__11258dc60,0);
  return;
}



/* Entry: 106bfc264; end: 106bfc26b; -[SCOneTapLoginRegistryImpl startObservingAfterLogInIfNecessary] */

void FUN_106bfc264(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec0af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startObservingIfNecessary__11258dc60,1);
  return;
}



/* Entry: 106bfc26c; end: 106bfc273; -[SCOneTapLoginRegistryImpl stopObserving] */

void FUN_106bfc26c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x68),PTR_s_dispose_1125bf4f8);
  return;
}


