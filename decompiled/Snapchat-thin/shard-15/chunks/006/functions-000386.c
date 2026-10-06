/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bacc160; end: 10bacc203;  */

undefined * FUN_10bacc160(ulong param_1)

{
  if (param_1 < 4) {
    return (&PTR_PTR_110d88600)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 10bacc204; end: 10bacc20f; -[SCAAppStoryModalAction getEventName] */

undefined ** FUN_10bacc204(void)

{
  return &PTR____CFConstantStringClassReference_110ff1318;
}



/* Entry: 10bacc210; end: 10bacc217; -[SCAAppStoryModalAction getEventQoS] */

undefined8 FUN_10bacc210(void)

{
  return 1;
}



/* Entry: 10bacc218; end: 10bacc223; -[SCAAppStoryModalAction getPerUserSamplingRateV2] */

undefined8 FUN_10bacc218(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bacc224; end: 10bacc2a3; -[SCAAppStoryModalAction setActionType:] */

void FUN_10bacc224(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bacbff8(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fa2618,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bacc2a4; end: 10bacc2bb; -[SCAAppStoryModalAction setAppId:] */

void FUN_10bacc2a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fae058,3,param_3,0);
  return;
}



/* Entry: 10bacc2bc; end: 10bacc2bf; -[SCAAppStoryModalAction getFieldNumberToFieldDict] */

void FUN_10bacc2bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bacc2c0; end: 10bacc2cb; -[SCAAppStoryModalAction toProtoWithAllowedFields:] */

void FUN_10bacc2c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bacc2cc; end: 10bacc2d3; -[SCAAppStoryModalAction getPayloadIdentifier] */

undefined8 FUN_10bacc2cc(void)

{
  return 0xa1;
}



/* Entry: 10bacc2d4; end: 10bacc2df; -[SCAAppStoryModalView getEventName] */

undefined ** FUN_10bacc2d4(void)

{
  return &PTR____CFConstantStringClassReference_110ff1338;
}



/* Entry: 10bacc2e0; end: 10bacc2e7; -[SCAAppStoryModalView getEventQoS] */

undefined8 FUN_10bacc2e0(void)

{
  return 1;
}



/* Entry: 10bacc2e8; end: 10bacc2f3; -[SCAAppStoryModalView getPerUserSamplingRateV2] */

undefined8 FUN_10bacc2e8(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bacc2f4; end: 10bacc30b; -[SCAAppStoryModalView setAppId:] */

void FUN_10bacc2f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fae058,2,param_3,0);
  return;
}



/* Entry: 10bacc30c; end: 10bacc30f; -[SCAAppStoryModalView getFieldNumberToFieldDict] */

void FUN_10bacc30c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bacc310; end: 10bacc31b; -[SCAAppStoryModalView toProtoWithAllowedFields:] */

void FUN_10bacc310(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bacc31c; end: 10bacc323; -[SCAAppStoryModalView getPayloadIdentifier] */

undefined8 FUN_10bacc31c(void)

{
  return 0xa3;
}



/* Entry: 10bacc324; end: 10bacc39f; -[SCACreativeKitBaseEvent setCreativeKitProductType:] */

void FUN_10bacc324(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb10900(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b860(param_1,param_2,&PTR____CFConstantStringClassReference_110ff1358,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bacc3a0; end: 10bacc41b; -[SCACreativeKitBaseEvent setCreativeKitShareType:] */

void FUN_10bacc3a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010baf4cec(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b860(param_1,param_2,&PTR____CFConstantStringClassReference_110ff1378,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bacc41c; end: 10bacc46b; -[SCACreativeKitBaseEvent setDeepLinkHandlingId:] */

void FUN_10bacc41c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110ed9218,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bacc46c; end: 10bacc47f; -[SCACreativeKitBaseEvent setDeepLinkUrl:] */

void FUN_10bacc46c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_value_type__112644840,
             &PTR____CFConstantStringClassReference_110ed91f8,param_3,0);
  return;
}



/* Entry: 10bacc480; end: 10bacc4cf; -[SCACreativeKitBaseEvent setHasAttachmentUrl:] */

void FUN_10bacc480(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110ff1398,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bacc4d0; end: 10bacc51f; -[SCACreativeKitBaseEvent setHasCaption:] */

void FUN_10bacc4d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110ea0a58,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bacc520; end: 10bacc56f; -[SCACreativeKitBaseEvent setHasLensData:] */

void FUN_10bacc520(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110ff13b8,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bacc570; end: 10bacc5bf; -[SCACreativeKitBaseEvent setHasLensLaunchData:] */

void FUN_10bacc570(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110ed9238,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bacc5c0; end: 10bacc60f; -[SCACreativeKitBaseEvent setHasStickerData:] */

void FUN_10bacc5c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110ff13d8,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bacc610; end: 10bacc623; -[SCACreativeKitBaseEvent setIdentifierForVendor:] */

void FUN_10bacc610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_value_type__112644840,
             &PTR____CFConstantStringClassReference_110ed9278,param_3,0);
  return;
}



/* Entry: 10bacc624; end: 10bacc637; -[SCACreativeKitBaseEvent setIpAddress:] */

void FUN_10bacc624(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_value_type__112644840,
             &PTR____CFConstantStringClassReference_110ed9298,param_3,0);
  return;
}



/* Entry: 10bacc638; end: 10bacc687; -[SCACreativeKitBaseEvent setIsDraggableSticker:] */

void FUN_10bacc638(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110ed9258,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bacc688; end: 10bacc6d7; -[SCACreativeKitBaseEvent setIsSpotlightPostingPermitted:] */

void FUN_10bacc688(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110ed8f58,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bacc6d8; end: 10bacc727; -[SCACreativeKitBaseEvent setIsUsingAutogeneratedSticker:] */

void FUN_10bacc6d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110ed8f78,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bacc728; end: 10bacc73b; -[SCACreativeKitBaseEvent setSnapAdsId:] */

void FUN_10bacc728(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_value_type__112644840,
             &PTR____CFConstantStringClassReference_110ed92b8,param_3,0);
  return;
}



/* Entry: 10bacc73c; end: 10bacc747; -[SCACreativeKitCameraLoad getEventName] */

undefined ** FUN_10bacc73c(void)

{
  return &PTR____CFConstantStringClassReference_110ff13f8;
}



/* Entry: 10bacc748; end: 10bacc74f; -[SCACreativeKitCameraLoad getEventQoS] */

undefined8 FUN_10bacc748(void)

{
  return 1;
}



/* Entry: 10bacc750; end: 10bacc75b; -[SCACreativeKitCameraLoad getPerUserSamplingRateV2] */

undefined8 FUN_10bacc750(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bacc75c; end: 10bacc7af; -[SCACreativeKitCameraLoad setRequiresIdentityWebView:] */

void FUN_10bacc75c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110ed91b8,0x10,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bacc7b0; end: 10bacc803; -[SCACreativeKitCameraLoad setTimeSinceDeepLinkStartMillis:] */

void FUN_10bacc7b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110ff1418,0x13,puVar1,4
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bacc804; end: 10bacc827; -[SCACreativeKitCameraLoad getFieldNumberToFieldDict] */

void FUN_10bacc804(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bacc828; end: 10bacc85f; -[SCACreativeKitCameraLoad addToProtoDictionary] */

void FUN_10bacc828(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bacc860; end: 10bacc8b7; -[SCACreativeKitCameraLoad toProtoWithAllowedFields:] */

void FUN_10bacc860(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,4,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10bacc8b8; end: 10bacc8bf; -[SCACreativeKitCameraLoad getPayloadIdentifier] */

undefined8 FUN_10bacc8b8(void)

{
  return 0xfc3;
}



/* Entry: 10bacc8c0; end: 10bacc8cb; -[SCACreativeKitCameraViewStickerInteraction getEventName] */

undefined ** FUN_10bacc8c0(void)

{
  return &PTR____CFConstantStringClassReference_110ff14b8;
}



/* Entry: 10bacc8cc; end: 10bacc8d3; -[SCACreativeKitCameraViewStickerInteraction getEventQoS] */

undefined8 FUN_10bacc8cc(void)

{
  return 1;
}



/* Entry: 10bacc8d4; end: 10bacc8df; -[SCACreativeKitCameraViewStickerInteraction getPerUserSamplingRateV2] */

undefined8 FUN_10bacc8d4(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bacc8e0; end: 10bacc933; -[SCACreativeKitCameraViewStickerInteraction setNumberOfAttemptedInteractions:] */

void FUN_10bacc8e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110ff14d8,0x38,puVar1,4
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bacc934; end: 10bacc987; -[SCACreativeKitCameraViewStickerInteraction setDidUserAdjustSticker:] */

void FUN_10bacc934(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110ff14f8,0x3d,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bacc988; end: 10bacc9db; -[SCACreativeKitCameraViewStickerInteraction setFinalHeight:] */

void FUN_10bacc988(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110ff1518,0x3e,puVar1,4
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bacc9dc; end: 10bacca2f; -[SCACreativeKitCameraViewStickerInteraction setFinalWidth:] */

void FUN_10bacc9dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110ff1538,0x42,puVar1,4
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bacca30; end: 10bacca83; -[SCACreativeKitCameraViewStickerInteraction setOriginalHeight:] */

void FUN_10bacca30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110ff1558,0x44,puVar1,4
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bacca84; end: 10baccad7; -[SCACreativeKitCameraViewStickerInteraction setOriginalWidth:] */

void FUN_10bacca84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110ff1578,0x48,puVar1,4
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10baccad8; end: 10baccb2b; -[SCACreativeKitCameraViewStickerInteraction setFinalPosX:] */

void FUN_10baccad8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110ff1598,0x49,puVar1,2
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10baccb2c; end: 10baccb7f; -[SCACreativeKitCameraViewStickerInteraction setFinalPosY:] */

void FUN_10baccb2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110ff15b8,0x4a,puVar1,2
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10baccb80; end: 10baccbd3; -[SCACreativeKitCameraViewStickerInteraction setFinalRotationInRadians:] */

void FUN_10baccb80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110ff15d8,0x4b,puVar1,2
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10baccbd4; end: 10baccc27; -[SCACreativeKitCameraViewStickerInteraction setOriginalPosX:] */

void FUN_10baccbd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110ff15f8,0x4c,puVar1,2
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10baccc28; end: 10baccc7b; -[SCACreativeKitCameraViewStickerInteraction setOriginalPosY:] */

void FUN_10baccc28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110ff1618,0x4d,puVar1,2
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10baccc7c; end: 10baccccf; -[SCACreativeKitCameraViewStickerInteraction setOriginalRotationInRadians:] */

void FUN_10baccc7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110ff1638,0x4e,puVar1,2
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bacccd0; end: 10bacccf3; -[SCACreativeKitCameraViewStickerInteraction getFieldNumberToFieldDict] */

void FUN_10bacccd0(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bacccf4; end: 10baccd2b; -[SCACreativeKitCameraViewStickerInteraction addToProtoDictionary] */

void FUN_10bacccf4(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10baccd2c; end: 10baccd83; -[SCACreativeKitCameraViewStickerInteraction toProtoWithAllowedFields:] */

void FUN_10baccd2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,10,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10baccd84; end: 10baccd8b; -[SCACreativeKitCameraViewStickerInteraction getPayloadIdentifier] */

undefined8 FUN_10baccd84(void)

{
  return 0xfe0;
}



/* Entry: 10baccd8c; end: 10baccd97; -[SCACreativeKitDeeplinkProcessingStart getEventName] */

undefined ** FUN_10baccd8c(void)

{
  return &PTR____CFConstantStringClassReference_110ff1658;
}



/* Entry: 10baccd98; end: 10baccd9f; -[SCACreativeKitDeeplinkProcessingStart getEventQoS] */

undefined8 FUN_10baccd98(void)

{
  return 1;
}



/* Entry: 10baccda0; end: 10baccdab; -[SCACreativeKitDeeplinkProcessingStart getPerUserSamplingRateV2] */

undefined8 FUN_10baccda0(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10baccdac; end: 10baccdcf; -[SCACreativeKitDeeplinkProcessingStart getFieldNumberToFieldDict] */

void FUN_10baccdac(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10baccdd0; end: 10bacce07; -[SCACreativeKitDeeplinkProcessingStart addToProtoDictionary] */

void FUN_10baccdd0(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bacce08; end: 10bacce5f; -[SCACreativeKitDeeplinkProcessingStart toProtoWithAllowedFields:] */

void FUN_10bacce08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bacce60; end: 10bacce67; -[SCACreativeKitDeeplinkProcessingStart getPayloadIdentifier] */

undefined8 FUN_10bacce60(void)

{
  return 0x1034;
}



/* Entry: 10bacce68; end: 10bacce73; -[SCACreativeKitDeeplinkStart getEventName] */

undefined ** FUN_10bacce68(void)

{
  return &PTR____CFConstantStringClassReference_110ff1678;
}



/* Entry: 10bacce74; end: 10bacce7b; -[SCACreativeKitDeeplinkStart getEventQoS] */

undefined8 FUN_10bacce74(void)

{
  return 1;
}



/* Entry: 10bacce7c; end: 10baccecf; -[SCACreativeKitDeeplinkStart setRequiresIdentityWebView:] */

void FUN_10bacce7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110ed91b8,0x13,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bacced0; end: 10baccf23; -[SCACreativeKitDeeplinkStart setDidDeclinePasteboardAccess:] */

void FUN_10bacced0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110ff1698,0x16,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10baccf24; end: 10baccf47; -[SCACreativeKitDeeplinkStart getFieldNumberToFieldDict] */

void FUN_10baccf24(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10baccf48; end: 10baccf7f; -[SCACreativeKitDeeplinkStart addToProtoDictionary] */

void FUN_10baccf48(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10baccf80; end: 10baccfd7; -[SCACreativeKitDeeplinkStart toProtoWithAllowedFields:] */

void FUN_10baccf80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,4,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10baccfd8; end: 10baccfdf; -[SCACreativeKitDeeplinkStart getPayloadIdentifier] */

undefined8 FUN_10baccfd8(void)

{
  return 0xf7b;
}



/* Entry: 10baccfe0; end: 10baccfeb; -[SCACreativeKitErrorEvent getEventName] */

undefined ** FUN_10baccfe0(void)

{
  return &PTR____CFConstantStringClassReference_110ff16b8;
}



/* Entry: 10baccfec; end: 10baccff3; -[SCACreativeKitErrorEvent getEventQoS] */

undefined8 FUN_10baccfec(void)

{
  return 1;
}



/* Entry: 10baccff4; end: 10baccfff; -[SCACreativeKitErrorEvent getPerUserSamplingRateV2] */

undefined8 FUN_10baccff4(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bacd000; end: 10bacd017; -[SCACreativeKitErrorEvent setAdditionalErrorInfo:] */

void FUN_10bacd000(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ff16d8,2,param_3,0);
  return;
}



/* Entry: 10bacd018; end: 10bacd02f; -[SCACreativeKitErrorEvent setErrorType:] */

void FUN_10bacd018(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dd6078,7,param_3,0);
  return;
}



/* Entry: 10bacd030; end: 10bacd083; -[SCACreativeKitErrorEvent setHttpStatusCode:] */

void FUN_10bacd030(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110ff16f8,0xd,puVar1,4)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bacd084; end: 10bacd0d7; -[SCACreativeKitErrorEvent setIsClient:] */

void FUN_10bacd084(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110ff1718,0xe,puVar1,1)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bacd0d8; end: 10bacd0fb; -[SCACreativeKitErrorEvent getFieldNumberToFieldDict] */

void FUN_10bacd0d8(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bacd0fc; end: 10bacd133; -[SCACreativeKitErrorEvent addToProtoDictionary] */

void FUN_10bacd0fc(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bacd134; end: 10bacd18b; -[SCACreativeKitErrorEvent toProtoWithAllowedFields:] */

void FUN_10bacd134(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,4,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10bacd18c; end: 10bacd193; -[SCACreativeKitErrorEvent getPayloadIdentifier] */

undefined8 FUN_10bacd18c(void)

{
  return 0x1035;
}



/* Entry: 10bacd194; end: 10bacd19f; -[SCACreativeKitPasteboardAccess getEventName] */

undefined ** FUN_10bacd194(void)

{
  return &PTR____CFConstantStringClassReference_110ff1738;
}



/* Entry: 10bacd1a0; end: 10bacd1a7; -[SCACreativeKitPasteboardAccess getEventQoS] */

undefined8 FUN_10bacd1a0(void)

{
  return 1;
}



/* Entry: 10bacd1a8; end: 10bacd1b3; -[SCACreativeKitPasteboardAccess getPerUserSamplingRateV2] */

undefined8 FUN_10bacd1a8(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bacd1b4; end: 10bacd233; -[SCACreativeKitPasteboardAccess setCreativeKitPasteboardAction:] */

void FUN_10bacd1b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bacc018(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110ff1758,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bacd234; end: 10bacd287; -[SCACreativeKitPasteboardAccess setPresentModalCount:] */

void FUN_10bacd234(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110ff1778,0x13,puVar1,4
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bacd288; end: 10bacd2ab; -[SCACreativeKitPasteboardAccess getFieldNumberToFieldDict] */

void FUN_10bacd288(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bacd2ac; end: 10bacd2e3; -[SCACreativeKitPasteboardAccess addToProtoDictionary] */

void FUN_10bacd2ac(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bacd2e4; end: 10bacd33b; -[SCACreativeKitPasteboardAccess toProtoWithAllowedFields:] */

void FUN_10bacd2e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,4,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10bacd33c; end: 10bacd343; -[SCACreativeKitPasteboardAccess getPayloadIdentifier] */

undefined8 FUN_10bacd33c(void)

{
  return 0xffe;
}



/* Entry: 10bacd344; end: 10bacd34f; -[SCACreativeKitPreviewLoad getEventName] */

undefined ** FUN_10bacd344(void)

{
  return &PTR____CFConstantStringClassReference_110ff1798;
}



/* Entry: 10bacd350; end: 10bacd357; -[SCACreativeKitPreviewLoad getEventQoS] */

undefined8 FUN_10bacd350(void)

{
  return 1;
}



/* Entry: 10bacd358; end: 10bacd363; -[SCACreativeKitPreviewLoad getPerUserSamplingRateV2] */

undefined8 FUN_10bacd358(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bacd364; end: 10bacd3b7; -[SCACreativeKitPreviewLoad setRequiresIdentityWebView:] */

void FUN_10bacd364(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110ed91b8,0x10,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bacd3b8; end: 10bacd40b; -[SCACreativeKitPreviewLoad setTimeSinceDeepLinkStartMillis:] */

void FUN_10bacd3b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110ff1418,0x13,puVar1,4
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bacd40c; end: 10bacd42f; -[SCACreativeKitPreviewLoad getFieldNumberToFieldDict] */

void FUN_10bacd40c(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}


