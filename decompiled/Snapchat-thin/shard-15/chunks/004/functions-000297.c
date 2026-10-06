/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ba5c8a4; end: 10ba5c8bb; -[SCAPalmTreeControlSessionEvent setControlName:] */

void FUN_10ba5c8a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fd2898,2,param_3,0);
  return;
}



/* Entry: 10ba5c8bc; end: 10ba5c8d3; -[SCAPalmTreeControlSessionEvent setControlSessionID:] */

void FUN_10ba5c8bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fd28b8,3,param_3,0);
  return;
}



/* Entry: 10ba5c8d4; end: 10ba5c953; -[SCAPalmTreeControlSessionEvent setEventType:] */

void FUN_10ba5c8d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba53e54(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110e795d8,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5c954; end: 10ba5c9a7; -[SCAPalmTreeControlSessionEvent setModified:] */

void FUN_10ba5c954(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110e0fc18,6,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5c9a8; end: 10ba5c9bf; -[SCAPalmTreeControlSessionEvent setToolName:] */

void FUN_10ba5c9a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fd28d8,8,param_3,0);
  return;
}



/* Entry: 10ba5c9c0; end: 10ba5c9d7; -[SCAPalmTreeControlSessionEvent setToolSessionID:] */

void FUN_10ba5c9c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fd28f8,9,param_3,0);
  return;
}



/* Entry: 10ba5c9d8; end: 10ba5c9fb; -[SCAPalmTreeControlSessionEvent getFieldNumberToFieldDict] */

void FUN_10ba5c9d8(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba5c9fc; end: 10ba5ca33; -[SCAPalmTreeControlSessionEvent addToProtoDictionary] */

void FUN_10ba5c9fc(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba5ca34; end: 10ba5ca8b; -[SCAPalmTreeControlSessionEvent toProtoWithAllowedFields:] */

void FUN_10ba5ca34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba5ca8c; end: 10ba5ca93; -[SCAPalmTreeControlSessionEvent getPayloadIdentifier] */

undefined8 FUN_10ba5ca8c(void)

{
  return 0xdb1;
}



/* Entry: 10ba5ca94; end: 10ba5ca9f; -[SCAPalmTreeEventBase getEventName] */

undefined ** FUN_10ba5ca94(void)

{
  return &PTR____CFConstantStringClassReference_110fd2978;
}



/* Entry: 10ba5caa0; end: 10ba5caa7; -[SCAPalmTreeEventBase getEventQoS] */

undefined8 FUN_10ba5caa0(void)

{
  return 1;
}



/* Entry: 10ba5caa8; end: 10ba5cab3; -[SCAPalmTreeEventBase getPerUserSamplingRateV2] */

undefined8 FUN_10ba5caa8(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba5cab4; end: 10ba5cacb; -[SCAPalmTreeEventBase setEditTypes:] */

void FUN_10ba5cab4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fd2918,2,param_3,0);
  return;
}



/* Entry: 10ba5cacc; end: 10ba5cae3; -[SCAPalmTreeEventBase setProjectID:] */

void FUN_10ba5cacc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fd2938,3,param_3,0);
  return;
}



/* Entry: 10ba5cae4; end: 10ba5cafb; -[SCAPalmTreeEventBase setUserID:] */

void FUN_10ba5cae4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fd2958,4,param_3,0);
  return;
}



/* Entry: 10ba5cafc; end: 10ba5caff; -[SCAPalmTreeEventBase getFieldNumberToFieldDict] */

void FUN_10ba5cafc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba5cb00; end: 10ba5cb0b; -[SCAPalmTreeEventBase toProtoWithAllowedFields:] */

void FUN_10ba5cb00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba5cb0c; end: 10ba5cb13; -[SCAPalmTreeEventBase getPayloadIdentifier] */

undefined8 FUN_10ba5cb0c(void)

{
  return 0xdab;
}



/* Entry: 10ba5cb14; end: 10ba5cb1f; -[SCAPalmTreeExportEvent getEventName] */

undefined ** FUN_10ba5cb14(void)

{
  return &PTR____CFConstantStringClassReference_110fd2998;
}



/* Entry: 10ba5cb20; end: 10ba5cb27; -[SCAPalmTreeExportEvent getEventQoS] */

undefined8 FUN_10ba5cb20(void)

{
  return 1;
}



/* Entry: 10ba5cb28; end: 10ba5cb2f; -[SCAPalmTreeExportEvent getPerUserSamplingRateV2] */

undefined8 FUN_10ba5cb28(void)

{
  return 0x3ff0000000000000;
}



/* Entry: 10ba5cb30; end: 10ba5cb47; -[SCAPalmTreeExportEvent setExportDestination:] */

void FUN_10ba5cb30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fd29b8,3,param_3,0);
  return;
}



/* Entry: 10ba5cb48; end: 10ba5cb9b; -[SCAPalmTreeExportEvent setNumberOfClips:] */

void FUN_10ba5cb48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd29d8,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5cb9c; end: 10ba5cbbf; -[SCAPalmTreeExportEvent getFieldNumberToFieldDict] */

void FUN_10ba5cb9c(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba5cbc0; end: 10ba5cbf7; -[SCAPalmTreeExportEvent addToProtoDictionary] */

void FUN_10ba5cbc0(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba5cbf8; end: 10ba5cc4f; -[SCAPalmTreeExportEvent toProtoWithAllowedFields:] */

void FUN_10ba5cbf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ba5cc50; end: 10ba5cc57; -[SCAPalmTreeExportEvent getPayloadIdentifier] */

undefined8 FUN_10ba5cc50(void)

{
  return 0xdb2;
}



/* Entry: 10ba5cc58; end: 10ba5cc63; -[SCAPalmTreeMusicSave getEventName] */

undefined ** FUN_10ba5cc58(void)

{
  return &PTR____CFConstantStringClassReference_110fd29f8;
}



/* Entry: 10ba5cc64; end: 10ba5cc6b; -[SCAPalmTreeMusicSave getEventQoS] */

undefined8 FUN_10ba5cc64(void)

{
  return 1;
}



/* Entry: 10ba5cc6c; end: 10ba5cc77; -[SCAPalmTreeMusicSave getPerUserSamplingRateV2] */

undefined8 FUN_10ba5cc6c(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba5cc78; end: 10ba5cc8f; -[SCAPalmTreeMusicSave setMusicTrackId:] */

void FUN_10ba5cc78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110eb59f8,2,param_3,0);
  return;
}



/* Entry: 10ba5cc90; end: 10ba5cc93; -[SCAPalmTreeMusicSave getFieldNumberToFieldDict] */

void FUN_10ba5cc90(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba5cc94; end: 10ba5cc9f; -[SCAPalmTreeMusicSave toProtoWithAllowedFields:] */

void FUN_10ba5cc94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba5cca0; end: 10ba5cca7; -[SCAPalmTreeMusicSave getPayloadIdentifier] */

undefined8 FUN_10ba5cca0(void)

{
  return 0xc79;
}



/* Entry: 10ba5cca8; end: 10ba5ccb3; -[SCAPalmTreeProjectStatusEvent getEventName] */

undefined ** FUN_10ba5cca8(void)

{
  return &PTR____CFConstantStringClassReference_110fd2a18;
}



/* Entry: 10ba5ccb4; end: 10ba5ccbb; -[SCAPalmTreeProjectStatusEvent getEventQoS] */

undefined8 FUN_10ba5ccb4(void)

{
  return 1;
}



/* Entry: 10ba5ccbc; end: 10ba5ccc3; -[SCAPalmTreeProjectStatusEvent getPerUserSamplingRateV2] */

undefined8 FUN_10ba5ccbc(void)

{
  return 0x3ff0000000000000;
}



/* Entry: 10ba5ccc4; end: 10ba5cd43; -[SCAPalmTreeProjectStatusEvent setStatus:] */

void FUN_10ba5ccc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba53e78(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110daf4d8,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5cd44; end: 10ba5cd67; -[SCAPalmTreeProjectStatusEvent getFieldNumberToFieldDict] */

void FUN_10ba5cd44(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba5cd68; end: 10ba5cd9f; -[SCAPalmTreeProjectStatusEvent addToProtoDictionary] */

void FUN_10ba5cd68(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba5cda0; end: 10ba5cdf7; -[SCAPalmTreeProjectStatusEvent toProtoWithAllowedFields:] */

void FUN_10ba5cda0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ba5cdf8; end: 10ba5cdff; -[SCAPalmTreeProjectStatusEvent getPayloadIdentifier] */

undefined8 FUN_10ba5cdf8(void)

{
  return 0xdb4;
}



/* Entry: 10ba5ce00; end: 10ba5ce0b; -[SCAPalmTreeToolSessionEvent getEventName] */

undefined ** FUN_10ba5ce00(void)

{
  return &PTR____CFConstantStringClassReference_110fd2a38;
}



/* Entry: 10ba5ce0c; end: 10ba5ce13; -[SCAPalmTreeToolSessionEvent getEventQoS] */

undefined8 FUN_10ba5ce0c(void)

{
  return 1;
}



/* Entry: 10ba5ce14; end: 10ba5ce1b; -[SCAPalmTreeToolSessionEvent getPerUserSamplingRateV2] */

undefined8 FUN_10ba5ce14(void)

{
  return 0x3ff0000000000000;
}



/* Entry: 10ba5ce1c; end: 10ba5ce9b; -[SCAPalmTreeToolSessionEvent setEventType:] */

void FUN_10ba5ce1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba53e98(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110e795d8,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5ce9c; end: 10ba5ceef; -[SCAPalmTreeToolSessionEvent setModified:] */

void FUN_10ba5ce9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110e0fc18,4,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5cef0; end: 10ba5cf07; -[SCAPalmTreeToolSessionEvent setToolName:] */

void FUN_10ba5cef0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fd28d8,6,param_3,0);
  return;
}



/* Entry: 10ba5cf08; end: 10ba5cf1f; -[SCAPalmTreeToolSessionEvent setToolSessionID:] */

void FUN_10ba5cf08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fd28f8,7,param_3,0);
  return;
}



/* Entry: 10ba5cf20; end: 10ba5cf43; -[SCAPalmTreeToolSessionEvent getFieldNumberToFieldDict] */

void FUN_10ba5cf20(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba5cf44; end: 10ba5cf7b; -[SCAPalmTreeToolSessionEvent addToProtoDictionary] */

void FUN_10ba5cf44(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba5cf7c; end: 10ba5cfd3; -[SCAPalmTreeToolSessionEvent toProtoWithAllowedFields:] */

void FUN_10ba5cf7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ba5cfd4; end: 10ba5cfdb; -[SCAPalmTreeToolSessionEvent getPayloadIdentifier] */

undefined8 FUN_10ba5cfd4(void)

{
  return 0xdb6;
}



/* Entry: 10ba5cfdc; end: 10ba5cfe7; -[SCAPreviewEntryPointLatency getEventName] */

undefined ** FUN_10ba5cfdc(void)

{
  return &PTR____CFConstantStringClassReference_110fd2a58;
}



/* Entry: 10ba5cfe8; end: 10ba5cfef; -[SCAPreviewEntryPointLatency getEventQoS] */

undefined8 FUN_10ba5cfe8(void)

{
  return 1;
}



/* Entry: 10ba5cff0; end: 10ba5cffb; -[SCAPreviewEntryPointLatency getPerUserSamplingRateV2] */

undefined8 FUN_10ba5cff0(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba5cffc; end: 10ba5d04f; -[SCAPreviewEntryPointLatency setBeginMethodLatency:] */

void FUN_10ba5cffc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd2a78,2,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5d050; end: 10ba5d053; -[SCAPreviewEntryPointLatency getFieldNumberToFieldDict] */

void FUN_10ba5d050(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba5d054; end: 10ba5d05f; -[SCAPreviewEntryPointLatency toProtoWithAllowedFields:] */

void FUN_10ba5d054(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba5d060; end: 10ba5d067; -[SCAPreviewEntryPointLatency getPayloadIdentifier] */

undefined8 FUN_10ba5d060(void)

{
  return 0xdba;
}



/* Entry: 10ba5d068; end: 10ba5d073; -[SCAPreviewPageView getEventName] */

undefined ** FUN_10ba5d068(void)

{
  return &PTR____CFConstantStringClassReference_110fd2a98;
}



/* Entry: 10ba5d074; end: 10ba5d07b; -[SCAPreviewPageView getEventQoS] */

undefined8 FUN_10ba5d074(void)

{
  return 2;
}



/* Entry: 10ba5d07c; end: 10ba5d087; -[SCAPreviewPageView getPerUserSamplingRate] */

undefined8 FUN_10ba5d07c(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba5d088; end: 10ba5d093; -[SCAPreviewPageView getPerUserSamplingRateV2] */

undefined8 FUN_10ba5d088(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba5d094; end: 10ba5d0ab; -[SCAPreviewPageView setCaptureSessionId:] */

void FUN_10ba5d094(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ea05f8,2,param_3,0);
  return;
}



/* Entry: 10ba5d0ac; end: 10ba5d12b; -[SCAPreviewPageView setPreviousPage:] */

void FUN_10ba5d0ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba53ebc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fc1df8,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5d12c; end: 10ba5d1ab; -[SCAPreviewPageView setPostingEntryPoint:] */

void FUN_10ba5d12c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb08234(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fd2ab8,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5d1ac; end: 10ba5d1c3; -[SCAPreviewPageView setPreviewPageSessionId:] */

void FUN_10ba5d1ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fd2ad8,5,param_3,0);
  return;
}



/* Entry: 10ba5d1c4; end: 10ba5d217; -[SCAPreviewPageView setTimestampMs:] */

void FUN_10ba5d1c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd2af8,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5d218; end: 10ba5d21b; -[SCAPreviewPageView getFieldNumberToFieldDict] */

void FUN_10ba5d218(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba5d21c; end: 10ba5d227; -[SCAPreviewPageView toProtoWithAllowedFields:] */

void FUN_10ba5d21c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba5d228; end: 10ba5d22f; -[SCAPreviewPageView getPayloadIdentifier] */

undefined8 FUN_10ba5d228(void)

{
  return 0x67e;
}



/* Entry: 10ba5d230; end: 10ba5d23b; -[SCAPreviewStickerRecommendation getEventName] */

undefined ** FUN_10ba5d230(void)

{
  return &PTR____CFConstantStringClassReference_110fd2b18;
}



/* Entry: 10ba5d23c; end: 10ba5d243; -[SCAPreviewStickerRecommendation getEventQoS] */

undefined8 FUN_10ba5d23c(void)

{
  return 1;
}



/* Entry: 10ba5d244; end: 10ba5d25b; -[SCAPreviewStickerRecommendation setPackId:] */

void FUN_10ba5d244(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e60978,2,param_3,0);
  return;
}



/* Entry: 10ba5d25c; end: 10ba5d273; -[SCAPreviewStickerRecommendation setQueryTag:] */

void FUN_10ba5d25c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fd2b38,3,param_3,0);
  return;
}



/* Entry: 10ba5d274; end: 10ba5d28b; -[SCAPreviewStickerRecommendation setStickerId:] */

void FUN_10ba5d274(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dea8d8,4,param_3,0);
  return;
}



/* Entry: 10ba5d28c; end: 10ba5d28f; -[SCAPreviewStickerRecommendation getFieldNumberToFieldDict] */

void FUN_10ba5d28c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba5d290; end: 10ba5d29b; -[SCAPreviewStickerRecommendation toProtoWithAllowedFields:] */

void FUN_10ba5d290(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba5d29c; end: 10ba5d2a3; -[SCAPreviewStickerRecommendation getPayloadIdentifier] */

undefined8 FUN_10ba5d29c(void)

{
  return 0xab6;
}



/* Entry: 10ba5d2a4; end: 10ba5d2af; -[SCAPreviewStickerTabLatency getEventName] */

undefined ** FUN_10ba5d2a4(void)

{
  return &PTR____CFConstantStringClassReference_110fd2b58;
}



/* Entry: 10ba5d2b0; end: 10ba5d2b7; -[SCAPreviewStickerTabLatency getEventQoS] */

undefined8 FUN_10ba5d2b0(void)

{
  return 1;
}



/* Entry: 10ba5d2b8; end: 10ba5d30b; -[SCAPreviewStickerTabLatency setAvgFirstTtrMs:] */

void FUN_10ba5d2b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fcd558,2,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5d30c; end: 10ba5d38b; -[SCAPreviewStickerTabLatency setStickerPickerTabSection:] */

void FUN_10ba5d30c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb13e44(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fcd578,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5d38c; end: 10ba5d40b; -[SCAPreviewStickerTabLatency setStickerSourceTab:] */

void FUN_10ba5d38c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb14018(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fcd598,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5d40c; end: 10ba5d45f; -[SCAPreviewStickerTabLatency setTtrFirstAssetMs:] */

void FUN_10ba5d40c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fcd5b8,5,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5d460; end: 10ba5d4a7; -[SCAPreviewStickerTabLatency setStickerLoadTimes:] */

void FUN_10ba5d460(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd2b78,6,param_3,0xb
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10ba5d4a8; end: 10ba5d4ab; -[SCAPreviewStickerTabLatency getFieldNumberToFieldDict] */

void FUN_10ba5d4a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba5d4ac; end: 10ba5d4b7; -[SCAPreviewStickerTabLatency toProtoWithAllowedFields:] */

void FUN_10ba5d4ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba5d4b8; end: 10ba5d4bf; -[SCAPreviewStickerTabLatency getPayloadIdentifier] */

undefined8 FUN_10ba5d4b8(void)

{
  return 0x680;
}



/* Entry: 10ba5d4c0; end: 10ba5d4cb; -[SCAPreviewSwipeDismissAction getEventName] */

undefined ** FUN_10ba5d4c0(void)

{
  return &PTR____CFConstantStringClassReference_110fd2b98;
}



/* Entry: 10ba5d4cc; end: 10ba5d4d3; -[SCAPreviewSwipeDismissAction getEventQoS] */

undefined8 FUN_10ba5d4cc(void)

{
  return 2;
}



/* Entry: 10ba5d4d4; end: 10ba5d4df; -[SCAPreviewSwipeDismissAction getPerUserSamplingRate] */

undefined8 FUN_10ba5d4d4(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba5d4e0; end: 10ba5d4eb; -[SCAPreviewSwipeDismissAction getPerUserSamplingRateV2] */

undefined8 FUN_10ba5d4e0(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10ba5d4ec; end: 10ba5d503; -[SCAPreviewSwipeDismissAction setAnalyticsVersion:] */

void FUN_10ba5d4ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb96d8,2,param_3,0);
  return;
}



/* Entry: 10ba5d504; end: 10ba5d557; -[SCAPreviewSwipeDismissAction setEndPosXPercentage:] */

void FUN_10ba5d504(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd2bb8,3,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5d558; end: 10ba5d5ab; -[SCAPreviewSwipeDismissAction setEndPosYPercentage:] */

void FUN_10ba5d558(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd2bd8,4,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5d5ac; end: 10ba5d5ff; -[SCAPreviewSwipeDismissAction setHasSnapsterpieceAlert:] */

void FUN_10ba5d5ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd2bf8,5,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba5d600; end: 10ba5d653; -[SCAPreviewSwipeDismissAction setIsDiscard:] */

void FUN_10ba5d600(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fd2c18,6,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


