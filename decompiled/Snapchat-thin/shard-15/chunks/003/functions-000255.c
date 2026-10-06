/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ba12374; end: 10ba1237f; -[SCACognacInMiniSignUp getEventName] */

undefined ** FUN_10ba12374(void)

{
  return &PTR____CFConstantStringClassReference_110fc0378;
}



/* Entry: 10ba12380; end: 10ba12387; -[SCACognacInMiniSignUp getEventQoS] */

undefined8 FUN_10ba12380(void)

{
  return 1;
}



/* Entry: 10ba12388; end: 10ba1238f; -[SCACognacInMiniSignUp getPerUserSamplingRateV2] */

undefined8 FUN_10ba12388(void)

{
  return 0x3ff0000000000000;
}



/* Entry: 10ba12390; end: 10ba123e3; -[SCACognacInMiniSignUp setSuccess:] */

void FUN_10ba12390(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110dab0d8,6,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba123e4; end: 10ba12407; -[SCACognacInMiniSignUp getFieldNumberToFieldDict] */

void FUN_10ba123e4(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba12408; end: 10ba1243f; -[SCACognacInMiniSignUp addToProtoDictionary] */

void FUN_10ba12408(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba12440; end: 10ba12497; -[SCACognacInMiniSignUp toProtoWithAllowedFields:] */

void FUN_10ba12440(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba12498; end: 10ba1249f; -[SCACognacInMiniSignUp getPayloadIdentifier] */

undefined8 FUN_10ba12498(void)

{
  return 0xbed;
}



/* Entry: 10ba124a0; end: 10ba124ab; -[SCACognacInMiniSpendCredit getEventName] */

undefined ** FUN_10ba124a0(void)

{
  return &PTR____CFConstantStringClassReference_110fc0398;
}



/* Entry: 10ba124ac; end: 10ba124b3; -[SCACognacInMiniSpendCredit getEventQoS] */

undefined8 FUN_10ba124ac(void)

{
  return 1;
}



/* Entry: 10ba124b4; end: 10ba124cb; -[SCACognacInMiniSpendCredit setCurrency:] */

void FUN_10ba124b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e029f8,5,param_3,0);
  return;
}



/* Entry: 10ba124cc; end: 10ba124e3; -[SCACognacInMiniSpendCredit setPrice:] */

void FUN_10ba124cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e029d8,7,param_3,0);
  return;
}



/* Entry: 10ba124e4; end: 10ba124fb; -[SCACognacInMiniSpendCredit setTransactionId:] */

void FUN_10ba124e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fc02b8,8,param_3,0);
  return;
}



/* Entry: 10ba124fc; end: 10ba1251f; -[SCACognacInMiniSpendCredit getFieldNumberToFieldDict] */

void FUN_10ba124fc(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba12520; end: 10ba12557; -[SCACognacInMiniSpendCredit addToProtoDictionary] */

void FUN_10ba12520(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba12558; end: 10ba125af; -[SCACognacInMiniSpendCredit toProtoWithAllowedFields:] */

void FUN_10ba12558(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba125b0; end: 10ba125b7; -[SCACognacInMiniSpendCredit getPayloadIdentifier] */

undefined8 FUN_10ba125b0(void)

{
  return 0xbee;
}



/* Entry: 10ba125b8; end: 10ba125c3; -[SCACognacInMiniStartCheckout getEventName] */

undefined ** FUN_10ba125b8(void)

{
  return &PTR____CFConstantStringClassReference_110fc03b8;
}



/* Entry: 10ba125c4; end: 10ba125cb; -[SCACognacInMiniStartCheckout getEventQoS] */

undefined8 FUN_10ba125c4(void)

{
  return 1;
}



/* Entry: 10ba125cc; end: 10ba1261f; -[SCACognacInMiniStartCheckout setPaymentInfoAvailable:] */

void FUN_10ba125cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fc03d8,7,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba12620; end: 10ba12643; -[SCACognacInMiniStartCheckout getFieldNumberToFieldDict] */

void FUN_10ba12620(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba12644; end: 10ba1267b; -[SCACognacInMiniStartCheckout addToProtoDictionary] */

void FUN_10ba12644(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba1267c; end: 10ba126d3; -[SCACognacInMiniStartCheckout toProtoWithAllowedFields:] */

void FUN_10ba1267c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba126d4; end: 10ba126db; -[SCACognacInMiniStartCheckout getPayloadIdentifier] */

undefined8 FUN_10ba126d4(void)

{
  return 0xbef;
}



/* Entry: 10ba126dc; end: 10ba126e7; -[SCACognacInMiniStartTrial getEventName] */

undefined ** FUN_10ba126dc(void)

{
  return &PTR____CFConstantStringClassReference_110fc03f8;
}



/* Entry: 10ba126e8; end: 10ba126ef; -[SCACognacInMiniStartTrial getEventQoS] */

undefined8 FUN_10ba126e8(void)

{
  return 1;
}



/* Entry: 10ba126f0; end: 10ba12707; -[SCACognacInMiniStartTrial setCurrency:] */

void FUN_10ba126f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e029f8,5,param_3,0);
  return;
}



/* Entry: 10ba12708; end: 10ba1271f; -[SCACognacInMiniStartTrial setPrice:] */

void FUN_10ba12708(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e029d8,7,param_3,0);
  return;
}



/* Entry: 10ba12720; end: 10ba12737; -[SCACognacInMiniStartTrial setTransactionId:] */

void FUN_10ba12720(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fc02b8,8,param_3,0);
  return;
}



/* Entry: 10ba12738; end: 10ba1275b; -[SCACognacInMiniStartTrial getFieldNumberToFieldDict] */

void FUN_10ba12738(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba1275c; end: 10ba12793; -[SCACognacInMiniStartTrial addToProtoDictionary] */

void FUN_10ba1275c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba12794; end: 10ba127eb; -[SCACognacInMiniStartTrial toProtoWithAllowedFields:] */

void FUN_10ba12794(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba127ec; end: 10ba127f3; -[SCACognacInMiniStartTrial getPayloadIdentifier] */

undefined8 FUN_10ba127ec(void)

{
  return 0xbf0;
}



/* Entry: 10ba127f4; end: 10ba127ff; -[SCACognacInMiniSubscribe getEventName] */

undefined ** FUN_10ba127f4(void)

{
  return &PTR____CFConstantStringClassReference_110fc0418;
}



/* Entry: 10ba12800; end: 10ba12807; -[SCACognacInMiniSubscribe getEventQoS] */

undefined8 FUN_10ba12800(void)

{
  return 1;
}



/* Entry: 10ba12808; end: 10ba1281f; -[SCACognacInMiniSubscribe setCurrency:] */

void FUN_10ba12808(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e029f8,5,param_3,0);
  return;
}



/* Entry: 10ba12820; end: 10ba12837; -[SCACognacInMiniSubscribe setPrice:] */

void FUN_10ba12820(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e029d8,7,param_3,0);
  return;
}



/* Entry: 10ba12838; end: 10ba1284f; -[SCACognacInMiniSubscribe setTransactionId:] */

void FUN_10ba12838(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fc02b8,8,param_3,0);
  return;
}



/* Entry: 10ba12850; end: 10ba12873; -[SCACognacInMiniSubscribe getFieldNumberToFieldDict] */

void FUN_10ba12850(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba12874; end: 10ba128ab; -[SCACognacInMiniSubscribe addToProtoDictionary] */

void FUN_10ba12874(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba128ac; end: 10ba12903; -[SCACognacInMiniSubscribe toProtoWithAllowedFields:] */

void FUN_10ba128ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba12904; end: 10ba1290b; -[SCACognacInMiniSubscribe getPayloadIdentifier] */

undefined8 FUN_10ba12904(void)

{
  return 0xbf1;
}



/* Entry: 10ba1290c; end: 10ba12917; -[SCACognacInMiniViewContent getEventName] */

undefined ** FUN_10ba1290c(void)

{
  return &PTR____CFConstantStringClassReference_110fc0438;
}



/* Entry: 10ba12918; end: 10ba1291f; -[SCACognacInMiniViewContent getEventQoS] */

undefined8 FUN_10ba12918(void)

{
  return 1;
}



/* Entry: 10ba12920; end: 10ba12937; -[SCACognacInMiniViewContent setItemCategory:] */

void FUN_10ba12920(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fc02f8,6,param_3,0);
  return;
}



/* Entry: 10ba12938; end: 10ba1294f; -[SCACognacInMiniViewContent setItemId:] */

void FUN_10ba12938(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e02998,7,param_3,0);
  return;
}



/* Entry: 10ba12950; end: 10ba12973; -[SCACognacInMiniViewContent getFieldNumberToFieldDict] */

void FUN_10ba12950(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba12974; end: 10ba129ab; -[SCACognacInMiniViewContent addToProtoDictionary] */

void FUN_10ba12974(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba129ac; end: 10ba12a03; -[SCACognacInMiniViewContent toProtoWithAllowedFields:] */

void FUN_10ba129ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba12a04; end: 10ba12a0b; -[SCACognacInMiniViewContent getPayloadIdentifier] */

undefined8 FUN_10ba12a04(void)

{
  return 0xbf2;
}



/* Entry: 10ba12a0c; end: 10ba12a17; -[SCACognacLensEnd getEventName] */

undefined ** FUN_10ba12a0c(void)

{
  return &PTR____CFConstantStringClassReference_110fc0458;
}



/* Entry: 10ba12a18; end: 10ba12a1f; -[SCACognacLensEnd getEventQoS] */

undefined8 FUN_10ba12a18(void)

{
  return 1;
}



/* Entry: 10ba12a20; end: 10ba12a37; -[SCACognacLensEnd setLensUUID:] */

void FUN_10ba12a20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fc0478,2,param_3,0);
  return;
}



/* Entry: 10ba12a38; end: 10ba12a5b; -[SCACognacLensEnd getFieldNumberToFieldDict] */

void FUN_10ba12a38(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba12a5c; end: 10ba12a93; -[SCACognacLensEnd addToProtoDictionary] */

void FUN_10ba12a5c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba12a94; end: 10ba12aeb; -[SCACognacLensEnd toProtoWithAllowedFields:] */

void FUN_10ba12a94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba12aec; end: 10ba12af3; -[SCACognacLensEnd getPayloadIdentifier] */

undefined8 FUN_10ba12aec(void)

{
  return 0xeb7;
}



/* Entry: 10ba12af4; end: 10ba12aff; -[SCACognacLensOpenAttempt getEventName] */

undefined ** FUN_10ba12af4(void)

{
  return &PTR____CFConstantStringClassReference_110fc0498;
}



/* Entry: 10ba12b00; end: 10ba12b07; -[SCACognacLensOpenAttempt getEventQoS] */

undefined8 FUN_10ba12b00(void)

{
  return 1;
}



/* Entry: 10ba12b08; end: 10ba12b0f; -[SCACognacLensOpenAttempt getPerUserSamplingRateV2] */

undefined8 FUN_10ba12b08(void)

{
  return 0x3ff0000000000000;
}



/* Entry: 10ba12b10; end: 10ba12b27; -[SCACognacLensOpenAttempt setLensUUID:] */

void FUN_10ba12b10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fc0478,2,param_3,0);
  return;
}



/* Entry: 10ba12b28; end: 10ba12b4b; -[SCACognacLensOpenAttempt getFieldNumberToFieldDict] */

void FUN_10ba12b28(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba12b4c; end: 10ba12b83; -[SCACognacLensOpenAttempt addToProtoDictionary] */

void FUN_10ba12b4c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba12b84; end: 10ba12bdb; -[SCACognacLensOpenAttempt toProtoWithAllowedFields:] */

void FUN_10ba12b84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba12bdc; end: 10ba12be3; -[SCACognacLensOpenAttempt getPayloadIdentifier] */

undefined8 FUN_10ba12bdc(void)

{
  return 0xeb8;
}



/* Entry: 10ba12be4; end: 10ba12bef; -[SCACognacLensOpenSuccess getEventName] */

undefined ** FUN_10ba12be4(void)

{
  return &PTR____CFConstantStringClassReference_110fc04b8;
}



/* Entry: 10ba12bf0; end: 10ba12bf7; -[SCACognacLensOpenSuccess getEventQoS] */

undefined8 FUN_10ba12bf0(void)

{
  return 1;
}



/* Entry: 10ba12bf8; end: 10ba12bff; -[SCACognacLensOpenSuccess getPerUserSamplingRateV2] */

undefined8 FUN_10ba12bf8(void)

{
  return 0x3ff0000000000000;
}



/* Entry: 10ba12c00; end: 10ba12c17; -[SCACognacLensOpenSuccess setLensUUID:] */

void FUN_10ba12c00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fc0478,2,param_3,0);
  return;
}



/* Entry: 10ba12c18; end: 10ba12c3b; -[SCACognacLensOpenSuccess getFieldNumberToFieldDict] */

void FUN_10ba12c18(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba12c3c; end: 10ba12c73; -[SCACognacLensOpenSuccess addToProtoDictionary] */

void FUN_10ba12c3c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba12c74; end: 10ba12ccb; -[SCACognacLensOpenSuccess toProtoWithAllowedFields:] */

void FUN_10ba12c74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba12ccc; end: 10ba12cd3; -[SCACognacLensOpenSuccess getPayloadIdentifier] */

undefined8 FUN_10ba12ccc(void)

{
  return 0xeb9;
}



/* Entry: 10ba12cd4; end: 10ba12cdf; -[SCACognacPartnerConnectionDeleteProtectedData getEventName] */

undefined ** FUN_10ba12cd4(void)

{
  return &PTR____CFConstantStringClassReference_110fc04d8;
}



/* Entry: 10ba12ce0; end: 10ba12ce7; -[SCACognacPartnerConnectionDeleteProtectedData getEventQoS] */

undefined8 FUN_10ba12ce0(void)

{
  return 1;
}



/* Entry: 10ba12ce8; end: 10ba12d0b; -[SCACognacPartnerConnectionDeleteProtectedData getFieldNumberToFieldDict] */

void FUN_10ba12ce8(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba12d0c; end: 10ba12d43; -[SCACognacPartnerConnectionDeleteProtectedData addToProtoDictionary] */

void FUN_10ba12d0c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba12d44; end: 10ba12d9b; -[SCACognacPartnerConnectionDeleteProtectedData toProtoWithAllowedFields:] */

void FUN_10ba12d44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba12d9c; end: 10ba12da3; -[SCACognacPartnerConnectionDeleteProtectedData getPayloadIdentifier] */

undefined8 FUN_10ba12d9c(void)

{
  return 0xe64;
}



/* Entry: 10ba12da4; end: 10ba12daf; -[SCACognacPartnerConnectionDeleteProtectedDataAlertDismiss getEventName] */

undefined ** FUN_10ba12da4(void)

{
  return &PTR____CFConstantStringClassReference_110fc04f8;
}



/* Entry: 10ba12db0; end: 10ba12db7; -[SCACognacPartnerConnectionDeleteProtectedDataAlertDismiss getEventQoS] */

undefined8 FUN_10ba12db0(void)

{
  return 1;
}



/* Entry: 10ba12db8; end: 10ba12e0b; -[SCACognacPartnerConnectionDeleteProtectedDataAlertDismiss setDelete:] */

void FUN_10ba12db8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110db18b8,3,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba12e0c; end: 10ba12e2f; -[SCACognacPartnerConnectionDeleteProtectedDataAlertDismiss getFieldNumberToFieldDict] */

void FUN_10ba12e0c(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba12e30; end: 10ba12e67; -[SCACognacPartnerConnectionDeleteProtectedDataAlertDismiss addToProtoDictionary] */

void FUN_10ba12e30(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba12e68; end: 10ba12ebf; -[SCACognacPartnerConnectionDeleteProtectedDataAlertDismiss toProtoWithAllowedFields:] */

void FUN_10ba12e68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba12ec0; end: 10ba12ec7; -[SCACognacPartnerConnectionDeleteProtectedDataAlertDismiss getPayloadIdentifier] */

undefined8 FUN_10ba12ec0(void)

{
  return 0xe65;
}



/* Entry: 10ba12ec8; end: 10ba12ed3; -[SCACognacPartnerConnectionLearnMore getEventName] */

undefined ** FUN_10ba12ec8(void)

{
  return &PTR____CFConstantStringClassReference_110fc0518;
}



/* Entry: 10ba12ed4; end: 10ba12edb; -[SCACognacPartnerConnectionLearnMore getEventQoS] */

undefined8 FUN_10ba12ed4(void)

{
  return 1;
}



/* Entry: 10ba12edc; end: 10ba12eff; -[SCACognacPartnerConnectionLearnMore getFieldNumberToFieldDict] */

void FUN_10ba12edc(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba12f00; end: 10ba12f37; -[SCACognacPartnerConnectionLearnMore addToProtoDictionary] */

void FUN_10ba12f00(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba12f38; end: 10ba12f8f; -[SCACognacPartnerConnectionLearnMore toProtoWithAllowedFields:] */

void FUN_10ba12f38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba12f90; end: 10ba12f97; -[SCACognacPartnerConnectionLearnMore getPayloadIdentifier] */

undefined8 FUN_10ba12f90(void)

{
  return 0xe66;
}



/* Entry: 10ba12f98; end: 10ba12fa3; -[SCACognacPartnerConnectionMinisTap getEventName] */

undefined ** FUN_10ba12f98(void)

{
  return &PTR____CFConstantStringClassReference_110fc0538;
}



/* Entry: 10ba12fa4; end: 10ba12fab; -[SCACognacPartnerConnectionMinisTap getEventQoS] */

undefined8 FUN_10ba12fa4(void)

{
  return 1;
}



/* Entry: 10ba12fac; end: 10ba12fc3; -[SCACognacPartnerConnectionMinisTap setCognacId:] */

void FUN_10ba12fac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fbfa98,3,param_3,0);
  return;
}



/* Entry: 10ba12fc4; end: 10ba12fe7; -[SCACognacPartnerConnectionMinisTap getFieldNumberToFieldDict] */

void FUN_10ba12fc4(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba12fe8; end: 10ba1301f; -[SCACognacPartnerConnectionMinisTap addToProtoDictionary] */

void FUN_10ba12fe8(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba13020; end: 10ba13077; -[SCACognacPartnerConnectionMinisTap toProtoWithAllowedFields:] */

void FUN_10ba13020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba13078; end: 10ba1307f; -[SCACognacPartnerConnectionMinisTap getPayloadIdentifier] */

undefined8 FUN_10ba13078(void)

{
  return 0xe67;
}



/* Entry: 10ba13080; end: 10ba1308b; -[SCACognacPartnerConnectionRemoveMini getEventName] */

undefined ** FUN_10ba13080(void)

{
  return &PTR____CFConstantStringClassReference_110fc0558;
}


