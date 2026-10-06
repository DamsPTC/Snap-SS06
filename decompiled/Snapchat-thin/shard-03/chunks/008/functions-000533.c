/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102d0cbd4; end: 102d0cc07; -[SCLongformShowSnapOperaDataModel hasOptionalAdIntervals] */

uint FUN_102d0cbd4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102d0cc08();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102d0cc08; end: 102d0cd33;  */

undefined1 FUN_102d0cc08(void)

{
  undefined *puVar1;
  undefined1 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 uStack_41;
  
  uStack_41 = 0;
  puVar4 = &UNK_1105c2578;
  func_0x000107c613fc(&UNK_1105c2578,0x18,7);
  *(undefined1 **)(puVar4 + 0x10) = &uStack_41;
  puVar5 = &UNK_1105c25a0;
  func_0x000107c613fc(&UNK_1105c25a0,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_102d0cddc;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  uStack_58 = 0x102d0cde4;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  pcStack_68 = FUN_102d0b824;
  puStack_60 = &UNK_1105c25b8;
  ppuVar6 = &puStack_78;
  puStack_50 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar1 = puStack_50;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c4c698();
  func_0x000107c60bd0(ppuVar6);
  uVar2 = uStack_41;
  func_0x000107c61574(puVar4);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x50,0xd,0x1b,1);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) == 0) {
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102d0cd34);
  (*pcVar3)();
}



/* Entry: 102d0cd34; end: 102d0cddb;  */

void FUN_102d0cd34(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong in_x4;
  undefined8 in_x5;
  ulong uVar5;
  
  if (in_x4 == 0) {
    bVar2 = false;
  }
  else {
    func_0x000107c4dfec();
    func_0x000107c61180();
    if (in_x4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d0cddc);
      (*pcVar1)();
    }
    uVar3 = 0;
    FUN_102d0ce08(0);
    uVar4 = in_x4;
    func_0x000107c5fc54(in_x4,uVar3);
    func_0x000107c61170(in_x4);
    if (uVar4 >> 0x3e == 0) {
      uVar5 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar5 = uVar4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar4) {
        uVar5 = uVar4;
      }
      func_0x000107c60480();
    }
    func_0x000107c6142c(uVar4);
    bVar2 = uVar5 != 0;
  }
  *(bool *)in_x5 = bVar2;
  return;
}



/* Entry: 102d0cddc; end: 102d0ce07;  */

void FUN_102d0cddc(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong in_x4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x20;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  if (in_x4 == 0) {
    bVar2 = false;
  }
  else {
    func_0x000107c4dfec();
    func_0x000107c61180();
    if (in_x4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d0cddc);
      (*pcVar1)();
    }
    uVar3 = 0;
    FUN_102d0ce08(0);
    uVar4 = in_x4;
    func_0x000107c5fc54(in_x4,uVar3);
    func_0x000107c61170(in_x4);
    if (uVar4 >> 0x3e == 0) {
      uVar6 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar6 = uVar4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar4) {
        uVar6 = uVar4;
      }
      func_0x000107c60480();
    }
    func_0x000107c6142c(uVar4);
    bVar2 = uVar6 != 0;
  }
  *(bool *)uVar5 = bVar2;
  return;
}



/* Entry: 102d0ce08; end: 102d0ce4b;  */

void FUN_102d0ce08(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f0d8a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126ca548;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112f0d8a0 = puVar1;
  return;
}



/* Entry: 102d0ce4c; end: 102d0ceaf; +[SCAdTargetingParameterHelper isDisabledForProductTypeInHoldout:adViewLocation:adConfigProvider:adConfigProviderV2:] */

uint FUN_102d0ce4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_6);
  FUN_102d0de14(param_3,param_5,param_6);
  func_0x000107c615e8(param_5);
  func_0x000107c615e8(param_6);
  return (uint)param_3 & 1;
}



/* Entry: 102d0ceb0; end: 102d0cf43; +[SCAdTargetingParameterHelper isDisabledInHoldout:adProductType:adViewLocation:adConfigProviderV2:] */

uint FUN_102d0ceb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_6);
  uVar1 = param_4;
  FUN_102d0de14(param_4,param_3,param_6);
  if (((uVar1 & 1) == 0) &&
     (uVar1 = param_4, FUN_102d0dfb8(param_4,param_5,param_3,param_6), (uVar1 & 1) == 0)) {
    FUN_102d0e090(param_4);
    uVar2 = (uint)param_4;
  }
  else {
    uVar2 = 1;
  }
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_6);
  return uVar2 & 1;
}



/* Entry: 102d0cf44; end: 102d0cfbf; +[SCAdTargetingParameterHelper inventoryIdFromInventoryPath:] */

void FUN_102d0cf44(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  lVar1 = param_2;
  FUN_102d0e158();
  func_0x000107c6142c(param_2);
  if (lVar1 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5fadc(param_3,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102d0cfc0; end: 102d0d19b; +[SCAdTargetingParameterHelper targetingParameters:adPosition:inventoryId:inventoryType:inventorySubtype:publisherId:posterId:targetingMetadata:adViewLocationType:adConfigProvider:adConfigProviderV2:adProductType:isDynamicInsertion:enableDPAProcessing:supportedAdTypes:] */

void FUN_102d0cfc0(undefined8 param_1,undefined *param_2,uint param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8,long param_9,
                  long param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                  undefined8 param_14,undefined1 param_15,undefined4 param_16,long param_17)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  long lStack_a8;
  long lStack_a0;
  
  if (param_5 == 0) {
    lStack_a0 = 0;
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x000107c5faec();
    puVar2 = param_2;
    lStack_a0 = param_5;
  }
  if (param_6 == 0) {
    lStack_a8 = 0;
    puVar1 = (undefined *)0x0;
    param_6 = lStack_a8;
  }
  else {
    func_0x000107c5faec();
    puVar1 = param_2;
  }
  if (param_9 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    func_0x000107c5faec(param_9);
    puVar5 = param_2;
  }
  lVar3 = param_10;
  func_0x000107c61174();
  func_0x000107c615f0(param_12);
  func_0x000107c61174();
  func_0x000107c61174();
  if (lVar3 == 0) {
    param_10 = 0;
  }
  else {
    param_2 = PTR___sSSN_11034da80;
    func_0x000107c5f9e8(param_10,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
    func_0x000107c61170(lVar3);
  }
  if (param_17 == 0) {
    param_2 = (undefined *)0x0;
  }
  else {
    func_0x000107c5faec();
    func_0x000107c61170(param_17);
  }
  uVar4 = (ulong)param_3;
  FUN_102d0e774(uVar4,lStack_a0,puVar2,param_6,puVar1,param_7,param_8,param_9,puVar5,param_10,
                param_11,param_12,param_13,param_14,param_15);
  func_0x000107c615e8(param_12);
  func_0x000107c61170(param_13);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(param_10);
  func_0x000107c6142c(puVar5);
  func_0x000107c6142c(puVar1);
  func_0x000107c6142c(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 102d0d19c; end: 102d0d45b; +[SCAdTargetingParameterHelper singleInventoryServeMetadata:adsPreferences:adProductType:loggingContext:targetingParameters:engagementSignal:adOrganicSignals:upcomingStoriesContext:adConfigProvider:adConfigProviderV2:adViewLocation:viewingSessionRecords:operaType:userAdIdProvider:appOpenTimestamp:resolvedLocation:adEOVTimerProvider:brandSafetyInventoryType:purgedServeItemIds:smartCacheAllocationEnabled:] */

void FUN_102d0d19c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,long param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,long param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  long param_21,undefined1 param_22)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_c8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  if (param_4 == 0) {
    uStack_90 = 0;
  }
  else {
    func_0x000107c5fc54(param_4,PTR___sSSN_11034da80);
    uStack_90 = param_4;
  }
  if (param_10 == 0) {
    uStack_98 = 0;
    param_10 = uStack_98;
  }
  else {
    func_0x000107c5fc54(param_10,PTR___s10Foundation4DataVN_110350ae0);
  }
  if (param_11 == 0) {
    uStack_c8 = 0;
  }
  else {
    uVar1 = 0;
    func_0x00010430c134(0);
    func_0x000107c5fc54(param_11,uVar1);
    uStack_c8 = param_11;
  }
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_9);
  func_0x000107c615f0(param_12);
  func_0x000107c615f0(param_13);
  lVar2 = param_15;
  func_0x000107c61174();
  func_0x000107c615f0(param_17);
  func_0x000107c61174();
  func_0x000107c61174();
  lVar3 = param_21;
  func_0x000107c61174();
  if (lVar2 == 0) {
    param_15 = 0;
  }
  else {
    uVar1 = 0;
    func_0x00010427a344(0);
    func_0x000107c5fc54(param_15,uVar1);
    func_0x000107c61170(lVar2);
  }
  if (lVar3 == 0) {
    param_21 = 0;
  }
  else {
    func_0x000107c5fc54(param_21,PTR___sSSN_11034da80);
    func_0x000107c61170(lVar3);
  }
  lVar2 = uStack_90;
  FUN_102d0f6d8(param_1,uStack_90,param_5,param_6,param_7,param_8,param_9,param_10,uStack_c8,
                param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,param_20,
                param_21,param_22);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c615e8(param_12);
  func_0x000107c615e8(param_13);
  func_0x000107c615e8(param_17);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_19);
  func_0x000107c6142c(param_21);
  func_0x000107c6142c(param_15);
  func_0x000107c6142c(uStack_c8);
  func_0x000107c6142c(param_10);
  func_0x000107c6142c(uStack_90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 102d0d45c; end: 102d0d4c3; +[SCAdTargetingParameterHelper targetingParametersForUserStories:adConfigProvider:adConfigProviderV2:] */

void FUN_102d0d45c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_4);
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  FUN_102d104dc(param_3,param_4,param_5);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102d0d4c4; end: 102d0d573; +[SCAdTargetingParameterHelper targetingParametersForContentInterstitial:adViewLocationType:adConfigProvider:adConfigProviderV2:adProductType:] */

void FUN_102d0d4c4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c615f0(param_5);
  uVar1 = param_6;
  func_0x000107c61174(param_6);
  func_0x000102d1097c(param_3,param_2,param_4,param_5,param_6,param_7);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102d0d574; end: 102d0d693; +[SCAdTargetingParameterHelper targetingParametersForPublicStories:adConfigProvider:adConfigProviderV2:inventorySubtype:adProductType:adPosition:profileId:posterId:contentCategories:] */

void FUN_102d0d574(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,long param_10,long param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_9 == 0) {
    param_9 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec();
    uVar1 = param_2;
  }
  if (param_10 == 0) {
    param_10 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_10);
  }
  if (param_11 != 0) {
    uVar2 = 0;
    func_0x0001002ed07c(0);
    func_0x000107c5fc54(param_11,uVar2);
  }
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_5);
  func_0x000102d10ddc(param_3,param_4,param_5,param_6,param_7,param_9,uVar1,param_10,param_2,
                      param_11);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c6142c(param_11);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102d0d694; end: 102d0d773; +[SCAdTargetingParameterHelper targetingParametersForLongformSpotlight:adConfigProvider:adConfigProviderV2:profileId:inventorySubtype:contentCategories:] */

void FUN_102d0d694(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  
  if (param_6 == 0) {
    param_6 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_6);
  }
  if (param_8 != 0) {
    uVar1 = 0;
    func_0x0001002ed07c(0);
    func_0x000107c5fc54(param_8,uVar1);
  }
  func_0x000107c615f0(param_4);
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x000102d11314(param_3,param_4,param_5,param_6,param_2,param_7,param_8);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(uVar1);
  func_0x000107c6142c(param_8);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102d0d774; end: 102d0d77f; +[SCAdTargetingParameterHelper targetingParametersForSponsoredSnaps:adConfigProviderV2:] */

void FUN_102d0d774(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c615f0(param_3);
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  uVar2 = param_3;
  (*(code *)0x102d117dc)(param_3,param_4);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102d0d780; end: 102d0d78b; +[SCAdTargetingParameterHelper targetingParametersForMapPromotedPlace:adConfigProviderV2:] */

void FUN_102d0d780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c615f0(param_3);
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  uVar2 = param_3;
  (*(code *)0x102d11f24)(param_3,param_4);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102d0d78c; end: 102d0d7ef;  */

void FUN_102d0d78c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c615f0(param_3);
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  uVar2 = param_3;
  (*param_5)(param_3,param_4);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102d0d7f0; end: 102d0d82b; -[SCAdTargetingParameterHelper init] */

void FUN_102d0d7f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d0d82c; end: 102d0d897;  */

void FUN_102d0d82c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102d0d898; end: 102d0dadb;  */

undefined * FUN_102d0d898(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102d0d9b4);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112f0d8f0;
    func_0x0001000285a8(0x112f0d8f0,&UNK_10dce2bf0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x30) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_110757808);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x30 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x30);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 102d0dadc; end: 102d0de13;  */

ulong FUN_102d0dadc(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d0dbac);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d0dbb0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x00010430c134(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    func_0x00010430c134(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000020,0x800000010f10a0d0);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102d0dc78);
  (*pcVar2)();
}



/* Entry: 102d0de14; end: 102d0dfb7;  */

void FUN_102d0de14(undefined8 param_1,ulong param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  char *pcVar4;
  
  if (param_3 == 0) {
    return;
  }
  uVar1 = 0x5344415f574f4853;
  func_0x000107c5fadc(0x5344415f574f4853,0xec000000464f435f);
  lVar2 = param_3;
  func_0x000107c4dfc0();
  func_0x000107c61170(uVar1);
  if ((int)lVar2 == 0) {
    return;
  }
  switch(param_1) {
  case 0:
  case 7:
    pcVar4 = "ADS_IN_DISCOVER_COF";
    goto code_r0x000102d0df60;
  default:
    goto LAB_102d0df98;
  case 2:
    uVar1 = 0x415f4e495f534441;
    uVar3 = 0xed0000464f435f41;
    goto code_r0x000102d0df74;
  case 4:
    pcVar4 = "ERSTITIAL_ADS_COF";
    uVar1 = 0xd000000000000012;
    break;
  case 5:
    pcVar4 = "ADS_IN_SHOWS_COF";
    uVar1 = 0xd000000000000021;
    break;
  case 6:
    if (param_2 == 0) {
      return;
    }
    uVar3 = param_2;
    func_0x000107c41eb4();
    if ((uVar3 & 1) != 0) {
      return;
    }
    func_0x000107c41ebc(param_2);
    return;
  case 8:
  case 0xd:
    uVar3 = 0x800000010f10a230;
    uVar1 = 0xd000000000000010;
    goto code_r0x000102d0df74;
  case 0x11:
    pcVar4 = "SHOW_PUBLIC_ADS_COF";
code_r0x000102d0df60:
    pcVar4 = pcVar4 + -0x20;
    uVar1 = 0xd000000000000013;
    break;
  case 0x15:
    pcVar4 = "ads_ios_disable_ci_ads_for_you";
    uVar1 = 0xd00000000000001d;
  }
  uVar3 = (ulong)pcVar4 | 0x8000000000000000;
code_r0x000102d0df74:
  func_0x000107c5fadc(uVar1,uVar3);
  func_0x000107c4dfc0(param_3);
  func_0x000107c61170(uVar1);
LAB_102d0df98:
  return;
}



/* Entry: 102d0dfb8; end: 102d0e08f;  */

uint FUN_102d0dfb8(int param_1,int param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (param_2 - 0x14U < 2 || param_2 == 1) {
    if (param_1 != 4) {
      if ((param_3 != 0) && (func_0x000107c41eb0(), (param_3 & 1) != 0)) {
        return 1;
      }
      uVar1 = 0;
      func_0x00010403f32c();
      func_0x00010403de0c();
      if (((uVar1 & 1) != 0) && (param_4 != 0)) {
        uVar2 = 0xd00000000000001e;
        func_0x000107c5fadc(0xd00000000000001e,0x800000010f10a1d0);
        func_0x000107c3ebdc();
        func_0x000107c61170(uVar2);
        if ((param_1 == 5) && ((param_4 & 1) != 0)) {
          return 1;
        }
      }
    }
  }
  else if (param_2 == 0x1c) {
    if (param_3 == 0) {
      return 1;
    }
    func_0x000107c426ac(param_3);
    return (uint)param_3 ^ 1;
  }
  return 0;
}



/* Entry: 102d0e090; end: 102d0e157;  */

bool FUN_102d0e090(int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uStack_28;
  
  uVar3 = 0;
  func_0x000104041dbc();
  func_0x00010404036c();
  bVar2 = false;
  switch(uVar3) {
  case 0:
    goto code_r0x000102d0e124;
  case 1:
    bVar2 = param_1 == 2;
    break;
  case 2:
    bVar2 = param_1 == 5;
    break;
  case 3:
    bVar2 = param_1 == 7;
    break;
  case 4:
    bVar2 = param_1 == 8;
    break;
  case 5:
    bVar2 = param_1 == 0xd;
    break;
  case 6:
    bVar2 = param_1 == 0x10;
    break;
  case 7:
    bVar2 = param_1 == 6;
    break;
  case 8:
    bVar2 = param_1 == 0x11;
    break;
  case 9:
    bVar2 = param_1 == 0x15;
    break;
  default:
    uStack_28 = uVar3;
    func_0x000107c60614(&UNK_1107399a0,&uStack_28,&UNK_1107399a0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102d0e158);
    (*pcVar1)();
  }
  bVar2 = !bVar2;
code_r0x000102d0e124:
  return bVar2;
}



/* Entry: 102d0e158; end: 102d0e29f;  */

undefined1  [16] FUN_102d0e158(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long lVar7;
  undefined1 auVar8 [16];
  long alStack_70 [2];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lVar1 = 0x112d483a8;
  func_0x0001000285a8(0x112d483a8,&UNK_10d910f00);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  lVar7 = (long)&uStack_60 + lVar1;
  if (param_2 != 0) {
    uStack_60 = 0x2f;
    uStack_58 = 0xe100000000000000;
    lVar2 = 0;
    uStack_50 = param_1;
    lStack_48 = param_2;
    func_0x000107c5ef14();
    lVar3 = lVar7;
    (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar7,1,1,lVar2);
    func_0x000100e8b654();
    *(long *)((long)alStack_70 + lVar1) = lVar3;
    *(long *)((long)alStack_70 + lVar1 + 8) = lVar3;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    func_0x000107c60218(&uStack_60,0,0,0,1,lVar7,PTR___sSSN_11034da80,PTR___sSSN_11034da80);
    FUN_102d123fc(lVar7,0x112d483a8,&UNK_10d910f00);
    if ((uVar5 & 0xff) != 1) {
      func_0x000100ed9f54(uVar4,param_1,param_2);
      func_0x000107c5fb2c();
      func_0x000107c6142c(uVar6);
      goto LAB_102d0e288;
    }
  }
  uVar4 = 0;
  param_1 = 0;
LAB_102d0e288:
  auVar8._8_8_ = param_1;
  auVar8._0_8_ = uVar4;
  return auVar8;
}



/* Entry: 102d0e2a0; end: 102d0e303;  */

undefined1  [16] FUN_102d0e2a0(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((long)param_1 < 500) {
    if (((param_1 - 400 < 0xe) && ((1L << (param_1 - 400 & 0x3f) & 0x213bU) != 0)) ||
       ((param_1 == 0 || (param_1 == 200)))) {
LAB_102d0e2f8:
      auVar1._8_8_ = 0;
      auVar1._0_8_ = param_1;
      return auVar1;
    }
  }
  else if ((param_1 - 500 < 5) && (param_1 - 500 != 1)) goto LAB_102d0e2f8;
  return ZEXT816(1) << 0x40;
}



/* Entry: 102d0e304; end: 102d0e457;  */

uint FUN_102d0e304(undefined8 param_1,uint param_2,long param_3)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_38;
  
  switch(param_1) {
  case 0:
  case 1:
  case 3:
  case 4:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x17:
    break;
  case 2:
    if (param_3 != 0) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (param_3 != 0) {
        pcVar1 = "ads_enable_story_ad_in_fus";
        uVar3 = 0xd00000000000001a;
code_r0x000102d0e404:
        func_0x000107c5fadc(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
        lVar4 = param_3;
        func_0x000107c4dfc0(param_3);
        param_2 = (uint)lVar4;
        func_0x000107c615e8(param_3);
        func_0x000107c61170(uVar3);
        goto code_r0x000102d0e33c;
      }
    }
    break;
  case 5:
    if (param_3 != 0) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (param_3 != 0) {
        pcVar1 = "ads_enable_story_ad_in_ci";
        uVar3 = 0xd000000000000019;
        goto code_r0x000102d0e404;
      }
    }
    break;
  case 6:
  case 0x16:
    param_2 = 1;
  case 7:
  case 0xd:
  case 0x15:
    goto code_r0x000102d0e33c;
  case 0x11:
    if (param_3 != 0) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (param_3 != 0) {
        pcVar1 = "ads_enable_story_ad_in_public_stories";
        uVar3 = 0xd000000000000025;
        goto code_r0x000102d0e404;
      }
    }
    break;
  default:
    uStack_38 = param_1;
    func_0x000107c60614(&UNK_1107a1dc0,&uStack_38,&UNK_1107a1dc0,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102d0e458);
    (*pcVar2)();
  }
  param_2 = 0;
code_r0x000102d0e33c:
  return param_2 & 1;
}



/* Entry: 102d0e458; end: 102d0e773;  */

undefined1  [16] FUN_102d0e458(int param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  if (param_1 == 0x16) {
    uVar9 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    uVar6 = 0x50;
    func_0x000107c613fc();
    *(undefined8 *)(uVar9 + 0x18) = 6;
    *(undefined8 *)(uVar9 + 0x10) = 3;
    uVar2 = 1;
    func_0x000103bfd6b4();
    *(undefined8 *)(uVar9 + 0x20) = uVar2;
    *(undefined8 *)(uVar9 + 0x28) = uVar6;
    uVar2 = 3;
    func_0x000103bfd6b4();
    *(undefined8 *)(uVar9 + 0x30) = uVar2;
    *(undefined8 *)(uVar9 + 0x38) = uVar6;
    uVar2 = 5;
    func_0x000103bfd6b4();
    *(undefined8 *)(uVar9 + 0x40) = uVar2;
    *(undefined8 *)(uVar9 + 0x48) = uVar6;
    if (param_2 != 0) {
      lVar5 = param_2;
      func_0x000107c5c734();
      func_0x000107c61180();
      uVar8 = uVar9;
      if (lVar5 != 0) {
        uVar2 = 0xd000000000000029;
        uVar6 = 0x800000010f109eb0;
        func_0x000107c5fadc(0xd000000000000029);
        lVar3 = lVar5;
        func_0x000107c3ebdc();
        func_0x000107c615e8(lVar5);
        func_0x000107c61170(uVar2);
        if ((int)lVar3 != 0) {
          uVar2 = 10;
          func_0x000103bfd6b4();
          uVar1 = *(ulong *)(uVar9 + 0x10);
          if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar1) {
            uVar8 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
            func_0x0001000d182c(uVar8,uVar1 + 1,1,uVar9);
          }
          *(ulong *)(uVar8 + 0x10) = uVar1 + 1;
          lVar5 = uVar8 + uVar1 * 0x10;
          *(undefined8 *)(lVar5 + 0x20) = uVar2;
          *(undefined8 *)(lVar5 + 0x28) = uVar6;
        }
      }
      func_0x000107c5c734();
      func_0x000107c61180();
      uVar9 = uVar8;
      if (param_2 != 0) {
        uVar6 = 0x800000010f109e80;
        uVar2 = 0xd000000000000027;
        func_0x000107c5fadc(0xd000000000000027);
        lVar5 = param_2;
        func_0x000107c3ebdc();
        func_0x000107c615e8(param_2);
        func_0x000107c61170(uVar2);
        if ((int)lVar5 != 0) {
          uVar2 = 6;
          func_0x000103bfd6b4();
          uVar1 = *(ulong *)(uVar8 + 0x10);
          if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar1) {
            uVar9 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
            func_0x0001000d182c(uVar9,uVar1 + 1,1,uVar8);
          }
          *(ulong *)(uVar9 + 0x10) = uVar1 + 1;
          lVar5 = uVar9 + uVar1 * 0x10;
          *(undefined8 *)(lVar5 + 0x20) = uVar2;
          *(undefined8 *)(lVar5 + 0x28) = uVar6;
        }
      }
    }
    uVar2 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    uVar6 = uVar2;
    func_0x00010011d734();
    uVar4 = 0x2c;
    uVar7 = 0xe100000000000000;
    func_0x000107c5fa80(0x2c,0xe100000000000000,uVar2,uVar6);
    func_0x000107c6142c(uVar9);
  }
  else {
    lVar5 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    uVar6 = 0x80;
    func_0x000107c613fc();
    *(undefined8 *)(lVar5 + 0x18) = 0xc;
    *(undefined8 *)(lVar5 + 0x10) = 6;
    uVar2 = 1;
    func_0x000103bfd6b4();
    *(undefined8 *)(lVar5 + 0x20) = uVar2;
    *(undefined8 *)(lVar5 + 0x28) = uVar6;
    uVar2 = 3;
    func_0x000103bfd6b4();
    *(undefined8 *)(lVar5 + 0x30) = uVar2;
    *(undefined8 *)(lVar5 + 0x38) = uVar6;
    uVar2 = 6;
    func_0x000103bfd6b4();
    *(undefined8 *)(lVar5 + 0x40) = uVar2;
    *(undefined8 *)(lVar5 + 0x48) = uVar6;
    uVar2 = 10;
    func_0x000103bfd6b4();
    *(undefined8 *)(lVar5 + 0x50) = uVar2;
    *(undefined8 *)(lVar5 + 0x58) = uVar6;
    uVar2 = 0xf;
    func_0x000103bfd6b4();
    *(undefined8 *)(lVar5 + 0x60) = uVar2;
    *(undefined8 *)(lVar5 + 0x68) = uVar6;
    uVar2 = 5;
    func_0x000103bfd6b4();
    *(undefined8 *)(lVar5 + 0x70) = uVar2;
    *(undefined8 *)(lVar5 + 0x78) = uVar6;
    uVar2 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    uVar6 = uVar2;
    func_0x00010011d734();
    uVar4 = 0x2c;
    uVar7 = 0xe100000000000000;
    func_0x000107c5fa80(0x2c,0xe100000000000000,uVar2,uVar6);
    func_0x000107c61574(lVar5);
  }
  auVar10._8_8_ = uVar7;
  auVar10._0_8_ = uVar4;
  return auVar10;
}



/* Entry: 102d0e774; end: 102d0f51f;  */

undefined8 *****
FUN_102d0e774(undefined4 param_1,undefined8 param_2,undefined8 *****param_3,undefined8 *****param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 *****param_10,undefined8 param_11,ulong param_12,
             long param_13,ulong param_14,uint param_15,undefined4 param_16,undefined8 param_17,
             undefined8 param_18)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  long lVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 *****pppppuVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 *****pppppuVar14;
  undefined8 *****pppppuVar15;
  uint uVar16;
  undefined8 uVar17;
  long extraout_x8;
  undefined8 ****ppppuVar18;
  undefined1 *puVar19;
  long lVar20;
  ulong uVar21;
  undefined8 uStack_440;
  byte abStack_438 [8];
  ulong auStack_430 [3];
  undefined1 auStack_418 [8];
  ulong auStack_410 [2];
  byte abStack_400 [8];
  ulong auStack_3f8 [13];
  byte abStack_390 [8];
  ulong auStack_388 [13];
  undefined1 auStack_320 [8];
  ulong uStack_318;
  uint uStack_310;
  undefined4 uStack_30c;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  undefined4 uStack_2e4;
  ulong uStack_2e0;
  long lStack_2d8;
  ulong uStack_2d0;
  undefined4 uStack_2c4;
  undefined8 uStack_2c0;
  undefined8 ****ppppuStack_2b8;
  undefined8 uStack_2b0;
  undefined8 ****ppppuStack_2a8;
  undefined8 uStack_2a0;
  undefined8 ****ppppuStack_298;
  undefined8 uStack_290;
  undefined8 ****ppppuStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 ****ppppuStack_270;
  uint uStack_264;
  undefined8 uStack_260;
  undefined4 uStack_254;
  undefined8 ****ppppuStack_250;
  undefined8 ****ppppuStack_248;
  undefined4 uStack_23c;
  undefined8 uStack_238;
  undefined8 ****ppppuStack_230;
  undefined8 uStack_228;
  undefined4 uStack_21c;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined4 uStack_204;
  undefined8 ****ppppuStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  undefined8 ****ppppuStack_1e0;
  undefined8 uStack_1d8;
  undefined8 ****ppppuStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  
  lVar4 = 0x112d483a8;
  puVar11 = &UNK_10d910f00;
  uStack_218 = param_8;
  uStack_210 = param_7;
  uStack_204 = param_1;
  uStack_1f8 = param_6;
  uStack_1f0 = param_2;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = -extraout_x8;
  puVar19 = auStack_320 + lVar4;
  ppuVar5 = &PTR____CFConstantStringClassReference_110dd20b8;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110dd20b8);
  if (param_10 != (undefined8 *****)0x0) {
    if (param_10[2] == (undefined8 ****)0x0) {
LAB_102d0e94c:
      uStack_1c8 = 0;
      ppppuStack_1d0 = (undefined8 *****)0x0;
      lStack_1b8 = 0;
      uStack_1c0 = 0;
      func_0x000107c6142c(puVar11);
      goto LAB_102d0e95c;
    }
    func_0x000107c61434(param_10);
    puVar12 = puVar11;
    func_0x000100029284(ppuVar5);
    if (((ulong)puVar12 & 1) == 0) {
      func_0x000107c6142c(param_10);
      goto LAB_102d0e94c;
    }
    func_0x0001000bb420(param_10[7] + (long)ppuVar5 * 4,&ppppuStack_1d0);
    func_0x000107c6142c(puVar11);
    func_0x000107c6142c(param_10);
    if (lStack_1b8 == 0) goto LAB_102d0e95c;
    pppppuVar14 = &ppppuStack_1e0;
    pppppuVar8 = &ppppuStack_1d0;
    func_0x000107c6147c(pppppuVar14,pppppuVar8,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uVar9 = uStack_1d8;
    pppppuVar15 = (undefined8 *****)ppppuStack_1e0;
    if (((ulong)pppppuVar14 & 1) == 0) {
      func_0x000107c61434(param_3);
      pppppuVar15 = param_3;
    }
    else {
      uStack_1e8 = param_12;
      ppppuStack_1d0 = ppppuStack_1e0;
      uStack_1c8 = uStack_1d8;
      ppppuStack_1e0 = (undefined8 *****)0x2f;
      uStack_1d8 = 0xe100000000000000;
      lVar6 = 0;
      func_0x000107c5ef14();
      puVar7 = puVar19;
      (**(code **)(*(long *)(lVar6 + -8) + 0x38))(puVar19,1,1,lVar6);
      func_0x000100e8b654();
      *(undefined1 **)((long)auStack_388 + lVar4 + 0x58) = puVar7;
      *(undefined1 **)((long)auStack_388 + lVar4 + 0x60) = puVar7;
      uVar13 = 0;
      uVar16 = 0;
      uVar17 = 0;
      func_0x000107c60218(&ppppuStack_1e0,0,0,0,1,puVar19,PTR___sSSN_11034da80,PTR___sSSN_11034da80)
      ;
      pppppuVar8 = (undefined8 *****)0x112d483a8;
      FUN_102d123fc(puVar19,0x112d483a8,&UNK_10d910f00);
      if ((uVar16 & 0xff) == 1) {
        func_0x000107c6142c(uVar9);
        func_0x000107c61434(param_3);
        param_12 = uStack_1e8;
        pppppuVar15 = param_3;
      }
      else {
        func_0x000100ed9f54(uVar13,pppppuVar15,uVar9);
        func_0x000107c5fb2c();
        pppppuVar8 = pppppuVar15;
        uStack_1f0 = uVar13;
        func_0x000107c6142c(uVar17);
        func_0x000107c6142c(uVar9);
        param_12 = uStack_1e8;
      }
    }
    ppuVar5 = &PTR____CFConstantStringClassReference_110dd2058;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110dd2058);
    param_3 = pppppuVar15;
    if (param_10[2] != (undefined8 ****)0x0) goto LAB_102d0e998;
    goto LAB_102d0e9f4;
  }
  func_0x000107c6142c(puVar11);
  uStack_1c8 = 0;
  ppppuStack_1d0 = (undefined8 *****)0x0;
  lStack_1b8 = 0;
  uStack_1c0 = 0;
LAB_102d0e95c:
  pppppuVar8 = (undefined8 *****)0x112d387f8;
  FUN_102d123fc(&ppppuStack_1d0,0x112d387f8,&UNK_10d902650);
  func_0x000107c61434(param_3);
  ppuVar5 = &PTR____CFConstantStringClassReference_110dd2058;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110dd2058);
  if (param_10 == (undefined8 *****)0x0) {
    func_0x000107c6142c(pppppuVar8);
    uStack_1c8 = 0;
    ppppuStack_1d0 = (undefined8 *****)0x0;
    lStack_1b8 = 0;
    uStack_1c0 = 0;
LAB_102d0ea40:
    pppppuVar14 = (undefined8 *****)0x112d387f8;
    FUN_102d123fc(&ppppuStack_1d0,0x112d387f8,&UNK_10d902650);
LAB_102d0ea58:
    uStack_280 = param_5;
    func_0x000107c61434(param_5);
  }
  else {
    pppppuVar15 = param_3;
    if (param_10[2] == (undefined8 ****)0x0) {
LAB_102d0e9f4:
      uStack_1c8 = 0;
      ppppuStack_1d0 = (undefined8 *****)0x0;
      lStack_1b8 = 0;
      uStack_1c0 = 0;
      param_3 = pppppuVar15;
    }
    else {
LAB_102d0e998:
      func_0x000107c61434(param_10);
      pppppuVar14 = pppppuVar8;
      func_0x000100029284(ppuVar5);
      if (((ulong)pppppuVar14 & 1) == 0) {
        func_0x000107c6142c(param_10);
        pppppuVar15 = param_3;
        goto LAB_102d0e9f4;
      }
      func_0x0001000bb420(param_10[7] + (long)ppuVar5 * 4,&ppppuStack_1d0);
      func_0x000107c6142c(pppppuVar8);
      pppppuVar8 = param_10;
    }
    func_0x000107c6142c(pppppuVar8);
    if (lStack_1b8 == 0) goto LAB_102d0ea40;
    pppppuVar8 = &ppppuStack_1e0;
    pppppuVar14 = &ppppuStack_1d0;
    func_0x000107c6147c(pppppuVar8,pppppuVar14,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if (((ulong)pppppuVar8 & 1) == 0) goto LAB_102d0ea58;
    uStack_280 = uStack_1d8;
    param_4 = (undefined8 *****)ppppuStack_1e0;
  }
  uStack_1e8 = param_14;
  if (param_12 == 0) {
    uStack_21c = 0;
    if (param_13 != 0) goto LAB_102d0ea90;
LAB_102d0eb0c:
    uStack_228 = 0;
  }
  else {
    uVar21 = param_12;
    func_0x000107c4259c();
    uStack_21c = (undefined4)uVar21;
    if (param_13 == 0) goto LAB_102d0eb0c;
LAB_102d0ea90:
    lVar6 = param_13;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar6 == 0) goto LAB_102d0eb0c;
    uVar9 = 0xd00000000000002b;
    pppppuVar14 = (undefined8 *****)0x800000010f109e50;
    func_0x000107c5fadc(0xd00000000000002b);
    lVar20 = lVar6;
    func_0x000107c3ebdc();
    func_0x000107c615e8(lVar6);
    func_0x000107c61170(uVar9);
    if ((int)lVar20 == 0) goto LAB_102d0eb0c;
    uStack_228 = param_11;
    if ((int)uStack_1e8 != 2) {
      uStack_228 = 0;
    }
  }
  ppuVar5 = &PTR____CFConstantStringClassReference_110dd1f98;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110dd1f98);
  if (param_10 == (undefined8 *****)0x0) {
    func_0x000107c6142c(pppppuVar14);
    uStack_1c8 = 0;
    ppppuStack_1d0 = (undefined8 *****)0x0;
    lStack_1b8 = 0;
    uStack_1c0 = 0;
LAB_102d0ebe0:
    pppppuVar14 = (undefined8 *****)0x112d387f8;
    pppppuVar8 = &ppppuStack_1d0;
    FUN_102d123fc(pppppuVar8,0x112d387f8,&UNK_10d902650);
    uStack_238 = 0;
    ppppuStack_230 = (undefined8 *****)0x0;
    if (param_13 == 0) goto LAB_102d0ec5c;
LAB_102d0ec00:
    lVar6 = param_13;
    func_0x000107c5c734();
    func_0x000107c61180();
    pppppuVar8 = (undefined8 *****)0x0;
    if (lVar6 == 0) goto LAB_102d0ec5c;
    pppppuVar14 = (undefined8 *****)0x800000010f109e20;
    pppppuVar8 = (undefined8 *****)0xd000000000000021;
    func_0x000107c5fadc();
    lVar20 = lVar6;
    func_0x000107c3ebdc();
    uStack_23c = (undefined4)lVar20;
    func_0x000107c615e8(lVar6);
    func_0x000107c61170();
  }
  else {
    if (param_10[2] == (undefined8 ****)0x0) {
LAB_102d0eb88:
      uStack_1c8 = 0;
      ppppuStack_1d0 = (undefined8 *****)0x0;
      lStack_1b8 = 0;
      uStack_1c0 = 0;
    }
    else {
      func_0x000107c61434(param_10);
      pppppuVar8 = pppppuVar14;
      func_0x000100029284(ppuVar5);
      if (((ulong)pppppuVar8 & 1) == 0) {
        func_0x000107c6142c(param_10);
        goto LAB_102d0eb88;
      }
      func_0x0001000bb420(param_10[7] + (long)ppuVar5 * 4,&ppppuStack_1d0);
      func_0x000107c6142c(pppppuVar14);
      pppppuVar14 = param_10;
    }
    func_0x000107c6142c(pppppuVar14);
    if (lStack_1b8 == 0) goto LAB_102d0ebe0;
    pppppuVar8 = &ppppuStack_1e0;
    pppppuVar14 = &ppppuStack_1d0;
    func_0x000107c6147c(pppppuVar8,pppppuVar14,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uStack_238 = uStack_1d8;
    ppppuStack_230 = ppppuStack_1e0;
    if ((int)pppppuVar8 == 0) {
      ppppuStack_230 = (undefined8 *****)0x0;
      uStack_238 = 0;
    }
    if (param_13 != 0) goto LAB_102d0ec00;
LAB_102d0ec5c:
    uStack_23c = 0;
  }
  func_0x000104041de8();
  uVar21 = 0;
  if (pppppuVar14 != (undefined8 *****)0x0) {
    uVar21 = (ulong)pppppuVar8 & 0xffffffffffff;
  }
  pppppuVar15 = (undefined8 *****)0xe000000000000000;
  if (pppppuVar14 != (undefined8 *****)0x0) {
    pppppuVar15 = pppppuVar14;
  }
  ppppuStack_250 = pppppuVar14;
  ppppuStack_248 = pppppuVar8;
  func_0x000107c61434(pppppuVar14);
  func_0x000107c6142c(pppppuVar15);
  if (((ulong)pppppuVar15 & 0x2000000000000000) != 0) {
    uVar21 = (ulong)pppppuVar15 >> 0x38 & 0xf;
  }
  if (uVar21 == 0) {
    uVar3 = 0;
    func_0x000104041dbc();
    func_0x0001040403fc();
    uStack_254 = uVar3;
  }
  else {
    uStack_254 = 1;
  }
  uVar9 = 0;
  func_0x000104041dbc();
  func_0x0001040406dc();
  FUN_102d0e2a0();
  uStack_264 = (uint)pppppuVar14;
  ppuVar5 = &PTR____CFConstantStringClassReference_110dd1ff8;
  uStack_260 = uVar9;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110dd1ff8);
  if (param_10 == (undefined8 *****)0x0) {
    func_0x000107c6142c(pppppuVar14);
    uStack_1c8 = 0;
    ppppuStack_1d0 = (undefined8 *****)0x0;
    lStack_1b8 = 0;
    uStack_1c0 = 0;
LAB_102d0edcc:
    pppppuVar14 = (undefined8 *****)0x112d387f8;
    FUN_102d123fc(&ppppuStack_1d0,0x112d387f8,&UNK_10d902650);
    ppuVar5 = &PTR____CFConstantStringClassReference_110dd2098;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110dd2098);
    if (param_10 != (undefined8 *****)0x0) {
      uStack_278 = 0;
      ppppuStack_270 = (undefined8 *****)0x0;
      ppppuVar18 = param_10[2];
      goto joined_r0x000102d0ee00;
    }
    func_0x000107c6142c(pppppuVar14);
    uStack_278 = 0;
    ppppuStack_270 = (undefined8 *****)0x0;
    uStack_1c8 = 0;
    ppppuStack_1d0 = (undefined8 *****)0x0;
    lStack_1b8 = 0;
    uStack_1c0 = 0;
LAB_102d0eecc:
    pppppuVar14 = (undefined8 *****)0x112d387f8;
    FUN_102d123fc(&ppppuStack_1d0,0x112d387f8,&UNK_10d902650);
    ppuVar5 = &PTR____CFConstantStringClassReference_110dd1fb8;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110dd1fb8);
    if (param_10 != (undefined8 *****)0x0) {
      uStack_290 = 0;
      ppppuStack_288 = (undefined8 *****)0x0;
      ppppuVar18 = param_10[2];
      goto joined_r0x000102d0ef00;
    }
    func_0x000107c6142c(pppppuVar14);
    uStack_290 = 0;
    ppppuStack_288 = (undefined8 *****)0x0;
    uStack_1c8 = 0;
    ppppuStack_1d0 = (undefined8 *****)0x0;
    lStack_1b8 = 0;
    uStack_1c0 = 0;
LAB_102d0efcc:
    pppppuVar14 = (undefined8 *****)0x112d387f8;
    FUN_102d123fc(&ppppuStack_1d0,0x112d387f8,&UNK_10d902650);
    ppuVar5 = &PTR____CFConstantStringClassReference_110dd2038;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110dd2038);
    if (param_10 != (undefined8 *****)0x0) {
      uStack_2a0 = 0;
      ppppuStack_298 = (undefined8 *****)0x0;
      ppppuVar18 = param_10[2];
      goto joined_r0x000102d0f000;
    }
    func_0x000107c6142c(pppppuVar14);
    uStack_2a0 = 0;
    ppppuStack_298 = (undefined8 *****)0x0;
    uStack_1c8 = 0;
    ppppuStack_1d0 = (undefined8 *****)0x0;
    lStack_1b8 = 0;
    uStack_1c0 = 0;
LAB_102d0f0cc:
    pppppuVar14 = (undefined8 *****)0x112d387f8;
    FUN_102d123fc(&ppppuStack_1d0,0x112d387f8,&UNK_10d902650);
    ppuVar5 = &PTR____CFConstantStringClassReference_110dd2018;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110dd2018);
    if (param_10 != (undefined8 *****)0x0) {
      uStack_2b0 = 0;
      ppppuStack_2a8 = (undefined8 *****)0x0;
      ppppuVar18 = param_10[2];
      goto joined_r0x000102d0f100;
    }
    func_0x000107c6142c(pppppuVar14);
    uStack_2b0 = 0;
    ppppuStack_2a8 = (undefined8 *****)0x0;
    uStack_1c8 = 0;
    ppppuStack_1d0 = (undefined8 *****)0x0;
    lStack_1b8 = 0;
    uStack_1c0 = 0;
  }
  else {
    if (param_10[2] == (undefined8 ****)0x0) {
LAB_102d0ed60:
      uStack_1c8 = 0;
      ppppuStack_1d0 = (undefined8 *****)0x0;
      lStack_1b8 = 0;
      uStack_1c0 = 0;
    }
    else {
      func_0x000107c61434(param_10);
      pppppuVar8 = pppppuVar14;
      func_0x000100029284(ppuVar5);
      if (((ulong)pppppuVar8 & 1) == 0) {
        func_0x000107c6142c(param_10);
        goto LAB_102d0ed60;
      }
      func_0x0001000bb420(param_10[7] + (long)ppuVar5 * 4,&ppppuStack_1d0);
      func_0x000107c6142c(pppppuVar14);
      pppppuVar14 = param_10;
    }
    func_0x000107c6142c(pppppuVar14);
    if (lStack_1b8 == 0) goto LAB_102d0edcc;
    pppppuVar8 = &ppppuStack_1e0;
    pppppuVar14 = &ppppuStack_1d0;
    func_0x000107c6147c(pppppuVar8,pppppuVar14,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uStack_278 = uStack_1d8;
    ppppuStack_270 = ppppuStack_1e0;
    if ((int)pppppuVar8 == 0) {
      ppppuStack_270 = (undefined8 *****)0x0;
      uStack_278 = 0;
    }
    ppuVar5 = &PTR____CFConstantStringClassReference_110dd2098;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110dd2098);
    ppppuVar18 = param_10[2];
joined_r0x000102d0ee00:
    if (ppppuVar18 == (undefined8 ****)0x0) {
LAB_102d0ee4c:
      uStack_1c8 = 0;
      ppppuStack_1d0 = (undefined8 *****)0x0;
      lStack_1b8 = 0;
      uStack_1c0 = 0;
    }
    else {
      func_0x000107c61434(param_10);
      pppppuVar8 = pppppuVar14;
      func_0x000100029284(ppuVar5);
      if (((ulong)pppppuVar8 & 1) == 0) {
        func_0x000107c6142c(param_10);
        goto LAB_102d0ee4c;
      }
      func_0x0001000bb420(param_10[7] + (long)ppuVar5 * 4,&ppppuStack_1d0);
      func_0x000107c6142c(pppppuVar14);
      pppppuVar14 = param_10;
    }
    func_0x000107c6142c(pppppuVar14);
    if (lStack_1b8 == 0) goto LAB_102d0eecc;
    pppppuVar8 = &ppppuStack_1e0;
    pppppuVar14 = &ppppuStack_1d0;
    func_0x000107c6147c(pppppuVar8,pppppuVar14,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uStack_290 = uStack_1d8;
    ppppuStack_288 = ppppuStack_1e0;
    if ((int)pppppuVar8 == 0) {
      ppppuStack_288 = (undefined8 *****)0x0;
      uStack_290 = 0;
    }
    ppuVar5 = &PTR____CFConstantStringClassReference_110dd1fb8;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110dd1fb8);
    ppppuVar18 = param_10[2];
joined_r0x000102d0ef00:
    if (ppppuVar18 == (undefined8 ****)0x0) {
LAB_102d0ef4c:
      uStack_1c8 = 0;
      ppppuStack_1d0 = (undefined8 *****)0x0;
      lStack_1b8 = 0;
      uStack_1c0 = 0;
    }
    else {
      func_0x000107c61434(param_10);
      pppppuVar8 = pppppuVar14;
      func_0x000100029284(ppuVar5);
      if (((ulong)pppppuVar8 & 1) == 0) {
        func_0x000107c6142c(param_10);
        goto LAB_102d0ef4c;
      }
      func_0x0001000bb420(param_10[7] + (long)ppuVar5 * 4,&ppppuStack_1d0);
      func_0x000107c6142c(pppppuVar14);
      pppppuVar14 = param_10;
    }
    func_0x000107c6142c(pppppuVar14);
    if (lStack_1b8 == 0) goto LAB_102d0efcc;
    pppppuVar8 = &ppppuStack_1e0;
    pppppuVar14 = &ppppuStack_1d0;
    func_0x000107c6147c(pppppuVar8,pppppuVar14,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uStack_2a0 = uStack_1d8;
    ppppuStack_298 = ppppuStack_1e0;
    if ((int)pppppuVar8 == 0) {
      ppppuStack_298 = (undefined8 *****)0x0;
      uStack_2a0 = 0;
    }
    ppuVar5 = &PTR____CFConstantStringClassReference_110dd2038;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110dd2038);
    ppppuVar18 = param_10[2];
joined_r0x000102d0f000:
    if (ppppuVar18 == (undefined8 ****)0x0) {
LAB_102d0f04c:
      uStack_1c8 = 0;
      ppppuStack_1d0 = (undefined8 *****)0x0;
      lStack_1b8 = 0;
      uStack_1c0 = 0;
    }
    else {
      func_0x000107c61434(param_10);
      pppppuVar8 = pppppuVar14;
      func_0x000100029284(ppuVar5);
      if (((ulong)pppppuVar8 & 1) == 0) {
        func_0x000107c6142c(param_10);
        goto LAB_102d0f04c;
      }
      func_0x0001000bb420(param_10[7] + (long)ppuVar5 * 4,&ppppuStack_1d0);
      func_0x000107c6142c(pppppuVar14);
      pppppuVar14 = param_10;
    }
    func_0x000107c6142c(pppppuVar14);
    if (lStack_1b8 == 0) goto LAB_102d0f0cc;
    pppppuVar8 = &ppppuStack_1e0;
    pppppuVar14 = &ppppuStack_1d0;
    func_0x000107c6147c(pppppuVar8,pppppuVar14,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uStack_2b0 = uStack_1d8;
    ppppuStack_2a8 = ppppuStack_1e0;
    if ((int)pppppuVar8 == 0) {
      ppppuStack_2a8 = (undefined8 *****)0x0;
      uStack_2b0 = 0;
    }
    ppuVar5 = &PTR____CFConstantStringClassReference_110dd2018;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110dd2018);
    ppppuVar18 = param_10[2];
joined_r0x000102d0f100:
    if (ppppuVar18 == (undefined8 ****)0x0) {
LAB_102d0f14c:
      uStack_1c8 = 0;
      ppppuStack_1d0 = (undefined8 *****)0x0;
      lStack_1b8 = 0;
      uStack_1c0 = 0;
      param_10 = pppppuVar14;
    }
    else {
      func_0x000107c61434(param_10);
      pppppuVar8 = pppppuVar14;
      func_0x000100029284(ppuVar5);
      if (((ulong)pppppuVar8 & 1) == 0) {
        func_0x000107c6142c(param_10);
        goto LAB_102d0f14c;
      }
      func_0x0001000bb420(param_10[7] + (long)ppuVar5 * 4,&ppppuStack_1d0);
      func_0x000107c6142c(pppppuVar14);
    }
    func_0x000107c6142c(param_10);
    if (lStack_1b8 != 0) {
      pppppuVar14 = &ppppuStack_1e0;
      func_0x000107c6147c(pppppuVar14,&ppppuStack_1d0,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,
                          6);
      uStack_2c0 = uStack_1d8;
      ppppuStack_2b8 = ppppuStack_1e0;
      if ((int)pppppuVar14 == 0) {
        ppppuStack_2b8 = (undefined8 *****)0x0;
        uStack_2c0 = 0;
      }
      goto LAB_102d0f1d0;
    }
  }
  FUN_102d123fc(&ppppuStack_1d0,0x112d387f8,&UNK_10d902650);
  uStack_2c0 = 0;
  ppppuStack_2b8 = (undefined8 *****)0x0;
LAB_102d0f1d0:
  uVar21 = uStack_1e8;
  uVar10 = uStack_1e8;
  FUN_102d0e304(uStack_1e8,(byte)param_15 & 1,param_13);
  uStack_2c4 = (undefined4)uVar10;
  FUN_102d0e458();
  lStack_2d8 = param_13;
  uStack_2d0 = uVar21;
  func_0x00010404117c();
  if ((uVar21 & 1) == 0) {
    uStack_2f0 = 0;
    uStack_308 = 0;
    uStack_2f8 = 2;
  }
  else {
    func_0x0001040411fc();
    uVar10 = uVar21;
    func_0x00010404130c();
    uStack_2f0 = uVar10;
    func_0x00010404138c();
    uStack_2f8 = uVar21 & 1;
    uVar21 = uVar10;
    uStack_308 = uVar10;
  }
  func_0x000104041dec();
  uStack_2e0 = uVar21;
  if (param_12 == 0) {
    uStack_2e4 = 0;
  }
  else {
    uVar21 = param_12;
    func_0x000107c49c1c();
    uStack_2e4 = (undefined4)uVar21;
  }
  func_0x00010404027c();
  uStack_300 = uVar21;
  func_0x00010404075c();
  uStack_30c = (undefined4)uVar21;
  ppppuStack_200 = param_4;
  if (param_12 == 0) {
    uStack_318 = 0;
    lVar20 = 0;
    lVar6 = param_13;
  }
  else {
    uVar21 = param_12;
    func_0x000107c5b0b0();
    func_0x000107c61180();
    uVar10 = uVar21;
    func_0x000107c5faec();
    lVar6 = param_13;
    uStack_318 = uVar10;
    func_0x000107c61170(uVar21);
    lVar20 = param_13;
  }
  uStack_310 = param_15 >> 8 & 0xff;
  func_0x000100873628();
  func_0x000107c61180();
  if (param_12 == 0) {
    uVar21 = 0;
    lVar6 = 0;
  }
  else {
    uVar21 = param_12;
    func_0x000107c5faec();
    func_0x000107c61170(param_12);
  }
  uVar13 = uStack_280;
  uVar9 = 0;
  if ((uStack_264 & 0xff) != 1) {
    uVar9 = uStack_260;
  }
  func_0x000107c61434(uStack_280);
  func_0x000107c61434(param_18);
  func_0x000107c61434(param_9);
  func_0x000107c61434(param_3);
  *(undefined8 *)((long)auStack_388 + lVar4 + 0x60) = uStack_228;
  *(ulong *)((long)auStack_388 + lVar4 + 0x58) = uStack_308;
  *(ulong *)((long)auStack_388 + lVar4 + 0x50) = uStack_2f0;
  *(ulong *)((long)auStack_388 + lVar4 + 0x30) = uVar21;
  *(long *)((long)auStack_388 + lVar4 + 0x38) = lVar6;
  *(long *)((long)auStack_388 + lVar4 + 0x28) = lVar20;
  *(ulong *)((long)auStack_388 + lVar4 + 0x20) = uStack_318;
  *(long *)((long)auStack_388 + lVar4 + 0x18) = lStack_2d8;
  uVar21 = uStack_2d0;
  *(undefined8 *)((long)auStack_388 + lVar4 + 8) = param_18;
  *(ulong *)((long)auStack_388 + lVar4 + 0x10) = uVar21;
  *(undefined8 *)((long)auStack_388 + lVar4) = param_17;
  abStack_390[lVar4 + 1] = (byte)uStack_21c;
  *(undefined8 *)((long)auStack_3f8 + lVar4 + 0x60) = param_9;
  uVar21 = uStack_2f8;
  *(undefined **)((long)auStack_388 + lVar4 + 0x40) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(ulong *)((long)auStack_388 + lVar4 + 0x48) = uVar21;
  abStack_390[lVar4 + 2] = (byte)uStack_2c4 & 1;
  abStack_390[lVar4] = (byte)uStack_310 & 1;
  *(undefined8 *)((long)auStack_3f8 + lVar4 + 0x58) = uStack_218;
  *(undefined8 *)((long)auStack_3f8 + lVar4 + 0x50) = uStack_210;
  *(undefined8 *)((long)auStack_3f8 + lVar4 + 0x48) = uStack_2c0;
  *(undefined8 *****)((long)auStack_3f8 + lVar4 + 0x40) = ppppuStack_2b8;
  *(undefined8 *)((long)auStack_3f8 + lVar4 + 0x38) = uStack_2b0;
  *(undefined8 *****)((long)auStack_3f8 + lVar4 + 0x30) = ppppuStack_2a8;
  *(undefined8 *)((long)auStack_3f8 + lVar4 + 0x28) = uStack_2a0;
  *(undefined8 *****)((long)auStack_3f8 + lVar4 + 0x20) = ppppuStack_298;
  *(undefined8 *)((long)auStack_3f8 + lVar4 + 0x18) = uStack_290;
  *(undefined8 *****)((long)auStack_3f8 + lVar4 + 0x10) = ppppuStack_288;
  *(undefined8 *)((long)auStack_3f8 + lVar4 + 8) = uStack_278;
  *(undefined8 *****)((long)auStack_3f8 + lVar4) = ppppuStack_270;
  abStack_400[lVar4] = (byte)uStack_30c & 1;
  *(undefined8 *)((long)auStack_410 + lVar4 + 8) = uVar9;
  *(ulong *)((long)auStack_410 + lVar4) = uStack_300;
  auStack_418[lVar4] = (char)uStack_2e4;
  *(ulong *)((long)auStack_430 + lVar4 + 0x10) = uStack_2e0;
  bVar1 = (byte)uStack_254;
  bVar2 = (byte)uStack_204;
  *(undefined8 *****)((long)auStack_430 + lVar4 + 8) = ppppuStack_250;
  *(undefined8 *****)((long)auStack_430 + lVar4) = ppppuStack_248;
  abStack_438[lVar4 + 2] = bVar1 & 1;
  abStack_438[lVar4 + 1] = (byte)uStack_23c;
  abStack_438[lVar4] = bVar2 & 1;
  *(undefined8 *)((long)&uStack_440 + lVar4) = 0;
  func_0x000104759e68(&ppppuStack_1d0,uStack_1e8,ppppuStack_230,uStack_238,ppppuStack_200,uVar13,
                      uStack_1f8,uStack_1f0,param_3);
  func_0x000104821150(0);
  func_0x000107c610f8();
  pppppuVar14 = &ppppuStack_1d0;
  func_0x00010481e13c(pppppuVar14);
  func_0x000107c6142c(uVar13);
  func_0x000107c6142c(param_3);
  return pppppuVar14;
}



/* Entry: 102d0f520; end: 102d0f6d7;  */

double FUN_102d0f520(uint param_1,ulong param_2,long param_3,long param_4,uint param_5)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  char *pcVar4;
  double dVar5;
  long lVar6;
  
  dVar5 = 0.0;
  if (param_1 < 0x16) {
    uVar2 = 1 << (ulong)(param_1 & 0x1f);
    if ((uVar2 & 0x202180) != 0) {
      if ((param_2 & 1) == 0) {
        if (param_3 == 0) {
          return 0.0;
        }
                    /* WARNING: Could not recover jumptable at 0x00010c11b3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_3,PTR_s_publisherNoFillAdResponseTTLInMs_112624718);
        return dVar5;
      }
      if (param_4 == 0) {
        return 0.0;
      }
      pcVar4 = "ads_ios_public_fill_ttl_ms";
      uVar3 = 0xd00000000000001d;
      goto LAB_102d0f5a4;
    }
    if ((uVar2 & 0x60) == 0) {
      if (param_1 == 0x11) {
        if ((param_2 & 1) == 0) {
          if (param_3 == 0) {
            return 0.0;
          }
                    /* WARNING: Could not recover jumptable at 0x00010c11a610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)
                    (param_3,PTR_s_publicNoFillAdResponseTTLInMs_1126243a0);
          return dVar5;
        }
        if (param_4 == 0) {
          return 0.0;
        }
        pcVar4 = "StoryContextObjc";
        uVar3 = 0xd00000000000001a;
        goto LAB_102d0f5a4;
      }
      goto LAB_102d0f61c;
    }
    if ((param_2 & 1) == 0) {
      if (param_3 == 0) {
        return 0.0;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bf39650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_ciNoFillAdResponseTTLInMs_1125abf38);
      return dVar5;
    }
    if (param_4 == 0) {
      return 0.0;
    }
    pcVar4 = "ads_ios_ci_fill_ttl_ms";
  }
  else {
LAB_102d0f61c:
    if (param_1 != 2) {
      return 0.0;
    }
    if ((param_5 & 1) != 0) {
      if (param_3 == 0) {
        return 0.0;
      }
      func_0x000107c43bf0();
      func_0x000107c61180();
      plVar1 = (long *)&DAT_113043e20;
      if ((param_2 & 1) == 0) {
        plVar1 = (long *)&DAT_113043e28;
      }
      lVar6 = *(long *)(param_3 + *plVar1);
      func_0x000107c61170();
      return (double)lVar6;
    }
    if ((param_2 & 1) == 0) {
      if (param_3 == 0) {
        return 0.0;
      }
                    /* WARNING: Could not recover jumptable at 0x00010c293c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (0,param_3,PTR_s_userStoryNoFillAdResponseTTLInMs_112682930);
      return dVar5;
    }
    if (param_4 == 0) {
      return 0.0;
    }
    pcVar4 = "ads_ios_aa_fill_ttl_ms";
  }
  pcVar4 = pcVar4 + -0x20;
  uVar3 = 0xd000000000000016;
LAB_102d0f5a4:
  func_0x000107c5fadc(uVar3,(ulong)pcVar4 | 0x8000000000000000);
  func_0x000107c49818(param_4);
  func_0x000107c61170(uVar3);
  return (double)param_4;
}



/* Entry: 102d0f6d8; end: 102d104db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d0f6d8(double param_1,undefined8 param_2,undefined *param_3,undefined **param_4,
                  ulong param_5,long param_6,long param_7,long param_8,undefined8 param_9,
                  ulong param_10,ulong param_11,ulong param_12,ulong param_13,ulong param_14,
                  undefined8 param_15,long param_16,long param_17,long param_18,undefined8 param_19,
                  undefined8 param_20,byte param_21)

{
  int iVar1;
  ushort uVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  long lVar14;
  ulong uVar15;
  long extraout_x8;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  undefined *puVar22;
  ulong uVar23;
  undefined *puVar24;
  ulong uVar25;
  undefined8 *puVar26;
  long lVar27;
  double dVar28;
  double dVar29;
  undefined8 uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  ushort auStack_890 [4];
  undefined8 auStack_888 [3];
  undefined1 auStack_870 [8];
  long lStack_868;
  byte abStack_860 [8];
  long alStack_858 [4];
  undefined1 uStack_838;
  undefined2 auStack_837 [3];
  ulong auStack_830 [10];
  byte abStack_7e0 [8];
  undefined8 auStack_7d8 [5];
  undefined8 uStack_7b0;
  undefined4 uStack_7a8;
  undefined4 uStack_7a4;
  int iStack_7a0;
  undefined4 uStack_79c;
  ulong uStack_798;
  ulong uStack_790;
  long lStack_788;
  long lStack_780;
  undefined **ppuStack_778;
  ulong uStack_770;
  undefined **ppuStack_768;
  ulong uStack_760;
  undefined8 uStack_758;
  undefined *puStack_750;
  undefined **ppuStack_748;
  long lStack_740;
  ulong uStack_738;
  undefined8 uStack_730;
  ulong uStack_728;
  ulong uStack_720;
  ulong uStack_718;
  undefined1 auStack_710 [352];
  undefined1 auStack_5b0 [352];
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  byte bStack_438;
  char cStack_437;
  char cStack_436;
  undefined8 uStack_430;
  undefined *apuStack_428 [51];
  undefined1 auStack_290 [336];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  long lStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 uStack_b0;
  
  lVar6 = 0;
  lVar14 = param_6;
  dVar28 = param_1;
  uStack_758 = param_9;
  ppuStack_748 = param_4;
  lStack_740 = param_8;
  uStack_720 = param_10;
  func_0x000107c5eea4();
  uVar13 = (undefined4)lVar14;
  uStack_718 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(uStack_718 + 0x40));
  lVar14 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  bVar4 = (uint)param_5 < 0xe;
  if (param_7 == 0) {
    func_0x000102d123c4(auStack_710);
    func_0x000107c61434(param_3);
  }
  else {
    func_0x000107c61434(param_3);
    func_0x000107c61174(param_7);
    func_0x00010481c368(auStack_5b0);
    func_0x000107c610b4(apuStack_428,auStack_5b0,0x160);
    func_0x000102d123f8(apuStack_428);
    param_4 = apuStack_428;
    func_0x000107c610b4(auStack_710,param_4,0x160);
  }
  puStack_750 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_3 != (undefined *)0x0) {
    puStack_750 = param_3;
  }
  if (param_6 == 0) {
    uStack_730 = (ulong)uStack_730._4_4_ << 0x20;
  }
  else {
    uStack_730 = CONCAT44(uStack_730._4_4_,(uint)*(byte *)(param_6 + _DAT_113090e10));
  }
  uStack_738 = param_6;
  if (param_12 == 0) {
    uStack_728 = uStack_728 & 0xffffffff00000000;
  }
  else {
    uVar7 = 0xd00000000000002c;
    param_4 = (undefined **)0x800000010efbd680;
    func_0x000107c5fadc(0xd00000000000002c);
    uVar13 = 10;
    uVar23 = param_12;
    func_0x000107c49818();
    func_0x000107c61170(uVar7);
    uStack_728 = CONCAT44(uStack_728._4_4_,(uint)(0 < (long)uVar23));
  }
  uVar23 = param_11;
  func_0x0001084c1810();
  func_0x000107c61180();
  if (uVar23 == 0) {
    ppuStack_768 = (undefined **)0x0;
    uStack_760 = 0;
  }
  else {
    uVar25 = uVar23;
    func_0x000107c5faec();
    ppuStack_768 = param_4;
    uStack_760 = uVar25;
    func_0x000107c61170(uVar23);
  }
  uVar23 = param_11;
  func_0x0001084c18c0();
  func_0x000107c61180();
  if (uVar23 == 0) {
    ppuStack_778 = (undefined **)0x0;
    uStack_770 = 0;
  }
  else {
    uVar25 = uVar23;
    func_0x000107c5faec();
    ppuStack_778 = param_4;
    uStack_770 = uVar25;
    func_0x000107c61170(uVar23);
  }
  dVar31 = -1.0;
  if (0.0 < param_1) {
    puVar22 = PTR_PTR_1126afec0;
    func_0x000107c61168(PTR_PTR_1126afec0);
    func_0x000107c6071c();
    dVar28 = dVar28 - param_1;
    func_0x000107c51b38(puVar22);
    dVar31 = dVar28;
  }
  if (param_17 == 0) {
    lStack_788 = 0;
    dVar33 = 0.0;
    param_2 = 0;
    dVar32 = 0.0;
    dVar29 = dVar28;
    if (param_12 != 0) goto LAB_102d0f9ec;
LAB_102d0fac4:
    lStack_780 = param_17;
    lVar6 = 0;
    uStack_d8 = 0;
    lVar21 = 0;
    lVar27 = 0;
    lVar19 = 0;
    lStack_b8 = 0;
    uStack_b0 = 1;
  }
  else {
    uStack_790 = param_11;
    lVar19 = param_17;
    func_0x000107c61174(param_17);
    func_0x000107c4077c();
    dVar33 = dVar28;
    func_0x000107c4077c(lVar19);
    func_0x000107c44f00(lVar19);
    if (0x7fefffffffffffff < (ulong)ABS(dVar33)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102d10474);
      (*pcVar3)();
    }
    if (dVar33 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102d10478);
      (*pcVar3)();
    }
    if (9.223372036854776e+18 <= dVar33) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102d1047c);
      (*pcVar3)();
    }
    lStack_788 = (long)dVar33;
    puVar22 = PTR_PTR_1126afec0;
    func_0x000107c61168(PTR_PTR_1126afec0);
    lVar21 = lVar19;
    func_0x000107c5ca64(lVar19);
    func_0x000107c61180();
    func_0x000107c5ee94((long)&uStack_7b0 + lVar14);
    func_0x000107c61170(lVar21);
    func_0x000107c5ee8c();
    (**(code **)(uStack_718 + 8))((long)&uStack_7b0 + lVar14,lVar6);
    func_0x000107c51b38(puVar22);
    dVar29 = dVar33;
    func_0x000107c61170(lVar19);
    param_11 = uStack_790;
    dVar32 = dVar28;
    if (param_12 == 0) goto LAB_102d0fac4;
LAB_102d0f9ec:
    lStack_780 = param_17;
    uVar7 = 0xd00000000000001c;
    func_0x000107c5fadc(0xd00000000000001c,0x800000010f10a080);
    uVar23 = param_12;
    func_0x000107c3ebdc();
    func_0x000107c61170(uVar7);
    lVar6 = 0;
    uStack_b0 = 1;
    uStack_d8 = 0;
    if ((int)uVar23 == 0) {
      lVar21 = 0;
      lVar27 = 0;
      lVar19 = 0;
      lStack_b8 = 0;
    }
    else {
      lVar21 = 0;
      lVar27 = 0;
      lVar19 = 0;
      lStack_b8 = 0;
      if (param_18 != 0) {
        uStack_718 = CONCAT44(uStack_718._4_4_,(uint)bVar4);
        func_0x000107c61174();
        lVar8 = param_18;
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar8 == 0) {
          func_0x000107c61170(param_18);
          lVar6 = 0;
          uStack_d8 = 0;
          lVar21 = 0;
          lVar27 = 0;
          lVar19 = 0;
          lStack_b8 = 0;
          uStack_b0 = 0;
          bVar4 = (byte)uStack_718;
        }
        else {
          func_0x000107c438bc();
          if (dVar29 <= 0.0) {
            lVar6 = 0;
          }
          else if (1.8446744073709552e+19 <= dVar29) {
            lVar6 = -1;
          }
          else {
            if (0x7fe < (ulong)dVar29 >> 0x34) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102d104b0);
              (*pcVar3)();
            }
            if (dVar29 <= -1.0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102d104bc);
              (*pcVar3)();
            }
            lVar6 = (long)dVar29;
          }
          func_0x000107c438b8(lVar8);
          if (dVar29 <= 0.0) {
            uStack_790 = 0;
          }
          else if (1.8446744073709552e+19 <= dVar29) {
            uStack_790 = 0xffffffffffffffff;
          }
          else {
            if (0x7fe < (ulong)dVar29 >> 0x34) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102d104b4);
              (*pcVar3)();
            }
            if (dVar29 <= -1.0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102d104c4);
              (*pcVar3)();
            }
            uStack_790 = (ulong)dVar29;
          }
          func_0x000107c438ac(lVar8);
          if (dVar29 <= 0.0) {
            lVar21 = 0;
          }
          else if (1.8446744073709552e+19 <= dVar29) {
            lVar21 = -1;
          }
          else {
            if (0x7fe < (ulong)dVar29 >> 0x34) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102d104b8);
              (*pcVar3)();
            }
            if (dVar29 <= -1.0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102d104cc);
              (*pcVar3)();
            }
            lVar21 = (long)dVar29;
          }
          func_0x000107c438a8(lVar8);
          if (dVar29 <= 0.0) {
            lVar27 = 0;
          }
          else if (1.8446744073709552e+19 <= dVar29) {
            lVar27 = -1;
          }
          else {
            if (0x7fe < (ulong)dVar29 >> 0x34) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102d104c0);
              (*pcVar3)();
            }
            if (dVar29 <= -1.0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102d104d4);
              (*pcVar3)();
            }
            lVar27 = (long)dVar29;
          }
          func_0x000107c438b4(lVar8);
          if (dVar29 <= 0.0) {
            lVar19 = 0;
          }
          else if (1.8446744073709552e+19 <= dVar29) {
            lVar19 = -1;
          }
          else {
            if (0x7fe < (ulong)dVar29 >> 0x34) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102d104c8);
              (*pcVar3)();
            }
            if (dVar29 <= -1.0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102d104d8);
              (*pcVar3)();
            }
            lVar19 = (long)dVar29;
          }
          func_0x000107c615f0(lVar8);
          func_0x000107c438b0();
          func_0x000107c615ec(lVar8,2);
          func_0x000107c61170(param_18);
          bVar4 = (byte)uStack_718;
          uStack_d8 = uStack_790;
          if (dVar29 <= 0.0) {
            lStack_b8 = 0;
            uStack_b0 = 0;
          }
          else if (1.8446744073709552e+19 <= dVar29) {
            uStack_b0 = 0;
            lStack_b8 = -1;
          }
          else {
            if (0x7fe < (ulong)dVar29 >> 0x34) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102d104d0);
              (*pcVar3)();
            }
            if (dVar29 <= -1.0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102d104dc);
              (*pcVar3)();
            }
            uStack_b0 = 0;
            lStack_b8 = (long)dVar29;
          }
        }
      }
    }
  }
  lVar8 = 0x112f0d8e0;
  uStack_718 = param_5;
  lStack_e0 = lVar6;
  lStack_d0 = lVar21;
  lStack_c8 = lVar27;
  lStack_c0 = lVar19;
  func_0x0001000285a8(0x112f0d8e0,&UNK_10dce2c00);
  func_0x000107c613fc();
  *(undefined8 *)(lVar8 + 0x18) = 2;
  *(undefined8 *)(lVar8 + 0x10) = 1;
  *(undefined **)(lVar8 + 0x20) = puStack_750;
  func_0x000107c610b4(lVar8 + 0x28,auStack_710,0x160);
  uVar20 = uStack_718;
  *(byte *)(lVar8 + 0x188) = bVar4 & (byte)(0x2180 >> (ulong)((uint)param_5 & 0x1f));
  uVar9 = uStack_718;
  uVar23 = param_11;
  uVar25 = param_12;
  puStack_750 = (undefined *)lVar8;
  FUN_102d0de14();
  if ((uVar9 & 1) == 0) {
    uVar10 = uVar20;
    uVar23 = param_13;
    uVar25 = param_11;
    uVar15 = param_12;
    FUN_102d0dfb8();
    uVar9 = uStack_738;
    uVar13 = (undefined4)uVar15;
    if ((uVar10 & 1) == 0) {
      uVar10 = uVar20;
      FUN_102d0e090();
      uStack_790 = CONCAT44(uStack_790._4_4_,(int)uVar10);
      goto joined_r0x000102d0fed0;
    }
    uStack_790 = CONCAT44(uStack_790._4_4_,1);
    if (ppuStack_748 == (undefined **)0x0) goto LAB_102d0fed4;
LAB_102d0fddc:
    uVar16 = 0x100;
    if (*(char *)((long)ppuStack_748 + _DAT_11306cf88) == '\0') {
      uVar16 = 0;
    }
    uVar17 = 0x10000;
    if (*(char *)((long)ppuStack_748 + _DAT_11306cf90) == '\0') {
      uVar17 = 0;
    }
    uVar18 = 0x1000000;
    if (*(char *)((long)ppuStack_748 + _DAT_11306cf98) == '\0') {
      uVar18 = 0;
    }
    uStack_738 = CONCAT44(uStack_738._4_4_,
                          uVar16 | *(byte *)((long)ppuStack_748 + _DAT_11306cf80) | uVar17 | uVar18)
    ;
    if (lStack_740 == 0) goto LAB_102d0fee0;
LAB_102d0fe54:
    lVar6 = lStack_740;
    func_0x000107c61174();
    func_0x00010427172c();
    uStack_798 = uVar23 & 0xff;
    iStack_7a0 = 0;
    uStack_79c = uVar13;
    ppuStack_748 = (undefined **)uVar25;
    lStack_740 = lVar6;
    if (uVar9 == 0) goto LAB_102d0fef8;
LAB_102d0fe74:
    func_0x000107c61174(uVar9);
    func_0x00010481b5d0(&uStack_450);
    uVar23 = 0x100;
    if (cStack_437 == '\0') {
      uVar23 = 0;
    }
    uStack_f8 = 0x10000;
    if (cStack_436 == '\0') {
      uStack_f8 = 0;
    }
    uStack_f8 = uVar23 | bStack_438 | uStack_f8;
    uVar7 = uStack_450;
  }
  else {
    uStack_790 = CONCAT44(uStack_790._4_4_,1);
    uVar9 = uStack_738;
joined_r0x000102d0fed0:
    if (ppuStack_748 != (undefined **)0x0) goto LAB_102d0fddc;
LAB_102d0fed4:
    uStack_738 = CONCAT44(uStack_738._4_4_,2);
    if (lStack_740 != 0) goto LAB_102d0fe54;
LAB_102d0fee0:
    ppuStack_748 = (undefined **)0x0;
    lStack_740 = 0;
    uStack_798 = 0;
    iStack_7a0 = 1;
    uStack_79c = 0;
    if (uVar9 != 0) goto LAB_102d0fe74;
LAB_102d0fef8:
    uStack_440 = 0;
    uStack_f8 = 0;
    uStack_430 = 0;
    uStack_448 = 1;
    uVar7 = 0;
  }
  uVar13 = 0;
  uStack_110 = uVar7;
  uStack_108 = uStack_448;
  uStack_100 = uStack_440;
  uStack_f0 = uStack_430;
  func_0x000104041dbc();
  func_0x00010404064c();
  uStack_7a8 = uVar13;
  if (param_11 == 0) {
    uStack_7a4 = 0;
  }
  else {
    uVar23 = param_11;
    func_0x000107c49c1c();
    uStack_7a4 = (undefined4)uVar23;
  }
  uVar23 = uStack_730 & 0xffffffff;
  FUN_102d0f520(uVar20,1,param_11,param_12,uVar23);
  uVar12 = 0;
  uVar30 = uVar7;
  FUN_102d0f520(uVar20,0,param_11,param_12,uVar23);
  if (param_12 == 0) {
    dVar28 = 0.0;
  }
  else {
    uVar11 = 0xd00000000000001d;
    uVar12 = 0x800000010f10a060;
    func_0x000107c5fadc(0xd00000000000001d);
    uVar23 = param_12;
    func_0x000107c49818(param_12);
    func_0x000107c61170(uVar11);
    dVar28 = (double)(long)uVar23;
  }
  if (param_16 != 0) {
    func_0x000107c515cc();
    func_0x000107c61180();
    if (param_16 != 0) {
      lVar6 = param_16;
      func_0x000107c5faec();
      uStack_7b0 = uVar12;
      func_0x000107c61170(param_16);
      goto LAB_102d10010;
    }
  }
  lVar6 = 0;
  uStack_7b0 = 0;
LAB_102d10010:
  uStack_730 = lVar6;
  if ((int)uStack_728 == 0) {
    param_13 = 0;
    puVar22 = (undefined *)0x0;
  }
  else {
    if (param_14 == 0) {
      puVar22 = (undefined *)0x0;
    }
    else {
      if (param_14 >> 0x3e == 0) {
        uVar23 = *(ulong *)((param_14 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar23 = param_14;
        if (-1 < (long)param_14) {
          uVar23 = param_14 & 0xffffffffffffff8;
        }
        func_0x000107c60480();
      }
      puVar22 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (uVar23 != 0) {
        apuStack_428[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000102d0d87c(0,uVar23 & ((long)uVar23 >> 0x3f ^ 0xffffffffffffffffU),0);
        if ((long)uVar23 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102d104ac);
          (*pcVar3)();
        }
        uStack_728 = param_13;
        puVar22 = apuStack_428[0];
        if ((param_14 & 0xc000000000000001) == 0) {
          puVar26 = (undefined8 *)(param_14 + 0x20);
          do {
            func_0x000107c61174(*puVar26);
            func_0x000104277ec0(auStack_290);
            uVar25 = *(ulong *)(puVar22 + 0x10);
            apuStack_428[0] = puVar22;
            if (*(ulong *)(puVar22 + 0x18) >> 1 <= uVar25) {
              func_0x000102d0d87c(1 < *(ulong *)(puVar22 + 0x18),uVar25 + 1,1);
            }
            puVar22 = apuStack_428[0];
            *(ulong *)(apuStack_428[0] + 0x10) = uVar25 + 1;
            func_0x000107c610b4(apuStack_428[0] + uVar25 * 0x150 + 0x20,auStack_290,0x150);
            uVar23 = uVar23 - 1;
            puVar26 = puVar26 + 1;
            param_13 = uStack_728;
          } while (uVar23 != 0);
        }
        else {
          uVar25 = 0;
          do {
            func_0x000102d0dc78(uVar25,param_14);
            func_0x000104277ec0(auStack_290);
            uVar20 = *(ulong *)(puVar22 + 0x10);
            apuStack_428[0] = puVar22;
            if (*(ulong *)(puVar22 + 0x18) >> 1 <= uVar20) {
              func_0x000102d0d87c(1 < *(ulong *)(puVar22 + 0x18),uVar20 + 1,1);
            }
            puVar22 = apuStack_428[0];
            uVar25 = uVar25 + 1;
            *(ulong *)(apuStack_428[0] + 0x10) = uVar20 + 1;
            func_0x000107c610b4(apuStack_428[0] + uVar20 * 0x150 + 0x20,auStack_290,0x150);
            param_13 = uStack_728;
          } while (uVar23 != uVar25);
        }
      }
    }
    func_0x0001046c0f18();
  }
  if (param_12 != 0) {
    uVar12 = 0xd000000000000026;
    func_0x000107c5fadc(0xd000000000000026,0x800000010f10a030);
    func_0x000107c4dfc0();
    func_0x000107c61170(uVar12);
  }
  uStack_728 = param_13;
  if (uStack_720 == 0) {
    puVar24 = (undefined *)0x0;
  }
  else {
    if (uStack_720 >> 0x3e == 0) {
      uVar23 = *(ulong *)((uStack_720 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar23 = uStack_720;
      if (-1 < (long)uStack_720) {
        uVar23 = uStack_720 & 0xffffffffffffff8;
      }
      func_0x000107c60480();
    }
    puVar24 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar23 != 0) {
      apuStack_428[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000102d0d860(0,uVar23 & ((long)uVar23 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar23 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102d10494);
        (*pcVar3)();
      }
      if ((uStack_720 & 0xc000000000000001) == 0) {
        puVar26 = (undefined8 *)(uStack_720 + 0x20);
        do {
          puVar24 = apuStack_428[0];
          func_0x000107c61174(*puVar26);
          func_0x00010430b928(&uStack_140);
          uVar25 = *(ulong *)(puVar24 + 0x10);
          apuStack_428[0] = puVar24;
          if (*(ulong *)(puVar24 + 0x18) >> 1 <= uVar25) {
            func_0x000102d0d860(1 < *(ulong *)(puVar24 + 0x18),uVar25 + 1,1);
          }
          *(ulong *)(apuStack_428[0] + 0x10) = uVar25 + 1;
          *(undefined8 *)(apuStack_428[0] + uVar25 * 0x30 + 0x38) = uStack_128;
          *(undefined8 *)(apuStack_428[0] + uVar25 * 0x30 + 0x30) = uStack_130;
          *(undefined8 *)(apuStack_428[0] + uVar25 * 0x30 + 0x48) = uStack_118;
          *(undefined8 *)(apuStack_428[0] + uVar25 * 0x30 + 0x40) = uStack_120;
          *(undefined8 *)(apuStack_428[0] + uVar25 * 0x30 + 0x28) = uStack_138;
          *(undefined8 *)(apuStack_428[0] + uVar25 * 0x30 + 0x20) = uStack_140;
          uVar23 = uVar23 - 1;
          puVar24 = apuStack_428[0];
          puVar26 = puVar26 + 1;
        } while (uVar23 != 0);
      }
      else {
        uVar25 = 0;
        uVar20 = uStack_720;
        do {
          puVar24 = apuStack_428[0];
          func_0x000102d0dadc(uVar25,uVar20);
          func_0x00010430b928(&uStack_140);
          uVar9 = *(ulong *)(puVar24 + 0x10);
          apuStack_428[0] = puVar24;
          if (*(ulong *)(puVar24 + 0x18) >> 1 <= uVar9) {
            func_0x000102d0d860(1 < *(ulong *)(puVar24 + 0x18),uVar9 + 1,1);
            uVar20 = uStack_720;
          }
          uVar25 = uVar25 + 1;
          *(ulong *)(apuStack_428[0] + 0x10) = uVar9 + 1;
          *(undefined8 *)(apuStack_428[0] + uVar9 * 0x30 + 0x38) = uStack_128;
          *(undefined8 *)(apuStack_428[0] + uVar9 * 0x30 + 0x30) = uStack_130;
          *(undefined8 *)(apuStack_428[0] + uVar9 * 0x30 + 0x48) = uStack_118;
          *(undefined8 *)(apuStack_428[0] + uVar9 * 0x30 + 0x40) = uStack_120;
          *(undefined8 *)(apuStack_428[0] + uVar9 * 0x30 + 0x28) = uStack_138;
          *(undefined8 *)(apuStack_428[0] + uVar9 * 0x30 + 0x20) = uStack_140;
          puVar24 = apuStack_428[0];
        } while (uVar23 != uVar25);
      }
    }
  }
  bVar5 = lStack_780 != 0;
  uVar2 = (ushort)uStack_79c;
  iVar1 = iStack_7a0 << 8;
  func_0x000107c61434(param_20);
  uVar12 = uStack_758;
  func_0x000107c61434();
  *(undefined8 *)((long)auStack_888 + lVar14) = 0;
  *(undefined8 *)((long)auStack_888 + lVar14 + 8) = 0;
  *(undefined8 *)((long)auStack_7d8 + lVar14 + 0x10) = 0x100000000;
  *(undefined8 *)((long)auStack_7d8 + lVar14 + 0x18) = 0;
  *(undefined8 *)((long)auStack_7d8 + lVar14) = 0x100000000;
  *(undefined8 *)((long)auStack_7d8 + lVar14 + 8) = 0x100000000;
  abStack_7e0[lVar14] = param_21 & 1;
  *(undefined8 *)((long)auStack_830 + lVar14 + 0x40) = param_19;
  *(undefined8 *)((long)auStack_830 + lVar14 + 0x48) = param_20;
  *(undefined **)((long)auStack_830 + lVar14 + 0x30) = puVar24;
  *(long **)((long)auStack_830 + lVar14 + 0x38) = &lStack_e0;
  *(undefined8 *)((long)auStack_830 + lVar14 + 0x20) = param_15;
  *(undefined8 *)((long)auStack_830 + lVar14 + 0x28) = uVar12;
  *(undefined ***)((long)auStack_830 + lVar14 + 0x18) = ppuStack_778;
  *(ulong *)((long)auStack_830 + lVar14 + 0x10) = uStack_770;
  *(undefined ***)((long)auStack_830 + lVar14 + 8) = ppuStack_768;
  *(ulong *)((long)auStack_830 + lVar14) = uStack_760;
  *(undefined2 *)((long)auStack_837 + lVar14) = 0x101;
  (&uStack_838)[lVar14] = (char)param_12;
  uVar23 = uStack_728;
  *(undefined **)((long)alStack_858 + lVar14 + 0x10) = puVar22;
  *(ulong *)((long)alStack_858 + lVar14 + 0x18) = uVar23;
  bVar4 = (byte)uStack_7a8;
  uVar16 = (uint)uStack_790 & 1;
  *(undefined8 *)((long)alStack_858 + lVar14 + 8) = uStack_7b0;
  *(ulong *)((long)alStack_858 + lVar14) = uStack_730;
  abStack_860[lVar14 + 2] = 1;
  abStack_860[lVar14 + 1] = (byte)uStack_7a4;
  abStack_860[lVar14] = bVar4 & 1;
  *(long *)((long)&lStack_868 + lVar14) = lStack_788;
  auStack_870[lVar14] = bVar5;
  *(undefined8 **)((long)auStack_888 + lVar14 + 0x10) = &uStack_110;
  *(ushort *)((long)auStack_890 + lVar14) = uVar2 & 0xff | (ushort)iVar1;
  func_0x000104205320(apuStack_428,dVar32,param_2,dVar33,uVar7,uVar30,dVar28,dVar31,puStack_750,
                      uStack_718,uVar16,0,uStack_738 & 0xffffffff,lStack_740,uStack_798,ppuStack_748
                     );
  func_0x000104277ac8(0);
  func_0x000107c610f8();
  func_0x0001042761c8(apuStack_428);
  return;
}



/* Entry: 102d104dc; end: 102d12333;  */

undefined1 * FUN_102d104dc(undefined8 param_1,undefined **param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined1 auStack_1c8 [360];
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc3a38;
  ppuVar8 = param_2;
  func_0x000107c5faec();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e4c958;
  ppuVar9 = ppuVar8;
  func_0x000107c5faec();
  if (param_2 == (undefined **)0x0) {
    ppuVar11 = (undefined **)0x0;
    ppuVar3 = ppuVar2;
    ppuVar10 = ppuVar9;
  }
  else {
    ppuVar3 = param_2;
    ppuVar11 = ppuVar9;
    func_0x000107c5c440();
    func_0x000107c61180();
    func_0x000107c5faec();
    ppuVar10 = ppuVar11;
    func_0x000107c61170(ppuVar3);
    ppuVar3 = param_2;
    func_0x000107c4259c();
  }
  if (param_3 != 0) {
    lVar4 = param_3;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 != 0) {
      uVar5 = 0xd00000000000002b;
      ppuVar10 = (undefined **)0x800000010f109e50;
      func_0x000107c5fadc(0xd00000000000002b);
      func_0x000107c3ebdc();
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(uVar5);
    }
    lVar4 = param_3;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 == 0) {
      ppuVar3 = (undefined **)0x0;
    }
    else {
      ppuVar3 = (undefined **)0xd000000000000021;
      ppuVar10 = (undefined **)0x800000010f109e20;
      func_0x000107c5fadc();
      func_0x000107c3ebdc();
      func_0x000107c615e8(lVar4);
      func_0x000107c61170();
    }
  }
  func_0x000104041de8();
  uVar6 = 0;
  if (ppuVar10 != (undefined **)0x0) {
    uVar6 = (ulong)ppuVar3 & 0xffffffffffff;
  }
  ppuVar3 = (undefined **)0xe000000000000000;
  if (ppuVar10 != (undefined **)0x0) {
    ppuVar3 = ppuVar10;
  }
  func_0x000107c61434(ppuVar10);
  func_0x000107c6142c(ppuVar3);
  if (((ulong)ppuVar3 & 0x2000000000000000) != 0) {
    uVar6 = (ulong)ppuVar3 >> 0x38 & 0xf;
  }
  if (uVar6 == 0) {
    func_0x000104041dbc();
    func_0x0001040403fc();
  }
  func_0x000104041dbc();
  func_0x0001040406dc();
  FUN_102d0e2a0();
  if (param_3 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (param_3 != 0) {
      uVar5 = 0xd00000000000001a;
      func_0x000107c5fadc(0xd00000000000001a,0x800000010f109fe0);
      func_0x000107c4dfc0();
      func_0x000107c615e8(param_3);
      func_0x000107c61170(uVar5);
    }
  }
  uVar6 = 0;
  FUN_102d0e458();
  func_0x00010404117c();
  if ((uVar6 & 1) != 0) {
    func_0x0001040411fc();
    func_0x00010404130c();
    func_0x00010404138c();
  }
  func_0x000104041dec();
  if (param_2 != (undefined **)0x0) {
    func_0x000107c49c1c();
  }
  func_0x00010404027c();
  func_0x00010404075c();
  if (param_2 != (undefined **)0x0) {
    ppuVar3 = param_2;
    func_0x000107c5b0b0();
    func_0x000107c61180();
    func_0x000107c5faec();
    func_0x000107c61170(ppuVar3);
  }
  func_0x000100873628();
  func_0x000107c61180();
  if (param_2 != (undefined **)0x0) {
    func_0x000107c5faec();
    func_0x000107c61170(param_2);
  }
  func_0x000107c61434(ppuVar11);
  func_0x000107c61434(ppuVar8);
  func_0x000107c61434(ppuVar9);
  func_0x000104759e68(auStack_1c8,2,0,0,ppuVar2,ppuVar9,1,ppuVar1,ppuVar8,0,0);
  func_0x000104821150(0);
  func_0x000107c610f8();
  puVar7 = auStack_1c8;
  func_0x00010481e13c(puVar7);
  func_0x000107c6142c(ppuVar8);
  func_0x000107c6142c(ppuVar9);
  func_0x000107c6142c(ppuVar11);
  return puVar7;
}



/* Entry: 102d12334; end: 102d12353;  */

void FUN_102d12334(void)

{
  func_0x000107c61168(&PTR_PTR_1128a0bc8);
  return;
}



/* Entry: 102d12354; end: 102d123c3;  */

undefined8 FUN_102d12354(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_10475c850)(param_2,param_1);
  return param_2;
}



/* Entry: 102d123c4; end: 102d123fb;  */

void FUN_102d123c4(undefined8 *param_1)

{
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 102d123fc; end: 102d1243b;  */

undefined8 FUN_102d123fc(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102d1243c; end: 102d1244b; -[_TtC25SCAdOperaProgressiveMedia31SCAdOperaProgressiveMediaConfig numberOfSnapMediaToPrefetch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102d1243c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f0d8f8);
}



/* Entry: 102d1244c; end: 102d12493; -[_TtC25SCAdOperaProgressiveMedia31SCAdOperaProgressiveMediaConfig mediaLoadContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d1244c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f0d900);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102d12494; end: 102d124a3; -[_TtC25SCAdOperaProgressiveMedia31SCAdOperaProgressiveMediaConfig isPromotedStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_102d12494(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f0d908);
}



/* Entry: 102d124a4; end: 102d124b3; -[_TtC25SCAdOperaProgressiveMedia31SCAdOperaProgressiveMediaConfig forceFullDownload] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_102d124a4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f0d910);
}



/* Entry: 102d124b4; end: 102d124c3; -[_TtC25SCAdOperaProgressiveMedia31SCAdOperaProgressiveMediaConfig adProductType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102d124b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f0d918);
}



/* Entry: 102d124c4; end: 102d1251f; -[_TtC25SCAdOperaProgressiveMedia31SCAdOperaProgressiveMediaConfig init] */

void FUN_102d124c4(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0x616c696176616e55,0xeb00000000656c62,
                      "SCAdOperaProgressiveMedia/SCAdOperaProgressiveMediaConfig.swift",0x3f,2,0xf,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d12520);
  (*pcVar1)();
}



/* Entry: 102d12520; end: 102d125bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d12520(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f0d8f8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d900) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_112f0d908) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_112f0d910) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d918) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d125bc; end: 102d12673; -[_TtC25SCAdOperaProgressiveMedia31SCAdOperaProgressiveMediaConfig initWithNumberOfSnapMediaToPrefetch:mediaLoadContext:isPromotedStory:forceFullDownload:adProductType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d125bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7)

{
  long lVar1;
  long lStack_60;
  long lStack_58;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c5fc54(param_4,PTR___sSSN_11034da80);
  *(undefined8 *)(param_1 + _DAT_112f0d8f8) = param_3;
  *(undefined8 *)(param_1 + _DAT_112f0d900) = param_4;
  *(undefined1 *)(param_1 + _DAT_112f0d908) = param_5;
  *(undefined1 *)(param_1 + _DAT_112f0d910) = param_6;
  *(undefined8 *)(param_1 + _DAT_112f0d918) = param_7;
  lStack_60 = param_1;
  lStack_58 = lVar1;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d12674; end: 102d126a7;  */

void FUN_102d12674(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102d126a8; end: 102d126b7; -[_TtC25SCAdOperaProgressiveMedia31SCAdOperaProgressiveMediaConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d126a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f0d900));
  return;
}



/* Entry: 102d126b8; end: 102d126d7;  */

void FUN_102d126b8(void)

{
  func_0x000107c61168(&PTR_PTR_1128a0c78);
  return;
}



/* Entry: 102d126d8; end: 102d1271f; -[_TtC25SCAdOperaProgressiveMedia35SCAdOperaProgressiveMediaDownloader dataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d126d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f0d948;
  func_0x000107c61428(param_1 + _DAT_112f0d948,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d12720; end: 102d12777; -[_TtC25SCAdOperaProgressiveMedia35SCAdOperaProgressiveMediaDownloader setDataSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d12720(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f0d948;
  func_0x000107c61428(param_1 + _DAT_112f0d948,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102d12778; end: 102d1280f; -[_TtC25SCAdOperaProgressiveMedia35SCAdOperaProgressiveMediaDownloader init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d12778(long param_1)

{
  code *pcVar1;
  
  func_0x000107c61614(param_1 + _DAT_112f0d948,0);
  *(undefined **)(param_1 + _DAT_112f0d950) = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined8 *)(param_1 + _DAT_112f0d958) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0x616c696176616e55,0xeb00000000656c62,
                      "SCAdOperaProgressiveMedia/SCAdOperaProgressiveMediaDownloader.swift",0x43,2,
                      0x1c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d12810);
  (*pcVar1)();
}



/* Entry: 102d12810; end: 102d128d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d12810(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  func_0x000107c61614(unaff_x20 + _DAT_112f0d948,0);
  *(undefined **)(unaff_x20 + _DAT_112f0d950) = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d958) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d960) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d968) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d970) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d978) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d128d4; end: 102d129bb; -[_TtC25SCAdOperaProgressiveMedia35SCAdOperaProgressiveMediaDownloader initWithMediaManager:mediaFetcher:mediaMetricsManager:adConfigProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d128d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f0d948,0);
  *(undefined **)(param_1 + _DAT_112f0d950) = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined8 *)(param_1 + _DAT_112f0d958) = 0;
  *(undefined8 *)(param_1 + _DAT_112f0d960) = param_3;
  *(undefined8 *)(param_1 + _DAT_112f0d968) = param_4;
  *(undefined8 *)(param_1 + _DAT_112f0d970) = param_5;
  *(undefined8 *)(param_1 + _DAT_112f0d978) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c61154(&lStack_50,puVar1);
  return;
}



/* Entry: 102d129bc; end: 102d129ef;  */

void FUN_102d129bc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102d129f0; end: 102d12a77; -[_TtC25SCAdOperaProgressiveMedia35SCAdOperaProgressiveMediaDownloader .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102d12a2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d12a4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d12a30) */
/* WARNING: Removing unreachable block (ram,0x000102d12a50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d129f0(long param_1)

{
  FUN_102d143dc(param_1 + _DAT_112f0d948);
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f0d950));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f0d958));
  return;
}



/* Entry: 102d12a78; end: 102d12e03;  */

/* WARNING: Possible PIC construction at 0x000102d12b1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d12b70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d12db8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d12b48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d12dbc) */
/* WARNING: Removing unreachable block (ram,0x000102d12b74) */
/* WARNING: Removing unreachable block (ram,0x000102d12b20) */
/* WARNING: Removing unreachable block (ram,0x000102d12b4c) */
/* WARNING: Removing unreachable block (ram,0x000102d12b80) */
/* WARNING: Removing unreachable block (ram,0x000102d12ba8) */
/* WARNING: Removing unreachable block (ram,0x000102d12bd0) */
/* WARNING: Removing unreachable block (ram,0x000102d12c1c) */
/* WARNING: Removing unreachable block (ram,0x000102d12be8) */
/* WARNING: Removing unreachable block (ram,0x000102d12c2c) */
/* WARNING: Removing unreachable block (ram,0x000102d12c6c) */
/* WARNING: Removing unreachable block (ram,0x000102d12c34) */
/* WARNING: Removing unreachable block (ram,0x000102d12ca8) */
/* WARNING: Removing unreachable block (ram,0x000102d12dec) */
/* WARNING: Removing unreachable block (ram,0x000102d12df4) */
/* WARNING: Removing unreachable block (ram,0x000102d12cd8) */
/* WARNING: Removing unreachable block (ram,0x000102d12ce0) */
/* WARNING: Removing unreachable block (ram,0x000102d12cf8) */
/* WARNING: Removing unreachable block (ram,0x000102d12d1c) */
/* WARNING: Removing unreachable block (ram,0x000102d12d94) */
/* WARNING: Removing unreachable block (ram,0x000102d12d20) */
/* WARNING: Removing unreachable block (ram,0x000102d12de8) */
/* WARNING: Removing unreachable block (ram,0x000102d12d2c) */
/* WARNING: Removing unreachable block (ram,0x000102d12d38) */
/* WARNING: Removing unreachable block (ram,0x000102d12de4) */
/* WARNING: Removing unreachable block (ram,0x000102d12d44) */
/* WARNING: Removing unreachable block (ram,0x000102d12d50) */
/* WARNING: Removing unreachable block (ram,0x000102d12d08) */
/* WARNING: Removing unreachable block (ram,0x000102d12da4) */
/* WARNING: Removing unreachable block (ram,0x000102d12c0c) */
/* WARNING: Removing unreachable block (ram,0x000102d12dc0) */
/* WARNING: Removing unreachable block (ram,0x000102d12dc4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d12a78(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f0d958);
  if (lVar1 == 0) {
    lVar5 = 0;
    lVar1 = 0;
    lVar4 = param_2;
  }
  else {
    func_0x000107c3b9ac();
    func_0x000107c61180();
    lVar5 = lVar1;
    func_0x000107c5faec();
    lVar4 = param_2;
    func_0x000107c61170(lVar1);
    lVar1 = param_2;
  }
  func_0x000107c3b9ac();
  func_0x000107c61180();
  lVar2 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  lVar3 = lVar4;
  if ((lVar1 != 0) && ((lVar3 = lVar1, lVar5 != lVar2 || (lVar1 != lVar4)))) {
    func_0x000107c605b8(lVar5,lVar1,lVar2,lVar4,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar3);
  return;
}



/* Entry: 102d12e04; end: 102d12e4b; -[_TtC25SCAdOperaProgressiveMedia35SCAdOperaProgressiveMediaDownloader startViewingPlaylistItem:] */

void FUN_102d12e04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_102d12a78(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d12e4c; end: 102d12f17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d12e4c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f0d948;
  func_0x000107c61428(unaff_x20 + _DAT_112f0d948,auStack_48,0,0);
  lVar1 = unaff_x20 + lVar1;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4a9f8();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c4a9ec();
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      if (lVar3 != 0) {
        if (*(int *)(lVar3 + _DAT_1130798b0) != 1) {
          func_0x000107c615e8(lVar1);
          func_0x000107c61170(lVar3);
          return;
        }
        func_0x000107c61170(lVar3);
      }
    }
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 102d12f18; end: 102d1311b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_102d12f18(ulong param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x20;
  ulong uVar9;
  undefined1 auStack_68 [24];
  
  uVar8 = param_1;
  FUN_102d13860();
  func_0x000107c613fc();
  *(undefined8 *)(uVar8 + 0x18) = 3;
  *(undefined8 *)(uVar8 + 0x10) = 1;
  *(ulong *)(uVar8 + 0x20) = param_1;
  lVar1 = _DAT_112f0d948;
  if (param_2 == 0) {
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c61428(unaff_x20 + lVar1,auStack_68,0,0);
    do {
      uVar9 = uVar8 >> 0x3e;
      if (uVar9 == 0) {
        uVar4 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar4 = uVar8 & 0xffffffffffffff8;
        if ((uVar8 & 0x8000000000000000) != 0) {
          uVar4 = uVar8;
        }
        func_0x000107c60480();
      }
      if (uVar4 != 0) {
        uVar5 = uVar4 - 1;
        if (SBORROW8(uVar4,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102d13114);
          (*pcVar2)();
        }
        if ((uVar8 & 0xc000000000000001) == 0) {
          if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102d13118);
            (*pcVar2)();
          }
          if (*(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102d1311c);
            (*pcVar2)();
          }
          uVar5 = *(ulong *)(uVar8 + uVar5 * 8 + 0x20);
          func_0x000107c61174(uVar5);
        }
        else {
          func_0x000100e471e4(uVar5,uVar8);
        }
        lVar6 = unaff_x20 + lVar1;
        func_0x000107c61618();
        if (lVar6 != 0) {
          lVar7 = lVar6;
          func_0x000107c4f40c();
          func_0x000107c61180();
          func_0x000107c615e8(lVar6);
          if (lVar7 != 0) {
            func_0x000107c61174();
            uVar4 = uVar8;
            func_0x000107c61550();
            if ((uVar9 != 0) || (uVar3 = uVar8, (uVar4 & 1) == 0)) {
              if (uVar9 == 0) {
                uVar9 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
              }
              else {
                uVar9 = uVar8 & 0xffffffffffffff8;
                if ((uVar8 & 0x8000000000000000) != 0) {
                  uVar9 = uVar8;
                }
                func_0x000107c60480(uVar9);
              }
              uVar3 = 0;
              FUN_102d138bc(0,uVar9 + 1,1,uVar8);
            }
            uVar4 = uVar3 & 0xffffffffffffff8;
            uVar9 = *(ulong *)(uVar4 + 0x10);
            uVar8 = uVar3;
            if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar9) {
              uVar8 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
              FUN_102d138bc(uVar8,uVar9 + 1,1,uVar3);
              uVar4 = uVar8 & 0xffffffffffffff8;
            }
            *(ulong *)(uVar4 + 0x10) = uVar9 + 1;
            *(long *)(uVar4 + uVar9 * 8 + 0x20) = lVar7;
            func_0x000107c61170(lVar7);
          }
        }
        func_0x000107c61170(uVar5);
      }
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return uVar8;
}



/* Entry: 102d1311c; end: 102d131ab;  */

void FUN_102d1311c(undefined8 param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = (uint)param_1 & 0xff;
    if (1 < uVar1 - 4) {
      if (uVar1 == 6) {
        func_0x000102d132fc(param_3);
      }
      else {
        FUN_102d135c0(param_1,param_3);
      }
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102d131ac; end: 102d131af;  */

void FUN_102d131ac(void)

{
  return;
}



/* Entry: 102d131b0; end: 102d135bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d131b0(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,code *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  uVar1 = 0;
  func_0x000100029930(0);
  func_0x000100579dc0();
  func_0x000100069b5c(param_2);
  func_0x000107c61170(uVar1);
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    uVar4 = *(undefined8 *)(param_3 + _DAT_112f0d970);
    uVar1 = *(undefined8 *)(param_3 + _DAT_112f0d978);
    func_0x000107c426d8(uVar1);
    func_0x0001084c4f90(param_4,uVar4,uVar1);
    func_0x000107c61180();
    uVar1 = param_4;
    func_0x000107c5faec();
    func_0x000107c61170(param_4);
    func_0x000107c61428(param_3 + _DAT_112f0d950,auStack_80,0x21,0);
    uVar2 = uVar4;
    func_0x0001010af1e4(uVar1,uVar4);
    func_0x000107c614a8(auStack_80);
    func_0x000107c6142c(uVar4);
    func_0x000107c6142c(uVar2);
    uVar3 = 6;
    if ((param_1 & 1) == 0) {
      uVar3 = 0;
    }
    (*param_5)(uVar3);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 102d135c0; end: 102d1385f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d135c0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long unaff_x20;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_68 [24];
  
  lVar3 = _DAT_112f0d948;
  puVar8 = auStack_68;
  func_0x000107c61428(unaff_x20 + _DAT_112f0d948,puVar8,0,0);
  lVar3 = unaff_x20 + lVar3;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c4df08();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    if (lVar4 != 0) {
      lVar3 = param_2;
      func_0x000107c5d260();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar8);
      }
      func_0x000107c4ffbc(lVar4);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(lVar3);
    }
  }
  lVar3 = 0x112d39140;
  func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x18) = 6;
  *(undefined8 *)(lVar3 + 0x10) = 3;
  puVar2 = PTR___sSSSHsWP_11034da90;
  puVar1 = PTR___sSSN_11034da80;
  uStack_170 = 0x737574617473;
  uStack_168 = 0xe600000000000000;
  func_0x000107c602d4(lVar3 + 0x20,&uStack_170,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  *(undefined **)(lVar3 + 0x60) = puVar1;
  *(undefined8 *)(lVar3 + 0x48) = 0x726f727265;
  *(undefined8 *)(lVar3 + 0x50) = 0xe500000000000000;
  uStack_170 = 0x7470697263736564;
  uStack_168 = 0xeb000000006e6f69;
  puVar5 = &uStack_170;
  func_0x000107c602d4(lVar3 + 0x68,puVar5,puVar1,puVar2);
  FUN_102d14434();
  puVar6 = &UNK_1105c2850;
  func_0x000107c60640();
  *(undefined **)(lVar3 + 0xa8) = puVar1;
  *(undefined **)(lVar3 + 0x90) = puVar6;
  *(undefined8 **)(lVar3 + 0x98) = puVar5;
  uStack_170 = 0x6469;
  uStack_168 = 0xe200000000000000;
  puVar6 = puVar1;
  func_0x000107c602d4(lVar3 + 0xb0,&uStack_170,puVar1,puVar2);
  func_0x000107c5d260();
  func_0x000107c61180();
  lVar4 = param_2;
  func_0x000107c5faec();
  func_0x000107c61170(param_2);
  *(undefined **)(lVar3 + 0xf0) = puVar1;
  *(long *)(lVar3 + 0xd8) = lVar4;
  *(undefined **)(lVar3 + 0xe0) = puVar6;
  lVar4 = lVar3;
  func_0x000100dfa3f0(lVar3);
  func_0x000107c61588(lVar3);
  uVar7 = 0x112d377a0;
  func_0x0001000285a8(0x112d377a0,&UNK_10d9016e0);
  func_0x000107c61408(lVar3 + 0x20,3,uVar7);
  lVar3 = lVar4;
  func_0x000107c5f9dc(lVar4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(lVar4);
  uVar7 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f10a380);
  func_0x000107c2c4c0(0x10000,lVar3,uVar7);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(uVar7);
  return;
}



/* Entry: 102d13860; end: 102d138bb;  */

void FUN_102d13860(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    func_0x0001047c6864();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112f0d9b0;
  plVar5 = (long *)&UNK_10db790f0;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 102d138bc; end: 102d139e3;  */

ulong FUN_102d138bc(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d139e4);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_102d139e4(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d139e0);
      (*pcVar1)();
    }
    FUN_102d13a64(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 102d139e4; end: 102d13a63;  */

undefined * FUN_102d139e4(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_102d13860();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 102d13a64; end: 102d13c37;  */

long FUN_102d13a64(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102d13b58);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102d13b5c);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x0001047c6864(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      func_0x0001047c6864(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102d13b54);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 102d13c38; end: 102d143bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d13c38(ulong param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  puVar1 = &UNK_1105c2768;
  func_0x000107c613fc(&UNK_1105c2768,0x20,7);
  *(long *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  lVar9 = _DAT_112f0d950;
  func_0x000107c61428(param_2 + _DAT_112f0d950,auStack_80,0,0);
  uVar14 = *(undefined8 *)(param_2 + lVar9);
  uVar18 = *(undefined8 *)(param_2 + _DAT_112f0d970);
  uVar17 = *(undefined8 *)(param_2 + _DAT_112f0d978);
  func_0x000107c6157c(param_3);
  func_0x000107c61174();
  func_0x000107c61434(uVar14);
  uVar5 = uVar17;
  func_0x000107c426d8(uVar17);
  uVar2 = param_1;
  uVar7 = uVar18;
  func_0x0001084c4f90(param_1,uVar18,uVar5);
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5faec();
  func_0x000107c61170(uVar2);
  func_0x0001000f66f0(uVar3,uVar7,uVar14);
  func_0x000107c6142c(uVar7);
  func_0x000107c6142c(uVar14);
  lVar4 = _DAT_112f0d948;
  if ((uVar3 & 1) != 0) {
    func_0x000107c61428(param_3 + 0x10,&puStack_1d0,0,0);
    lVar6 = param_3 + 0x10;
    func_0x000107c61618();
    func_0x000107c61574(puVar1);
joined_r0x000102d13e50:
    if (lVar6 == 0) {
      return;
    }
    goto LAB_102d14398;
  }
  func_0x000107c61428(param_2 + _DAT_112f0d948,auStack_98,0,0);
  lVar4 = param_2 + lVar4;
  func_0x000107c61618();
  if (lVar4 == 0) {
    func_0x000107c61428(param_3 + 0x10,&puStack_1d0,0,0);
    lVar6 = param_3 + 0x10;
    func_0x000107c61618();
    if (lVar6 == 0) {
      func_0x000107c61574(puVar1);
      return;
    }
    FUN_102d135c0(1,param_4);
    func_0x000107c61574(puVar1);
    goto LAB_102d14398;
  }
  lVar6 = lVar4;
  func_0x000107c4f408();
  func_0x000107c61180();
  if (lVar6 == 0) {
    func_0x000107c61428(param_3 + 0x10,&puStack_1d0,0,0);
    lVar6 = param_3 + 0x10;
    func_0x000107c61618();
    if (lVar6 == 0) {
      func_0x000107c61574(puVar1);
      func_0x000107c615e8(lVar4);
      return;
    }
    FUN_102d135c0(2,param_4);
    func_0x000107c61574(puVar1);
    func_0x000107c615e8(lVar4);
    goto LAB_102d14398;
  }
  uVar2 = param_1;
  func_0x000102d13b5c();
  if ((uVar2 & 1) != 0) {
    uVar5 = 0;
    func_0x000100029930(0);
    func_0x000100579dc0();
    func_0x0001000b0da8(0xd000000000000025,0x800000010f10a3a0,FUN_102d131ac,0);
    func_0x000107c61170(uVar5);
    func_0x000107c61428(param_3 + 0x10,&puStack_1d0,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    func_0x000107c61574(puVar1);
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(lVar6);
    lVar6 = param_3;
    goto joined_r0x000102d13e50;
  }
  lVar15 = *(long *)(lVar6 + _DAT_113815208);
  if (lVar15 == 0) {
LAB_102d13f24:
    func_0x000107c61428(param_3 + 0x10,&puStack_1d0,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 == 0) {
      func_0x000107c61574(puVar1);
      func_0x000107c615e8(lVar4);
      goto LAB_102d14398;
    }
    FUN_102d135c0(3,param_4);
    func_0x000107c61574(puVar1);
    func_0x000107c615e8(lVar4);
    lVar9 = lVar6;
    lVar6 = param_3;
  }
  else {
    func_0x000107c61434(lVar15);
    uVar2 = param_1;
    lVar16 = lVar15;
    FUN_102c7fa90();
    func_0x000107c6142c(lVar15);
    if (((uint)lVar16 & 0xff) == 1) goto LAB_102d13f24;
    uVar7 = 0;
    func_0x000100029930(0);
    func_0x000100579dc0();
    uVar5 = 0xd000000000000027;
    func_0x000100029b28(0xd000000000000027,0x800000010f10a350);
    func_0x000107c61170(uVar7);
    func_0x000107c426d8(uVar17);
    uVar3 = param_1;
    func_0x0001084c4f90(param_1,uVar18,uVar17);
    func_0x000107c61180();
    uVar8 = uVar3;
    func_0x000107c5faec();
    func_0x000107c61170(uVar3);
    func_0x000107c61428(param_2 + lVar9,&puStack_1d0,0x21,0);
    func_0x000100403b00(auStack_a8,uVar8,uVar18);
    func_0x000107c614a8(&puStack_1d0);
    func_0x000107c6142c(uStack_a0);
    lVar9 = 0x112d39140;
    func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
    func_0x000107c61534();
    *(undefined8 *)(lVar9 + 0x18) = 6;
    *(undefined8 *)(lVar9 + 0x10) = 3;
    puVar11 = PTR___sSSSHsWP_11034da90;
    puVar10 = PTR___sSSN_11034da80;
    puStack_1d0 = (undefined *)0x737574617473;
    uStack_1c8 = 0xe600000000000000;
    func_0x000107c602d4(lVar9 + 0x20,&puStack_1d0,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    *(undefined **)(lVar9 + 0x60) = puVar10;
    *(undefined8 *)(lVar9 + 0x48) = 0x6566207472617473;
    *(undefined8 *)(lVar9 + 0x50) = 0xee00676e69686374;
    puStack_1d0 = (undefined *)0x6469;
    uStack_1c8 = 0xe200000000000000;
    puVar13 = puVar10;
    func_0x000107c602d4(lVar9 + 0x68,&puStack_1d0,puVar10,puVar11);
    uVar3 = param_1;
    func_0x000107c5d260();
    func_0x000107c61180();
    uVar8 = uVar3;
    func_0x000107c5faec();
    func_0x000107c61170(uVar3);
    *(undefined **)(lVar9 + 0xa8) = puVar10;
    *(ulong *)(lVar9 + 0x90) = uVar8;
    *(undefined **)(lVar9 + 0x98) = puVar13;
    puStack_1d0 = (undefined *)0x7865646e69;
    uStack_1c8 = 0xe500000000000000;
    func_0x000107c602d4(lVar9 + 0xb0,&puStack_1d0,puVar10,puVar11);
    *(undefined **)(lVar9 + 0xf0) = PTR___sSiN_11034deb0;
    *(ulong *)(lVar9 + 0xd8) = uVar2;
    lVar15 = lVar9;
    func_0x000100dfa3f0(lVar9);
    func_0x000107c61588(lVar9);
    uVar7 = 0x112d377a0;
    func_0x0001000285a8(0x112d377a0,&UNK_10d9016e0);
    func_0x000107c61408(lVar9 + 0x20,3,uVar7);
    lVar9 = lVar15;
    func_0x000107c5f9dc(lVar15,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c6142c(lVar15);
    uVar7 = 0xd00000000000001d;
    func_0x000107c5fadc(0xd00000000000001d,0x800000010f10a380);
    func_0x000107c2c4c0(0x10000,lVar9,uVar7);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(uVar7);
    lVar9 = lVar4;
    func_0x000107c4f414();
    func_0x000107c61180();
    uVar7 = *(undefined8 *)(param_2 + _DAT_112f0d968);
    lVar16 = *(long *)(lVar9 + _DAT_112f0d900);
    lVar15 = lVar16;
    func_0x000107c61434(lVar16);
    func_0x000107c5fc48();
    func_0x000107c6142c(lVar16);
    puVar10 = &UNK_1105c2740;
    func_0x000107c613fc(&UNK_1105c2740,0x18,7);
    func_0x000107c61614(puVar10 + 0x10,param_2);
    puVar11 = &UNK_1105c2790;
    func_0x000107c613fc(&UNK_1105c2790,0x38,7);
    *(undefined8 *)(puVar11 + 0x10) = uVar5;
    *(undefined **)(puVar11 + 0x18) = puVar10;
    *(ulong *)(puVar11 + 0x20) = param_1;
    *(code **)(puVar11 + 0x28) = FUN_102d14400;
    *(undefined **)(puVar11 + 0x30) = puVar1;
    uStack_1b0 = 0x102d14408;
    puStack_1d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1c8 = 0x42000000;
    puStack_1c0 = &UNK_1000f3aa0;
    puStack_1b8 = &UNK_1105c27a8;
    ppuVar12 = &puStack_1d0;
    puStack_1a8 = puVar11;
    func_0x000107c60bc4();
    puVar10 = puStack_1a8;
    func_0x000107c61174(param_1);
    func_0x000107c6157c(puVar1);
    func_0x000107c61574(puVar10);
    func_0x000107c431b4(uVar7);
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c61574(puVar1);
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(lVar6);
    lVar6 = lVar15;
  }
  func_0x000107c61170(lVar9);
LAB_102d14398:
  func_0x000107c61170(lVar6);
  return;
}



/* Entry: 102d143bc; end: 102d143db;  */

void FUN_102d143bc(void)

{
  func_0x000107c61168(&PTR_PTR_1128a0d58);
  return;
}



/* Entry: 102d143dc; end: 102d143ff;  */

undefined8 FUN_102d143dc(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102d14400; end: 102d14433;  */

void FUN_102d14400(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    uVar1 = (uint)param_1 & 0xff;
    if (1 < uVar1 - 4) {
      if (uVar1 == 6) {
        func_0x000102d132fc(uVar2);
      }
      else {
        FUN_102d135c0(param_1,uVar2);
      }
    }
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 102d14434; end: 102d14473;  */

void FUN_102d14434(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f0d9a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db4082c;
  func_0x000107c61520(&UNK_10db4082c,&UNK_1105c2850);
  puRam0000000112f0d9a8 = puVar1;
  return;
}



/* Entry: 102d14474; end: 102d145ef;  */

int FUN_102d14474(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102d144f0;
        goto LAB_102d144d4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102d144d4:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_102d144f0:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102d145f0; end: 102d1469b;  */

void FUN_102d145f0(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102d1469c; end: 102d1470f;  */

undefined1  [16] FUN_102d1469c(void)

{
  char *pcVar1;
  char *pcVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar3 = *unaff_x20;
  pcVar2 = "Ad snap index out of bounds";
  uVar4 = 0xd000000000000015;
  if (bVar3 != 2) {
    pcVar2 = "e:media_already_ready";
    uVar4 = 0xd00000000000001b;
  }
  pcVar1 = "Data source unset";
  uVar5 = 0xd000000000000015;
  if (bVar3 != 0) {
    pcVar1 = "Ad response not found";
    uVar5 = 0xd000000000000011;
  }
  if (bVar3 < 2) {
    pcVar2 = pcVar1;
    uVar4 = uVar5;
  }
  auVar6._8_8_ = (ulong)pcVar2 | 0x8000000000000000;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Entry: 102d14710; end: 102d1474f;  */

void FUN_102d14710(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f0d9b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db40804;
  func_0x000107c61520(&UNK_10db40804,&UNK_1105c2850);
  puRam0000000112f0d9b8 = puVar1;
  return;
}



/* Entry: 102d14750; end: 102d148db;  */

int FUN_102d14750(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf9 < param_2) {
    param_2 = param_2 + 6;
    uVar4 = 2;
    if (0xfffeff < param_2) {
      uVar4 = 4;
    }
    if (param_2 >> 8 < 0xff) {
      uVar4 = 1;
    }
    uVar1 = 0;
    if (0xff < param_2) {
      uVar1 = uVar4;
    }
    if (uVar1 < 2) {
      if ((uVar1 != 0) && (uVar4 = (uint)param_1[1], param_1[1] != 0)) goto LAB_102d147b8;
    }
    else if (uVar1 == 2) {
      uVar4 = (uint)*(ushort *)(param_1 + 1);
      if (*(ushort *)(param_1 + 1) != 0) {
LAB_102d147b8:
        return ((uint)*param_1 | uVar4 << 8) - 6;
      }
    }
    else {
      uVar4 = *(uint *)(param_1 + 1);
      if (uVar4 != 0) goto LAB_102d147b8;
    }
  }
  uVar4 = (uint)*param_1;
  iVar2 = 0;
  if (2 < uVar4 - 3) {
    iVar2 = uVar4 - 6;
  }
  iVar3 = 0;
  if (3 < uVar4) {
    iVar3 = iVar2;
  }
  return iVar3;
}



/* Entry: 102d148dc; end: 102d149c3;  */

undefined1  [16] FUN_102d148dc(undefined8 param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  uVar1 = (uint)param_1 & 0xff;
  if (uVar1 == 4) {
    auVar5._8_8_ = 0xec00000073747369;
    auVar5._0_8_ = 0x786520616964654d;
    return auVar5;
  }
  if (uVar1 != 6) {
    if (uVar1 == 5) {
      auVar3._8_8_ = 0x800000010f10a470;
      auVar3._0_8_ = 0xd000000000000019;
      return auVar3;
    }
    FUN_102d14434();
    func_0x000107c60640(&UNK_1105c2850,param_1);
    func_0x000107c5fb78();
    func_0x000107c6142c(param_1);
    auVar2._8_8_ = 0xe700000000000000;
    auVar2._0_8_ = 0x203a726f727245;
    return auVar2;
  }
  auVar4._8_8_ = 0x800000010f10a450;
  auVar4._0_8_ = 0xd000000000000010;
  return auVar4;
}



/* Entry: 102d149c4; end: 102d149cf;  */

undefined1  [16] FUN_102d149c4(void)

{
  byte bVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  byte *unaff_x20;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  bVar1 = *unaff_x20;
  uVar3 = (ulong)bVar1;
  if (bVar1 == 4) {
    auVar6._8_8_ = 0xec00000073747369;
    auVar6._0_8_ = 0x786520616964654d;
    return auVar6;
  }
  if (bVar1 != 6) {
    if (bVar1 == 5) {
      auVar4._8_8_ = 0x800000010f10a470;
      auVar4._0_8_ = 0xd000000000000019;
      return auVar4;
    }
    FUN_102d14434();
    func_0x000107c60640(&UNK_1105c2850,uVar3);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar3);
    auVar2._8_8_ = 0xe700000000000000;
    auVar2._0_8_ = 0x203a726f727245;
    return auVar2;
  }
  auVar5._8_8_ = 0x800000010f10a450;
  auVar5._0_8_ = 0xd000000000000010;
  return auVar5;
}



/* Entry: 102d149d0; end: 102d14a0f;  */

void FUN_102d149d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f0d9c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db4086c;
  func_0x000107c61520(&UNK_10db4086c,&UNK_1105c28e0);
  puRam0000000112f0d9c0 = puVar1;
  return;
}



/* Entry: 102d14a10; end: 102d14a47;  */

void FUN_102d14a10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb4b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10Foundation14LocalizedErrorPAAE13failureReasonSSSgvg_1103506b8)();
  return;
}



/* Entry: 102d14a48; end: 102d14b2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d14a48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f0d9c8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d9d0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d9d8) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d14b30; end: 102d14bbf; -[SCSKOverlayParamsBuilder initWithAdConfigProvider:configProvider:dpaConfigProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d14b30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f0d9c8) = param_3;
  *(undefined8 *)(param_1 + _DAT_112f0d9d0) = param_4;
  *(undefined8 *)(param_1 + _DAT_112f0d9d8) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 102d14bc0; end: 102d14c1b; -[SCSKOverlayParamsBuilder init] */

void FUN_102d14bc0(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0x616c696176616e55,0xeb00000000656c62,
                      "SCSKOverlayUtils/SKOverlayParamsBuilder.swift",0x2d,2,0x2e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d14c1c);
  (*pcVar1)();
}



/* Entry: 102d14c1c; end: 102d14eb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102d14c1c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (((param_1 != 0) && (param_2 != 0)) &&
     (lVar8 = *(long *)(param_1 + _DAT_113815208), lVar8 != 0)) {
    lVar2 = param_2;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61434(lVar8);
    lVar3 = lVar2;
    lVar4 = lVar8;
    FUN_102c7fa90();
    func_0x000107c6142c(lVar8);
    if (((uint)lVar4 & 0xff) == 1) {
      func_0x000107c61170(lVar2);
      lVar2 = param_1;
    }
    else {
      func_0x000103bffd54(0);
      uVar10 = *(undefined8 *)(lVar2 + _DAT_11308f1e0);
      uVar5 = *(undefined8 *)(param_1 + _DAT_11308f128);
      uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f0d9c8);
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f0d9d0);
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f0d9d8);
      func_0x000107c61174();
      func_0x000103bfe42c(param_2,uVar10,uVar5,uVar9,uVar7,param_3,uVar6,0);
      func_0x000107c61170(lVar2);
      if ((int)param_2 == 4) {
        func_0x000103bfe3f4(uVar10,*(undefined8 *)(lVar2 + _DAT_11308f1e8),param_3);
        lVar8 = lVar2;
        func_0x000107c3dde0();
        func_0x000107c61180();
        lVar4 = lVar8;
        func_0x00010641d95c();
        func_0x000107c61180();
        func_0x000107c61170(lVar8);
        if (lVar4 != 0) {
          lVar8 = lVar4;
          func_0x000107c5f9e8(lVar4,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                              PTR___sSSSHsWP_11034da90);
          func_0x000107c61170(lVar4);
          func_0x0001041ed328(0);
          lVar4 = param_1;
          func_0x0001030be894(param_1,lVar2,3);
          if (lVar4 != 0) {
            if (lVar3 < 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x102d14eb8);
              (*pcVar1)();
            }
            func_0x0001041e36e8(0);
            func_0x000107c610f8();
            func_0x000107c61434(param_5);
            func_0x0001041e2fec(param_1,lVar3,lVar8,lVar4,(int)uVar10 == 2,param_4,param_5);
            func_0x000107c61170(lVar2);
            return param_1;
          }
          func_0x000107c6142c(lVar8);
        }
      }
      func_0x000107c61170(param_1);
    }
    func_0x000107c61170(lVar2);
  }
  return 0;
}



/* Entry: 102d14eb8; end: 102d14f7f; -[SCSKOverlayParamsBuilder buildSKOverlayParamsFor:adSnap:viewLocation:pageId:] */

void FUN_102d14eb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_6 == 0) {
    param_6 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_6);
  }
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  uVar2 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102d14c1c(param_3,param_4,param_5,param_6,param_2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102d14f80; end: 102d14fb3;  */

void FUN_102d14f80(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102d14fb4; end: 102d14ffb; -[SCSKOverlayParamsBuilder .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102d14fd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d14fd4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d14fb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f0d9c8));
  return;
}



/* Entry: 102d14ffc; end: 102d1501b;  */

void FUN_102d14ffc(void)

{
  func_0x000107c61168(&PTR_PTR_1128a0e48);
  return;
}



/* Entry: 102d1501c; end: 102d152c3;  */

undefined1  [16]
FUN_102d1501c(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5,
             undefined8 param_6,ulong param_7)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long extraout_x8;
  undefined1 *puVar10;
  long lVar11;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  ulong auStack_e0 [12];
  undefined1 auStack_80 [8];
  ulong uStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = 0;
  uVar5 = param_5;
  func_0x000107c5ede0();
  lVar11 = *(long *)(uVar3 - 8);
  uVar9 = uVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_80 + lVar1;
  if (((param_4 == 0) || (uVar9 = param_4, func_0x000107c44314(), uVar9 != 0)) &&
     ((param_7 & 1) == 0)) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x000102d150f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar11 + 0x38))(param_1,1,1,uVar3);
      auVar12._8_8_ = param_3;
      auVar12._0_8_ = param_2;
      return auVar12;
    }
    goto LAB_102d152c0;
  }
  func_0x0001005c6500();
  func_0x000107c61180();
  uVar4 = uVar9;
  func_0x000107c5faec();
  func_0x000107c61170(uVar9);
  uStack_78 = uVar4;
  uStack_70 = uVar5;
  func_0x000107c5fb78(param_5,param_6);
  func_0x000107c5fb78(0x34706d2e,0xe400000000000000);
  param_7 = uStack_70;
  uVar9 = uStack_70;
  func_0x000107c5ed80(puVar10,uStack_78,uStack_70);
  func_0x000107c6142c(param_7);
  func_0x000107c30a1c();
  func_0x000107c61180();
  if (param_4 == 0) {
    (**(code **)(lVar11 + 8))(puVar10,uVar3);
LAB_102d15270:
    pcVar2 = *(code **)(lVar11 + 0x38);
    uVar8 = 1;
  }
  else {
    uVar5 = param_4;
    func_0x000107c5ee30();
    func_0x000107c61170(param_4);
    uVar4 = uVar5;
    func_0x000107c5ee20(uVar5,uVar9);
    uVar6 = uVar4;
    func_0x000107c5ed90();
    uStack_78 = 0;
    uVar7 = uVar4;
    func_0x000107c51814();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar6);
    param_7 = uStack_78;
    if ((int)uVar7 == 0) {
      uVar4 = uStack_78;
      func_0x000107c61174(uStack_78);
      func_0x000107c5ed30();
      func_0x000107c61170(uVar4);
      func_0x000107c61654();
      func_0x00010006c090(uVar5,uVar9);
      (**(code **)(lVar11 + 8))(puVar10,uVar3);
      func_0x000107c614ac(param_7);
      goto LAB_102d15270;
    }
    func_0x000107c61174(uStack_78);
    func_0x00010006c090(uVar5,uVar9);
    (**(code **)(lVar11 + 0x20))(param_1,puVar10,uVar3);
    pcVar2 = *(code **)(lVar11 + 0x38);
    uVar8 = 0;
  }
  (*pcVar2)(param_1,uVar8,1,uVar3);
  uVar9 = param_1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    auVar13._8_8_ = param_3;
    auVar13._0_8_ = param_2;
    return auVar13;
  }
LAB_102d152c0:
  func_0x000107c60e78();
  *(undefined8 *)((long)auStack_e0 + lVar1 + 0x30) = unaff_d9;
  *(undefined8 *)((long)auStack_e0 + lVar1 + 0x38) = unaff_d8;
  *(ulong *)((long)auStack_e0 + lVar1 + 0x40) = param_7;
  *(ulong *)((long)auStack_e0 + lVar1 + 0x48) = uVar3;
  *(undefined1 **)((long)auStack_e0 + lVar1 + 0x50) = &stack0xfffffffffffffff0;
  *(code **)((long)auStack_e0 + lVar1 + 0x58) = FUN_102d152c4;
  func_0x000107c5ce80();
  func_0x000107c61180();
  uVar8 = 0;
  FUN_102d1c240(0,0x112d4f340,&PTR__OBJC_CLASS___AVAssetTrack_1126a60e0);
  uVar5 = uVar9;
  func_0x000107c5fc54(uVar9,uVar8);
  func_0x000107c61170(uVar9);
  if (uVar5 >> 0x3e == 0) {
    uVar9 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar9 = uVar5;
    }
    func_0x000107c60480();
  }
  if (uVar9 == 0) {
    func_0x000107c6142c(uVar5);
    param_2 = 0;
    param_3 = 0;
  }
  else {
    if ((uVar5 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar5 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102d15404);
        (*pcVar2)();
      }
      uVar8 = *(undefined8 *)(uVar5 + 0x20);
      func_0x000107c61174(uVar8);
    }
    else {
      uVar8 = 0;
      func_0x000100f95fe8(0,uVar5);
    }
    func_0x000107c6142c(uVar5);
    func_0x000107c4d49c(uVar8);
    func_0x000107c4ecc4((long)auStack_e0 + lVar1,uVar8);
    *(undefined8 *)((long)auStack_e0 + lVar1 + 8) = *(undefined8 *)((long)auStack_e0 + lVar1 + 8);
    *(undefined8 *)((long)auStack_e0 + lVar1) = *(undefined8 *)((long)auStack_e0 + lVar1);
    *(undefined8 *)((long)auStack_e0 + lVar1 + 0x18) =
         *(undefined8 *)((long)auStack_e0 + lVar1 + 0x18);
    *(undefined8 *)((long)auStack_e0 + lVar1 + 0x10) =
         *(undefined8 *)((long)auStack_e0 + lVar1 + 0x10);
    *(undefined8 *)((long)auStack_e0 + lVar1 + 0x28) =
         *(undefined8 *)((long)auStack_e0 + lVar1 + 0x28);
    *(undefined8 *)((long)auStack_e0 + lVar1 + 0x20) =
         *(undefined8 *)((long)auStack_e0 + lVar1 + 0x20);
    func_0x000107c609f8(param_2,param_3,(long)auStack_e0 + lVar1);
    func_0x000107c61170(uVar8);
  }
  auVar14._8_8_ = param_3;
  auVar14._0_8_ = param_2;
  return auVar14;
}



/* Entry: 102d152c4; end: 102d15403;  */

undefined1  [16]
FUN_102d152c4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_60 [48];
  
  func_0x000107c5ce80(param_3,param_4,*(undefined8 *)PTR__AVMediaTypeVideo_110348090);
  func_0x000107c61180();
  uVar2 = 0;
  FUN_102d1c240(0,0x112d4f340,&PTR__OBJC_CLASS___AVAssetTrack_1126a60e0);
  uVar3 = param_3;
  func_0x000107c5fc54(param_3,uVar2);
  func_0x000107c61170(param_3);
  if (uVar3 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar4 = uVar3;
    }
    func_0x000107c60480();
  }
  if (uVar4 == 0) {
    func_0x000107c6142c(uVar3);
    param_1 = 0;
    param_2 = 0;
  }
  else {
    if ((uVar3 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar3 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102d15404);
        (*pcVar1)();
      }
      uVar2 = *(undefined8 *)(uVar3 + 0x20);
      func_0x000107c61174(uVar2);
    }
    else {
      uVar2 = 0;
      func_0x000100f95fe8(0,uVar3);
    }
    func_0x000107c6142c(uVar3);
    func_0x000107c4d49c(uVar2);
    func_0x000107c4ecc4(auStack_60,uVar2);
    func_0x000107c609f8(param_1,param_2,auStack_60);
    func_0x000107c61170(uVar2);
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 102d15404; end: 102d15ba7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102d15404(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long extraout_x8;
  long unaff_x20;
  long lVar8;
  long lVar9;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_70 [16];
  
  lVar1 = 0;
  lStack_a8 = param_5;
  func_0x000107c5f804();
  lVar8 = *(long *)(lVar1 + -8);
  lStack_a0 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  func_0x000107c610f8();
  lVar1 = _DAT_112f0da08;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_102d1a674();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112f0da10;
  puVar2 = puVar3;
  func_0x0001010b11e8();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112f0da18;
  puVar2 = puVar3;
  func_0x000102d1a774(puVar3,0x112f0dab8,&UNK_10db40988);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112f0da20;
  puVar2 = puVar3;
  func_0x000102d1a774(puVar3,0x112f0dab0,&UNK_10db40978);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112f0da28;
  puVar2 = puVar3;
  func_0x0001003d21d8();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112f0da30;
  func_0x0001003d21d8();
  lVar9 = lStack_a8;
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f0da38) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f0da40) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f0da48) = param_4;
  *(long *)(unaff_x20 + _DAT_112f0da50) = lStack_a8;
  *(undefined8 *)(unaff_x20 + _DAT_112f0da58) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f0da60) = param_6;
  puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c61168();
  func_0x000107c61174();
  uStack_80 = param_6;
  func_0x000107c61174();
  uStack_88 = param_2;
  func_0x000107c61174();
  uStack_98 = param_1;
  func_0x000107c61174();
  lVar4 = lVar9;
  uStack_90 = param_4;
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  func_0x000107c41570();
  func_0x000107c61180();
  lVar1 = lStack_a0;
  *(undefined **)(unaff_x20 + _DAT_112f0da68) = puVar3;
  *(undefined1 *)(unaff_x20 + _DAT_112f0da70) = 0;
  (**(code **)(lVar8 + 0x68))
            (auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,
             lStack_a0);
  puVar3 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar5 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f10a4c0);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar5);
  (**(code **)(lVar8 + 8))(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  *(undefined **)(unaff_x20 + _DAT_112f0da78) = puVar3;
  if (lVar9 != 0) {
    lVar1 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      uVar5 = 0xd000000000000020;
      func_0x000107c5fadc(0xd000000000000020,0x800000010f10a4f0);
      lVar9 = lVar1;
      func_0x000107c49818();
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(uVar5);
      goto LAB_102d156f4;
    }
  }
  lVar9 = 0;
LAB_102d156f4:
  *(long *)(unaff_x20 + _DAT_112f0da80) = lVar9;
  puVar6 = auStack_70;
  func_0x000107c61154(puVar6,PTR_s_init_1125d9248);
  lVar1 = _DAT_112f0da68;
  uVar5 = *(undefined8 *)(puVar6 + _DAT_112f0da68);
  puVar7 = puVar6;
  func_0x000107c61174();
  func_0x000107c3d7bc(uVar5);
  func_0x000107c3d7bc(*(undefined8 *)(puVar6 + lVar1));
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uStack_98);
  func_0x000107c61170(uStack_88);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uStack_90);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(uStack_80);
  return puVar7;
}



/* Entry: 102d15ba8; end: 102d15c43; -[AdOperaMediaManager initWithPlaybackAssetRepository:adContentDelivery:promotedStoryStateProvider:adConfigProvider:adConfigProviderV2:adCrashLogger:] */

void FUN_102d15ba8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000102d157d8(param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Entry: 102d15c44; end: 102d16183;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d15c44(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  char *pcVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  puVar1 = unaff_x20;
  func_0x000107c614f0();
  lVar11 = _DAT_112f0da08;
  func_0x000107c61428(unaff_x20 + _DAT_112f0da08,&puStack_a0,0x20,0);
  lVar11 = *(long *)(unaff_x20 + lVar11);
  if (*(long *)(lVar11 + 0x10) == 0) {
    func_0x000107c614a8(&puStack_a0);
  }
  else {
    func_0x000107c61434(lVar11);
    lVar2 = param_2;
    uVar9 = param_3;
    func_0x000100029284();
    if ((uVar9 & 1) == 0) {
      func_0x000107c614a8(&puStack_a0);
      func_0x000107c6142c(lVar11);
    }
    else {
      puVar3 = *(undefined **)(*(long *)(lVar11 + 0x38) + lVar2 * 8);
      func_0x000107c61174();
      func_0x000107c614a8(&puStack_a0);
      func_0x000107c6142c(lVar11);
      if (*(long *)(puVar3 + _DAT_113813300 + 8) != 0) {
        if (param_5 != 0) {
          puStack_a0 = (undefined *)0x0;
          uStack_98 = 0xe000000000000000;
          func_0x000107c6157c(param_6);
          func_0x000107c602fc(0x15);
          uVar12 = uStack_98;
          uVar10 = 0;
          func_0x000107c60714();
          func_0x000107c6142c(uVar12);
          puStack_a0 = puVar1;
          uStack_98 = uVar10;
          func_0x000107c5fb78(0xd000000000000013,0x800000010f10a560);
          uVar12 = uStack_98;
          puVar4 = puStack_a0;
          puVar1 = &UNK_1105c2b30;
          func_0x000107c613fc(&UNK_1105c2b30,0x18,7);
          func_0x000107c61614(puVar1 + 0x10);
          puVar5 = &UNK_1105c2b58;
          func_0x000107c613fc(&UNK_1105c2b58,0x40,7);
          *(undefined **)(puVar5 + 0x10) = puVar1;
          *(long *)(puVar5 + 0x18) = param_2;
          *(ulong *)(puVar5 + 0x20) = param_3;
          *(long *)(puVar5 + 0x28) = param_5;
          *(undefined8 *)(puVar5 + 0x30) = param_6;
          *(undefined **)(puVar5 + 0x38) = puVar3;
          pcStack_80 = FUN_102d1a8bc;
          puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_98 = 0x42000000;
          puStack_90 = &UNK_1000f6b44;
          puStack_88 = &UNK_1105c2b70;
          ppuVar7 = &puStack_a0;
          puStack_78 = puVar5;
          func_0x000107c60bc4(ppuVar7);
          puVar1 = puStack_78;
          func_0x000107c61174(puVar3);
          func_0x000102d1a8ac(param_5,param_6);
          func_0x000107c61434(param_3);
          func_0x000107c61574(puVar1);
          func_0x000107c5fb28(puVar4,uVar12);
          func_0x000107c6142c(uVar12);
          func_0x0001000d76cc(puVar4 + 0x20,ppuVar7);
          func_0x000107c61170(puVar3);
          func_0x000107c60bd0(ppuVar7);
          func_0x000107c61574(puVar4);
          FUN_102d1aa0c(param_5,param_6);
          return;
        }
        goto LAB_102d16154;
      }
      func_0x000107c61170(puVar3);
    }
  }
  puVar4 = PTR_PTR_1126ae560;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar5 = PTR_PTR_1126ae560;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112f0da78);
  puVar1 = &UNK_1105c2b30;
  puVar6 = puVar1;
  func_0x000107c613fc(&UNK_1105c2b30,0x18,7);
  func_0x000107c61614(puVar6 + 0x10);
  puVar3 = &UNK_1105c2fe0;
  func_0x000107c613fc(&UNK_1105c2fe0,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar6;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined **)(puVar3 + 0x28) = puVar5;
  pcStack_80 = (code *)0x102d1cb90;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_1105c2ff8;
  ppuVar7 = &puStack_a0;
  puStack_78 = puVar3;
  func_0x000107c60bc4(ppuVar7);
  puVar3 = puStack_78;
  func_0x000107c61174();
  func_0x000107c61434(param_4);
  func_0x000107c61174(puVar5);
  func_0x000107c61574(puVar3);
  func_0x000107c4e524(uVar12);
  func_0x000107c60bd0(ppuVar7);
  puVar6 = puVar5;
  func_0x000107c43bf4(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c613fc(&UNK_1105c2b30,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar3 = &UNK_1105c2f40;
  func_0x000107c613fc(&UNK_1105c2f40,0x38,7);
  *(long *)(puVar3 + 0x10) = param_2;
  *(ulong *)(puVar3 + 0x18) = param_3;
  *(undefined **)(puVar3 + 0x20) = puVar4;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  *(undefined8 *)(puVar3 + 0x30) = param_1;
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_102d1c650;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1010ffbc4;
  puStack_88 = &UNK_1105c2f58;
  ppuVar7 = &puStack_a0;
  puStack_78 = puVar3;
  func_0x000107c60bc4(ppuVar7);
  puVar1 = puStack_78;
  func_0x000107c61434(param_3);
  func_0x000107c61174(puVar4);
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c5dc64(puVar6);
  func_0x000107c60bd0(ppuVar7);
  puVar3 = puVar4;
  func_0x000107c43bf4(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar4);
  puVar1 = &UNK_1105c2ae0;
  func_0x000107c613fc(&UNK_1105c2ae0,0x20,7);
  *(long *)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_6;
  pcStack_80 = FUN_102d1a868;
  puStack_a0 = puVar5;
  uStack_98 = 0x42000000;
  puStack_90 = (undefined *)0x102d1cda0;
  puStack_88 = &UNK_1105c2af8;
  ppuVar7 = &puStack_a0;
  puStack_78 = puVar1;
  func_0x000107c60bc4(ppuVar7);
  puVar1 = puStack_78;
  func_0x000102d1a8ac(param_5,param_6);
  func_0x000107c61574(puVar1);
  pcVar8 = "prepareProfileIcon(_:mediaId:contexts:completion:)";
  func_0x0001000c10c0("prepareProfileIcon(_:mediaId:contexts:completion:)");
  func_0x000107c61180();
  func_0x000107c5dc64(puVar3);
  func_0x000107c615e8(pcVar8);
  func_0x000107c60bd0(ppuVar7);
LAB_102d16154:
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 102d16184; end: 102d161fb;  */

undefined8 FUN_102d16184(long param_1,ulong param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_3 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c61434(param_3);
    func_0x000100029284();
    if ((param_2 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(*(long *)(param_3 + 0x38) + param_1 * 8);
      func_0x000107c61174(uVar1);
    }
    func_0x000107c6142c(param_3);
  }
  return uVar1;
}



/* Entry: 102d161fc; end: 102d162f7; -[AdOperaMediaManager prepareProfileIcon:mediaId:contexts:completion:] */

/* WARNING: Possible PIC construction at 0x000102d162d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d162dc) */

void FUN_102d161fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  func_0x000107c5faec(param_4);
  func_0x000107c5fc54(param_5,PTR___sSSN_11034da80);
  if (param_6 == 0) {
    puVar1 = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    puVar1 = &UNK_1105c2d10;
    func_0x000107c613fc(&UNK_1105c2d10,0x18,7);
    *(long *)(puVar1 + 0x10) = param_6;
    uVar2 = 0x102d1cd58;
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102d15c44(param_3,param_4,param_2,param_5,uVar2,puVar1);
  FUN_102d1aa0c(uVar2,puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102d162f8; end: 102d1634f;  */

void FUN_102d162f8(undefined8 param_1,long param_2,long param_3)

{
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(param_3 + 0x10))(param_3,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102d16350; end: 102d16b0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d16350(ulong param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  ulong uVar12;
  long extraout_x8;
  long lVar13;
  ulong uVar14;
  long extraout_x12;
  long unaff_x20;
  long lVar15;
  ulong *puVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  undefined1 *puVar21;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar8 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar21 = auStack_e0 + -extraout_x8;
  lVar6 = 0;
  func_0x000107c5ede0();
  lVar15 = *(long *)(lVar6 + -8);
  lVar20 = *(long *)(lVar15 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = (long)puVar21 - (lVar20 + 0xfU & 0xfffffffffffffff0);
  lStack_b0 = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = _DAT_112f0da28;
  lStack_a8 = lVar13 - extraout_x12;
  func_0x000107c61428(unaff_x20 + _DAT_112f0da28,&puStack_a0,0x20,0);
  lVar13 = *(long *)(unaff_x20 + lVar8);
  if (*(long *)(lVar13 + 0x10) == 0) {
    func_0x000107c614a8(&puStack_a0);
  }
  else {
    func_0x000107c61434(lVar13);
    uVar18 = param_1;
    uVar14 = param_2;
    func_0x000100029284();
    if ((uVar14 & 1) == 0) {
      func_0x000107c614a8(&puStack_a0);
      func_0x000107c6142c(lVar13);
    }
    else {
      lVar17 = *(long *)(*(long *)(lVar13 + 0x38) + uVar18 * 8);
      func_0x000107c614a8(&puStack_a0);
      func_0x000107c6142c(lVar13);
      lVar13 = lVar17 + -1;
      if (lVar13 != 0 && 0 < lVar17) {
        func_0x000107c61428(unaff_x20 + lVar8,&puStack_a0,0x21,0);
        uVar7 = *(undefined8 *)(unaff_x20 + lVar8);
        func_0x000107c61558(uVar7);
        lStack_70 = *(long *)(unaff_x20 + lVar8);
        *(undefined8 *)(unaff_x20 + lVar8) = 0x8000000000000000;
        func_0x000101687ce0(lVar13,param_1,param_2,uVar7);
        *(long *)(unaff_x20 + lVar8) = lStack_70;
        goto LAB_102d166a0;
      }
    }
  }
  func_0x000107c61428(unaff_x20 + lVar8,&puStack_a0,0x21,0);
  func_0x000101fb034c(param_1,param_2);
  func_0x000107c614a8(&puStack_a0);
  lVar8 = _DAT_112f0da08;
  func_0x000107c61428(unaff_x20 + _DAT_112f0da08,&puStack_a0,0x20,0);
  lVar13 = *(long *)(unaff_x20 + lVar8);
  if (*(long *)(lVar13 + 0x10) != 0) {
    func_0x000107c61434(lVar13);
    uVar18 = param_1;
    uVar14 = param_2;
    func_0x000100029284();
    if ((uVar14 & 1) != 0) {
      lStack_d0 = lVar8;
      lVar8 = *(long *)(*(long *)(lVar13 + 0x38) + uVar18 * 8);
      uStack_c8 = param_1;
      uStack_c0 = param_2;
      func_0x000107c61174();
      func_0x000107c614a8(&puStack_a0);
      func_0x000107c6142c(lVar13);
      lVar13 = ((undefined8 *)(lVar8 + _DAT_1138132c0))[1];
      if (lVar13 != 0) {
        uVar7 = *(undefined8 *)(lVar8 + _DAT_1138132c0);
        func_0x000107c61428(unaff_x20 + _DAT_112f0da10,&puStack_a0,0x21,0);
        func_0x000107c61434(lVar13);
        func_0x000101755c54(&lStack_70,uVar7,lVar13);
        func_0x000107c614a8(&puStack_a0);
        func_0x000107c6142c(lVar13);
        func_0x0001000b44c0(lStack_70,uStack_68);
      }
      lVar13 = ((undefined8 *)(lVar8 + _DAT_1138132d8))[1];
      if (lVar13 != 0) {
        uVar7 = *(undefined8 *)(lVar8 + _DAT_1138132d8);
        func_0x000107c61428(unaff_x20 + _DAT_112f0da10,&puStack_a0,0x21,0);
        func_0x000107c61434(lVar13);
        func_0x000101755c54(&lStack_70,uVar7,lVar13);
        func_0x000107c614a8(&puStack_a0);
        func_0x000107c6142c(lVar13);
        func_0x0001000b44c0(lStack_70,uStack_68);
      }
      func_0x000100029394(lVar8 + _DAT_1138132b0,puVar21);
      puVar9 = puVar21;
      (**(code **)(lVar15 + 0x30))(puVar21,1,lVar6);
      lVar13 = lStack_a8;
      if ((int)puVar9 == 1) {
        func_0x0001000293e4(puVar21);
      }
      else {
        pcVar3 = *(code **)(lVar15 + 0x20);
        (*pcVar3)(lStack_a8,puVar21,lVar6);
        uVar18 = uStack_c8;
        FUN_102d173e4(uStack_c8,uStack_c0);
        lVar17 = lStack_b0;
        if ((uVar18 & 1) == 0) {
          pcVar3 = *(code **)(lVar15 + 8);
        }
        else {
          uStack_d8 = *(undefined8 *)(unaff_x20 + _DAT_112f0da78);
          (**(code **)(lVar15 + 0x10))(lStack_b0,lVar13,lVar6);
          uVar18 = (ulong)*(byte *)(lVar15 + 0x50);
          uVar14 = uVar18 + 0x10 & (uVar18 ^ 0xffffffffffffffff);
          puVar10 = &UNK_1105c2ba8;
          func_0x000107c613fc(&UNK_1105c2ba8,uVar14 + lVar20,uVar18 | 7);
          (*pcVar3)(puVar10 + uVar14,lVar17,lVar6);
          pcStack_80 = FUN_102d1aa1c;
          puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_98 = 0x42000000;
          puStack_90 = &UNK_1000f6b44;
          puStack_88 = &UNK_1105c2bc0;
          ppuVar11 = &puStack_a0;
          puStack_78 = puVar10;
          func_0x000107c60bc4(ppuVar11);
          func_0x000107c61574(puStack_78);
          func_0x000107c4e524(uStack_d8);
          func_0x000107c60bd0(ppuVar11);
          pcVar3 = *(code **)(lVar15 + 8);
        }
        (*pcVar3)(lVar13,lVar6);
      }
      uVar18 = ((ulong *)(lVar8 + _DAT_1138132b8))[1];
      if (uVar18 != 0) {
        uVar19 = *(ulong *)(lVar8 + _DAT_1138132b8);
        func_0x000107c61434(uVar18);
        uVar14 = uVar19;
        FUN_102d173e4(uVar19,uVar18);
        if ((uVar14 & 1) != 0) {
          func_0x000102d17574(uVar19,uVar18);
        }
        func_0x000107c6142c(uVar18);
      }
      lVar6 = ((undefined8 *)(lVar8 + _DAT_1138132e8))[1];
      if (lVar6 != 0) {
        uVar7 = *(undefined8 *)(lVar8 + _DAT_1138132e8);
        func_0x000107c61428(unaff_x20 + _DAT_112f0da10,&puStack_a0,0x21,0);
        func_0x000107c61434(lVar6);
        func_0x000101755c54(&lStack_70,uVar7,lVar6);
        func_0x000107c614a8(&puStack_a0);
        func_0x000107c6142c(lVar6);
        func_0x0001000b44c0(lStack_70,uStack_68);
      }
      lVar6 = ((undefined8 *)(lVar8 + _DAT_1138132e0))[1];
      if (lVar6 != 0) {
        uVar7 = *(undefined8 *)(lVar8 + _DAT_1138132e0);
        func_0x000107c61428(unaff_x20 + _DAT_112f0da10,&puStack_a0,0x21,0);
        func_0x000107c61434(lVar6);
        func_0x000101755c54(&lStack_70,uVar7,lVar6);
        func_0x000107c614a8(&puStack_a0);
        func_0x000107c6142c(lVar6);
        func_0x0001000b44c0(lStack_70,uStack_68);
      }
      lVar6 = _DAT_112f0da10;
      lVar13 = *(long *)(lVar8 + _DAT_1138132f8);
      if (lVar13 != 0) {
        puVar16 = (ulong *)(lVar13 + 0x40);
        uVar14 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
        uVar18 = 0xffffffffffffffff;
        if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
          uVar18 = ~(-1L << (uVar14 & 0x3f));
        }
        uVar18 = uVar18 & *puVar16;
        func_0x000107c61434();
        lVar15 = 0;
        lStack_a8 = lVar13;
        lStack_b8 = lVar8;
        while( true ) {
          for (; lVar8 = lStack_b8, uVar18 != 0; uVar18 = uVar18 - 1 & uVar18) {
            uVar19 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
            uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
            uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
            uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
            plVar2 = (long *)(*(long *)(lStack_a8 + 0x38) +
                              LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) * 0x10 + lVar15 * 0x400);
            lVar8 = *plVar2;
            uVar19 = plVar2[1];
            func_0x000107c61428(unaff_x20 + lVar6,&puStack_a0,0x21,0);
            uVar7 = *(undefined8 *)(unaff_x20 + lVar6);
            func_0x000107c61434(uVar19);
            func_0x000107c61434(uVar7);
            uVar12 = uVar19;
            func_0x000100029284();
            func_0x000107c6142c(uVar7);
            if ((uVar12 & 1) != 0) {
              iVar5 = (int)*(undefined8 *)(unaff_x20 + lVar6);
              func_0x000107c61558();
              lStack_70 = *(long *)(unaff_x20 + lVar6);
              *(undefined8 *)(unaff_x20 + lVar6) = 0x8000000000000000;
              if (iVar5 == 0) {
                func_0x0001010b9074();
              }
              lVar13 = lStack_70;
              func_0x000107c6142c(*(undefined8 *)(*(long *)(lStack_70 + 0x30) + lVar8 * 0x10 + 8));
              puVar1 = (undefined8 *)(*(long *)(lVar13 + 0x38) + lVar8 * 0x10);
              func_0x00010006c090(*puVar1,puVar1[1]);
              func_0x000101755d28(lVar8,lVar13);
              *(long *)(unaff_x20 + lVar6) = lVar13;
            }
            func_0x000107c614a8(&puStack_a0);
            func_0x000107c6142c(uVar19);
          }
          bVar4 = SCARRY8(lVar15,1);
          lVar15 = lVar15 + 1;
          if (bVar4) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102d16b0c);
            (*pcVar3)();
          }
          if ((long)(uVar14 + 0x3f >> 6) <= lVar15) break;
          uVar18 = puVar16[lVar15];
        }
        func_0x000107c61574();
      }
      lVar6 = ((undefined8 *)(lVar8 + _DAT_113813300))[1];
      if (lVar6 != 0) {
        uVar7 = *(undefined8 *)(lVar8 + _DAT_113813300);
        func_0x000107c61428(unaff_x20 + _DAT_112f0da10,&puStack_a0,0x21,0);
        func_0x000107c61434(lVar6);
        func_0x000101755c54(&lStack_70,uVar7,lVar6);
        func_0x000107c614a8(&puStack_a0);
        func_0x000107c6142c(lVar6);
        func_0x0001000b44c0(lStack_70,uStack_68);
      }
      func_0x000107c61428(unaff_x20 + lStack_d0,&puStack_a0,0x21,0);
      uVar18 = uStack_c8;
      FUN_102d19728(uStack_c8,uStack_c0);
      func_0x000107c614a8(&puStack_a0);
      func_0x000107c61170(lVar8);
      func_0x000107c61170(uVar18);
      return;
    }
    func_0x000107c6142c(lVar13);
  }
LAB_102d166a0:
  func_0x000107c614a8(&puStack_a0);
  return;
}



/* Entry: 102d16b0c; end: 102d1721f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d16b0c(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,
                  undefined8 param_5,byte param_6,long param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  char *pcVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *unaff_x20;
  long lVar11;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  puVar1 = unaff_x20;
  func_0x000107c614f0();
  lVar11 = _DAT_112f0da08;
  func_0x000107c61428(unaff_x20 + _DAT_112f0da08,&puStack_a0,0x20,0);
  lVar11 = *(long *)(unaff_x20 + lVar11);
  if (*(long *)(lVar11 + 0x10) != 0) {
    func_0x000107c61434(lVar11);
    lVar2 = param_3;
    uVar9 = param_4;
    func_0x000100029284();
    if ((uVar9 & 1) != 0) {
      puVar3 = *(undefined **)(*(long *)(lVar11 + 0x38) + lVar2 * 8);
      func_0x000107c61174();
      func_0x000107c614a8(&puStack_a0);
      func_0x000107c6142c(lVar11);
      if (param_7 != 0) {
        puStack_a0 = (undefined *)0x0;
        uStack_98 = 0xe000000000000000;
        func_0x000107c6157c(param_8);
        func_0x000107c602fc(0x17);
        uVar7 = uStack_98;
        uVar10 = 0;
        func_0x000107c60714();
        func_0x000107c6142c(uVar7);
        puStack_a0 = puVar1;
        uStack_98 = uVar10;
        func_0x000107c5fb78(0xd000000000000015,0x800000010f10a5e0);
        uVar7 = uStack_98;
        puVar5 = puStack_a0;
        puVar1 = &UNK_1105c2c98;
        func_0x000107c613fc(&UNK_1105c2c98,0x40,7);
        *(undefined **)(puVar1 + 0x10) = unaff_x20;
        *(long *)(puVar1 + 0x18) = param_3;
        *(ulong *)(puVar1 + 0x20) = param_4;
        *(long *)(puVar1 + 0x28) = param_7;
        *(undefined8 *)(puVar1 + 0x30) = param_8;
        *(undefined **)(puVar1 + 0x38) = puVar3;
        pcStack_80 = FUN_102d1aecc;
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0x42000000;
        puStack_90 = &UNK_1000f6b44;
        puStack_88 = &UNK_1105c2cb0;
        ppuVar6 = &puStack_a0;
        puStack_78 = puVar1;
        func_0x000107c60bc4(ppuVar6);
        puVar1 = puStack_78;
        func_0x000107c61174(puVar3);
        func_0x000102d1a8ac(param_7,param_8);
        func_0x000107c61174();
        func_0x000107c61434(param_4);
        func_0x000107c61574(puVar1);
        func_0x000107c5fb28(puVar5,uVar7);
        func_0x000107c6142c(uVar7);
        func_0x0001000d76cc(puVar5 + 0x20,ppuVar6);
        func_0x000107c61170(puVar3);
        func_0x000107c60bd0(ppuVar6);
        func_0x000107c61574(puVar5);
        FUN_102d1aa0c(param_7,param_8);
        return;
      }
      goto LAB_102d171f0;
    }
    func_0x000107c6142c(lVar11);
  }
  func_0x000107c614a8(&puStack_a0);
  puVar1 = PTR_PTR_1126ae560;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar11 = *(long *)(unaff_x20 + _DAT_112f0da80);
  uVar7 = param_2;
  if (lVar11 < 1) {
    puVar3 = PTR_PTR_1126ae560;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f0da78);
    puVar5 = &UNK_1105c2e00;
    func_0x000107c613fc(&UNK_1105c2e00,0x48,7);
    *(undefined **)(puVar5 + 0x10) = unaff_x20;
    *(undefined8 *)(puVar5 + 0x18) = param_1;
    *(undefined8 *)(puVar5 + 0x20) = param_2;
    *(long *)(puVar5 + 0x28) = param_3;
    *(ulong *)(puVar5 + 0x30) = param_4;
    *(undefined8 *)(puVar5 + 0x38) = param_5;
    *(undefined **)(puVar5 + 0x40) = puVar3;
    pcStack_80 = FUN_102d1c280;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_1105c2e18;
    ppuVar6 = &puStack_a0;
    puStack_78 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar5 = puStack_78;
    func_0x000107c61174(param_2);
    func_0x000107c61434(param_4);
    func_0x000107c61434(param_5);
    func_0x000107c61174();
  }
  else {
    puVar5 = unaff_x20;
    func_0x000107c614f0();
    puStack_a0 = (undefined *)0x0;
    uStack_98 = 0xe000000000000000;
    func_0x000107c602fc(0x39);
    func_0x000107c5fb78(0x5b,0xe100000000000000);
    uVar10 = 0;
    func_0x000107c60714(puVar5,0);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar10);
    func_0x000107c5fb78(0xd000000000000036,0x800000010f10a730);
    func_0x000107c6142c(uStack_98);
    puStack_a0 = (undefined *)0x0;
    uStack_98 = 0xe000000000000000;
    func_0x000107c602fc(0x1f);
    func_0x000107c6142c(uStack_98);
    puStack_a0 = (undefined *)0xd000000000000011;
    uStack_98 = 0x800000010f10a770;
    puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar5);
    func_0x000107c5fb78(0x49616964656d202c,0xea00000000003d64);
    func_0x000107c5fb78(param_3,param_4);
    func_0x000107c6142c(uStack_98);
    puVar3 = PTR_PTR_1126ae560;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f0da78);
    puVar5 = &UNK_1105c2b30;
    func_0x000107c613fc(&UNK_1105c2b30,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    puVar4 = &UNK_1105c2e50;
    func_0x000107c613fc(&UNK_1105c2e50,0x50,7);
    *(undefined **)(puVar4 + 0x10) = puVar5;
    *(undefined8 *)(puVar4 + 0x18) = param_1;
    *(long *)(puVar4 + 0x20) = lVar11;
    *(undefined8 *)(puVar4 + 0x28) = param_2;
    *(long *)(puVar4 + 0x30) = param_3;
    *(ulong *)(puVar4 + 0x38) = param_4;
    *(undefined8 *)(puVar4 + 0x40) = param_5;
    *(undefined **)(puVar4 + 0x48) = puVar3;
    pcStack_80 = FUN_102d1c3a8;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_1105c2e68;
    ppuVar6 = &puStack_a0;
    puStack_78 = puVar4;
    func_0x000107c60bc4(ppuVar6);
    puVar5 = puStack_78;
    func_0x000107c61174(param_2);
    func_0x000107c61434(param_4);
    func_0x000107c61434(param_5);
  }
  func_0x000107c61174(puVar3);
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar5);
  func_0x000107c4e524(uVar10);
  func_0x000107c60bd0(ppuVar6);
  puVar4 = puVar3;
  func_0x000107c43bf4(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar5 = &UNK_1105c2b30;
  func_0x000107c613fc(&UNK_1105c2b30,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  puVar3 = &UNK_1105c2bf8;
  func_0x000107c613fc(&UNK_1105c2bf8,0x40,7);
  *(long *)(puVar3 + 0x10) = param_3;
  *(ulong *)(puVar3 + 0x18) = param_4;
  *(undefined **)(puVar3 + 0x20) = puVar1;
  *(undefined **)(puVar3 + 0x28) = puVar5;
  puVar3[0x30] = param_6 & 1;
  *(undefined8 *)(puVar3 + 0x38) = param_2;
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_102d1ab0c;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = (undefined *)0x102d1cd9c;
  puStack_88 = &UNK_1105c2c10;
  ppuVar6 = &puStack_a0;
  puStack_78 = puVar3;
  func_0x000107c60bc4(ppuVar6);
  puVar3 = puStack_78;
  func_0x000107c61434(param_4);
  func_0x000107c61174(puVar1);
  func_0x000107c61174(uVar7);
  func_0x000107c61574(puVar3);
  func_0x000107c5dc64(puVar4);
  func_0x000107c60bd0(ppuVar6);
  puVar3 = puVar1;
  func_0x000107c43bf4(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar4);
  puVar1 = &UNK_1105c2c48;
  func_0x000107c613fc(&UNK_1105c2c48,0x28,7);
  *(long *)(puVar1 + 0x10) = param_7;
  *(undefined8 *)(puVar1 + 0x18) = param_8;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  pcStack_80 = FUN_102d1ae08;
  puStack_a0 = puVar5;
  uStack_98 = 0x42000000;
  puStack_90 = (undefined *)0x102d1cda0;
  puStack_88 = &UNK_1105c2c60;
  ppuVar6 = &puStack_a0;
  puStack_78 = puVar1;
  func_0x000107c60bc4(ppuVar6);
  puVar1 = puStack_78;
  func_0x000102d1a8ac(param_7,param_8);
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar1);
  pcVar8 = "prepareToViewAdMedia(_:profileInfo:mediaId:contexts:forceFullDownload:completion:)";
  func_0x0001000c10c0(
                     "prepareToViewAdMedia(_:profileInfo:mediaId:contexts:forceFullDownload:completion:)"
                     );
  func_0x000107c61180();
  func_0x000107c5dc64(puVar3);
  func_0x000107c615e8(pcVar8);
  func_0x000107c60bd0(ppuVar6);
LAB_102d171f0:
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 102d17220; end: 102d1734b; -[AdOperaMediaManager prepareToViewAdMedia:profileInfo:mediaId:contexts:forceFullDownload:completion:] */

/* WARNING: Possible PIC construction at 0x000102d17328: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d1732c) */

void FUN_102d17220(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  
  func_0x000107c60bc4();
  func_0x000107c5faec(param_5);
  func_0x000107c5fc54(param_6,PTR___sSSN_11034da80);
  if (param_8 == 0) {
    puVar2 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar2 = &UNK_1105c2ce8;
    func_0x000107c613fc(&UNK_1105c2ce8,0x18,7);
    *(long *)(puVar2 + 0x10) = param_8;
    pcVar3 = FUN_102d1b010;
  }
  func_0x000107c61174(param_3);
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102d16b0c(param_3,param_4,param_5,param_2,param_6,param_7,pcVar3,puVar2);
  FUN_102d1aa0c(pcVar3,puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102d1734c; end: 102d173e3; -[AdOperaMediaManager preparedAdMediaForMediaId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d1734c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c5faec(param_3);
  lVar1 = _DAT_112f0da08;
  func_0x000107c61428(param_1 + _DAT_112f0da08,auStack_48,0x20,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  func_0x000107c61174(param_1);
  FUN_102d16184(param_3,param_2,uVar2);
  func_0x000107c614a8(auStack_48);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}


