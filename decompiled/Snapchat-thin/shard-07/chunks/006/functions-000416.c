/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1057a0738; end: 1057a073f; -[SCCommerceShowcaseFetcher grapheneNetworkLogger] */

undefined8 FUN_1057a0738(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1057a0740; end: 1057a076f; -[SCCommerceShowcaseFetcher setGrapheneNetworkLogger:] */

void FUN_1057a0740(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057a0770; end: 1057a0777; -[SCCommerceShowcaseFetcher showcaseGRPCService] */

undefined8 FUN_1057a0770(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1057a0778; end: 1057a07a7; -[SCCommerceShowcaseFetcher setShowcaseGRPCService:] */

void FUN_1057a0778(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1057a07a8; end: 1057a07af; -[SCCommerceShowcaseFetcher countryCodeProvider] */

undefined8 FUN_1057a07a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1057a07b0; end: 1057a07df; -[SCCommerceShowcaseFetcher setCountryCodeProvider:] */

void FUN_1057a07b0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1057a07e0; end: 1057a07e7; -[SCCommerceShowcaseFetcher configProvider] */

undefined8 FUN_1057a07e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1057a07e8; end: 1057a0817; -[SCCommerceShowcaseFetcher setConfigProvider:] */

void FUN_1057a07e8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1057a0818; end: 1057a085f; -[SCCommerceShowcaseFetcher .cxx_destruct] */

void FUN_1057a0818(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057a0860; end: 1057a08d3; -[UNIShowcaseGrpcService initWithUnifiedGrpcService:] */

undefined1 * FUN_1057a0860(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea370;
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



/* Entry: 1057a08d4; end: 1057a09b7; -[UNIShowcaseGrpcService getShowcaseWithRequest:callOptionsBuilder:handler:] */

void FUN_1057a08d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126be2a0;
  _objc_opt_class(PTR_PTR_1126be2a0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e01278,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057a09b8; end: 1057a0a9b; -[UNIShowcaseGrpcService getItemDetailPageWithRequest:callOptionsBuilder:handler:] */

void FUN_1057a09b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126be2a8;
  _objc_opt_class(PTR_PTR_1126be2a8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e01298,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057a0a9c; end: 1057a0b7f; -[UNIShowcaseGrpcService getItemRecommendationsWithRequest:callOptionsBuilder:handler:] */

void FUN_1057a0a9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126be2b0;
  _objc_opt_class(PTR_PTR_1126be2b0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e012b8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057a0b80; end: 1057a0c63; -[UNIShowcaseGrpcService getItemVariantDataWithRequest:callOptionsBuilder:handler:] */

void FUN_1057a0b80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126be2b8;
  _objc_opt_class(PTR_PTR_1126be2b8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e012d8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057a0c64; end: 1057a0d47; -[UNIShowcaseGrpcService getStoresForUserWithRequest:callOptionsBuilder:handler:] */

void FUN_1057a0c64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126be2c0;
  _objc_opt_class(PTR_PTR_1126be2c0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e012f8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057a0d48; end: 1057a0e2b; -[UNIShowcaseGrpcService getStoreMetadataWithRequest:callOptionsBuilder:handler:] */

void FUN_1057a0d48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126be2c8;
  _objc_opt_class(PTR_PTR_1126be2c8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e01318,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057a0e2c; end: 1057a0f0f; -[UNIShowcaseGrpcService getSizeRecommendationsWithRequest:callOptionsBuilder:handler:] */

void FUN_1057a0e2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126be2d0;
  _objc_opt_class(PTR_PTR_1126be2d0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e01338,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057a0f10; end: 1057a0ff3; -[UNIShowcaseGrpcService getCommercePageWithRequest:callOptionsBuilder:handler:] */

void FUN_1057a0f10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126be2d8;
  _objc_opt_class(PTR_PTR_1126be2d8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e01358,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057a0ff4; end: 1057a0fff; -[UNIShowcaseGrpcService .cxx_destruct] */

void FUN_1057a0ff4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057a1000; end: 1057a1067; +[GetItemDetailPageRequest descriptor] */

void FUN_1057a1000(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0470 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a66ed0,
                        &PTR____CFConstantStringClassReference_110e01378,&PTR_DAT_1130fe268,
                        &PTR_DAT_1130fe280,3,0x20,0x1c);
    puRam00000001136c0470 = puVar1;
  }
  return;
}



/* Entry: 1057a1068; end: 1057a10cf; +[GetItemVariantDataRequest descriptor] */

void FUN_1057a1068(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0478 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a66f70,
                        &PTR____CFConstantStringClassReference_110e01398,&PTR_DAT_1130fe2e0,
                        &PTR_s_deviceContext_1130fe2f8,2,0x18,0x1c);
    puRam00000001136c0478 = puVar1;
  }
  return;
}



/* Entry: 1057a10d0; end: 1057a1137; +[GetShowcaseRequest descriptor] */

void FUN_1057a10d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0480 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a67010,
                        &PTR____CFConstantStringClassReference_110e013b8,&PTR_DAT_1130fe338,
                        &PTR_DAT_1130fe350,6,0x30,0x1c);
    puRam00000001136c0480 = puVar1;
  }
  return;
}



/* Entry: 1057a1138; end: 1057a119f; +[UserContext descriptor] */

void FUN_1057a1138(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0488 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a670b0,
                        &PTR____CFConstantStringClassReference_110e00498,&PTR_DAT_1130fe410,
                        &PTR_DAT_1130fe428,1,0x10,0x1c);
    puRam00000001136c0488 = puVar1;
  }
  return;
}



/* Entry: 1057a11a0; end: 1057a1207; +[GetSizeRecommendationsRequest descriptor] */

void FUN_1057a11a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0490 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a67150,
                        &PTR____CFConstantStringClassReference_110e013d8,&PTR_DAT_1130fe448,
                        &PTR_s_snapItemId_1130fe460,3,0x20,0x1c);
    puRam00000001136c0490 = puVar1;
  }
  return;
}



/* Entry: 1057a1208; end: 1057a126f; +[GetStoreMetadataRequest descriptor] */

void FUN_1057a1208(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0498 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a671f0,
                        &PTR____CFConstantStringClassReference_110e013f8,&PTR_DAT_1130fe4c0,
                        &PTR_s_storeId_1130fe4d8,1,0x10,0x1c);
    puRam00000001136c0498 = puVar1;
  }
  return;
}



/* Entry: 1057a1270; end: 1057a12d7; +[GetStoresForUserRequest descriptor] */

void FUN_1057a1270(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c04a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a67290,
                        &PTR____CFConstantStringClassReference_110e01418,&PTR_DAT_1130fe4f8,0,0,4,
                        0x1c);
    puRam00000001136c04a0 = puVar1;
  }
  return;
}



/* Entry: 1057a12d8; end: 1057a1363; +[GetCommercePageResponse descriptor] */

undefined * FUN_1057a12d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c04a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a67330,
                        &PTR____CFConstantStringClassReference_110e01438,&PTR_DAT_1130fe518,
                        &PTR_s_requestId_1130fe530,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136c04a8 = puVar1;
  }
  return puRam00000001136c04a8;
}



/* Entry: 1057a1364; end: 1057a1447; +[CommercePage descriptor] */

void FUN_1057a1364(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c04b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a673d0,
                        &PTR____CFConstantStringClassReference_110e01458,&PTR_DAT_1130fe590,
                        &PTR_DAT_1130fe5a8,4,0x20,0x1c);
    puRam00000001136c04b0 = puVar1;
  }
  return;
}



/* Entry: 1057a1448; end: 1057a1453;  */

bool FUN_1057a1448(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 1057a1454; end: 1057a14df; +[CommercePageWidget descriptor] */

undefined * FUN_1057a1454(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c04c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a674c0,
                        &PTR____CFConstantStringClassReference_110e01498,&PTR_DAT_1130fe630,
                        &PTR_DAT_1130fe648,10,0x58,0x1c);
    func_0x00010c229040();
    puRam00000001136c04c0 = puVar1;
  }
  return puRam00000001136c04c0;
}



/* Entry: 1057a14e0; end: 1057a155b;  */

undefined * FUN_1057a14e0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c04c8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e014b8,
                        &UNK_10ddbd8b4,&UNK_10ddbd968,6,FUN_1057a155c,0);
    do {
      if (puRam00000001136c04c8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c04c8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c04c8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c04c8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c04c8;
}



/* Entry: 1057a155c; end: 1057a1567;  */

bool FUN_1057a155c(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 1057a1568; end: 1057a15cf; +[FitProfilePreferencesWidget descriptor] */

void FUN_1057a1568(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c04d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a675b0,
                        &PTR____CFConstantStringClassReference_110e014d8,&PTR_DAT_1130fe788,0,0,4,
                        0x1c);
    puRam00000001136c04d0 = puVar1;
  }
  return;
}



/* Entry: 1057a15d0; end: 1057a1637; +[RecentlyViewedPreferencesWidget descriptor] */

void FUN_1057a15d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c04d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a67650,
                        &PTR____CFConstantStringClassReference_110e014f8,&PTR_DAT_1130fe7a0,0,0,4,
                        0x1c);
    puRam00000001136c04d8 = puVar1;
  }
  return;
}



/* Entry: 1057a1638; end: 1057a169f; +[ShoppingHubWidget descriptor] */

void FUN_1057a1638(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c04e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a676f0,
                        &PTR____CFConstantStringClassReference_110e01518,&PTR_DAT_1130fe7b8,
                        &PTR_DAT_1130fe7d0,1,8,0x1c);
    puRam00000001136c04e0 = puVar1;
  }
  return;
}



/* Entry: 1057a16a0; end: 1057a1783; +[TryOnPreferencesWidget descriptor] */

void FUN_1057a16a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c04e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a67790,
                        &PTR____CFConstantStringClassReference_110e01538,&PTR_DAT_1130fe7f0,0,0,4,
                        0x1c);
    puRam00000001136c04e8 = puVar1;
  }
  return;
}



/* Entry: 1057a1784; end: 1057a178f;  */

bool FUN_1057a1784(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1057a1790; end: 1057a17f7; +[CommerceItemWidget descriptor] */

void FUN_1057a1790(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c04f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a67830,
                        &PTR____CFConstantStringClassReference_110e01578,&PTR_DAT_1130fe808,
                        &PTR_s_header_1130fe880,4,0x20,0x1c);
    puRam00000001136c04f8 = puVar1;
  }
  return;
}



/* Entry: 1057a17f8; end: 1057a185f; +[CommerceItemWidgetHeader descriptor] */

void FUN_1057a17f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0500 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a67880,
                        &PTR____CFConstantStringClassReference_110e01598,&PTR_DAT_1130fe808,
                        &PTR_s_title_1130fe820,3,0x20,0x1c);
    puRam00000001136c0500 = puVar1;
  }
  return;
}



/* Entry: 1057a1860; end: 1057a18c7; +[CommerceTabWidget descriptor] */

void FUN_1057a1860(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0508 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a67920,
                        &PTR____CFConstantStringClassReference_110e015b8,&PTR_DAT_1130fe900,
                        &PTR_DAT_1130fe918,1,0x10,0x1c);
    puRam00000001136c0508 = puVar1;
  }
  return;
}



/* Entry: 1057a18c8; end: 1057a192f; +[CommerceTab descriptor] */

void FUN_1057a18c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0510 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a67970,
                        &PTR____CFConstantStringClassReference_110e015d8,&PTR_DAT_1130fe900,
                        &PTR_s_title_1130fe938,2,0x18,0x1c);
    puRam00000001136c0510 = puVar1;
  }
  return;
}



/* Entry: 1057a1930; end: 1057a1997; +[LookBuilderCategoryWidget descriptor] */

void FUN_1057a1930(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0518 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a67a10,
                        &PTR____CFConstantStringClassReference_110e015f8,&PTR_DAT_1130fe978,
                        &PTR_s_action_1130fe9d0,3,0x18,0x1c);
    puRam00000001136c0518 = puVar1;
  }
  return;
}



/* Entry: 1057a1998; end: 1057a1a7b; +[LensInfo descriptor] */

void FUN_1057a1998(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0520 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a67a60,
                        &PTR____CFConstantStringClassReference_110e01618,&PTR_DAT_1130fe978,
                        &PTR_s_unlockableId_1130fe990,2,0x18,0x1c);
    puRam00000001136c0520 = puVar1;
  }
  return;
}



/* Entry: 1057a1a7c; end: 1057a1a87;  */

bool FUN_1057a1a7c(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 1057a1a88; end: 1057a1b13; +[CommerceAction descriptor] */

undefined * FUN_1057a1a88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0530 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a67b50,
                        &PTR____CFConstantStringClassReference_110e01658,&PTR_DAT_1130fea40,
                        &PTR_s_deeplink_1130fea58,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001136c0530 = puVar1;
  }
  return puRam00000001136c0530;
}



/* Entry: 1057a1b14; end: 1057a1b9f; +[PageNavigation descriptor] */

undefined * FUN_1057a1b14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0538 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a67ba0,
                        &PTR____CFConstantStringClassReference_110e01678,&PTR_DAT_1130fea40,
                        &PTR_DAT_1130fea98,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136c0538 = puVar1;
  }
  return puRam00000001136c0538;
}



/* Entry: 1057a1ba0; end: 1057a1c07; +[CommercePageMetricsMetadata descriptor] */

void FUN_1057a1ba0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0540 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a67bf0,
                        &PTR____CFConstantStringClassReference_110e01698,&PTR_DAT_1130fea40,
                        &PTR_DAT_1130feaf8,4,0x28,0x1c);
    puRam00000001136c0540 = puVar1;
  }
  return;
}



/* Entry: 1057a1c08; end: 1057a1ceb; +[GetCommercePageRequest descriptor] */

void FUN_1057a1c08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0548 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a67c90,
                        &PTR____CFConstantStringClassReference_110e016b8,&PTR_DAT_1130feb78,
                        &PTR_DAT_1130feb90,3,0x18,0x1c);
    puRam00000001136c0548 = puVar1;
  }
  return;
}



/* Entry: 1057a1cec; end: 1057a1cf7;  */

bool FUN_1057a1cec(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 1057a1cf8; end: 1057a1d5f; +[CommercePageContext descriptor] */

void FUN_1057a1cf8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0558 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a67d80,
                        &PTR____CFConstantStringClassReference_110e016f8,&PTR_DAT_1130febf8,
                        &PTR_DAT_1130fec50,2,0x18,0x1c);
    puRam00000001136c0558 = puVar1;
  }
  return;
}



/* Entry: 1057a1d60; end: 1057a1deb; +[CommerceContextInternal descriptor] */

undefined * FUN_1057a1d60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0560 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a67dd0,
                        &PTR____CFConstantStringClassReference_110e01718,&PTR_DAT_1130febf8,
                        &PTR_DAT_1130fec10,1,0x10,0x1c);
    func_0x00010c229040();
    puRam00000001136c0560 = puVar1;
  }
  return puRam00000001136c0560;
}



/* Entry: 1057a1dec; end: 1057a1e53; +[CommerceTabInternal descriptor] */

void FUN_1057a1dec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0568 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a67e20,
                        &PTR____CFConstantStringClassReference_110e01738,&PTR_DAT_1130febf8,
                        &PTR_DAT_1130fec30,1,0x10,0x1c);
    puRam00000001136c0568 = puVar1;
  }
  return;
}



/* Entry: 1057a1e54; end: 1057a1ebb; +[GetItemRecommendationsRequest descriptor] */

void FUN_1057a1e54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0570 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a67ec0,
                        &PTR____CFConstantStringClassReference_110e01758,&PTR_DAT_1130fec90,
                        &PTR_DAT_1130feca8,5,0x28,0x1c);
    puRam00000001136c0570 = puVar1;
  }
  return;
}



/* Entry: 1057a1ebc; end: 1057a1f47; +[GetItemRecommendationsResponse descriptor] */

undefined * FUN_1057a1ebc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0578 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a67f60,
                        &PTR____CFConstantStringClassReference_110e01778,&PTR_DAT_1130fed50,
                        &PTR_s_requestId_1130fed68,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136c0578 = puVar1;
  }
  return puRam00000001136c0578;
}



/* Entry: 1057a1f48; end: 1057a1fc3; +[GetItemRecommendationsResponse_Recommendation descriptor] */

undefined * FUN_1057a1f48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0580 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a67fb0,
                        &PTR____CFConstantStringClassReference_110e01798,&PTR_DAT_1130fed50,
                        &PTR_s_itemsArray_1130fedc8,3,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001136c0580 = puVar1;
  }
  return puRam00000001136c0580;
}



/* Entry: 1057a1fc4; end: 1057a204f; +[GetSizeRecommendationsResponse descriptor] */

undefined * FUN_1057a1fc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0588 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a68050,
                        &PTR____CFConstantStringClassReference_110e017b8,&PTR_DAT_1130fee38,
                        &PTR_s_requestId_1130fee70,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136c0588 = puVar1;
  }
  return puRam00000001136c0588;
}



/* Entry: 1057a2050; end: 1057a20db; +[SizeRecommendationResponse descriptor] */

undefined * FUN_1057a2050(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0590 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a680a0,
                        &PTR____CFConstantStringClassReference_110e017d8,&PTR_DAT_1130fee38,
                        &PTR_DAT_1130feed0,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136c0590 = puVar1;
  }
  return puRam00000001136c0590;
}



/* Entry: 1057a20dc; end: 1057a2143; +[SizeRecommendationList descriptor] */

void FUN_1057a20dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0598 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a680f0,
                        &PTR____CFConstantStringClassReference_110e017f8,&PTR_DAT_1130fee38,
                        &PTR_DAT_1130fee50,1,0x10,0x1c);
    puRam00000001136c0598 = puVar1;
  }
  return;
}



/* Entry: 1057a2144; end: 1057a21ab; +[SizeRecommendation descriptor] */

void FUN_1057a2144(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c05a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a68140,
                        &PTR____CFConstantStringClassReference_110e01818,&PTR_DAT_1130fee38,
                        &PTR_s_snapItemId_1130fef30,4,0x20,0x1c);
    puRam00000001136c05a0 = puVar1;
  }
  return;
}



/* Entry: 1057a21ac; end: 1057a2237; +[GetStoreMetadataResponse descriptor] */

undefined * FUN_1057a21ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c05a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a681e0,
                        &PTR____CFConstantStringClassReference_110e01838,&PTR_DAT_1130fefb8,
                        &PTR_s_requestId_1130fefd0,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136c05a8 = puVar1;
  }
  return puRam00000001136c05a8;
}



/* Entry: 1057a2238; end: 1057a22c3; +[GetStoresForUserResponse descriptor] */

undefined * FUN_1057a2238(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c05b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a68280,
                        &PTR____CFConstantStringClassReference_110e01858,&PTR_DAT_1130ff038,
                        &PTR_s_requestId_1130ff070,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136c05b0 = puVar1;
  }
  return puRam00000001136c05b0;
}



/* Entry: 1057a22c4; end: 1057a23bb; +[GetStoresForUserResponse_StoreData descriptor] */

undefined * FUN_1057a22c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c05b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a682d0,
                        &PTR____CFConstantStringClassReference_110e01878,&PTR_DAT_1130ff038,
                        &PTR_DAT_1130ff050,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136c05b8 = puVar1;
  }
  return puRam00000001136c05b8;
}



/* Entry: 1057a23bc; end: 1057a23c7;  */

bool FUN_1057a23bc(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 1057a23c8; end: 1057a242f; +[DeviceContext descriptor] */

void FUN_1057a23c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c05c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a683c0,
                        &PTR____CFConstantStringClassReference_110db5798,&PTR_DAT_1130ff0d0,
                        &PTR_s_deviceType_1130ff0e8,2,0x10,0x1c);
    puRam00000001136c05c8 = puVar1;
  }
  return;
}



/* Entry: 1057a2430; end: 1057a25a7; -[SCCommerceLegacyShowcaseFetcher initWithRequestManager:grapheneRegistry:configProvider:snapTokenProvider:] */

undefined1 *
FUN_1057a2430(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126ea378;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b0468;
    _objc_alloc();
    func_0x00010c0184a0();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1057a25a8; end: 1057a27fb; -[SCCommerceLegacyShowcaseFetcher getPCSProductSetWithProductSetId:adId:limit:cursor:completionBlock:] */

void FUN_1057a25a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126be2e0;
  _objc_opt_new();
  uVar2 = param_3;
  func_0x00010bf64920(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e3d60(puVar1);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010bf64920(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c163720(puVar1);
  _objc_release(uVar2);
  func_0x00010c1bda80(puVar1);
  func_0x00010c1d8b40(puVar1);
  uVar2 = param_1;
  func_0x00010bebbdc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x0001057a3d28(puVar1,&PTR____CFConstantStringClassReference_110e018b8,0xc,4,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_initWeak(auStack_78,param_1);
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(puVar3);
  _objc_retain(param_7);
  _objc_retain(param_7);
  func_0x00010be5b6a0(param_1);
  _objc_release(param_7);
  _objc_release(param_7);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1057a27fc; end: 1057a2887;  */

void FUN_1057a27fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfe500();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057a2888; end: 1057a289f;  */

void FUN_1057a2888(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001057a289c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0,param_2);
  return;
}



/* Entry: 1057a28a0; end: 1057a2a7f; -[SCCommerceLegacyShowcaseFetcher _makeCommerceRequestWithModel:success:failure:] */

void FUN_1057a28a0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_4 != 0) && (param_5 != 0)) {
    _objc_initWeak(auStack_68,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c11de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_3);
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010bfa48e0(uVar1);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1057a2a80; end: 1057a2b4b;  */

void FUN_1057a2a80(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  func_0x00010bdfe540(lVar2);
  _objc_release(param_2);
  _objc_release(lVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  return;
}



/* Entry: 1057a2b4c; end: 1057a2b77;  */

void FUN_1057a2b4c(long param_1)

{
  long in_x4;
  
  if (in_x4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001057a2b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),in_x4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001057a2b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 1057a2b78; end: 1057a2cff; -[SCCommerceLegacyShowcaseFetcher _didGetSnapToken:forRequestModel:completionBlock:] */

void FUN_1057a2b78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = auStack_58;
  _objc_initWeak(puVar2,param_1);
  FUN_1057a3edc();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  FUN_1057a3ef0(param_4,puVar2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c25f5e0(uVar1);
  _objc_release(uVar4);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1057a2d00; end: 1057a2e93;  */

void FUN_1057a2d00(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  double dVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _CACurrentMediaTime();
  dVar4 = param_1;
  func_0x00010c136b60(param_3);
  if (param_6 == 0) {
    lVar1 = *(long *)(param_2 + 0x28);
    if (lVar1 == 0) goto LAB_1057a2e54;
    pcVar3 = *(code **)(lVar1 + 0x10);
    lVar2 = 0;
  }
  else {
    lVar1 = param_2 + 0x30;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bfcdf40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ccec0();
    func_0x00010c0ccd00(*(undefined8 *)(param_2 + 0x20));
    func_0x00010c0ccca0(*(undefined8 *)(param_2 + 0x20));
    func_0x00010c252ee0(param_4);
    func_0x00010c0f66a0(param_3);
    func_0x00010bf9c200(param_4);
    func_0x00010c0a7a60((param_1 - dVar4) * 1000.0,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = *(long *)(param_2 + 0x28);
    if (lVar1 == 0) goto LAB_1057a2e54;
    pcVar3 = *(code **)(lVar1 + 0x10);
    lVar2 = param_6;
  }
  (*pcVar3)(lVar1,param_3,param_4,param_5,lVar2);
LAB_1057a2e54:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057a2e94; end: 1057a31ff; -[SCCommerceLegacyShowcaseFetcher _didGetShowcaseProductSetResponse:data:request:commerceRequestModel:completion:] */

/* WARNING: Removing unreachable block (ram,0x0001057a304c) */

undefined **
FUN_1057a2e94(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined **param_8)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  double dVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_8);
  if (param_8 != (undefined **)0x0) {
    _objc_retain(param_7);
    _objc_retain(param_6);
    _objc_retain(param_4);
    func_0x0001057b1214();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126be2e8;
    _objc_alloc();
    func_0x00010c008360();
    _objc_retain(0);
    _CACurrentMediaTime();
    dVar9 = param_1;
    func_0x00010c136b60(param_6);
    func_0x00010bfcdf40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ccec0();
    func_0x00010c0ccd00(param_7);
    func_0x00010c0ccca0(param_7);
    _objc_release(param_7);
    func_0x00010c252ee0(param_4);
    func_0x00010c0f66a0(param_6);
    _objc_release(param_6);
    func_0x00010bf9c200(param_4);
    _objc_release(param_4);
    puVar3 = puVar2;
    func_0x00010bf98c60();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf3ec40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a7a60((param_1 - dVar9) * 1000.0,param_2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(param_2);
    puVar3 = puVar2;
    func_0x00010bfd6c80();
    if ((int)puVar3 == 0) {
      puVar3 = puVar2;
      func_0x00010c084fe0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      FUN_1057a3574();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010c0f2740(puVar2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)param_8[2])(param_8,puVar4,puVar6,0);
      _objc_release(puVar6);
      _objc_release(puVar4);
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
      puVar4 = puVar2;
      func_0x00010bf98c60();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010c0cb140();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c00e2e0(puVar3);
      _objc_release(puVar5);
      _objc_release(puVar6);
      _objc_release(puVar4);
      (*(code *)param_8[2])(param_8,0,0,puVar3);
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(param_5);
    _objc_release(0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    iVar1 = (int)param_8[5];
    func_0x00010c23b080();
    if (iVar1 - 1U < 4) {
      ppuVar7 = (undefined **)(&PTR_PTR_1108b1b28)[iVar1 - 1U];
    }
    else {
      ppuVar7 = &PTR____CFConstantStringClassReference_110e011d8;
    }
    return ppuVar7;
  }
  return param_8;
}



/* Entry: 1057a3200; end: 1057a323b; -[SCCommerceLegacyShowcaseFetcher _showcaseRoutingHeader] */

undefined ** FUN_1057a3200(long param_1)

{
  int iVar1;
  undefined **ppuVar2;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010c23b080();
  if (iVar1 - 1U < 4) {
    ppuVar2 = (undefined **)(&PTR_PTR_1108b1b28)[iVar1 - 1U];
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e011d8;
  }
  return ppuVar2;
}



/* Entry: 1057a323c; end: 1057a3243; -[SCCommerceLegacyShowcaseFetcher grapheneNetworkLogger] */

undefined8 FUN_1057a323c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1057a3244; end: 1057a3273; -[SCCommerceLegacyShowcaseFetcher setGrapheneNetworkLogger:] */

void FUN_1057a3244(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057a3274; end: 1057a327b; -[SCCommerceLegacyShowcaseFetcher requestManager] */

undefined8 FUN_1057a3274(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1057a327c; end: 1057a32ab; -[SCCommerceLegacyShowcaseFetcher setRequestManager:] */

void FUN_1057a327c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1057a32ac; end: 1057a32b3; -[SCCommerceLegacyShowcaseFetcher queuePerformer] */

undefined8 FUN_1057a32ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1057a32b4; end: 1057a32e3; -[SCCommerceLegacyShowcaseFetcher setQueuePerformer:] */

void FUN_1057a32b4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1057a32e4; end: 1057a32eb; -[SCCommerceLegacyShowcaseFetcher snapTokenProvider] */

undefined8 FUN_1057a32e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1057a32ec; end: 1057a331b; -[SCCommerceLegacyShowcaseFetcher setSnapTokenProvider:] */

void FUN_1057a32ec(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1057a331c; end: 1057a3323; -[SCCommerceLegacyShowcaseFetcher configProvider] */

undefined8 FUN_1057a331c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1057a3324; end: 1057a3353; -[SCCommerceLegacyShowcaseFetcher setConfigProvider:] */

void FUN_1057a3324(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1057a3354; end: 1057a33a7; -[SCCommerceLegacyShowcaseFetcher .cxx_destruct] */

void FUN_1057a3354(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057a33a8; end: 1057a347f;  */

void FUN_1057a33a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  _objc_retain();
  func_0x0001060fa38c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf5de60(param_1);
  uVar3 = uVar1;
  func_0x00010c26c080(uVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b05a0;
  _objc_alloc(PTR_PTR_1126b05a0);
  uVar1 = uVar3;
  func_0x00010c28ed80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf02460(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c006ee0(puVar4,param_2,uVar1,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1057a3480; end: 1057a3573;  */

void FUN_1057a3480(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010c0c5340(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c008340(puVar1,param_2,uVar2,4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057a3574; end: 1057a35bf;  */

void FUN_1057a3574(undefined8 param_1)

{
  undefined *puVar1;
  
  func_0x000100504554(param_1,&PTR___NSConcreteGlobalBlock_1108b1b68);
  puVar1 = PTR_PTR_1126be288;
  _objc_alloc(PTR_PTR_1126be288);
  func_0x00010c03a9c0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057a35c0; end: 1057a3edb;  */

void FUN_1057a35c0(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined *puVar24;
  ulong uVar25;
  undefined *puStack_178;
  
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar18 = param_2;
  _objc_retain(param_2);
  func_0x00010c2429e0();
  uVar1 = param_2;
  func_0x00010c116040();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0caa80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_retain(0);
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010bfd73c0();
  if ((int)uVar3 != 0) {
    uVar3 = uVar1;
    func_0x00010bfb6100();
    _objc_retainAutoreleasedReturnValue();
    uVar25 = uVar3;
    func_0x0001057a34f8();
    _objc_release(uVar3);
    if ((int)uVar25 != 0) {
      uVar3 = uVar1;
      func_0x00010bfd73e0();
      if ((int)uVar3 != 0) {
        uVar3 = uVar1;
        func_0x00010bfb6140();
        _objc_retainAutoreleasedReturnValue();
        uVar25 = uVar3;
        func_0x0001057a34f8();
        _objc_release(uVar3);
        if ((uVar25 & 1) == 0) goto LAB_1057a36f0;
      }
      _objc_release(uVar1);
      uVar3 = uVar1;
      func_0x00010bf12520();
      if (((int)uVar3 != 1) && (uVar3 = uVar1, func_0x00010bf12520(), (int)uVar3 != 5)) {
        func_0x00010bf12520(uVar1);
      }
      uVar3 = uVar1;
      func_0x00010bfd73e0();
      uVar25 = uVar1;
      if ((uVar3 & 1) == 0) {
        func_0x00010bfb6100();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bfb6140();
        _objc_retainAutoreleasedReturnValue();
      }
      uVar3 = uVar25;
      FUN_1057a33a8();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar25);
      uVar25 = uVar1;
      func_0x00010bfd73e0();
      if ((int)uVar25 == 0) {
        uVar25 = 0;
      }
      else {
        uVar4 = uVar1;
        func_0x00010bfb6100();
        _objc_retainAutoreleasedReturnValue();
        uVar25 = uVar4;
        FUN_1057a33a8();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
      }
      puVar5 = PTR_PTR_1126be2f0;
      _objc_alloc();
      uVar4 = uVar1;
      func_0x00010bf9e140(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar1;
      func_0x00010c2711a0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c060640();
      _objc_release(uVar6);
      _objc_release(uVar4);
      uVar4 = uVar1;
      func_0x00010c0b6b00();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010c0c5800();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(uVar4);
      uVar4 = uVar7;
      func_0x00010c0c57e0();
      puVar22 = (undefined *)0x0;
      if ((int)uVar4 == 3) {
        puVar22 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_alloc();
        uVar4 = uVar7;
        func_0x00010c0c5340(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c008340();
        _objc_release(uVar4);
      }
      uVar4 = uVar1;
      func_0x00010c0b6b00();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010c0c5800();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(uVar4);
      puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      uVar4 = uVar8;
      func_0x00010c0c57e0();
      if ((int)uVar4 == 3) {
        uVar4 = uVar8;
        func_0x0001057a3480(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar9);
        _objc_release(uVar4);
      }
      lVar10 = 0;
      func_0x00010befd0e0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010bf529e0();
      _objc_release(lVar10);
      if (lVar11 != 0) {
        lVar12 = 0;
        func_0x00010befd0e0();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar12;
        func_0x00010bf52a60();
        lVar10 = lRam0000000000000000;
        while (lVar11 != 0) {
          lVar20 = 0;
          do {
            if (lRam0000000000000000 != lVar10) {
              _objc_enumerationMutation(lVar12);
            }
            uVar23 = *(undefined8 *)(lVar20 * 8);
            uVar4 = uVar8;
            func_0x00010c0c57e0();
            if ((int)uVar4 == 3) {
              func_0x00010c0c5800(uVar23);
              _objc_retainAutoreleasedReturnValue();
              uVar13 = uVar23;
              func_0x00010bfb1920();
              _objc_retainAutoreleasedReturnValue();
              uVar14 = uVar13;
              func_0x0001057a3480();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar9);
              _objc_release(uVar14);
              _objc_release(uVar13);
              _objc_release(uVar23);
            }
            lVar20 = lVar20 + 1;
          } while (lVar11 != lVar20);
          lVar11 = lVar12;
          func_0x00010bf52a60();
        }
        _objc_release(lVar12);
      }
      uVar4 = uVar1;
      func_0x00010c099540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar4 == 0) {
        puVar24 = (undefined *)0x0;
        puStack_178 = (undefined *)0x0;
      }
      else {
        puVar15 = PTR__OBJC_CLASS___NSURL_1126ae598;
        _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
        uVar4 = uVar1;
        func_0x00010c099540(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04e820(puVar15);
        _objc_release(uVar4);
        puVar24 = PTR_PTR_1126be2f8;
        func_0x00010c0696e0();
        _objc_retainAutoreleasedReturnValue();
        puStack_178 = PTR_PTR_1126be300;
        func_0x00010c0696a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar15);
      }
      puVar15 = PTR_PTR_1126be308;
      _objc_alloc();
      uVar4 = uVar2;
      func_0x00010c0d4f60(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c02d480();
      _objc_release(uVar4);
      puVar21 = PTR_PTR_1126b02b0;
      _objc_alloc();
      puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      uVar23 = 0;
      func_0x00010bf6e6e0();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      param_5 = uVar4;
      func_0x00010c03a740();
      _objc_release(puVar17);
      _objc_release(uVar23);
      _objc_release(uVar4);
      _objc_release(puVar16);
      _objc_release(puVar15);
      _objc_release(puStack_178);
      _objc_release(puVar24);
      _objc_release(puVar9);
      _objc_release(uVar8);
      _objc_release(puVar22);
      _objc_release(uVar7);
      _objc_release(puVar5);
      _objc_release(uVar25);
      _objc_release(uVar3);
      goto LAB_1057a36fc;
    }
  }
LAB_1057a36f0:
  _objc_release(uVar1);
  puVar21 = (undefined *)0x0;
LAB_1057a36fc:
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(0);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar19) {
    ___stack_chk_fail();
    lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(param_5);
    _objc_retain(uVar18);
    func_0x00010bf63640(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    FUN_1057b117c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar22 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = PTR_PTR_1126be310;
    _objc_alloc();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar9 = puVar21;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    func_0x00010c020c80(puVar21);
    _objc_release(uVar18);
    _objc_release(puVar5);
    _objc_release(puVar9);
    _objc_release(puVar22);
    _objc_release(uVar2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar19) {
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdc3470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (PTR__OBJC_CLASS___NSURL_1126ae598,PTR_s_URLWithString__11254e6b8,
                 &PTR____CFConstantStringClassReference_110e018f8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar21);
  return;
}



/* Entry: 1057a3edc; end: 1057a3eef;  */

void FUN_1057a3edc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc3470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSURL_1126ae598,PTR_s_URLWithString__11254e6b8,
             &PTR____CFConstantStringClassReference_110e018f8);
  return;
}



/* Entry: 1057a3ef0; end: 1057a432f;  */

void FUN_1057a3ef0(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  puVar1 = param_1;
  func_0x00010bfe02c0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar1;
  func_0x00010c0d3c80();
  if (puVar13 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar13);
    puVar2 = puVar13;
  }
  _objc_release(puVar13);
  _objc_release(puVar1);
  func_0x00010c1d0640(puVar2);
  _objc_release(param_3);
  puVar1 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar1;
  func_0x00010c09e220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar13);
  _objc_release(puVar1);
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_retain(puVar2);
  puVar1 = param_1;
  func_0x00010c28daa0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = param_1;
  func_0x00010c28daa0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar4 = puVar13;
  _objc_opt_isKindOfClass(puVar13,puVar3);
  puVar3 = puVar13;
  _objc_release(puVar13);
  puVar5 = puVar1;
  if ((((ulong)puVar4 & 1) != 0) && (puVar13 != (undefined *)0x0)) {
    func_0x00010c1d0640(puVar2);
    func_0x00010bf64920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar3 = puVar1;
  }
  FUN_1057b127c();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar3);
  puVar1 = param_1;
  func_0x00010c136100();
  puVar13 = PTR_PTR_1126bbf20;
  if (puVar1 == (undefined *)0x0) {
    func_0x00010bdc1920();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (puVar1 == (undefined *)0x1) {
    func_0x00010bdc1d20();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar13 = (undefined *)0x0;
  }
  puVar3 = PTR_PTR_1126b4960;
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  uVar6 = param_2;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_1;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c25ce40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010c0f3840(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = param_1;
  func_0x00010c086560(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126b19f8;
  func_0x00010bf42200();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c135e00();
  func_0x00010bf58700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar1);
  _objc_release(uVar7);
  _objc_release(puVar4);
  _objc_release(uVar6);
  _objc_release(puVar13);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    if (puRam00000001136c05d0 == (undefined *)0x0) {
      puVar1 = PTR_PTR_1126ae978;
      func_0x00010bf00dc0();
      puRam00000001136c05d0 = puVar1;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1057a4330; end: 1057a4397; +[ProductDetails descriptor] */

void FUN_1057a4330(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c05d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a684b0,
                        &PTR____CFConstantStringClassReference_110e01998,&PTR_DAT_1130ff188,
                        &PTR_DAT_1130ff1a0,3,0x20,0x1c);
    puRam00000001136c05d0 = puVar1;
  }
  return;
}



/* Entry: 1057a4398; end: 1057a43ff; +[GetItemsRequest descriptor] */

void FUN_1057a4398(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c05d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a68550,
                        &PTR____CFConstantStringClassReference_110e019b8,&PTR_DAT_1130ff200,
                        &PTR_DAT_1130ff218,5,0x28,0x1c);
    puRam00000001136c05d8 = puVar1;
  }
  return;
}



/* Entry: 1057a4400; end: 1057a448b; +[StoreContext descriptor] */

undefined * FUN_1057a4400(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c05e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a685f0,
                        &PTR____CFConstantStringClassReference_110e019d8,&PTR_DAT_1130ff2c0,
                        &PTR_DAT_1130ff2d8,1,0x10,0x1c);
    func_0x00010c229040();
    puRam00000001136c05e0 = puVar1;
  }
  return puRam00000001136c05e0;
}



/* Entry: 1057a448c; end: 1057a44f3; +[GetItemsResponse descriptor] */

void FUN_1057a448c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c05e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a68690,
                        &PTR____CFConstantStringClassReference_110e019f8,&PTR_DAT_1130ff2f8,
                        &PTR_s_requestId_1130ff310,4,0x28,0x1c);
    puRam00000001136c05e8 = puVar1;
  }
  return;
}



/* Entry: 1057a44f4; end: 1057a457f; +[ShowcaseItem descriptor] */

undefined * FUN_1057a44f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c05f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a68730,
                        &PTR____CFConstantStringClassReference_110e01a18,&PTR_DAT_1130ff398,
                        &PTR_DAT_1130ff3b0,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136c05f0 = puVar1;
  }
  return puRam00000001136c05f0;
}



/* Entry: 1057a4580; end: 1057a45e7; +[Merchant descriptor] */

void FUN_1057a4580(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c05f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a687d0,
                        &PTR____CFConstantStringClassReference_110e01a38,&PTR_DAT_1130ff410,
                        &PTR_DAT_1130ff428,1,0x10,0x1c);
    puRam00000001136c05f8 = puVar1;
  }
  return;
}



/* Entry: 1057a45e8; end: 1057a464f; +[ProductMetadata descriptor] */

void FUN_1057a45e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0600 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a68870,
                        &PTR____CFConstantStringClassReference_110e01a58,&PTR_DAT_1130ff448,
                        &PTR_DAT_1130ff460,10,0x50,0x1c);
    puRam00000001136c0600 = puVar1;
  }
  return;
}



/* Entry: 1057a4650; end: 1057a4777; +[ProductPrice descriptor] */

void FUN_1057a4650(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c0608 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a68910,
                        &PTR____CFConstantStringClassReference_110e01a78,&PTR_DAT_1130ff5a0,
                        &PTR_DAT_1130ff5b8,2,0x10,0x1c);
    puRam00000001136c0608 = puVar1;
  }
  return;
}


