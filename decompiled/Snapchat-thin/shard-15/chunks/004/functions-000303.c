/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ba63c04; end: 10ba63c17; -[SCADiscoverPublisherSubscriptionBase setPublisherId:] */

void FUN_10ba63c04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_value_type__112644840,
             &PTR____CFConstantStringClassReference_110e34658,param_3,0);
  return;
}



/* Entry: 10ba63c18; end: 10ba63c93; -[SCADiscoverPublisherSubscriptionBase setSource:] */

void FUN_10ba63c18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c31264(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b860(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba63c94; end: 10ba63ca7; -[SCADiscoverPublisherSubscriptionBase setTrackingId:] */

void FUN_10ba63c94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_value_type__112644840,
             &PTR____CFConstantStringClassReference_110f60158,param_3,0);
  return;
}



/* Entry: 10ba63ca8; end: 10ba63cb3; -[SCADiscoverPublisherUnsubscribe getEventName] */

undefined ** FUN_10ba63ca8(void)

{
  return &PTR____CFConstantStringClassReference_110fd6338;
}



/* Entry: 10ba63cb4; end: 10ba63cbb; -[SCADiscoverPublisherUnsubscribe getEventQoS] */

undefined8 FUN_10ba63cb4(void)

{
  return 1;
}



/* Entry: 10ba63cbc; end: 10ba63cdf; -[SCADiscoverPublisherUnsubscribe getFieldNumberToFieldDict] */

void FUN_10ba63cbc(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba63ce0; end: 10ba63d17; -[SCADiscoverPublisherUnsubscribe addToProtoDictionary] */

void FUN_10ba63ce0(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba63d18; end: 10ba63d6f; -[SCADiscoverPublisherUnsubscribe toProtoWithAllowedFields:] */

void FUN_10ba63d18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba63d70; end: 10ba63d77; -[SCADiscoverPublisherUnsubscribe getPayloadIdentifier] */

undefined8 FUN_10ba63d70(void)

{
  return 0x311;
}



/* Entry: 10ba63d78; end: 10ba63d83; -[SCADiscoverScanCancel getEventName] */

undefined ** FUN_10ba63d78(void)

{
  return &PTR____CFConstantStringClassReference_110fd6358;
}



/* Entry: 10ba63d84; end: 10ba63d8b; -[SCADiscoverScanCancel getEventQoS] */

undefined8 FUN_10ba63d84(void)

{
  return 1;
}



/* Entry: 10ba63d8c; end: 10ba63e0b; -[SCADiscoverScanCancel setDenyReason:] */

void FUN_10ba63d8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba603b8(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fd6378,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba63e0c; end: 10ba63e23; -[SCADiscoverScanCancel setDsnapId:] */

void FUN_10ba63e0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ea1638,3,param_3,0);
  return;
}



/* Entry: 10ba63e24; end: 10ba63e3b; -[SCADiscoverScanCancel setEditionId:] */

void FUN_10ba63e24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e34618,4,param_3,0);
  return;
}



/* Entry: 10ba63e3c; end: 10ba63ebb; -[SCADiscoverScanCancel setExitEvent:] */

void FUN_10ba63e3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c31194(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110ea1f58,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba63ebc; end: 10ba63f3b; -[SCADiscoverScanCancel setPage:] */

void FUN_10ba63ebc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba605e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110daedd8,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba63f3c; end: 10ba63f53; -[SCADiscoverScanCancel setPublisherId:] */

void FUN_10ba63f3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e34658,7,param_3,0);
  return;
}



/* Entry: 10ba63f54; end: 10ba63f6b; -[SCADiscoverScanCancel setScanActionId:] */

void FUN_10ba63f54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fd6398,8,param_3,0);
  return;
}



/* Entry: 10ba63f6c; end: 10ba63f6f; -[SCADiscoverScanCancel getFieldNumberToFieldDict] */

void FUN_10ba63f6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba63f70; end: 10ba63f7b; -[SCADiscoverScanCancel toProtoWithAllowedFields:] */

void FUN_10ba63f70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba63f7c; end: 10ba63f83; -[SCADiscoverScanCancel getPayloadIdentifier] */

undefined8 FUN_10ba63f7c(void)

{
  return 0x312;
}



/* Entry: 10ba63f84; end: 10ba63f8f; -[SCADiscoverScanLink getEventName] */

undefined ** FUN_10ba63f84(void)

{
  return &PTR____CFConstantStringClassReference_110fd63b8;
}



/* Entry: 10ba63f90; end: 10ba63f97; -[SCADiscoverScanLink getEventQoS] */

undefined8 FUN_10ba63f90(void)

{
  return 1;
}



/* Entry: 10ba63f98; end: 10ba64017; -[SCADiscoverScanLink setDenyReason:] */

void FUN_10ba63f98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba603b8(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fd6378,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba64018; end: 10ba6402f; -[SCADiscoverScanLink setDsnapId:] */

void FUN_10ba64018(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ea1638,3,param_3,0);
  return;
}



/* Entry: 10ba64030; end: 10ba64047; -[SCADiscoverScanLink setEditionId:] */

void FUN_10ba64030(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e34618,4,param_3,0);
  return;
}



/* Entry: 10ba64048; end: 10ba6405f; -[SCADiscoverScanLink setPublisherId:] */

void FUN_10ba64048(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e34658,5,param_3,0);
  return;
}



/* Entry: 10ba64060; end: 10ba64077; -[SCADiscoverScanLink setScanActionId:] */

void FUN_10ba64060(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fd6398,6,param_3,0);
  return;
}



/* Entry: 10ba64078; end: 10ba6407b; -[SCADiscoverScanLink getFieldNumberToFieldDict] */

void FUN_10ba64078(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba6407c; end: 10ba64087; -[SCADiscoverScanLink toProtoWithAllowedFields:] */

void FUN_10ba6407c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10ba64088; end: 10ba6408f; -[SCADiscoverScanLink getPayloadIdentifier] */

undefined8 FUN_10ba64088(void)

{
  return 0x313;
}



/* Entry: 10ba64090; end: 10ba6409b; -[SCADiscoverSnapLongformScreenshot getEventName] */

undefined ** FUN_10ba64090(void)

{
  return &PTR____CFConstantStringClassReference_110fd63d8;
}



/* Entry: 10ba6409c; end: 10ba640a3; -[SCADiscoverSnapLongformScreenshot getEventQoS] */

undefined8 FUN_10ba6409c(void)

{
  return 1;
}



/* Entry: 10ba640a4; end: 10ba640bb; -[SCADiscoverSnapLongformScreenshot setDsnapId:] */

void FUN_10ba640a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ea1638,5,param_3,0);
  return;
}



/* Entry: 10ba640bc; end: 10ba6413b; -[SCADiscoverSnapLongformScreenshot setLongformType:] */

void FUN_10ba640bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bc90ccc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110faa8d8,7,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba6413c; end: 10ba64153; -[SCADiscoverSnapLongformScreenshot setVideoPartnerId:] */

void FUN_10ba6413c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110faa9f8,0xe,param_3,0);
  return;
}



/* Entry: 10ba64154; end: 10ba64177; -[SCADiscoverSnapLongformScreenshot getFieldNumberToFieldDict] */

void FUN_10ba64154(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba64178; end: 10ba641af; -[SCADiscoverSnapLongformScreenshot addToProtoDictionary] */

void FUN_10ba64178(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba641b0; end: 10ba64207; -[SCADiscoverSnapLongformScreenshot toProtoWithAllowedFields:] */

void FUN_10ba641b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba64208; end: 10ba6420f; -[SCADiscoverSnapLongformScreenshot getPayloadIdentifier] */

undefined8 FUN_10ba64208(void)

{
  return 0x316;
}



/* Entry: 10ba64210; end: 10ba6421b; -[SCADiscoverSnapLongformShareCreate getEventName] */

undefined ** FUN_10ba64210(void)

{
  return &PTR____CFConstantStringClassReference_110fd63f8;
}



/* Entry: 10ba6421c; end: 10ba64223; -[SCADiscoverSnapLongformShareCreate getEventQoS] */

undefined8 FUN_10ba6421c(void)

{
  return 1;
}



/* Entry: 10ba64224; end: 10ba642a3; -[SCADiscoverSnapLongformShareCreate setEntryEvent:] */

void FUN_10ba64224(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baf6c54(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110eb58f8,7,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba642a4; end: 10ba64323; -[SCADiscoverSnapLongformShareCreate setLongformType:] */

void FUN_10ba642a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bc90ccc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110faa8d8,8,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba64324; end: 10ba6433b; -[SCADiscoverSnapLongformShareCreate setVideoPartnerId:] */

void FUN_10ba64324(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110faa9f8,0xf,param_3,0);
  return;
}



/* Entry: 10ba6433c; end: 10ba6435f; -[SCADiscoverSnapLongformShareCreate getFieldNumberToFieldDict] */

void FUN_10ba6433c(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba64360; end: 10ba64397; -[SCADiscoverSnapLongformShareCreate addToProtoDictionary] */

void FUN_10ba64360(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba64398; end: 10ba643ef; -[SCADiscoverSnapLongformShareCreate toProtoWithAllowedFields:] */

void FUN_10ba64398(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba643f0; end: 10ba643f7; -[SCADiscoverSnapLongformShareCreate getPayloadIdentifier] */

undefined8 FUN_10ba643f0(void)

{
  return 0x317;
}



/* Entry: 10ba643f8; end: 10ba64403; -[SCADiscoverSnapLongformShareDeny getEventName] */

undefined ** FUN_10ba643f8(void)

{
  return &PTR____CFConstantStringClassReference_110fd6418;
}



/* Entry: 10ba64404; end: 10ba6440b; -[SCADiscoverSnapLongformShareDeny getEventQoS] */

undefined8 FUN_10ba64404(void)

{
  return 1;
}



/* Entry: 10ba6440c; end: 10ba6448b; -[SCADiscoverSnapLongformShareDeny setLongformType:] */

void FUN_10ba6440c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bc90ccc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110faa8d8,7,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba6448c; end: 10ba644a3; -[SCADiscoverSnapLongformShareDeny setTrackingId:] */

void FUN_10ba6448c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110f60158,0xe,param_3,0);
  return;
}



/* Entry: 10ba644a4; end: 10ba644bb; -[SCADiscoverSnapLongformShareDeny setVideoPartnerId:] */

void FUN_10ba644a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110faa9f8,0xf,param_3,0);
  return;
}



/* Entry: 10ba644bc; end: 10ba644df; -[SCADiscoverSnapLongformShareDeny getFieldNumberToFieldDict] */

void FUN_10ba644bc(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba644e0; end: 10ba64517; -[SCADiscoverSnapLongformShareDeny addToProtoDictionary] */

void FUN_10ba644e0(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba64518; end: 10ba6456f; -[SCADiscoverSnapLongformShareDeny toProtoWithAllowedFields:] */

void FUN_10ba64518(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba64570; end: 10ba64577; -[SCADiscoverSnapLongformShareDeny getPayloadIdentifier] */

undefined8 FUN_10ba64570(void)

{
  return 0x318;
}



/* Entry: 10ba64578; end: 10ba64583; -[SCADiscoverSnapLongformShareSend getEventName] */

undefined ** FUN_10ba64578(void)

{
  return &PTR____CFConstantStringClassReference_110fd6438;
}



/* Entry: 10ba64584; end: 10ba6458b; -[SCADiscoverSnapLongformShareSend getEventQoS] */

undefined8 FUN_10ba64584(void)

{
  return 1;
}



/* Entry: 10ba6458c; end: 10ba645df; -[SCADiscoverSnapLongformShareSend setCaption:] */

void FUN_10ba6458c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110e2a618,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba645e0; end: 10ba64633; -[SCADiscoverSnapLongformShareSend setDrawing:] */

void FUN_10ba645e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110e29718,6,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba64634; end: 10ba646b3; -[SCADiscoverSnapLongformShareSend setEntryEvent:] */

void FUN_10ba64634(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baf6c54(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110eb58f8,9,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba646b4; end: 10ba646cb; -[SCADiscoverSnapLongformShareSend setFilter:] */

void FUN_10ba646b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e27f18,10,param_3,0);
  return;
}



/* Entry: 10ba646cc; end: 10ba646e3; -[SCADiscoverSnapLongformShareSend setFilterGeofence:] */

void FUN_10ba646cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110faf798,0xb,param_3,0);
  return;
}



/* Entry: 10ba646e4; end: 10ba64763; -[SCADiscoverSnapLongformShareSend setFilterInfo:] */

void FUN_10ba646e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baf9a14(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110e27f38,0xc,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba64764; end: 10ba6477b; -[SCADiscoverSnapLongformShareSend setFilterSponsor:] */

void FUN_10ba64764(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110faf7b8,0xd,param_3,0);
  return;
}



/* Entry: 10ba6477c; end: 10ba64793; -[SCADiscoverSnapLongformShareSend setFilterType:] */

void FUN_10ba6477c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110faef78,0xe,param_3,0);
  return;
}



/* Entry: 10ba64794; end: 10ba64813; -[SCADiscoverSnapLongformShareSend setFilterVisual:] */

void FUN_10ba64794(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baf9d44(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110e27f78,0xf,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba64814; end: 10ba64893; -[SCADiscoverSnapLongformShareSend setLongformType:] */

void FUN_10ba64814(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bc90ccc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110faa8d8,0x10,puVar1,3
                      ,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba64894; end: 10ba648e7; -[SCADiscoverSnapLongformShareSend setRecipientCount:] */

void FUN_10ba64894(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110e2e758,0x13,puVar1,4
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba648e8; end: 10ba6493b; -[SCADiscoverSnapLongformShareSend setSnapTimeSec:] */

void FUN_10ba648e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110e29758,0x16,puVar1,2
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba6493c; end: 10ba64953; -[SCADiscoverSnapLongformShareSend setTrackingId:] */

void FUN_10ba6493c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110f60158,0x19,param_3,0);
  return;
}



/* Entry: 10ba64954; end: 10ba6496b; -[SCADiscoverSnapLongformShareSend setVideoPartnerId:] */

void FUN_10ba64954(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110faa9f8,0x1a,param_3,0);
  return;
}



/* Entry: 10ba6496c; end: 10ba6498f; -[SCADiscoverSnapLongformShareSend getFieldNumberToFieldDict] */

void FUN_10ba6496c(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba64990; end: 10ba649c7; -[SCADiscoverSnapLongformShareSend addToProtoDictionary] */

void FUN_10ba64990(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba649c8; end: 10ba64a1f; -[SCADiscoverSnapLongformShareSend toProtoWithAllowedFields:] */

void FUN_10ba649c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba64a20; end: 10ba64a27; -[SCADiscoverSnapLongformShareSend getPayloadIdentifier] */

undefined8 FUN_10ba64a20(void)

{
  return 0x319;
}



/* Entry: 10ba64a28; end: 10ba64a33; -[SCADiscoverSnapLongformView getEventName] */

undefined ** FUN_10ba64a28(void)

{
  return &PTR____CFConstantStringClassReference_110fd6458;
}



/* Entry: 10ba64a34; end: 10ba64a3b; -[SCADiscoverSnapLongformView getEventQoS] */

undefined8 FUN_10ba64a34(void)

{
  return 1;
}



/* Entry: 10ba64a3c; end: 10ba64a8f; -[SCADiscoverSnapLongformView setAspectRatio:] */

void FUN_10ba64a3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110faa7d8,2,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba64a90; end: 10ba64ae3; -[SCADiscoverSnapLongformView setCaptionTimeSec:] */

void FUN_10ba64a90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110faa7f8,3,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba64ae4; end: 10ba64b37; -[SCADiscoverSnapLongformView setDurationSec:] */

void FUN_10ba64ae4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110f0d2d8,9,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba64b38; end: 10ba64b8b; -[SCADiscoverSnapLongformView setInlineVideoTimeViewed:] */

void FUN_10ba64b38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110faa858,0xd,puVar1,2)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba64b8c; end: 10ba64bdf; -[SCADiscoverSnapLongformView setInlineVideoTotalCount:] */

void FUN_10ba64b8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110faa878,0xe,puVar1,4)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba64be0; end: 10ba64c33; -[SCADiscoverSnapLongformView setInlineVideoViewCount:] */

void FUN_10ba64be0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110faa898,0xf,puVar1,4)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba64c34; end: 10ba64c87; -[SCADiscoverSnapLongformView setLandscapeTimeSec:] */

void FUN_10ba64c34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110faa8b8,0x11,puVar1,2
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba64c88; end: 10ba64d07; -[SCADiscoverSnapLongformView setLongformType:] */

void FUN_10ba64c88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bc90ccc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110faa8d8,0x12,puVar1,3
                      ,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba64d08; end: 10ba64d5b; -[SCADiscoverSnapLongformView setPageHeightSeenPixel:] */

void FUN_10ba64d08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110faa8f8,0x13,puVar1,4
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba64d5c; end: 10ba64daf; -[SCADiscoverSnapLongformView setPageHeightTotalPixel:] */

void FUN_10ba64d5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110faa918,0x14,puVar1,4
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba64db0; end: 10ba64dc7; -[SCADiscoverSnapLongformView setVideoPartnerId:] */

void FUN_10ba64db0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110faa9f8,0x22,param_3,0);
  return;
}



/* Entry: 10ba64dc8; end: 10ba64e1b; -[SCADiscoverSnapLongformView setWithCaptionOnStart:] */

void FUN_10ba64dc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110faaa58,0x24,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba64e1c; end: 10ba64e3f; -[SCADiscoverSnapLongformView getFieldNumberToFieldDict] */

void FUN_10ba64e1c(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba64e40; end: 10ba64e77; -[SCADiscoverSnapLongformView addToProtoDictionary] */

void FUN_10ba64e40(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba64e78; end: 10ba64ecf; -[SCADiscoverSnapLongformView toProtoWithAllowedFields:] */

void FUN_10ba64e78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010befc280(param_1);
  func_0x00010c272060(param_1,param_2,5,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10ba64ed0; end: 10ba64ed7; -[SCADiscoverSnapLongformView getPayloadIdentifier] */

undefined8 FUN_10ba64ed0(void)

{
  return 0x31a;
}



/* Entry: 10ba64ed8; end: 10ba64ee3; -[SCADiscoverSnapScreenshot getEventName] */

undefined ** FUN_10ba64ed8(void)

{
  return &PTR____CFConstantStringClassReference_110fd6478;
}



/* Entry: 10ba64ee4; end: 10ba64eeb; -[SCADiscoverSnapScreenshot getEventQoS] */

undefined8 FUN_10ba64ee4(void)

{
  return 1;
}



/* Entry: 10ba64eec; end: 10ba64f03; -[SCADiscoverSnapScreenshot setDsnapId:] */

void FUN_10ba64eec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ea1638,5,param_3,0);
  return;
}



/* Entry: 10ba64f04; end: 10ba64f27; -[SCADiscoverSnapScreenshot getFieldNumberToFieldDict] */

void FUN_10ba64f04(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}


