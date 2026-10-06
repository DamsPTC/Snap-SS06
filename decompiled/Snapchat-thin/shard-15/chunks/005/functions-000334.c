/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ba8e190; end: 10ba8e1e3; -[SCAMapButtonTap setMapViewportSessionId:] */

void FUN_10ba8e190(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110eb59d8,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8e1e4; end: 10ba8e1e7; -[SCAMapButtonTap getFieldNumberToFieldDict] */

void FUN_10ba8e1e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba8e1e8; end: 10ba8e1f3; -[SCAMapButtonTap toProtoWithAllowedFields:] */

void FUN_10ba8e1e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba8e1f4; end: 10ba8e1fb; -[SCAMapButtonTap getPayloadIdentifier] */

undefined8 FUN_10ba8e1f4(void)

{
  return 0x52b;
}



/* Entry: 10ba8e1fc; end: 10ba8e207; -[SCAMapCalloutAction getEventName] */

undefined ** FUN_10ba8e1fc(void)

{
  return &PTR____CFConstantStringClassReference_110fe0818;
}



/* Entry: 10ba8e208; end: 10ba8e20f; -[SCAMapCalloutAction getEventQoS] */

undefined8 FUN_10ba8e208(void)

{
  return 1;
}



/* Entry: 10ba8e210; end: 10ba8e227; -[SCAMapCalloutAction setAction:] */

void FUN_10ba8e210(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110daf5b8,2,param_3,0);
  return;
}



/* Entry: 10ba8e228; end: 10ba8e27b; -[SCAMapCalloutAction setMapSessionId:] */

void FUN_10ba8e228(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110eb59b8,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8e27c; end: 10ba8e293; -[SCAMapCalloutAction setTargetId:] */

void FUN_10ba8e27c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fe0838,4,param_3,0);
  return;
}



/* Entry: 10ba8e294; end: 10ba8e2ab; -[SCAMapCalloutAction setTargetType:] */

void FUN_10ba8e294(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fe0858,5,param_3,0);
  return;
}



/* Entry: 10ba8e2ac; end: 10ba8e2c3; -[SCAMapCalloutAction setType:] */

void FUN_10ba8e2ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dad058,6,param_3,0);
  return;
}



/* Entry: 10ba8e2c4; end: 10ba8e2db; -[SCAMapCalloutAction setIsrc:] */

void FUN_10ba8e2c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fe0878,7,param_3,0);
  return;
}



/* Entry: 10ba8e2dc; end: 10ba8e2f3; -[SCAMapCalloutAction setMusicTrackId:] */

void FUN_10ba8e2dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110eb59f8,8,param_3,0);
  return;
}



/* Entry: 10ba8e2f4; end: 10ba8e2f7; -[SCAMapCalloutAction getFieldNumberToFieldDict] */

void FUN_10ba8e2f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba8e2f8; end: 10ba8e303; -[SCAMapCalloutAction toProtoWithAllowedFields:] */

void FUN_10ba8e2f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba8e304; end: 10ba8e30b; -[SCAMapCalloutAction getPayloadIdentifier] */

undefined8 FUN_10ba8e304(void)

{
  return 0x181e;
}



/* Entry: 10ba8e30c; end: 10ba8e317; -[SCAMapCameraMovement getEventName] */

undefined ** FUN_10ba8e30c(void)

{
  return &PTR____CFConstantStringClassReference_110fe0898;
}



/* Entry: 10ba8e318; end: 10ba8e31f; -[SCAMapCameraMovement getEventQoS] */

undefined8 FUN_10ba8e318(void)

{
  return 1;
}



/* Entry: 10ba8e320; end: 10ba8e373; -[SCAMapCameraMovement setInitialBearing:] */

void FUN_10ba8e320(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe08b8,2,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8e374; end: 10ba8e3c7; -[SCAMapCameraMovement setInitialPitch:] */

void FUN_10ba8e374(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe08d8,3,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8e3c8; end: 10ba8e41b; -[SCAMapCameraMovement setInitialZoom:] */

void FUN_10ba8e3c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe08f8,4,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8e41c; end: 10ba8e46f; -[SCAMapCameraMovement setTargetBearing:] */

void FUN_10ba8e41c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe0918,5,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8e470; end: 10ba8e4c3; -[SCAMapCameraMovement setTargetPitch:] */

void FUN_10ba8e470(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe0938,6,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8e4c4; end: 10ba8e517; -[SCAMapCameraMovement setTargetZoom:] */

void FUN_10ba8e4c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe0958,7,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8e518; end: 10ba8e51b; -[SCAMapCameraMovement getFieldNumberToFieldDict] */

void FUN_10ba8e518(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba8e51c; end: 10ba8e527; -[SCAMapCameraMovement toProtoWithAllowedFields:] */

void FUN_10ba8e51c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba8e528; end: 10ba8e52f; -[SCAMapCameraMovement getPayloadIdentifier] */

undefined8 FUN_10ba8e528(void)

{
  return 0x19eb;
}



/* Entry: 10ba8e530; end: 10ba8e53b; -[SCAMapChatToggle getEventName] */

undefined ** FUN_10ba8e530(void)

{
  return &PTR____CFConstantStringClassReference_110fe0978;
}



/* Entry: 10ba8e53c; end: 10ba8e543; -[SCAMapChatToggle getEventQoS] */

undefined8 FUN_10ba8e53c(void)

{
  return 1;
}



/* Entry: 10ba8e544; end: 10ba8e55b; -[SCAMapChatToggle setAction:] */

void FUN_10ba8e544(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110daf5b8,2,param_3,0);
  return;
}



/* Entry: 10ba8e55c; end: 10ba8e55f; -[SCAMapChatToggle getFieldNumberToFieldDict] */

void FUN_10ba8e55c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba8e560; end: 10ba8e56b; -[SCAMapChatToggle toProtoWithAllowedFields:] */

void FUN_10ba8e560(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba8e56c; end: 10ba8e573; -[SCAMapChatToggle getPayloadIdentifier] */

undefined8 FUN_10ba8e56c(void)

{
  return 0x1470;
}



/* Entry: 10ba8e574; end: 10ba8e57f; -[SCAMapClearCurrentInferredVisit getEventName] */

undefined ** FUN_10ba8e574(void)

{
  return &PTR____CFConstantStringClassReference_110fe0998;
}



/* Entry: 10ba8e580; end: 10ba8e587; -[SCAMapClearCurrentInferredVisit getEventQoS] */

undefined8 FUN_10ba8e580(void)

{
  return 1;
}



/* Entry: 10ba8e588; end: 10ba8e607; -[SCAMapClearCurrentInferredVisit setClearSource:] */

void FUN_10ba8e588(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c31264(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fe09b8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8e608; end: 10ba8e61f; -[SCAMapClearCurrentInferredVisit setInferredPlaceId:] */

void FUN_10ba8e608(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fe09d8,3,param_3,0);
  return;
}



/* Entry: 10ba8e620; end: 10ba8e623; -[SCAMapClearCurrentInferredVisit getFieldNumberToFieldDict] */

void FUN_10ba8e620(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba8e624; end: 10ba8e62f; -[SCAMapClearCurrentInferredVisit toProtoWithAllowedFields:] */

void FUN_10ba8e624(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba8e630; end: 10ba8e637; -[SCAMapClearCurrentInferredVisit getPayloadIdentifier] */

undefined8 FUN_10ba8e630(void)

{
  return 0x155a;
}



/* Entry: 10ba8e638; end: 10ba8e643; -[SCAMapCompassAction getEventName] */

undefined ** FUN_10ba8e638(void)

{
  return &PTR____CFConstantStringClassReference_110fe09f8;
}



/* Entry: 10ba8e644; end: 10ba8e64b; -[SCAMapCompassAction getEventQoS] */

undefined8 FUN_10ba8e644(void)

{
  return 1;
}



/* Entry: 10ba8e64c; end: 10ba8e6cb; -[SCAMapCompassAction setAction:] */

void FUN_10ba8e64c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bae7500(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110daf5b8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8e6cc; end: 10ba8e71f; -[SCAMapCompassAction setDistanceInMeters:] */

void FUN_10ba8e6cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe0a18,3,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8e720; end: 10ba8e773; -[SCAMapCompassAction setMapFriendCount:] */

void FUN_10ba8e720(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe0a38,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8e774; end: 10ba8e7c7; -[SCAMapCompassAction setMapSessionId:] */

void FUN_10ba8e774(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110eb59b8,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8e7c8; end: 10ba8e81b; -[SCAMapCompassAction setViewportFriendCount:] */

void FUN_10ba8e7c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe0a58,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8e81c; end: 10ba8e81f; -[SCAMapCompassAction getFieldNumberToFieldDict] */

void FUN_10ba8e81c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba8e820; end: 10ba8e82b; -[SCAMapCompassAction toProtoWithAllowedFields:] */

void FUN_10ba8e820(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba8e82c; end: 10ba8e833; -[SCAMapCompassAction getPayloadIdentifier] */

undefined8 FUN_10ba8e82c(void)

{
  return 0x52d;
}



/* Entry: 10ba8e834; end: 10ba8e83f; -[SCAMapDialogPromptClose getEventName] */

undefined ** FUN_10ba8e834(void)

{
  return &PTR____CFConstantStringClassReference_110fe0a78;
}



/* Entry: 10ba8e840; end: 10ba8e847; -[SCAMapDialogPromptClose getEventQoS] */

undefined8 FUN_10ba8e840(void)

{
  return 1;
}



/* Entry: 10ba8e848; end: 10ba8e853; -[SCAMapDialogPromptClose getPerUserSamplingRateV2] */

undefined8 FUN_10ba8e848(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba8e854; end: 10ba8e8d3; -[SCAMapDialogPromptClose setCloseMethod:] */

void FUN_10ba8e854(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba8c500(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fc9658,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8e8d4; end: 10ba8e927; -[SCAMapDialogPromptClose setDialogId:] */

void FUN_10ba8e8d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe0a98,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8e928; end: 10ba8e97b; -[SCAMapDialogPromptClose setMapSessionId:] */

void FUN_10ba8e928(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110eb59b8,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8e97c; end: 10ba8e9cf; -[SCAMapDialogPromptClose setStatusSessionId:] */

void FUN_10ba8e97c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe0ab8,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8e9d0; end: 10ba8e9d3; -[SCAMapDialogPromptClose getFieldNumberToFieldDict] */

void FUN_10ba8e9d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba8e9d4; end: 10ba8e9df; -[SCAMapDialogPromptClose toProtoWithAllowedFields:] */

void FUN_10ba8e9d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba8e9e0; end: 10ba8e9e7; -[SCAMapDialogPromptClose getPayloadIdentifier] */

undefined8 FUN_10ba8e9e0(void)

{
  return 0xfa4;
}



/* Entry: 10ba8e9e8; end: 10ba8e9f3; -[SCAMapDialogPromptOpen getEventName] */

undefined ** FUN_10ba8e9e8(void)

{
  return &PTR____CFConstantStringClassReference_110fe0ad8;
}



/* Entry: 10ba8e9f4; end: 10ba8e9fb; -[SCAMapDialogPromptOpen getEventQoS] */

undefined8 FUN_10ba8e9f4(void)

{
  return 1;
}



/* Entry: 10ba8e9fc; end: 10ba8ea4f; -[SCAMapDialogPromptOpen setDialogId:] */

void FUN_10ba8e9fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe0a98,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8ea50; end: 10ba8eaa3; -[SCAMapDialogPromptOpen setMapSessionId:] */

void FUN_10ba8ea50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110eb59b8,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8eaa4; end: 10ba8eb23; -[SCAMapDialogPromptOpen setSource:] */

void FUN_10ba8eaa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c31264(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8eb24; end: 10ba8eb77; -[SCAMapDialogPromptOpen setStatusSessionId:] */

void FUN_10ba8eb24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe0ab8,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8eb78; end: 10ba8ebf7; -[SCAMapDialogPromptOpen setType:] */

void FUN_10ba8eb78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba8c524(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dad058,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8ebf8; end: 10ba8ebfb; -[SCAMapDialogPromptOpen getFieldNumberToFieldDict] */

void FUN_10ba8ebf8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba8ebfc; end: 10ba8ec07; -[SCAMapDialogPromptOpen toProtoWithAllowedFields:] */

void FUN_10ba8ebfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba8ec08; end: 10ba8ec0f; -[SCAMapDialogPromptOpen getPayloadIdentifier] */

undefined8 FUN_10ba8ec08(void)

{
  return 0xfa5;
}



/* Entry: 10ba8ec10; end: 10ba8ec1b; -[SCAMapDynamicSdkEvent getEventName] */

undefined ** FUN_10ba8ec10(void)

{
  return &PTR____CFConstantStringClassReference_110fe0af8;
}



/* Entry: 10ba8ec1c; end: 10ba8ec23; -[SCAMapDynamicSdkEvent getEventQoS] */

undefined8 FUN_10ba8ec1c(void)

{
  return 1;
}



/* Entry: 10ba8ec24; end: 10ba8ec3b; -[SCAMapDynamicSdkEvent setProperties:] */

void FUN_10ba8ec24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110df13d8,3,param_3,0);
  return;
}



/* Entry: 10ba8ec3c; end: 10ba8ec53; -[SCAMapDynamicSdkEvent setDynamicEventName:] */

void FUN_10ba8ec3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fe0b18,4,param_3,0);
  return;
}



/* Entry: 10ba8ec54; end: 10ba8ec57; -[SCAMapDynamicSdkEvent getFieldNumberToFieldDict] */

void FUN_10ba8ec54(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba8ec58; end: 10ba8ec63; -[SCAMapDynamicSdkEvent toProtoWithAllowedFields:] */

void FUN_10ba8ec58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba8ec64; end: 10ba8ec6b; -[SCAMapDynamicSdkEvent getPayloadIdentifier] */

undefined8 FUN_10ba8ec64(void)

{
  return 0x184a;
}



/* Entry: 10ba8ec6c; end: 10ba8ec77; -[SCAMapEmbeddedMapView getEventName] */

undefined ** FUN_10ba8ec6c(void)

{
  return &PTR____CFConstantStringClassReference_110fe0b38;
}



/* Entry: 10ba8ec78; end: 10ba8ec7f; -[SCAMapEmbeddedMapView getEventQoS] */

undefined8 FUN_10ba8ec78(void)

{
  return 1;
}



/* Entry: 10ba8ec80; end: 10ba8ecff; -[SCAMapEmbeddedMapView setSource:] */

void FUN_10ba8ec80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c31264(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8ed00; end: 10ba8ed17; -[SCAMapEmbeddedMapView setProfileSessionId:] */

void FUN_10ba8ed00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb1a98,3,param_3,0);
  return;
}



/* Entry: 10ba8ed18; end: 10ba8ed1b; -[SCAMapEmbeddedMapView getFieldNumberToFieldDict] */

void FUN_10ba8ed18(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba8ed1c; end: 10ba8ed27; -[SCAMapEmbeddedMapView toProtoWithAllowedFields:] */

void FUN_10ba8ed1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba8ed28; end: 10ba8ed2f; -[SCAMapEmbeddedMapView getPayloadIdentifier] */

undefined8 FUN_10ba8ed28(void)

{
  return 0x52e;
}



/* Entry: 10ba8ed30; end: 10ba8ed3b; -[SCAMapError getEventName] */

undefined ** FUN_10ba8ed30(void)

{
  return &PTR____CFConstantStringClassReference_110fe0b58;
}



/* Entry: 10ba8ed3c; end: 10ba8ed43; -[SCAMapError getEventQoS] */

undefined8 FUN_10ba8ed3c(void)

{
  return 1;
}



/* Entry: 10ba8ed44; end: 10ba8ed5b; -[SCAMapError setCallsite:] */

void FUN_10ba8ed44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dea058,2,param_3,0);
  return;
}



/* Entry: 10ba8ed5c; end: 10ba8ed73; -[SCAMapError setErrorMessage:] */

void FUN_10ba8ed5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e0a338,3,param_3,0);
  return;
}



/* Entry: 10ba8ed74; end: 10ba8edc7; -[SCAMapError setIsFatal:] */

void FUN_10ba8ed74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fe0b78,4,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8edc8; end: 10ba8ee1b; -[SCAMapError setMapSessionId:] */

void FUN_10ba8edc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110eb59b8,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8ee1c; end: 10ba8ee9b; -[SCAMapError setNetworkReachability:] */

void FUN_10ba8ee1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bc99d9c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110f62ef8,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8ee9c; end: 10ba8eeb3; -[SCAMapError setStackTrace:] */

void FUN_10ba8ee9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fbd078,7,param_3,0);
  return;
}



/* Entry: 10ba8eeb4; end: 10ba8ef07; -[SCAMapError setTimestamp:] */

void FUN_10ba8eeb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110dc1558,8,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba8ef08; end: 10ba8ef0b; -[SCAMapError getFieldNumberToFieldDict] */

void FUN_10ba8ef08(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba8ef0c; end: 10ba8ef17; -[SCAMapError toProtoWithAllowedFields:] */

void FUN_10ba8ef0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba8ef18; end: 10ba8ef1f; -[SCAMapError getPayloadIdentifier] */

undefined8 FUN_10ba8ef18(void)

{
  return 0xf82;
}



/* Entry: 10ba8ef20; end: 10ba8ef2b; -[SCAMapFootstepsAction getEventName] */

undefined ** FUN_10ba8ef20(void)

{
  return &PTR____CFConstantStringClassReference_110fe0b98;
}



/* Entry: 10ba8ef2c; end: 10ba8ef33; -[SCAMapFootstepsAction getEventQoS] */

undefined8 FUN_10ba8ef2c(void)

{
  return 1;
}



/* Entry: 10ba8ef34; end: 10ba8ef4b; -[SCAMapFootstepsAction setAction:] */

void FUN_10ba8ef34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110daf5b8,2,param_3,0);
  return;
}



/* Entry: 10ba8ef4c; end: 10ba8ef9f; -[SCAMapFootstepsAction setMapSessionId:] */

void FUN_10ba8ef4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110eb59b8,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


