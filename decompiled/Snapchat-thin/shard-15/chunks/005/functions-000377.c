/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bac2984; end: 10bac299b; -[SCAGeofilterOndemandMobilePayment setOfferCurrency:] */

void FUN_10bac2984(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fee1b8,8,param_3,0);
  return;
}



/* Entry: 10bac299c; end: 10bac29b3; -[SCAGeofilterOndemandMobilePayment setPaymentSource:] */

void FUN_10bac299c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fc0738,0xb,param_3,0);
  return;
}



/* Entry: 10bac29b4; end: 10bac29cb; -[SCAGeofilterOndemandMobilePayment setPaymentState:] */

void FUN_10bac29b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fee1d8,0xc,param_3,0);
  return;
}



/* Entry: 10bac29cc; end: 10bac29e3; -[SCAGeofilterOndemandMobilePayment setProductId:] */

void FUN_10bac29cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110db1b58,0xd,param_3,0);
  return;
}



/* Entry: 10bac29e4; end: 10bac2a07; -[SCAGeofilterOndemandMobilePayment getFieldNumberToFieldDict] */

void FUN_10bac29e4(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bac2a08; end: 10bac2a3f; -[SCAGeofilterOndemandMobilePayment addToProtoDictionary] */

void FUN_10bac2a08(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bac2a40; end: 10bac2a97; -[SCAGeofilterOndemandMobilePayment toProtoWithAllowedFields:] */

void FUN_10bac2a40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10bac2a98; end: 10bac2a9f; -[SCAGeofilterOndemandMobilePayment getPayloadIdentifier] */

undefined8 FUN_10bac2a98(void)

{
  return 0x453;
}



/* Entry: 10bac2aa0; end: 10bac2aab; -[SCAGeofilterOndemandOfferPreview getEventName] */

undefined ** FUN_10bac2aa0(void)

{
  return &PTR____CFConstantStringClassReference_110fee1f8;
}



/* Entry: 10bac2aac; end: 10bac2ab3; -[SCAGeofilterOndemandOfferPreview getEventQoS] */

undefined8 FUN_10bac2aac(void)

{
  return 1;
}



/* Entry: 10bac2ab4; end: 10bac2abf; -[SCAGeofilterOndemandOfferPreview getPerUserSamplingRateV2] */

undefined8 FUN_10bac2ab4(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bac2ac0; end: 10bac2ad7; -[SCAGeofilterOndemandOfferPreview setOdgRulesVersion:] */

void FUN_10bac2ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fee218,3,param_3,0);
  return;
}



/* Entry: 10bac2ad8; end: 10bac2b2b; -[SCAGeofilterOndemandOfferPreview setOfferAmountValue:] */

void FUN_10bac2ad8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fee198,5,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac2b2c; end: 10bac2b7f; -[SCAGeofilterOndemandOfferPreview setOfferAreaSquareFeet:] */

void FUN_10bac2b2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fee238,6,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac2b80; end: 10bac2b97; -[SCAGeofilterOndemandOfferPreview setOfferCountry:] */

void FUN_10bac2b80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fee258,7,param_3,0);
  return;
}



/* Entry: 10bac2b98; end: 10bac2baf; -[SCAGeofilterOndemandOfferPreview setOfferCurrency:] */

void FUN_10bac2b98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fee1b8,8,param_3,0);
  return;
}



/* Entry: 10bac2bb0; end: 10bac2bc7; -[SCAGeofilterOndemandOfferPreview setOfferDiscountCode:] */

void FUN_10bac2bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fee278,9,param_3,0);
  return;
}



/* Entry: 10bac2bc8; end: 10bac2bdf; -[SCAGeofilterOndemandOfferPreview setOfferDiscountCodeType:] */

void FUN_10bac2bc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fee298,10,param_3,0);
  return;
}



/* Entry: 10bac2be0; end: 10bac2c33; -[SCAGeofilterOndemandOfferPreview setOfferDiscountCodeValue:] */

void FUN_10bac2be0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fee2b8,0xb,puVar1,2)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac2c34; end: 10bac2c4b; -[SCAGeofilterOndemandOfferPreview setOfferId:] */

void FUN_10bac2c34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fee2d8,0xc,param_3,0);
  return;
}



/* Entry: 10bac2c4c; end: 10bac2c9f; -[SCAGeofilterOndemandOfferPreview setOfferSequenceId:] */

void FUN_10bac2c4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fee2f8,0xd,puVar1,4)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac2ca0; end: 10bac2cb7; -[SCAGeofilterOndemandOfferPreview setProductId:] */

void FUN_10bac2ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110db1b58,0x10,param_3,0);
  return;
}



/* Entry: 10bac2cb8; end: 10bac2d3f; -[SCAGeofilterOndemandOfferPreview setScheduledEndTime:] */

/* WARNING: Possible PIC construction at 0x00010bac2d08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bac2d0c) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_10bac2cb8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    func_0x00010c26f320(param_3);
    func_0x00010c0df720(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fee318,0x13,puVar1,5);
  return;
}



/* Entry: 10bac2d40; end: 10bac2dc7; -[SCAGeofilterOndemandOfferPreview setScheduledStartTime:] */

/* WARNING: Possible PIC construction at 0x00010bac2d90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bac2d94) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_10bac2d40(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    func_0x00010c26f320(param_3);
    func_0x00010c0df720(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fee338,0x14,puVar1,5);
  return;
}



/* Entry: 10bac2dc8; end: 10bac2ddf; -[SCAGeofilterOndemandOfferPreview setViewportNorthEast:] */

void FUN_10bac2dc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fee358,0x16,param_3,0);
  return;
}



/* Entry: 10bac2de0; end: 10bac2df7; -[SCAGeofilterOndemandOfferPreview setViewportNorthWest:] */

void FUN_10bac2de0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fee378,0x17,param_3,0);
  return;
}



/* Entry: 10bac2df8; end: 10bac2e0f; -[SCAGeofilterOndemandOfferPreview setViewportSouthEast:] */

void FUN_10bac2df8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fee398,0x18,param_3,0);
  return;
}



/* Entry: 10bac2e10; end: 10bac2e27; -[SCAGeofilterOndemandOfferPreview setViewportSouthWest:] */

void FUN_10bac2e10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fee3b8,0x19,param_3,0);
  return;
}



/* Entry: 10bac2e28; end: 10bac2e4b; -[SCAGeofilterOndemandOfferPreview getFieldNumberToFieldDict] */

void FUN_10bac2e28(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bac2e4c; end: 10bac2e83; -[SCAGeofilterOndemandOfferPreview addToProtoDictionary] */

void FUN_10bac2e4c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bac2e84; end: 10bac2edb; -[SCAGeofilterOndemandOfferPreview toProtoWithAllowedFields:] */

void FUN_10bac2e84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,3,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10bac2edc; end: 10bac2ee3; -[SCAGeofilterOndemandOfferPreview getPayloadIdentifier] */

undefined8 FUN_10bac2edc(void)

{
  return 0x454;
}



/* Entry: 10bac2ee4; end: 10bac2eef; -[SCAGeofilterOndemandPageView getEventName] */

undefined ** FUN_10bac2ee4(void)

{
  return &PTR____CFConstantStringClassReference_110fee3d8;
}



/* Entry: 10bac2ef0; end: 10bac2ef7; -[SCAGeofilterOndemandPageView getEventQoS] */

undefined8 FUN_10bac2ef0(void)

{
  return 1;
}



/* Entry: 10bac2ef8; end: 10bac2f77; -[SCAGeofilterOndemandPageView setExitEvent:] */

void FUN_10bac2ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c31194(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110ea1f58,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac2f78; end: 10bac2fcb; -[SCAGeofilterOndemandPageView setIsPendingCollection:] */

void FUN_10bac2f78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fee3f8,4,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac2fcc; end: 10bac2fe3; -[SCAGeofilterOndemandPageView setLineItemId:] */

void FUN_10bac2fcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa9758,5,param_3,0);
  return;
}



/* Entry: 10bac2fe4; end: 10bac3063; -[SCAGeofilterOndemandPageView setNextPage:] */

void FUN_10bac2fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bac18dc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110e6ed18,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac3064; end: 10bac30e3; -[SCAGeofilterOndemandPageView setPreviousPage:] */

void FUN_10bac3064(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bac18dc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fc1df8,10,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac30e4; end: 10bac3137; -[SCAGeofilterOndemandPageView setViewTimeSec:] */

void FUN_10bac30e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fadb38,0xe,puVar1,2)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac3138; end: 10bac315b; -[SCAGeofilterOndemandPageView getFieldNumberToFieldDict] */

void FUN_10bac3138(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bac315c; end: 10bac3193; -[SCAGeofilterOndemandPageView addToProtoDictionary] */

void FUN_10bac315c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bac3194; end: 10bac31eb; -[SCAGeofilterOndemandPageView toProtoWithAllowedFields:] */

void FUN_10bac3194(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10bac31ec; end: 10bac31f3; -[SCAGeofilterOndemandPageView getPayloadIdentifier] */

undefined8 FUN_10bac31ec(void)

{
  return 0x455;
}



/* Entry: 10bac31f4; end: 10bac31ff; -[SCAGeofilterOndemandPurchaseLineItem getEventName] */

undefined ** FUN_10bac31f4(void)

{
  return &PTR____CFConstantStringClassReference_110fee418;
}



/* Entry: 10bac3200; end: 10bac3207; -[SCAGeofilterOndemandPurchaseLineItem getEventQoS] */

undefined8 FUN_10bac3200(void)

{
  return 1;
}



/* Entry: 10bac3208; end: 10bac3213; -[SCAGeofilterOndemandPurchaseLineItem getPerUserSamplingRateV2] */

undefined8 FUN_10bac3208(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bac3214; end: 10bac3267; -[SCAGeofilterOndemandPurchaseLineItem setCreativeBitmojiCount:] */

void FUN_10bac3214(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fee438,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac3268; end: 10bac327f; -[SCAGeofilterOndemandPurchaseLineItem setCreativeBitmojiIds:] */

void FUN_10bac3268(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fee458,4,param_3,0);
  return;
}



/* Entry: 10bac3280; end: 10bac3297; -[SCAGeofilterOndemandPurchaseLineItem setCreativeColorUsed:] */

void FUN_10bac3280(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fee478,5,param_3,0);
  return;
}



/* Entry: 10bac3298; end: 10bac32eb; -[SCAGeofilterOndemandPurchaseLineItem setCreativeCustomStickerCount:] */

void FUN_10bac3298(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fee498,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac32ec; end: 10bac3303; -[SCAGeofilterOndemandPurchaseLineItem setCreativeCustomStickerId:] */

void FUN_10bac32ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fee4b8,7,param_3,0);
  return;
}



/* Entry: 10bac3304; end: 10bac3357; -[SCAGeofilterOndemandPurchaseLineItem setCreativeEmojiCount:] */

void FUN_10bac3304(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fee4d8,8,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac3358; end: 10bac336f; -[SCAGeofilterOndemandPurchaseLineItem setCreativeEmojiIds:] */

void FUN_10bac3358(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fee4f8,9,param_3,0);
  return;
}



/* Entry: 10bac3370; end: 10bac33c3; -[SCAGeofilterOndemandPurchaseLineItem setCreativeFriendmojiCount:] */

void FUN_10bac3370(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fee518,10,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac33c4; end: 10bac33db; -[SCAGeofilterOndemandPurchaseLineItem setCreativeFriendmojiIds:] */

void FUN_10bac33c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fee538,0xb,param_3,0);
  return;
}



/* Entry: 10bac33dc; end: 10bac342f; -[SCAGeofilterOndemandPurchaseLineItem setCreativeNonSelfBitmojiCount:] */

void FUN_10bac33dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fee558,0xc,puVar1,4)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac3430; end: 10bac3447; -[SCAGeofilterOndemandPurchaseLineItem setCreativeNonSelfBitmojiIds:] */

void FUN_10bac3430(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fee578,0xd,param_3,0);
  return;
}



/* Entry: 10bac3448; end: 10bac349b; -[SCAGeofilterOndemandPurchaseLineItem setCreativeStickerCount:] */

void FUN_10bac3448(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fee598,0xe,puVar1,4)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac349c; end: 10bac34b3; -[SCAGeofilterOndemandPurchaseLineItem setCreativeStickerId:] */

void FUN_10bac349c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fee5b8,0xf,param_3,0);
  return;
}



/* Entry: 10bac34b4; end: 10bac34cb; -[SCAGeofilterOndemandPurchaseLineItem setCreativeTemplateId:] */

void FUN_10bac34b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fee5d8,0x10,param_3,0);
  return;
}



/* Entry: 10bac34cc; end: 10bac351f; -[SCAGeofilterOndemandPurchaseLineItem setCreativeTextBoxCount:] */

void FUN_10bac34cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fee5f8,0x11,puVar1,4
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac3520; end: 10bac3537; -[SCAGeofilterOndemandPurchaseLineItem setCreativeTextBoxMeta:] */

void FUN_10bac3520(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fee618,0x12,param_3,0);
  return;
}



/* Entry: 10bac3538; end: 10bac354f; -[SCAGeofilterOndemandPurchaseLineItem setDraftId:] */

void FUN_10bac3538(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fee638,0x13,param_3,0);
  return;
}



/* Entry: 10bac3550; end: 10bac3567; -[SCAGeofilterOndemandPurchaseLineItem setFence:] */

void FUN_10bac3550(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110f24218,0x14,param_3,0);
  return;
}



/* Entry: 10bac3568; end: 10bac35bb; -[SCAGeofilterOndemandPurchaseLineItem setIsFromLineItemDraft:] */

void FUN_10bac3568(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fee658,0x15,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac35bc; end: 10bac360f; -[SCAGeofilterOndemandPurchaseLineItem setIsPreviouslyAutoRejected:] */

void FUN_10bac35bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fee678,0x16,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac3610; end: 10bac3627; -[SCAGeofilterOndemandPurchaseLineItem setLineItemId:] */

void FUN_10bac3610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa9758,0x17,param_3,0);
  return;
}



/* Entry: 10bac3628; end: 10bac363f; -[SCAGeofilterOndemandPurchaseLineItem setOdgRulesVersion:] */

void FUN_10bac3628(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fee218,0x18,param_3,0);
  return;
}



/* Entry: 10bac3640; end: 10bac3693; -[SCAGeofilterOndemandPurchaseLineItem setOfferAmountValue:] */

void FUN_10bac3640(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fee198,0x1a,puVar1,2
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac3694; end: 10bac36e7; -[SCAGeofilterOndemandPurchaseLineItem setOfferAreaSquareFeet:] */

void FUN_10bac3694(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fee238,0x1b,puVar1,2
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac36e8; end: 10bac36ff; -[SCAGeofilterOndemandPurchaseLineItem setOfferCountry:] */

void FUN_10bac36e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fee258,0x1c,param_3,0);
  return;
}



/* Entry: 10bac3700; end: 10bac3717; -[SCAGeofilterOndemandPurchaseLineItem setOfferCurrency:] */

void FUN_10bac3700(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fee1b8,0x1d,param_3,0);
  return;
}



/* Entry: 10bac3718; end: 10bac372f; -[SCAGeofilterOndemandPurchaseLineItem setOfferDiscountCode:] */

void FUN_10bac3718(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fee278,0x1e,param_3,0);
  return;
}



/* Entry: 10bac3730; end: 10bac3747; -[SCAGeofilterOndemandPurchaseLineItem setOfferDiscountCodeType:] */

void FUN_10bac3730(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fee298,0x1f,param_3,0);
  return;
}



/* Entry: 10bac3748; end: 10bac379b; -[SCAGeofilterOndemandPurchaseLineItem setOfferDiscountCodeValue:] */

void FUN_10bac3748(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fee2b8,0x20,puVar1,2
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac379c; end: 10bac37b3; -[SCAGeofilterOndemandPurchaseLineItem setOfferId:] */

void FUN_10bac379c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fee2d8,0x21,param_3,0);
  return;
}



/* Entry: 10bac37b4; end: 10bac3807; -[SCAGeofilterOndemandPurchaseLineItem setOfferSequenceId:] */

void FUN_10bac37b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fee2f8,0x22,puVar1,4
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac3808; end: 10bac381f; -[SCAGeofilterOndemandPurchaseLineItem setProductId:] */

void FUN_10bac3808(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110db1b58,0x25,param_3,0);
  return;
}



/* Entry: 10bac3820; end: 10bac38a7; -[SCAGeofilterOndemandPurchaseLineItem setScheduledEndTime:] */

/* WARNING: Possible PIC construction at 0x00010bac3870: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bac3874) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_10bac3820(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    func_0x00010c26f320(param_3);
    func_0x00010c0df720(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fee318,0x28,puVar1,5);
  return;
}



/* Entry: 10bac38a8; end: 10bac392f; -[SCAGeofilterOndemandPurchaseLineItem setScheduledStartTime:] */

/* WARNING: Possible PIC construction at 0x00010bac38f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010bac38fc) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_10bac38a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    func_0x00010c26f320(param_3);
    func_0x00010c0df720(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fee338,0x29,puVar1,5);
  return;
}



/* Entry: 10bac3930; end: 10bac3947; -[SCAGeofilterOndemandPurchaseLineItem setSubmitError:] */

void FUN_10bac3930(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fee698,0x2b,param_3,0);
  return;
}



/* Entry: 10bac3948; end: 10bac399b; -[SCAGeofilterOndemandPurchaseLineItem setSuccess:] */

void FUN_10bac3948(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110dab0d8,0x2c,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac399c; end: 10bac39b3; -[SCAGeofilterOndemandPurchaseLineItem setViewportNorthEast:] */

void FUN_10bac399c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fee358,0x2d,param_3,0);
  return;
}



/* Entry: 10bac39b4; end: 10bac39cb; -[SCAGeofilterOndemandPurchaseLineItem setViewportNorthWest:] */

void FUN_10bac39b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fee378,0x2e,param_3,0);
  return;
}



/* Entry: 10bac39cc; end: 10bac39e3; -[SCAGeofilterOndemandPurchaseLineItem setViewportSouthEast:] */

void FUN_10bac39cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fee398,0x2f,param_3,0);
  return;
}



/* Entry: 10bac39e4; end: 10bac39fb; -[SCAGeofilterOndemandPurchaseLineItem setViewportSouthWest:] */

void FUN_10bac39e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fee3b8,0x30,param_3,0);
  return;
}



/* Entry: 10bac39fc; end: 10bac3a1f; -[SCAGeofilterOndemandPurchaseLineItem getFieldNumberToFieldDict] */

void FUN_10bac39fc(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bac3a20; end: 10bac3a57; -[SCAGeofilterOndemandPurchaseLineItem addToProtoDictionary] */

void FUN_10bac3a20(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bac3a58; end: 10bac3aaf; -[SCAGeofilterOndemandPurchaseLineItem toProtoWithAllowedFields:] */

void FUN_10bac3a58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,6,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10bac3ab0; end: 10bac3ab7; -[SCAGeofilterOndemandPurchaseLineItem getPayloadIdentifier] */

undefined8 FUN_10bac3ab0(void)

{
  return 0x456;
}



/* Entry: 10bac3ab8; end: 10bac3ac3; -[SCAGeofilterStorySnapView getEventName] */

undefined ** FUN_10bac3ab8(void)

{
  return &PTR____CFConstantStringClassReference_110fee6b8;
}



/* Entry: 10bac3ac4; end: 10bac3acb; -[SCAGeofilterStorySnapView getEventQoS] */

undefined8 FUN_10bac3ac4(void)

{
  return 1;
}



/* Entry: 10bac3acc; end: 10bac3ae3; -[SCAGeofilterStorySnapView setAdsnapPlacementId:] */

void FUN_10bac3acc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fab678,2,param_3,0);
  return;
}



/* Entry: 10bac3ae4; end: 10bac3b37; -[SCAGeofilterStorySnapView setDeviceScore:] */

void FUN_10bac3ae4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110f42b98,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac3b38; end: 10bac3b8b; -[SCAGeofilterStorySnapView setDistanceFromFriendMinMeter:] */

void FUN_10bac3b38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110faef38,4,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac3b8c; end: 10bac3bdf; -[SCAGeofilterStorySnapView setDistanceFromUserMeter:] */

void FUN_10bac3b8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110faef58,5,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bac3be0; end: 10bac3bf7; -[SCAGeofilterStorySnapView setEncFilterGeofilterId:] */

void FUN_10bac3be0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fcebd8,6,param_3,0);
  return;
}



/* Entry: 10bac3bf8; end: 10bac3c0f; -[SCAGeofilterStorySnapView setEncFilterGeolensId:] */

void FUN_10bac3bf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fcebf8,7,param_3,0);
  return;
}



/* Entry: 10bac3c10; end: 10bac3c27; -[SCAGeofilterStorySnapView setEncGeoData:] */

void FUN_10bac3c10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110f23db8,8,param_3,0);
  return;
}


