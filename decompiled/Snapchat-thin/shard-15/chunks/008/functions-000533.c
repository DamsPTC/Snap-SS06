/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bc66bb4; end: 10bc66bbb; -[SCAWebUpsell getEventQoS] */

undefined8 FUN_10bc66bb4(void)

{
  return 1;
}



/* Entry: 10bc66bbc; end: 10bc66c3b; -[SCAWebUpsell setAction:] */

void FUN_10bc66bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb1a108(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110daf5b8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bc66c3c; end: 10bc66c8f; -[SCAWebUpsell setActionTime:] */

void FUN_10bc66c3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111025bb8,3,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bc66c90; end: 10bc66ca7; -[SCAWebUpsell setAdditionalData:] */

void FUN_10bc66c90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa2ef8,4,param_3,0);
  return;
}



/* Entry: 10bc66ca8; end: 10bc66d27; -[SCAWebUpsell setSource:] */

void FUN_10bc66ca8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb1a1c4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bc66d28; end: 10bc66da7; -[SCAWebUpsell setSurface:] */

void FUN_10bc66d28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb1a200(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fa2e78,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bc66da8; end: 10bc66dab; -[SCAWebUpsell getFieldNumberToFieldDict] */

void FUN_10bc66da8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bc66dac; end: 10bc66db7; -[SCAWebUpsell toProtoWithAllowedFields:] */

void FUN_10bc66dac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bc66db8; end: 10bc66dbf; -[SCAWebUpsell getPayloadIdentifier] */

undefined8 FUN_10bc66db8(void)

{
  return 0x11df;
}



/* Entry: 10bc66dc0; end: 10bc66dcb; -[SCAWidgetAdd getEventName] */

undefined ** FUN_10bc66dc0(void)

{
  return &PTR____CFConstantStringClassReference_111025bd8;
}



/* Entry: 10bc66dcc; end: 10bc66dd3; -[SCAWidgetAdd getEventQoS] */

undefined8 FUN_10bc66dcc(void)

{
  return 1;
}



/* Entry: 10bc66dd4; end: 10bc66e53; -[SCAWidgetAdd setWidgetSource:] */

void FUN_10bc66dd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb1a694(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_111025bf8,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bc66e54; end: 10bc66ed3; -[SCAWidgetAdd setWidgetDestination:] */

void FUN_10bc66e54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb1a654(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_111025c18,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bc66ed4; end: 10bc66f53; -[SCAWidgetAdd setWidgetSize:] */

void FUN_10bc66ed4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb1a674(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_111025c38,7,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bc66f54; end: 10bc66fd3; -[SCAWidgetAdd setWidgetType:] */

void FUN_10bc66f54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb1a6b4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fceb98,8,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bc66fd4; end: 10bc66fd7; -[SCAWidgetAdd getFieldNumberToFieldDict] */

void FUN_10bc66fd4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bc66fd8; end: 10bc66fe3; -[SCAWidgetAdd toProtoWithAllowedFields:] */

void FUN_10bc66fd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bc66fe4; end: 10bc66feb; -[SCAWidgetAdd getPayloadIdentifier] */

undefined8 FUN_10bc66fe4(void)

{
  return 0xfd7;
}



/* Entry: 10bc66fec; end: 10bc66ff7; -[SCAWidgetEdit getEventName] */

undefined ** FUN_10bc66fec(void)

{
  return &PTR____CFConstantStringClassReference_111025c58;
}



/* Entry: 10bc66ff8; end: 10bc66fff; -[SCAWidgetEdit getEventQoS] */

undefined8 FUN_10bc66ff8(void)

{
  return 1;
}



/* Entry: 10bc67000; end: 10bc6707f; -[SCAWidgetEdit setWidgetSource:] */

void FUN_10bc67000(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb1a694(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_111025bf8,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bc67080; end: 10bc670ff; -[SCAWidgetEdit setUpdateType:] */

void FUN_10bc67080(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb1a6d4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fe5498,7,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bc67100; end: 10bc6717f; -[SCAWidgetEdit setWidgetDestination:] */

void FUN_10bc67100(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb1a654(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_111025c18,8,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bc67180; end: 10bc671ff; -[SCAWidgetEdit setWidgetSize:] */

void FUN_10bc67180(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb1a674(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_111025c38,9,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bc67200; end: 10bc6727f; -[SCAWidgetEdit setWidgetType:] */

void FUN_10bc67200(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb1a6b4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fceb98,10,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bc67280; end: 10bc67283; -[SCAWidgetEdit getFieldNumberToFieldDict] */

void FUN_10bc67280(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bc67284; end: 10bc6728f; -[SCAWidgetEdit toProtoWithAllowedFields:] */

void FUN_10bc67284(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,2,param_3);
  return;
}



/* Entry: 10bc67290; end: 10bc67297; -[SCAWidgetEdit getPayloadIdentifier] */

undefined8 FUN_10bc67290(void)

{
  return 0xfd8;
}



/* Entry: 10bc67298; end: 10bc672a3; -[SCAWidgetRemove getEventName] */

undefined ** FUN_10bc67298(void)

{
  return &PTR____CFConstantStringClassReference_111025c78;
}



/* Entry: 10bc672a4; end: 10bc672ab; -[SCAWidgetRemove getEventQoS] */

undefined8 FUN_10bc672a4(void)

{
  return 1;
}



/* Entry: 10bc672ac; end: 10bc6732b; -[SCAWidgetRemove setWidgetSource:] */

void FUN_10bc672ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb1a694(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_111025bf8,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bc6732c; end: 10bc673ab; -[SCAWidgetRemove setWidgetDestination:] */

void FUN_10bc6732c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb1a654(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_111025c18,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bc673ac; end: 10bc6742b; -[SCAWidgetRemove setWidgetSize:] */

void FUN_10bc673ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb1a674(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_111025c38,7,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bc6742c; end: 10bc674ab; -[SCAWidgetRemove setWidgetType:] */

void FUN_10bc6742c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb1a6b4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fceb98,8,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bc674ac; end: 10bc674af; -[SCAWidgetRemove getFieldNumberToFieldDict] */

void FUN_10bc674ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bc674b0; end: 10bc674bb; -[SCAWidgetRemove toProtoWithAllowedFields:] */

void FUN_10bc674b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bc674bc; end: 10bc674c3; -[SCAWidgetRemove getPayloadIdentifier] */

undefined8 FUN_10bc674bc(void)

{
  return 0xfd9;
}



/* Entry: 10bc674c4; end: 10bc674cf; -[SCAWidgetUsageInfo getEventName] */

undefined ** FUN_10bc674c4(void)

{
  return &PTR____CFConstantStringClassReference_111025c98;
}



/* Entry: 10bc674d0; end: 10bc674d7; -[SCAWidgetUsageInfo getEventQoS] */

undefined8 FUN_10bc674d0(void)

{
  return 1;
}



/* Entry: 10bc674d8; end: 10bc674ef; -[SCAWidgetUsageInfo setNumWidget:] */

void FUN_10bc674d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_111025cb8,2,param_3,0);
  return;
}



/* Entry: 10bc674f0; end: 10bc6756f; -[SCAWidgetUsageInfo setWidgetSource:] */

void FUN_10bc674f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb1a694(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_111025bf8,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bc67570; end: 10bc675c3; -[SCAWidgetUsageInfo setMapShelfWidgetImpressions:] */

void FUN_10bc67570(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111025cd8,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bc675c4; end: 10bc67643; -[SCAWidgetUsageInfo setWidgetState:] */

void FUN_10bc675c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb01b2c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_111025cf8,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bc67644; end: 10bc67647; -[SCAWidgetUsageInfo getFieldNumberToFieldDict] */

void FUN_10bc67644(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bc67648; end: 10bc67653; -[SCAWidgetUsageInfo toProtoWithAllowedFields:] */

void FUN_10bc67648(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bc67654; end: 10bc6765b; -[SCAWidgetUsageInfo getPayloadIdentifier] */

undefined8 FUN_10bc67654(void)

{
  return 0xfdb;
}



/* Entry: 10bc6765c; end: 10bc679ff; -[SCAZoomFactorsPillParams initWithDictionary:] */

undefined8 * FUN_10bc6765c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_f0 = PTR_PTR_11270e078;
  puVar2 = &uStack_f8;
  uStack_f8 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    lVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010be45600();
    _objc_release(lVar3);
    if (((ulong)puVar4 & 1) == 0) {
      lVar3 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      func_0x00010c179400(puVar2);
      _objc_release(lVar3);
    }
    lVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010be45600();
    _objc_release(lVar3);
    if (((ulong)puVar4 & 1) == 0) {
      lVar3 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      func_0x00010c2271e0(puVar2);
      _objc_release(lVar3);
    }
    lVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010be45600();
    _objc_release(lVar3);
    if (((ulong)puVar4 & 1) == 0) {
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      lVar6 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar6;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar3 != 0) {
        lVar9 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar6);
          }
          puVar4 = puVar2;
          func_0x00010be45600();
          if (((ulong)puVar4 & 1) == 0) {
            func_0x00010befa120(puVar5);
          }
          lVar9 = lVar9 + 1;
        } while (lVar3 != lVar9);
        lVar3 = lVar6;
        func_0x00010bf52a60();
      }
      _objc_release(lVar6);
      func_0x00010c227ba0(puVar2);
      _objc_release(puVar5);
    }
    lVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010be45600();
    _objc_release(lVar3);
    if (((ulong)puVar4 & 1) == 0) {
      lVar3 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      FUN_10bb1a7f0();
      func_0x00010c227c40(puVar2);
      _objc_release(lVar3);
    }
    lVar3 = param_3;
    func_0x00010c0e00e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010be45600();
    _objc_release(lVar3);
    if (((ulong)puVar4 & 1) == 0) {
      lVar3 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      FUN_10bb1a718();
      func_0x00010c179420(puVar2);
      _objc_release(lVar3);
    }
  }
  puVar7 = puVar2;
  func_0x00010c119100();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf529e0();
  puVar4 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    puVar4 = puVar2;
  }
  _objc_retain(puVar4);
  _objc_release(puVar7);
  _objc_release(param_3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar4;
  }
  ___stack_chk_fail();
  puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return puVar4;
}



/* Entry: 10bc67a00; end: 10bc67a53; -[SCAZoomFactorsPillParams setCaptureZoomLevel:] */

void FUN_10bc67a00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111025d18,2,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bc67a54; end: 10bc67aa7; -[SCAZoomFactorsPillParams setWithZoomingUsingPill:] */

void FUN_10bc67a54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111025d38,3,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bc67aa8; end: 10bc67aef; -[SCAZoomFactorsPillParams setZoomFactorsRange:] */

void FUN_10bc67aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_111025d58,4,param_3,9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bc67af0; end: 10bc67b6f; -[SCAZoomFactorsPillParams setZoomLevelGroup:] */

void FUN_10bc67af0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb1a7d0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_111025d78,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bc67b70; end: 10bc67bef; -[SCAZoomFactorsPillParams setCaptureZoomSource:] */

void FUN_10bc67b70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb1a6f8(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_111025d98,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bc67bf0; end: 10bc67bf3; -[SCAZoomFactorsPillParams getFieldNumberToFieldDict] */

void FUN_10bc67bf0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bc67bf4; end: 10bc67bff; -[SCAZoomFactorsPillParams toProtoWithAllowedFields:] */

void FUN_10bc67bf4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,0);
  return;
}



/* Entry: 10bc67c00; end: 10bc67c07; -[SCAZoomFactorsPillParams getPayloadIdentifier] */

undefined8 FUN_10bc67c00(void)

{
  return 0x148b;
}



/* Entry: 10bc67c08; end: 10bc67c33; +[SCEntryPointCleanup noCleanupNeeded] */

void FUN_10bc67c08(undefined8 param_1)

{
  _objc_alloc();
  func_0x00010bfef220();
  func_0x00010bfaf680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10bc67c34; end: 10bc67c4b; +[SCEntryPointCleanup asyncCleanupNeeded] */

void FUN_10bc67c34(void)

{
  _objc_alloc();
  func_0x00010bfef220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10bc67c4c; end: 10bc67cdf; -[SCEntryPointCleanup initPrivately] */

undefined1 * FUN_10bc67c4c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_11270e080;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126e2d28;
    _objc_alloc();
    func_0x00010c00a2c0();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x10) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10bc67ce0; end: 10bc67e33; -[SCEntryPointCleanup finish] */

void FUN_10bc67ce0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar4 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_sync_enter(param_1);
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x10) = 1;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lVar5 = *(long *)(param_1 + 8);
    _objc_retain(lVar5);
    lVar1 = lVar5;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar6 = *plStack_100;
      do {
        lVar7 = 0;
        do {
          if (*plStack_100 != lVar6) {
            _objc_enumerationMutation(lVar5);
          }
          (**(code **)(*(long *)(lStack_108 + lVar7 * 8) + 0x10))();
          lVar7 = lVar7 + 1;
        } while (lVar1 != lVar7);
        lVar1 = lVar5;
        puVar4 = &uStack_110;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(lVar5);
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
    _objc_release(uVar2);
    param_3 = (undefined1 *)puVar4;
  }
  _objc_sync_exit(param_1);
  lVar1 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_1);
  __Unwind_Resume();
  _objc_retain(param_3);
  _objc_retain(lVar1);
  _objc_sync_enter(lVar1);
  if (*(char *)(lVar1 + 0x10) == '\x01') {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 8);
    puVar3 = param_3;
    _objc_retainBlock(param_3);
    func_0x00010befa120(uVar2,param_2,puVar3);
    _objc_release(puVar3);
  }
  _objc_sync_exit(lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bc67e34; end: 10bc67edb; -[SCEntryPointCleanup scopeProgressAddedListener:] */

void FUN_10bc67e34(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    (**(code **)(param_3 + 0x10))(param_3);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    lVar1 = param_3;
    _objc_retainBlock(param_3);
    func_0x00010befa120(uVar2,param_2,lVar1);
    _objc_release(lVar1);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bc67edc; end: 10bc67ee3; -[SCEntryPointCleanup progress] */

undefined8 FUN_10bc67edc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10bc67ee4; end: 10bc67f13; -[SCEntryPointCleanup .cxx_destruct] */

void FUN_10bc67ee4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bc67f14; end: 10bc67f7f; -[SCEntryPointCleanupProgress initWithDelegate:] */

undefined1 * FUN_10bc67f14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270e088;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10bc67f80; end: 10bc67fc7; -[SCEntryPointCleanupProgress whenFinished:] */

void FUN_10bc67f80(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1509c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bc67fc8; end: 10bc67fcf; -[SCEntryPointCleanupProgress .cxx_destruct] */

void FUN_10bc67fc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10bc67fd0; end: 10bc67fd3; -[SCMultiScopeExposer exposeScope:] */

void FUN_10bc67fd0(void)

{
  return;
}



/* Entry: 10bc67fd4; end: 10bc67fdb; -[SCMultiScopeExposer removeScope:] */

undefined8 FUN_10bc67fd4(void)

{
  return 0;
}



/* Entry: 10bc67fdc; end: 10bc67fe3; -[SCMultiScopeExposer isExposed:] */

undefined8 FUN_10bc67fdc(void)

{
  return 0;
}



/* Entry: 10bc67fe4; end: 10bc67feb; -[SCMultiScopeExposer scopeExposer] */

undefined8 FUN_10bc67fe4(void)

{
  return 0;
}



/* Entry: 10bc67fec; end: 10bc67ffb; -[SCOptionalMultiScopeExposer isEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10bc67fec(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112796040);
}



/* Entry: 10bc67ffc; end: 10bc6800b; -[SCOptionalScopeExposer isEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10bc67ffc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112796044);
}



/* Entry: 10bc6800c; end: 10bc6800f; -[SCPlugInScopeExposer exposePlugInScope:onPlugInsRegistered:] */

void FUN_10bc6800c(void)

{
  return;
}



/* Entry: 10bc68010; end: 10bc68013; -[SCPlugInScopeExposer removeScope] */

void FUN_10bc68010(void)

{
  return;
}



/* Entry: 10bc68014; end: 10bc6801b; -[SCPlugInScopeExposer scope] */

undefined8 FUN_10bc68014(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10bc6801c; end: 10bc68027; -[SCPlugInScopeExposer .cxx_destruct] */

void FUN_10bc6801c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bc68028; end: 10bc6802b; -[SCScopeExposer exposeScope:] */

void FUN_10bc68028(void)

{
  return;
}



/* Entry: 10bc6802c; end: 10bc68033; -[SCScopeExposer removeScope] */

undefined8 FUN_10bc6802c(void)

{
  return 0;
}



/* Entry: 10bc68034; end: 10bc6803b; -[SCScopeExposer scope] */

undefined8 FUN_10bc68034(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10bc6803c; end: 10bc68047; -[SCScopeExposer .cxx_destruct] */

void FUN_10bc6803c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bc68048; end: 10bc6804b; -[SCServicesExposer exposeServices:] */

void FUN_10bc68048(void)

{
  return;
}



/* Entry: 10bc6804c; end: 10bc68053; -[SCDeferredEntryPoint shouldAutoCleanup] */

undefined8 FUN_10bc6804c(void)

{
  return 0;
}



/* Entry: 10bc68054; end: 10bc680cf; -[SCEntryPoint end] */

void FUN_10bc68054(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  if (*(long *)(param_1 + 8) == 0) {
    puVar1 = PTR_PTR_1126afc98;
    func_0x00010c0da5c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar1;
    _objc_release(uVar2);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c117730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_progress_1126237e8);
  return;
}



/* Entry: 10bc680d0; end: 10bc680db; -[SCEntryPoint .cxx_destruct] */

void FUN_10bc680d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bc680dc; end: 10bc68157; -[SCFactoryEntryPoint setScopeName:withPath:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc680dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112796054);
  *(undefined8 *)(param_1 + _DAT_112796054) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112796058);
  *(undefined8 *)(param_1 + _DAT_112796058) = param_4;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10bc68158; end: 10bc68167; -[SCFactoryEntryPoint scopeName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10bc68158(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112796054);
}



/* Entry: 10bc68168; end: 10bc68177; -[SCFactoryEntryPoint scopePath] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10bc68168(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112796058);
}



/* Entry: 10bc68178; end: 10bc681b7; -[SCFactoryEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10bc68178(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112796058,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112796054,0);
  return;
}



/* Entry: 10bc681b8; end: 10bc681bf; -[SCServiceProvider provide] */

undefined8 FUN_10bc681b8(void)

{
  return 0;
}



/* Entry: 10bc681c0; end: 10bc6823b; -[SCServiceProvider end] */

void FUN_10bc681c0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  if (*(long *)(param_1 + 8) == 0) {
    puVar1 = PTR_PTR_1126afc98;
    func_0x00010c0da5c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar1;
    _objc_release(uVar2);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c117730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_progress_1126237e8);
  return;
}



/* Entry: 10bc6823c; end: 10bc68247; -[SCServiceProvider .cxx_destruct] */

void FUN_10bc6823c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bc68248; end: 10bc6824b; -[SCPlugInRegistry register:] */

void FUN_10bc68248(void)

{
  return;
}



/* Entry: 10bc6824c; end: 10bc68253; -[SCUserInfoProvider currentValue] */

undefined8 FUN_10bc6824c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10bc68254; end: 10bc6825b; -[SCUserInfoProvider optionalCurrentValue] */

undefined8 FUN_10bc68254(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10bc6825c; end: 10bc68263; -[SCUserInfoProvider updates] */

undefined8 FUN_10bc6825c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10bc68264; end: 10bc6829f; -[SCUserInfoProvider .cxx_destruct] */

void FUN_10bc68264(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10bc682a0; end: 10bc682a7; -[SCUserInfoServices tentativePhoneNumberProvider] */

undefined8 FUN_10bc682a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10bc682a8; end: 10bc682af; -[SCUserInfoServices quickAddPrivacyProvider] */

undefined8 FUN_10bc682a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10bc682b0; end: 10bc682b7; -[SCUserInfoServices storyPrivacyProvider] */

undefined8 FUN_10bc682b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10bc682b8; end: 10bc682bf; -[SCUserInfoServices snapshotSnapsProvider] */

undefined8 FUN_10bc682b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10bc682c0; end: 10bc682c7; -[SCUserInfoServices saturnPrivacyProvider] */

undefined8 FUN_10bc682c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}


