/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bad0ddc; end: 10bad0e13; -[SCACheeriosFlightImuCalibrationStart addToProtoDictionary] */

void FUN_10bad0ddc(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bad0e14; end: 10bad0e6b; -[SCACheeriosFlightImuCalibrationStart toProtoWithAllowedFields:] */

void FUN_10bad0e14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bad0e6c; end: 10bad0e73; -[SCACheeriosFlightImuCalibrationStart getPayloadIdentifier] */

undefined8 FUN_10bad0e6c(void)

{
  return 0xe95;
}



/* Entry: 10bad0e74; end: 10bad0e7f; -[SCACheeriosFlightSettingsPageEvent getEventName] */

undefined ** FUN_10bad0e74(void)

{
  return &PTR____CFConstantStringClassReference_110ff3338;
}



/* Entry: 10bad0e80; end: 10bad0e87; -[SCACheeriosFlightSettingsPageEvent getEventQoS] */

undefined8 FUN_10bad0e80(void)

{
  return 1;
}



/* Entry: 10bad0e88; end: 10bad0f07; -[SCACheeriosFlightSettingsPageEvent setFlightPath:] */

void FUN_10bad0e88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bacfc54(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110ff3358,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bad0f08; end: 10bad0f87; -[SCACheeriosFlightSettingsPageEvent setSettingsName:] */

void FUN_10bad0f08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bacfc74(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110ff3378,10,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bad0f88; end: 10bad0f9f; -[SCACheeriosFlightSettingsPageEvent setSettingsUnit:] */

void FUN_10bad0f88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ff3398,0xb,param_3,0);
  return;
}



/* Entry: 10bad0fa0; end: 10bad0ff3; -[SCACheeriosFlightSettingsPageEvent setSettingsValue:] */

void FUN_10bad0fa0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110ff33b8,0xc,puVar1,2)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bad0ff4; end: 10bad1017; -[SCACheeriosFlightSettingsPageEvent getFieldNumberToFieldDict] */

void FUN_10bad0ff4(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bad1018; end: 10bad104f; -[SCACheeriosFlightSettingsPageEvent addToProtoDictionary] */

void FUN_10bad1018(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bad1050; end: 10bad10a7; -[SCACheeriosFlightSettingsPageEvent toProtoWithAllowedFields:] */

void FUN_10bad1050(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bad10a8; end: 10bad10af; -[SCACheeriosFlightSettingsPageEvent getPayloadIdentifier] */

undefined8 FUN_10bad10a8(void)

{
  return 0xe4a;
}



/* Entry: 10bad10b0; end: 10bad10bb; -[SCACheeriosSettingsPageEvent getEventName] */

undefined ** FUN_10bad10b0(void)

{
  return &PTR____CFConstantStringClassReference_110ff33d8;
}



/* Entry: 10bad10bc; end: 10bad10c3; -[SCACheeriosSettingsPageEvent getEventQoS] */

undefined8 FUN_10bad10bc(void)

{
  return 1;
}



/* Entry: 10bad10c4; end: 10bad10e7; -[SCACheeriosSettingsPageEvent getFieldNumberToFieldDict] */

void FUN_10bad10c4(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bad10e8; end: 10bad111f; -[SCACheeriosSettingsPageEvent addToProtoDictionary] */

void FUN_10bad10e8(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bad1120; end: 10bad1177; -[SCACheeriosSettingsPageEvent toProtoWithAllowedFields:] */

void FUN_10bad1120(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bad1178; end: 10bad117f; -[SCACheeriosSettingsPageEvent getPayloadIdentifier] */

undefined8 FUN_10bad1178(void)

{
  return 0xe4c;
}



/* Entry: 10bad1180; end: 10bad118b; -[SCACheeriosSmartEditApply getEventName] */

undefined ** FUN_10bad1180(void)

{
  return &PTR____CFConstantStringClassReference_110ff3418;
}



/* Entry: 10bad118c; end: 10bad1193; -[SCACheeriosSmartEditApply getEventQoS] */

undefined8 FUN_10bad118c(void)

{
  return 1;
}



/* Entry: 10bad1194; end: 10bad119b; -[SCACheeriosSmartEditApply getPerUserSamplingRateV2] */

undefined8 FUN_10bad1194(void)

{
  return 0x3ff0000000000000;
}



/* Entry: 10bad119c; end: 10bad11bf; -[SCACheeriosSmartEditApply getFieldNumberToFieldDict] */

void FUN_10bad119c(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bad11c0; end: 10bad11f7; -[SCACheeriosSmartEditApply addToProtoDictionary] */

void FUN_10bad11c0(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bad11f8; end: 10bad124f; -[SCACheeriosSmartEditApply toProtoWithAllowedFields:] */

void FUN_10bad11f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bad1250; end: 10bad1257; -[SCACheeriosSmartEditApply getPayloadIdentifier] */

undefined8 FUN_10bad1250(void)

{
  return 0xee8;
}



/* Entry: 10bad1258; end: 10bad1263; -[SCACheeriosSmartEditBase getEventName] */

undefined ** FUN_10bad1258(void)

{
  return &PTR____CFConstantStringClassReference_110ff3458;
}



/* Entry: 10bad1264; end: 10bad126b; -[SCACheeriosSmartEditBase getEventQoS] */

undefined8 FUN_10bad1264(void)

{
  return 1;
}



/* Entry: 10bad126c; end: 10bad1277; -[SCACheeriosSmartEditBase getPerUserSamplingRateV2] */

undefined8 FUN_10bad126c(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bad1278; end: 10bad128f; -[SCACheeriosSmartEditBase setContentId:] */

void FUN_10bad1278(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dfe398,2,param_3,0);
  return;
}



/* Entry: 10bad1290; end: 10bad12a7; -[SCACheeriosSmartEditBase setEditorSessionId:] */

void FUN_10bad1290(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ff3438,4,param_3,0);
  return;
}



/* Entry: 10bad12a8; end: 10bad12bf; -[SCACheeriosSmartEditBase setLensId:] */

void FUN_10bad12a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110db19f8,8,param_3,0);
  return;
}



/* Entry: 10bad12c0; end: 10bad133f; -[SCACheeriosSmartEditBase setSmartTemplateEffect:] */

void FUN_10bad12c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb10700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fb3518,9,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bad1340; end: 10bad1363; -[SCACheeriosSmartEditBase getFieldNumberToFieldDict] */

void FUN_10bad1340(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bad1364; end: 10bad139b; -[SCACheeriosSmartEditBase addToProtoDictionary] */

void FUN_10bad1364(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bad139c; end: 10bad13f3; -[SCACheeriosSmartEditBase toProtoWithAllowedFields:] */

void FUN_10bad139c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bad13f4; end: 10bad13fb; -[SCACheeriosSmartEditBase getPayloadIdentifier] */

undefined8 FUN_10bad13f4(void)

{
  return 0xee9;
}



/* Entry: 10bad13fc; end: 10bad1407; -[SCACheeriosSmartEditEnter getEventName] */

undefined ** FUN_10bad13fc(void)

{
  return &PTR____CFConstantStringClassReference_110ff3478;
}



/* Entry: 10bad1408; end: 10bad140f; -[SCACheeriosSmartEditEnter getEventQoS] */

undefined8 FUN_10bad1408(void)

{
  return 1;
}



/* Entry: 10bad1410; end: 10bad1417; -[SCACheeriosSmartEditEnter getPerUserSamplingRateV2] */

undefined8 FUN_10bad1410(void)

{
  return 0x3ff0000000000000;
}



/* Entry: 10bad1418; end: 10bad143b; -[SCACheeriosSmartEditEnter getFieldNumberToFieldDict] */

void FUN_10bad1418(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bad143c; end: 10bad1473; -[SCACheeriosSmartEditEnter addToProtoDictionary] */

void FUN_10bad143c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bad1474; end: 10bad14cb; -[SCACheeriosSmartEditEnter toProtoWithAllowedFields:] */

void FUN_10bad1474(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bad14cc; end: 10bad14d3; -[SCACheeriosSmartEditEnter getPayloadIdentifier] */

undefined8 FUN_10bad14cc(void)

{
  return 0xeea;
}



/* Entry: 10bad14d4; end: 10bad14df; -[SCACheeriosSmartEditRemove getEventName] */

undefined ** FUN_10bad14d4(void)

{
  return &PTR____CFConstantStringClassReference_110ff3498;
}



/* Entry: 10bad14e0; end: 10bad14e7; -[SCACheeriosSmartEditRemove getEventQoS] */

undefined8 FUN_10bad14e0(void)

{
  return 1;
}



/* Entry: 10bad14e8; end: 10bad153b; -[SCACheeriosSmartEditRemove setForLensUsage:] */

void FUN_10bad14e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110ff34b8,6,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bad153c; end: 10bad155f; -[SCACheeriosSmartEditRemove getFieldNumberToFieldDict] */

void FUN_10bad153c(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bad1560; end: 10bad1597; -[SCACheeriosSmartEditRemove addToProtoDictionary] */

void FUN_10bad1560(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bad1598; end: 10bad15ef; -[SCACheeriosSmartEditRemove toProtoWithAllowedFields:] */

void FUN_10bad1598(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bad15f0; end: 10bad15f7; -[SCACheeriosSmartEditRemove getPayloadIdentifier] */

undefined8 FUN_10bad15f0(void)

{
  return 0xeeb;
}



/* Entry: 10bad15f8; end: 10bad1603; -[SCADirectSnapCreateFail getEventName] */

undefined ** FUN_10bad15f8(void)

{
  return &PTR____CFConstantStringClassReference_110ff34d8;
}



/* Entry: 10bad1604; end: 10bad160b; -[SCADirectSnapCreateFail getEventQoS] */

undefined8 FUN_10bad1604(void)

{
  return 1;
}



/* Entry: 10bad160c; end: 10bad1617; -[SCADirectSnapCreateFail getPerUserSamplingRateV2] */

undefined8 FUN_10bad160c(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bad1618; end: 10bad166b; -[SCADirectSnapCreateFail setCamera:] */

void FUN_10bad1618(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110dad4b8,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bad166c; end: 10bad16eb; -[SCADirectSnapCreateFail setLagunaConnectivity:] */

void FUN_10bad166c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c31248(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110ff34f8,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bad16ec; end: 10bad1703; -[SCADirectSnapCreateFail setLagunaTransferBatchId:] */

void FUN_10bad16ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fd2578,4,param_3,0);
  return;
}



/* Entry: 10bad1704; end: 10bad1707; -[SCADirectSnapCreateFail getFieldNumberToFieldDict] */

void FUN_10bad1704(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bad1708; end: 10bad1713; -[SCADirectSnapCreateFail toProtoWithAllowedFields:] */

void FUN_10bad1708(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bad1714; end: 10bad171b; -[SCADirectSnapCreateFail getPayloadIdentifier] */

undefined8 FUN_10bad1714(void)

{
  return 0x2d2;
}



/* Entry: 10bad171c; end: 10bad1727; -[SCAGalleryPageAction getEventName] */

undefined ** FUN_10bad171c(void)

{
  return &PTR____CFConstantStringClassReference_110ff3518;
}



/* Entry: 10bad1728; end: 10bad172f; -[SCAGalleryPageAction getEventQoS] */

undefined8 FUN_10bad1728(void)

{
  return 1;
}



/* Entry: 10bad1730; end: 10bad173b; -[SCAGalleryPageAction getPerUserSamplingRateV2] */

undefined8 FUN_10bad1730(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bad173c; end: 10bad17bb; -[SCAGalleryPageAction setAction:] */

void FUN_10bad173c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bad17bc; end: 10bad17d3; -[SCAGalleryPageAction setLagunaTransferBatchId:] */

void FUN_10bad17bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fd2578,3,param_3,0);
  return;
}



/* Entry: 10bad17d4; end: 10bad1853; -[SCAGalleryPageAction setPage:] */

void FUN_10bad17d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bc9107c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110daedd8,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bad1854; end: 10bad18d3; -[SCAGalleryPageAction setPageName:] */

void FUN_10bad1854(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb05f1c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110eeb598,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bad18d4; end: 10bad18d7; -[SCAGalleryPageAction getFieldNumberToFieldDict] */

void FUN_10bad18d4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bad18d8; end: 10bad18e3; -[SCAGalleryPageAction toProtoWithAllowedFields:] */

void FUN_10bad18d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bad18e4; end: 10bad18eb; -[SCAGalleryPageAction getPayloadIdentifier] */

undefined8 FUN_10bad18e4(void)

{
  return 999;
}



/* Entry: 10bad18ec; end: 10bad18f7; -[SCAProfilePageView getEventName] */

undefined ** FUN_10bad18ec(void)

{
  return &PTR____CFConstantStringClassReference_110ff3538;
}



/* Entry: 10bad18f8; end: 10bad18ff; -[SCAProfilePageView getEventQoS] */

undefined8 FUN_10bad18f8(void)

{
  return 1;
}



/* Entry: 10bad1900; end: 10bad1917; -[SCAProfilePageView setAdditionalInfo:] */

void FUN_10bad1900(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa48d8,2,param_3,0);
  return;
}



/* Entry: 10bad1918; end: 10bad1997; -[SCAProfilePageView setEntryEvent:] */

void FUN_10bad1918(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baf6c54(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110eb58f8,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bad1998; end: 10bad19eb; -[SCAProfilePageView setNotificationCount:] */

void FUN_10bad1998(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110ff3558,4,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bad19ec; end: 10bad1a6b; -[SCAProfilePageView setPage:] */

void FUN_10bad19ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bc9107c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110daedd8,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bad1a6c; end: 10bad1aeb; -[SCAProfilePageView setPageName:] */

void FUN_10bad1a6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb09308(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110eeb598,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bad1aec; end: 10bad1b03; -[SCAProfilePageView setProfileSessionId:] */

void FUN_10bad1aec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb1a98,7,param_3,0);
  return;
}



/* Entry: 10bad1b04; end: 10bad1b57; -[SCAProfilePageView setViewTimeSec:] */

void FUN_10bad1b04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fadb38,8,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bad1b58; end: 10bad1b5b; -[SCAProfilePageView getFieldNumberToFieldDict] */

void FUN_10bad1b58(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bad1b5c; end: 10bad1b67; -[SCAProfilePageView toProtoWithAllowedFields:] */

void FUN_10bad1b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10bad1b68; end: 10bad1b6f; -[SCAProfilePageView getPayloadIdentifier] */

undefined8 FUN_10bad1b68(void)

{
  return 0x6b5;
}



/* Entry: 10bad1b70; end: 10bad1b83; -[SCASpectaclesAppBasePageEvent setPageId:] */

void FUN_10bad1b70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_value_type__112644840,
             &PTR____CFConstantStringClassReference_110e4a298,param_3,0);
  return;
}



/* Entry: 10bad1b84; end: 10bad1b9b; -[SCASpectaclesAppLifecycleEventParams setLifecycleEventName:] */

void FUN_10bad1b84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ff3578,2,param_3,0);
  return;
}



/* Entry: 10bad1b9c; end: 10bad1bb3; -[SCASpectaclesAppLifecycleEventParams setLifecycleEventParams:] */

void FUN_10bad1b9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ff3598,3,param_3,0);
  return;
}



/* Entry: 10bad1bb4; end: 10bad1bcb; -[SCASpectaclesAppLifecycleEventParams setParentLifecycleEventName:] */

void FUN_10bad1bb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ff35b8,4,param_3,0);
  return;
}



/* Entry: 10bad1bcc; end: 10bad1be3; -[SCASpectaclesAppLifecycleEventParams setParentLifecycleEventParams:] */

void FUN_10bad1bcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ff35d8,5,param_3,0);
  return;
}



/* Entry: 10bad1be4; end: 10bad1c37; -[SCASpectaclesAppLifecycleEventParams setTimeSinceParentMs:] */

void FUN_10bad1be4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110ff35f8,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bad1c38; end: 10bad1c3b; -[SCASpectaclesAppLifecycleEventParams getFieldNumberToFieldDict] */

void FUN_10bad1c38(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bad1c3c; end: 10bad1c47; -[SCASpectaclesAppLifecycleEventParams toProtoWithAllowedFields:] */

void FUN_10bad1c3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,0);
  return;
}



/* Entry: 10bad1c48; end: 10bad1c4f; -[SCASpectaclesAppLifecycleEventParams getPayloadIdentifier] */

undefined8 FUN_10bad1c48(void)

{
  return 0x14ad;
}



/* Entry: 10bad1c50; end: 10bad1c5b; -[SCASpectaclesAppPageView getEventName] */

undefined ** FUN_10bad1c50(void)

{
  return &PTR____CFConstantStringClassReference_110ff3618;
}



/* Entry: 10bad1c5c; end: 10bad1c63; -[SCASpectaclesAppPageView getEventQoS] */

undefined8 FUN_10bad1c5c(void)

{
  return 1;
}



/* Entry: 10bad1c64; end: 10bad1ce3; -[SCASpectaclesAppPageView setExitEvent:] */

void FUN_10bad1c64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bad1ce4; end: 10bad1cfb; -[SCASpectaclesAppPageView setFeature:] */

void FUN_10bad1ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110db1138,4,param_3,0);
  return;
}



/* Entry: 10bad1cfc; end: 10bad1d13; -[SCASpectaclesAppPageView setNextPage:] */

void FUN_10bad1cfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e6ed18,8,param_3,0);
  return;
}



/* Entry: 10bad1d14; end: 10bad1d2b; -[SCASpectaclesAppPageView setPage:] */

void FUN_10bad1d14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110daedd8,9,param_3,0);
  return;
}



/* Entry: 10bad1d2c; end: 10bad1d7f; -[SCASpectaclesAppPageView setPageSequenceId:] */

void FUN_10bad1d2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fb1a58,10,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bad1d80; end: 10bad1d97; -[SCASpectaclesAppPageView setSourcePage:] */

void FUN_10bad1d80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110f41d38,0xb,param_3,0);
  return;
}



/* Entry: 10bad1d98; end: 10bad1ddf; -[SCASpectaclesAppPageView setStack:] */

void FUN_10bad1d98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf51e00(param_3);
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110e6ed38,0xd,param_3,
                      0xd);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


