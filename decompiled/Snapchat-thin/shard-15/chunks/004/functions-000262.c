/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ba19b38; end: 10ba19bb7; -[SCACommerceUnlockMappingEvent setUnlockPage:] */

void FUN_10ba19b38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baf125c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fc1d58,0x2d,puVar1,3
                      ,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba19bb8; end: 10ba19bcf; -[SCACommerceUnlockMappingEvent setUnlockableId:] */

void FUN_10ba19bb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fad5f8,0x2e,param_3,0);
  return;
}



/* Entry: 10ba19bd0; end: 10ba19c4f; -[SCACommerceUnlockMappingEvent setUnlockableType:] */

void FUN_10ba19bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb0a300(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110def678,0x2f,puVar1,3
                      ,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba19c50; end: 10ba19c73; -[SCACommerceUnlockMappingEvent getFieldNumberToFieldDict] */

void FUN_10ba19c50(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba19c74; end: 10ba19cab; -[SCACommerceUnlockMappingEvent addToProtoDictionary] */

void FUN_10ba19c74(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba19cac; end: 10ba19d03; -[SCACommerceUnlockMappingEvent toProtoWithAllowedFields:] */

void FUN_10ba19cac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba19d04; end: 10ba19d0b; -[SCACommerceUnlockMappingEvent getPayloadIdentifier] */

undefined8 FUN_10ba19d04(void)

{
  return 0x285;
}



/* Entry: 10ba19d0c; end: 10ba19d17; -[SCACommerceValidationFailureEvent getEventName] */

undefined ** FUN_10ba19d0c(void)

{
  return &PTR____CFConstantStringClassReference_110fc1d78;
}



/* Entry: 10ba19d18; end: 10ba19d1f; -[SCACommerceValidationFailureEvent getEventQoS] */

undefined8 FUN_10ba19d18(void)

{
  return 1;
}



/* Entry: 10ba19d20; end: 10ba19d9f; -[SCACommerceValidationFailureEvent setValidationFailure:] */

void FUN_10ba19d20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba16d64(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110e55638,0x2a,puVar1,3
                      ,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba19da0; end: 10ba19dc3; -[SCACommerceValidationFailureEvent getFieldNumberToFieldDict] */

void FUN_10ba19da0(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba19dc4; end: 10ba19dfb; -[SCACommerceValidationFailureEvent addToProtoDictionary] */

void FUN_10ba19dc4(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba19dfc; end: 10ba19e53; -[SCACommerceValidationFailureEvent toProtoWithAllowedFields:] */

void FUN_10ba19dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba19e54; end: 10ba19e5b; -[SCACommerceValidationFailureEvent getPayloadIdentifier] */

undefined8 FUN_10ba19e54(void)

{
  return 0x287;
}



/* Entry: 10ba19e5c; end: 10ba19e67; -[SCAPaymentsPaymentMethodsPageView getEventName] */

undefined ** FUN_10ba19e5c(void)

{
  return &PTR____CFConstantStringClassReference_110fc1d98;
}



/* Entry: 10ba19e68; end: 10ba19e6f; -[SCAPaymentsPaymentMethodsPageView getEventQoS] */

undefined8 FUN_10ba19e68(void)

{
  return 1;
}



/* Entry: 10ba19e70; end: 10ba19e87; -[SCAPaymentsPaymentMethodsPageView setAdAccountId:] */

void FUN_10ba19e70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fc1db8,2,param_3,0);
  return;
}



/* Entry: 10ba19e88; end: 10ba19f07; -[SCAPaymentsPaymentMethodsPageView setExitEvent:] */

void FUN_10ba19e88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba19f08; end: 10ba19f87; -[SCAPaymentsPaymentMethodsPageView setNextPage:] */

void FUN_10ba19f08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba16d84(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110e6ed18,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba19f88; end: 10ba1a007; -[SCAPaymentsPaymentMethodsPageView setPageName:] */

void FUN_10ba19f88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba16d84(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110eeb598,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba1a008; end: 10ba1a05b; -[SCAPaymentsPaymentMethodsPageView setPageSequenceId:] */

void FUN_10ba1a008(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fb1a58,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba1a05c; end: 10ba1a073; -[SCAPaymentsPaymentMethodsPageView setPaymentsSessionId:] */

void FUN_10ba1a05c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fc1dd8,7,param_3,0);
  return;
}



/* Entry: 10ba1a074; end: 10ba1a0f3; -[SCAPaymentsPaymentMethodsPageView setPreviousPage:] */

void FUN_10ba1a074(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba16d84(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fc1df8,8,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba1a0f4; end: 10ba1a10b; -[SCAPaymentsPaymentMethodsPageView setSource:] */

void FUN_10ba1a0f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dae8d8,9,param_3,0);
  return;
}



/* Entry: 10ba1a10c; end: 10ba1a15f; -[SCAPaymentsPaymentMethodsPageView setViewTimeSec:] */

void FUN_10ba1a10c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fadb38,10,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba1a160; end: 10ba1a163; -[SCAPaymentsPaymentMethodsPageView getFieldNumberToFieldDict] */

void FUN_10ba1a160(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba1a164; end: 10ba1a16f; -[SCAPaymentsPaymentMethodsPageView toProtoWithAllowedFields:] */

void FUN_10ba1a164(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,2,param_3);
  return;
}



/* Entry: 10ba1a170; end: 10ba1a177; -[SCAPaymentsPaymentMethodsPageView getPayloadIdentifier] */

undefined8 FUN_10ba1a170(void)

{
  return 0x62d;
}



/* Entry: 10ba1a178; end: 10ba1a183; -[SCAScreenshotScanningPermissions getEventName] */

undefined ** FUN_10ba1a178(void)

{
  return &PTR____CFConstantStringClassReference_110fc1e18;
}



/* Entry: 10ba1a184; end: 10ba1a18b; -[SCAScreenshotScanningPermissions getEventQoS] */

undefined8 FUN_10ba1a184(void)

{
  return 1;
}



/* Entry: 10ba1a18c; end: 10ba1a1df; -[SCAScreenshotScanningPermissions setGranted:] */

void FUN_10ba1a18c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110dd9198,2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba1a1e0; end: 10ba1a1e3; -[SCAScreenshotScanningPermissions getFieldNumberToFieldDict] */

void FUN_10ba1a1e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba1a1e4; end: 10ba1a1ef; -[SCAScreenshotScanningPermissions toProtoWithAllowedFields:] */

void FUN_10ba1a1e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba1a1f0; end: 10ba1a217; -[SCAScreenshotScanningPermissions getPayloadIdentifier] */

undefined8 FUN_10ba1a1f0(void)

{
  return 0xb97;
}



/* Entry: 10ba1a218; end: 10ba1a323;  */

undefined8 FUN_10ba1a218(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110fc1e38;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc1e38,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110fc1e58;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc1e58,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e3dd98;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e3dd98,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110db78d8;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110db78d8,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110e36318;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e36318,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110fc1e78;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc1e78,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110fc1e98;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc1e98,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110fc1eb8;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc1eb8,param_2,param_1
                                   );
                uVar2 = 7;
                if (ppuVar1 != (undefined **)0x0) {
                  uVar2 = 0xffffffffffffffff;
                }
              }
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10ba1a324; end: 10ba1a343;  */

undefined * FUN_10ba1a324(ulong param_1)

{
  if (param_1 < 6) {
    return (&PTR_PTR_110d83110)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10ba1a344; end: 10ba1a3fb;  */

undefined8 FUN_10ba1a344(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2dc78;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e2dc78,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de8258;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110de8258,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110fa7e98;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fa7e98,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110e9e078;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e9e078,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110dcdfd8;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dcdfd8,param_2,param_1);
          uVar2 = 5;
          if (ppuVar1 != (undefined **)0x0) {
            uVar2 = 0xffffffffffffffff;
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10ba1a3fc; end: 10ba1a41b;  */

undefined * FUN_10ba1a3fc(ulong param_1)

{
  if (param_1 < 4) {
    return (&PTR_PTR_110d83140)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10ba1a41c; end: 10ba1a4b7;  */

undefined8 FUN_10ba1a41c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110fc1ed8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc1ed8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110fc1ef8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc1ef8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110fc1f18;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc1f18,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110fc1f38;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc1f38,param_2,param_1);
        uVar2 = 3;
        if (ppuVar1 != (undefined **)0x0) {
          uVar2 = 0xffffffffffffffff;
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10ba1a4b8; end: 10ba1a4d7;  */

undefined * FUN_10ba1a4b8(ulong param_1)

{
  if (param_1 < 0xf) {
    return (&PTR_PTR_110d83160)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10ba1a4d8; end: 10ba1a6a7;  */

undefined8 FUN_10ba1a4d8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110fbf198;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fbf198,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e3dd98;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e3dd98,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110fc1f58;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc1f58,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110fc1e58;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc1e58,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110fc1f78;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc1f78,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110fc1f98;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc1f98,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110fc1fb8;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc1fb8,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110fc1fd8;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc1fd8,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 7;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110fc1ff8;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc1ff8,param_2,
                                      param_1);
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 8;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110fc2018;
                    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2018,param_2,
                                        param_1);
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 9;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110fc2038;
                      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2038,param_2,
                                          param_1);
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 10;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_110fc2058;
                        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2058,param_2
                                            ,param_1);
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 0xb;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_110fc2078;
                          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2078,
                                              param_2,param_1);
                          if (ppuVar1 == (undefined **)0x0) {
                            uVar2 = 0xc;
                          }
                          else {
                            ppuVar1 = &PTR____CFConstantStringClassReference_110fc2098;
                            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2098,
                                                param_2,param_1);
                            if (ppuVar1 == (undefined **)0x0) {
                              uVar2 = 0xd;
                            }
                            else {
                              ppuVar1 = &PTR____CFConstantStringClassReference_110efabb8;
                              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110efabb8,
                                                  param_2,param_1);
                              uVar2 = 0xe;
                              if (ppuVar1 != (undefined **)0x0) {
                                uVar2 = 0xffffffffffffffff;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10ba1a6a8; end: 10ba1a6c7;  */

undefined * FUN_10ba1a6a8(ulong param_1)

{
  if (param_1 < 4) {
    return (&PTR_PTR_110d831d8)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10ba1a6c8; end: 10ba1a763;  */

undefined8 FUN_10ba1a6c8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f80118;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f80118,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110fc20b8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc20b8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110fb76f8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fb76f8,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110e35d58;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e35d58,param_2,param_1);
        uVar2 = 3;
        if (ppuVar1 != (undefined **)0x0) {
          uVar2 = 0xffffffffffffffff;
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10ba1a764; end: 10ba1a783;  */

undefined * FUN_10ba1a764(ulong param_1)

{
  if (param_1 < 0x18) {
    return (&PTR_PTR_110d831f8)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10ba1a784; end: 10ba1aa4f;  */

undefined8 FUN_10ba1a784(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110fbf198;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fbf198,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e3dd98;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e3dd98,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110db9e78;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110db9e78,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110fc20d8;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc20d8,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110fc20f8;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc20f8,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110fc2118;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2118,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110fc2138;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2138,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110fc2158;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2158,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 7;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110fc2178;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2178,param_2,
                                      param_1);
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 8;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110fc2198;
                    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2198,param_2,
                                        param_1);
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 9;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110fc21b8;
                      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc21b8,param_2,
                                          param_1);
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 10;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_110fc21d8;
                        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc21d8,param_2
                                            ,param_1);
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 0xb;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_110fc21f8;
                          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc21f8,
                                              param_2,param_1);
                          if (ppuVar1 == (undefined **)0x0) {
                            uVar2 = 0xc;
                          }
                          else {
                            ppuVar1 = &PTR____CFConstantStringClassReference_110fc2218;
                            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2218,
                                                param_2,param_1);
                            if (ppuVar1 == (undefined **)0x0) {
                              uVar2 = 0xd;
                            }
                            else {
                              ppuVar1 = &PTR____CFConstantStringClassReference_110fc2238;
                              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2238,
                                                  param_2,param_1);
                              if (ppuVar1 == (undefined **)0x0) {
                                uVar2 = 0xe;
                              }
                              else {
                                ppuVar1 = &PTR____CFConstantStringClassReference_110fc2258;
                                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2258
                                                    ,param_2,param_1);
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0xf;
                                }
                                else {
                                  ppuVar1 = &PTR____CFConstantStringClassReference_110fc2278;
                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc2278,
                                                  param_2,param_1);
                                  if (ppuVar1 == (undefined **)0x0) {
                                    uVar2 = 0x10;
                                  }
                                  else {
                                    ppuVar1 = &PTR____CFConstantStringClassReference_110fc2298;
                                    func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc2298,
                                                  param_2,param_1);
                                    if (ppuVar1 == (undefined **)0x0) {
                                      uVar2 = 0x11;
                                    }
                                    else {
                                      ppuVar1 = &PTR____CFConstantStringClassReference_110fc22b8;
                                      func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc22b8,
                                                  param_2,param_1);
                                      if (ppuVar1 == (undefined **)0x0) {
                                        uVar2 = 0x12;
                                      }
                                      else {
                                        ppuVar1 = &PTR____CFConstantStringClassReference_110fc22d8;
                                        func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc22d8,
                                                  param_2,param_1);
                                        if (ppuVar1 == (undefined **)0x0) {
                                          uVar2 = 0x13;
                                        }
                                        else {
                                          ppuVar1 = &PTR____CFConstantStringClassReference_110fc22f8
                                          ;
                                          func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc22f8,
                                                  param_2,param_1);
                                          if (ppuVar1 == (undefined **)0x0) {
                                            uVar2 = 0x14;
                                          }
                                          else {
                                            ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc2318;
                                            func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc2318,
                                                  param_2,param_1);
                                            if (ppuVar1 == (undefined **)0x0) {
                                              uVar2 = 0x15;
                                            }
                                            else {
                                              ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc2338;
                                              func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc2338,
                                                  param_2,param_1);
                                              if (ppuVar1 == (undefined **)0x0) {
                                                uVar2 = 0x16;
                                              }
                                              else {
                                                ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc2358;
                                                func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc2358,
                                                  param_2,param_1);
                                                uVar2 = 0x17;
                                                if (ppuVar1 != (undefined **)0x0) {
                                                  uVar2 = 0xffffffffffffffff;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10ba1aa50; end: 10ba1aa6f;  */

undefined * FUN_10ba1aa50(ulong param_1)

{
  if (param_1 < 6) {
    return (&PTR_PTR_110d832b8)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10ba1aa70; end: 10ba1ab43;  */

undefined8 FUN_10ba1aa70(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110fb9378;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fb9378,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110fc2378;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2378,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110fc2398;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2398,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110fc23b8;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc23b8,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110fc23d8;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc23d8,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110fc23f8;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc23f8,param_2,param_1);
            uVar2 = 5;
            if (ppuVar1 != (undefined **)0x0) {
              uVar2 = 0xffffffffffffffff;
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10ba1ab44; end: 10ba1ab63;  */

undefined * FUN_10ba1ab44(ulong param_1)

{
  if (param_1 < 9) {
    return (&PTR_PTR_110d832e8)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10ba1ab64; end: 10ba1ac8b;  */

undefined8 FUN_10ba1ab64(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110fc2418;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2418,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 5;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110fc2438;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2438,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 6;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110fc2458;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2458,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110dd6e58;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dd6e58,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 0;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110f48758;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f48758,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 8;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110fc2478;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2478,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 3;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110fc2498;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2498,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 1;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110fc24b8;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc24b8,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 4;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110fc24d8;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc24d8,param_2,
                                      param_1);
                  uVar2 = 7;
                  if (ppuVar1 != (undefined **)0x0) {
                    uVar2 = 0xffffffffffffffff;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10ba1ac8c; end: 10ba1acab;  */

undefined * FUN_10ba1ac8c(ulong param_1)

{
  if (param_1 < 0xd) {
    return (&PTR_PTR_110d83330)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10ba1acac; end: 10ba1ae3f;  */

long FUN_10ba1acac(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long lVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110fc24f8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc24f8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    lVar2 = 9;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110fc2518;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2518,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      lVar2 = 10;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110fc2538;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2538,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        lVar2 = 0xb;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110fc2558;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2558,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          lVar2 = 4;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110fc2578;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2578,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            lVar2 = 5;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110fc2598;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2598,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              lVar2 = 1;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110fc25b8;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc25b8,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                lVar2 = 2;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110fc25d8;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc25d8,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  lVar2 = 6;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110fc25f8;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc25f8,param_2,
                                      param_1);
                  if (ppuVar1 == (undefined **)0x0) {
                    lVar2 = 7;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110fc2618;
                    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2618,param_2,
                                        param_1);
                    if (ppuVar1 == (undefined **)0x0) {
                      lVar2 = 0xc;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110dea818;
                      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dea818,param_2,
                                          param_1);
                      if (ppuVar1 == (undefined **)0x0) {
                        lVar2 = 3;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_110fc2638;
                        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2638,param_2
                                            ,param_1);
                        if (ppuVar1 == (undefined **)0x0) {
                          lVar2 = 8;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_110daf6b8;
                          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110daf6b8,
                                              param_2,param_1);
                          lVar2 = -(ulong)(ppuVar1 != (undefined **)0x0);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 10ba1ae40; end: 10ba1ae63;  */

undefined ** FUN_10ba1ae40(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110fc2658;
  if (param_1 != 1) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110e2a058;
  if (param_1 != 0) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10ba1ae64; end: 10ba1aec7;  */

undefined8 FUN_10ba1ae64(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2a058;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e2a058,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110fc2658;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2658,param_2,param_1);
    uVar2 = 0xffffffffffffffff;
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10ba1aec8; end: 10ba1aee7;  */

undefined * FUN_10ba1aec8(ulong param_1)

{
  if (param_1 < 7) {
    return (&PTR_PTR_110d83398)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10ba1aee8; end: 10ba1afd7;  */

undefined8 FUN_10ba1aee8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc1618;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dc1618,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110fc2678;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2678,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e302f8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e302f8,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110fc2698;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2698,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110fc26b8;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc26b8,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110f12418;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f12418,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110fc26d8;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc26d8,param_2,param_1);
              uVar2 = 6;
              if (ppuVar1 != (undefined **)0x0) {
                uVar2 = 0xffffffffffffffff;
              }
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10ba1afd8; end: 10ba1aff7;  */

undefined * FUN_10ba1afd8(ulong param_1)

{
  if (param_1 < 3) {
    return (&PTR_PTR_110d833d0)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10ba1aff8; end: 10ba1b077;  */

undefined8 FUN_10ba1aff8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e30ab8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e30ab8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110fc26f8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc26f8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110fc2718;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2718,param_2,param_1);
      uVar2 = 2;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0xffffffffffffffff;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10ba1b078; end: 10ba1b097;  */

undefined * FUN_10ba1b078(ulong param_1)

{
  if (param_1 < 8) {
    return (&PTR_PTR_110d833e8)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10ba1b098; end: 10ba1b1a3;  */

undefined8 FUN_10ba1b098(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110fc2738;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2738,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110fc2758;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2758,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dcbef8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dcbef8,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110fc2778;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2778,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110e36318;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e36318,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110fc2798;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2798,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110fc27b8;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc27b8,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110fc27d8;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc27d8,param_2,param_1
                                   );
                uVar2 = 7;
                if (ppuVar1 != (undefined **)0x0) {
                  uVar2 = 0xffffffffffffffff;
                }
              }
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10ba1b1a4; end: 10ba1b1c3;  */

undefined * FUN_10ba1b1a4(ulong param_1)

{
  if (param_1 < 4) {
    return (&PTR_PTR_110d83428)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10ba1b1c4; end: 10ba1b25f;  */

undefined8 FUN_10ba1b1c4(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110fc27f8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc27f8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110fc2818;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2818,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dc18d8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dc18d8,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110fc2838;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2838,param_2,param_1);
        uVar2 = 3;
        if (ppuVar1 != (undefined **)0x0) {
          uVar2 = 0xffffffffffffffff;
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10ba1b260; end: 10ba1b27f;  */

undefined * FUN_10ba1b260(ulong param_1)

{
  if (param_1 < 8) {
    return (&PTR_PTR_110d83448)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10ba1b280; end: 10ba1b38b;  */

undefined8 FUN_10ba1b280(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e71c78;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e71c78,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110fc2858;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2858,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e62ed8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e62ed8,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f307f8;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f307f8,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110fc2878;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2878,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110fc2898;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2898,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110fc28b8;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc28b8,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110fc28d8;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc28d8,param_2,param_1
                                   );
                uVar2 = 7;
                if (ppuVar1 != (undefined **)0x0) {
                  uVar2 = 0xffffffffffffffff;
                }
              }
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10ba1b38c; end: 10ba1b3af;  */

undefined ** FUN_10ba1b38c(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2a058;
  if (param_1 != 1) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110fc28f8;
  if (param_1 != 0) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10ba1b3b0; end: 10ba1b413;  */

undefined8 FUN_10ba1b3b0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110fc28f8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc28f8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e2a058;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e2a058,param_2,param_1);
    uVar2 = 0xffffffffffffffff;
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10ba1b414; end: 10ba1b437;  */

undefined * FUN_10ba1b414(long param_1)

{
  if (param_1 - 1U < 0x14) {
    return (&PTR_PTR_110d83488)[param_1 - 1U];
  }
  return (undefined *)0x0;
}



/* Entry: 10ba1b438; end: 10ba1b693;  */

undefined8 FUN_10ba1b438(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110fc2918;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2918,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 3;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110fc2938;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2938,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110fc2958;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2958,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110fc2978;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2978,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 4;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110fc2998;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2998,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 5;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110fc29b8;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc29b8,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 6;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110fc29d8;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc29d8,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 0x10;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110fc29f8;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc29f8,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 0x11;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110fc2a18;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2a18,param_2,
                                      param_1);
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 7;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110fc2a38;
                    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2a38,param_2,
                                        param_1);
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 8;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110fc2a58;
                      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2a58,param_2,
                                          param_1);
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 9;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_110fc2a78;
                        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2a78,param_2
                                            ,param_1);
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 10;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_110fc2a98;
                          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2a98,
                                              param_2,param_1);
                          if (ppuVar1 == (undefined **)0x0) {
                            uVar2 = 0x12;
                          }
                          else {
                            ppuVar1 = &PTR____CFConstantStringClassReference_110fc2ab8;
                            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2ab8,
                                                param_2,param_1);
                            if (ppuVar1 == (undefined **)0x0) {
                              uVar2 = 0xb;
                            }
                            else {
                              ppuVar1 = &PTR____CFConstantStringClassReference_110fc2ad8;
                              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2ad8,
                                                  param_2,param_1);
                              if (ppuVar1 == (undefined **)0x0) {
                                uVar2 = 0xc;
                              }
                              else {
                                ppuVar1 = &PTR____CFConstantStringClassReference_110fc2af8;
                                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2af8
                                                    ,param_2,param_1);
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0xd;
                                }
                                else {
                                  ppuVar1 = &PTR____CFConstantStringClassReference_110fc2b18;
                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc2b18,
                                                  param_2,param_1);
                                  if (ppuVar1 == (undefined **)0x0) {
                                    uVar2 = 0xe;
                                  }
                                  else {
                                    ppuVar1 = &PTR____CFConstantStringClassReference_110fc2b38;
                                    func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc2b38,
                                                  param_2,param_1);
                                    if (ppuVar1 == (undefined **)0x0) {
                                      uVar2 = 0xf;
                                    }
                                    else {
                                      ppuVar1 = &PTR____CFConstantStringClassReference_110fc2b58;
                                      func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc2b58,
                                                  param_2,param_1);
                                      if (ppuVar1 == (undefined **)0x0) {
                                        uVar2 = 0x13;
                                      }
                                      else {
                                        ppuVar1 = &PTR____CFConstantStringClassReference_110fc2b78;
                                        func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc2b78,
                                                  param_2,param_1);
                                        uVar2 = 0x14;
                                        if (ppuVar1 != (undefined **)0x0) {
                                          uVar2 = 0xffffffffffffffff;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10ba1b694; end: 10ba1b6b3;  */

undefined * FUN_10ba1b694(ulong param_1)

{
  if (param_1 < 6) {
    return (&PTR_PTR_110d83528)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10ba1b6b4; end: 10ba1b787;  */

undefined8 FUN_10ba1b6b4(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110fc2b98;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2b98,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110fc2bb8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2bb8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dba258;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dba258,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110db9ed8;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110db9ed8,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110fc2bd8;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2bd8,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110fc2bf8;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2bf8,param_2,param_1);
            uVar2 = 5;
            if (ppuVar1 != (undefined **)0x0) {
              uVar2 = 0xffffffffffffffff;
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10ba1b788; end: 10ba1b7ab;  */

undefined ** FUN_10ba1b788(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110fc2c38;
  if (param_1 != 1) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110fc2c18;
  if (param_1 != 0) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10ba1b7ac; end: 10ba1b80f;  */

undefined8 FUN_10ba1b7ac(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110fc2c18;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2c18,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110fc2c38;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2c38,param_2,param_1);
    uVar2 = 0xffffffffffffffff;
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10ba1b810; end: 10ba1b82f;  */

undefined * FUN_10ba1b810(ulong param_1)

{
  if (param_1 < 0xe) {
    return (&PTR_PTR_110d83558)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10ba1b830; end: 10ba1b9e3;  */

undefined8 FUN_10ba1b830(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110fc2c58;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2c58,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110fc2c78;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2c78,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110fc2c98;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2c98,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110fc2cb8;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2cb8,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110fc2cd8;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2cd8,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110fc2cf8;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2cf8,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110fc2d18;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2d18,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110fc2d38;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2d38,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 7;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110fc2d58;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2d58,param_2,
                                      param_1);
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 8;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110fc2d78;
                    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2d78,param_2,
                                        param_1);
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 9;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110fc2d98;
                      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2d98,param_2,
                                          param_1);
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 10;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_110fc2db8;
                        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2db8,param_2
                                            ,param_1);
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 0xb;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_110fc2dd8;
                          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2dd8,
                                              param_2,param_1);
                          if (ppuVar1 == (undefined **)0x0) {
                            uVar2 = 0xc;
                          }
                          else {
                            ppuVar1 = &PTR____CFConstantStringClassReference_110fc2df8;
                            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2df8,
                                                param_2,param_1);
                            uVar2 = 0xd;
                            if (ppuVar1 != (undefined **)0x0) {
                              uVar2 = 0xffffffffffffffff;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10ba1b9e4; end: 10ba1ba03;  */

undefined * FUN_10ba1b9e4(ulong param_1)

{
  if (param_1 < 3) {
    return (&PTR_PTR_110d835c8)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10ba1ba04; end: 10ba1ba83;  */

undefined8 FUN_10ba1ba04(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110fc2e18;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2e18,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110fc2e38;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2e38,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110fc2e58;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2e58,param_2,param_1);
      uVar2 = 2;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0xffffffffffffffff;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10ba1ba84; end: 10ba1baa7;  */

undefined ** FUN_10ba1ba84(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110fa1cd8;
  if (param_1 != 1) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110fa8338;
  if (param_1 != 0) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10ba1baa8; end: 10ba1bb0b;  */

undefined8 FUN_10ba1baa8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110fa8338;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fa8338,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110fa1cd8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fa1cd8,param_2,param_1);
    uVar2 = 0xffffffffffffffff;
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10ba1bb0c; end: 10ba1bb2b;  */

undefined * FUN_10ba1bb0c(ulong param_1)

{
  if (param_1 < 6) {
    return (&PTR_PTR_110d835e0)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10ba1bb2c; end: 10ba1bbff;  */

undefined8 FUN_10ba1bb2c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf6b8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110daf6b8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110fc2e78;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2e78,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110fc2e98;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2e98,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110fc2eb8;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2eb8,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110fc2ed8;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2ed8,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110fc2ef8;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2ef8,param_2,param_1);
            uVar2 = 5;
            if (ppuVar1 != (undefined **)0x0) {
              uVar2 = 0xffffffffffffffff;
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10ba1bc00; end: 10ba1bc1f;  */

undefined * FUN_10ba1bc00(ulong param_1)

{
  if (param_1 < 0x29) {
    return (&PTR_PTR_110d83610)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10ba1bc20; end: 10ba1c0c7;  */

undefined8 FUN_10ba1bc20(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110fc2f18;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2f18,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110fc2f38;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2f38,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110fc2f58;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2f58,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110fc2f78;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2f78,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110fc2f98;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2f98,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110fc2fb8;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2fb8,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110fc2fd8;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2fd8,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110fc2ff8;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2ff8,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 7;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110fc3018;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc3018,param_2,
                                      param_1);
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 8;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110fc3038;
                    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc3038,param_2,
                                        param_1);
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 9;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110fc3058;
                      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc3058,param_2,
                                          param_1);
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 10;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_110fc2a78;
                        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc2a78,param_2
                                            ,param_1);
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 0xd;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_110fc3078;
                          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc3078,
                                              param_2,param_1);
                          if (ppuVar1 == (undefined **)0x0) {
                            uVar2 = 0xb;
                          }
                          else {
                            ppuVar1 = &PTR____CFConstantStringClassReference_110fc3098;
                            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc3098,
                                                param_2,param_1);
                            if (ppuVar1 == (undefined **)0x0) {
                              uVar2 = 0xc;
                            }
                            else {
                              ppuVar1 = &PTR____CFConstantStringClassReference_110fc30b8;
                              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc30b8,
                                                  param_2,param_1);
                              if (ppuVar1 == (undefined **)0x0) {
                                uVar2 = 0xe;
                              }
                              else {
                                ppuVar1 = &PTR____CFConstantStringClassReference_110fc30d8;
                                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc30d8
                                                    ,param_2,param_1);
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0xf;
                                }
                                else {
                                  ppuVar1 = &PTR____CFConstantStringClassReference_110fc2958;
                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc2958,
                                                  param_2,param_1);
                                  if (ppuVar1 == (undefined **)0x0) {
                                    uVar2 = 0x10;
                                  }
                                  else {
                                    ppuVar1 = &PTR____CFConstantStringClassReference_110fc2938;
                                    func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc2938,
                                                  param_2,param_1);
                                    if (ppuVar1 == (undefined **)0x0) {
                                      uVar2 = 0x11;
                                    }
                                    else {
                                      ppuVar1 = &PTR____CFConstantStringClassReference_110fc30f8;
                                      func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc30f8,
                                                  param_2,param_1);
                                      if (ppuVar1 == (undefined **)0x0) {
                                        uVar2 = 0x12;
                                      }
                                      else {
                                        ppuVar1 = &PTR____CFConstantStringClassReference_110fc3118;
                                        func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc3118,
                                                  param_2,param_1);
                                        if (ppuVar1 == (undefined **)0x0) {
                                          uVar2 = 0x13;
                                        }
                                        else {
                                          ppuVar1 = &PTR____CFConstantStringClassReference_110fc3138
                                          ;
                                          func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc3138,
                                                  param_2,param_1);
                                          if (ppuVar1 == (undefined **)0x0) {
                                            uVar2 = 0x14;
                                          }
                                          else {
                                            ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc3158;
                                            func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc3158,
                                                  param_2,param_1);
                                            if (ppuVar1 == (undefined **)0x0) {
                                              uVar2 = 0x15;
                                            }
                                            else {
                                              ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc3178;
                                              func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc3178,
                                                  param_2,param_1);
                                              if (ppuVar1 == (undefined **)0x0) {
                                                uVar2 = 0x16;
                                              }
                                              else {
                                                ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc3198;
                                                func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc3198,
                                                  param_2,param_1);
                                                if (ppuVar1 == (undefined **)0x0) {
                                                  uVar2 = 0x17;
                                                }
                                                else {
                                                  ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc31b8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc31b8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x18;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc31d8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc31d8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x19;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc31f8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc31f8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1a;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc3218;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc3218,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1b;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc3238;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc3238,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1c;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc3258;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc3258,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1d;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc2b58;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc2b58,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1e;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc3278;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc3278,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1f;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc3298;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc3298,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x20;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc32b8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc32b8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x21;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc32d8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc32d8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x22;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc2b78;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc2b78,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x23;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc32f8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc32f8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x24;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc3318;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc3318,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x25;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc3338;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc3338,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x26;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc3358;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc3358,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x27;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc3378;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc3378,
                                                  param_2,param_1);
                                                  uVar2 = 0x28;
                                                  if (ppuVar1 != (undefined **)0x0) {
                                                    uVar2 = 0xffffffffffffffff;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10ba1c0c8; end: 10ba1c0e7;  */

undefined * FUN_10ba1c0c8(ulong param_1)

{
  if (param_1 < 0x32) {
    return (&PTR_PTR_110d83758)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10ba1c0e8; end: 10ba1c68b;  */

undefined8 FUN_10ba1c0e8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110fc3398;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc3398,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110fc33b8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc33b8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f12238;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f12238,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110fc33d8;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc33d8,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110fc33f8;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc33f8,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110fc3418;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc3418,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110fc3438;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc3438,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110fc3458;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc3458,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 7;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110fc3478;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc3478,param_2,
                                      param_1);
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 8;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110ea4678;
                    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110ea4678,param_2,
                                        param_1);
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 9;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110fc3498;
                      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc3498,param_2,
                                          param_1);
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 10;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_110fc34b8;
                        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc34b8,param_2
                                            ,param_1);
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 0xb;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_110fc34d8;
                          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc34d8,
                                              param_2,param_1);
                          if (ppuVar1 == (undefined **)0x0) {
                            uVar2 = 0xc;
                          }
                          else {
                            ppuVar1 = &PTR____CFConstantStringClassReference_110dba1f8;
                            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dba1f8,
                                                param_2,param_1);
                            if (ppuVar1 == (undefined **)0x0) {
                              uVar2 = 0xd;
                            }
                            else {
                              ppuVar1 = &PTR____CFConstantStringClassReference_110fc34f8;
                              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc34f8,
                                                  param_2,param_1);
                              if (ppuVar1 == (undefined **)0x0) {
                                uVar2 = 0xe;
                              }
                              else {
                                ppuVar1 = &PTR____CFConstantStringClassReference_110fc3518;
                                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc3518
                                                    ,param_2,param_1);
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0xf;
                                }
                                else {
                                  ppuVar1 = &PTR____CFConstantStringClassReference_110fc3538;
                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc3538,
                                                  param_2,param_1);
                                  if (ppuVar1 == (undefined **)0x0) {
                                    uVar2 = 0x10;
                                  }
                                  else {
                                    ppuVar1 = &PTR____CFConstantStringClassReference_110fc3558;
                                    func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc3558,
                                                  param_2,param_1);
                                    if (ppuVar1 == (undefined **)0x0) {
                                      uVar2 = 0x11;
                                    }
                                    else {
                                      ppuVar1 = &PTR____CFConstantStringClassReference_110fc3578;
                                      func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc3578,
                                                  param_2,param_1);
                                      if (ppuVar1 == (undefined **)0x0) {
                                        uVar2 = 0x12;
                                      }
                                      else {
                                        ppuVar1 = &PTR____CFConstantStringClassReference_110fc3598;
                                        func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc3598,
                                                  param_2,param_1);
                                        if (ppuVar1 == (undefined **)0x0) {
                                          uVar2 = 0x13;
                                        }
                                        else {
                                          ppuVar1 = &PTR____CFConstantStringClassReference_110fc35b8
                                          ;
                                          func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc35b8,
                                                  param_2,param_1);
                                          if (ppuVar1 == (undefined **)0x0) {
                                            uVar2 = 0x14;
                                          }
                                          else {
                                            ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc35d8;
                                            func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc35d8,
                                                  param_2,param_1);
                                            if (ppuVar1 == (undefined **)0x0) {
                                              uVar2 = 0x15;
                                            }
                                            else {
                                              ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc35f8;
                                              func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc35f8,
                                                  param_2,param_1);
                                              if (ppuVar1 == (undefined **)0x0) {
                                                uVar2 = 0x16;
                                              }
                                              else {
                                                ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc3618;
                                                func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc3618,
                                                  param_2,param_1);
                                                if (ppuVar1 == (undefined **)0x0) {
                                                  uVar2 = 0x17;
                                                }
                                                else {
                                                  ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc3638;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc3638,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x18;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc3658;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc3658,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x19;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc3678;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc3678,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1a;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc3698;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc3698,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x24;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc36b8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc36b8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1b;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc36d8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc36d8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1f;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc36f8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc36f8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x20;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc3718;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc3718,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x21;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc3738;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc3738,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x22;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc3758;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc3758,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x23;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc3778;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc3778,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x25;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc3798;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc3798,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x26;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc37b8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc37b8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x27;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110dba2f8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110dba2f8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1c;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110dba298;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110dba298,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1d;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110dba358;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110dba358,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x1e;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc37d8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc37d8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x28;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc37f8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc37f8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x29;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc3818;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc3818,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x2a;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc3838;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc3838,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x2b;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc3858;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc3858,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x2c;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc3878;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc3878,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x2d;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc3898;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc3898,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x2e;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc38b8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc38b8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x2f;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc38d8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc38d8,
                                                  param_2,param_1);
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x30;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110fc38f8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110fc38f8,
                                                  param_2,param_1);
                                                  uVar2 = 0x31;
                                                  if (ppuVar1 != (undefined **)0x0) {
                                                    uVar2 = 0xffffffffffffffff;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10ba1c68c; end: 10ba1c6ab;  */

undefined * FUN_10ba1c68c(ulong param_1)

{
  if (param_1 < 5) {
    return (&PTR_PTR_110d838e8)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10ba1c6ac; end: 10ba1c763;  */

undefined8 FUN_10ba1c6ac(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110fc3918;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc3918,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110fc3938;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc3938,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110fc3958;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc3958,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110fa0c98;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fa0c98,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110e8c478;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e8c478,param_2,param_1);
          uVar2 = 4;
          if (ppuVar1 != (undefined **)0x0) {
            uVar2 = 0xffffffffffffffff;
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10ba1c764; end: 10ba1c783;  */

undefined * FUN_10ba1c764(ulong param_1)

{
  if (param_1 < 0xc) {
    return (&PTR_PTR_110d83910)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10ba1c784; end: 10ba1c8ff;  */

undefined8 FUN_10ba1c784(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dba078;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dba078,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e62f38;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e62f38,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e62f58;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e62f58,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110e53518;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e53518,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110e50338;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e50338,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110fc3978;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc3978,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110fc3998;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc3998,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 6;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110e349f8;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e349f8,param_2,param_1
                                   );
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 7;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110fc39b8;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc39b8,param_2,
                                      param_1);
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 8;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110fc39d8;
                    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc39d8,param_2,
                                        param_1);
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 9;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110fc39f8;
                      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc39f8,param_2,
                                          param_1);
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 10;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_110fc3a18;
                        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc3a18,param_2
                                            ,param_1);
                        uVar2 = 0xb;
                        if (ppuVar1 != (undefined **)0x0) {
                          uVar2 = 0xffffffffffffffff;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10ba1c900; end: 10ba1c91f;  */

undefined * FUN_10ba1c900(ulong param_1)

{
  if (param_1 < 8) {
    return (&PTR_PTR_110d83970)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10ba1c920; end: 10ba1ca2b;  */

undefined8 FUN_10ba1c920(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf6b8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110daf6b8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 6;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e550f8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e550f8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e2ac38;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e2ac38,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 1;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110dba178;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dba178,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 2;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110fc3a38;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc3a38,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 3;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110e30ab8;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e30ab8,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 4;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110f16ef8;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f16ef8,param_2,param_1);
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 5;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110fc3a58;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc3a58,param_2,param_1
                                   );
                uVar2 = 7;
                if (ppuVar1 != (undefined **)0x0) {
                  uVar2 = 0xffffffffffffffff;
                }
              }
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10ba1ca2c; end: 10ba1ca4b;  */

undefined * FUN_10ba1ca2c(ulong param_1)

{
  if (param_1 < 3) {
    return (&PTR_PTR_110d839b0)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10ba1ca4c; end: 10ba1cacb;  */

undefined8 FUN_10ba1ca4c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dbf098;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dbf098,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daf8f8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110daf8f8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110fc3a78;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc3a78,param_2,param_1);
      uVar2 = 2;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0xffffffffffffffff;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10ba1cacc; end: 10ba1caef;  */

undefined ** FUN_10ba1cacc(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110fc3a98;
  if (param_1 != 1) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110eaa358;
  if (param_1 != 0) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10ba1caf0; end: 10ba1cb53;  */

undefined8 FUN_10ba1caf0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110eaa358;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110eaa358,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110fc3a98;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc3a98,param_2,param_1);
    uVar2 = 0xffffffffffffffff;
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10ba1cb54; end: 10ba1cb73;  */

undefined * FUN_10ba1cb54(ulong param_1)

{
  if (param_1 < 5) {
    return (&PTR_PTR_110d839c8)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10ba1cb74; end: 10ba1cc2b;  */

undefined8 FUN_10ba1cb74(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110fc3ab8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc3ab8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110fc3ad8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc3ad8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110fc3af8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc3af8,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110e33798;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e33798,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110fc3b18;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc3b18,param_2,param_1);
          uVar2 = 4;
          if (ppuVar1 != (undefined **)0x0) {
            uVar2 = 0xffffffffffffffff;
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10ba1cc2c; end: 10ba1cc4b;  */

undefined * FUN_10ba1cc2c(ulong param_1)

{
  if (param_1 < 4) {
    return (&PTR_PTR_110d839f0)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10ba1cc4c; end: 10ba1cccb;  */

undefined8 FUN_10ba1cc4c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110fc3b38;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc3b38,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dbaad8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dbaad8,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 3;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dbaab8;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dbaab8,param_2,param_1);
      uVar2 = 2;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0xffffffffffffffff;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10ba1cccc; end: 10ba1cceb;  */

undefined * FUN_10ba1cccc(ulong param_1)

{
  if (param_1 < 7) {
    return (&PTR_PTR_110d83a10)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10ba1ccec; end: 10ba1cddb;  */

undefined8 FUN_10ba1ccec(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf6b8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110daf6b8,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110fc3b58;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc3b58,param_2,param_1);
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 1;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110fc3b78;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110fc3b78,param_2,param_1);
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 2;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110de8378;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110de8378,param_2,param_1);
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 3;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110e9c0b8;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e9c0b8,param_2,param_1);
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 4;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110eb5398;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110eb5398,param_2,param_1);
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 5;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110f67a98;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f67a98,param_2,param_1);
              uVar2 = 6;
              if (ppuVar1 != (undefined **)0x0) {
                uVar2 = 0xffffffffffffffff;
              }
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10ba1cddc; end: 10ba1cdff;  */

undefined ** FUN_10ba1cddc(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110fc3bb8;
  if (param_1 != 1) {
    ppuVar1 = (undefined **)0x0;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110fc3b98;
  if (param_1 != 0) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}


