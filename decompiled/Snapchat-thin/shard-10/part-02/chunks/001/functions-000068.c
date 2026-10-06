/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107af2c64; end: 107af2c87; -[SCCommerceProductCatalogSource copyWithZone:] */

undefined8 FUN_107af2c64(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107af2c88; end: 107af2ccb; -[SCCommerceProductCatalogSource internalInit] */

void FUN_107af2c88(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f9ca0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107af2ccc; end: 107af2f73; -[SCCommerceProductCatalogSource matchLens:chat:externalDeeplink:fashionScan:screenshop:profiles:contextCard:favorites:dpaAds:shoppingBag:shoppingDeeplink:shoppableSticker:settingsSnapStoreCell:settingsSpectaclesShop:] */

void FUN_107af2ccc(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,long param_10,long param_11,
                  long param_12,long param_13,long param_14,long param_15,long param_16)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
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
  switch(*(undefined8 *)(param_1 + 8)) {
  case 0:
    if (param_3 == 0) goto LAB_107af2e94;
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    pcVar3 = *(code **)(param_3 + 0x10);
    lVar1 = param_3;
    goto code_r0x000107af2e48;
  case 1:
    lVar1 = param_4;
    goto joined_r0x000107af2e84;
  case 2:
    if (param_5 == 0) goto LAB_107af2e94;
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    pcVar3 = *(code **)(param_5 + 0x10);
    lVar1 = param_5;
    goto code_r0x000107af2e48;
  case 3:
    if (param_6 == 0) goto LAB_107af2e94;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    pcVar3 = *(code **)(param_6 + 0x10);
    lVar1 = param_6;
code_r0x000107af2e48:
    (*pcVar3)(lVar1,uVar2);
    goto LAB_107af2e94;
  case 4:
    if (param_7 == 0) goto LAB_107af2e94;
    pcVar3 = *(code **)(param_7 + 0x10);
    lVar1 = param_7;
    break;
  case 5:
    if (param_8 == 0) goto LAB_107af2e94;
    pcVar3 = *(code **)(param_8 + 0x10);
    lVar1 = param_8;
    break;
  case 6:
    if (param_9 != 0) {
      (**(code **)(param_9 + 0x10))
                (param_9,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
    }
    goto LAB_107af2e94;
  case 7:
    if (param_10 == 0) goto LAB_107af2e94;
    pcVar3 = *(code **)(param_10 + 0x10);
    lVar1 = param_10;
    break;
  case 8:
    if (param_11 != 0) {
      (**(code **)(param_11 + 0x10))
                (param_11,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                 *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                 *(undefined8 *)(param_1 + 0x58));
    }
    goto LAB_107af2e94;
  case 9:
    if (param_12 == 0) goto LAB_107af2e94;
    pcVar3 = *(code **)(param_12 + 0x10);
    lVar1 = param_12;
    break;
  case 10:
    if (param_13 != 0) {
      (**(code **)(param_13 + 0x10))
                (param_13,*(undefined8 *)(param_1 + 0x60),*(undefined1 *)(param_1 + 0x68));
    }
    goto LAB_107af2e94;
  case 0xb:
    if (param_14 == 0) goto LAB_107af2e94;
    pcVar3 = *(code **)(param_14 + 0x10);
    lVar1 = param_14;
    break;
  case 0xc:
    lVar1 = param_15;
    goto joined_r0x000107af2e84;
  case 0xd:
    lVar1 = param_16;
joined_r0x000107af2e84:
    if (lVar1 == 0) goto LAB_107af2e94;
    pcVar3 = *(code **)(lVar1 + 0x10);
    break;
  default:
    goto LAB_107af2e94;
  }
  (*pcVar3)(lVar1);
LAB_107af2e94:
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107af2f74; end: 107af3003; -[SCCommerceProductCatalogSource .cxx_destruct] */

void FUN_107af2f74(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107af3004; end: 107af316b; -[SCCommerceProductCatalogSessionConfiguration initWithSourceId:sourceSessionId:sourceOrigin:creatorId:isSponsored:productId:storeId:snapId:] */

undefined1 *
FUN_107af3004(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f9ca8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107af316c; end: 107af318f; -[SCCommerceProductCatalogSessionConfiguration copyWithZone:] */

undefined8 FUN_107af316c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107af3190; end: 107af3197; -[SCCommerceProductCatalogSessionConfiguration sourceId] */

undefined8 FUN_107af3190(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107af3198; end: 107af319f; -[SCCommerceProductCatalogSessionConfiguration sourceSessionId] */

undefined8 FUN_107af3198(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107af31a0; end: 107af31a7; -[SCCommerceProductCatalogSessionConfiguration sourceOrigin] */

undefined8 FUN_107af31a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107af31a8; end: 107af31af; -[SCCommerceProductCatalogSessionConfiguration creatorId] */

undefined8 FUN_107af31a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107af31b0; end: 107af31b7; -[SCCommerceProductCatalogSessionConfiguration isSponsored] */

undefined1 FUN_107af31b0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107af31b8; end: 107af31bf; -[SCCommerceProductCatalogSessionConfiguration productId] */

undefined8 FUN_107af31b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107af31c0; end: 107af31c7; -[SCCommerceProductCatalogSessionConfiguration storeId] */

undefined8 FUN_107af31c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107af31c8; end: 107af31cf; -[SCCommerceProductCatalogSessionConfiguration snapId] */

undefined8 FUN_107af31c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107af31d0; end: 107af322f; -[SCCommerceProductCatalogSessionConfiguration .cxx_destruct] */

void FUN_107af31d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107af3230; end: 107af32bb; -[SCCommerceGrapheneLogger logPageImpressionWithSourcePage:page:commerceOrigin:] */

void FUN_107af3230(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfcde60(param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_107af4944();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107af32bc; end: 107af3347; -[SCCommerceGrapheneLogger logTouchWithSourcePage:touchName:commerceOrigin:] */

void FUN_107af32bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfcde60(param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_107af4c04();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107af3348; end: 107af3433; -[SCCommerceGrapheneLogger logProductCellTapWithRow:column:commerceOrigin:] */

void FUN_107af3348(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 in_x4;
  
  _objc_retain(in_x4);
  func_0x00010bfcde60(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  FUN_107af4ec4(param_1,puVar2,puVar4,in_x4,1);
  _objc_release(in_x4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107af3434; end: 107af34d7; -[SCCommerceGrapheneLogger logProductsViewedWithMaxRow:catalogType:] */

void FUN_107af3434(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  func_0x00010bfcde60(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  FUN_107af5184(param_1,param_4,puVar2,1);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107af34d8; end: 107af352b; -[SCCommerceGrapheneLogger logCommerceError:] */

void FUN_107af34d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bfcde60(param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_107af4138();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107af352c; end: 107af355f; -[SCCommerceGrapheneLogger logCatalogPDPWebTapped] */

void FUN_107af352c(undefined8 param_1)

{
  func_0x00010bfcde60();
  _objc_retainAutoreleasedReturnValue();
  FUN_107af3f4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107af3560; end: 107af35bb; -[SCCommerceGrapheneLogger logAbortedCheckout:] */

void FUN_107af3560(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bfcde60();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107af3efc(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_107af3fc4(param_1,param_3,1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107af35bc; end: 107af3627; -[SCCommerceGrapheneLogger logShowcaseTotalSessionTime:catalogType:] */

void FUN_107af35bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bfcde60(param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_107af5848();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107af3628; end: 107af3693; -[SCCommerceGrapheneLogger logShowcaseTotalWebviewTime:catalogType:] */

void FUN_107af3628(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bfcde60(param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_107af59bc();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107af3694; end: 107af36c7; -[SCCommerceGrapheneLogger logMyShoppingBagSeenOnProfile] */

void FUN_107af3694(undefined8 param_1)

{
  func_0x00010bfcde60();
  _objc_retainAutoreleasedReturnValue();
  FUN_107af4758();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107af36c8; end: 107af374b; -[SCCommerceGrapheneLogger logMyShoppingBagLaunchedWithNumCarts:] */

void FUN_107af36c8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010bfcde60();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  FUN_107af45e4(param_1,puVar2,1);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107af374c; end: 107af37cf; -[SCCommerceGrapheneLogger logReviewOrderLaunchedWithNumItems:] */

void FUN_107af374c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010bfcde60();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  FUN_107af55e4(param_1,puVar2,1);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107af37d0; end: 107af3837; -[SCCommerceGrapheneLogger logMyShoppingBagCheckoutLaunchedWithCompleteOrder:] */

void FUN_107af37d0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110eac798;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e66a58;
  }
  _objc_retain(ppuVar1);
  func_0x00010bfcde60(param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_107af47d0();
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107af3838; end: 107af388b; -[SCCommerceGrapheneLogger logMyShoppingBagSessionTime:] */

void FUN_107af3838(double param_1,long param_2)

{
  func_0x00010bfcde60();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    FUN_107af456c(param_2,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107af388c; end: 107af38bf; -[SCCommerceGrapheneLogger logReviewOrderV2Launched] */

void FUN_107af388c(undefined8 param_1)

{
  func_0x00010bfcde60();
  _objc_retainAutoreleasedReturnValue();
  FUN_107af57d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107af38c0; end: 107af38f3; -[SCCommerceGrapheneLogger logReviewOrderV2GoToCheckout] */

void FUN_107af38c0(undefined8 param_1)

{
  func_0x00010bfcde60();
  _objc_retainAutoreleasedReturnValue();
  FUN_107af5758();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107af38f4; end: 107af38fb; -[SCCommerceGrapheneLogger graphene] */

undefined8 FUN_107af38f4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107af38fc; end: 107af3907; -[SCCommerceGrapheneLogger .cxx_destruct] */

void FUN_107af38fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107af3908; end: 107af394f; -[SCCommerceGrapheneNetworkLogger initWithGrapheneRegistry:] */

undefined8 FUN_107af3908(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d66d8;
  _objc_alloc_init(PTR_PTR_1126d66d8);
  func_0x00010bffffa0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 107af3950; end: 107af39c3; -[SCCommerceGrapheneNetworkLogger initWithCommerceGraphene:] */

undefined1 * FUN_107af3950(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f9cb8;
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



/* Entry: 107af39c4; end: 107af3c07; -[SCCommerceGrapheneNetworkLogger logGrapheneNetworkRequestWithAction:endpoint:context:latency:statusCode:requestSize:responseSize:protoErrorCode:] */

void FUN_107af39c4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_10);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107af3eb0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107af3ed8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  uVar6 = *(undefined8 *)(param_2 + 8);
  func_0x000107af3efc(param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_10 == 0) {
    if (param_7 - 200U < 100) {
      func_0x00010c08fa60(0);
    }
    func_0x00010c0df760(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    FUN_107af6110(uVar6,param_6,puVar1,puVar3,puVar5,1);
  }
  else {
    if (param_7 - 200U < 100) {
      func_0x00010c08fa60(param_10);
    }
    func_0x00010c0df760(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    FUN_107af5d60(uVar6,param_6,param_10,puVar1,puVar3,puVar5,1);
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_6);
  func_0x00010c0a0240(param_1,param_2);
  func_0x00010c0a0260(param_2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_10);
  return;
}



/* Entry: 107af3c08; end: 107af3d67; -[SCCommerceGrapheneNetworkLogger logGRPCRequestWithService:additionalContext:countryCode:latency:requestSize:responseSize:errorCode:] */

void FUN_107af3c08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_9);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x000107af3f24(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_107af42ac(uVar2,uVar1,param_9,param_4,1);
  _objc_release(param_9);
  _objc_release(param_4);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = param_3;
  func_0x000107af3f24(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_107af53b4(uVar2,uVar1,param_5,param_6);
  _objc_release(param_5);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = param_3;
  func_0x000107af3f24(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_107af6444(uVar2,uVar1,&PTR____CFConstantStringClassReference_110e78ab8,param_7);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107af3f24(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_107af6444(uVar1,param_3,&PTR____CFConstantStringClassReference_110eac7b8,param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107af3d68; end: 107af3ddb; -[SCCommerceGrapheneNetworkLogger logAPIRequestWithLatency:requestType:context:] */

void FUN_107af3d68(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  _objc_retain(param_4);
  func_0x000107af3efc(param_5);
  _objc_retainAutoreleasedReturnValue();
  FUN_107af5b30(uVar1,param_5,param_4,(long)param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107af3ddc; end: 107af3ea3; -[SCCommerceGrapheneNetworkLogger logAPIRequestWithRequestPayloadSize:responsePayloadSize:requestType:context:] */

void FUN_107af3ddc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_5);
  uVar1 = param_6;
  func_0x000107af3efc(param_6);
  _objc_retainAutoreleasedReturnValue();
  FUN_107af6674(uVar2,uVar1,&PTR____CFConstantStringClassReference_110e78ab8,param_5,param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107af3efc(param_6);
  _objc_retainAutoreleasedReturnValue();
  FUN_107af6674(uVar1,param_6,&PTR____CFConstantStringClassReference_110eac7b8,param_5,param_4);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 107af3ea4; end: 107af3f4b; -[SCCommerceGrapheneNetworkLogger .cxx_destruct] */

void FUN_107af3ea4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107af3f4c; end: 107af3fc3;  */

void FUN_107af3f4c(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1109f9e50,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 107af3fc4; end: 107af4137;  */

/* WARNING: Removing unreachable block (ram,0x000107af4534) */

void FUN_107af3fc4(long param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 *unaff_x24;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined8 auStack_170 [2];
  char cStack_159;
  long lStack_158;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f443962;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_1109f9ea0;
    (**(code **)(*plVar7 + 0x18))(plVar7);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar3 = (undefined *)puVar5;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = (undefined *)puVar5;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar5 = &uStack_100;
  pcStack_88 = FUN_107af4138;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puVar6 = puVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f443962;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar4 = &UNK_1109f9ef0;
    (**(code **)(*plVar7 + 0x18))(plVar7);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar6 = (undefined *)puVar5;
    param_4 = puVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar6 = (undefined *)puVar5;
      param_4 = puVar3;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  pcStack_108 = FUN_107af42ac;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar4;
  ppuStack_110 = &puStack_90;
  _objc_retain(puVar4);
  _objc_retain(puVar6);
  _objc_retain(param_4);
  if (puVar3 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar3 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f443962;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_1a0,puVar1);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar1 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_188,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar1 = &UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_170,puVar1);
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    func_0x00010007e1e8(&uStack_1c0,auStack_1a0,&lStack_158,3);
    puVar1 = &UNK_1109f9f40;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1109f9f40,&uStack_1c0,param_5);
    puStack_1a8 = (undefined1 *)&uStack_1c0;
    func_0x00010007e5dc(&puStack_1a8);
    lVar8 = 0;
    do {
      if ((&cStack_159)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_170 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
      unaff_x24 = &uStack_1c0;
    } while (lVar8 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(puVar6);
  puVar3 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_158) {
    ___stack_chk_fail();
    _objc_release(param_4);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_1a0);
    _objc_release(param_4);
    _objc_release(puVar6);
    _objc_release(puVar4);
    __Unwind_Resume();
    puStack_1e8 = (undefined1 *)&uStack_200;
    pcStack_1c8 = FUN_107af456c;
    if (puVar3 != (undefined *)0x0) {
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      puStack_1e0 = puVar6;
      puStack_1d8 = puVar4;
      pppuStack_1d0 = &ppuStack_110;
      (**(code **)(**(long **)(puVar3 + 8) + 0x18))
                (*(long **)(puVar3 + 8),&UNK_1109f9f90,&uStack_200,puVar1);
      func_0x00010007e5dc(&puStack_1e8);
    }
    return;
  }
  return;
}



/* Entry: 107af4138; end: 107af42ab;  */

/* WARNING: Removing unreachable block (ram,0x000107af4534) */

void FUN_107af4138(long param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 *unaff_x24;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined8 auStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar6 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f443962;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_1109f9ef0;
    (**(code **)(*plVar6 + 0x18))(plVar6);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar4 = (undefined *)puVar5;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined *)puVar5;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_2);
    _objc_release(param_2);
    __Unwind_Resume();
    pcStack_88 = FUN_107af42ac;
    lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = puVar1;
    puStack_90 = &stack0xfffffffffffffff0;
    _objc_retain(puVar1);
    _objc_retain(puVar4);
    _objc_retain(param_4);
    if (puVar2 != (undefined *)0x0) {
      plVar6 = *(long **)(puVar2 + 8);
      _objc_retain(puVar1);
      if (puVar1 == (undefined *)0x0) {
        puVar2 = &UNK_10f443962;
      }
      else {
        puVar2 = puVar1;
        _objc_retainAutorelease(puVar1);
        func_0x00010bdc3520();
      }
      _objc_release(puVar1);
      func_0x00010002b838(auStack_120,puVar2);
      _objc_retain(puVar4);
      if (puVar4 == (undefined *)0x0) {
        puVar2 = &UNK_10f443962;
      }
      else {
        _objc_retainAutorelease(puVar4);
        puVar2 = puVar4;
        func_0x00010bdc3520(puVar4);
      }
      _objc_release(puVar4);
      func_0x00010002b838(auStack_108,puVar2);
      _objc_retain(param_4);
      if (param_4 == (undefined *)0x0) {
        puVar2 = &UNK_10f443962;
      }
      else {
        _objc_retainAutorelease(param_4);
        puVar2 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x00010002b838(auStack_f0,puVar2);
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_130 = 0;
      func_0x00010007e1e8(&uStack_140,auStack_120,&lStack_d8,3);
      puVar3 = &UNK_1109f9f40;
      (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_1109f9f40,&uStack_140,param_5);
      puStack_128 = (undefined1 *)&uStack_140;
      func_0x00010007e5dc(&puStack_128);
      lVar7 = 0;
      do {
        if ((&cStack_d9)[lVar7] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_f0 + lVar7));
        }
        lVar7 = lVar7 + -0x18;
        unaff_x24 = &uStack_140;
      } while (lVar7 != -0x48);
    }
    _objc_release(param_4);
    _objc_release(puVar4);
    puVar2 = puVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
      ___stack_chk_fail();
      _objc_release(param_4);
      do {
        unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
      } while (unaff_x24 != (undefined8 *)auStack_120);
      _objc_release(param_4);
      _objc_release(puVar4);
      _objc_release(puVar1);
      __Unwind_Resume();
      puStack_168 = (undefined1 *)&uStack_180;
      pcStack_148 = FUN_107af456c;
      if (puVar2 != (undefined *)0x0) {
        uStack_180 = 0;
        uStack_178 = 0;
        uStack_170 = 0;
        puStack_160 = puVar4;
        puStack_158 = puVar1;
        ppuStack_150 = &puStack_90;
        (**(code **)(**(long **)(puVar2 + 8) + 0x18))
                  (*(long **)(puVar2 + 8),&UNK_1109f9f90,&uStack_180,puVar3);
        func_0x00010007e5dc(&puStack_168);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 107af42ac; end: 107af456b;  */

/* WARNING: Removing unreachable block (ram,0x000107af4534) */

void FUN_107af42ac(long param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *unaff_x24;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f443962;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar1 = &UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar1 = &UNK_1109f9f40;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1109f9f40,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar3 = 0;
    do {
      if ((&cStack_59)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar3 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_4);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_a0);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
    __Unwind_Resume();
    puStack_e8 = (undefined1 *)&uStack_100;
    pcStack_c8 = FUN_107af456c;
    if (puVar2 != (undefined *)0x0) {
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      puStack_e0 = param_3;
      puStack_d8 = param_2;
      puStack_d0 = &stack0xfffffffffffffff0;
      (**(code **)(**(long **)(puVar2 + 8) + 0x18))
                (*(long **)(puVar2 + 8),&UNK_1109f9f90,&uStack_100,puVar1);
      func_0x00010007e5dc(&puStack_e8);
    }
    return;
  }
  return;
}



/* Entry: 107af456c; end: 107af45e3;  */

void FUN_107af456c(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1109f9f90,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 107af45e4; end: 107af4757;  */

void FUN_107af45e4(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f443962;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_1109f9fe0;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1109f9fe0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_107af4758;
  if (puVar3 != (undefined *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = puVar2;
    puStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_1109fa030,&uStack_c0,puVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 107af4758; end: 107af47cf;  */

void FUN_107af4758(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1109fa030,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 107af47d0; end: 107af4943;  */

/* WARNING: Removing unreachable block (ram,0x000107af4e8c) */
/* WARNING: Removing unreachable block (ram,0x000107af4bcc) */
/* WARNING: Removing unreachable block (ram,0x000107af514c) */

void FUN_107af47d0(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  undefined8 *unaff_x24;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 *puStack_4a8;
  undefined *puStack_4a0;
  undefined *puStack_498;
  undefined8 ***pppuStack_490;
  code *pcStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined1 *puStack_468;
  undefined8 auStack_460 [2];
  char cStack_449;
  long lStack_448;
  undefined8 *puStack_440;
  undefined8 *puStack_438;
  undefined8 *puStack_430;
  undefined *puStack_428;
  undefined8 *puStack_420;
  undefined *puStack_418;
  undefined8 ***pppuStack_410;
  code *pcStack_408;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 auStack_3d8 [2];
  char cStack_3c1;
  undefined8 auStack_3c0 [2];
  char cStack_3a9;
  long lStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  undefined8 *puStack_390;
  undefined *puStack_388;
  undefined8 *puStack_380;
  undefined *puStack_378;
  undefined8 ***pppuStack_370;
  code *pcStack_368;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 *puStack_340;
  undefined8 auStack_338 [2];
  char cStack_321;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined *puStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [3];
  undefined1 auStack_288 [24];
  undefined8 auStack_270 [2];
  char cStack_259;
  long lStack_258;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [3];
  undefined1 auStack_1c8 [24];
  undefined8 auStack_1b0 [2];
  char cStack_199;
  long lStack_198;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined8 auStack_120 [3];
  undefined1 auStack_108 [24];
  undefined8 auStack_f0 [2];
  char cStack_d9;
  long lStack_d8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f443962;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_1109fa080;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar4 = puVar3;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = puVar3;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar8 = &uStack_140;
  pcStack_88 = FUN_107af4944;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar3 = puVar4;
  puVar12 = param_4;
  puVar10 = param_5;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar4);
  _objc_retain(param_4);
  if (puVar2 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f443962;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_120,puVar2);
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar3 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_108,puVar3);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar3 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_f0,puVar3);
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    func_0x00010007e1e8(&uStack_140,auStack_120,&lStack_d8,3);
    puVar7 = &UNK_1109fa0d0;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_128 = (undefined1 *)&uStack_140;
    func_0x00010007e5dc(&puStack_128);
    lVar14 = 0;
    puVar3 = puVar8;
    puVar12 = param_5;
    do {
      if ((&cStack_d9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_f0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = &uStack_140;
    } while (lVar14 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(puVar4);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != auStack_120);
  _objc_release(param_4);
  _objc_release(puVar4);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar9 = &uStack_200;
  pcStack_148 = FUN_107af4c04;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar7;
  puVar4 = puVar3;
  puVar8 = puVar12;
  puVar11 = puVar10;
  ppuStack_150 = &puStack_90;
  _objc_retain(puVar7);
  _objc_retain(puVar3);
  _objc_retain(puVar12);
  if (puVar2 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar2 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f443962;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_1e0,puVar1);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar4 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_1c8,puVar4);
    _objc_retain(puVar12);
    if (puVar12 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(puVar12);
      puVar4 = puVar12;
      func_0x00010bdc3520();
    }
    _objc_release(puVar12);
    func_0x00010002b838(auStack_1b0,puVar4);
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&uStack_200,auStack_1e0,&lStack_198,3);
    puVar1 = &UNK_1109fa120;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_1e8 = (undefined1 *)&uStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    lVar14 = 0;
    puVar4 = puVar9;
    puVar8 = puVar10;
    do {
      if ((&cStack_199)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1b0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = &uStack_200;
    } while (lVar14 != -0x48);
  }
  _objc_release(puVar12);
  _objc_release(puVar3);
  puVar2 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar12);
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != auStack_1e0);
  _objc_release(puVar12);
  _objc_release(puVar3);
  _objc_release(puVar7);
  __Unwind_Resume();
  puVar10 = &uStack_2c0;
  pcStack_208 = FUN_107af4ec4;
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar3 = puVar4;
  puVar12 = puVar8;
  pppuStack_210 = &ppuStack_150;
  _objc_retain(puVar1);
  _objc_retain(puVar4);
  _objc_retain(puVar8);
  if (puVar2 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f443962;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_2a0,puVar2);
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar3 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_288,puVar3);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar3 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_270,puVar3);
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    func_0x00010007e1e8(&uStack_2c0,auStack_2a0,&lStack_258,3);
    puVar7 = &UNK_1109fa170;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109fa170,&uStack_2c0,puVar11);
    puStack_2a8 = (undefined1 *)&uStack_2c0;
    func_0x00010007e5dc(&puStack_2a8);
    lVar14 = 0;
    puVar3 = puVar10;
    puVar12 = puVar11;
    do {
      if ((&cStack_259)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_270 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = &uStack_2c0;
    } while (lVar14 != -0x48);
  }
  _objc_release(puVar8);
  _objc_release(puVar4);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  puVar10 = auStack_2a0;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puVar10);
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_release(puVar1);
  puVar5 = puVar2;
  __Unwind_Resume();
  pcStack_2c8 = FUN_107af5184;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar7;
  puVar11 = puVar3;
  puVar9 = puVar12;
  puStack_300 = unaff_x24;
  puStack_2f8 = puVar10;
  puStack_2f0 = puVar2;
  puStack_2e8 = puVar8;
  puStack_2e0 = puVar4;
  puStack_2d8 = puVar1;
  pppuStack_2d0 = &pppuStack_210;
  _objc_retain(puVar7);
  _objc_retain(puVar3);
  puVar4 = (undefined8 *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar5 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f443962;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x24 = auStack_338;
    func_0x00010002b838(auStack_338,puVar1);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar4 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_320,puVar4);
    uStack_358 = 0;
    uStack_350 = 0;
    uStack_348 = 0;
    func_0x00010007e1e8(&uStack_358,auStack_338,&lStack_308,2);
    puVar6 = &UNK_1109fa1c0;
    puVar10 = &uStack_358;
    puVar11 = &uStack_358;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109fa1c0,puVar11,puVar12);
    puStack_340 = puVar10;
    func_0x00010007e5dc(&puStack_340);
    lVar14 = 0;
    puVar4 = auStack_338;
    puVar9 = puVar12;
    do {
      if ((&cStack_309)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_320 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar3);
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_308) {
    ___stack_chk_fail();
    _objc_release(puVar3);
    if (cStack_321 < '\0') {
      __ZdlPv(auStack_338[0]);
    }
    _objc_release(puVar3);
    _objc_release(puVar7);
    puVar5 = puVar1;
    __Unwind_Resume();
    pcStack_368 = FUN_107af53b4;
    lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar2 = puVar6;
    puVar12 = puVar11;
    puStack_3a0 = unaff_x24;
    puStack_398 = puVar10;
    puStack_390 = puVar4;
    puStack_388 = puVar1;
    puStack_380 = puVar3;
    puStack_378 = puVar7;
    pppuStack_370 = &pppuStack_2d0;
    _objc_retain(puVar6);
    _objc_retain(puVar11);
    puVar4 = (undefined8 *)0x0;
    if (puVar5 != (undefined *)0x0) {
      plVar13 = *(long **)(puVar5 + 8);
      _objc_retain(puVar6);
      if (puVar6 == (undefined *)0x0) {
        puVar1 = &UNK_10f443962;
      }
      else {
        puVar1 = puVar6;
        _objc_retainAutorelease(puVar6);
        func_0x00010bdc3520();
      }
      _objc_release(puVar6);
      unaff_x24 = auStack_3d8;
      func_0x00010002b838(auStack_3d8,puVar1);
      _objc_retain(puVar11);
      if (puVar11 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)&UNK_10f443962;
      }
      else {
        _objc_retainAutorelease(puVar11);
        puVar4 = puVar11;
        func_0x00010bdc3520(puVar11);
      }
      _objc_release(puVar11);
      func_0x00010002b838(auStack_3c0,puVar4);
      uStack_3f8 = 0;
      uStack_3f0 = 0;
      uStack_3e8 = 0;
      func_0x00010007e1e8(&uStack_3f8,auStack_3d8,&lStack_3a8,2);
      puVar2 = &UNK_1109fa210;
      puVar10 = &uStack_3f8;
      puVar12 = &uStack_3f8;
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109fa210,puVar12,puVar9);
      puStack_3e0 = puVar10;
      func_0x00010007e5dc(&puStack_3e0);
      lVar14 = 0;
      puVar4 = auStack_3d8;
      do {
        if ((&cStack_3a9)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_3c0 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
    _objc_release(puVar11);
    puVar1 = puVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3a8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar11);
    if (cStack_3c1 < '\0') {
      __ZdlPv(auStack_3d8[0]);
    }
    _objc_release(puVar11);
    _objc_release(puVar6);
    puVar5 = puVar1;
    __Unwind_Resume();
    pcStack_408 = FUN_107af55e4;
    lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar7 = puVar2;
    puStack_440 = unaff_x24;
    puStack_438 = puVar10;
    puStack_430 = puVar4;
    puStack_428 = puVar1;
    puStack_420 = puVar11;
    puStack_418 = puVar6;
    pppuStack_410 = &pppuStack_370;
    _objc_retain(puVar2);
    if (puVar5 != (undefined *)0x0) {
      plVar13 = *(long **)(puVar5 + 8);
      _objc_retain(puVar2);
      if (puVar2 == (undefined *)0x0) {
        puVar1 = &UNK_10f443962;
      }
      else {
        puVar1 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      func_0x00010002b838(auStack_460,puVar1);
      uStack_480 = 0;
      uStack_478 = 0;
      uStack_470 = 0;
      func_0x00010007e1e8(&uStack_480,auStack_460,&lStack_448,1);
      puVar7 = &UNK_1109fa260;
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109fa260,&uStack_480,puVar12);
      puStack_468 = (undefined1 *)&uStack_480;
      func_0x00010007e5dc(&puStack_468);
      if (cStack_449 < '\0') {
        __ZdlPv(auStack_460[0]);
      }
    }
    puVar1 = puVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_448) {
      ___stack_chk_fail();
      _objc_release(puVar2);
      _objc_release(puVar2);
      puVar6 = puVar1;
      __Unwind_Resume();
      puStack_4a8 = (undefined1 *)&uStack_4c0;
      pcStack_488 = FUN_107af5758;
      if (puVar6 != (undefined *)0x0) {
        uStack_4c0 = 0;
        uStack_4b8 = 0;
        uStack_4b0 = 0;
        puStack_4a0 = puVar1;
        puStack_498 = puVar2;
        pppuStack_490 = &pppuStack_410;
        (**(code **)(**(long **)(puVar6 + 8) + 0x18))
                  (*(long **)(puVar6 + 8),&UNK_1109fa2b0,&uStack_4c0,puVar7);
        func_0x00010007e5dc(&puStack_4a8);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 107af4944; end: 107af4c03;  */

/* WARNING: Removing unreachable block (ram,0x000107af4e8c) */
/* WARNING: Removing unreachable block (ram,0x000107af4bcc) */
/* WARNING: Removing unreachable block (ram,0x000107af514c) */

void FUN_107af4944(long param_1,undefined *param_2,undefined8 *param_3,undefined *param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long *plVar15;
  undefined8 *unaff_x24;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 *puStack_428;
  undefined *puStack_420;
  undefined *puStack_418;
  undefined8 ***pppuStack_410;
  code *pcStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 *puStack_3e8;
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 *puStack_3b0;
  undefined *puStack_3a8;
  undefined8 *puStack_3a0;
  undefined *puStack_398;
  undefined8 ***pppuStack_390;
  code *pcStack_388;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 *puStack_360;
  undefined8 auStack_358 [2];
  char cStack_341;
  undefined8 auStack_340 [2];
  char cStack_329;
  long lStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 *puStack_310;
  undefined *puStack_308;
  undefined8 *puStack_300;
  undefined *puStack_2f8;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 auStack_2b8 [2];
  char cStack_2a1;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined8 *puStack_260;
  undefined *puStack_258;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined8 auStack_220 [3];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [3];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar4 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  puVar7 = param_4;
  puVar5 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f443962;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,puVar2);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar1 = &UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar1 = &UNK_1109fa0d0;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar14 = 0;
    puVar2 = puVar4;
    puVar7 = param_5;
    do {
      if ((&cStack_59)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar14 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != auStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar9 = &uStack_180;
  pcStack_c8 = FUN_107af4c04;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar1;
  puVar4 = puVar2;
  puVar12 = puVar7;
  puVar6 = puVar5;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  _objc_retain(puVar7);
  if (puVar3 != (undefined *)0x0) {
    plVar15 = *(long **)(puVar3 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f443962;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_160,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar4 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_148,puVar4);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar3 = &UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar3 = puVar7;
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_130,puVar3);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_118,3);
    puVar8 = &UNK_1109fa120;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar14 = 0;
    puVar4 = puVar9;
    puVar12 = puVar5;
    do {
      if ((&cStack_119)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = &uStack_180;
    } while (lVar14 != -0x48);
  }
  _objc_release(puVar7);
  _objc_release(puVar2);
  puVar5 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != auStack_160);
  _objc_release(puVar7);
  _objc_release(puVar2);
  _objc_release(puVar1);
  __Unwind_Resume();
  puVar9 = &uStack_240;
  pcStack_188 = FUN_107af4ec4;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar8;
  puVar2 = puVar4;
  puVar7 = puVar12;
  ppuStack_190 = &puStack_d0;
  _objc_retain(puVar8);
  _objc_retain(puVar4);
  _objc_retain(puVar12);
  if (puVar5 != (undefined *)0x0) {
    plVar15 = *(long **)(puVar5 + 8);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar1 = &UNK_10f443962;
    }
    else {
      puVar1 = puVar8;
      _objc_retainAutorelease(puVar8);
      func_0x00010bdc3520();
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_220,puVar1);
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar2 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_208,puVar2);
    _objc_retain(puVar12);
    if (puVar12 == (undefined *)0x0) {
      puVar1 = &UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(puVar12);
      puVar1 = puVar12;
      func_0x00010bdc3520(puVar12);
    }
    _objc_release(puVar12);
    func_0x00010002b838(auStack_1f0,puVar1);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x00010007e1e8(&uStack_240,auStack_220,&lStack_1d8,3);
    puVar1 = &UNK_1109fa170;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109fa170,&uStack_240,puVar6);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x00010007e5dc(&puStack_228);
    lVar14 = 0;
    puVar2 = puVar9;
    puVar7 = puVar6;
    do {
      if ((&cStack_1d9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = &uStack_240;
    } while (lVar14 != -0x48);
  }
  _objc_release(puVar12);
  _objc_release(puVar4);
  puVar5 = puVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar12);
  puVar9 = auStack_220;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puVar9);
  _objc_release(puVar12);
  _objc_release(puVar4);
  _objc_release(puVar8);
  puVar6 = puVar5;
  __Unwind_Resume();
  pcStack_248 = FUN_107af5184;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar10 = puVar2;
  puVar13 = puVar7;
  puStack_280 = unaff_x24;
  puStack_278 = puVar9;
  puStack_270 = puVar5;
  puStack_268 = puVar12;
  puStack_260 = puVar4;
  puStack_258 = puVar8;
  pppuStack_250 = &ppuStack_190;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  puVar4 = (undefined8 *)0x0;
  if (puVar6 != (undefined *)0x0) {
    plVar15 = *(long **)(puVar6 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar5 = &UNK_10f443962;
    }
    else {
      puVar5 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_2b8;
    func_0x00010002b838(auStack_2b8,puVar5);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar4 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_2a0,puVar4);
    uStack_2d8 = 0;
    uStack_2d0 = 0;
    uStack_2c8 = 0;
    func_0x00010007e1e8(&uStack_2d8,auStack_2b8,&lStack_288,2);
    puVar3 = &UNK_1109fa1c0;
    puVar9 = &uStack_2d8;
    puVar10 = &uStack_2d8;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109fa1c0,puVar10,puVar7);
    puStack_2c0 = puVar9;
    func_0x00010007e5dc(&puStack_2c0);
    lVar14 = 0;
    puVar4 = auStack_2b8;
    puVar13 = puVar7;
    do {
      if ((&cStack_289)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2a0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar2);
  puVar7 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_2a1 < '\0') {
    __ZdlPv(auStack_2b8[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar8 = puVar7;
  __Unwind_Resume();
  pcStack_2e8 = FUN_107af53b4;
  lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar3;
  puVar11 = puVar10;
  puStack_320 = unaff_x24;
  puStack_318 = puVar9;
  puStack_310 = puVar4;
  puStack_308 = puVar7;
  puStack_300 = puVar2;
  puStack_2f8 = puVar1;
  pppuStack_2f0 = &pppuStack_250;
  _objc_retain(puVar3);
  _objc_retain(puVar10);
  puVar2 = (undefined8 *)0x0;
  if (puVar8 != (undefined *)0x0) {
    plVar15 = *(long **)(puVar8 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f443962;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x24 = auStack_358;
    func_0x00010002b838(auStack_358,puVar1);
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(puVar10);
      puVar2 = puVar10;
      func_0x00010bdc3520(puVar10);
    }
    _objc_release(puVar10);
    func_0x00010002b838(auStack_340,puVar2);
    uStack_378 = 0;
    uStack_370 = 0;
    uStack_368 = 0;
    func_0x00010007e1e8(&uStack_378,auStack_358,&lStack_328,2);
    puVar5 = &UNK_1109fa210;
    puVar9 = &uStack_378;
    puVar11 = &uStack_378;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109fa210,puVar11,puVar13);
    puStack_360 = puVar9;
    func_0x00010007e5dc(&puStack_360);
    lVar14 = 0;
    puVar2 = auStack_358;
    do {
      if ((&cStack_329)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_340 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x30);
  }
  _objc_release(puVar10);
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_328) {
    ___stack_chk_fail();
    _objc_release(puVar10);
    if (cStack_341 < '\0') {
      __ZdlPv(auStack_358[0]);
    }
    _objc_release(puVar10);
    _objc_release(puVar3);
    puVar8 = puVar1;
    __Unwind_Resume();
    pcStack_388 = FUN_107af55e4;
    lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar7 = puVar5;
    puStack_3c0 = unaff_x24;
    puStack_3b8 = puVar9;
    puStack_3b0 = puVar2;
    puStack_3a8 = puVar1;
    puStack_3a0 = puVar10;
    puStack_398 = puVar3;
    pppuStack_390 = &pppuStack_2f0;
    _objc_retain(puVar5);
    if (puVar8 != (undefined *)0x0) {
      plVar15 = *(long **)(puVar8 + 8);
      _objc_retain(puVar5);
      if (puVar5 == (undefined *)0x0) {
        puVar1 = &UNK_10f443962;
      }
      else {
        puVar1 = puVar5;
        _objc_retainAutorelease(puVar5);
        func_0x00010bdc3520();
      }
      _objc_release(puVar5);
      func_0x00010002b838(auStack_3e0,puVar1);
      uStack_400 = 0;
      uStack_3f8 = 0;
      uStack_3f0 = 0;
      func_0x00010007e1e8(&uStack_400,auStack_3e0,&lStack_3c8,1);
      puVar7 = &UNK_1109fa260;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109fa260,&uStack_400,puVar11);
      puStack_3e8 = (undefined1 *)&uStack_400;
      func_0x00010007e5dc(&puStack_3e8);
      if (cStack_3c9 < '\0') {
        __ZdlPv(auStack_3e0[0]);
      }
    }
    puVar1 = puVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3c8) {
      ___stack_chk_fail();
      _objc_release(puVar5);
      _objc_release(puVar5);
      puVar3 = puVar1;
      __Unwind_Resume();
      puStack_428 = (undefined1 *)&uStack_440;
      pcStack_408 = FUN_107af5758;
      if (puVar3 != (undefined *)0x0) {
        uStack_440 = 0;
        uStack_438 = 0;
        uStack_430 = 0;
        puStack_420 = puVar1;
        puStack_418 = puVar5;
        pppuStack_410 = &pppuStack_390;
        (**(code **)(**(long **)(puVar3 + 8) + 0x18))
                  (*(long **)(puVar3 + 8),&UNK_1109fa2b0,&uStack_440,puVar7);
        func_0x00010007e5dc(&puStack_428);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 107af4c04; end: 107af4ec3;  */

/* WARNING: Removing unreachable block (ram,0x000107af4e8c) */
/* WARNING: Removing unreachable block (ram,0x000107af514c) */

void FUN_107af4c04(long param_1,undefined *param_2,undefined8 *param_3,undefined *param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long *plVar15;
  undefined8 *unaff_x24;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined *puStack_360;
  undefined *puStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  undefined *puStack_2e8;
  undefined8 *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 auStack_298 [2];
  char cStack_281;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  undefined *puStack_248;
  undefined8 *puStack_240;
  undefined *puStack_238;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined *puStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [3];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar4 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  puVar8 = param_4;
  puVar5 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f443962;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,puVar2);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar1 = &UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar1 = &UNK_1109fa120;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar14 = 0;
    puVar2 = puVar4;
    puVar8 = param_5;
    do {
      if ((&cStack_59)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar14 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != auStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar9 = &uStack_180;
  pcStack_c8 = FUN_107af4ec4;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar4 = puVar2;
  puVar12 = puVar8;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  _objc_retain(puVar8);
  if (puVar3 != (undefined *)0x0) {
    plVar15 = *(long **)(puVar3 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f443962;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_160,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar4 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_148,puVar4);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar3 = &UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar3 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x00010002b838(auStack_130,puVar3);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_118,3);
    puVar7 = &UNK_1109fa170;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109fa170,&uStack_180,puVar5);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar14 = 0;
    puVar4 = puVar9;
    puVar12 = puVar5;
    do {
      if ((&cStack_119)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      unaff_x24 = &uStack_180;
    } while (lVar14 != -0x48);
  }
  _objc_release(puVar8);
  _objc_release(puVar2);
  puVar5 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
    ___stack_chk_fail();
    _objc_release(puVar8);
    puVar9 = auStack_160;
    do {
      unaff_x24 = unaff_x24 + -3;
    } while (unaff_x24 != puVar9);
    _objc_release(puVar8);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar6 = puVar5;
    __Unwind_Resume();
    pcStack_188 = FUN_107af5184;
    lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = puVar7;
    puVar10 = puVar4;
    puVar13 = puVar12;
    puStack_1c0 = unaff_x24;
    puStack_1b8 = puVar9;
    puStack_1b0 = puVar5;
    puStack_1a8 = puVar8;
    puStack_1a0 = puVar2;
    puStack_198 = puVar1;
    ppuStack_190 = &puStack_d0;
    _objc_retain(puVar7);
    _objc_retain(puVar4);
    puVar2 = (undefined8 *)0x0;
    if (puVar6 != (undefined *)0x0) {
      plVar15 = *(long **)(puVar6 + 8);
      _objc_retain(puVar7);
      if (puVar7 == (undefined *)0x0) {
        puVar1 = &UNK_10f443962;
      }
      else {
        puVar1 = puVar7;
        _objc_retainAutorelease(puVar7);
        func_0x00010bdc3520();
      }
      _objc_release(puVar7);
      unaff_x24 = auStack_1f8;
      func_0x00010002b838(auStack_1f8,puVar1);
      _objc_retain(puVar4);
      if (puVar4 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f443962;
      }
      else {
        _objc_retainAutorelease(puVar4);
        puVar2 = puVar4;
        func_0x00010bdc3520(puVar4);
      }
      _objc_release(puVar4);
      func_0x00010002b838(auStack_1e0,puVar2);
      uStack_218 = 0;
      uStack_210 = 0;
      uStack_208 = 0;
      func_0x00010007e1e8(&uStack_218,auStack_1f8,&lStack_1c8,2);
      puVar3 = &UNK_1109fa1c0;
      puVar9 = &uStack_218;
      puVar10 = &uStack_218;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109fa1c0,puVar10,puVar12);
      puStack_200 = puVar9;
      func_0x00010007e5dc(&puStack_200);
      lVar14 = 0;
      puVar2 = auStack_1f8;
      puVar13 = puVar12;
      do {
        if ((&cStack_1c9)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1e0 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
    _objc_release(puVar4);
    puVar1 = puVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar4);
    if (cStack_1e1 < '\0') {
      __ZdlPv(auStack_1f8[0]);
    }
    _objc_release(puVar4);
    _objc_release(puVar7);
    puVar5 = puVar1;
    __Unwind_Resume();
    pcStack_228 = FUN_107af53b4;
    lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar8 = puVar3;
    puVar11 = puVar10;
    puStack_260 = unaff_x24;
    puStack_258 = puVar9;
    puStack_250 = puVar2;
    puStack_248 = puVar1;
    puStack_240 = puVar4;
    puStack_238 = puVar7;
    pppuStack_230 = &ppuStack_190;
    _objc_retain(puVar3);
    _objc_retain(puVar10);
    puVar2 = (undefined8 *)0x0;
    if (puVar5 != (undefined *)0x0) {
      plVar15 = *(long **)(puVar5 + 8);
      _objc_retain(puVar3);
      if (puVar3 == (undefined *)0x0) {
        puVar1 = &UNK_10f443962;
      }
      else {
        puVar1 = puVar3;
        _objc_retainAutorelease(puVar3);
        func_0x00010bdc3520();
      }
      _objc_release(puVar3);
      unaff_x24 = auStack_298;
      func_0x00010002b838(auStack_298,puVar1);
      _objc_retain(puVar10);
      if (puVar10 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f443962;
      }
      else {
        _objc_retainAutorelease(puVar10);
        puVar2 = puVar10;
        func_0x00010bdc3520(puVar10);
      }
      _objc_release(puVar10);
      func_0x00010002b838(auStack_280,puVar2);
      uStack_2b8 = 0;
      uStack_2b0 = 0;
      uStack_2a8 = 0;
      func_0x00010007e1e8(&uStack_2b8,auStack_298,&lStack_268,2);
      puVar8 = &UNK_1109fa210;
      puVar9 = &uStack_2b8;
      puVar11 = &uStack_2b8;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109fa210,puVar11,puVar13);
      puStack_2a0 = puVar9;
      func_0x00010007e5dc(&puStack_2a0);
      lVar14 = 0;
      puVar2 = auStack_298;
      do {
        if ((&cStack_269)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_280 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x30);
    }
    _objc_release(puVar10);
    puVar1 = puVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar10);
    if (cStack_281 < '\0') {
      __ZdlPv(auStack_298[0]);
    }
    _objc_release(puVar10);
    _objc_release(puVar3);
    puVar7 = puVar1;
    __Unwind_Resume();
    pcStack_2c8 = FUN_107af55e4;
    lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = puVar8;
    puStack_300 = unaff_x24;
    puStack_2f8 = puVar9;
    puStack_2f0 = puVar2;
    puStack_2e8 = puVar1;
    puStack_2e0 = puVar10;
    puStack_2d8 = puVar3;
    pppuStack_2d0 = &pppuStack_230;
    _objc_retain(puVar8);
    if (puVar7 != (undefined *)0x0) {
      plVar15 = *(long **)(puVar7 + 8);
      _objc_retain(puVar8);
      if (puVar8 == (undefined *)0x0) {
        puVar1 = &UNK_10f443962;
      }
      else {
        puVar1 = puVar8;
        _objc_retainAutorelease(puVar8);
        func_0x00010bdc3520();
      }
      _objc_release(puVar8);
      func_0x00010002b838(auStack_320,puVar1);
      uStack_340 = 0;
      uStack_338 = 0;
      uStack_330 = 0;
      func_0x00010007e1e8(&uStack_340,auStack_320,&lStack_308,1);
      puVar5 = &UNK_1109fa260;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_1109fa260,&uStack_340,puVar11);
      puStack_328 = (undefined1 *)&uStack_340;
      func_0x00010007e5dc(&puStack_328);
      if (cStack_309 < '\0') {
        __ZdlPv(auStack_320[0]);
      }
    }
    puVar1 = puVar8;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_308) {
      ___stack_chk_fail();
      _objc_release(puVar8);
      _objc_release(puVar8);
      puVar3 = puVar1;
      __Unwind_Resume();
      puStack_368 = (undefined1 *)&uStack_380;
      pcStack_348 = FUN_107af5758;
      if (puVar3 != (undefined *)0x0) {
        uStack_380 = 0;
        uStack_378 = 0;
        uStack_370 = 0;
        puStack_360 = puVar1;
        puStack_358 = puVar8;
        pppuStack_350 = &pppuStack_2d0;
        (**(code **)(**(long **)(puVar3 + 8) + 0x18))
                  (*(long **)(puVar3 + 8),&UNK_1109fa2b0,&uStack_380,puVar5);
        func_0x00010007e5dc(&puStack_368);
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 107af4ec4; end: 107af5183;  */

/* WARNING: Removing unreachable block (ram,0x000107af514c) */

void FUN_107af4ec4(long param_1,undefined *param_2,undefined8 *param_3,undefined *param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *unaff_x24;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  undefined *puStack_228;
  undefined8 *puStack_220;
  undefined *puStack_218;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 auStack_1d8 [2];
  char cStack_1c1;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined *puStack_188;
  undefined8 *puStack_180;
  undefined *puStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar5 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  puVar6 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f443962;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,puVar2);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar1 = &UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar1 = &UNK_1109fa170;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109fa170,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar11 = 0;
    puVar2 = puVar5;
    puVar6 = param_5;
    do {
      if ((&cStack_59)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar11 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puVar5 = auStack_a0;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != puVar5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_c8 = FUN_107af5184;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar2;
  puVar10 = puVar6;
  puStack_100 = unaff_x24;
  puStack_f8 = puVar5;
  puStack_f0 = puVar3;
  puStack_e8 = param_4;
  puStack_e0 = param_3;
  puStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  puVar12 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar13 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f443962;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_138;
    func_0x00010002b838(auStack_138,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_120,puVar5);
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    func_0x00010007e1e8(&uStack_158,auStack_138,&lStack_108,2);
    puVar7 = &UNK_1109fa1c0;
    puVar5 = &uStack_158;
    puVar8 = &uStack_158;
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109fa1c0,puVar8,puVar6);
    puStack_140 = puVar5;
    func_0x00010007e5dc(&puStack_140);
    lVar11 = 0;
    puVar12 = auStack_138;
    puVar10 = puVar6;
    do {
      if ((&cStack_109)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(puVar2);
  puVar6 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
    ___stack_chk_fail();
    _objc_release(puVar2);
    if (cStack_121 < '\0') {
      __ZdlPv(auStack_138[0]);
    }
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar4 = puVar6;
    __Unwind_Resume();
    pcStack_168 = FUN_107af53b4;
    lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = puVar7;
    puVar9 = puVar8;
    puStack_1a0 = unaff_x24;
    puStack_198 = puVar5;
    puStack_190 = puVar12;
    puStack_188 = puVar6;
    puStack_180 = puVar2;
    puStack_178 = puVar1;
    ppuStack_170 = &puStack_d0;
    _objc_retain(puVar7);
    _objc_retain(puVar8);
    puVar2 = (undefined8 *)0x0;
    if (puVar4 != (undefined *)0x0) {
      plVar13 = *(long **)(puVar4 + 8);
      _objc_retain(puVar7);
      if (puVar7 == (undefined *)0x0) {
        puVar1 = &UNK_10f443962;
      }
      else {
        puVar1 = puVar7;
        _objc_retainAutorelease(puVar7);
        func_0x00010bdc3520();
      }
      _objc_release(puVar7);
      unaff_x24 = auStack_1d8;
      func_0x00010002b838(auStack_1d8,puVar1);
      _objc_retain(puVar8);
      if (puVar8 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)&UNK_10f443962;
      }
      else {
        _objc_retainAutorelease(puVar8);
        puVar2 = puVar8;
        func_0x00010bdc3520(puVar8);
      }
      _objc_release(puVar8);
      func_0x00010002b838(auStack_1c0,puVar2);
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      uStack_1e8 = 0;
      func_0x00010007e1e8(&uStack_1f8,auStack_1d8,&lStack_1a8,2);
      puVar3 = &UNK_1109fa210;
      puVar5 = &uStack_1f8;
      puVar9 = &uStack_1f8;
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109fa210,puVar9,puVar10);
      puStack_1e0 = puVar5;
      func_0x00010007e5dc(&puStack_1e0);
      lVar11 = 0;
      puVar2 = auStack_1d8;
      do {
        if ((&cStack_1a9)[lVar11] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1c0 + lVar11));
        }
        lVar11 = lVar11 + -0x18;
      } while (lVar11 != -0x30);
    }
    _objc_release(puVar8);
    puVar1 = puVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
      ___stack_chk_fail();
      _objc_release(puVar8);
      if (cStack_1c1 < '\0') {
        __ZdlPv(auStack_1d8[0]);
      }
      _objc_release(puVar8);
      _objc_release(puVar7);
      puVar4 = puVar1;
      __Unwind_Resume();
      pcStack_208 = FUN_107af55e4;
      lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar6 = puVar3;
      puStack_240 = unaff_x24;
      puStack_238 = puVar5;
      puStack_230 = puVar2;
      puStack_228 = puVar1;
      puStack_220 = puVar8;
      puStack_218 = puVar7;
      pppuStack_210 = &ppuStack_170;
      _objc_retain(puVar3);
      if (puVar4 != (undefined *)0x0) {
        plVar13 = *(long **)(puVar4 + 8);
        _objc_retain(puVar3);
        if (puVar3 == (undefined *)0x0) {
          puVar1 = &UNK_10f443962;
        }
        else {
          puVar1 = puVar3;
          _objc_retainAutorelease(puVar3);
          func_0x00010bdc3520();
        }
        _objc_release(puVar3);
        func_0x00010002b838(auStack_260,puVar1);
        uStack_280 = 0;
        uStack_278 = 0;
        uStack_270 = 0;
        func_0x00010007e1e8(&uStack_280,auStack_260,&lStack_248,1);
        puVar6 = &UNK_1109fa260;
        (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109fa260,&uStack_280,puVar9);
        puStack_268 = (undefined1 *)&uStack_280;
        func_0x00010007e5dc(&puStack_268);
        if (cStack_249 < '\0') {
          __ZdlPv(auStack_260[0]);
        }
      }
      puVar1 = puVar3;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_248) {
        ___stack_chk_fail();
        _objc_release(puVar3);
        _objc_release(puVar3);
        puVar7 = puVar1;
        __Unwind_Resume();
        puStack_2a8 = (undefined1 *)&uStack_2c0;
        pcStack_288 = FUN_107af5758;
        if (puVar7 != (undefined *)0x0) {
          uStack_2c0 = 0;
          uStack_2b8 = 0;
          uStack_2b0 = 0;
          puStack_2a0 = puVar1;
          puStack_298 = puVar3;
          pppuStack_290 = &pppuStack_210;
          (**(code **)(**(long **)(puVar7 + 8) + 0x18))
                    (*(long **)(puVar7 + 8),&UNK_1109fa2b0,&uStack_2c0,puVar6);
          func_0x00010007e5dc(&puStack_2a8);
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 107af5184; end: 107af53b3;  */

void FUN_107af5184(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 *puStack_1a8;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  uVar9 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar5 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar11 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f443962;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_1109fa1c0;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109fa1c0,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar10 = 0;
    puVar5 = auStack_78;
    uVar9 = param_4;
    do {
      if ((&cStack_49)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_107af53b4;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar1;
  puVar8 = puVar2;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar5;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f443962;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_118;
    func_0x00010002b838(auStack_118,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_100,puVar5);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar7 = &UNK_1109fa210;
    unaff_x23 = &uStack_138;
    puVar8 = &uStack_138;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109fa210,puVar8,uVar9);
    puStack_120 = unaff_x23;
    func_0x00010007e5dc(&puStack_120);
    lVar10 = 0;
    puVar5 = auStack_118;
    do {
      if ((&cStack_e9)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != -0x30);
  }
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar6 = puVar3;
  __Unwind_Resume();
  pcStack_148 = FUN_107af55e4;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar7;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  puStack_170 = puVar5;
  puStack_168 = puVar3;
  puStack_160 = puVar2;
  puStack_158 = puVar1;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar7);
  if (puVar6 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar6 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar1 = &UNK_10f443962;
    }
    else {
      puVar1 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x00010002b838(auStack_1a0,puVar1);
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    func_0x00010007e1e8(&uStack_1c0,auStack_1a0,&lStack_188,1);
    puVar4 = &UNK_1109fa260;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_1109fa260,&uStack_1c0,puVar8);
    puStack_1a8 = (undefined1 *)&uStack_1c0;
    func_0x00010007e5dc(&puStack_1a8);
    if (cStack_189 < '\0') {
      __ZdlPv(auStack_1a0[0]);
    }
  }
  puVar1 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar3 = puVar1;
  __Unwind_Resume();
  puStack_1e8 = (undefined1 *)&uStack_200;
  pcStack_1c8 = FUN_107af5758;
  if (puVar3 != (undefined *)0x0) {
    uStack_200 = 0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    puStack_1e0 = puVar1;
    puStack_1d8 = puVar7;
    pppuStack_1d0 = &ppuStack_150;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_1109fa2b0,&uStack_200,puVar4);
    func_0x00010007e5dc(&puStack_1e8);
  }
  return;
}



/* Entry: 107af53b4; end: 107af55e3;  */

void FUN_107af53b4(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar8 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f443962;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_1109fa210;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1109fa210,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x00010007e5dc(&puStack_80);
    lVar6 = 0;
    puVar8 = auStack_78;
    do {
      if ((&cStack_49)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_107af55e4;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar8;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar4 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f443962;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_100,puVar3);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x00010007e1e8(&uStack_120,auStack_100,&lStack_e8,1);
    puVar5 = &UNK_1109fa260;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1109fa260,&uStack_120,puVar2);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x00010007e5dc(&puStack_108);
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar4 = puVar3;
  __Unwind_Resume();
  puStack_148 = (undefined1 *)&uStack_160;
  pcStack_128 = FUN_107af5758;
  if (puVar4 != (undefined *)0x0) {
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    puStack_140 = puVar3;
    puStack_138 = puVar1;
    ppuStack_130 = &puStack_b0;
    (**(code **)(**(long **)(puVar4 + 8) + 0x18))
              (*(long **)(puVar4 + 8),&UNK_1109fa2b0,&uStack_160,puVar5);
    func_0x00010007e5dc(&puStack_148);
  }
  return;
}



/* Entry: 107af55e4; end: 107af5757;  */

void FUN_107af55e4(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f443962;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_1109fa260;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1109fa260,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_107af5758;
  if (puVar3 != (undefined *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = puVar2;
    puStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_1109fa2b0,&uStack_c0,puVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 107af5758; end: 107af57cf;  */

void FUN_107af5758(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1109fa2b0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 107af57d0; end: 107af5847;  */

void FUN_107af57d0(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1109fa300,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 107af5848; end: 107af59bb;  */

/* WARNING: Removing unreachable block (ram,0x000107af6404) */
/* WARNING: Removing unreachable block (ram,0x000107af60c8) */
/* WARNING: Removing unreachable block (ram,0x000107af68fc) */

undefined **
FUN_107af5848(long param_1,undefined **param_2,undefined **param_3,undefined **param_4,
             undefined **param_5,undefined **param_6,undefined **param_7)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  long *plVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined1 *puStack_4c8;
  undefined8 auStack_4c0 [3];
  undefined1 auStack_4a8 [24];
  undefined8 auStack_490 [2];
  char cStack_479;
  long lStack_478;
  undefined8 *puStack_470;
  undefined8 *puStack_468;
  undefined8 *puStack_460;
  undefined **ppuStack_458;
  undefined8 *puStack_450;
  undefined **ppuStack_448;
  undefined **ppuStack_440;
  undefined **ppuStack_438;
  undefined8 ***pppuStack_430;
  code *pcStack_428;
  undefined *puStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined **ppuStack_400;
  undefined8 auStack_3f8 [2];
  char cStack_3e1;
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  undefined8 *puStack_3c0;
  undefined **ppuStack_3b8;
  undefined8 *puStack_3b0;
  undefined **ppuStack_3a8;
  undefined **ppuStack_3a0;
  undefined **ppuStack_398;
  undefined8 ***pppuStack_390;
  code *pcStack_388;
  undefined *puStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 *puStack_360;
  undefined8 auStack_358 [3];
  undefined1 auStack_340 [24];
  undefined1 auStack_328 [24];
  undefined8 auStack_310 [2];
  char cStack_2f9;
  long lStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 *puStack_2e8;
  undefined **ppuStack_2e0;
  undefined **ppuStack_2d8;
  undefined8 *puStack_2d0;
  undefined **ppuStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined8 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  undefined8 auStack_280 [3];
  undefined1 auStack_268 [24];
  undefined1 auStack_250 [24];
  undefined1 auStack_238 [24];
  undefined8 auStack_220 [2];
  char cStack_209;
  long lStack_208;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  ppuVar2 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = param_2;
  ppuVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar17 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined **)0x0) {
      ppuVar1 = (undefined **)&UNK_10f443962;
    }
    else {
      ppuVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,ppuVar1);
    puStack_80 = (undefined *)0x0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&puStack_80,auStack_60,&lStack_48,1);
    ppuVar1 = (undefined **)&UNK_1109fa350;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_68 = (undefined1 *)&puStack_80;
    func_0x00010007e5dc(&puStack_68);
    ppuVar3 = ppuVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      ppuVar3 = ppuVar2;
      param_4 = param_3;
    }
  }
  ppuVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  ppuVar11 = &puStack_100;
  pcStack_88 = FUN_107af59bc;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = ppuVar1;
  ppuVar10 = ppuVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar1);
  if (ppuVar2 != (undefined **)0x0) {
    plVar17 = (long *)ppuVar2[1];
    _objc_retain(ppuVar1);
    if (ppuVar1 == (undefined **)0x0) {
      ppuVar2 = (undefined **)&UNK_10f443962;
    }
    else {
      ppuVar2 = ppuVar1;
      _objc_retainAutorelease(ppuVar1);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar1);
    func_0x00010002b838(auStack_e0,ppuVar2);
    puStack_100 = (undefined *)0x0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&puStack_100,auStack_e0,&lStack_c8,1);
    ppuVar7 = (undefined **)&UNK_1109fa3a0;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_e8 = (undefined1 *)&puStack_100;
    func_0x00010007e5dc(&puStack_e8);
    ppuVar10 = ppuVar11;
    param_4 = ppuVar3;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      ppuVar10 = ppuVar11;
      param_4 = ppuVar3;
    }
  }
  ppuVar3 = ppuVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar1);
  _objc_release(ppuVar1);
  __Unwind_Resume();
  pcStack_108 = FUN_107af5b30;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = ppuVar7;
  ppuVar2 = ppuVar10;
  ppuVar11 = param_4;
  ppuStack_110 = &puStack_90;
  _objc_retain(ppuVar7);
  _objc_retain(ppuVar10);
  if (ppuVar3 != (undefined **)0x0) {
    plVar17 = (long *)ppuVar3[1];
    _objc_retain(ppuVar7);
    if (ppuVar7 == (undefined **)0x0) {
      ppuVar1 = (undefined **)&UNK_10f443962;
    }
    else {
      ppuVar1 = ppuVar7;
      _objc_retainAutorelease(ppuVar7);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar7);
    func_0x00010002b838(auStack_178,ppuVar1);
    _objc_retain(ppuVar10);
    if (ppuVar10 == (undefined **)0x0) {
      ppuVar1 = (undefined **)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(ppuVar10);
      ppuVar1 = ppuVar10;
      func_0x00010bdc3520(ppuVar10);
    }
    _objc_release(ppuVar10);
    func_0x00010002b838(auStack_160,ppuVar1);
    puStack_198 = (undefined *)0x0;
    uStack_190 = 0;
    uStack_188 = 0;
    func_0x00010007e1e8(&puStack_198,auStack_178,&lStack_148,2);
    ppuVar1 = (undefined **)&UNK_1109fa3f0;
    ppuVar2 = &puStack_198;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_180 = &puStack_198;
    func_0x00010007e5dc(&puStack_180);
    lVar18 = 0;
    ppuVar11 = param_4;
    do {
      if ((&cStack_149)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x30);
  }
  _objc_release(ppuVar10);
  ppuVar3 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar10);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  _objc_release(ppuVar10);
  _objc_release(ppuVar7);
  __Unwind_Resume();
  ppuVar5 = &puStack_2a0;
  pcStack_1a8 = FUN_107af5d60;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = ppuVar1;
  ppuVar8 = ppuVar2;
  ppuVar13 = ppuVar11;
  ppuVar15 = param_5;
  ppuVar6 = param_6;
  pppuStack_1b0 = &ppuStack_110;
  _objc_retain(ppuVar1);
  _objc_retain(ppuVar2);
  _objc_retain(ppuVar11);
  _objc_retain(param_5);
  _objc_retain(param_6);
  ppuVar10 = (undefined **)0x0;
  if (ppuVar3 != (undefined **)0x0) {
    plVar17 = (long *)ppuVar3[1];
    _objc_retain(ppuVar1);
    if (ppuVar1 == (undefined **)0x0) {
      ppuVar3 = (undefined **)&UNK_10f443962;
    }
    else {
      ppuVar3 = ppuVar1;
      _objc_retainAutorelease(ppuVar1);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar1);
    func_0x00010002b838(auStack_280,ppuVar3);
    _objc_retain(ppuVar2);
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar3 = (undefined **)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(ppuVar2);
      ppuVar3 = ppuVar2;
      func_0x00010bdc3520(ppuVar2);
    }
    _objc_release(ppuVar2);
    func_0x00010002b838(auStack_268,ppuVar3);
    _objc_retain(ppuVar11);
    if (ppuVar11 == (undefined **)0x0) {
      ppuVar3 = (undefined **)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(ppuVar11);
      ppuVar3 = ppuVar11;
      func_0x00010bdc3520(ppuVar11);
    }
    _objc_release(ppuVar11);
    func_0x00010002b838(auStack_250,ppuVar3);
    _objc_retain(param_5);
    if (param_5 == (undefined **)0x0) {
      ppuVar3 = (undefined **)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(param_5);
      ppuVar3 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_238,ppuVar3);
    _objc_retain(param_6);
    if (param_6 == (undefined **)0x0) {
      ppuVar3 = (undefined **)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(param_6);
      ppuVar3 = param_6;
      func_0x00010bdc3520(param_6);
    }
    _objc_release(param_6);
    func_0x00010002b838(auStack_220,ppuVar3);
    puStack_2a0 = (undefined *)0x0;
    uStack_298 = 0;
    uStack_290 = 0;
    func_0x00010007e1e8(&puStack_2a0,auStack_280,&lStack_208,5);
    ppuVar7 = (undefined **)&UNK_1109fa440;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_288 = (undefined1 *)&puStack_2a0;
    func_0x00010007e5dc(&puStack_288);
    lVar18 = 0;
    ppuVar10 = (undefined **)auStack_280;
    ppuVar8 = ppuVar5;
    ppuVar13 = param_7;
    do {
      if ((&cStack_209)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_220 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x78);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(ppuVar11);
  _objc_release(ppuVar2);
  ppuVar3 = ppuVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_6);
  ppuVar5 = (undefined **)auStack_280;
  do {
    ppuVar10 = ppuVar10 + -3;
  } while (ppuVar10 != ppuVar5);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(ppuVar11);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  ppuVar4 = ppuVar3;
  __Unwind_Resume();
  pcStack_2a8 = FUN_107af6110;
  lStack_2f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = ppuVar7;
  ppuVar12 = ppuVar8;
  ppuVar14 = ppuVar13;
  ppuVar16 = ppuVar15;
  puStack_2f0 = ppuVar5;
  puStack_2e8 = ppuVar10;
  ppuStack_2e0 = ppuVar3;
  ppuStack_2d8 = param_6;
  puStack_2d0 = param_5;
  ppuStack_2c8 = ppuVar11;
  ppuStack_2c0 = ppuVar2;
  ppuStack_2b8 = ppuVar1;
  pppuStack_2b0 = &pppuStack_1b0;
  _objc_retain(ppuVar7);
  _objc_retain(ppuVar8);
  _objc_retain(ppuVar13);
  _objc_retain(ppuVar15);
  if (ppuVar4 != (undefined **)0x0) {
    plVar17 = (long *)ppuVar4[1];
    _objc_retain(ppuVar7);
    if (ppuVar7 == (undefined **)0x0) {
      ppuVar1 = (undefined **)&UNK_10f443962;
    }
    else {
      ppuVar1 = ppuVar7;
      _objc_retainAutorelease(ppuVar7);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar7);
    func_0x00010002b838(auStack_358,ppuVar1);
    _objc_retain(ppuVar8);
    if (ppuVar8 == (undefined **)0x0) {
      ppuVar1 = (undefined **)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(ppuVar8);
      ppuVar1 = ppuVar8;
      func_0x00010bdc3520(ppuVar8);
    }
    _objc_release(ppuVar8);
    func_0x00010002b838(auStack_340,ppuVar1);
    _objc_retain(ppuVar13);
    if (ppuVar13 == (undefined **)0x0) {
      ppuVar1 = (undefined **)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(ppuVar13);
      ppuVar1 = ppuVar13;
      func_0x00010bdc3520(ppuVar13);
    }
    _objc_release(ppuVar13);
    func_0x00010002b838(auStack_328,ppuVar1);
    _objc_retain(ppuVar15);
    if (ppuVar15 == (undefined **)0x0) {
      ppuVar5 = (undefined **)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(ppuVar15);
      ppuVar5 = ppuVar15;
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar15);
    func_0x00010002b838(auStack_310,ppuVar5);
    puStack_378 = (undefined *)0x0;
    uStack_370 = 0;
    uStack_368 = 0;
    func_0x00010007e1e8(&puStack_378,auStack_358,&lStack_2f8,4);
    ppuVar9 = (undefined **)&UNK_1109fa490;
    ppuVar10 = &puStack_378;
    ppuVar12 = &puStack_378;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_360 = ppuVar10;
    func_0x00010007e5dc(&puStack_360);
    lVar18 = 0;
    ppuVar14 = ppuVar6;
    do {
      if ((&cStack_2f9)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_310 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x60);
  }
  _objc_release(ppuVar15);
  _objc_release(ppuVar13);
  _objc_release(ppuVar8);
  ppuVar1 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2f8) {
    ___stack_chk_fail();
    _objc_release(ppuVar15);
    ppuVar3 = (undefined **)auStack_358;
    do {
      ppuVar10 = ppuVar10 + -3;
    } while (ppuVar10 != ppuVar3);
    _objc_release(ppuVar15);
    _objc_release(ppuVar13);
    _objc_release(ppuVar8);
    _objc_release(ppuVar7);
    ppuVar6 = ppuVar1;
    __Unwind_Resume();
    pcStack_388 = FUN_107af6444;
    lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar2 = ppuVar9;
    ppuVar11 = ppuVar12;
    ppuVar4 = ppuVar14;
    puStack_3c0 = ppuVar3;
    ppuStack_3b8 = ppuVar1;
    puStack_3b0 = ppuVar15;
    ppuStack_3a8 = ppuVar13;
    ppuStack_3a0 = ppuVar8;
    ppuStack_398 = ppuVar7;
    pppuStack_390 = &pppuStack_2b0;
    _objc_retain(ppuVar9);
    _objc_retain(ppuVar12);
    puVar19 = (undefined8 *)0x0;
    if (ppuVar6 != (undefined **)0x0) {
      plVar17 = (long *)ppuVar6[1];
      _objc_retain(ppuVar9);
      if (ppuVar9 == (undefined **)0x0) {
        ppuVar1 = (undefined **)&UNK_10f443962;
      }
      else {
        ppuVar1 = ppuVar9;
        _objc_retainAutorelease(ppuVar9);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar9);
      ppuVar3 = (undefined **)auStack_3f8;
      func_0x00010002b838(auStack_3f8,ppuVar1);
      _objc_retain(ppuVar12);
      if (ppuVar12 == (undefined **)0x0) {
        ppuVar1 = (undefined **)&UNK_10f443962;
      }
      else {
        _objc_retainAutorelease(ppuVar12);
        ppuVar1 = ppuVar12;
        func_0x00010bdc3520(ppuVar12);
      }
      _objc_release(ppuVar12);
      func_0x00010002b838(auStack_3e0,ppuVar1);
      puStack_418 = (undefined *)0x0;
      uStack_410 = 0;
      uStack_408 = 0;
      func_0x00010007e1e8(&puStack_418,auStack_3f8,&lStack_3c8,2);
      ppuVar2 = (undefined **)&UNK_1109fa4e0;
      ppuVar1 = &puStack_418;
      ppuVar11 = &puStack_418;
      (**(code **)(*plVar17 + 0x18))(plVar17);
      ppuStack_400 = ppuVar1;
      func_0x00010007e5dc(&ppuStack_400);
      lVar18 = 0;
      puVar19 = auStack_3f8;
      ppuVar4 = ppuVar14;
      do {
        if ((&cStack_3c9)[lVar18] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_3e0 + lVar18));
        }
        lVar18 = lVar18 + -0x18;
      } while (lVar18 != -0x30);
    }
    _objc_release(ppuVar12);
    ppuVar7 = ppuVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c8) {
      return ppuVar7;
    }
    ___stack_chk_fail();
    _objc_release(ppuVar12);
    if (cStack_3e1 < '\0') {
      __ZdlPv(auStack_3f8[0]);
    }
    _objc_release(ppuVar12);
    _objc_release(ppuVar9);
    ppuVar8 = ppuVar7;
    __Unwind_Resume();
    pcStack_428 = FUN_107af6674;
    lStack_478 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_470 = ppuVar5;
    puStack_468 = ppuVar10;
    puStack_460 = ppuVar3;
    ppuStack_458 = ppuVar1;
    puStack_450 = puVar19;
    ppuStack_448 = ppuVar7;
    ppuStack_440 = ppuVar12;
    ppuStack_438 = ppuVar9;
    pppuStack_430 = &pppuStack_390;
    _objc_retain(ppuVar2);
    _objc_retain(ppuVar11);
    _objc_retain(ppuVar4);
    if (ppuVar8 != (undefined **)0x0) {
      plVar17 = (long *)ppuVar8[1];
      _objc_retain(ppuVar2);
      if (ppuVar2 == (undefined **)0x0) {
        ppuVar1 = (undefined **)&UNK_10f443962;
      }
      else {
        ppuVar1 = ppuVar2;
        _objc_retainAutorelease(ppuVar2);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar2);
      func_0x00010002b838(auStack_4c0,ppuVar1);
      _objc_retain(ppuVar11);
      if (ppuVar11 == (undefined **)0x0) {
        ppuVar1 = (undefined **)&UNK_10f443962;
      }
      else {
        _objc_retainAutorelease(ppuVar11);
        ppuVar1 = ppuVar11;
        func_0x00010bdc3520(ppuVar11);
      }
      _objc_release(ppuVar11);
      func_0x00010002b838(auStack_4a8,ppuVar1);
      _objc_retain(ppuVar4);
      if (ppuVar4 == (undefined **)0x0) {
        ppuVar1 = (undefined **)&UNK_10f443962;
      }
      else {
        _objc_retainAutorelease(ppuVar4);
        ppuVar1 = ppuVar4;
        func_0x00010bdc3520(ppuVar4);
      }
      _objc_release(ppuVar4);
      func_0x00010002b838(auStack_490,ppuVar1);
      uStack_4e0 = (undefined *)0x0;
      uStack_4d8 = 0;
      uStack_4d0 = 0;
      func_0x00010007e1e8(&uStack_4e0,auStack_4c0,&lStack_478,3);
      (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_1109fa530,&uStack_4e0,ppuVar16);
      puStack_4c8 = (undefined1 *)&uStack_4e0;
      func_0x00010007e5dc(&puStack_4c8);
      lVar18 = 0;
      do {
        if ((&cStack_479)[lVar18] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_490 + lVar18));
        }
        lVar18 = lVar18 + -0x18;
        ppuVar3 = (undefined **)&uStack_4e0;
      } while (lVar18 != -0x48);
    }
    _objc_release(ppuVar4);
    _objc_release(ppuVar11);
    ppuVar1 = ppuVar2;
    _objc_release(ppuVar2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_478) {
      ___stack_chk_fail();
      _objc_release(ppuVar4);
      do {
        ppuVar3 = ppuVar3 + -3;
      } while (ppuVar3 != (undefined **)auStack_4c0);
      _objc_release(ppuVar4);
      _objc_release(ppuVar11);
      _objc_release(ppuVar2);
      __Unwind_Resume(ppuVar1);
      return &PTR____CFConstantStringClassReference_110eacd58;
    }
    return ppuVar1;
  }
  return ppuVar1;
}



/* Entry: 107af59bc; end: 107af5b2f;  */

/* WARNING: Removing unreachable block (ram,0x000107af6404) */
/* WARNING: Removing unreachable block (ram,0x000107af60c8) */
/* WARNING: Removing unreachable block (ram,0x000107af68fc) */

undefined **
FUN_107af59bc(long param_1,undefined **param_2,undefined **param_3,undefined **param_4,
             undefined **param_5,undefined **param_6,undefined **param_7)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  long *plVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined1 *puStack_448;
  undefined8 auStack_440 [3];
  undefined1 auStack_428 [24];
  undefined8 auStack_410 [2];
  char cStack_3f9;
  long lStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 *puStack_3e0;
  undefined **ppuStack_3d8;
  undefined8 *puStack_3d0;
  undefined **ppuStack_3c8;
  undefined **ppuStack_3c0;
  undefined **ppuStack_3b8;
  undefined8 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined *puStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined **ppuStack_380;
  undefined8 auStack_378 [2];
  char cStack_361;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  undefined8 *puStack_340;
  undefined **ppuStack_338;
  undefined8 *puStack_330;
  undefined **ppuStack_328;
  undefined **ppuStack_320;
  undefined **ppuStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 auStack_2d8 [3];
  undefined1 auStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  undefined8 auStack_290 [2];
  char cStack_279;
  long lStack_278;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined8 *puStack_250;
  undefined **ppuStack_248;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [3];
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  ppuVar2 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = param_2;
  ppuVar4 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar17 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined **)0x0) {
      ppuVar1 = (undefined **)&UNK_10f443962;
    }
    else {
      ppuVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,ppuVar1);
    puStack_80 = (undefined *)0x0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&puStack_80,auStack_60,&lStack_48,1);
    ppuVar1 = (undefined **)&UNK_1109fa3a0;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_68 = (undefined1 *)&puStack_80;
    func_0x00010007e5dc(&puStack_68);
    ppuVar4 = ppuVar2;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      ppuVar4 = ppuVar2;
      param_4 = param_3;
    }
  }
  ppuVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_107af5b30;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = ppuVar1;
  ppuVar10 = ppuVar4;
  ppuVar12 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar1);
  _objc_retain(ppuVar4);
  if (ppuVar2 != (undefined **)0x0) {
    plVar17 = (long *)ppuVar2[1];
    _objc_retain(ppuVar1);
    if (ppuVar1 == (undefined **)0x0) {
      ppuVar2 = (undefined **)&UNK_10f443962;
    }
    else {
      ppuVar2 = ppuVar1;
      _objc_retainAutorelease(ppuVar1);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar1);
    func_0x00010002b838(auStack_f8,ppuVar2);
    _objc_retain(ppuVar4);
    if (ppuVar4 == (undefined **)0x0) {
      ppuVar2 = (undefined **)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(ppuVar4);
      ppuVar2 = ppuVar4;
      func_0x00010bdc3520(ppuVar4);
    }
    _objc_release(ppuVar4);
    func_0x00010002b838(auStack_e0,ppuVar2);
    puStack_118 = (undefined *)0x0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&puStack_118,auStack_f8,&lStack_c8,2);
    ppuVar8 = (undefined **)&UNK_1109fa3f0;
    ppuVar10 = &puStack_118;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_100 = &puStack_118;
    func_0x00010007e5dc(&puStack_100);
    lVar18 = 0;
    ppuVar12 = param_4;
    do {
      if ((&cStack_c9)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x30);
  }
  _objc_release(ppuVar4);
  ppuVar2 = ppuVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar4);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(ppuVar4);
  _objc_release(ppuVar1);
  __Unwind_Resume();
  ppuVar5 = &puStack_220;
  pcStack_128 = FUN_107af5d60;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = ppuVar8;
  ppuVar7 = ppuVar10;
  ppuVar13 = ppuVar12;
  ppuVar15 = param_5;
  ppuVar6 = param_6;
  ppuStack_130 = &puStack_90;
  _objc_retain(ppuVar8);
  _objc_retain(ppuVar10);
  _objc_retain(ppuVar12);
  _objc_retain(param_5);
  _objc_retain(param_6);
  ppuVar4 = (undefined **)0x0;
  if (ppuVar2 != (undefined **)0x0) {
    plVar17 = (long *)ppuVar2[1];
    _objc_retain(ppuVar8);
    if (ppuVar8 == (undefined **)0x0) {
      ppuVar1 = (undefined **)&UNK_10f443962;
    }
    else {
      ppuVar1 = ppuVar8;
      _objc_retainAutorelease(ppuVar8);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar8);
    func_0x00010002b838(auStack_200,ppuVar1);
    _objc_retain(ppuVar10);
    if (ppuVar10 == (undefined **)0x0) {
      ppuVar1 = (undefined **)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(ppuVar10);
      ppuVar1 = ppuVar10;
      func_0x00010bdc3520(ppuVar10);
    }
    _objc_release(ppuVar10);
    func_0x00010002b838(auStack_1e8,ppuVar1);
    _objc_retain(ppuVar12);
    if (ppuVar12 == (undefined **)0x0) {
      ppuVar1 = (undefined **)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(ppuVar12);
      ppuVar1 = ppuVar12;
      func_0x00010bdc3520(ppuVar12);
    }
    _objc_release(ppuVar12);
    func_0x00010002b838(auStack_1d0,ppuVar1);
    _objc_retain(param_5);
    if (param_5 == (undefined **)0x0) {
      ppuVar1 = (undefined **)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(param_5);
      ppuVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_1b8,ppuVar1);
    _objc_retain(param_6);
    if (param_6 == (undefined **)0x0) {
      ppuVar1 = (undefined **)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(param_6);
      ppuVar1 = param_6;
      func_0x00010bdc3520(param_6);
    }
    _objc_release(param_6);
    func_0x00010002b838(auStack_1a0,ppuVar1);
    puStack_220 = (undefined *)0x0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x00010007e1e8(&puStack_220,auStack_200,&lStack_188,5);
    ppuVar1 = (undefined **)&UNK_1109fa440;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_208 = (undefined1 *)&puStack_220;
    func_0x00010007e5dc(&puStack_208);
    lVar18 = 0;
    ppuVar4 = (undefined **)auStack_200;
    ppuVar7 = ppuVar5;
    ppuVar13 = param_7;
    do {
      if ((&cStack_189)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x78);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(ppuVar12);
  _objc_release(ppuVar10);
  ppuVar2 = ppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_6);
  ppuVar5 = (undefined **)auStack_200;
  do {
    ppuVar4 = ppuVar4 + -3;
  } while (ppuVar4 != ppuVar5);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(ppuVar12);
  _objc_release(ppuVar10);
  _objc_release(ppuVar8);
  ppuVar3 = ppuVar2;
  __Unwind_Resume();
  pcStack_228 = FUN_107af6110;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = ppuVar1;
  ppuVar11 = ppuVar7;
  ppuVar14 = ppuVar13;
  ppuVar16 = ppuVar15;
  puStack_270 = ppuVar5;
  puStack_268 = ppuVar4;
  ppuStack_260 = ppuVar2;
  ppuStack_258 = param_6;
  puStack_250 = param_5;
  ppuStack_248 = ppuVar12;
  ppuStack_240 = ppuVar10;
  ppuStack_238 = ppuVar8;
  pppuStack_230 = &ppuStack_130;
  _objc_retain(ppuVar1);
  _objc_retain(ppuVar7);
  _objc_retain(ppuVar13);
  _objc_retain(ppuVar15);
  if (ppuVar3 != (undefined **)0x0) {
    plVar17 = (long *)ppuVar3[1];
    _objc_retain(ppuVar1);
    if (ppuVar1 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f443962;
    }
    else {
      ppuVar4 = ppuVar1;
      _objc_retainAutorelease(ppuVar1);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar1);
    func_0x00010002b838(auStack_2d8,ppuVar4);
    _objc_retain(ppuVar7);
    if (ppuVar7 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(ppuVar7);
      ppuVar4 = ppuVar7;
      func_0x00010bdc3520(ppuVar7);
    }
    _objc_release(ppuVar7);
    func_0x00010002b838(auStack_2c0,ppuVar4);
    _objc_retain(ppuVar13);
    if (ppuVar13 == (undefined **)0x0) {
      ppuVar4 = (undefined **)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(ppuVar13);
      ppuVar4 = ppuVar13;
      func_0x00010bdc3520(ppuVar13);
    }
    _objc_release(ppuVar13);
    func_0x00010002b838(auStack_2a8,ppuVar4);
    _objc_retain(ppuVar15);
    if (ppuVar15 == (undefined **)0x0) {
      ppuVar5 = (undefined **)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(ppuVar15);
      ppuVar5 = ppuVar15;
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar15);
    func_0x00010002b838(auStack_290,ppuVar5);
    puStack_2f8 = (undefined *)0x0;
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    func_0x00010007e1e8(&puStack_2f8,auStack_2d8,&lStack_278,4);
    ppuVar9 = (undefined **)&UNK_1109fa490;
    ppuVar4 = &puStack_2f8;
    ppuVar11 = &puStack_2f8;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_2e0 = ppuVar4;
    func_0x00010007e5dc(&puStack_2e0);
    lVar18 = 0;
    ppuVar14 = ppuVar6;
    do {
      if ((&cStack_279)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_290 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x60);
  }
  _objc_release(ppuVar15);
  _objc_release(ppuVar13);
  _objc_release(ppuVar7);
  ppuVar2 = ppuVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_278) {
    ___stack_chk_fail();
    _objc_release(ppuVar15);
    ppuVar8 = (undefined **)auStack_2d8;
    do {
      ppuVar4 = ppuVar4 + -3;
    } while (ppuVar4 != ppuVar8);
    _objc_release(ppuVar15);
    _objc_release(ppuVar13);
    _objc_release(ppuVar7);
    _objc_release(ppuVar1);
    ppuVar6 = ppuVar2;
    __Unwind_Resume();
    pcStack_308 = FUN_107af6444;
    lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar10 = ppuVar9;
    ppuVar12 = ppuVar11;
    ppuVar3 = ppuVar14;
    puStack_340 = ppuVar8;
    ppuStack_338 = ppuVar2;
    puStack_330 = ppuVar15;
    ppuStack_328 = ppuVar13;
    ppuStack_320 = ppuVar7;
    ppuStack_318 = ppuVar1;
    pppuStack_310 = &pppuStack_230;
    _objc_retain(ppuVar9);
    _objc_retain(ppuVar11);
    puVar19 = (undefined8 *)0x0;
    if (ppuVar6 != (undefined **)0x0) {
      plVar17 = (long *)ppuVar6[1];
      _objc_retain(ppuVar9);
      if (ppuVar9 == (undefined **)0x0) {
        ppuVar1 = (undefined **)&UNK_10f443962;
      }
      else {
        ppuVar1 = ppuVar9;
        _objc_retainAutorelease(ppuVar9);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar9);
      ppuVar8 = (undefined **)auStack_378;
      func_0x00010002b838(auStack_378,ppuVar1);
      _objc_retain(ppuVar11);
      if (ppuVar11 == (undefined **)0x0) {
        ppuVar1 = (undefined **)&UNK_10f443962;
      }
      else {
        _objc_retainAutorelease(ppuVar11);
        ppuVar1 = ppuVar11;
        func_0x00010bdc3520(ppuVar11);
      }
      _objc_release(ppuVar11);
      func_0x00010002b838(auStack_360,ppuVar1);
      puStack_398 = (undefined *)0x0;
      uStack_390 = 0;
      uStack_388 = 0;
      func_0x00010007e1e8(&puStack_398,auStack_378,&lStack_348,2);
      ppuVar10 = (undefined **)&UNK_1109fa4e0;
      ppuVar2 = &puStack_398;
      ppuVar12 = &puStack_398;
      (**(code **)(*plVar17 + 0x18))(plVar17);
      ppuStack_380 = ppuVar2;
      func_0x00010007e5dc(&ppuStack_380);
      lVar18 = 0;
      puVar19 = auStack_378;
      ppuVar3 = ppuVar14;
      do {
        if ((&cStack_349)[lVar18] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_360 + lVar18));
        }
        lVar18 = lVar18 + -0x18;
      } while (lVar18 != -0x30);
    }
    _objc_release(ppuVar11);
    ppuVar1 = ppuVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_348) {
      ___stack_chk_fail();
      _objc_release(ppuVar11);
      if (cStack_361 < '\0') {
        __ZdlPv(auStack_378[0]);
      }
      _objc_release(ppuVar11);
      _objc_release(ppuVar9);
      ppuVar7 = ppuVar1;
      __Unwind_Resume();
      pcStack_3a8 = FUN_107af6674;
      lStack_3f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_3f0 = ppuVar5;
      puStack_3e8 = ppuVar4;
      puStack_3e0 = ppuVar8;
      ppuStack_3d8 = ppuVar2;
      puStack_3d0 = puVar19;
      ppuStack_3c8 = ppuVar1;
      ppuStack_3c0 = ppuVar11;
      ppuStack_3b8 = ppuVar9;
      pppuStack_3b0 = &pppuStack_310;
      _objc_retain(ppuVar10);
      _objc_retain(ppuVar12);
      _objc_retain(ppuVar3);
      if (ppuVar7 != (undefined **)0x0) {
        plVar17 = (long *)ppuVar7[1];
        _objc_retain(ppuVar10);
        if (ppuVar10 == (undefined **)0x0) {
          ppuVar1 = (undefined **)&UNK_10f443962;
        }
        else {
          ppuVar1 = ppuVar10;
          _objc_retainAutorelease(ppuVar10);
          func_0x00010bdc3520();
        }
        _objc_release(ppuVar10);
        func_0x00010002b838(auStack_440,ppuVar1);
        _objc_retain(ppuVar12);
        if (ppuVar12 == (undefined **)0x0) {
          ppuVar1 = (undefined **)&UNK_10f443962;
        }
        else {
          _objc_retainAutorelease(ppuVar12);
          ppuVar1 = ppuVar12;
          func_0x00010bdc3520(ppuVar12);
        }
        _objc_release(ppuVar12);
        func_0x00010002b838(auStack_428,ppuVar1);
        _objc_retain(ppuVar3);
        if (ppuVar3 == (undefined **)0x0) {
          ppuVar1 = (undefined **)&UNK_10f443962;
        }
        else {
          _objc_retainAutorelease(ppuVar3);
          ppuVar1 = ppuVar3;
          func_0x00010bdc3520(ppuVar3);
        }
        _objc_release(ppuVar3);
        func_0x00010002b838(auStack_410,ppuVar1);
        uStack_460 = (undefined *)0x0;
        uStack_458 = 0;
        uStack_450 = 0;
        func_0x00010007e1e8(&uStack_460,auStack_440,&lStack_3f8,3);
        (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_1109fa530,&uStack_460,ppuVar16);
        puStack_448 = (undefined1 *)&uStack_460;
        func_0x00010007e5dc(&puStack_448);
        lVar18 = 0;
        do {
          if ((&cStack_3f9)[lVar18] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_410 + lVar18));
          }
          lVar18 = lVar18 + -0x18;
          ppuVar8 = (undefined **)&uStack_460;
        } while (lVar18 != -0x48);
      }
      _objc_release(ppuVar3);
      _objc_release(ppuVar12);
      ppuVar1 = ppuVar10;
      _objc_release(ppuVar10);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3f8) {
        ___stack_chk_fail();
        _objc_release(ppuVar3);
        do {
          ppuVar8 = ppuVar8 + -3;
        } while (ppuVar8 != (undefined **)auStack_440);
        _objc_release(ppuVar3);
        _objc_release(ppuVar12);
        _objc_release(ppuVar10);
        __Unwind_Resume(ppuVar1);
        return &PTR____CFConstantStringClassReference_110eacd58;
      }
      return ppuVar1;
    }
    return ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 107af5b30; end: 107af5d5f;  */

/* WARNING: Removing unreachable block (ram,0x000107af6404) */
/* WARNING: Removing unreachable block (ram,0x000107af60c8) */
/* WARNING: Removing unreachable block (ram,0x000107af68fc) */

undefined **
FUN_107af5b30(long param_1,undefined **param_2,undefined **param_3,undefined *param_4,
             undefined **param_5,undefined *param_6,undefined *param_7)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  long lVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined **ppuVar20;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined1 *puStack_3c8;
  undefined8 auStack_3c0 [3];
  undefined1 auStack_3a8 [24];
  undefined8 auStack_390 [2];
  char cStack_379;
  long lStack_378;
  undefined8 *puStack_370;
  undefined8 *puStack_368;
  undefined8 *puStack_360;
  undefined **ppuStack_358;
  undefined8 *puStack_350;
  undefined **ppuStack_348;
  undefined **ppuStack_340;
  undefined **ppuStack_338;
  undefined8 ***pppuStack_330;
  code *pcStack_328;
  undefined *puStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined **ppuStack_300;
  undefined8 auStack_2f8 [2];
  char cStack_2e1;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  undefined **ppuStack_2b8;
  undefined8 *puStack_2b0;
  undefined *puStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined1 ***pppuStack_290;
  code *pcStack_288;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 auStack_258 [3];
  undefined1 auStack_240 [24];
  undefined1 auStack_228 [24];
  undefined8 auStack_210 [2];
  char cStack_1f9;
  long lStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined **ppuStack_1e0;
  undefined *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined *puStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [3];
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = param_2;
  ppuVar11 = param_3;
  puVar5 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar18 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined **)0x0) {
      ppuVar1 = (undefined **)&UNK_10f443962;
    }
    else {
      ppuVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_78,ppuVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined **)0x0) {
      ppuVar1 = (undefined **)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(param_3);
      ppuVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,ppuVar1);
    puStack_98 = (undefined *)0x0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&puStack_98,auStack_78,&lStack_48,2);
    ppuVar1 = (undefined **)&UNK_1109fa3f0;
    ppuVar11 = &puStack_98;
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_80 = &puStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar17 = 0;
    puVar5 = param_4;
    do {
      if ((&cStack_49)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x30);
  }
  _objc_release(param_3);
  ppuVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  ppuVar6 = &puStack_1a0;
  pcStack_a8 = FUN_107af5d60;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = ppuVar1;
  ppuVar9 = ppuVar11;
  puVar3 = puVar5;
  ppuVar15 = param_5;
  puVar14 = param_6;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar1);
  _objc_retain(ppuVar11);
  _objc_retain(puVar5);
  _objc_retain(param_5);
  _objc_retain(param_6);
  ppuVar20 = (undefined **)0x0;
  if (ppuVar2 != (undefined **)0x0) {
    plVar18 = (long *)ppuVar2[1];
    _objc_retain(ppuVar1);
    if (ppuVar1 == (undefined **)0x0) {
      ppuVar2 = (undefined **)&UNK_10f443962;
    }
    else {
      ppuVar2 = ppuVar1;
      _objc_retainAutorelease(ppuVar1);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar1);
    func_0x00010002b838(auStack_180,ppuVar2);
    _objc_retain(ppuVar11);
    if (ppuVar11 == (undefined **)0x0) {
      ppuVar2 = (undefined **)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(ppuVar11);
      ppuVar2 = ppuVar11;
      func_0x00010bdc3520(ppuVar11);
    }
    _objc_release(ppuVar11);
    func_0x00010002b838(auStack_168,ppuVar2);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar3 = &UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_150,puVar3);
    _objc_retain(param_5);
    if (param_5 == (undefined **)0x0) {
      ppuVar2 = (undefined **)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(param_5);
      ppuVar2 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_138,ppuVar2);
    _objc_retain(param_6);
    if (param_6 == (undefined *)0x0) {
      puVar3 = &UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(param_6);
      puVar3 = param_6;
      func_0x00010bdc3520(param_6);
    }
    _objc_release(param_6);
    func_0x00010002b838(auStack_120,puVar3);
    puStack_1a0 = (undefined *)0x0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x00010007e1e8(&puStack_1a0,auStack_180,&lStack_108,5);
    ppuVar8 = (undefined **)&UNK_1109fa440;
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_188 = (undefined1 *)&puStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    lVar17 = 0;
    ppuVar20 = (undefined **)auStack_180;
    ppuVar9 = ppuVar6;
    puVar3 = param_7;
    do {
      if ((&cStack_109)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_120 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x78);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar5);
  _objc_release(ppuVar11);
  ppuVar2 = ppuVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_6);
  ppuVar6 = (undefined **)auStack_180;
  do {
    ppuVar20 = ppuVar20 + -3;
  } while (ppuVar20 != ppuVar6);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar5);
  _objc_release(ppuVar11);
  _objc_release(ppuVar1);
  ppuVar4 = ppuVar2;
  __Unwind_Resume();
  pcStack_1a8 = FUN_107af6110;
  lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar10 = ppuVar8;
  ppuVar12 = ppuVar9;
  puVar13 = puVar3;
  ppuVar16 = ppuVar15;
  puStack_1f0 = ppuVar6;
  puStack_1e8 = ppuVar20;
  ppuStack_1e0 = ppuVar2;
  puStack_1d8 = param_6;
  puStack_1d0 = param_5;
  puStack_1c8 = puVar5;
  ppuStack_1c0 = ppuVar11;
  ppuStack_1b8 = ppuVar1;
  ppuStack_1b0 = &puStack_b0;
  _objc_retain(ppuVar8);
  _objc_retain(ppuVar9);
  _objc_retain(puVar3);
  _objc_retain(ppuVar15);
  if (ppuVar4 != (undefined **)0x0) {
    plVar18 = (long *)ppuVar4[1];
    _objc_retain(ppuVar8);
    if (ppuVar8 == (undefined **)0x0) {
      ppuVar1 = (undefined **)&UNK_10f443962;
    }
    else {
      ppuVar1 = ppuVar8;
      _objc_retainAutorelease(ppuVar8);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar8);
    func_0x00010002b838(auStack_258,ppuVar1);
    _objc_retain(ppuVar9);
    if (ppuVar9 == (undefined **)0x0) {
      ppuVar1 = (undefined **)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(ppuVar9);
      ppuVar1 = ppuVar9;
      func_0x00010bdc3520(ppuVar9);
    }
    _objc_release(ppuVar9);
    func_0x00010002b838(auStack_240,ppuVar1);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar5 = &UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar5 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x00010002b838(auStack_228,puVar5);
    _objc_retain(ppuVar15);
    if (ppuVar15 == (undefined **)0x0) {
      ppuVar6 = (undefined **)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(ppuVar15);
      ppuVar6 = ppuVar15;
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar15);
    func_0x00010002b838(auStack_210,ppuVar6);
    puStack_278 = (undefined *)0x0;
    uStack_270 = 0;
    uStack_268 = 0;
    func_0x00010007e1e8(&puStack_278,auStack_258,&lStack_1f8,4);
    ppuVar10 = (undefined **)&UNK_1109fa490;
    ppuVar20 = &puStack_278;
    ppuVar12 = &puStack_278;
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_260 = ppuVar20;
    func_0x00010007e5dc(&puStack_260);
    lVar17 = 0;
    puVar13 = puVar14;
    do {
      if ((&cStack_1f9)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_210 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x60);
  }
  _objc_release(ppuVar15);
  _objc_release(puVar3);
  _objc_release(ppuVar9);
  ppuVar1 = ppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f8) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar15);
  ppuVar11 = (undefined **)auStack_258;
  do {
    ppuVar20 = ppuVar20 + -3;
  } while (ppuVar20 != ppuVar11);
  _objc_release(ppuVar15);
  _objc_release(puVar3);
  _objc_release(ppuVar9);
  _objc_release(ppuVar8);
  ppuVar7 = ppuVar1;
  __Unwind_Resume();
  pcStack_288 = FUN_107af6444;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar2 = ppuVar10;
  ppuVar4 = ppuVar12;
  puVar5 = puVar13;
  puStack_2c0 = ppuVar11;
  ppuStack_2b8 = ppuVar1;
  puStack_2b0 = ppuVar15;
  puStack_2a8 = puVar3;
  ppuStack_2a0 = ppuVar9;
  ppuStack_298 = ppuVar8;
  pppuStack_290 = &ppuStack_1b0;
  _objc_retain(ppuVar10);
  _objc_retain(ppuVar12);
  puVar19 = (undefined8 *)0x0;
  if (ppuVar7 != (undefined **)0x0) {
    plVar18 = (long *)ppuVar7[1];
    _objc_retain(ppuVar10);
    if (ppuVar10 == (undefined **)0x0) {
      ppuVar1 = (undefined **)&UNK_10f443962;
    }
    else {
      ppuVar1 = ppuVar10;
      _objc_retainAutorelease(ppuVar10);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar10);
    ppuVar11 = (undefined **)auStack_2f8;
    func_0x00010002b838(auStack_2f8,ppuVar1);
    _objc_retain(ppuVar12);
    if (ppuVar12 == (undefined **)0x0) {
      ppuVar1 = (undefined **)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(ppuVar12);
      ppuVar1 = ppuVar12;
      func_0x00010bdc3520(ppuVar12);
    }
    _objc_release(ppuVar12);
    func_0x00010002b838(auStack_2e0,ppuVar1);
    puStack_318 = (undefined *)0x0;
    uStack_310 = 0;
    uStack_308 = 0;
    func_0x00010007e1e8(&puStack_318,auStack_2f8,&lStack_2c8,2);
    ppuVar2 = (undefined **)&UNK_1109fa4e0;
    ppuVar1 = &puStack_318;
    ppuVar4 = &puStack_318;
    (**(code **)(*plVar18 + 0x18))(plVar18);
    ppuStack_300 = ppuVar1;
    func_0x00010007e5dc(&ppuStack_300);
    lVar17 = 0;
    puVar19 = auStack_2f8;
    puVar5 = puVar13;
    do {
      if ((&cStack_2c9)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2e0 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x30);
  }
  _objc_release(ppuVar12);
  ppuVar8 = ppuVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return ppuVar8;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar12);
  if (cStack_2e1 < '\0') {
    __ZdlPv(auStack_2f8[0]);
  }
  _objc_release(ppuVar12);
  _objc_release(ppuVar10);
  ppuVar9 = ppuVar8;
  __Unwind_Resume();
  pcStack_328 = FUN_107af6674;
  lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_370 = ppuVar6;
  puStack_368 = ppuVar20;
  puStack_360 = ppuVar11;
  ppuStack_358 = ppuVar1;
  puStack_350 = puVar19;
  ppuStack_348 = ppuVar8;
  ppuStack_340 = ppuVar12;
  ppuStack_338 = ppuVar10;
  pppuStack_330 = &pppuStack_290;
  _objc_retain(ppuVar2);
  _objc_retain(ppuVar4);
  _objc_retain(puVar5);
  if (ppuVar9 != (undefined **)0x0) {
    plVar18 = (long *)ppuVar9[1];
    _objc_retain(ppuVar2);
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar1 = (undefined **)&UNK_10f443962;
    }
    else {
      ppuVar1 = ppuVar2;
      _objc_retainAutorelease(ppuVar2);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar2);
    func_0x00010002b838(auStack_3c0,ppuVar1);
    _objc_retain(ppuVar4);
    if (ppuVar4 == (undefined **)0x0) {
      ppuVar1 = (undefined **)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(ppuVar4);
      ppuVar1 = ppuVar4;
      func_0x00010bdc3520(ppuVar4);
    }
    _objc_release(ppuVar4);
    func_0x00010002b838(auStack_3a8,ppuVar1);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar3 = &UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar3 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x00010002b838(auStack_390,puVar3);
    uStack_3e0 = (undefined *)0x0;
    uStack_3d8 = 0;
    uStack_3d0 = 0;
    func_0x00010007e1e8(&uStack_3e0,auStack_3c0,&lStack_378,3);
    (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_1109fa530,&uStack_3e0,ppuVar16);
    puStack_3c8 = (undefined1 *)&uStack_3e0;
    func_0x00010007e5dc(&puStack_3c8);
    lVar17 = 0;
    do {
      if ((&cStack_379)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_390 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
      ppuVar11 = (undefined **)&uStack_3e0;
    } while (lVar17 != -0x48);
  }
  _objc_release(puVar5);
  _objc_release(ppuVar4);
  ppuVar1 = ppuVar2;
  _objc_release(ppuVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_378) {
    ___stack_chk_fail();
    _objc_release(puVar5);
    do {
      ppuVar11 = ppuVar11 + -3;
    } while (ppuVar11 != (undefined **)auStack_3c0);
    _objc_release(puVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar2);
    __Unwind_Resume(ppuVar1);
    return &PTR____CFConstantStringClassReference_110eacd58;
  }
  return ppuVar1;
}



/* Entry: 107af5d60; end: 107af610f;  */

/* WARNING: Removing unreachable block (ram,0x000107af6404) */
/* WARNING: Removing unreachable block (ram,0x000107af60c8) */
/* WARNING: Removing unreachable block (ram,0x000107af68fc) */

undefined **
FUN_107af5d60(long param_1,undefined **param_2,undefined **param_3,undefined *param_4,
             undefined **param_5,undefined *param_6,undefined *param_7)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined8 *puVar17;
  long lVar18;
  long *plVar19;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  undefined8 auStack_320 [3];
  undefined1 auStack_308 [24];
  undefined8 auStack_2f0 [2];
  char cStack_2d9;
  long lStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined **ppuStack_2b8;
  undefined8 *puStack_2b0;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined1 ***pppuStack_290;
  code *pcStack_288;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined **ppuStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined8 *puStack_220;
  undefined **ppuStack_218;
  undefined8 *puStack_210;
  undefined *puStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined1 **ppuStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [3];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined8 auStack_170 [2];
  char cStack_159;
  long lStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined **ppuStack_140;
  undefined *puStack_138;
  undefined8 *puStack_130;
  undefined *puStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [3];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined8 auStack_80 [2];
  char cStack_69;
  long lStack_68;
  
  ppuVar3 = &puStack_100;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = param_2;
  ppuVar9 = param_3;
  puVar2 = param_4;
  ppuVar15 = param_5;
  puVar14 = param_6;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  ppuVar5 = (undefined **)0x0;
  if (param_1 != 0) {
    plVar19 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined **)0x0) {
      ppuVar1 = (undefined **)&UNK_10f443962;
    }
    else {
      ppuVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_e0,ppuVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined **)0x0) {
      ppuVar1 = (undefined **)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(param_3);
      ppuVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_c8,ppuVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar2 = &UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_b0,puVar2);
    _objc_retain(param_5);
    if (param_5 == (undefined **)0x0) {
      ppuVar1 = (undefined **)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(param_5);
      ppuVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_98,ppuVar1);
    _objc_retain(param_6);
    if (param_6 == (undefined *)0x0) {
      puVar2 = &UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(param_6);
      puVar2 = param_6;
      func_0x00010bdc3520(param_6);
    }
    _objc_release(param_6);
    func_0x00010002b838(auStack_80,puVar2);
    puStack_100 = (undefined *)0x0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&puStack_100,auStack_e0,&lStack_68,5);
    ppuVar1 = (undefined **)&UNK_1109fa440;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    puStack_e8 = (undefined1 *)&puStack_100;
    func_0x00010007e5dc(&puStack_e8);
    lVar18 = 0;
    ppuVar5 = (undefined **)auStack_e0;
    ppuVar9 = ppuVar3;
    puVar2 = param_7;
    do {
      if ((&cStack_69)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_80 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x78);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  ppuVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_6);
  ppuVar7 = (undefined **)auStack_e0;
  do {
    ppuVar5 = ppuVar5 + -3;
  } while (ppuVar5 != ppuVar7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  ppuVar4 = ppuVar3;
  __Unwind_Resume();
  pcStack_108 = FUN_107af6110;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar10 = ppuVar1;
  ppuVar12 = ppuVar9;
  puVar6 = puVar2;
  ppuVar16 = ppuVar15;
  puStack_150 = ppuVar7;
  puStack_148 = ppuVar5;
  ppuStack_140 = ppuVar3;
  puStack_138 = param_6;
  puStack_130 = param_5;
  puStack_128 = param_4;
  ppuStack_120 = param_3;
  ppuStack_118 = param_2;
  puStack_110 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar1);
  _objc_retain(ppuVar9);
  _objc_retain(puVar2);
  _objc_retain(ppuVar15);
  if (ppuVar4 != (undefined **)0x0) {
    plVar19 = (long *)ppuVar4[1];
    _objc_retain(ppuVar1);
    if (ppuVar1 == (undefined **)0x0) {
      ppuVar5 = (undefined **)&UNK_10f443962;
    }
    else {
      ppuVar5 = ppuVar1;
      _objc_retainAutorelease(ppuVar1);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar1);
    func_0x00010002b838(auStack_1b8,ppuVar5);
    _objc_retain(ppuVar9);
    if (ppuVar9 == (undefined **)0x0) {
      ppuVar5 = (undefined **)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(ppuVar9);
      ppuVar5 = ppuVar9;
      func_0x00010bdc3520(ppuVar9);
    }
    _objc_release(ppuVar9);
    func_0x00010002b838(auStack_1a0,ppuVar5);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar6 = &UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar6 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_188,puVar6);
    _objc_retain(ppuVar15);
    if (ppuVar15 == (undefined **)0x0) {
      ppuVar7 = (undefined **)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(ppuVar15);
      ppuVar7 = ppuVar15;
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar15);
    func_0x00010002b838(auStack_170,ppuVar7);
    puStack_1d8 = (undefined *)0x0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&puStack_1d8,auStack_1b8,&lStack_158,4);
    ppuVar10 = (undefined **)&UNK_1109fa490;
    ppuVar5 = &puStack_1d8;
    ppuVar12 = &puStack_1d8;
    (**(code **)(*plVar19 + 0x18))(plVar19);
    puStack_1c0 = ppuVar5;
    func_0x00010007e5dc(&puStack_1c0);
    lVar18 = 0;
    puVar6 = puVar14;
    do {
      if ((&cStack_159)[lVar18] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_170 + lVar18));
      }
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != -0x60);
  }
  _objc_release(ppuVar15);
  _objc_release(puVar2);
  _objc_release(ppuVar9);
  ppuVar3 = ppuVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_158) {
    ___stack_chk_fail();
    _objc_release(ppuVar15);
    ppuVar4 = (undefined **)auStack_1b8;
    do {
      ppuVar5 = ppuVar5 + -3;
    } while (ppuVar5 != ppuVar4);
    _objc_release(ppuVar15);
    _objc_release(puVar2);
    _objc_release(ppuVar9);
    _objc_release(ppuVar1);
    ppuVar8 = ppuVar3;
    __Unwind_Resume();
    pcStack_1e8 = FUN_107af6444;
    lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar11 = ppuVar10;
    ppuVar13 = ppuVar12;
    puVar14 = puVar6;
    puStack_220 = ppuVar4;
    ppuStack_218 = ppuVar3;
    puStack_210 = ppuVar15;
    puStack_208 = puVar2;
    ppuStack_200 = ppuVar9;
    ppuStack_1f8 = ppuVar1;
    ppuStack_1f0 = &puStack_110;
    _objc_retain(ppuVar10);
    _objc_retain(ppuVar12);
    puVar17 = (undefined8 *)0x0;
    if (ppuVar8 != (undefined **)0x0) {
      plVar19 = (long *)ppuVar8[1];
      _objc_retain(ppuVar10);
      if (ppuVar10 == (undefined **)0x0) {
        ppuVar1 = (undefined **)&UNK_10f443962;
      }
      else {
        ppuVar1 = ppuVar10;
        _objc_retainAutorelease(ppuVar10);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar10);
      ppuVar4 = (undefined **)auStack_258;
      func_0x00010002b838(auStack_258,ppuVar1);
      _objc_retain(ppuVar12);
      if (ppuVar12 == (undefined **)0x0) {
        ppuVar1 = (undefined **)&UNK_10f443962;
      }
      else {
        _objc_retainAutorelease(ppuVar12);
        ppuVar1 = ppuVar12;
        func_0x00010bdc3520(ppuVar12);
      }
      _objc_release(ppuVar12);
      func_0x00010002b838(auStack_240,ppuVar1);
      puStack_278 = (undefined *)0x0;
      uStack_270 = 0;
      uStack_268 = 0;
      func_0x00010007e1e8(&puStack_278,auStack_258,&lStack_228,2);
      ppuVar11 = (undefined **)&UNK_1109fa4e0;
      ppuVar3 = &puStack_278;
      ppuVar13 = &puStack_278;
      (**(code **)(*plVar19 + 0x18))(plVar19);
      ppuStack_260 = ppuVar3;
      func_0x00010007e5dc(&ppuStack_260);
      lVar18 = 0;
      puVar17 = auStack_258;
      puVar14 = puVar6;
      do {
        if ((&cStack_229)[lVar18] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar18));
        }
        lVar18 = lVar18 + -0x18;
      } while (lVar18 != -0x30);
    }
    _objc_release(ppuVar12);
    ppuVar1 = ppuVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_228) {
      ___stack_chk_fail();
      _objc_release(ppuVar12);
      if (cStack_241 < '\0') {
        __ZdlPv(auStack_258[0]);
      }
      _objc_release(ppuVar12);
      _objc_release(ppuVar10);
      ppuVar9 = ppuVar1;
      __Unwind_Resume();
      pcStack_288 = FUN_107af6674;
      lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_2d0 = ppuVar7;
      puStack_2c8 = ppuVar5;
      puStack_2c0 = ppuVar4;
      ppuStack_2b8 = ppuVar3;
      puStack_2b0 = puVar17;
      ppuStack_2a8 = ppuVar1;
      ppuStack_2a0 = ppuVar12;
      ppuStack_298 = ppuVar10;
      pppuStack_290 = &ppuStack_1f0;
      _objc_retain(ppuVar11);
      _objc_retain(ppuVar13);
      _objc_retain(puVar14);
      if (ppuVar9 != (undefined **)0x0) {
        plVar19 = (long *)ppuVar9[1];
        _objc_retain(ppuVar11);
        if (ppuVar11 == (undefined **)0x0) {
          ppuVar1 = (undefined **)&UNK_10f443962;
        }
        else {
          ppuVar1 = ppuVar11;
          _objc_retainAutorelease(ppuVar11);
          func_0x00010bdc3520();
        }
        _objc_release(ppuVar11);
        func_0x00010002b838(auStack_320,ppuVar1);
        _objc_retain(ppuVar13);
        if (ppuVar13 == (undefined **)0x0) {
          ppuVar1 = (undefined **)&UNK_10f443962;
        }
        else {
          _objc_retainAutorelease(ppuVar13);
          ppuVar1 = ppuVar13;
          func_0x00010bdc3520(ppuVar13);
        }
        _objc_release(ppuVar13);
        func_0x00010002b838(auStack_308,ppuVar1);
        _objc_retain(puVar14);
        if (puVar14 == (undefined *)0x0) {
          puVar2 = &UNK_10f443962;
        }
        else {
          _objc_retainAutorelease(puVar14);
          puVar2 = puVar14;
          func_0x00010bdc3520(puVar14);
        }
        _objc_release(puVar14);
        func_0x00010002b838(auStack_2f0,puVar2);
        uStack_340 = (undefined *)0x0;
        uStack_338 = 0;
        uStack_330 = 0;
        func_0x00010007e1e8(&uStack_340,auStack_320,&lStack_2d8,3);
        (**(code **)(*plVar19 + 0x18))(plVar19,&UNK_1109fa530,&uStack_340,ppuVar16);
        puStack_328 = (undefined1 *)&uStack_340;
        func_0x00010007e5dc(&puStack_328);
        lVar18 = 0;
        do {
          if ((&cStack_2d9)[lVar18] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_2f0 + lVar18));
          }
          lVar18 = lVar18 + -0x18;
          ppuVar4 = (undefined **)&uStack_340;
        } while (lVar18 != -0x48);
      }
      _objc_release(puVar14);
      _objc_release(ppuVar13);
      ppuVar1 = ppuVar11;
      _objc_release(ppuVar11);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2d8) {
        ___stack_chk_fail();
        _objc_release(puVar14);
        do {
          ppuVar4 = ppuVar4 + -3;
        } while (ppuVar4 != (undefined **)auStack_320);
        _objc_release(puVar14);
        _objc_release(ppuVar13);
        _objc_release(ppuVar11);
        __Unwind_Resume(ppuVar1);
        return &PTR____CFConstantStringClassReference_110eacd58;
      }
      return ppuVar1;
    }
    return ppuVar1;
  }
  return ppuVar3;
}



/* Entry: 107af6110; end: 107af6443;  */

/* WARNING: Removing unreachable block (ram,0x000107af6404) */
/* WARNING: Removing unreachable block (ram,0x000107af68fc) */

undefined **
FUN_107af6110(long param_1,undefined **param_2,undefined **param_3,undefined *param_4,
             undefined *param_5,undefined *param_6)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  undefined **ppuVar14;
  undefined **unaff_x25;
  undefined *unaff_x26;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined8 auStack_220 [3];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined **ppuStack_1b8;
  undefined8 *puStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined **ppuStack_160;
  undefined8 auStack_158 [2];
  char cStack_141;
  undefined8 auStack_140 [2];
  char cStack_129;
  long lStack_128;
  undefined8 *puStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 auStack_b8 [3];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = param_2;
  ppuVar7 = param_3;
  puVar2 = param_4;
  puVar10 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_1 != 0) {
    plVar13 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined **)0x0) {
      ppuVar1 = (undefined **)&UNK_10f443962;
    }
    else {
      ppuVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_b8,ppuVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined **)0x0) {
      ppuVar1 = (undefined **)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(param_3);
      ppuVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,ppuVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar2 = &UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_88,puVar2);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      unaff_x26 = &UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(param_5);
      unaff_x26 = param_5;
      func_0x00010bdc3520();
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_70,unaff_x26);
    puStack_d8 = (undefined *)0x0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    func_0x00010007e1e8(&puStack_d8,auStack_b8,&lStack_58,4);
    ppuVar1 = (undefined **)&UNK_1109fa490;
    unaff_x25 = &puStack_d8;
    ppuVar7 = &puStack_d8;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_c0 = unaff_x25;
    func_0x00010007e5dc(&puStack_c0);
    lVar12 = 0;
    puVar2 = param_6;
    do {
      if ((&cStack_59)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x60);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  ppuVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  ppuVar14 = (undefined **)auStack_b8;
  do {
    unaff_x25 = unaff_x25 + -3;
  } while (unaff_x25 != ppuVar14);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  ppuVar4 = ppuVar3;
  __Unwind_Resume();
  pcStack_e8 = FUN_107af6444;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = ppuVar1;
  ppuVar8 = ppuVar7;
  puVar9 = puVar2;
  puStack_120 = ppuVar14;
  ppuStack_118 = ppuVar3;
  puStack_110 = param_5;
  puStack_108 = param_4;
  ppuStack_100 = param_3;
  ppuStack_f8 = param_2;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar1);
  _objc_retain(ppuVar7);
  puVar11 = (undefined8 *)0x0;
  if (ppuVar4 != (undefined **)0x0) {
    plVar13 = (long *)ppuVar4[1];
    _objc_retain(ppuVar1);
    if (ppuVar1 == (undefined **)0x0) {
      ppuVar3 = (undefined **)&UNK_10f443962;
    }
    else {
      ppuVar3 = ppuVar1;
      _objc_retainAutorelease(ppuVar1);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar1);
    ppuVar14 = (undefined **)auStack_158;
    func_0x00010002b838(auStack_158,ppuVar3);
    _objc_retain(ppuVar7);
    if (ppuVar7 == (undefined **)0x0) {
      ppuVar3 = (undefined **)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(ppuVar7);
      ppuVar3 = ppuVar7;
      func_0x00010bdc3520(ppuVar7);
    }
    _objc_release(ppuVar7);
    func_0x00010002b838(auStack_140,ppuVar3);
    puStack_178 = (undefined *)0x0;
    uStack_170 = 0;
    uStack_168 = 0;
    func_0x00010007e1e8(&puStack_178,auStack_158,&lStack_128,2);
    ppuVar6 = (undefined **)&UNK_1109fa4e0;
    ppuVar3 = &puStack_178;
    ppuVar8 = &puStack_178;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    ppuStack_160 = ppuVar3;
    func_0x00010007e5dc(&ppuStack_160);
    lVar12 = 0;
    puVar11 = auStack_158;
    puVar9 = puVar2;
    do {
      if ((&cStack_129)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_140 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != -0x30);
  }
  _objc_release(ppuVar7);
  ppuVar4 = ppuVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar7);
  if (cStack_141 < '\0') {
    __ZdlPv(auStack_158[0]);
  }
  _objc_release(ppuVar7);
  _objc_release(ppuVar1);
  ppuVar5 = ppuVar4;
  __Unwind_Resume();
  pcStack_188 = FUN_107af6674;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1d0 = unaff_x26;
  puStack_1c8 = unaff_x25;
  puStack_1c0 = ppuVar14;
  ppuStack_1b8 = ppuVar3;
  puStack_1b0 = puVar11;
  ppuStack_1a8 = ppuVar4;
  ppuStack_1a0 = ppuVar7;
  ppuStack_198 = ppuVar1;
  ppuStack_190 = &puStack_f0;
  _objc_retain(ppuVar6);
  _objc_retain(ppuVar8);
  _objc_retain(puVar9);
  if (ppuVar5 != (undefined **)0x0) {
    plVar13 = (long *)ppuVar5[1];
    _objc_retain(ppuVar6);
    if (ppuVar6 == (undefined **)0x0) {
      ppuVar1 = (undefined **)&UNK_10f443962;
    }
    else {
      ppuVar1 = ppuVar6;
      _objc_retainAutorelease(ppuVar6);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar6);
    func_0x00010002b838(auStack_220,ppuVar1);
    _objc_retain(ppuVar8);
    if (ppuVar8 == (undefined **)0x0) {
      ppuVar1 = (undefined **)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(ppuVar8);
      ppuVar1 = ppuVar8;
      func_0x00010bdc3520(ppuVar8);
    }
    _objc_release(ppuVar8);
    func_0x00010002b838(auStack_208,ppuVar1);
    _objc_retain(puVar9);
    if (puVar9 == (undefined *)0x0) {
      puVar2 = &UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar2 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x00010002b838(auStack_1f0,puVar2);
    uStack_240 = (undefined *)0x0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x00010007e1e8(&uStack_240,auStack_220,&lStack_1d8,3);
    (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1109fa530,&uStack_240,puVar10);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x00010007e5dc(&puStack_228);
    lVar12 = 0;
    do {
      if ((&cStack_1d9)[lVar12] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar12));
      }
      lVar12 = lVar12 + -0x18;
      ppuVar14 = (undefined **)&uStack_240;
    } while (lVar12 != -0x48);
  }
  _objc_release(puVar9);
  _objc_release(ppuVar8);
  ppuVar1 = ppuVar6;
  _objc_release(ppuVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d8) {
    ___stack_chk_fail();
    _objc_release(puVar9);
    do {
      ppuVar14 = ppuVar14 + -3;
    } while (ppuVar14 != (undefined **)auStack_220);
    _objc_release(puVar9);
    _objc_release(ppuVar8);
    _objc_release(ppuVar6);
    __Unwind_Resume(ppuVar1);
    return &PTR____CFConstantStringClassReference_110eacd58;
  }
  return ppuVar1;
}



/* Entry: 107af6444; end: 107af6673;  */

/* WARNING: Removing unreachable block (ram,0x000107af68fc) */

undefined **
FUN_107af6444(long param_1,undefined **param_2,undefined8 *param_3,undefined *param_4,
             undefined8 param_5)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 *unaff_x24;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined8 auStack_140 [3];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = param_2;
  puVar2 = param_3;
  puVar6 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined **)0x0) {
      ppuVar1 = (undefined **)&UNK_10f443962;
    }
    else {
      ppuVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,ppuVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    ppuVar1 = (undefined **)&UNK_1109fa4e0;
    puVar2 = &uStack_98;
    (**(code **)(*plVar8 + 0x18))(plVar8);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar7 = 0;
    puVar6 = param_4;
    do {
      if ((&cStack_49)[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x30);
  }
  _objc_release(param_3);
  ppuVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_3);
    if (cStack_61 < '\0') {
      __ZdlPv(auStack_78[0]);
    }
    _objc_release(param_3);
    _objc_release(param_2);
    __Unwind_Resume();
    lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(ppuVar1);
    _objc_retain(puVar2);
    _objc_retain(puVar6);
    if (ppuVar3 != (undefined **)0x0) {
      plVar8 = (long *)ppuVar3[1];
      _objc_retain(ppuVar1);
      if (ppuVar1 == (undefined **)0x0) {
        ppuVar3 = (undefined **)&UNK_10f443962;
      }
      else {
        ppuVar3 = ppuVar1;
        _objc_retainAutorelease(ppuVar1);
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar1);
      func_0x00010002b838(auStack_140,ppuVar3);
      _objc_retain(puVar2);
      if (puVar2 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)&UNK_10f443962;
      }
      else {
        _objc_retainAutorelease(puVar2);
        puVar4 = puVar2;
        func_0x00010bdc3520(puVar2);
      }
      _objc_release(puVar2);
      func_0x00010002b838(auStack_128,puVar4);
      _objc_retain(puVar6);
      if (puVar6 == (undefined *)0x0) {
        puVar5 = &UNK_10f443962;
      }
      else {
        _objc_retainAutorelease(puVar6);
        puVar5 = puVar6;
        func_0x00010bdc3520(puVar6);
      }
      _objc_release(puVar6);
      func_0x00010002b838(auStack_110,puVar5);
      uStack_160 = 0;
      uStack_158 = 0;
      uStack_150 = 0;
      func_0x00010007e1e8(&uStack_160,auStack_140,&lStack_f8,3);
      (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1109fa530,&uStack_160,param_5);
      puStack_148 = (undefined1 *)&uStack_160;
      func_0x00010007e5dc(&puStack_148);
      lVar7 = 0;
      do {
        if ((&cStack_f9)[lVar7] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar7));
        }
        lVar7 = lVar7 + -0x18;
        unaff_x24 = &uStack_160;
      } while (lVar7 != -0x48);
    }
    _objc_release(puVar6);
    _objc_release(puVar2);
    ppuVar3 = ppuVar1;
    _objc_release(ppuVar1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
      ___stack_chk_fail();
      _objc_release(puVar6);
      do {
        unaff_x24 = unaff_x24 + -3;
      } while (unaff_x24 != auStack_140);
      _objc_release(puVar6);
      _objc_release(puVar2);
      _objc_release(ppuVar1);
      __Unwind_Resume(ppuVar3);
      return &PTR____CFConstantStringClassReference_110eacd58;
    }
    return ppuVar3;
  }
  return ppuVar3;
}



/* Entry: 107af6674; end: 107af6933;  */

/* WARNING: Removing unreachable block (ram,0x000107af68fc) */

undefined **
FUN_107af6674(long param_1,undefined **param_2,undefined *param_3,undefined *param_4,
             undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *unaff_x24;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined **)0x0) {
      ppuVar1 = (undefined **)&UNK_10f443962;
    }
    else {
      ppuVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,ppuVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar2 = &UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,puVar2);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar2 = &UNK_10f443962;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,puVar2);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_1109fa530,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar3 = 0;
    do {
      if ((&cStack_59)[lVar3] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar3));
      }
      lVar3 = lVar3 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar3 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  ppuVar1 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_4);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_a0);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
    __Unwind_Resume(ppuVar1);
    return &PTR____CFConstantStringClassReference_110eacd58;
  }
  return ppuVar1;
}



/* Entry: 107af6934; end: 107af693f; +[SCDiscoverFeedOperaSubscribeActionHandler announcerIdentifier] */

undefined ** FUN_107af6934(void)

{
  return &PTR____CFConstantStringClassReference_110eacd58;
}



/* Entry: 107af6940; end: 107af6947; -[SCDiscoverFeedOperaSubscribeActionHandler addListener:] */

void FUN_107af6940(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 107af6948; end: 107af694f; -[SCDiscoverFeedOperaSubscribeActionHandler removeListener:] */

void FUN_107af6948(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 107af6950; end: 107af6bbf; -[SCDiscoverFeedOperaSubscribeActionHandler initWithSnapchattersDataTracker:creatorSettingsFetcher:creatorSettingsMutator:snapchattersDataFetcher:snapchattersDataMutator:snapchattersSynchronousDataFetcher:discoverFeedDataSource:discoverFeedDataMutator:discoverFeedEventsController:discoverFeedInteractionHistoryManager:] */

undefined8 *
FUN_107af6950(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
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
  puStack_68 = PTR_PTR_1126f9cc8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar3);
    uVar3 = puVar1[2];
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = puVar1[9];
    puVar1[9] = param_9;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar3 = puVar1[10];
    puVar1[10] = param_10;
    _objc_release(uVar3);
    _objc_retain(param_11);
    uVar3 = puVar1[0xb];
    puVar1[0xb] = param_11;
    _objc_release(uVar3);
    _objc_retain(param_12);
    uVar3 = puVar1[0xc];
    puVar1[0xc] = param_12;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126d52d0;
    _objc_alloc();
    func_0x00010c006a60();
    uVar3 = puVar1[8];
    puVar1[8] = puVar2;
    _objc_release(uVar3);
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



/* Entry: 107af6bc0; end: 107af6e5b; -[SCDiscoverFeedOperaSubscribeActionHandler handleActionWithSender:actionModel:fromSourceView:] */

ulong FUN_107af6bc0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) goto LAB_107af6e34;
  uVar3 = param_4;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d5a70;
  _objc_opt_class(PTR_PTR_1126d5a70);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  if (uVar1 != 0) {
    uVar5 = uVar3;
    func_0x00010c258f40();
    _objc_retainAutoreleasedReturnValue();
    if (uVar5 != 0) {
      uVar6 = uVar3;
      func_0x00010c258f40();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c25b720();
      if (uVar7 == 3) {
        _objc_release(uVar6);
        _objc_release(uVar5);
      }
      else {
        uVar7 = uVar3;
        func_0x00010c258f40();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c25b720();
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar5);
        if (uVar8 != 0xe) goto LAB_107af6dbc;
      }
      uVar5 = uVar3;
      func_0x00010c2600a0();
      uVar11 = 6;
      if ((int)uVar5 == 0) {
        uVar11 = 7;
      }
      uVar9 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010c269d40(uVar9);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = param_1;
      _objc_opt_class(param_1);
      func_0x00010bf04780();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c258f40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1561c0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      FUN_107cb507c(uVar11,uVar5,uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7dbc0(uVar9);
      _objc_release(uVar11);
      _objc_release(uVar3);
      _objc_release(uVar5);
      _objc_release(lVar10);
      _objc_release(uVar9);
    }
  }
LAB_107af6dbc:
  uVar3 = uVar1;
  func_0x00010c258f40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2600a0(uVar1);
  uVar5 = uVar1;
  func_0x00010c1561c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfa4340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bea81a0(param_1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar1);
LAB_107af6e34:
  _objc_release(param_4);
  return uVar2;
}



/* Entry: 107af6e5c; end: 107af734b; -[SCDiscoverFeedOperaSubscribeActionHandler _setSubscribeStateForStory:subscribeState:feedType:] */

void FUN_107af6e5c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar14 = param_3;
  FUN_107c040bc(param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = (uint)param_4;
  lVar1 = param_3;
  FUN_107c040bc(param_3,uVar16 ^ 1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_78 = lVar14;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed5460(param_1);
  _objc_release(puVar2);
  _objc_initWeak(auStack_80,param_1);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_107af734c;
  puStack_98 = &UNK_110841fb0;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(lVar1);
  ppuVar3 = &puStack_b0;
  lStack_90 = lVar1;
  _objc_retainBlock(ppuVar3);
  lVar4 = param_3;
  func_0x00010c25b720();
  if (lVar4 == 3) {
    lVar4 = param_3;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010afef4dc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    if (lVar5 != 0) {
      func_0x00010c12ff60(PTR_PTR_1126c55c0);
      if (uVar16 == 0) {
        func_0x00010c282b20(param_1);
      }
      else {
        func_0x00010c260280(param_1);
      }
    }
  }
  else {
    lVar4 = param_3;
    func_0x00010c25b720();
    if (lVar4 != 0xe) {
      lVar4 = param_3;
      func_0x00010c25b720();
      if (lVar4 == 2) {
        uVar15 = *(undefined8 *)(param_1 + 0x60);
        func_0x00010c269d40(uVar15);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_3;
        func_0x000107bfa524(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c28a8c0(uVar15);
        _objc_release(lVar4);
        _objc_release(uVar15);
      }
      func_0x00010bec8620(param_1);
      goto LAB_107af7298;
    }
    lVar4 = param_3;
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010afefd10();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    if (lVar5 != 0) {
      puVar2 = PTR_PTR_1126d5b88;
      _objc_alloc();
      lVar4 = lVar5;
      func_0x00010c245680();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar5;
      func_0x00010bfe8d80();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar5;
      func_0x00010c26e100();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar5;
      func_0x00010c26e300();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar5;
      func_0x00010c291e80();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar5;
      func_0x00010c291e80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c078f60();
      func_0x00010c078f60();
      func_0x00010c0e1a60();
      func_0x00010c073320();
      func_0x00010c2768e0();
      lVar12 = lVar5;
      func_0x00010bf24ec0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04a200(0x7ff8000000000000,0x7ff8000000000000,puVar2);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar4);
      func_0x00010c130020(PTR_PTR_1126c55c0);
      if (uVar16 == 0) {
        func_0x00010c282b20(param_1);
      }
      else {
        func_0x00010c260280(param_1);
      }
      _objc_release(puVar2);
    }
  }
  _objc_release(lVar5);
LAB_107af7298:
  _objc_release(ppuVar3);
  _objc_release(lStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(lVar1);
  _objc_release(lVar14);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar2;
  func_0x00010bed5460(param_3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  uVar15 = *(undefined8 *)(param_3 + 0x50);
  _objc_retain(puVar13);
  func_0x00010c269d40(uVar15);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28a480();
  _objc_release(puVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar15);
  return;
}



/* Entry: 107af734c; end: 107af73eb;  */

void FUN_107af734c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_30,1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bed5460(lVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = *(undefined8 *)(lVar1 + 0x50);
  _objc_retain(puVar3);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28a480();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 107af73ec; end: 107af743b; -[SCDiscoverFeedOperaSubscribeActionHandler _updateCheetahStoriesInDataStore:] */

void FUN_107af73ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28a480();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107af743c; end: 107af744f; -[SCDiscoverFeedOperaSubscribeActionHandler subscribeToCheetahStory:successCompletion:failureCompletion:] */

void FUN_107af743c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec8630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__subscribeToStory_shouldSubscrib_11258fb30,param_3,1,3,param_4,param_5);
  return;
}



/* Entry: 107af7450; end: 107af7463; -[SCDiscoverFeedOperaSubscribeActionHandler unsubscribeToCheetahStory:successCompletion:failureCompletion:] */

void FUN_107af7450(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec8630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__subscribeToStory_shouldSubscrib_11258fb30,param_3,0,3,param_4,param_5);
  return;
}



/* Entry: 107af7464; end: 107af755f; -[SCDiscoverFeedOperaSubscribeActionHandler _subscribeToStory:shouldSubscribe:interactionContext:successCompletion:failureCompletion:] */

void FUN_107af7464(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107af7560;
  puStack_50 = &UNK_110842508;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x107af7574;
  puStack_78 = &UNK_11097ef80;
  uStack_70 = param_7;
  uStack_48 = param_6;
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010c260180(uVar1,param_2,param_3,param_4,1,&puStack_68,&puStack_90,param_5,0);
  _objc_release(uStack_70);
  _objc_release(uStack_48);
  _objc_release(param_7);
  _objc_release(param_6);
  return;
}



/* Entry: 107af7560; end: 107af7587;  */

void FUN_107af7560(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107af756c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 107af7588; end: 107af7597; -[SCDiscoverFeedOperaSubscribeActionHandler subscribeToPublisher:successCompletion:failureCompletion:] */

void FUN_107af7588(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9ec30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__sendCheetahSubscribeRequestForP_1125854b0,param_3,1,param_4,param_5);
  return;
}



/* Entry: 107af7598; end: 107af75a7; -[SCDiscoverFeedOperaSubscribeActionHandler unsubscribeToPublisher:successCompletion:failureCompletion:] */

void FUN_107af7598(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9ec30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__sendCheetahSubscribeRequestForP_1125854b0,param_3,0,param_4,param_5);
  return;
}



/* Entry: 107af75a8; end: 107af75b7; -[SCDiscoverFeedOperaSubscribeActionHandler subscribeToPublicUser:successCompletion:failureCompletion:] */

void FUN_107af75a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee1390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateSubscribeStateForPublicUs_112595e88,param_3,1,param_4,param_5);
  return;
}



/* Entry: 107af75b8; end: 107af75c7; -[SCDiscoverFeedOperaSubscribeActionHandler unsubscribeToPublicUser:successCompletion:failureCompletion:] */

void FUN_107af75b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee1390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateSubscribeStateForPublicUs_112595e88,param_3,0,param_4,param_5);
  return;
}



/* Entry: 107af75c8; end: 107af75d7; -[SCDiscoverFeedOperaSubscribeActionHandler subscribeToPublicUserStory:successCompletion:failureCompletion:] */

void FUN_107af75c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee13b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateSubscribeStateForPublicUs_112595e90,param_3,1,param_4,param_5);
  return;
}



/* Entry: 107af75d8; end: 107af75e7; -[SCDiscoverFeedOperaSubscribeActionHandler unsubscribeToPublicUserStory:successCompletion:failureCompletion:] */

void FUN_107af75d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee13b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateSubscribeStateForPublicUs_112595e90,param_3,0,param_4,param_5);
  return;
}



/* Entry: 107af75e8; end: 107af779f; -[SCDiscoverFeedOperaSubscribeActionHandler _sendCheetahSubscribeRequestForPublisher:shouldSubscribe:successCompletion:failureCompletion:] */

void FUN_107af75e8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 uVar6;
  
  _objc_retain(in_x4);
  _objc_retain(in_x5);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b4028;
  func_0x00010bf81ac0(PTR_PTR_1126b4028);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(in_x4);
  uVar4 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(in_x5);
  uVar5 = 0;
  func_0x0001000819a8(0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f9280(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(in_x5);
  _objc_release(in_x4);
  _objc_release(in_x5);
  _objc_release(in_x4);
  return;
}



/* Entry: 107af77a0; end: 107af77c7;  */

void FUN_107af77a0(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107af77ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 107af77c8; end: 107af7acb; -[SCDiscoverFeedOperaSubscribeActionHandler _updateSubscribeStateForPublicUser:shouldSubscribe:successCompletion:failureCompletion:] */

void FUN_107af77c8(long param_1,undefined8 param_2,undefined8 param_3,byte param_4,long param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  byte bStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  byte bStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(ulong *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0ee940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    uVar1 = uVar2;
    func_0x00010c06d560();
    if ((uVar1 & 1) == 0) goto LAB_107af7a60;
  }
  else {
    _objc_release();
  }
  if ((param_4 & 1) == 0) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5);
    }
    _objc_initWeak(auStack_68,param_1);
    puVar4 = PTR_PTR_1126ae5c0;
    func_0x00010bf6ce00(PTR_PTR_1126ae5c0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_107af7acc;
    puStack_90 = &UNK_1109fa7f0;
    ppuVar6 = &puStack_a8;
    _objc_copyWeak(auStack_78,auStack_68);
    bStack_70 = param_4;
    _objc_retain(param_5);
    lStack_88 = param_5;
    _objc_retain(param_6);
    uStack_80 = param_6;
    func_0x00010bf6be60(uVar3);
    _objc_release(uVar3);
    _objc_release(uStack_80);
    lVar5 = lStack_88;
  }
  else {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5);
    }
    _objc_initWeak(auStack_68,param_1);
    puVar4 = PTR_PTR_1126ae5c0;
    func_0x00010befca80(PTR_PTR_1126ae5c0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    uStack_d8 = 0x107af7b1c;
    puStack_d0 = &UNK_1109fa820;
    ppuVar6 = &puStack_e8;
    _objc_copyWeak(auStack_b8,auStack_68);
    bStack_b0 = param_4;
    _objc_retain(param_5);
    lStack_c8 = param_5;
    _objc_retain(param_6);
    uStack_c0 = param_6;
    func_0x00010bef8a80(uVar3);
    _objc_release(uVar3);
    _objc_release(uStack_c0);
    lVar5 = lStack_c8;
  }
  _objc_release(lVar5);
  _objc_destroyWeak(ppuVar6 + 6);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_68);
LAB_107af7a60:
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 107af7acc; end: 107af7b6b;  */

void FUN_107af7acc(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be31460(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107af7b6c; end: 107af7d0b; -[SCDiscoverFeedOperaSubscribeActionHandler _updateSubscribeStateForPublicUserStory:shouldSubscribe:successCompletion:failureCompletion:] */

void FUN_107af7b6c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_68,auStack_58);
  uStack_60 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c2448c0(uVar1);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 107af7d0c; end: 107af7f1b;  */

void FUN_107af7d0c(long param_1,undefined *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_2);
  if (param_2 == (undefined *)0x0) {
    param_2 = PTR_PTR_1126b15c8;
    _objc_alloc(PTR_PTR_1126b15c8);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c2923e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c292e20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07a6a0(*(undefined8 *)(param_1 + 0x20));
    puVar4 = PTR_PTR_1126b14b8;
    _objc_alloc(PTR_PTR_1126b14b8);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf1ade0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff7be0(puVar4);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf24ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c292e20();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c292e20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05c0e0(param_2);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(puVar4);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee13c0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107af7f1c; end: 107af8207; -[SCDiscoverFeedOperaSubscribeActionHandler _updateSubscribeStateForSnapchatter:shouldSubscribe:successCompletion:failureCompletion:] */

void FUN_107af7f1c(long param_1,undefined8 param_2,long param_3,byte param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  byte bStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  byte bStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126c55c0;
  func_0x00010c130160();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  if ((param_4 & 1) == 0) {
    _objc_release();
    if (lVar2 == 0) {
      if (param_5 != 0) {
        (**(code **)(param_5 + 0x10))(param_5);
      }
      goto LAB_107af8188;
    }
    puVar4 = PTR_PTR_1126ae5c0;
    func_0x00010bf6ce00(PTR_PTR_1126ae5c0);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_68,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_107af8208;
    puStack_90 = &UNK_1109fa7f0;
    ppuVar5 = &puStack_a8;
    _objc_copyWeak(auStack_78,auStack_68);
    bStack_70 = param_4;
    _objc_retain(param_5);
    lStack_88 = param_5;
    _objc_retain(param_6);
    uStack_80 = param_6;
    func_0x00010bf6be60(uVar3);
    _objc_release(uVar3);
    _objc_release(uStack_80);
    lVar2 = lStack_88;
  }
  else {
    _objc_release();
    if ((param_5 != 0) && (lVar2 != 0)) {
      (**(code **)(param_5 + 0x10))(param_5);
    }
    puVar4 = PTR_PTR_1126ae5c0;
    func_0x00010befca80(PTR_PTR_1126ae5c0);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_68,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    uStack_d8 = 0x107af8250;
    puStack_d0 = &UNK_1109fa820;
    ppuVar5 = &puStack_e8;
    _objc_copyWeak(auStack_b8,auStack_68);
    bStack_b0 = param_4;
    _objc_retain(param_5);
    lStack_c8 = param_5;
    _objc_retain(param_6);
    uStack_c0 = param_6;
    func_0x00010bef8a80(uVar3);
    _objc_release(uVar3);
    _objc_release(uStack_c0);
    lVar2 = lStack_c8;
  }
  _objc_release(lVar2);
  _objc_destroyWeak(ppuVar5 + 6);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar4);
LAB_107af8188:
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 107af8208; end: 107af8297;  */

void FUN_107af8208(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be31460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107af8298; end: 107af8347; -[SCDiscoverFeedOperaSubscribeActionHandler _handleSubscribeResponseShouldSubscribe:success:successCompletion:failureCompletion:] */

void FUN_107af8298(undefined8 param_1,undefined8 param_2,int param_3,ulong param_4,long param_5,
                  long param_6)

{
  long lVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_5;
  if ((param_4 & 1) == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110eacd78;
    if (param_3 == 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110eacd98;
    }
    func_0x00010bcbeaa8(ppuVar2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c237520(PTR_PTR_1126afca8);
    _objc_release(ppuVar2);
    lVar1 = param_6;
  }
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))();
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 107af8348; end: 107af848f; -[SCDiscoverFeedOperaSubscribeActionHandler _didBlockFriend:] */

void FUN_107af8348(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_1 + 0x48);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c25bca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar4);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_40 = lVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_40,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12e600(uVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x000107bfa524(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2864e0(uVar2,param_2,lVar4,0);
    _objc_release(lVar4);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 107af8490; end: 107af8493; -[SCDiscoverFeedOperaSubscribeActionHandler didStartSnapchattersUpdateDataRequest:] */

void FUN_107af8490(void)

{
  return;
}



/* Entry: 107af8494; end: 107af85af; -[SCDiscoverFeedOperaSubscribeActionHandler didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_107af8494(undefined8 param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5
                  )

{
  long lVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf0a560();
  _objc_retainAutoreleasedReturnValue();
  if ((param_4 != 0) && (lVar1 != 0)) {
    _objc_initWeak(auStack_48,param_1);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_107af85b0;
    puStack_60 = &UNK_110841fb0;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(lVar1);
    lStack_58 = lVar1;
    func_0x0001000d76cc("APPSTORE",&puStack_78);
    _objc_release(lStack_58);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 107af85b0; end: 107af8623;  */

void FUN_107af85b0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c244280(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfc4e0(lVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107af8624; end: 107af863b; -[SCDiscoverFeedOperaSubscribeActionHandler presentingViewController] */

void FUN_107af8624(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107af863c; end: 107af8647; -[SCDiscoverFeedOperaSubscribeActionHandler setPresentingViewController:] */

void FUN_107af863c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x68,param_3);
  return;
}



/* Entry: 107af8648; end: 107af86f7; -[SCDiscoverFeedOperaSubscribeActionHandler .cxx_destruct] */

void FUN_107af8648(long param_1)

{
  _objc_destroyWeak(param_1 + 0x68);
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



/* Entry: 107af86f8; end: 107af879f; -[SCDiscoverFeedStoryNotificationOptInStatusHandler initWithStoryDedupeFp:discoverFeedDataFetcher:] */

undefined1 *
FUN_107af86f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f9cd0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc780();
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107af87a0; end: 107af87ef; -[SCDiscoverFeedStoryNotificationOptInStatusHandler setCallbackForStoryUpdate:] */

void FUN_107af87a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retainBlock();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010becfb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__triggerCallbackBasedOnDedupeFp__112591868,
               *(undefined8 *)(param_1 + 0x10));
    return;
  }
  return;
}



/* Entry: 107af87f0; end: 107af8803; -[SCDiscoverFeedStoryNotificationOptInStatusHandler didUpdateWithAnnouncerIdentifier:] */

void FUN_107af87f0(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010becfb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__triggerCallbackBasedOnDedupeFp__112591868,
               *(undefined8 *)(param_1 + 0x10));
    return;
  }
  return;
}


