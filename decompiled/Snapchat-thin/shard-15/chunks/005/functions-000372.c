/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10babdbe0; end: 10babdbe3; -[SCAAuraOperaSnapView getFieldNumberToFieldDict] */

void FUN_10babdbe0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10babdbe4; end: 10babdbef; -[SCAAuraOperaSnapView toProtoWithAllowedFields:] */

void FUN_10babdbe4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10babdbf0; end: 10babdbf7; -[SCAAuraOperaSnapView getPayloadIdentifier] */

undefined8 FUN_10babdbf0(void)

{
  return 0xa4c;
}



/* Entry: 10babdbf8; end: 10babdc03; -[SCAAuraSession getEventName] */

undefined ** FUN_10babdbf8(void)

{
  return &PTR____CFConstantStringClassReference_110fed118;
}



/* Entry: 10babdc04; end: 10babdc0b; -[SCAAuraSession getEventQoS] */

undefined8 FUN_10babdc04(void)

{
  return 1;
}



/* Entry: 10babdc0c; end: 10babdc17; -[SCAAuraSession getPerUserSamplingRateV2] */

undefined8 FUN_10babdc0c(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10babdc18; end: 10babdc97; -[SCAAuraSession setAuraProfileType:] */

void FUN_10babdc18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010babcf50(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fecf58,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babdc98; end: 10babdcaf; -[SCAAuraSession setAuraSessionId:] */

void FUN_10babdc98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fecf78,3,param_3,0);
  return;
}



/* Entry: 10babdcb0; end: 10babdd03; -[SCAAuraSession setBirthInfoPageDisplayed:] */

void FUN_10babdcb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fed138,4,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babdd04; end: 10babdd57; -[SCAAuraSession setDiviningPageDisplayed:] */

void FUN_10babdd04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fed158,5,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babdd58; end: 10babddd7; -[SCAAuraSession setExitType:] */

void FUN_10babdd58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010babcf70(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110f42e18,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babddd8; end: 10babde57; -[SCAAuraSession setFromSource:] */

void FUN_10babddd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010babcf90(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fecf98,7,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babde58; end: 10babdeab; -[SCAAuraSession setIntroCardDisplayed:] */

void FUN_10babde58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fed178,8,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babdeac; end: 10babdeff; -[SCAAuraSession setMissingBirthdayAlertDisplayed:] */

void FUN_10babdeac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fed198,9,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babdf00; end: 10babdf53; -[SCAAuraSession setOperaDisplayed:] */

void FUN_10babdf00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fed1b8,10,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babdf54; end: 10babdfa7; -[SCAAuraSession setTimeSpentSec:] */

void FUN_10babdf54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fecfb8,0xb,puVar1,2)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babdfa8; end: 10babdffb; -[SCAAuraSession setBirthdayPartyDisabledAlertDisplayed:] */

void FUN_10babdfa8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fed1d8,0xc,puVar1,1)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babdffc; end: 10babdfff; -[SCAAuraSession getFieldNumberToFieldDict] */

void FUN_10babdffc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10babe000; end: 10babe00b; -[SCAAuraSession toProtoWithAllowedFields:] */

void FUN_10babe000(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,2,param_3);
  return;
}



/* Entry: 10babe00c; end: 10babe013; -[SCAAuraSession getPayloadIdentifier] */

undefined8 FUN_10babe00c(void)

{
  return 0xa4e;
}



/* Entry: 10babe014; end: 10babe01f; -[SCAMiniprofileBaseEvent getEventName] */

undefined ** FUN_10babe014(void)

{
  return &PTR____CFConstantStringClassReference_110fed1f8;
}



/* Entry: 10babe020; end: 10babe027; -[SCAMiniprofileBaseEvent getEventQoS] */

undefined8 FUN_10babe020(void)

{
  return 1;
}



/* Entry: 10babe028; end: 10babe033; -[SCAMiniprofileBaseEvent getPerUserSamplingRateV2] */

undefined8 FUN_10babe028(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10babe034; end: 10babe04b; -[SCAMiniprofileBaseEvent setProfileId:] */

void FUN_10babe034(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110db6d38,2,param_3,0);
  return;
}



/* Entry: 10babe04c; end: 10babe0cb; -[SCAMiniprofileBaseEvent setProfileType:] */

void FUN_10babe04c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb09328(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dc4318,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babe0cc; end: 10babe14b; -[SCAMiniprofileBaseEvent setSource:] */

void FUN_10babe0cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bc9107c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babe14c; end: 10babe1cb; -[SCAMiniprofileBaseEvent setSourcePage:] */

void FUN_10babe14c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb09308(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110f41d38,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babe1cc; end: 10babe21f; -[SCAMiniprofileBaseEvent setViewLocation:] */

void FUN_10babe1cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110dc41b8,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babe220; end: 10babe29f; -[SCAMiniprofileBaseEvent setViewSource:] */

void FUN_10babe220(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baf2e2c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110eb5238,7,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babe2a0; end: 10babe2a3; -[SCAMiniprofileBaseEvent getFieldNumberToFieldDict] */

void FUN_10babe2a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10babe2a4; end: 10babe2af; -[SCAMiniprofileBaseEvent toProtoWithAllowedFields:] */

void FUN_10babe2a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10babe2b0; end: 10babe2b7; -[SCAMiniprofileBaseEvent getPayloadIdentifier] */

undefined8 FUN_10babe2b0(void)

{
  return 0x5a4;
}



/* Entry: 10babe2b8; end: 10babe2c3; -[SCAMiniprofileChatbuttonClick getEventName] */

undefined ** FUN_10babe2b8(void)

{
  return &PTR____CFConstantStringClassReference_110fed218;
}



/* Entry: 10babe2c4; end: 10babe2cb; -[SCAMiniprofileChatbuttonClick getEventQoS] */

undefined8 FUN_10babe2c4(void)

{
  return 1;
}



/* Entry: 10babe2cc; end: 10babe31f; -[SCAMiniprofileChatbuttonClick setHasProfilePic:] */

void FUN_10babe2cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fed238,2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babe320; end: 10babe343; -[SCAMiniprofileChatbuttonClick getFieldNumberToFieldDict] */

void FUN_10babe320(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10babe344; end: 10babe37b; -[SCAMiniprofileChatbuttonClick addToProtoDictionary] */

void FUN_10babe344(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10babe37c; end: 10babe3d3; -[SCAMiniprofileChatbuttonClick toProtoWithAllowedFields:] */

void FUN_10babe37c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10babe3d4; end: 10babe3db; -[SCAMiniprofileChatbuttonClick getPayloadIdentifier] */

undefined8 FUN_10babe3d4(void)

{
  return 0x5a5;
}



/* Entry: 10babe3dc; end: 10babe3e7; -[SCAMiniprofilePageExit getEventName] */

undefined ** FUN_10babe3dc(void)

{
  return &PTR____CFConstantStringClassReference_110fed258;
}



/* Entry: 10babe3e8; end: 10babe3ef; -[SCAMiniprofilePageExit getEventQoS] */

undefined8 FUN_10babe3e8(void)

{
  return 2;
}



/* Entry: 10babe3f0; end: 10babe3fb; -[SCAMiniprofilePageExit getPerUserSamplingRate] */

undefined8 FUN_10babe3f0(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10babe3fc; end: 10babe44f; -[SCAMiniprofilePageExit setHasProfilePic:] */

void FUN_10babe3fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fed238,2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babe450; end: 10babe4a3; -[SCAMiniprofilePageExit setViewTimeSecs:] */

void FUN_10babe450(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110f438d8,9,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babe4a4; end: 10babe4c7; -[SCAMiniprofilePageExit getFieldNumberToFieldDict] */

void FUN_10babe4a4(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10babe4c8; end: 10babe4ff; -[SCAMiniprofilePageExit addToProtoDictionary] */

void FUN_10babe4c8(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10babe500; end: 10babe557; -[SCAMiniprofilePageExit toProtoWithAllowedFields:] */

void FUN_10babe500(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10babe558; end: 10babe55f; -[SCAMiniprofilePageExit getPayloadIdentifier] */

undefined8 FUN_10babe558(void)

{
  return 0x5a6;
}



/* Entry: 10babe560; end: 10babe56b; -[SCAMiniprofilePageView getEventName] */

undefined ** FUN_10babe560(void)

{
  return &PTR____CFConstantStringClassReference_110fed278;
}



/* Entry: 10babe56c; end: 10babe573; -[SCAMiniprofilePageView getEventQoS] */

undefined8 FUN_10babe56c(void)

{
  return 2;
}



/* Entry: 10babe574; end: 10babe57f; -[SCAMiniprofilePageView getPerUserSamplingRate] */

undefined8 FUN_10babe574(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10babe580; end: 10babe5a3; -[SCAMiniprofilePageView getFieldNumberToFieldDict] */

void FUN_10babe580(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10babe5a4; end: 10babe5db; -[SCAMiniprofilePageView addToProtoDictionary] */

void FUN_10babe5a4(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10babe5dc; end: 10babe633; -[SCAMiniprofilePageView toProtoWithAllowedFields:] */

void FUN_10babe5dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10babe634; end: 10babe63b; -[SCAMiniprofilePageView getPayloadIdentifier] */

undefined8 FUN_10babe634(void)

{
  return 0x5a7;
}



/* Entry: 10babe63c; end: 10babe647; -[SCAMiniprofileSettinggearClick getEventName] */

undefined ** FUN_10babe63c(void)

{
  return &PTR____CFConstantStringClassReference_110fed298;
}



/* Entry: 10babe648; end: 10babe64f; -[SCAMiniprofileSettinggearClick getEventQoS] */

undefined8 FUN_10babe648(void)

{
  return 2;
}



/* Entry: 10babe650; end: 10babe65b; -[SCAMiniprofileSettinggearClick getPerUserSamplingRate] */

undefined8 FUN_10babe650(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10babe65c; end: 10babe6af; -[SCAMiniprofileSettinggearClick setHasProfilePic:] */

void FUN_10babe65c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fed238,2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babe6b0; end: 10babe6d3; -[SCAMiniprofileSettinggearClick getFieldNumberToFieldDict] */

void FUN_10babe6b0(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10babe6d4; end: 10babe70b; -[SCAMiniprofileSettinggearClick addToProtoDictionary] */

void FUN_10babe6d4(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10babe70c; end: 10babe763; -[SCAMiniprofileSettinggearClick toProtoWithAllowedFields:] */

void FUN_10babe70c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10babe764; end: 10babe76b; -[SCAMiniprofileSettinggearClick getPayloadIdentifier] */

undefined8 FUN_10babe764(void)

{
  return 0x5a8;
}



/* Entry: 10babe76c; end: 10babe777; -[SCAMiniprofileSnapbuttonClick getEventName] */

undefined ** FUN_10babe76c(void)

{
  return &PTR____CFConstantStringClassReference_110fed2b8;
}



/* Entry: 10babe778; end: 10babe77f; -[SCAMiniprofileSnapbuttonClick getEventQoS] */

undefined8 FUN_10babe778(void)

{
  return 1;
}



/* Entry: 10babe780; end: 10babe7d3; -[SCAMiniprofileSnapbuttonClick setHasProfilePic:] */

void FUN_10babe780(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fed238,2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babe7d4; end: 10babe7f7; -[SCAMiniprofileSnapbuttonClick getFieldNumberToFieldDict] */

void FUN_10babe7d4(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10babe7f8; end: 10babe82f; -[SCAMiniprofileSnapbuttonClick addToProtoDictionary] */

void FUN_10babe7f8(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10babe830; end: 10babe887; -[SCAMiniprofileSnapbuttonClick toProtoWithAllowedFields:] */

void FUN_10babe830(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10babe888; end: 10babe88f; -[SCAMiniprofileSnapbuttonClick getPayloadIdentifier] */

undefined8 FUN_10babe888(void)

{
  return 0x5a9;
}



/* Entry: 10babe890; end: 10babe89b; -[SCAProfileAddressBookAddContactsFooter getEventName] */

undefined ** FUN_10babe890(void)

{
  return &PTR____CFConstantStringClassReference_110fed2d8;
}



/* Entry: 10babe89c; end: 10babe8a3; -[SCAProfileAddressBookAddContactsFooter getEventQoS] */

undefined8 FUN_10babe89c(void)

{
  return 1;
}



/* Entry: 10babe8a4; end: 10babe8af; -[SCAProfileAddressBookAddContactsFooter getPerUserSamplingRateV2] */

undefined8 FUN_10babe8a4(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10babe8b0; end: 10babe92f; -[SCAProfileAddressBookAddContactsFooter setSource:] */

void FUN_10babe8b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bc9107c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babe930; end: 10babe9af; -[SCAProfileAddressBookAddContactsFooter setSourcePage:] */

void FUN_10babe930(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb09308(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110f41d38,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babe9b0; end: 10babe9b3; -[SCAProfileAddressBookAddContactsFooter getFieldNumberToFieldDict] */

void FUN_10babe9b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10babe9b4; end: 10babe9bf; -[SCAProfileAddressBookAddContactsFooter toProtoWithAllowedFields:] */

void FUN_10babe9b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10babe9c0; end: 10babe9c7; -[SCAProfileAddressBookAddContactsFooter getPayloadIdentifier] */

undefined8 FUN_10babe9c0(void)

{
  return 0x68e;
}



/* Entry: 10babe9c8; end: 10babe9d3; -[SCAProfileDisplayNameChange getEventName] */

undefined ** FUN_10babe9c8(void)

{
  return &PTR____CFConstantStringClassReference_110fed2f8;
}



/* Entry: 10babe9d4; end: 10babe9db; -[SCAProfileDisplayNameChange getEventQoS] */

undefined8 FUN_10babe9d4(void)

{
  return 1;
}



/* Entry: 10babe9dc; end: 10babe9e7; -[SCAProfileDisplayNameChange getPerUserSamplingRateV2] */

undefined8 FUN_10babe9dc(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10babe9e8; end: 10babe9ff; -[SCAProfileDisplayNameChange setProfileSessionId:] */

void FUN_10babe9e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb1a98,2,param_3,0);
  return;
}



/* Entry: 10babea00; end: 10babea03; -[SCAProfileDisplayNameChange getFieldNumberToFieldDict] */

void FUN_10babea00(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10babea04; end: 10babea0f; -[SCAProfileDisplayNameChange toProtoWithAllowedFields:] */

void FUN_10babea04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10babea10; end: 10babea17; -[SCAProfileDisplayNameChange getPayloadIdentifier] */

undefined8 FUN_10babea10(void)

{
  return 0x69a;
}



/* Entry: 10babea18; end: 10babea23; -[SCAProfileInviteContactEnd getEventName] */

undefined ** FUN_10babea18(void)

{
  return &PTR____CFConstantStringClassReference_110fed318;
}



/* Entry: 10babea24; end: 10babea2b; -[SCAProfileInviteContactEnd getEventQoS] */

undefined8 FUN_10babea24(void)

{
  return 1;
}



/* Entry: 10babea2c; end: 10babeaab; -[SCAProfileInviteContactEnd setInviteType:] */

void FUN_10babea2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010babcfb0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fcb658,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babeaac; end: 10babeac3; -[SCAProfileInviteContactEnd setInviteUrl:] */

void FUN_10babeaac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fed338,3,param_3,0);
  return;
}



/* Entry: 10babeac4; end: 10babeadb; -[SCAProfileInviteContactEnd setStatus:] */

void FUN_10babeac4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110daf4d8,4,param_3,0);
  return;
}



/* Entry: 10babeadc; end: 10babeadf; -[SCAProfileInviteContactEnd getFieldNumberToFieldDict] */

void FUN_10babeadc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10babeae0; end: 10babeaeb; -[SCAProfileInviteContactEnd toProtoWithAllowedFields:] */

void FUN_10babeae0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10babeaec; end: 10babeaf3; -[SCAProfileInviteContactEnd getPayloadIdentifier] */

undefined8 FUN_10babeaec(void)

{
  return 0x6a0;
}



/* Entry: 10babeaf4; end: 10babeaff; -[SCAProfileInviteContactStart getEventName] */

undefined ** FUN_10babeaf4(void)

{
  return &PTR____CFConstantStringClassReference_110fed358;
}



/* Entry: 10babeb00; end: 10babeb07; -[SCAProfileInviteContactStart getEventQoS] */

undefined8 FUN_10babeb00(void)

{
  return 1;
}



/* Entry: 10babeb08; end: 10babeb13; -[SCAProfileInviteContactStart getPerUserSamplingRateV2] */

undefined8 FUN_10babeb08(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10babeb14; end: 10babeb93; -[SCAProfileInviteContactStart setInviteType:] */

void FUN_10babeb14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010babcfb0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fcb658,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babeb94; end: 10babebab; -[SCAProfileInviteContactStart setInviteUrl:] */

void FUN_10babeb94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fed338,3,param_3,0);
  return;
}



/* Entry: 10babebac; end: 10babebaf; -[SCAProfileInviteContactStart getFieldNumberToFieldDict] */

void FUN_10babebac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10babebb0; end: 10babebbb; -[SCAProfileInviteContactStart toProtoWithAllowedFields:] */

void FUN_10babebb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}


