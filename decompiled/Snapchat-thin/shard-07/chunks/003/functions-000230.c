/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105414324; end: 10541436b; -[SCAdTrackDurableRequestConfigProvider maxAgeMillis] */

double FUN_105414324(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c1d40();
  _objc_release(lVar1);
  return (double)lVar2;
}



/* Entry: 10541436c; end: 1054143ab; -[SCAdTrackDurableRequestConfigProvider maxRetryLimit] */

long FUN_10541436c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0c26c0();
  _objc_release(uVar1);
  return (long)(int)uVar2;
}



/* Entry: 1054143ac; end: 1054143f3; -[SCAdTrackDurableRequestConfigProvider retryIntervalSeconds] */

double FUN_1054143ac(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c13f5e0();
  _objc_release(lVar1);
  return (double)lVar2;
}



/* Entry: 1054143f4; end: 10541443b; -[SCAdTrackDurableRequestConfigProvider networkRequestTimeoutSeconds] */

double FUN_1054143f4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d7ee0();
  _objc_release(uVar1);
  return (double)(int)uVar2;
}



/* Entry: 10541443c; end: 10541447b; -[SCAdTrackDurableRequestConfigProvider skipLateTrackRetry] */

undefined8 FUN_10541443c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c23e280();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10541447c; end: 1054145fb; -[SCAdTrackDurableRequestConfigProvider isStatusCodeRetriable:] */

long FUN_10541447c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c13e0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((uVar3 & 1) == 0) {
    _os_unfair_lock_lock(param_1 + 0x10);
    lVar9 = *(long *)(param_1 + 0x20);
    if (lVar9 == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar4;
      func_0x00010c13e0e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar8;
      func_0x00010bf44740();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      _objc_release(uVar4);
      puVar6 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      *(undefined **)(param_1 + 0x20) = puVar6;
      _objc_release(uVar8);
      _objc_release(uVar5);
      lVar9 = *(long *)(param_1 + 0x20);
    }
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900(lVar9,param_2,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _os_unfair_lock_unlock(param_1 + 0x10);
  }
  else {
    lVar9 = 1;
  }
  return lVar9;
}



/* Entry: 1054145fc; end: 1054146b7; -[SCAdTrackDurableRequestConfigProvider _fetchRemoteConfig] */

void FUN_1054145fc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c1195e0(uVar2,param_2,&PTR____CFConstantStringClassReference_110ddcbf8,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b8d20;
  _objc_alloc(PTR_PTR_1126b8d20);
  uVar4 = uVar2;
  func_0x00010c296d80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lStack_38 = 0;
  func_0x00010c008360(puVar3,param_2,uVar4,&lStack_38);
  lVar1 = lStack_38;
  _objc_release(uVar4);
  puVar5 = (undefined *)0x0;
  if (lVar1 == 0) {
    _objc_retain(puVar3);
    puVar5 = puVar3;
  }
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1054146b8; end: 1054146bf; -[SCAdTrackDurableRequestConfigProvider remoteConfig] */

undefined8 FUN_1054146b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1054146c0; end: 1054146ef; -[SCAdTrackDurableRequestConfigProvider setRemoteConfig:] */

void FUN_1054146c0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1054146f0; end: 1054146f7; -[SCAdTrackDurableRequestConfigProvider retriableStatusCodes] */

undefined8 FUN_1054146f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1054146f8; end: 1054146ff; -[SCAdTrackDurableRequestConfigProvider setRetriableStatusCodes:] */

void FUN_1054146f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105414700; end: 10541473b; -[SCAdTrackDurableRequestConfigProvider .cxx_destruct] */

void FUN_105414700(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10541473c; end: 1054147a3; +[SCAdsAdTrackDurableJobConfig descriptor] */

void FUN_10541473c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbe28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a378b0,
                        &PTR____CFConstantStringClassReference_110ddcc38,
                        &PTR_s_snapchat_ads_abconfig_1130d80d0,
                        &PTR_s_enableAdTrackDurableJob_1130d80e8,10,0x30,0x1c);
    puRam00000001136bbe28 = puVar1;
  }
  return;
}



/* Entry: 1054147a4; end: 105414887; +[SCAdsAdTrackV2Config descriptor] */

void FUN_1054147a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbe30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a37950,
                        &PTR____CFConstantStringClassReference_110ddcc58,
                        &PTR_s_snapchat_ads_abconfig_1130d8228,&PTR_s_ssfEnabled_1130d8240,4,0x18,
                        0x1c);
    puRam00000001136bbe30 = puVar1;
  }
  return;
}



/* Entry: 105414888; end: 105414893;  */

bool FUN_105414888(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 105414894; end: 10541490f;  */

undefined * FUN_105414894(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bbe40 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ddcc98,
                        &UNK_10ddaa630,&UNK_10ddaa67c,5,FUN_105414910,0);
    do {
      if (puRam00000001136bbe40 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bbe40;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bbe40,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bbe40 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bbe40;
}



/* Entry: 105414910; end: 10541491b;  */

bool FUN_105414910(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10541491c; end: 105414997;  */

undefined * FUN_10541491c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bbe48 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ddccb8,
                        &UNK_10ddaa690,&UNK_10ddaa6c4,4,FUN_105414998,0);
    do {
      if (puRam00000001136bbe48 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bbe48;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bbe48,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bbe48 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bbe48;
}



/* Entry: 105414998; end: 1054149a3;  */

bool FUN_105414998(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 1054149a4; end: 105414a1f;  */

undefined * FUN_1054149a4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bbe50 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ddccd8,
                        &UNK_10ddaa6d4,&UNK_10ddaa71c,5,FUN_105414a20,0);
    do {
      if (puRam00000001136bbe50 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bbe50;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bbe50,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bbe50 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bbe50;
}



/* Entry: 105414a20; end: 105414a2b;  */

bool FUN_105414a20(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 105414a2c; end: 105414a93; +[SCAdsAdUATInfoCardConfig descriptor] */

void FUN_105414a2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbe58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a37a90,
                        &PTR____CFConstantStringClassReference_110ddccf8,
                        &PTR_s_snapchat_ads_abconfig_1130d82c0,&PTR_s_defaultConfig_1130d83b8,4,0x28
                        ,0x1c);
    puRam00000001136bbe58 = puVar1;
  }
  return;
}



/* Entry: 105414a94; end: 105414b17; +[SCAdsAdUATInfoCardConfig_Animation descriptor] */

undefined * FUN_105414a94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbe60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a37ab8,
                        &PTR____CFConstantStringClassReference_110ddcd18,
                        &PTR_s_snapchat_ads_abconfig_1130d82c0,&PTR_s_delay_1130d82d8,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136bbe60 = puVar1;
  }
  return puRam00000001136bbe60;
}



/* Entry: 105414b18; end: 105414b9b; +[SCAdsAdUATInfoCardConfig_AdUATInfoCardStyleConfig descriptor] */

undefined * FUN_105414b18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbe68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a37ae0,
                        &PTR____CFConstantStringClassReference_110ddcd38,
                        &PTR_s_snapchat_ads_abconfig_1130d82c0,&PTR_s_cardType_1130d8438,9,0x40,0x1c
                       );
    func_0x00010c228780();
    puRam00000001136bbe68 = puVar1;
  }
  return puRam00000001136bbe68;
}



/* Entry: 105414b9c; end: 105414c1f; +[SCAdsAdUATInfoCardConfig_AdTypeToConfigMap descriptor] */

undefined * FUN_105414b9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbe70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a37b08,
                        &PTR____CFConstantStringClassReference_110ddcd58,
                        &PTR_s_snapchat_ads_abconfig_1130d82c0,&PTR_s_adType_1130d8318,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136bbe70 = puVar1;
  }
  return puRam00000001136bbe70;
}



/* Entry: 105414c20; end: 105414ca3; +[SCAdsAdUATInfoCardConfig_AdProductToConfigMap descriptor] */

undefined * FUN_105414c20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbe78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a37b30,
                        &PTR____CFConstantStringClassReference_110ddcd78,
                        &PTR_s_snapchat_ads_abconfig_1130d82c0,&PTR_s_adProduct_1130d8358,3,0x18,
                        0x1c);
    func_0x00010c228780();
    puRam00000001136bbe78 = puVar1;
  }
  return puRam00000001136bbe78;
}



/* Entry: 105414ca4; end: 105414d1f; +[SCAdsCanOpenUrlExclusionConfigs descriptor] */

undefined * FUN_105414ca4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbe80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a37bd0,
                        &PTR____CFConstantStringClassReference_110ddcd98,
                        &PTR_s_snapchat_ads_abconfig_1130d8558,
                        &PTR_s_canOpenURLExclusionConfigArray_1130d8570,1,0x10,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bbe80 = puVar1;
  }
  return puRam00000001136bbe80;
}



/* Entry: 105414d20; end: 105414d87; +[SCAdsCanOpenUrlExclusionConfig descriptor] */

void FUN_105414d20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbe88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a37c20,
                        &PTR____CFConstantStringClassReference_110ddcdb8,
                        &PTR_s_snapchat_ads_abconfig_1130d8558,&PTR_s_appScheme_1130d8590,3,0x20,
                        0x1c);
    puRam00000001136bbe88 = puVar1;
  }
  return;
}



/* Entry: 105414d88; end: 105414e03; +[SCAdsCanOpenUrlExclusionConfigsV2 descriptor] */

undefined * FUN_105414d88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbe90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a37cc0,
                        &PTR____CFConstantStringClassReference_110ddcdd8,
                        &PTR_s_snapchat_ads_abconfig_1130d85f0,
                        &PTR_s_canOpenURLExclusionConfigV2Array_1130d8608,1,0x10,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bbe90 = puVar1;
  }
  return puRam00000001136bbe90;
}



/* Entry: 105414e04; end: 105414e6b; +[SCAdsCanOpenUrlExclusionConfigV2 descriptor] */

void FUN_105414e04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbe98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a37d10,
                        &PTR____CFConstantStringClassReference_110ddcdf8,
                        &PTR_s_snapchat_ads_abconfig_1130d85f0,&PTR_s_appScheme_1130d8628,2,0x18,
                        0x1c);
    puRam00000001136bbe98 = puVar1;
  }
  return;
}



/* Entry: 105414e6c; end: 105414ed3; +[SCAdsColorExtractionConfig descriptor] */

void FUN_105414e6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbea0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a37e00,
                        &PTR____CFConstantStringClassReference_110ddce18,
                        &PTR_s_snapchat_ads_abconfig_1130d8668,&PTR_s_baseConfig_1130d8680,2,0x18,
                        0x1c);
    puRam00000001136bbea0 = puVar1;
  }
  return;
}



/* Entry: 105414ed4; end: 105414f57; +[SCAdsColorExtractionConfig_AdvertiserColorConfig descriptor] */

undefined * FUN_105414ed4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbea8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a37e28,
                        &PTR____CFConstantStringClassReference_110ddce38,
                        &PTR_s_snapchat_ads_abconfig_1130d8668,&PTR_s_adAccountIdsArray_1130d86c0,4,
                        0x28,0x1c);
    func_0x00010c228780();
    puRam00000001136bbea8 = puVar1;
  }
  return puRam00000001136bbea8;
}



/* Entry: 105414f58; end: 105414fdb; +[SCAdsColorExtractionConfig_AdvertiserColorConfig_CardConfig descriptor] */

undefined * FUN_105414f58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbeb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a37e50,
                        &PTR____CFConstantStringClassReference_110ddce58,
                        &PTR_s_snapchat_ads_abconfig_1130d8668,&PTR_s_foregroundColor_1130d8740,4,
                        0x28,0x1c);
    func_0x00010c228780();
    puRam00000001136bbeb0 = puVar1;
  }
  return puRam00000001136bbeb0;
}



/* Entry: 105414fdc; end: 1054150bf; +[SCAdsMidRollStoryAdConfig descriptor] */

void FUN_105414fdc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbeb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a37ef0,
                        &PTR____CFConstantStringClassReference_110ddce78,
                        &PTR_s_snapchat_ads_abconfig_1130d87c0,
                        &PTR_s_enablePublisherStories_1130d87d8,3,8,0x1c);
    puRam00000001136bbeb8 = puVar1;
  }
  return;
}



/* Entry: 1054150c0; end: 1054150cb;  */

bool FUN_1054150c0(uint param_1)

{
  return param_1 < 0x12;
}



/* Entry: 1054150cc; end: 105415147;  */

undefined * FUN_1054150cc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bbec8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ddceb8,
                        &UNK_10ddaa894,&UNK_10ddaa8bc,4,FUN_105415148,0);
    do {
      if (puRam00000001136bbec8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bbec8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bbec8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bbec8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bbec8;
}



/* Entry: 105415148; end: 105415153;  */

bool FUN_105415148(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 105415154; end: 1054151cf;  */

undefined * FUN_105415154(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bbed0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ddced8,
                        &UNK_10ddaa8cc,&UNK_10ddaa8f0,5,FUN_1054151d0,0);
    do {
      if (puRam00000001136bbed0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bbed0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bbed0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bbed0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bbed0;
}



/* Entry: 1054151d0; end: 1054151db;  */

bool FUN_1054151d0(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 1054151dc; end: 105415257; +[SCAdsPromotedStoryTileCtaConfig descriptor] */

undefined * FUN_1054151dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbed8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a38080,
                        &PTR____CFConstantStringClassReference_110ddcef8,
                        &PTR_s_snapchat_ads_abconfig_1130d8838,&PTR_s_baseConfig_1130d8a70,0xc,0x48,
                        0x1c);
    func_0x00010c2289e0();
    puRam00000001136bbed8 = puVar1;
  }
  return puRam00000001136bbed8;
}



/* Entry: 105415258; end: 1054152db; +[SCAdsPromotedStoryTileCtaConfig_CoverZoomAnimation descriptor] */

undefined * FUN_105415258(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbee0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a380a8,
                        &PTR____CFConstantStringClassReference_110ddcf18,
                        &PTR_s_snapchat_ads_abconfig_1130d8838,&PTR_s_duration_1130d8910,3,0x20,0x1c
                       );
    func_0x00010c228780();
    puRam00000001136bbee0 = puVar1;
  }
  return puRam00000001136bbee0;
}



/* Entry: 1054152dc; end: 10541535f; +[SCAdsPromotedStoryTileCtaConfig_CtaSlideInAnimation descriptor] */

undefined * FUN_1054152dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbee8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a380d0,
                        &PTR____CFConstantStringClassReference_110ddcf38,
                        &PTR_s_snapchat_ads_abconfig_1130d8838,&PTR_s_duration_1130d8850,2,0x18,0x1c
                       );
    func_0x00010c228780();
    puRam00000001136bbee8 = puVar1;
  }
  return puRam00000001136bbee8;
}



/* Entry: 105415360; end: 1054153e3; +[SCAdsPromotedStoryTileCtaConfig_CtaPadding descriptor] */

undefined * FUN_105415360(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbef0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a380f8,
                        &PTR____CFConstantStringClassReference_110ddcf58,
                        &PTR_s_snapchat_ads_abconfig_1130d8838,&PTR_s_top_1130d8970,4,0x28,0x1c);
    func_0x00010c228780();
    puRam00000001136bbef0 = puVar1;
  }
  return puRam00000001136bbef0;
}



/* Entry: 1054153e4; end: 105415467; +[SCAdsPromotedStoryTileCtaConfig_PreloadConfig descriptor] */

undefined * FUN_1054153e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbef8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a38120,
                        &PTR____CFConstantStringClassReference_110ddcf78,
                        &PTR_s_snapchat_ads_abconfig_1130d8838,
                        &PTR_s_preloadOnDidEndDragging_1130d89f0,4,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136bbef8 = puVar1;
  }
  return puRam00000001136bbef8;
}



/* Entry: 105415468; end: 1054154eb; +[SCAdsPromotedStoryTileCtaConfig_BackgroundExitBehavior descriptor] */

undefined * FUN_105415468(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbf00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a38148,
                        &PTR____CFConstantStringClassReference_110ddcf98,
                        &PTR_s_snapchat_ads_abconfig_1130d8838,&PTR_s_behavior_1130d8890,2,0x10,0x1c
                       );
    func_0x00010c228780();
    puRam00000001136bbf00 = puVar1;
  }
  return puRam00000001136bbf00;
}



/* Entry: 1054154ec; end: 10541556f; +[SCAdsPromotedStoryTileCtaConfig_CtaRemoteWebPageConfig descriptor] */

undefined * FUN_1054154ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbf08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a38170,
                        &PTR____CFConstantStringClassReference_110ddcfb8,
                        &PTR_s_snapchat_ads_abconfig_1130d8838,&PTR_s_browserType_1130d88d0,2,0xc,
                        0x1c);
    func_0x00010c228780();
    puRam00000001136bbf08 = puVar1;
  }
  return puRam00000001136bbf08;
}



/* Entry: 105415570; end: 1054155eb;  */

undefined * FUN_105415570(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bbf10 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ddcfd8,
                        &UNK_10ddaa910,&UNK_10ddaa9a0,0xb,FUN_1054155ec,0);
    do {
      if (puRam00000001136bbf10 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bbf10;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bbf10,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bbf10 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bbf10;
}



/* Entry: 1054155ec; end: 1054155f7;  */

bool FUN_1054155ec(uint param_1)

{
  return param_1 < 0xb;
}



/* Entry: 1054155f8; end: 105415673;  */

undefined * FUN_1054155f8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bbf18 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ddcff8,
                        &UNK_10ddaa9cc,&UNK_10ddaaaac,0x13,FUN_105415674,0);
    do {
      if (puRam00000001136bbf18 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bbf18;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bbf18,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bbf18 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bbf18;
}



/* Entry: 105415674; end: 10541567f;  */

bool FUN_105415674(uint param_1)

{
  return param_1 < 0x13;
}



/* Entry: 105415680; end: 1054156fb;  */

undefined * FUN_105415680(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bbf20 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ddd018,
                        &UNK_10ddaaaf8,&UNK_10ddaab3c,7,FUN_1054156fc,0);
    do {
      if (puRam00000001136bbf20 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bbf20;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bbf20,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bbf20 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bbf20;
}



/* Entry: 1054156fc; end: 105415707;  */

bool FUN_1054156fc(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 105415708; end: 10541576f; +[SCAdsAdBaseConfig descriptor] */

void FUN_105415708(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbf28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a38210,
                        &PTR____CFConstantStringClassReference_110ddd038,
                        &PTR_s_snapchat_ads_abconfig_1130d8bf0,
                        &PTR_s_allProductTypesEnabled_1130d8c08,7,0x20,0x1c);
    puRam00000001136bbf28 = puVar1;
  }
  return;
}



/* Entry: 105415770; end: 1054157d7; +[SCAdsSKOverlayPreloadConfig descriptor] */

void FUN_105415770(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbf30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a382b0,
                        &PTR____CFConstantStringClassReference_110ddd058,
                        &PTR_s_snapchat_ads_abconfig_1130d8ce8,&PTR_s_enabled_1130d8d00,4,0x10,0x1c)
    ;
    puRam00000001136bbf30 = puVar1;
  }
  return;
}



/* Entry: 1054157d8; end: 10541583f; +[SCAdsPublisherRequestConfig descriptor] */

void FUN_1054157d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bbf38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a38350,
                        &PTR____CFConstantStringClassReference_110ddd078,
                        &PTR_s_snapchat_ads_request_schema_1130d8d80,
                        &PTR_s_multiauctionSize_1130d8d98,3,0x10,0x1c);
    puRam00000001136bbf38 = puVar1;
  }
  return;
}



/* Entry: 105415840; end: 105415a77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105415840(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
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
  undefined8 uStack_68;
  
  uVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x0001003fef6c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
  _objc_opt_class(PTR__OBJC_CLASS___NSNull_1126aef28);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  if ((uVar4 & 1) == 0) {
    lVar5 = param_1 + 0x20;
    _objc_loadWeakRetained();
    lVar6 = lVar5;
    func_0x0001003fef6c();
    _objc_retainAutoreleasedReturnValue();
    uStack_68 = lVar6;
    func_0x00010bfb2b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar5);
  }
  else {
    uStack_68 = 0;
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b8d28;
  _objc_alloc();
  lVar5 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar7 = lVar5;
  func_0x0001003ff774();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar6 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = lVar6 + _DAT_1127231cc;
    _objc_loadWeakRetained(lVar15);
  }
  lVar9 = lVar15;
  func_0x00010c29f380(lVar15);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar10);
  lVar11 = lVar10;
  func_0x0001003ff798();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar13 = param_1;
  func_0x0001003ff7bc();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0184c0();
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(param_1);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar15);
  _objc_release(lVar6);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar5);
  _objc_release(uStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105415a78; end: 105415ab7;  */

void FUN_105415a78(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdd5b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105415ab8; end: 105415b6b;  */

void FUN_105415ab8(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = param_1;
  func_0x0001003fef90();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf1f480();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
  ppuVar1 = &PTR_PTR_1126b8d30;
  if ((int)lVar5 == 0) {
    ppuVar1 = &PTR_PTR_1126b8d38;
  }
  _objc_opt_new(*ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105415b6c; end: 105415d67;  */

void FUN_105415b6c(long param_1)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  
  uVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  func_0x0001003fef6c();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNull_1126aef28;
  _objc_opt_class(PTR__OBJC_CLASS___NSNull_1126aef28);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar10);
  if ((uVar4 & 1) == 0) {
    lVar5 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x0001003fef6c();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar6;
    func_0x00010bfb2b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar5);
  }
  else {
    lVar11 = 0;
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar5 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x0001003fef90();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bf1f480();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  ppuVar1 = &PTR_PTR_1126b8d40;
  if ((int)lVar9 == 0) {
    ppuVar1 = &PTR_PTR_1126b8d48;
  }
  puVar10 = *ppuVar1;
  _objc_alloc(puVar10);
  lVar5 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x0001003ff798();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar8 = param_1;
  func_0x0001003ff7bc();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0271c0(puVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(param_1);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 105415d68; end: 105415e87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105415d68(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  lVar6 = lVar1;
  func_0x0001003fef90();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar6;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf1f480();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar6);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126b8d50;
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = lVar1 + _DAT_1127231dc;
    _objc_loadWeakRetained(lVar6);
  }
  lVar2 = lVar6;
  func_0x00010c1067a0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b38e0(puVar5,param_2,lVar2,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar6);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105415e88; end: 1054160fb; -[SCAdOperationalLoggingServicesEntryPoint _buildAdOpportunityLoggingV2Impl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105415e88(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110887048);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b8d68;
  _objc_alloc();
  lVar10 = param_1;
  func_0x0001003fef90(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar10;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff1060(puVar2,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar10);
  puVar5 = PTR_PTR_1126b8d70;
  _objc_alloc();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_1127231f4;
    _objc_loadWeakRetained(lVar10);
  }
  lVar3 = lVar10;
  func_0x00010bf53fa0(lVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c006520(puVar5,param_2,lVar3,puVar2);
  _objc_release(lVar3);
  _objc_release(lVar10);
  puVar6 = PTR_PTR_1126b8d78;
  _objc_alloc(PTR_PTR_1126b8d78);
  lVar10 = param_1;
  func_0x0001003ff798();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar10;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x0001003fef90(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar4;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_1127231e4;
    _objc_loadWeakRetained(lVar11);
  }
  lVar8 = lVar11;
  func_0x00010bf07a00(lVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001003ff774(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff8b40(puVar6,param_2,lVar3,puVar1,lVar7,lVar8,lVar9,puVar5);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_release(lVar8);
  _objc_release(lVar11);
  _objc_release(lVar7);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar10);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1054160fc; end: 105416117;  */

void FUN_1054160fc(void)

{
  _objc_opt_new(PTR_PTR_1126aeea8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105416118; end: 1054161e3; -[SCAdOperationalLoggingServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105416118(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127231c4,0);
  _objc_destroyWeak(param_1 + _DAT_1127231f8);
  _objc_destroyWeak(param_1 + _DAT_1127231f4);
  _objc_destroyWeak(param_1 + _DAT_1127231f0);
  _objc_destroyWeak(param_1 + _DAT_1127231ec);
  _objc_destroyWeak(param_1 + _DAT_1127231e8);
  _objc_destroyWeak(param_1 + _DAT_1127231e4);
  _objc_destroyWeak(param_1 + _DAT_1127231e0);
  _objc_destroyWeak(param_1 + _DAT_1127231dc);
  _objc_destroyWeak(param_1 + _DAT_1127231d8);
  _objc_destroyWeak(param_1 + _DAT_1127231d4);
  _objc_destroyWeak(param_1 + _DAT_1127231d0);
  _objc_destroyWeak(param_1 + _DAT_1127231cc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127231c8);
  return;
}



/* Entry: 1054161e4; end: 10541632f; -[SCAdShake2ReportLogger initWithPreferences:lifecycleWatermarkMetricsManager:usernameProvider:valdiRuntimeProvider:] */

undefined1 *
FUN_1054161e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e8400;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105416330; end: 105416483; +[SCAdShake2ReportLogger loggerWithPreferences:lifecycleWatermarkMetricsManager:usernameProvider:valdiRuntimeProvider:useSwiftImplementation:] */

void FUN_105416330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b8d80;
  puVar2 = PTR_PTR_1126b8d50;
  if (param_7 == 0) {
    _objc_retain(param_6);
    _objc_retain(param_5);
    _objc_retain(param_3);
    _objc_alloc(puVar2);
    func_0x00010c038180();
    _objc_release(param_6);
    _objc_release(param_5);
  }
  else {
    _objc_retain(param_6);
    _objc_retain(param_5);
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105416484;
    puStack_50 = &UNK_110887068;
    _objc_retain(param_4);
    uStack_48 = param_4;
    func_0x00010c038160(puVar1,param_2,param_3,&puStack_68,param_5,param_6);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_3);
    param_3 = uStack_48;
    puVar2 = puVar1;
  }
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105416484; end: 105416507;  */

void FUN_105416484(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfc70e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105416508; end: 105416607; -[SCAdShake2ReportLogger didViewAd:snapIndex:] */

void FUN_105416508(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010bef52e0(param_3,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfc70e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 8);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105416608;
    puStack_60 = &UNK_110848ba8;
    lStack_58 = param_1;
    _objc_retain(param_3);
    lStack_50 = param_3;
    uStack_48 = uVar3;
    func_0x00010c0f7fc0(uVar2,param_2,&puStack_78);
    _objc_release(lStack_50);
    _objc_release(uVar3);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105416608; end: 1054166b7;  */

void FUN_105416608(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 0x28);
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010bef4d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != lVar2) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bef4d80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28) = uVar1;
    _objc_release(uVar3);
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
    func_0x00010bf529e0();
    if (lVar2 == 3) {
      func_0x00010c12d3c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20));
    }
                    /* WARNING: Could not recover jumptable at 0x00010c066b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),
               PTR_s_insertObject_atIndex__1125f74d0,*(undefined8 *)(param_1 + 0x30),0);
    return;
  }
  return;
}



/* Entry: 1054166b8; end: 105416747; -[SCAdShake2ReportLogger didLeaveAdWithRequestId:] */

void FUN_1054166b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105416748;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105416748; end: 10541677b;  */

void FUN_105416748(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0720c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28),param_2,
                      *(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10541677c; end: 10541687b; -[SCAdShake2ReportLogger didLoadURLInBrowser:config:] */

void FUN_10541677c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10541687c; end: 1054168af;  */

void FUN_10541687c(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfe8e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054168b0; end: 10541697b; -[SCAdShake2ReportLogger lastViewedAds] */

void FUN_1054168b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10541697c;
  uStack_30 = 0x10541698c;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105416994;
  puStack_68 = &UNK_11084b9d0;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 8),param_2,&puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10541697c; end: 105416993;  */

void FUN_10541697c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105416994; end: 1054169cf;  */

void FUN_105416994(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010bf51e00();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1054169d0; end: 105416aa7; -[SCAdShake2ReportLogger shake2ReportDebugInfo] */

void FUN_1054169d0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar1 = param_1;
  func_0x00010c08ab00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010beeaae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  FUN_10576ccb0(lVar1,lVar2,uVar3,uVar5,*(undefined8 *)(param_1 + 0x48));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 105416aa8; end: 105416b0b; -[SCAdShake2ReportLogger _didLoadURLInBrowser:config:] */

void FUN_105416aa8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_4;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105416b0c; end: 105416b4b; -[SCAdShake2ReportLogger _webMetadata] */

void FUN_105416b0c(long param_1)

{
  if (*(long *)(param_1 + 0x38) != 0) {
    _objc_alloc(PTR_PTR_1126b8d88);
    func_0x00010c000f00();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105416b4c; end: 105416bcf; -[SCAdShake2ReportLogger .cxx_destruct] */

void FUN_105416b4c(long param_1)

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



/* Entry: 105416bd0; end: 105416bd7; -[SCAdUser setEncrypedUserData:] */

void FUN_105416bd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c195bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_setEncryptedUserData__112643110);
  return;
}



/* Entry: 105416bd8; end: 105416bdf; -[SCAdUser getEncrypedUserData] */

void FUN_105416bd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc5190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_getEncryptedUserData_1125cee08);
  return;
}



/* Entry: 105416be0; end: 105416be7; -[SCAdUser getEnableAdTracking] */

undefined1 FUN_105416be0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x40);
}



/* Entry: 105416be8; end: 105416d2f; -[SCAdUser getUserAdId] */

void FUN_105416be8(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  double dVar5;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar1);
  func_0x00010bf604e0(PTR_PTR_1126afec0);
  puVar1 = PTR__OBJC_CLASS___ASIdentifierManager_1126b8d90;
  dVar5 = param_1;
  func_0x00010c22bc20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010befe540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_lock(param_2 + 0x20);
  _objc_retain(puVar1);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  *(undefined **)(param_2 + 0x28) = puVar1;
  _objc_release(uVar3);
  func_0x00010be611a0(param_2);
  *(double *)(param_2 + 0x30) = dVar5;
  _os_unfair_lock_unlock(param_2 + 0x20);
  func_0x00010bf604e0(PTR_PTR_1126afec0);
  func_0x00010be5a3e0(dVar5 - param_1,param_2,param_3,
                      &PTR____CFConstantStringClassReference_110ddd0f8);
  puVar4 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105416d30; end: 105416d33; -[SCAdUser _monotonicTimeInSeconds] */

double FUN_105416d30(long param_1)

{
  ulong uVar1;
  
  func_0x000107c61070();
  if (lRam00000001138473a0 != -1) {
    func_0x00010002a2fc(0x1138473a0,&PTR___NSConcreteGlobalBlock_110d9f240);
  }
  uVar1 = 0;
  if ((ulong)uRam00000001138473ac != 0) {
    uVar1 = (param_1 * (ulong)uRam00000001138473a8) / (ulong)uRam00000001138473ac;
  }
  return (double)uVar1 / 1000000000.0;
}



/* Entry: 105416d34; end: 105416e3f; -[SCAdUser getCachedUserAdIdV2] */

void FUN_105416d34(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar1);
  _os_unfair_lock_lock(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) == 0) {
    _os_unfair_lock_unlock(param_1 + 0x20);
    func_0x00010bfcbcc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95660();
    _objc_release(puVar1);
  }
  else {
    func_0x00010be5a3e0(0,param_1,param_2,&PTR____CFConstantStringClassReference_110ddd138);
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95660();
    _objc_release(puVar1);
    lVar2 = *(long *)(param_1 + 0x28);
    _objc_retain(lVar2);
    _os_unfair_lock_unlock(param_1 + 0x20);
    param_1 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105416e40; end: 105416f73; -[SCAdUser getCachedUserAdId] */

void FUN_105416e40(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar1);
  _os_unfair_lock_lock(param_2 + 0x20);
  func_0x00010be611a0(param_2);
  if (((*(long *)(param_2 + 0x28) == 0) ||
      (param_1 = param_1 - *(double *)(param_2 + 0x30), param_1 < 0.0)) ||
     (*(double *)(param_2 + 0x38) <= param_1)) {
    _os_unfair_lock_unlock(param_2 + 0x20);
    func_0x00010bfcbcc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95660();
    _objc_release(puVar1);
  }
  else {
    func_0x00010be5a3e0(0,param_2,param_3,&PTR____CFConstantStringClassReference_110ddd178);
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf95660();
    _objc_release(puVar1);
    lVar2 = *(long *)(param_2 + 0x28);
    _objc_retain(lVar2);
    _os_unfair_lock_unlock(param_2 + 0x20);
    param_2 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105416f74; end: 105416ff7; -[SCAdUser prewarmCachedUserAdId] */

void FUN_105416f74(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar1);
  func_0x00010bfcbcc0(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105416ff8; end: 1054170c3; -[SCAdUser _logUserAdIdRetrieveWithLatency:context:] */

void FUN_105416ff8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b8d98;
  _objc_retain(param_4);
  func_0x00010c291160(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc000(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1054170c4; end: 1054170cb; -[SCAdUser getLast429ResponseTimestamp] */

void FUN_1054170c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc6c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_getLast429ResponseTimestamp_1125cf4a8);
  return;
}



/* Entry: 1054170cc; end: 1054170d3; -[SCAdUser setLast429ResponseTimestamp:] */

void FUN_1054170cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1b7670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_setLast429ResponseTimestamp__11264b7c0);
  return;
}



/* Entry: 1054170d4; end: 1054170fb; -[SCAdUser getPersistedDataAdapter] */

void FUN_1054170d4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054170fc; end: 105417103; -[SCAdUser cleanUserAdInfo] */

void FUN_1054170fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3a190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_cleanUserAdInfo_1125ac208);
  return;
}



/* Entry: 105417104; end: 10541710b; -[SCAdUser enableAdTracking] */

undefined1 FUN_105417104(long param_1)

{
  return *(undefined1 *)(param_1 + 0x40);
}



/* Entry: 10541710c; end: 105417113; -[SCAdUser setEnableAdTracking:] */

void FUN_10541710c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 105417114; end: 10541711b; -[SCAdUser userAdId] */

undefined8 FUN_105417114(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10541711c; end: 105417123; -[SCAdUser setUserAdId:] */

void FUN_10541711c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 105417124; end: 10541712f; -[SCAdUser persistedDataAdapter] */

void FUN_105417124(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x50,1);
  return;
}



/* Entry: 105417130; end: 105417137; -[SCAdUser setPersistedDataAdapter:] */

void FUN_105417130(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 105417138; end: 105417197; -[SCAdUser .cxx_destruct] */

void FUN_105417138(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105417198; end: 105417263; -[SCUserAdIdProvider _logMissingSAID] */

void FUN_105417198(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  ulong uVar6;
  
  puVar1 = PTR_PTR_1126b8d98;
  func_0x00010c149420(PTR_PTR_1126b8d98);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(long *)(param_1 + 0x20) - 1;
  if (uVar6 < 3) {
    ppuVar5 = (undefined **)(&PTR_PTR_110887098)[uVar6];
  }
  else {
    ppuVar5 = &PTR____CFConstantStringClassReference_110db8b78;
  }
  puVar2 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110daf4d8,ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bef2aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}


