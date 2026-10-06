/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105411b94; end: 105411c17;  */

undefined8 FUN_105411b94(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c067fc0();
  if ((param_2 < 0x16) && ((0x3be64bU >> (ulong)((uint)param_2 & 0x1f) & 1) != 0)) {
    puVar2 = (&PTR_PTR_110886e28)[param_2];
    _objc_retain(puVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be1d5a0(uVar1);
  }
  else {
    _objc_retain(0);
    puVar2 = (undefined *)0x0;
    uVar1 = 0;
  }
  _objc_release(puVar2);
  return uVar1;
}



/* Entry: 105411c18; end: 105411c33;  */

void FUN_105411c18(void)

{
  func_0x00010c067fc0();
  func_0x00010848f45c();
  func_0x00010c25d240(PTR_PTR_1126b8ca0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105411c34; end: 105411c43; -[SCAdConfigProviderImpl enableCommercialsExtendedPlay] */

void FUN_105411c34(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getBoolWithKey_defaultValue__112564f08,
             &PTR____CFConstantStringClassReference_110ddb3d8,1);
  return;
}



/* Entry: 105411c44; end: 105411c6b; -[SCAdConfigProviderImpl maxDisposableWebviewProgress] */

float FUN_105411c44(undefined8 param_1,undefined8 param_2)

{
  double dVar1;
  
  dVar1 = 0.699999988079071;
  func_0x00010be1eb60(0x3fe6666660000000,param_1,param_2,
                      &PTR____CFConstantStringClassReference_110ddb458);
  return (float)dVar1;
}



/* Entry: 105411c6c; end: 105411d37; -[SCAdConfigProviderImpl enableAdsForProductTypeInKillswitch:] */

ulong FUN_105411c6c(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  uVar1 = param_1;
  func_0x00010be1d5a0(param_1,param_2,&PTR____CFConstantStringClassReference_110ddb478,1);
  if (param_3 < 0xd) {
    if (param_3 == 2) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110ddb4b8;
    }
    else if (param_3 == 5) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110ddb4d8;
    }
    else {
      if (param_3 != 7) {
        return uVar1;
      }
      ppuVar2 = &PTR____CFConstantStringClassReference_110ddb498;
    }
  }
  else if (param_3 == 0xd) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110ddb4f8;
  }
  else if (param_3 == 0x11) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110ddb518;
  }
  else {
    if (param_3 != 0x15) {
      return uVar1;
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_110ddb538;
  }
  func_0x00010be1d5a0(param_1,param_2,ppuVar2,1);
  return (ulong)((uint)uVar1 & (uint)param_1);
}



/* Entry: 105411d38; end: 105411d83; -[SCAdConfigProviderImpl disableAllAdsInForYouSection] */

undefined8 FUN_105411d38(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b8ca8;
  func_0x00010bf91c20();
  if (((ulong)puVar1 & 1) != 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be1d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getBoolWithKey_defaultValue__112564f08,
             &PTR____CFConstantStringClassReference_110ddb558,0);
  return param_1;
}



/* Entry: 105411d84; end: 105411dcf; -[SCAdConfigProviderImpl disableAllAdsInSpotlightFeed] */

undefined8 FUN_105411d84(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b8ca8;
  func_0x00010bf91c20();
  if (((ulong)puVar1 & 1) != 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be1d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getBoolWithKey_defaultValue__112564f08,
             &PTR____CFConstantStringClassReference_110ddb578,1);
  return param_1;
}



/* Entry: 105411dd0; end: 105411e1b; -[SCAdConfigProviderImpl disableCIAdsInSpotlightFeed] */

undefined8 FUN_105411dd0(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b8ca8;
  func_0x00010bf91c20();
  if (((ulong)puVar1 & 1) != 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be1d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getBoolWithKey_defaultValue__112564f08,
             &PTR____CFConstantStringClassReference_110ddb598,1);
  return param_1;
}



/* Entry: 105411e1c; end: 105411e2b; -[SCAdConfigProviderImpl enableAdsSwipeToProfileInSpotlightFeed] */

void FUN_105411e1c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getBoolWithKey_defaultValue__112564f08,
             &PTR____CFConstantStringClassReference_110ddb5b8,0);
  return;
}



/* Entry: 105411e2c; end: 105411e3b; -[SCAdConfigProviderImpl fusPrefetchUserEngagementScore] */

void FUN_105411e2c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getIntWithKey_defaultValue__112565898,
             &PTR____CFConstantStringClassReference_110ddb5d8,0);
  return;
}



/* Entry: 105411e3c; end: 105411e4b; -[SCAdConfigProviderImpl fusMultiAuctionRequestAdCount] */

void FUN_105411e3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getIntWithKey_defaultValue__112565898,
             &PTR____CFConstantStringClassReference_110ddb6f8,4);
  return;
}



/* Entry: 105411e4c; end: 105411e5b; -[SCAdConfigProviderImpl ciMultiAuctionRequestAdCount] */

void FUN_105411e4c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getIntWithKey_defaultValue__112565898,
             &PTR____CFConstantStringClassReference_110ddb718,3);
  return;
}



/* Entry: 105411e5c; end: 105411e6b; -[SCAdConfigProviderImpl spotlightMultiAuctionRequestAdCount] */

void FUN_105411e5c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getIntWithKey_defaultValue__112565898,
             &PTR____CFConstantStringClassReference_110ddb738,3);
  return;
}



/* Entry: 105411e6c; end: 105411eb7; -[SCAdConfigProviderImpl enablePopulatingDeviceInfoAdTrackRequest] */

undefined8 FUN_105411e6c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b8c98;
  func_0x00010bf8ffe0();
  if (((ulong)puVar1 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be1d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getBoolWithKey_defaultValue__112564f08,
             &PTR____CFConstantStringClassReference_110ddb418,0);
  return param_1;
}



/* Entry: 105411eb8; end: 105411ec7; -[SCAdConfigProviderImpl enablePopulatingDeviceInfoAdTrackRequestStory] */

void FUN_105411eb8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getBoolWithKey_defaultValue__112564f08,
             &PTR____CFConstantStringClassReference_110ddb438,1);
  return;
}



/* Entry: 105411ec8; end: 105411ed3; -[SCAdConfigProviderImpl gtqRetroRequestConfig] */

void FUN_105411ec8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be13ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__fetchRetroRequestCOF__112562848,
             &PTR____CFConstantStringClassReference_110ddb818);
  return;
}



/* Entry: 105411ed4; end: 105411edf; -[SCAdConfigProviderImpl snapAdsRetroRequestConfig] */

void FUN_105411ed4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be13ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__fetchRetroRequestCOF__112562848,
             &PTR____CFConstantStringClassReference_110ddb838);
  return;
}



/* Entry: 105411ee0; end: 105411eeb; -[SCAdConfigProviderImpl enableSKAdNetworkIcon] */

void FUN_105411ee0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf917d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b8c98,PTR_s_enableSKAdNetworkIcon_1125c1f98);
  return;
}



/* Entry: 105411eec; end: 105411efb; -[SCAdConfigProviderImpl enableLensSKAdNetworkViewThroughEarnedImpression] */

void FUN_105411eec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getBoolWithKey_defaultValue__112564f08,
             &PTR____CFConstantStringClassReference_110ddb8d8,0);
  return;
}



/* Entry: 105411efc; end: 105411f0b; -[SCAdConfigProviderImpl enableSKStoreProductBackgroundLogging] */

void FUN_105411efc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getBoolWithKey_defaultValue__112564f08,
             &PTR____CFConstantStringClassReference_110ddb8f8,1);
  return;
}



/* Entry: 105411f0c; end: 105411f1f; -[SCAdConfigProviderImpl skAdClickErrorLoggingLocales] */

void FUN_105411f0c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be23210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getStringWithKey_defaultValue__112566620,
             &PTR____CFConstantStringClassReference_110ddb918,
             &PTR____CFConstantStringClassReference_110daafd8);
  return;
}



/* Entry: 105411f20; end: 105411fdf; -[SCAdConfigProviderImpl skOverlayPresentationDelayMsForCtaType:adType:adProductType:ctaConfig:] */

undefined8
FUN_105411f20(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_6);
  if ((param_3 == 2) &&
     (uVar2 = param_1,
     func_0x00010be1d5a0(param_1,param_2,&PTR____CFConstantStringClassReference_110ddc978,0),
     (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else {
    func_0x00010bef6120(param_1,param_2,param_4,param_5,param_6);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf319a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf6aee0();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
  _objc_release(param_6);
  return uVar2;
}



/* Entry: 105411fe0; end: 105411fef; -[SCAdConfigProviderImpl arExperienceSkOverlayDismissDelay] */

void FUN_105411fe0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getIntWithKey_defaultValue__112565898,
             &PTR____CFConstantStringClassReference_110ddc9b8,0);
  return;
}



/* Entry: 105411ff0; end: 105411fff; -[SCAdConfigProviderImpl enableSkPreloadingForDeeplinkAds] */

void FUN_105411ff0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getBoolWithKey_defaultValue__112564f08,
             &PTR____CFConstantStringClassReference_110ddc9d8,0);
  return;
}



/* Entry: 105412000; end: 10541200f; -[SCAdConfigProviderImpl skAdSnapAdsProductPrefetchInAdvanceSwipeOptimizationEnabled] */

void FUN_105412000(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getBoolWithKey_defaultValue__112564f08,
             &PTR____CFConstantStringClassReference_110ddc9f8,0);
  return;
}



/* Entry: 105412010; end: 10541201f; -[SCAdConfigProviderImpl skAdSnapAdsProductPrefetchInAdvanceUATThreshold] */

void FUN_105412010(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getIntWithKey_defaultValue__112565898,
             &PTR____CFConstantStringClassReference_110ddb938,4);
  return;
}



/* Entry: 105412020; end: 10541202f; -[SCAdConfigProviderImpl skAdSnapAdsProductPrefetchPresentingFixEnabled] */

void FUN_105412020(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getBoolWithKey_defaultValue__112564f08,
             &PTR____CFConstantStringClassReference_110ddca18,1);
  return;
}



/* Entry: 105412030; end: 10541203f; -[SCAdConfigProviderImpl skStoreProductPresentDedupeEnabled] */

void FUN_105412030(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getBoolWithKey_defaultValue__112564f08,
             &PTR____CFConstantStringClassReference_110ddca38,1);
  return;
}



/* Entry: 105412040; end: 105412053; -[SCAdConfigProviderImpl creationTrackPath] */

void FUN_105412040(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be23210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getStringWithKey_defaultValue__112566620,
             &PTR____CFConstantStringClassReference_110ddc8f8,
             &PTR____CFConstantStringClassReference_110ddc918);
  return;
}



/* Entry: 105412054; end: 105412083; -[SCAdConfigProviderImpl skAdNetworkViewThroughImpressionTimeThreshold] */

void FUN_105412054(long param_1,undefined8 param_2)

{
  func_0x00010be1fbe0(param_1,param_2,&PTR____CFConstantStringClassReference_110ddb958,2000);
                    /* WARNING: Could not recover jumptable at 0x00010c0cd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((double)param_1,PTR_PTR_1126afec0,PTR_s_millisToSeconds__112610f38);
  return;
}



/* Entry: 105412084; end: 1054120df; -[SCAdConfigProviderImpl lensCarouselInfoSupportedCountries] */

void FUN_105412084(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010be23200(param_1,param_2,&PTR____CFConstantStringClassReference_110ddb978,
                      &PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf44740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054120e0; end: 1054120ef; -[SCAdConfigProviderImpl lensCarouselInfoMaxLensesCount] */

void FUN_1054120e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getIntWithKey_defaultValue__112565898,
             &PTR____CFConstantStringClassReference_110ddb998,0);
  return;
}



/* Entry: 1054120f0; end: 105412213; -[SCAdConfigProviderImpl publisherRequestConfig] */

void FUN_1054120f0(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126b8cb8);
  puVar2 = PTR_PTR_1126b8cb8;
  _objc_opt_new(PTR_PTR_1126b8cb8);
  uVar3 = uVar1;
  func_0x00010c119620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b8cb8;
  _objc_opt_class(PTR_PTR_1126b8cb8);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126b8cc0;
  _objc_alloc(PTR_PTR_1126b8cc0);
  if (uVar1 != 0) {
    func_0x00010c0d2760(uVar3);
    func_0x00010c0c4200(uVar3);
    func_0x00010c134c00(uVar3);
  }
  func_0x00010c02cc40(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105412214; end: 105412223; -[SCAdConfigProviderImpl enableDeeplinkAutoAdvanceDismissFix] */

void FUN_105412214(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getBoolWithKey_defaultValue__112564f08,
             &PTR____CFConstantStringClassReference_110ddb7b8,0);
  return;
}



/* Entry: 105412224; end: 105412243; -[SCAdConfigProviderImpl enableASMPostClickEngagement:] */

undefined8 FUN_105412224(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 3) {
                    /* WARNING: Could not recover jumptable at 0x00010be1d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__getBoolWithKey_defaultValue__112564f08,
               &PTR____CFConstantStringClassReference_110ddb7d8,0);
    return param_1;
  }
  return 0;
}



/* Entry: 105412244; end: 105412253; -[SCAdConfigProviderImpl enableASMPostClickEngagementWithUrlChange] */

void FUN_105412244(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getBoolWithKey_defaultValue__112564f08,
             &PTR____CFConstantStringClassReference_110ddb7f8,0);
  return;
}



/* Entry: 105412254; end: 105412283; -[SCAdConfigProviderImpl adInitStartupDelayInSec] */

void FUN_105412254(long param_1,undefined8 param_2)

{
  func_0x00010be1fbe0(param_1,param_2,&PTR____CFConstantStringClassReference_110ddba78,5000);
                    /* WARNING: Could not recover jumptable at 0x00010c0cd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((double)param_1,PTR_PTR_1126afec0,PTR_s_millisToSeconds__112610f38);
  return;
}



/* Entry: 105412284; end: 1054122a7; -[SCAdConfigProviderImpl retroBackoffFailureThreshold] */

float FUN_105412284(undefined8 param_1,undefined8 param_2)

{
  double dVar1;
  
  dVar1 = 0.5;
  func_0x00010be1eb60(0x3fe0000000000000,param_1,param_2,
                      &PTR____CFConstantStringClassReference_110ddba98);
  return (float)dVar1;
}



/* Entry: 1054122a8; end: 1054122b7; -[SCAdConfigProviderImpl retroMaxRetryDelaySeconds] */

void FUN_1054122a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getIntWithKey_defaultValue__112565898,
             &PTR____CFConstantStringClassReference_110ddbab8,0x708);
  return;
}



/* Entry: 1054122b8; end: 1054122c7; -[SCAdConfigProviderImpl retroMaxRetryRuntimeSeconds] */

void FUN_1054122b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getIntWithKey_defaultValue__112565898,
             &PTR____CFConstantStringClassReference_110ddbad8,0x3c);
  return;
}



/* Entry: 1054122c8; end: 1054122d7; -[SCAdConfigProviderImpl retroMaxRetryRuntimeSecondsBackground] */

void FUN_1054122c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getIntWithKey_defaultValue__112565898,
             &PTR____CFConstantStringClassReference_110ddbaf8,0x1e);
  return;
}



/* Entry: 1054122d8; end: 1054122e7; -[SCAdConfigProviderImpl retroRetryIntervalSeconds] */

void FUN_1054122d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getIntWithKey_defaultValue__112565898,
             &PTR____CFConstantStringClassReference_110ddbb18,0x1e);
  return;
}



/* Entry: 1054122e8; end: 1054122f7; -[SCAdConfigProviderImpl unlockablesViewTrackRetryCount] */

void FUN_1054122e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getIntWithKey_defaultValue__112565898,
             &PTR____CFConstantStringClassReference_110ddbb38,2);
  return;
}



/* Entry: 1054122f8; end: 105412307; -[SCAdConfigProviderImpl unlockablesCreationTrackRetryCount] */

void FUN_1054122f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getIntWithKey_defaultValue__112565898,
             &PTR____CFConstantStringClassReference_110ddbb58,2);
  return;
}



/* Entry: 105412308; end: 105412317; -[SCAdConfigProviderImpl snapAdsTrackRetryCount] */

void FUN_105412308(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getIntWithKey_defaultValue__112565898,
             &PTR____CFConstantStringClassReference_110ddbb78,2);
  return;
}



/* Entry: 105412318; end: 105412327; -[SCAdConfigProviderImpl gtqServeRetryCount] */

void FUN_105412318(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getIntWithKey_defaultValue__112565898,
             &PTR____CFConstantStringClassReference_110ddbb98,0);
  return;
}



/* Entry: 105412328; end: 10541233b; -[SCAdConfigProviderImpl statusCodesToPersist] */

void FUN_105412328(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be23210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getStringWithKey_defaultValue__112566620,
             &PTR____CFConstantStringClassReference_110ddbbb8,
             &PTR____CFConstantStringClassReference_110ddbbd8);
  return;
}



/* Entry: 10541233c; end: 105412347; -[SCAdConfigProviderImpl defaultProtoServeEndpoint] */

void FUN_10541233c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6a010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b8cc8,PTR_s_defaultProtoServe_1125b81a8);
  return;
}



/* Entry: 105412348; end: 10541235b; -[SCAdConfigProviderImpl defaultProtoShadowServeEndpoint] */

void FUN_105412348(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be23210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getStringWithKey_defaultValue__112566620,
             &PTR____CFConstantStringClassReference_110ddbcd8,
             &PTR____CFConstantStringClassReference_110ddbcf8);
  return;
}



/* Entry: 10541235c; end: 105412367; -[SCAdConfigProviderImpl defaultStagingProtoServeEndpoint] */

void FUN_10541235c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24d4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b8cc8,PTR_s_stagingProtoServe_112670f60);
  return;
}



/* Entry: 105412368; end: 105412373; -[SCAdConfigProviderImpl defaultStagingProtoTrackEndpoint] */

void FUN_105412368(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24d510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b8cc8,PTR_s_stagingProtoTrack_112670f68);
  return;
}



/* Entry: 105412374; end: 10541237f; -[SCAdConfigProviderImpl shouldUseStagingHost] */

void FUN_105412374(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c290af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b8c98,PTR_s_useStagingAdServer_112681ce0);
  return;
}



/* Entry: 105412380; end: 10541238f; -[SCAdConfigProviderImpl enableAdTrackAttempt] */

void FUN_105412380(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getBoolWithKey_defaultValue__112564f08,
             &PTR____CFConstantStringClassReference_110ddc758,0);
  return;
}



/* Entry: 105412390; end: 10541239b; -[SCAdConfigProviderImpl freeFormatServeURL] */

void FUN_105412390(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf47450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b8c98,PTR_s_configureServeUrl_1125af6b8);
  return;
}



/* Entry: 10541239c; end: 1054123a7; -[SCAdConfigProviderImpl shouldUseShadowInit] */

void FUN_10541239c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c290950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b8c98,PTR_s_useShadowEnvironment_112681c78);
  return;
}



/* Entry: 1054123a8; end: 1054123bb; -[SCAdConfigProviderImpl defaultShadowInitEndpoint] */

void FUN_1054123a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be23210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getStringWithKey_defaultValue__112566620,
             &PTR____CFConstantStringClassReference_110ddbc38,
             &PTR____CFConstantStringClassReference_110ddbc58);
  return;
}



/* Entry: 1054123bc; end: 1054123c7; -[SCAdConfigProviderImpl pixelTokenTTLInSec] */

undefined8 FUN_1054123bc(void)

{
  return 0x69780;
}



/* Entry: 1054123c8; end: 1054123d7; -[SCAdConfigProviderImpl shouldFetchPixelCookie] */

void FUN_1054123c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getBoolWithKey_defaultValue__112564f08,
             &PTR____CFConstantStringClassReference_110ddc2d8,1);
  return;
}



/* Entry: 1054123d8; end: 1054123e7; -[SCAdConfigProviderImpl enableDisableServeRequestFlagReading] */

void FUN_1054123d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getBoolWithKey_defaultValue__112564f08,
             &PTR____CFConstantStringClassReference_110ddbc78,1);
  return;
}



/* Entry: 1054123e8; end: 105412433; -[SCAdConfigProviderImpl enableShadowTraffic] */

undefined8 FUN_1054123e8(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b8c98;
  func_0x00010bf91160();
  if (((ulong)puVar1 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be1d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getBoolWithKey_defaultValue__112564f08,
             &PTR____CFConstantStringClassReference_110ddbd58,0);
  return param_1;
}



/* Entry: 105412434; end: 10541250f; -[SCAdConfigProviderImpl getAdSourceConfig:] */

void FUN_105412434(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  bVar5 = param_3 == 0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110ddbbf8;
  if (bVar5) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ddbc38;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110ddbc18;
  if (bVar5) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110ddbc58;
  }
  ppuVar3 = &PTR____CFConstantStringClassReference_110ddbc98;
  if (bVar5) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110ddbcd8;
  }
  ppuVar4 = &PTR____CFConstantStringClassReference_110ddbcb8;
  if (bVar5) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110ddbcf8;
  }
  uVar6 = param_1;
  func_0x00010be23200(param_1,param_2,ppuVar1,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be23200(param_1,param_2,ppuVar3,ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b8cd0;
  _objc_alloc(PTR_PTR_1126b8cd0);
  func_0x00010c03b8e0();
  _objc_release(param_1);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105412510; end: 105412533; -[SCAdConfigProviderImpl wrongRegionReinitThrottleInSec] */

double FUN_105412510(long param_1,undefined8 param_2)

{
  func_0x00010be1fbe0(param_1,param_2,&PTR____CFConstantStringClassReference_110ddbd18,0);
  return (double)param_1;
}



/* Entry: 105412534; end: 105412563; -[SCAdConfigProviderImpl requestOfStatusCode429ThrottleInSec] */

double FUN_105412534(long param_1,undefined8 param_2)

{
  func_0x00010be20560(param_1,param_2,&PTR____CFConstantStringClassReference_110ddbd38,60000);
  return (double)param_1 / 1000.0;
}



/* Entry: 105412564; end: 10541259f; -[SCAdConfigProviderImpl enableApplePromptOnAdSlot] */

void FUN_105412564(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b8c98;
  func_0x00010bf8f460(PTR_PTR_1126b8c98);
                    /* WARNING: Could not recover jumptable at 0x00010be1d590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getBoolWithAdCofStatus_key_defa_112564f00,puVar1,
             &PTR____CFConstantStringClassReference_110ddb9b8,1);
  return;
}



/* Entry: 1054125a0; end: 105412663; -[SCAdConfigProviderImpl enableApplePromptOnAdSlotForAdProductType:] */

undefined8 FUN_1054125a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x00010be23200(param_1,param_2,&PTR____CFConstantStringClassReference_110ddb9d8,
                      &PTR____CFConstantStringClassReference_110ddb9f8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf44740();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100504554();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf4b900(uVar2);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 105412664; end: 10541269b;  */

void FUN_105412664(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar2 = PTR_PTR_1126b8cd8;
  func_0x00010c116340(PTR_PTR_1126b8cd8,param_2,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedInteger__112615828,puVar2);
  return;
}



/* Entry: 10541269c; end: 1054126ab; -[SCAdConfigProviderImpl enableApplePromptOnCamera] */

void FUN_10541269c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getBoolWithKey_defaultValue__112564f08,
             &PTR____CFConstantStringClassReference_110ddba18,1);
  return;
}



/* Entry: 1054126ac; end: 1054126bb; -[SCAdConfigProviderImpl enableApplePromptOnCameraForAllUsers] */

void FUN_1054126ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getBoolWithKey_defaultValue__112564f08,
             &PTR____CFConstantStringClassReference_110ddba38,0);
  return;
}



/* Entry: 1054126bc; end: 1054126cb; -[SCAdConfigProviderImpl viewedAdContextCount] */

void FUN_1054126bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getIntWithKey_defaultValue__112565898,
             &PTR____CFConstantStringClassReference_110ddb178,1);
  return;
}



/* Entry: 1054126cc; end: 1054126db; -[SCAdConfigProviderImpl maxFUSAdOrganicSignalSize] */

void FUN_1054126cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getIntWithKey_defaultValue__112565898,
             &PTR____CFConstantStringClassReference_110ddbd78,0xf);
  return;
}



/* Entry: 1054126dc; end: 1054126eb; -[SCAdConfigProviderImpl enableCleanUserAdInfoOnLogout] */

void FUN_1054126dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getBoolWithKey_defaultValue__112564f08,
             &PTR____CFConstantStringClassReference_110ddc858,0);
  return;
}



/* Entry: 1054126ec; end: 1054126fb; -[SCAdConfigProviderImpl forceUnlockableAdTrackRawUserDataOverride] */

void FUN_1054126ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getBoolWithKey_defaultValue__112564f08,
             &PTR____CFConstantStringClassReference_110ddc898,0);
  return;
}



/* Entry: 1054126fc; end: 10541270b; -[SCAdConfigProviderImpl skipFiringFirstAdTrackFromRetryRequestManager] */

void FUN_1054126fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getBoolWithKey_defaultValue__112564f08,
             &PTR____CFConstantStringClassReference_110ddc8b8,0);
  return;
}



/* Entry: 10541270c; end: 10541271b; -[SCAdConfigProviderImpl prefetchAdMediaForceFullDownload] */

void FUN_10541270c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getBoolWithKey_defaultValue__112564f08,
             &PTR____CFConstantStringClassReference_110ddc358,0);
  return;
}



/* Entry: 10541271c; end: 10541276f; -[SCAdConfigProviderImpl fusInDFAdPrefetchConfigs] */

void FUN_10541271c(void)

{
  _objc_alloc(PTR_PTR_1126b8ce0);
  func_0x00010bff1a80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105412770; end: 1054127c3; -[SCAdConfigProviderImpl fusInFFAdPrefetchConfigs] */

void FUN_105412770(void)

{
  _objc_alloc(PTR_PTR_1126b8ce0);
  func_0x00010bff1a80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054127c4; end: 105412887; -[SCAdConfigProviderImpl fusAdPrefetchMaxAdIndexCountForBandwidthClass:] */

void FUN_1054127c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  if (param_3 < 3) {
    if (param_3 < 1) {
      if (param_3 == -9999) {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ddb5f8;
      }
      else {
        if (param_3 != 0) {
          return;
        }
        ppuVar1 = &PTR____CFConstantStringClassReference_110ddb618;
      }
    }
    else {
      if (param_3 != 1) {
        if (param_3 != 2) {
          return;
        }
        ppuVar1 = &PTR____CFConstantStringClassReference_110ddb658;
        goto LAB_10541287c;
      }
      ppuVar1 = &PTR____CFConstantStringClassReference_110ddb638;
    }
    uVar2 = 0;
  }
  else {
    if (param_3 < 5) {
      if (param_3 == 3) {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ddb678;
      }
      else {
        if (param_3 != 4) {
          return;
        }
        ppuVar1 = &PTR____CFConstantStringClassReference_110ddb698;
      }
    }
    else if (param_3 == 5) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ddb6b8;
    }
    else {
      if (param_3 != 6) {
        return;
      }
      ppuVar1 = &PTR____CFConstantStringClassReference_110ddb6d8;
    }
LAB_10541287c:
    uVar2 = 0xffffffffffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be1fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getIntWithKey_defaultValue__112565898,ppuVar1,uVar2);
  return;
}



/* Entry: 105412888; end: 105412897; -[SCAdConfigProviderImpl showDynamicInsertionMinSnapsFromStart] */

void FUN_105412888(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getIntWithKey_defaultValue__112565898,
             &PTR____CFConstantStringClassReference_110ddc198,4);
  return;
}



/* Entry: 105412898; end: 1054128a7; -[SCAdConfigProviderImpl showDynamicInsertionMinSnapsBetweenAds] */

void FUN_105412898(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getIntWithKey_defaultValue__112565898,
             &PTR____CFConstantStringClassReference_110ddc1b8,8);
  return;
}



/* Entry: 1054128a8; end: 1054128b7; -[SCAdConfigProviderImpl showDynamicInsertionMinSnapsBeforeEnd] */

void FUN_1054128a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getIntWithKey_defaultValue__112565898,
             &PTR____CFConstantStringClassReference_110ddc1d8,1);
  return;
}



/* Entry: 1054128b8; end: 1054128c7; -[SCAdConfigProviderImpl showDynamicInsertionMinTimeFromStartSeconds] */

void FUN_1054128b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getIntWithKey_defaultValue__112565898,
             &PTR____CFConstantStringClassReference_110ddc1f8,1000);
  return;
}



/* Entry: 1054128c8; end: 1054128d7; -[SCAdConfigProviderImpl showDynamicInsertionMinTimeBetweenAdsSeconds] */

void FUN_1054128c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getIntWithKey_defaultValue__112565898,
             &PTR____CFConstantStringClassReference_110ddc218,0x2d);
  return;
}



/* Entry: 1054128d8; end: 1054128e7; -[SCAdConfigProviderImpl showDynamicInsertionMinTimeBeforeEndSeconds] */

void FUN_1054128d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getIntWithKey_defaultValue__112565898,
             &PTR____CFConstantStringClassReference_110ddc238,0);
  return;
}



/* Entry: 1054128e8; end: 1054128f7; -[SCAdConfigProviderImpl showDynamicInsertionMinTimeInsertionThresholdSeconds] */

void FUN_1054128e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getIntWithKey_defaultValue__112565898,
             &PTR____CFConstantStringClassReference_110ddc258,0x14);
  return;
}



/* Entry: 1054128f8; end: 105412953; -[SCAdConfigProviderImpl isDebugRequest] */

bool FUN_1054128f8(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126b8c98;
  func_0x00010bfebac0();
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = PTR_PTR_1126b8c98;
    func_0x00010c0effa0(PTR_PTR_1126b8c98);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c08fa60();
    bVar1 = puVar3 != (undefined *)0x0;
    _objc_release(puVar2);
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 105412954; end: 10541298f; -[SCAdConfigProviderImpl enableHideEncryptedDebugLog] */

void FUN_105412954(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b8c98;
  func_0x00010bf90720(PTR_PTR_1126b8c98);
                    /* WARNING: Could not recover jumptable at 0x00010be1d590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getBoolWithAdCofStatus_key_defa_112564f00,puVar1,
             &PTR____CFConstantStringClassReference_110ddb778,0);
  return;
}



/* Entry: 105412990; end: 1054129b3; -[SCAdConfigProviderImpl storyAdsBlockedByHoldout] */

uint FUN_105412990(undefined8 param_1,undefined8 param_2)

{
  func_0x00010be1d5a0(param_1,param_2,&PTR____CFConstantStringClassReference_110ddca58,1);
  return (uint)param_1 ^ 1;
}



/* Entry: 1054129b4; end: 1054129c3; -[SCAdConfigProviderImpl enableSnapAdLateTrackSkip] */

void FUN_1054129b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getBoolWithKey_defaultValue__112564f08,
             &PTR____CFConstantStringClassReference_110ddbd98,0);
  return;
}



/* Entry: 1054129c4; end: 1054129d3; -[SCAdConfigProviderImpl snapAdServeTrackMaxDelayHours] */

void FUN_1054129c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getIntWithKey_defaultValue__112565898,
             &PTR____CFConstantStringClassReference_110ddbdb8,1);
  return;
}



/* Entry: 1054129d4; end: 1054129e3; -[SCAdConfigProviderImpl storyAdServeTrackMaxDelayHours] */

void FUN_1054129d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getIntWithKey_defaultValue__112565898,
             &PTR____CFConstantStringClassReference_110ddbdd8,0x18);
  return;
}



/* Entry: 1054129e4; end: 1054129f3; -[SCAdConfigProviderImpl lensServeTrackMaxDelayHours] */

void FUN_1054129e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getIntWithKey_defaultValue__112565898,
             &PTR____CFConstantStringClassReference_110ddbdf8,1);
  return;
}



/* Entry: 1054129f4; end: 105412a03; -[SCAdConfigProviderImpl enableLensAdTrackP0Signals] */

void FUN_1054129f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getBoolWithKey_defaultValue__112564f08,
             &PTR____CFConstantStringClassReference_110ddbe18,0);
  return;
}



/* Entry: 105412a04; end: 105412a13; -[SCAdConfigProviderImpl enableForceCloseOnAdsWebview] */

void FUN_105412a04(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getBoolWithKey_defaultValue__112564f08,
             &PTR____CFConstantStringClassReference_110ddbe38,0);
  return;
}



/* Entry: 105412a14; end: 105412a1f; -[SCAdConfigProviderImpl enableComposerViewRedBorder] */

void FUN_105412a14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf452f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b8ca8,PTR_s_composerViewRedBorder_1125aee60);
  return;
}



/* Entry: 105412a20; end: 105412a2f; -[SCAdConfigProviderImpl newCommercialUi] */

void FUN_105412a20(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getBoolWithKey_defaultValue__112564f08,
             &PTR____CFConstantStringClassReference_110ddb3f8,0);
  return;
}



/* Entry: 105412a30; end: 105412a7b; -[SCAdConfigProviderImpl ciSFAdMinTimeFromSessionStartInSec] */

undefined8 FUN_105412a30(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b8ca8;
  func_0x00010bf91c20();
  if (((ulong)puVar1 & 1) != 0) {
    return 600;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be1fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getIntWithKey_defaultValue__112565898,
             &PTR____CFConstantStringClassReference_110ddc038,0x14);
  return param_1;
}



/* Entry: 105412a7c; end: 105412ac7; -[SCAdConfigProviderImpl ciSFAdMinTimeBetweenAdsInSec] */

undefined8 FUN_105412a7c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b8ca8;
  func_0x00010bf91c20();
  if (((ulong)puVar1 & 1) != 0) {
    return 600;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be1fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getIntWithKey_defaultValue__112565898,
             &PTR____CFConstantStringClassReference_110ddc058,0x3c);
  return param_1;
}



/* Entry: 105412ac8; end: 105412ad7; -[SCAdConfigProviderImpl ciSFAdMinSnapsFromSessionStart] */

void FUN_105412ac8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be1fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getIntWithKey_defaultValue__112565898,
             &PTR____CFConstantStringClassReference_110ddc078,0);
  return;
}



/* Entry: 105412ad8; end: 105412b23; -[SCAdConfigProviderImpl ciSFAdMinSnapsBetweenAds] */

undefined8 FUN_105412ad8(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b8ca8;
  func_0x00010bf91c20();
  if (((ulong)puVar1 & 1) != 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be1fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getIntWithKey_defaultValue__112565898,
             &PTR____CFConstantStringClassReference_110ddc098,0);
  return param_1;
}



/* Entry: 105412b24; end: 105412b6f; -[SCAdConfigProviderImpl ciSFAdMinStoriesFromSessionStart] */

undefined8 FUN_105412b24(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b8ca8;
  func_0x00010bf91c20();
  if (((ulong)puVar1 & 1) != 0) {
    return 2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be1fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__getIntWithKey_defaultValue__112565898,
             &PTR____CFConstantStringClassReference_110ddbff8,4);
  return param_1;
}


