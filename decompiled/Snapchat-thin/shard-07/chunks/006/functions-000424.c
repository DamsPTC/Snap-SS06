/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1057cab6c; end: 1057cabd3; +[CommerceApiServiceError descriptor] */

void FUN_1057cab6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0778 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6ada0,
                        &PTR____CFConstantStringClassReference_110e03198,&PTR_DAT_113100cf8,
                        &PTR_DAT_113100d10,2,0x10,0x1c);
    puRam00000001136c0778 = puVar1;
  }
  return;
}



/* Entry: 1057cabd4; end: 1057cac47; -[SCCommerceConfigProvider initWithCircumstanceEngine:] */

undefined1 * FUN_1057cabd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea4b0;
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



/* Entry: 1057cac48; end: 1057cacc3; -[SCCommerceConfigProvider snapStoreIdentifier] */

void FUN_1057cac48(long param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_113185418;
  _objc_retain(PTR_PTR_113185418);
  puVar3 = puVar2;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e031d8;
  if ((int)puVar3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e031b8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c25d790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_stringValueForConfigKeySync_defa_112675008,ppuVar1,
             &PTR____CFConstantStringClassReference_110daafd8,0);
  return;
}



/* Entry: 1057cacc4; end: 1057cad47; -[SCCommerceConfigProvider settingsSnapStoreEnabled] */

uint FUN_1057cacc4(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1;
  func_0x000106cf83ec();
  if (lVar2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf1f440(uVar3,param_2,&PTR____CFConstantStringClassReference_110e03258,1,0);
    uVar1 = (uint)uVar3;
  }
  else {
    uVar1 = (uint)(lVar2 != 2);
  }
  func_0x00010c243500(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c08fa60();
  _objc_release(param_1);
  return lVar2 != 0 & uVar1;
}



/* Entry: 1057cad48; end: 1057cae0b; -[SCCommerceConfigProvider profileStoreDeeplink] */

void FUN_1057cad48(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar5 = PTR_PTR_113185418;
  _objc_retain(PTR_PTR_113185418);
  puVar2 = puVar5;
  func_0x00010c0720c0(puVar5,param_2,&PTR____CFConstantStringClassReference_110db1f38);
  _objc_release(puVar5);
  lVar3 = *(long *)(param_1 + 8);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e03218;
  if ((int)puVar2 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e031f8;
  }
  func_0x00010c25d780(lVar3,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110daafd8,0);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1057cae0c; end: 1057cae9f; -[SCCommerceConfigProvider profileStoreEnabled] */

uint FUN_1057cae0c(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  
  lVar2 = param_1;
  func_0x000106cf83f8();
  if (lVar2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf1f440(uVar3,param_2,&PTR____CFConstantStringClassReference_110e03238,1,0);
    uVar1 = (uint)uVar3;
  }
  else {
    uVar1 = (uint)(lVar2 != 2);
  }
  lVar2 = param_1;
  func_0x00010c243500();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c08fa60();
  uVar5 = 0;
  if ((lVar4 != 0) && (uVar1 != 0)) {
    func_0x00010bfb5220(param_1);
    uVar5 = (uint)param_1 ^ 1;
  }
  _objc_release(lVar2);
  return uVar5;
}



/* Entry: 1057caea0; end: 1057caf27; -[SCCommerceConfigProvider paymentSettingsEnabled] */

void FUN_1057caea0(long param_1)

{
  int iVar1;
  
  if (lRam000000011381e950 != -1) {
    func_0x00010002a2fc(0x11381e950,&PTR___NSConcreteGlobalBlock_1109756a0);
  }
  if (lRam000000011381e948 != 2) {
    if (lRam000000011381e948 == 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 8);
      func_0x00010bf1f440();
      if (iVar1 == 0) {
        return;
      }
    }
    func_0x00010bfb5220(param_1);
  }
  return;
}



/* Entry: 1057caf28; end: 1057caf3f; -[SCCommerceConfigProvider attachmentToolEnabled] */

void FUN_1057caf28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e03278,0,0);
  return;
}



/* Entry: 1057caf40; end: 1057caf43; -[SCCommerceConfigProvider showcaseNetworkBackendEndpoint] */

void FUN_1057caf40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8ec0,PTR_s_intValue_1125f79c0);
  return;
}



/* Entry: 1057caf44; end: 1057caf9f; -[SCCommerceConfigProvider showcaseGeoHeader] */

void FUN_1057caf44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000106cf8434();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078d80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_1);
  if ((int)puVar1 == 0) {
    uVar2 = 0;
  }
  else {
    _objc_retain(param_1);
    uVar2 = param_1;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1057cafa0; end: 1057cafb7; -[SCCommerceConfigProvider maxPixelItems] */

void FUN_1057cafa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_intValueForConfigKeySync_default_1125f79d0,
             &PTR____CFConstantStringClassReference_110e032b8,10,0);
  return;
}



/* Entry: 1057cafb8; end: 1057cafbf; -[SCCommerceConfigProvider showcaseHeroContentMode] */

undefined8 FUN_1057cafb8(void)

{
  return 1;
}



/* Entry: 1057cafc0; end: 1057cafc7; -[SCCommerceConfigProvider showcaseProductsContentMode] */

undefined8 FUN_1057cafc0(void)

{
  return 2;
}



/* Entry: 1057cafc8; end: 1057cafcb; -[SCCommerceConfigProvider forceUserOutOfRegion] */

bool FUN_1057cafc8(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8ea8;
  func_0x00010c067fc0(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8ea8);
  return ppuVar1 == (undefined **)0x2;
}



/* Entry: 1057cafcc; end: 1057cafd3; -[SCCommerceConfigProvider forceDevStoreAttachment] */

undefined8 FUN_1057cafcc(void)

{
  return 0;
}



/* Entry: 1057cafd4; end: 1057cb017; -[SCCommerceConfigProvider screenshopJpegCompression] */

void FUN_1057cafd4(long param_1,undefined8 param_2)

{
  func_0x00010bfb2cc0(*(undefined8 *)(param_1 + 8),param_2,
                      &PTR____CFConstantStringClassReference_110e032d8,0);
  return;
}



/* Entry: 1057cb018; end: 1057cb01b; -[SCCommerceConfigProvider screenshopNetworkServiceEnvironment] */

void FUN_1057cb018(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8ec0,PTR_s_intValue_1125f79c0);
  return;
}



/* Entry: 1057cb01c; end: 1057cb047; -[SCCommerceConfigProvider screenshopSwipeableMinScreenshots] */

long FUN_1057cb01c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110e032f8,3,0);
  return (long)(int)uVar1;
}



/* Entry: 1057cb048; end: 1057cb05f; -[SCCommerceConfigProvider screenshopSwipeableCollapsingItems] */

void FUN_1057cb048(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e03318,0,0);
  return;
}



/* Entry: 1057cb060; end: 1057cb08b; -[SCCommerceConfigProvider screenshopModelServiceCooldownInSeconds] */

double FUN_1057cb060(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110e03338,10,0);
  return (double)(int)uVar1;
}



/* Entry: 1057cb08c; end: 1057cb0b7; -[SCCommerceConfigProvider screenshopModelExpirationInSeconds] */

double FUN_1057cb08c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110e03358,2,0);
  return (double)(int)uVar1;
}



/* Entry: 1057cb0b8; end: 1057cb0e3; -[SCCommerceConfigProvider screenshopOnStoriesTooltipMaxCount] */

long FUN_1057cb0b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110e03378,3,0);
  return (long)(int)uVar1;
}



/* Entry: 1057cb0e4; end: 1057cb0fb; -[SCCommerceConfigProvider screenshopScannerEnabled] */

void FUN_1057cb0e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e03398,0,0);
  return;
}



/* Entry: 1057cb0fc; end: 1057cb23f; -[SCCommerceConfigProvider screenshopFashionModel] */

void FUN_1057cb0fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uStack_48;
  
  puVar2 = PTR_PTR_1126be338;
  _objc_alloc_init(PTR_PTR_1126be338);
  func_0x00010c1c8d60();
  func_0x00010c19a400(0x3e4ccccd,puVar2);
  puVar4 = PTR_PTR_1126be598;
  puVar3 = puVar2;
  func_0x00010bf63640(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uStack_48 = 0;
  func_0x00010c0f40e0(puVar4,param_2,puVar3,&uStack_48);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uStack_48;
  _objc_retain(uStack_48);
  _objc_release(puVar3);
  puVar5 = PTR_PTR_1126af7d0;
  _objc_alloc(PTR_PTR_1126af7d0);
  func_0x00010c02b3a0();
  _objc_retain(uVar1);
  _objc_release(uVar1);
  puVar6 = *(undefined **)(param_1 + 8);
  func_0x00010c1195e0(puVar6,param_2,&PTR____CFConstantStringClassReference_110e033b8,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = puVar5;
  if (puVar6 != (undefined *)0x0) {
    puVar3 = puVar6;
  }
  _objc_retain(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1057cb240; end: 1057cb27b; -[SCCommerceConfigProvider screenshopContextMaxHeight] */

float FUN_1057cb240(long param_1,undefined8 param_2)

{
  float fVar1;
  
  fVar1 = 480.0;
  func_0x00010bfb2cc0(*(undefined8 *)(param_1 + 8),param_2,
                      &PTR____CFConstantStringClassReference_110e033d8,0);
  if (fVar1 <= 480.0) {
    fVar1 = 480.0;
  }
  return fVar1;
}



/* Entry: 1057cb27c; end: 1057cb293; -[SCCommerceConfigProvider enableSkipOnDeviceScan] */

void FUN_1057cb27c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e03598,0,0);
  return;
}



/* Entry: 1057cb294; end: 1057cb2ab; -[SCCommerceConfigProvider pdpShopButtonShouldDisplayMerchantName] */

void FUN_1057cb294(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e033f8,1,0);
  return;
}



/* Entry: 1057cb2ac; end: 1057cb2b3; -[SCCommerceConfigProvider pdpGalleryContentMode] */

undefined8 FUN_1057cb2ac(void)

{
  return 1;
}



/* Entry: 1057cb2b4; end: 1057cb2bb; -[SCCommerceConfigProvider pdpScrollingGalleryContentMode] */

undefined8 FUN_1057cb2b4(void)

{
  return 2;
}



/* Entry: 1057cb2bc; end: 1057cb2c3; -[SCCommerceConfigProvider pdpProductsContentMode] */

undefined8 FUN_1057cb2bc(void)

{
  return 2;
}



/* Entry: 1057cb2c4; end: 1057cb2db; -[SCCommerceConfigProvider pdpMultipleImageScrollingEnabled] */

void FUN_1057cb2c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e03418,0,0);
  return;
}



/* Entry: 1057cb2dc; end: 1057cb327; -[SCCommerceConfigProvider enablePreviewFeatureCommerceSticker] */

undefined8 FUN_1057cb2dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf1f460(uVar1,param_2,&PTR____CFConstantStringClassReference_110e035d8,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1057cb328; end: 1057cb33f; -[SCCommerceConfigProvider shouldUseNativeCheckout] */

void FUN_1057cb328(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e034b8,0,0);
  return;
}



/* Entry: 1057cb340; end: 1057cb357; -[SCCommerceConfigProvider shoppingBagFlowShouldUseDeck] */

void FUN_1057cb340(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e03438,0,0);
  return;
}



/* Entry: 1057cb358; end: 1057cb35f; -[SCCommerceConfigProvider shouldUseFavoritesDevEndpoints] */

undefined8 FUN_1057cb358(void)

{
  return 0;
}



/* Entry: 1057cb360; end: 1057cb38f; -[SCCommerceConfigProvider favoritesDeltaSyncTTLSeconds] */

double FUN_1057cb360(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110e03458,0x15180,0);
  return (double)(int)uVar1;
}



/* Entry: 1057cb390; end: 1057cb3a7; -[SCCommerceConfigProvider enableFavoritesPhaseTwo] */

void FUN_1057cb390(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e03478,0,0);
  return;
}



/* Entry: 1057cb3a8; end: 1057cb3bf; -[SCCommerceConfigProvider enableRecentlyViewed] */

void FUN_1057cb3a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e03498,0,0);
  return;
}



/* Entry: 1057cb3c0; end: 1057cb3c3; -[SCCommerceConfigProvider shoppingHubBackendEndpoint] */

void FUN_1057cb3c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c8ec0,PTR_s_intValue_1125f79c0);
  return;
}



/* Entry: 1057cb3c4; end: 1057cb3db; -[SCCommerceConfigProvider enableScreenshopStoriesComposerMigration] */

void FUN_1057cb3c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e034d8,0,0);
  return;
}



/* Entry: 1057cb3dc; end: 1057cb3f3; -[SCCommerceConfigProvider enableScreenshopOnboarding] */

void FUN_1057cb3dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e034f8,0,0);
  return;
}



/* Entry: 1057cb3f4; end: 1057cb40b; -[SCCommerceConfigProvider enableScreenshopOnboardingGreatButton] */

void FUN_1057cb3f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e03518,0,0);
  return;
}



/* Entry: 1057cb40c; end: 1057cb423; -[SCCommerceConfigProvider enableScreenshopMemoriesBackgroundScan] */

void FUN_1057cb40c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e03538,0,0);
  return;
}



/* Entry: 1057cb424; end: 1057cb453; -[SCCommerceConfigProvider screenshopMemoriesBackgroundScanRecurringTimeInSeconds] */

double FUN_1057cb424(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110e03558,0x15180,0);
  return (double)(int)uVar1;
}



/* Entry: 1057cb454; end: 1057cb46b; -[SCCommerceConfigProvider scanHorizontalScreenshopCardEnabled] */

void FUN_1057cb454(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e03578,0,0);
  return;
}



/* Entry: 1057cb46c; end: 1057cb483; -[SCCommerceConfigProvider commerceApiDisabled] */

void FUN_1057cb46c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e035b8,0,0);
  return;
}



/* Entry: 1057cb484; end: 1057cb54b; -[SCCommerceConfigProvider composerTweaks] */

void FUN_1057cb484(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126be5a0;
  _objc_opt_new(PTR_PTR_1126be5a0);
  lVar2 = param_1;
  func_0x00010c22ce80(param_1);
  func_0x00010c1ffaa0(puVar1,param_2,lVar2);
  lVar2 = param_1;
  func_0x00010c23b080(param_1);
  func_0x00010c202380(puVar1,param_2,lVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar2 = param_1;
  func_0x00010c151740(param_1);
  func_0x00010c0df760(puVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f77a0(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c23b000();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c202340(puVar1,param_2,param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057cb54c; end: 1057cb557; -[SCCommerceConfigProvider .cxx_destruct] */

void FUN_1057cb54c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057cb558; end: 1057cb5f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057cb558(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126be5a8;
  _objc_alloc(PTR_PTR_1126be5a8);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1 + _DAT_112729b6c;
    _objc_loadWeakRetained(lVar3);
  }
  lVar2 = lVar3;
  func_0x00010bf398e0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffe1e0(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057cb5f8; end: 1057cb62f; -[SCCommerceConfigServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057cb5f8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112729b6c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112729b68);
  return;
}



/* Entry: 1057cb630; end: 1057cb697; +[SCScreenshopFashionModel descriptor] */

void FUN_1057cb630(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0780 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a6aee0,
                        &PTR____CFConstantStringClassReference_110e035f8,&PTR_DAT_113100db0,
                        &PTR_DAT_113100dc8,2,0x10,0x1c);
    puRam00000001136c0780 = puVar1;
  }
  return;
}



/* Entry: 1057cb698; end: 1057cb76f; -[SCComposerActiveUserSessionVideoLoadersRegistryEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057cb698(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lStack_50;
  undefined *puStack_48;
  
  plVar4 = &lStack_50;
  *(undefined1 *)(param_1 + _DAT_112729b70) = 1;
  lVar5 = param_1 + _DAT_112729b7c;
  _objc_loadWeakRetained(lVar5);
  lVar1 = lVar5;
  func_0x00010bf452a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar5);
  lVar5 = (long)_DAT_112729b78;
  func_0x00010c282260(lVar2);
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = 0;
  _objc_release(uVar3);
  puStack_48 = PTR_PTR_1126ea4b8;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar4);
  return;
}



/* Entry: 1057cb770; end: 1057cb7d3; -[SCComposerActiveUserSessionVideoLoadersRegistryEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057cb770(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112729b80,0);
  _objc_destroyWeak(param_1 + _DAT_112729b74);
  _objc_destroyWeak(param_1 + _DAT_112729b7c);
  _objc_destroyWeak(param_1 + _DAT_112729b84);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112729b78,0);
  return;
}



/* Entry: 1057cb7d4; end: 1057cb7db; -[SCComposerActiveUserSessionVideoLoadersRegistryScope plugInRegistry] */

undefined8 FUN_1057cb7d4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1057cb7dc; end: 1057cb7e7; -[SCComposerActiveUserSessionVideoLoadersRegistryScope .cxx_destruct] */

void FUN_1057cb7dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057cb7e8; end: 1057cb7ef; -[SCComposerUserSessionVideoLoadersRegistryScope plugInRegistry] */

undefined8 FUN_1057cb7e8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1057cb7f0; end: 1057cb7fb; -[SCComposerUserSessionVideoLoadersRegistryScope .cxx_destruct] */

void FUN_1057cb7f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057cb7fc; end: 1057cb86f; -[SCGrapheneTopLevelCardsMetric2 init] */

undefined1 * FUN_1057cb7fc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ea4d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1057cb870; end: 1057cbb2f;  */

/* WARNING: Removing unreachable block (ram,0x0001057cbaf8) */
/* WARNING: Removing unreachable block (ram,0x0001057cbdb8) */

char * FUN_1057cb870(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  long *plVar12;
  char *unaff_x24;
  char *pcStack_1c0;
  undefined *puStack_1b8;
  char *pcStack_1b0;
  char *pcStack_1a8;
  char *pcStack_1a0;
  char *pcStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  char acStack_180 [24];
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar6 = param_3;
  pcVar9 = param_4;
  pcVar3 = param_5;
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
    func_0x00010002b838(auStack_a0,pcVar1);
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
    func_0x00010002b838(auStack_88,pcVar1);
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
    func_0x00010002b838(auStack_70,pcVar1);
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
    func_0x00010007e1e8(acStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar11 = 0;
    pcVar6 = pcVar2;
    pcVar9 = param_5;
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
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != auStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar8 = acStack_180;
  pcStack_c8 = FUN_1057cbb30;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = pcVar6;
  pcVar10 = pcVar9;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar6);
  _objc_retain(pcVar9);
  if (pcVar2 != (char *)0x0) {
    plVar12 = *(long **)(pcVar2 + 8);
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
    func_0x00010002b838(auStack_160,pcVar2);
    _objc_retain(pcVar6);
    if (pcVar6 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar6);
      pcVar2 = pcVar6;
      func_0x00010bdc3520(pcVar6);
    }
    _objc_release(pcVar6);
    func_0x00010002b838(auStack_148,pcVar2);
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
    func_0x00010002b838(auStack_130,pcVar2);
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
    func_0x00010007e1e8(acStack_180,auStack_160,&lStack_118,3);
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108b2a58);
    puStack_168 = acStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar11 = 0;
    pcVar7 = pcVar8;
    pcVar10 = pcVar3;
    do {
      if ((&cStack_119)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x24 = acStack_180;
    } while (lVar11 != -0x48);
  }
  _objc_release(pcVar9);
  _objc_release(pcVar6);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
    ___stack_chk_fail();
    _objc_release(pcVar9);
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != auStack_160);
    _objc_release(pcVar9);
    _objc_release(pcVar6);
    _objc_release(pcVar1);
    pcVar2 = pcVar3;
    __Unwind_Resume();
    ppcVar4 = &pcStack_1c0;
    pcStack_188 = FUN_1057cbdf0;
    pcStack_1b0 = pcVar3;
    pcStack_1a8 = pcVar9;
    pcStack_1a0 = pcVar6;
    pcStack_198 = pcVar1;
    ppuStack_190 = &puStack_d0;
    _objc_retain(pcVar7);
    _objc_retain(pcVar10);
    puStack_1b8 = PTR_PTR_1126ea4d8;
    pcStack_1c0 = pcVar2;
    _objc_msgSendSuper2(&pcStack_1c0,PTR_s_init_1125d9248);
    if (ppcVar4 != (char **)0x0) {
      _objc_retain(pcVar7);
      uVar5 = *(undefined8 *)((long)ppcVar4 + 8);
      *(char **)((long)ppcVar4 + 8) = pcVar7;
      _objc_release(uVar5);
      _objc_retain(pcVar10);
      uVar5 = *(undefined8 *)((long)ppcVar4 + 0x10);
      *(char **)((long)ppcVar4 + 0x10) = pcVar10;
      _objc_release(uVar5);
    }
    _objc_release(pcVar10);
    _objc_release(pcVar7);
    return (char *)ppcVar4;
  }
  return pcVar3;
}



/* Entry: 1057cbb30; end: 1057cbdef;  */

/* WARNING: Removing unreachable block (ram,0x0001057cbdb8) */

char * FUN_1057cbb30(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char **ppcVar4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  long *plVar8;
  char *unaff_x24;
  char *pcStack_100;
  undefined *puStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar6 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
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
    func_0x00010002b838(auStack_a0,pcVar1);
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
    func_0x00010002b838(auStack_88,pcVar1);
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
    func_0x00010002b838(auStack_70,pcVar1);
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
    func_0x00010007e1e8(acStack_c0,auStack_a0,&lStack_58,3);
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108b2a58);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar7 = 0;
    pcVar1 = pcVar2;
    pcVar6 = param_5;
    do {
      if ((&cStack_59)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar7 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_4);
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != auStack_a0);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
    pcVar3 = pcVar2;
    __Unwind_Resume();
    ppcVar4 = &pcStack_100;
    pcStack_c8 = FUN_1057cbdf0;
    pcStack_f0 = pcVar2;
    pcStack_e8 = param_4;
    pcStack_e0 = param_3;
    pcStack_d8 = param_2;
    puStack_d0 = &stack0xfffffffffffffff0;
    _objc_retain(pcVar1);
    _objc_retain(pcVar6);
    puStack_f8 = PTR_PTR_1126ea4d8;
    pcStack_100 = pcVar3;
    _objc_msgSendSuper2(&pcStack_100,PTR_s_init_1125d9248);
    if (ppcVar4 != (char **)0x0) {
      _objc_retain(pcVar1);
      uVar5 = *(undefined8 *)((long)ppcVar4 + 8);
      *(char **)((long)ppcVar4 + 8) = pcVar1;
      _objc_release(uVar5);
      _objc_retain(pcVar6);
      uVar5 = *(undefined8 *)((long)ppcVar4 + 0x10);
      *(char **)((long)ppcVar4 + 0x10) = pcVar6;
      _objc_release(uVar5);
    }
    _objc_release(pcVar6);
    _objc_release(pcVar1);
    return (char *)ppcVar4;
  }
  return pcVar2;
}



/* Entry: 1057cbdf0; end: 1057cbe93; -[SCContextCardsCachingDataFetcher initWithDataFetcher:cache:] */

undefined1 *
FUN_1057cbdf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ea4d8;
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



/* Entry: 1057cbe94; end: 1057cc03f; -[SCContextCardsCachingDataFetcher fetchCardDataWithSessionParams:completion:] */

void FUN_1057cbe94(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x0001065ee048();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001065ee2b4();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf262a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (lVar4 == 0) {
    _objc_initWeak(auStack_58,param_1);
    func_0x00010bf63840(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_4);
    func_0x00010bfa58a0(param_1);
    _objc_release(param_1);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  else {
    (**(code **)(param_4 + 0x10))(param_4,lVar4,0);
  }
  _objc_release(lVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1057cc040; end: 1057cc0eb;  */

void FUN_1057cc040(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (((param_2 != 0) && (param_3 == 0)) && (*(long *)(param_1 + 0x20) != 0)) {
    lVar1 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf262a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1057cc0ec; end: 1057cc0f3; -[SCContextCardsCachingDataFetcher dataFetcher] */

undefined8 FUN_1057cc0ec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1057cc0f4; end: 1057cc0fb; -[SCContextCardsCachingDataFetcher cache] */

undefined8 FUN_1057cc0f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1057cc0fc; end: 1057cc12b; -[SCContextCardsCachingDataFetcher .cxx_destruct] */

void FUN_1057cc0fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057cc12c; end: 1057cc1af; -[SCContextCardsDelayedDataFetcher initWithDataFetcher:delay:] */

undefined1 *
FUN_1057cc12c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ea4e0;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1057cc1b0; end: 1057cc2bf; -[SCContextCardsDelayedDataFetcher fetchCardDataWithSessionParams:completion:] */

void FUN_1057cc1b0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_2);
  func_0x00010bf6adc0(param_2);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1057cc2c0;
  puStack_68 = &UNK_110848378;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  uStack_60 = param_4;
  _objc_retain(param_5);
  uStack_58 = param_5;
  func_0x000100c749e0((float)param_1,"APPSTORE",&puStack_80);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1057cc2c0; end: 1057cc313;  */

void FUN_1057cc2c0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf63840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa58a0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057cc314; end: 1057cc31b; -[SCContextCardsDelayedDataFetcher dataFetcher] */

undefined8 FUN_1057cc314(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1057cc31c; end: 1057cc323; -[SCContextCardsDelayedDataFetcher delay] */

undefined8 FUN_1057cc31c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1057cc324; end: 1057cc32f; -[SCContextCardsDelayedDataFetcher .cxx_destruct] */

void FUN_1057cc324(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057cc330; end: 1057cc38f; -[SCContextCardsErroringDataFetcher fetchCardDataWithSessionParams:completion:] */

void FUN_1057cc330(void)

{
  undefined *puVar1;
  long in_x3;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (in_x3 != 0) {
    _objc_retain(in_x3);
    _objc_opt_new(puVar1);
    (**(code **)(in_x3 + 0x10))(in_x3,0,puVar1);
    _objc_release(in_x3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1057cc390; end: 1057cc39b; -[SCContextCardsErroringDataFetcher .cxx_destruct] */

void FUN_1057cc390(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057cc39c; end: 1057cc4bf; -[SCContextCardsHTTPDataFetcher initWithHttpMetadataService:httpRequestModifier:circumstanceEngine:bloopsOnboardingStateProvider:userInfoRequestProvider:] */

undefined1 *
FUN_1057cc39c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126ea4e8;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
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



/* Entry: 1057cc4c0; end: 1057cc603; -[SCContextCardsHTTPDataFetcher fetchCardDataWithSessionParams:completion:] */

void FUN_1057cc4c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 == 0) {
    func_0x00010bf1f440(*(undefined8 *)(param_1 + 8));
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar3;
    _objc_release(uVar4);
    lVar2 = *(long *)(param_1 + 0x30);
  }
  iVar1 = (int)lVar2;
  func_0x00010bf1f3c0();
  if (iVar1 == 0) {
    func_0x00010be10440(param_1);
  }
  else {
    uVar4 = 2;
    _dispatch_get_global_queue(2,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1057cc604;
    puStack_50 = &UNK_11084a9e8;
    lStack_48 = param_1;
    _objc_retain(param_3);
    uStack_40 = param_3;
    _objc_retain(param_4);
    uStack_38 = param_4;
    func_0x00010007380c(uVar4,&puStack_68);
    _objc_release(uVar4);
    _objc_release(uStack_38);
    _objc_release(uStack_40);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1057cc604; end: 1057cc613;  */

void FUN_1057cc604(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be10450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__fetchCardDataWithSessionParams__112561ab0,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1057cc614; end: 1057cc83f; -[SCContextCardsHTTPDataFetcher _fetchCardDataWithSessionParams:completion:] */

void FUN_1057cc614(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x0001065ed754(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x0001065ee048(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x0001064bc918(uVar3,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(ulong *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1e060();
  _objc_release(uVar4);
  puVar10 = (undefined *)0x0;
  if ((uVar5 & 1) == 0) {
    puVar10 = PTR_PTR_1126ae740;
    func_0x00010bf09f00(PTR_PTR_1126ae740);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc800();
  }
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfcbe80(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126be5c0;
  _objc_alloc_init();
  func_0x00010c2046c0();
  uVar8 = uVar2;
  func_0x0001065ee2b4(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c204680(puVar7);
  _objc_release(uVar8);
  func_0x00010c165a20(puVar7);
  func_0x00010c223020(puVar7);
  func_0x00010c21e7c0(puVar7);
  puVar9 = puVar7;
  func_0x00010c198000(puVar7);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_retain(puVar7);
  func_0x00010c15c720(param_1);
  _objc_release(puVar9);
  _objc_release(param_4);
  _objc_release(puVar7);
  _objc_release(param_4);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar10);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 1057cc840; end: 1057cc93f;  */

void FUN_1057cc840(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x28);
  if ((param_2 == 0) && (param_3 != 0)) {
    func_0x00010bf4bc60(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010bf452c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126be5d0;
    _objc_alloc(PTR_PTR_1126be5d0);
    func_0x00010c020680();
    _objc_release(puVar2);
    _objc_release(lVar1);
    (**(code **)(lVar4 + 0x10))(lVar4,puVar3,0);
    _objc_release(puVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001057cc93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 0x10))(lVar4,0,param_2);
  return;
}



/* Entry: 1057cc940; end: 1057ccbbb; -[SCContextCardsHTTPDataFetcher sendRequest:metadata:performer:completion:] */

void FUN_1057cc940(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bdc1b00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar2 = param_4;
  func_0x00010bf16280(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc34c0(puVar3,param_2,&PTR____CFConstantStringClassReference_110dd15b8,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bfe02c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1057ccbbc;
  puStack_80 = &UNK_110884ec8;
  uStack_78 = param_4;
  _objc_retain(param_4);
  uVar5 = uVar4;
  func_0x00010bf225e0(uVar4,param_2,1,puVar3,uVar2,param_3,&puStack_98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar4);
  puVar6 = PTR_PTR_1126b5730;
  _objc_alloc(PTR_PTR_1126b5730);
  func_0x00010c01b560();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c11de00(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_1057ccc0c;
  puStack_a8 = &UNK_11086d168;
  uStack_a0 = param_6;
  _objc_retain(param_6);
  func_0x00010c25f600(uVar4,param_2,uVar5,puVar6,uVar2,&puStack_c0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uStack_a0);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uStack_78);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1057ccbbc; end: 1057ccc0b;  */

void FUN_1057ccbbc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c2907c0(param_2);
  func_0x00010c243980(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c290a40(param_2);
  func_0x00010c28fde0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1057ccc0c; end: 1057cccff;  */

void FUN_1057ccc0c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
    if ((param_5 != 0) && (param_6 == 0)) {
      puVar1 = PTR_PTR_1126be5c8;
      _objc_alloc(PTR_PTR_1126be5c8);
      func_0x00010c008360();
      param_6 = 0;
      _objc_retain(0);
    }
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_6,puVar1);
    _objc_release(puVar1);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_6,0);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 1057ccd00; end: 1057ccd5f; -[SCContextCardsHTTPDataFetcher .cxx_destruct] */

void FUN_1057ccd00(long param_1)

{
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



/* Entry: 1057ccd60; end: 1057ccdd7; -[SCContextCardsJSONViewModel initWithJSON:] */

undefined1 * FUN_1057ccd60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea4f0;
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



/* Entry: 1057ccdd8; end: 1057ccdef; -[SCContextCardsJSONViewModel jsonData] */

void FUN_1057ccdd8(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057ccdf0; end: 1057cd063; -[SCContextCardsJSONViewModel hasCards] */

void FUN_1057ccdf0(long param_1,undefined8 param_2,undefined4 param_3,undefined1 *param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined **unaff_x20;
  undefined **unaff_x21;
  undefined **unaff_x22;
  ulong uVar9;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined1 *puStack_180;
  undefined4 uStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_138;
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
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) {
    unaff_x21 = *(undefined ***)(param_1 + 8);
    func_0x00010c0e00e0(unaff_x21,param_2,&PTR____CFConstantStringClassReference_110e03638);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    ppuVar4 = unaff_x21;
    _objc_opt_isKindOfClass(unaff_x21,puVar3);
    unaff_x20 = unaff_x21;
    if (((ulong)ppuVar4 & 1) == 0) {
      unaff_x20 = (undefined **)0x0;
    }
    _objc_retain(unaff_x20);
    _objc_release(unaff_x21);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(unaff_x20);
    param_3 = SUB84(&uStack_130,0);
    param_4 = auStack_f0;
    ppuVar4 = unaff_x20;
    func_0x00010bf52a60();
    if (ppuVar4 != (undefined **)0x0) {
      lVar2 = *plStack_120;
      unaff_x21 = &PTR____CFConstantStringClassReference_110e03658;
      lStack_138 = param_1;
      do {
        ppuVar8 = (undefined **)0x0;
        do {
          if (*plStack_120 != lVar2) {
            _objc_enumerationMutation(unaff_x20);
          }
          puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          uVar9 = *(ulong *)(lStack_128 + (long)ppuVar8 * 8);
          _objc_retain(uVar9);
          _objc_opt_class(puVar3);
          uVar5 = uVar9;
          _objc_opt_isKindOfClass(uVar9,puVar3);
          uVar1 = uVar9;
          if ((uVar5 & 1) == 0) {
            uVar1 = 0;
          }
          _objc_retain(uVar1);
          _objc_release(uVar9);
          uVar9 = uVar1;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
          _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
          uVar6 = uVar9;
          _objc_opt_isKindOfClass(uVar9,puVar3);
          uVar5 = uVar9;
          if ((uVar6 & 1) == 0) {
            uVar5 = 0;
          }
          _objc_retain(uVar5);
          _objc_release(uVar9);
          uVar9 = uVar5;
          func_0x00010bf529e0();
          if (uVar9 != 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            _objc_alloc();
            param_3 = 1;
            func_0x00010bff91e0();
            param_1 = lStack_138;
            uVar7 = *(undefined8 *)(lStack_138 + 0x10);
            *(undefined **)(lStack_138 + 0x10) = puVar3;
            _objc_release(uVar7);
            _objc_release(uVar5);
            _objc_release(uVar1);
            unaff_x21 = &PTR____CFConstantStringClassReference_110e03658;
            unaff_x22 = ppuVar4;
            goto LAB_1057ccfe4;
          }
          _objc_release(uVar5);
          _objc_release(uVar1);
          ppuVar8 = (undefined **)((long)ppuVar8 + 1);
        } while (ppuVar4 != ppuVar8);
        param_3 = SUB84(&uStack_130,0);
        param_4 = auStack_f0;
        ppuVar4 = unaff_x20;
        func_0x00010bf52a60();
        param_1 = lStack_138;
        unaff_x22 = ppuVar4;
      } while (ppuVar4 != (undefined **)0x0);
    }
LAB_1057ccfe4:
    _objc_release(unaff_x20);
    if (*(long *)(param_1 + 0x10) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_alloc();
      param_3 = 0;
      func_0x00010bff91e0();
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      *(undefined **)(param_1 + 0x10) = puVar3;
      _objc_release(uVar7);
    }
    _objc_release(unaff_x20);
    lVar2 = *(long *)(param_1 + 0x10);
  }
  func_0x00010bf1f3c0(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    ppuVar4 = &puStack_1a0;
    pcStack_148 = FUN_1057cd064;
    ppuStack_170 = unaff_x22;
    ppuStack_168 = unaff_x21;
    ppuStack_160 = unaff_x20;
    lStack_158 = param_1;
    puStack_150 = &stack0xfffffffffffffff0;
    _objc_retain(param_4);
    uStack_178 = param_3;
    func_0x00010c067ec0();
    puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_198 = 0xc2000000;
    pcStack_190 = FUN_1057cd12c;
    puStack_188 = &UNK_1108b2b68;
    puStack_180 = param_4;
    _objc_retain(param_4);
    _objc_retainBlock(&puStack_1a0);
    func_0x00010bfad9a0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar4);
    _objc_release(puStack_180);
    _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  return;
}



/* Entry: 1057cd064; end: 1057cd12b; -[SCContextCardsJSONViewModel filterByType:key:includeSectionTitle:] */

void FUN_1057cd064(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  ppuVar1 = &puStack_60;
  _objc_retain(param_4);
  uStack_38 = param_3;
  func_0x00010c067ec0();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1057cd12c;
  puStack_48 = &UNK_1108b2b68;
  uStack_40 = param_4;
  _objc_retain(param_4);
  _objc_retainBlock(&puStack_60);
  func_0x00010bfad9a0(param_1,param_2,ppuVar1,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  _objc_release(uStack_40);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1057cd12c; end: 1057cd337;  */

undefined8 FUN_1057cd12c(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar5 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar6 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar3);
  uVar4 = uVar5;
  if ((uVar6 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar5);
  if ((uVar1 == 0) || (uVar5 = uVar4, func_0x00010c08fa60(), uVar5 == 0)) {
    uVar9 = 0;
    goto LAB_1057cd300;
  }
  uVar6 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar7 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar3);
  uVar5 = uVar6;
  if ((uVar7 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar6);
  uVar7 = param_2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar8 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar3);
  uVar6 = uVar7;
  if ((uVar8 & 1) == 0) {
    uVar6 = 0;
  }
  _objc_retain(uVar6);
  _objc_release(uVar7);
  uVar7 = uVar5;
  func_0x00010c067ec0();
  _objc_release(uVar5);
  if (((int)uVar7 == *(int *)(param_1 + 0x28)) && (uVar5 = uVar6, func_0x00010bf32ee0(), uVar5 == 0)
     ) {
LAB_1057cd2f4:
    uVar9 = 1;
  }
  else {
    func_0x00010c067ec0();
    if (((int)uVar2 == *(int *)(param_1 + 0x28)) &&
       (uVar2 = uVar4, func_0x00010bf32ee0(), uVar2 == 0)) goto LAB_1057cd2f4;
    uVar9 = 0;
  }
  _objc_release(uVar6);
LAB_1057cd300:
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar9;
}



/* Entry: 1057cd338; end: 1057cd7df; -[SCContextCardsJSONViewModel filterByBlock:includeSectionTitle:] */

void FUN_1057cd338(long param_1,undefined8 param_2,long param_3,int param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined *puVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar6 = *(ulong *)(param_1 + 8);
  func_0x00010bf51e00();
  uVar7 = uVar6;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar9 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar8);
  uVar1 = uVar7;
  if ((uVar9 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar7);
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  if (uVar1 == 0) {
    puVar18 = PTR_PTR_1126be5d0;
    _objc_alloc();
    func_0x00010c020680();
  }
  else {
    _objc_retain(uVar7);
    uVar9 = uVar7;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    while (uVar9 != 0) {
      uVar19 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(uVar7);
        }
        puVar18 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        uVar20 = *(ulong *)(uVar19 * 8);
        _objc_retain(uVar20);
        _objc_opt_class(puVar18);
        uVar10 = uVar20;
        _objc_opt_isKindOfClass(uVar20,puVar18);
        uVar2 = uVar20;
        if ((uVar10 & 1) == 0) {
          uVar2 = 0;
        }
        _objc_retain(uVar2);
        _objc_release(uVar20);
        if (uVar2 != 0) {
          uVar11 = uVar20;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
          _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
          uVar12 = uVar11;
          _objc_opt_isKindOfClass(uVar11,puVar18);
          uVar10 = uVar11;
          if ((uVar12 & 1) == 0) {
            uVar10 = 0;
          }
          _objc_retain(uVar10);
          _objc_release(uVar11);
          if (uVar10 != 0) {
            _objc_retain(uVar11);
            uVar12 = uVar11;
            func_0x00010bf52a60();
            lVar5 = lRam0000000000000000;
            if (uVar12 == 0) {
              puVar18 = (undefined *)0x0;
            }
            else {
              puVar18 = (undefined *)0x0;
              do {
                uVar17 = 0;
                do {
                  if (lRam0000000000000000 != lVar5) {
                    _objc_enumerationMutation(uVar11);
                  }
                  puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
                  uVar21 = *(ulong *)(uVar17 * 8);
                  _objc_retain(uVar21);
                  _objc_opt_class(puVar13);
                  uVar14 = uVar21;
                  _objc_opt_isKindOfClass(uVar21,puVar13);
                  uVar3 = uVar21;
                  if ((uVar14 & 1) == 0) {
                    uVar3 = 0;
                  }
                  _objc_retain(uVar3);
                  _objc_release(uVar21);
                  if ((uVar3 != 0) &&
                     (lVar15 = param_3, (**(code **)(param_3 + 0x10))(param_3,uVar21),
                     (int)lVar15 != 0)) {
                    if (puVar18 == (undefined *)0x0) {
                      puVar18 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
                      _objc_opt_new();
                    }
                    func_0x00010befa120(puVar18);
                  }
                  _objc_release(uVar3);
                  uVar17 = uVar17 + 1;
                } while (uVar12 != uVar17);
                uVar12 = uVar11;
                func_0x00010bf52a60();
              } while (uVar12 != 0);
            }
            _objc_release(uVar11);
            puVar13 = puVar18;
            func_0x00010bf529e0();
            if (puVar13 != (undefined *)0x0) {
              puVar13 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
              _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
              if (param_4 != 0) {
                func_0x00010c0e00e0(uVar20);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puVar13);
                _objc_release(uVar20);
              }
              func_0x00010c1d0640(puVar13);
              func_0x00010befa120(puVar8);
              _objc_release(puVar13);
            }
            _objc_release(puVar18);
          }
          _objc_release(uVar10);
        }
        _objc_release(uVar2);
        uVar19 = uVar19 + 1;
      } while (uVar19 != uVar9);
      uVar9 = uVar7;
      func_0x00010bf52a60();
    }
    _objc_release(uVar7);
    puVar13 = puVar8;
    func_0x00010bf529e0();
    puVar18 = PTR_PTR_1126be5d0;
    _objc_alloc();
    if (puVar13 == (undefined *)0x0) {
      func_0x00010c020680();
    }
    else {
      puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c020680();
      _objc_release(puVar13);
    }
  }
  _objc_release(puVar8);
  _objc_release(uVar1);
  _objc_release(uVar6);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar18);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 1057cd7e0; end: 1057cd80f; -[SCContextCardsJSONViewModel .cxx_destruct] */

void FUN_1057cd7e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057cd810; end: 1057cdaa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057cd810(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126be5d8;
    _objc_alloc();
    lVar2 = param_1 + _DAT_112729bcc;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + _DAT_112729bd8;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010bf1a840();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1 + _DAT_112729bd4;
    _objc_loadWeakRetained(lVar6);
    lVar7 = lVar6;
    func_0x00010bf534e0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1 + _DAT_112729bdc;
    _objc_loadWeakRetained(lVar8);
    lVar9 = lVar8;
    func_0x00010bf13100();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffe2c0(puVar1,param_2,lVar3,lVar5,lVar7,lVar9);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar10 = PTR_PTR_1126be5e0;
    _objc_alloc(PTR_PTR_1126be5e0);
    lVar2 = param_1 + _DAT_112729be0;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010bfe4c00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1 + _DAT_112729be0;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010bfe4d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1 + _DAT_112729bcc;
    _objc_loadWeakRetained(lVar6);
    lVar7 = lVar6;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1 + _DAT_112729bd0;
    _objc_loadWeakRetained(lVar8);
    lVar9 = lVar8;
    func_0x00010c0e8180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01ac40(puVar10,param_2,lVar3,lVar5,lVar7,lVar9,puVar1);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar12 = PTR_PTR_1126be5e8;
    _objc_alloc(PTR_PTR_1126be5e8);
    puVar11 = PTR__OBJC_CLASS___NSCache_1126b3388;
    _objc_opt_new(PTR__OBJC_CLASS___NSCache_1126b3388);
    func_0x00010c008660(puVar12,param_2,puVar10,puVar11);
    _objc_release(puVar10);
    _objc_release(puVar11);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 1057cdaa4; end: 1057cdb17; -[SCContextCardsServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057cdaa4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112729be0);
  _objc_destroyWeak(param_1 + _DAT_112729bdc);
  _objc_destroyWeak(param_1 + _DAT_112729bd8);
  _objc_destroyWeak(param_1 + _DAT_112729bd4);
  _objc_destroyWeak(param_1 + _DAT_112729bd0);
  _objc_destroyWeak(param_1 + _DAT_112729bcc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112729bc8);
  return;
}



/* Entry: 1057cdb18; end: 1057cdb8b; -[SCContextOperaUCCExperiments initWithContextUIConfigProvider:] */

undefined1 * FUN_1057cdb18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea4f8;
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



/* Entry: 1057cdb8c; end: 1057cdbb7; -[SCContextOperaUCCExperiments areTopLevelCardsEnabledForLaunchSource:viewLocation:] */

undefined8 FUN_1057cdb8c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if ((param_3 - 3U < 0x20) && ((0xa000003fU >> (ulong)((uint)(param_3 - 3U) & 0x1f) & 1) != 0)) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf09bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_areTopLevelCardsEnabledForViewLo_1125a0090,param_4);
  return param_1;
}



/* Entry: 1057cdbb8; end: 1057cdbe7; -[SCContextOperaUCCExperiments areTopLevelCardsEnabledForViewLocation:] */

undefined8 FUN_1057cdbb8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if ((param_3 < 0x31) && ((1L << (param_3 & 0x3f) & 0x1390400010020U) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bf09b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_areTopLevelCardsEnabledForDiscov_1125a0080)
    ;
    return param_1;
  }
  return 0;
}



/* Entry: 1057cdbe8; end: 1057cdbff; -[SCContextOperaUCCExperiments areTopLevelCardsEnabledForDiscover] */

void FUN_1057cdbe8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e036d8,0,0);
  return;
}



/* Entry: 1057cdc00; end: 1057cdc17; -[SCContextOperaUCCExperiments shouldSwipeUpToShareInMemories] */

void FUN_1057cdc00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e036f8,0,0);
  return;
}



/* Entry: 1057cdc18; end: 1057cdc23; -[SCContextOperaUCCExperiments .cxx_destruct] */

void FUN_1057cdc18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057cdc24; end: 1057cdc63;  */

void FUN_1057cdc24(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bde8400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1057cdc64; end: 1057cdcdb; -[SCContextOperaUCCExperimentsServiceProvider _contextOperaUCCExperiments] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057cdc64(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_112729bec;
    _objc_loadWeakRetained(param_1);
  }
  lVar1 = param_1;
  func_0x00010bf398e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126be600;
  _objc_alloc(PTR_PTR_1126be600);
  func_0x00010c004780();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


