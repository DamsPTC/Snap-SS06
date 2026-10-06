/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ba177e0; end: 10ba177e7; -[SCACommerceCheckoutApiEvent getEventQoS] */

undefined8 FUN_10ba177e0(void)

{
  return 1;
}



/* Entry: 10ba177e8; end: 10ba177ff; -[SCACommerceCheckoutApiEvent setCartItems:] */

void FUN_10ba177e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fc1678,7,param_3,0);
  return;
}



/* Entry: 10ba17800; end: 10ba17853; -[SCACommerceCheckoutApiEvent setCheckoutVersion:] */

void FUN_10ba17800(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fc1698,9,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba17854; end: 10ba178d3; -[SCACommerceCheckoutApiEvent setCurrencyType:] */

void FUN_10ba17854(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baf5e10(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fc16b8,0x15,puVar1,3
                      ,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba178d4; end: 10ba17927; -[SCACommerceCheckoutApiEvent setDiscount:] */

void FUN_10ba178d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fc16d8,0x16,puVar1,2
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba17928; end: 10ba1797b; -[SCACommerceCheckoutApiEvent setHasValidContactInfo:] */

void FUN_10ba17928(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fc16f8,0x1e,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba1797c; end: 10ba179cf; -[SCACommerceCheckoutApiEvent setHasValidPaymentMethod:] */

void FUN_10ba1797c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fc1718,0x1f,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba179d0; end: 10ba17a23; -[SCACommerceCheckoutApiEvent setHasValidShippingAddress:] */

void FUN_10ba179d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fc1738,0x20,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba17a24; end: 10ba17a77; -[SCACommerceCheckoutApiEvent setShippingAmount:] */

void FUN_10ba17a24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fc1758,0x30,puVar1,2
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba17a78; end: 10ba17a8f; -[SCACommerceCheckoutApiEvent setShippingMethodId:] */

void FUN_10ba17a78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fc1778,0x31,param_3,0);
  return;
}



/* Entry: 10ba17a90; end: 10ba17ae3; -[SCACommerceCheckoutApiEvent setSubTotal:] */

void FUN_10ba17a90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fc1798,0x36,puVar1,2
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba17ae4; end: 10ba17b37; -[SCACommerceCheckoutApiEvent setTax:] */

void FUN_10ba17ae4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fc17b8,0x38,puVar1,2
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba17b38; end: 10ba17b8b; -[SCACommerceCheckoutApiEvent setTotal:] */

void FUN_10ba17b38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110dbdb58,0x39,puVar1,2
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba17b8c; end: 10ba17baf; -[SCACommerceCheckoutApiEvent getFieldNumberToFieldDict] */

void FUN_10ba17b8c(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba17bb0; end: 10ba17be7; -[SCACommerceCheckoutApiEvent addToProtoDictionary] */

void FUN_10ba17bb0(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba17be8; end: 10ba17c3f; -[SCACommerceCheckoutApiEvent toProtoWithAllowedFields:] */

void FUN_10ba17be8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,9,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ba17c40; end: 10ba17c47; -[SCACommerceCheckoutApiEvent getPayloadIdentifier] */

undefined8 FUN_10ba17c40(void)

{
  return 0x25c;
}



/* Entry: 10ba17c48; end: 10ba17c53; -[SCACommerceContactDetailsApiEvent getEventName] */

undefined ** FUN_10ba17c48(void)

{
  return &PTR____CFConstantStringClassReference_110fc17d8;
}



/* Entry: 10ba17c54; end: 10ba17c5b; -[SCACommerceContactDetailsApiEvent getEventQoS] */

undefined8 FUN_10ba17c54(void)

{
  return 1;
}



/* Entry: 10ba17c5c; end: 10ba17c63; -[SCACommerceContactDetailsApiEvent getPerUserSamplingRateV2] */

undefined8 FUN_10ba17c5c(void)

{
  return 0x3ff0000000000000;
}



/* Entry: 10ba17c64; end: 10ba17c87; -[SCACommerceContactDetailsApiEvent getFieldNumberToFieldDict] */

void FUN_10ba17c64(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba17c88; end: 10ba17cbf; -[SCACommerceContactDetailsApiEvent addToProtoDictionary] */

void FUN_10ba17c88(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba17cc0; end: 10ba17d17; -[SCACommerceContactDetailsApiEvent toProtoWithAllowedFields:] */

void FUN_10ba17cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,8,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ba17d18; end: 10ba17d1f; -[SCACommerceContactDetailsApiEvent getPayloadIdentifier] */

undefined8 FUN_10ba17d18(void)

{
  return 0x25d;
}



/* Entry: 10ba17d20; end: 10ba17d2b; -[SCACommerceCreditCardApiEvent getEventName] */

undefined ** FUN_10ba17d20(void)

{
  return &PTR____CFConstantStringClassReference_110fc17f8;
}



/* Entry: 10ba17d2c; end: 10ba17d33; -[SCACommerceCreditCardApiEvent getEventQoS] */

undefined8 FUN_10ba17d2c(void)

{
  return 1;
}



/* Entry: 10ba17d34; end: 10ba17d3b; -[SCACommerceCreditCardApiEvent getPerUserSamplingRateV2] */

undefined8 FUN_10ba17d34(void)

{
  return 0x3ff0000000000000;
}



/* Entry: 10ba17d3c; end: 10ba17dbb; -[SCACommerceCreditCardApiEvent setCardType:] */

void FUN_10ba17d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bae9548(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fc1818,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba17dbc; end: 10ba17dd3; -[SCACommerceCreditCardApiEvent setPaymentMethodId:] */

void FUN_10ba17dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fc1838,0x23,param_3,0);
  return;
}



/* Entry: 10ba17dd4; end: 10ba17df7; -[SCACommerceCreditCardApiEvent getFieldNumberToFieldDict] */

void FUN_10ba17dd4(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba17df8; end: 10ba17e2f; -[SCACommerceCreditCardApiEvent addToProtoDictionary] */

void FUN_10ba17df8(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba17e30; end: 10ba17e87; -[SCACommerceCreditCardApiEvent toProtoWithAllowedFields:] */

void FUN_10ba17e30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,8,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ba17e88; end: 10ba17e8f; -[SCACommerceCreditCardApiEvent getPayloadIdentifier] */

undefined8 FUN_10ba17e88(void)

{
  return 0x25e;
}



/* Entry: 10ba17e90; end: 10ba17e9b; -[SCACommerceDiscountApiEvent getEventName] */

undefined ** FUN_10ba17e90(void)

{
  return &PTR____CFConstantStringClassReference_110fc1858;
}



/* Entry: 10ba17e9c; end: 10ba17ea3; -[SCACommerceDiscountApiEvent getEventQoS] */

undefined8 FUN_10ba17e9c(void)

{
  return 1;
}



/* Entry: 10ba17ea4; end: 10ba17f23; -[SCACommerceDiscountApiEvent setCurrencyType:] */

void FUN_10ba17ea4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baf5e10(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fc16b8,0x13,puVar1,3
                      ,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba17f24; end: 10ba17f77; -[SCACommerceDiscountApiEvent setDiscountAmount:] */

void FUN_10ba17f24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fc1878,0x14,puVar1,2
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba17f78; end: 10ba17f8f; -[SCACommerceDiscountApiEvent setDiscountCode:] */

void FUN_10ba17f78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fc1898,0x15,param_3,0);
  return;
}



/* Entry: 10ba17f90; end: 10ba17fb3; -[SCACommerceDiscountApiEvent getFieldNumberToFieldDict] */

void FUN_10ba17f90(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba17fb4; end: 10ba17feb; -[SCACommerceDiscountApiEvent addToProtoDictionary] */

void FUN_10ba17fb4(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba17fec; end: 10ba18043; -[SCACommerceDiscountApiEvent toProtoWithAllowedFields:] */

void FUN_10ba17fec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,8,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ba18044; end: 10ba1804b; -[SCACommerceDiscountApiEvent getPayloadIdentifier] */

undefined8 FUN_10ba18044(void)

{
  return 0x25f;
}



/* Entry: 10ba1804c; end: 10ba18057; -[SCACommerceLinkActionEvent getEventName] */

undefined ** FUN_10ba1804c(void)

{
  return &PTR____CFConstantStringClassReference_110fc18b8;
}



/* Entry: 10ba18058; end: 10ba1805f; -[SCACommerceLinkActionEvent getEventQoS] */

undefined8 FUN_10ba18058(void)

{
  return 1;
}



/* Entry: 10ba18060; end: 10ba180df; -[SCACommerceLinkActionEvent setTarget:] */

void FUN_10ba18060(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba16cfc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110de3f98,0x2d,puVar1,3
                      ,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba180e0; end: 10ba18103; -[SCACommerceLinkActionEvent getFieldNumberToFieldDict] */

void FUN_10ba180e0(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba18104; end: 10ba1813b; -[SCACommerceLinkActionEvent addToProtoDictionary] */

void FUN_10ba18104(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba1813c; end: 10ba18193; -[SCACommerceLinkActionEvent toProtoWithAllowedFields:] */

void FUN_10ba1813c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,8,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ba18194; end: 10ba1819b; -[SCACommerceLinkActionEvent getPayloadIdentifier] */

undefined8 FUN_10ba18194(void)

{
  return 0x266;
}



/* Entry: 10ba1819c; end: 10ba181a7; -[SCACommercePageActionEvent getEventName] */

undefined ** FUN_10ba1819c(void)

{
  return &PTR____CFConstantStringClassReference_110fc18d8;
}



/* Entry: 10ba181a8; end: 10ba181af; -[SCACommercePageActionEvent getEventQoS] */

undefined8 FUN_10ba181a8(void)

{
  return 1;
}



/* Entry: 10ba181b0; end: 10ba181b7; -[SCACommercePageActionEvent getPerUserSamplingRateV2] */

undefined8 FUN_10ba181b0(void)

{
  return 0x3ff0000000000000;
}



/* Entry: 10ba181b8; end: 10ba18237; -[SCACommercePageActionEvent setTarget:] */

void FUN_10ba181b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baf125c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110de3f98,0x2d,puVar1,3
                      ,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba18238; end: 10ba1825b; -[SCACommercePageActionEvent getFieldNumberToFieldDict] */

void FUN_10ba18238(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba1825c; end: 10ba18293; -[SCACommercePageActionEvent addToProtoDictionary] */

void FUN_10ba1825c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba18294; end: 10ba182eb; -[SCACommercePageActionEvent toProtoWithAllowedFields:] */

void FUN_10ba18294(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,8,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ba182ec; end: 10ba182f3; -[SCACommercePageActionEvent getPayloadIdentifier] */

undefined8 FUN_10ba182ec(void)

{
  return 0x26c;
}



/* Entry: 10ba182f4; end: 10ba182ff; -[SCACommercePageSendEvent getEventName] */

undefined ** FUN_10ba182f4(void)

{
  return &PTR____CFConstantStringClassReference_110fc18f8;
}



/* Entry: 10ba18300; end: 10ba18307; -[SCACommercePageSendEvent getEventQoS] */

undefined8 FUN_10ba18300(void)

{
  return 1;
}



/* Entry: 10ba18308; end: 10ba18387; -[SCACommercePageSendEvent setCurrentPage:] */

void FUN_10ba18308(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baf125c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fb44b8,0x2c,puVar1,3
                      ,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba18388; end: 10ba183ab; -[SCACommercePageSendEvent getFieldNumberToFieldDict] */

void FUN_10ba18388(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba183ac; end: 10ba183e3; -[SCACommercePageSendEvent addToProtoDictionary] */

void FUN_10ba183ac(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba183e4; end: 10ba1843b; -[SCACommercePageSendEvent toProtoWithAllowedFields:] */

void FUN_10ba183e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,7,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ba1843c; end: 10ba18443; -[SCACommercePageSendEvent getPayloadIdentifier] */

undefined8 FUN_10ba1843c(void)

{
  return 0xd55;
}



/* Entry: 10ba18444; end: 10ba1844f; -[SCACommercePickerCloseEvent getEventName] */

undefined ** FUN_10ba18444(void)

{
  return &PTR____CFConstantStringClassReference_110fc1918;
}



/* Entry: 10ba18450; end: 10ba18457; -[SCACommercePickerCloseEvent getEventQoS] */

undefined8 FUN_10ba18450(void)

{
  return 1;
}



/* Entry: 10ba18458; end: 10ba18463; -[SCACommercePickerCloseEvent getPerUserSamplingRateV2] */

undefined8 FUN_10ba18458(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba18464; end: 10ba184e3; -[SCACommercePickerCloseEvent setPicker:] */

void FUN_10ba18464(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba16d20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fc1938,0x20,puVar1,3
                      ,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba184e4; end: 10ba18507; -[SCACommercePickerCloseEvent getFieldNumberToFieldDict] */

void FUN_10ba184e4(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba18508; end: 10ba1853f; -[SCACommercePickerCloseEvent addToProtoDictionary] */

void FUN_10ba18508(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba18540; end: 10ba18597; -[SCACommercePickerCloseEvent toProtoWithAllowedFields:] */

void FUN_10ba18540(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,7,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ba18598; end: 10ba1859f; -[SCACommercePickerCloseEvent getPayloadIdentifier] */

undefined8 FUN_10ba18598(void)

{
  return 0x270;
}



/* Entry: 10ba185a0; end: 10ba185ab; -[SCACommercePickerItemActionEvent getEventName] */

undefined ** FUN_10ba185a0(void)

{
  return &PTR____CFConstantStringClassReference_110fc1958;
}



/* Entry: 10ba185ac; end: 10ba185b3; -[SCACommercePickerItemActionEvent getEventQoS] */

undefined8 FUN_10ba185ac(void)

{
  return 1;
}



/* Entry: 10ba185b4; end: 10ba18633; -[SCACommercePickerItemActionEvent setTarget:] */

void FUN_10ba185b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba16d20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110de3f98,0x2d,puVar1,3
                      ,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba18634; end: 10ba1864b; -[SCACommercePickerItemActionEvent setCategory:] */

void FUN_10ba18634(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dcef38,0x32,param_3,0);
  return;
}



/* Entry: 10ba1864c; end: 10ba18663; -[SCACommercePickerItemActionEvent setContent:] */

void FUN_10ba1864c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dbdd78,0x33,param_3,0);
  return;
}



/* Entry: 10ba18664; end: 10ba18687; -[SCACommercePickerItemActionEvent getFieldNumberToFieldDict] */

void FUN_10ba18664(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba18688; end: 10ba186bf; -[SCACommercePickerItemActionEvent addToProtoDictionary] */

void FUN_10ba18688(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba186c0; end: 10ba18717; -[SCACommercePickerItemActionEvent toProtoWithAllowedFields:] */

void FUN_10ba186c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,8,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ba18718; end: 10ba1871f; -[SCACommercePickerItemActionEvent getPayloadIdentifier] */

undefined8 FUN_10ba18718(void)

{
  return 0x271;
}



/* Entry: 10ba18720; end: 10ba1872b; -[SCACommercePickerOpenEvent getEventName] */

undefined ** FUN_10ba18720(void)

{
  return &PTR____CFConstantStringClassReference_110fc1978;
}



/* Entry: 10ba1872c; end: 10ba18733; -[SCACommercePickerOpenEvent getEventQoS] */

undefined8 FUN_10ba1872c(void)

{
  return 1;
}



/* Entry: 10ba18734; end: 10ba1873f; -[SCACommercePickerOpenEvent getPerUserSamplingRateV2] */

undefined8 FUN_10ba18734(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba18740; end: 10ba187bf; -[SCACommercePickerOpenEvent setPicker:] */

void FUN_10ba18740(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba16d20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fc1938,0x20,puVar1,3
                      ,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba187c0; end: 10ba187e3; -[SCACommercePickerOpenEvent getFieldNumberToFieldDict] */

void FUN_10ba187c0(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba187e4; end: 10ba1881b; -[SCACommercePickerOpenEvent addToProtoDictionary] */

void FUN_10ba187e4(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba1881c; end: 10ba18873; -[SCACommercePickerOpenEvent toProtoWithAllowedFields:] */

void FUN_10ba1881c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,7,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ba18874; end: 10ba1887b; -[SCACommercePickerOpenEvent getPayloadIdentifier] */

undefined8 FUN_10ba18874(void)

{
  return 0x272;
}



/* Entry: 10ba1887c; end: 10ba18887; -[SCACommerceRemoveAttachmentEvent getEventName] */

undefined ** FUN_10ba1887c(void)

{
  return &PTR____CFConstantStringClassReference_110fc1998;
}



/* Entry: 10ba18888; end: 10ba1888f; -[SCACommerceRemoveAttachmentEvent getEventQoS] */

undefined8 FUN_10ba18888(void)

{
  return 1;
}



/* Entry: 10ba18890; end: 10ba1889b; -[SCACommerceRemoveAttachmentEvent getPerUserSamplingRateV2] */

undefined8 FUN_10ba18890(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba1889c; end: 10ba188bf; -[SCACommerceRemoveAttachmentEvent getFieldNumberToFieldDict] */

void FUN_10ba1889c(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba188c0; end: 10ba188f7; -[SCACommerceRemoveAttachmentEvent addToProtoDictionary] */

void FUN_10ba188c0(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba188f8; end: 10ba1894f; -[SCACommerceRemoveAttachmentEvent toProtoWithAllowedFields:] */

void FUN_10ba188f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,7,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ba18950; end: 10ba18957; -[SCACommerceRemoveAttachmentEvent getPayloadIdentifier] */

undefined8 FUN_10ba18950(void)

{
  return 0x278;
}



/* Entry: 10ba18958; end: 10ba18963; -[SCACommerceRestActionEvent getEventName] */

undefined ** FUN_10ba18958(void)

{
  return &PTR____CFConstantStringClassReference_110fc19b8;
}



/* Entry: 10ba18964; end: 10ba1896b; -[SCACommerceRestActionEvent getEventQoS] */

undefined8 FUN_10ba18964(void)

{
  return 1;
}



/* Entry: 10ba1896c; end: 10ba189eb; -[SCACommerceRestActionEvent setAction:] */

void FUN_10ba1896c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba16da4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110daf5b8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba189ec; end: 10ba18a03; -[SCACommerceRestActionEvent setCommerceErrorCode:] */

void FUN_10ba189ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fc14b8,8,param_3,0);
  return;
}


