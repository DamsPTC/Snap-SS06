/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b9c22c0; end: 10b9c22c7; -[SCARegistrationUserContactSkipDialog getPayloadIdentifier] */

undefined8 FUN_10b9c22c0(void)

{
  return 0x728;
}



/* Entry: 10b9c22c8; end: 10b9c22d3; -[SCARegistrationUserCreateAccount getEventName] */

undefined ** FUN_10b9c22c8(void)

{
  return &PTR____CFConstantStringClassReference_110fa4378;
}



/* Entry: 10b9c22d4; end: 10b9c22db; -[SCARegistrationUserCreateAccount getEventQoS] */

undefined8 FUN_10b9c22d4(void)

{
  return 1;
}



/* Entry: 10b9c22dc; end: 10b9c22f3; -[SCARegistrationUserCreateAccount setLongClientId:] */

void FUN_10b9c22dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa23f8,3,param_3,0);
  return;
}



/* Entry: 10b9c22f4; end: 10b9c2317; -[SCARegistrationUserCreateAccount getFieldNumberToFieldDict] */

void FUN_10b9c22f4(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9c2318; end: 10b9c234f; -[SCARegistrationUserCreateAccount addToProtoDictionary] */

void FUN_10b9c2318(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b9c2350; end: 10b9c23a7; -[SCARegistrationUserCreateAccount toProtoWithAllowedFields:] */

void FUN_10b9c2350(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b9c23a8; end: 10b9c23af; -[SCARegistrationUserCreateAccount getPayloadIdentifier] */

undefined8 FUN_10b9c23a8(void)

{
  return 0x729;
}



/* Entry: 10b9c23b0; end: 10b9c23bb; -[SCARegistrationUserDisplayNamePageview getEventName] */

undefined ** FUN_10b9c23b0(void)

{
  return &PTR____CFConstantStringClassReference_110fa4398;
}



/* Entry: 10b9c23bc; end: 10b9c23c3; -[SCARegistrationUserDisplayNamePageview getEventQoS] */

undefined8 FUN_10b9c23bc(void)

{
  return 1;
}



/* Entry: 10b9c23c4; end: 10b9c244b; -[SCARegistrationUserDisplayNamePageview setLastPageviewTs:] */

/* WARNING: Possible PIC construction at 0x00010b9c2414: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b9c2418) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_10b9c23c4(undefined8 param_1,undefined8 param_2,long param_3)

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
             &PTR____CFConstantStringClassReference_110fa43b8,3,puVar1,5);
  return;
}



/* Entry: 10b9c244c; end: 10b9c2463; -[SCARegistrationUserDisplayNamePageview setLongClientId:] */

void FUN_10b9c244c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa23f8,4,param_3,0);
  return;
}



/* Entry: 10b9c2464; end: 10b9c24e3; -[SCARegistrationUserDisplayNamePageview setRegistrationVersion:] */

void FUN_10b9c2464(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb09878(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fa4058,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9c24e4; end: 10b9c2563; -[SCARegistrationUserDisplayNamePageview setSource:] */

void FUN_10b9c24e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bc9107c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8d8,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9c2564; end: 10b9c2587; -[SCARegistrationUserDisplayNamePageview getFieldNumberToFieldDict] */

void FUN_10b9c2564(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9c2588; end: 10b9c25bf; -[SCARegistrationUserDisplayNamePageview addToProtoDictionary] */

void FUN_10b9c2588(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b9c25c0; end: 10b9c2617; -[SCARegistrationUserDisplayNamePageview toProtoWithAllowedFields:] */

void FUN_10b9c25c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b9c2618; end: 10b9c261f; -[SCARegistrationUserDisplayNamePageview getPayloadIdentifier] */

undefined8 FUN_10b9c2618(void)

{
  return 0x72a;
}



/* Entry: 10b9c2620; end: 10b9c262b; -[SCARegistrationUserEmailFail getEventName] */

undefined ** FUN_10b9c2620(void)

{
  return &PTR____CFConstantStringClassReference_110fa43d8;
}



/* Entry: 10b9c262c; end: 10b9c2633; -[SCARegistrationUserEmailFail getEventQoS] */

undefined8 FUN_10b9c262c(void)

{
  return 1;
}



/* Entry: 10b9c2634; end: 10b9c26b3; -[SCARegistrationUserEmailFail setErrorMessage:] */

void FUN_10b9c2634(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9b3bc4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110e0a338,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9c26b4; end: 10b9c26cb; -[SCARegistrationUserEmailFail setLongClientId:] */

void FUN_10b9c26b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa23f8,3,param_3,0);
  return;
}



/* Entry: 10b9c26cc; end: 10b9c26e3; -[SCARegistrationUserEmailFail setEmailDomain:] */

void FUN_10b9c26cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa3df8,4,param_3,0);
  return;
}



/* Entry: 10b9c26e4; end: 10b9c2763; -[SCARegistrationUserEmailFail setContext:] */

void FUN_10b9c26e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb1a33c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae878,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9c2764; end: 10b9c2787; -[SCARegistrationUserEmailFail getFieldNumberToFieldDict] */

void FUN_10b9c2764(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9c2788; end: 10b9c27bf; -[SCARegistrationUserEmailFail addToProtoDictionary] */

void FUN_10b9c2788(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b9c27c0; end: 10b9c2817; -[SCARegistrationUserEmailFail toProtoWithAllowedFields:] */

void FUN_10b9c27c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b9c2818; end: 10b9c281f; -[SCARegistrationUserEmailFail getPayloadIdentifier] */

undefined8 FUN_10b9c2818(void)

{
  return 0x72b;
}



/* Entry: 10b9c2820; end: 10b9c282b; -[SCARegistrationUserEmailSuccess getEventName] */

undefined ** FUN_10b9c2820(void)

{
  return &PTR____CFConstantStringClassReference_110fa43f8;
}



/* Entry: 10b9c282c; end: 10b9c2833; -[SCARegistrationUserEmailSuccess getEventQoS] */

undefined8 FUN_10b9c282c(void)

{
  return 1;
}



/* Entry: 10b9c2834; end: 10b9c284b; -[SCARegistrationUserEmailSuccess setLongClientId:] */

void FUN_10b9c2834(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa23f8,2,param_3,0);
  return;
}



/* Entry: 10b9c284c; end: 10b9c2863; -[SCARegistrationUserEmailSuccess setEmailDomain:] */

void FUN_10b9c284c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa3df8,3,param_3,0);
  return;
}



/* Entry: 10b9c2864; end: 10b9c28e3; -[SCARegistrationUserEmailSuccess setContext:] */

void FUN_10b9c2864(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb1a33c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dae878,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9c28e4; end: 10b9c2907; -[SCARegistrationUserEmailSuccess getFieldNumberToFieldDict] */

void FUN_10b9c28e4(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9c2908; end: 10b9c293f; -[SCARegistrationUserEmailSuccess addToProtoDictionary] */

void FUN_10b9c2908(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b9c2940; end: 10b9c2997; -[SCARegistrationUserEmailSuccess toProtoWithAllowedFields:] */

void FUN_10b9c2940(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b9c2998; end: 10b9c299f; -[SCARegistrationUserEmailSuccess getPayloadIdentifier] */

undefined8 FUN_10b9c2998(void)

{
  return 0x72c;
}



/* Entry: 10b9c29a0; end: 10b9c29ab; -[SCARegistrationUserFindFriends getEventName] */

undefined ** FUN_10b9c29a0(void)

{
  return &PTR____CFConstantStringClassReference_110fa4418;
}



/* Entry: 10b9c29ac; end: 10b9c29b3; -[SCARegistrationUserFindFriends getEventQoS] */

undefined8 FUN_10b9c29ac(void)

{
  return 1;
}



/* Entry: 10b9c29b4; end: 10b9c29cb; -[SCARegistrationUserFindFriends setLongClientId:] */

void FUN_10b9c29b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa23f8,3,param_3,0);
  return;
}



/* Entry: 10b9c29cc; end: 10b9c2a1f; -[SCARegistrationUserFindFriends setSnapchattersFound:] */

void FUN_10b9c29cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa4438,5,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9c2a20; end: 10b9c2a9f; -[SCARegistrationUserFindFriends setState:] */

void FUN_10b9c2a20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9b3c8c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110db9618,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9c2aa0; end: 10b9c2af3; -[SCARegistrationUserFindFriends setTrimmedSnapchatters:] */

void FUN_10b9c2aa0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa4458,7,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9c2af4; end: 10b9c2b0b; -[SCARegistrationUserFindFriends setErrorType:] */

void FUN_10b9c2af4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dd6078,0xf,param_3,0);
  return;
}



/* Entry: 10b9c2b0c; end: 10b9c2b2f; -[SCARegistrationUserFindFriends getFieldNumberToFieldDict] */

void FUN_10b9c2b0c(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9c2b30; end: 10b9c2b67; -[SCARegistrationUserFindFriends addToProtoDictionary] */

void FUN_10b9c2b30(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b9c2b68; end: 10b9c2bbf; -[SCARegistrationUserFindFriends toProtoWithAllowedFields:] */

void FUN_10b9c2b68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b9c2bc0; end: 10b9c2bc7; -[SCARegistrationUserFindFriends getPayloadIdentifier] */

undefined8 FUN_10b9c2bc0(void)

{
  return 0x72d;
}



/* Entry: 10b9c2bc8; end: 10b9c2bd3; -[SCARegistrationUserFocusOnCountry getEventName] */

undefined ** FUN_10b9c2bc8(void)

{
  return &PTR____CFConstantStringClassReference_110e6d018;
}



/* Entry: 10b9c2bd4; end: 10b9c2bdb; -[SCARegistrationUserFocusOnCountry getEventQoS] */

undefined8 FUN_10b9c2bd4(void)

{
  return 1;
}



/* Entry: 10b9c2bdc; end: 10b9c2be7; -[SCARegistrationUserFocusOnCountry getPerUserSamplingRateV2] */

undefined8 FUN_10b9c2bdc(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10b9c2be8; end: 10b9c2bff; -[SCARegistrationUserFocusOnCountry setLongClientId:] */

void FUN_10b9c2be8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa23f8,2,param_3,0);
  return;
}



/* Entry: 10b9c2c00; end: 10b9c2c7f; -[SCARegistrationUserFocusOnCountry setRegistrationVersion:] */

void FUN_10b9c2c00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb09878(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fa4058,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9c2c80; end: 10b9c2c83; -[SCARegistrationUserFocusOnCountry getFieldNumberToFieldDict] */

void FUN_10b9c2c80(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9c2c84; end: 10b9c2c8f; -[SCARegistrationUserFocusOnCountry toProtoWithAllowedFields:] */

void FUN_10b9c2c84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10b9c2c90; end: 10b9c2c97; -[SCARegistrationUserFocusOnCountry getPayloadIdentifier] */

undefined8 FUN_10b9c2c90(void)

{
  return 0x72f;
}



/* Entry: 10b9c2c98; end: 10b9c2ca3; -[SCARegistrationUserGrantContactsPermission getEventName] */

undefined ** FUN_10b9c2c98(void)

{
  return &PTR____CFConstantStringClassReference_110fa4478;
}



/* Entry: 10b9c2ca4; end: 10b9c2cab; -[SCARegistrationUserGrantContactsPermission getEventQoS] */

undefined8 FUN_10b9c2ca4(void)

{
  return 1;
}



/* Entry: 10b9c2cac; end: 10b9c2cff; -[SCARegistrationUserGrantContactsPermission setGranted:] */

void FUN_10b9c2cac(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10b9c2d00; end: 10b9c2d17; -[SCARegistrationUserGrantContactsPermission setLongClientId:] */

void FUN_10b9c2d00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa23f8,4,param_3,0);
  return;
}



/* Entry: 10b9c2d18; end: 10b9c2d97; -[SCARegistrationUserGrantContactsPermission setPromptType:] */

void FUN_10b9c2d18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9b3b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110f24d38,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9c2d98; end: 10b9c2dbb; -[SCARegistrationUserGrantContactsPermission getFieldNumberToFieldDict] */

void FUN_10b9c2d98(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9c2dbc; end: 10b9c2df3; -[SCARegistrationUserGrantContactsPermission addToProtoDictionary] */

void FUN_10b9c2dbc(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b9c2df4; end: 10b9c2e4b; -[SCARegistrationUserGrantContactsPermission toProtoWithAllowedFields:] */

void FUN_10b9c2df4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b9c2e4c; end: 10b9c2e53; -[SCARegistrationUserGrantContactsPermission getPayloadIdentifier] */

undefined8 FUN_10b9c2e4c(void)

{
  return 0x735;
}



/* Entry: 10b9c2e54; end: 10b9c2e5f; -[SCARegistrationUserInitialInfoFail getEventName] */

undefined ** FUN_10b9c2e54(void)

{
  return &PTR____CFConstantStringClassReference_110fa4498;
}



/* Entry: 10b9c2e60; end: 10b9c2e67; -[SCARegistrationUserInitialInfoFail getEventQoS] */

undefined8 FUN_10b9c2e60(void)

{
  return 1;
}



/* Entry: 10b9c2e68; end: 10b9c2ebb; -[SCARegistrationUserInitialInfoFail setAttemptCount:] */

void FUN_10b9c2e68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa3798,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9c2ebc; end: 10b9c2ed3; -[SCARegistrationUserInitialInfoFail setLongClientId:] */

void FUN_10b9c2ebc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa23f8,3,param_3,0);
  return;
}



/* Entry: 10b9c2ed4; end: 10b9c2f53; -[SCARegistrationUserInitialInfoFail setRegistrationError:] */

void FUN_10b9c2ed4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b9b3c08(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fa44b8,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9c2f54; end: 10b9c2fd3; -[SCARegistrationUserInitialInfoFail setRegistrationVersion:] */

void FUN_10b9c2f54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb09878(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fa4058,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9c2fd4; end: 10b9c3027; -[SCARegistrationUserInitialInfoFail setGrpcStatusCode:] */

void FUN_10b9c2fd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa2578,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9c3028; end: 10b9c307b; -[SCARegistrationUserInitialInfoFail setProtoStatusCode:] */

void FUN_10b9c3028(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa21b8,8,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9c307c; end: 10b9c309f; -[SCARegistrationUserInitialInfoFail getFieldNumberToFieldDict] */

void FUN_10b9c307c(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9c30a0; end: 10b9c30d7; -[SCARegistrationUserInitialInfoFail addToProtoDictionary] */

void FUN_10b9c30a0(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b9c30d8; end: 10b9c312f; -[SCARegistrationUserInitialInfoFail toProtoWithAllowedFields:] */

void FUN_10b9c30d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b9c3130; end: 10b9c3137; -[SCARegistrationUserInitialInfoFail getPayloadIdentifier] */

undefined8 FUN_10b9c3130(void)

{
  return 0x736;
}



/* Entry: 10b9c3138; end: 10b9c3143; -[SCARegistrationUserInitialInfoSuccess getEventName] */

undefined ** FUN_10b9c3138(void)

{
  return &PTR____CFConstantStringClassReference_110fa44d8;
}



/* Entry: 10b9c3144; end: 10b9c314b; -[SCARegistrationUserInitialInfoSuccess getEventQoS] */

undefined8 FUN_10b9c3144(void)

{
  return 1;
}



/* Entry: 10b9c314c; end: 10b9c319f; -[SCARegistrationUserInitialInfoSuccess setAttemptCount:] */

void FUN_10b9c314c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa3798,2,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9c31a0; end: 10b9c31b7; -[SCARegistrationUserInitialInfoSuccess setChannelId:] */

void FUN_10b9c31a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dd2098,3,param_3,0);
  return;
}



/* Entry: 10b9c31b8; end: 10b9c320b; -[SCARegistrationUserInitialInfoSuccess setEditBirthdayDay:] */

void FUN_10b9c31b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa44f8,4,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9c320c; end: 10b9c325f; -[SCARegistrationUserInitialInfoSuccess setEditBirthdayMonth:] */

void FUN_10b9c320c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa4518,5,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9c3260; end: 10b9c32b3; -[SCARegistrationUserInitialInfoSuccess setEditBirthdayYear:] */

void FUN_10b9c3260(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fa4538,6,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9c32b4; end: 10b9c32cb; -[SCARegistrationUserInitialInfoSuccess setLongClientId:] */

void FUN_10b9c32b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa23f8,7,param_3,0);
  return;
}



/* Entry: 10b9c32cc; end: 10b9c32e3; -[SCARegistrationUserInitialInfoSuccess setPreferredVerificationMethod:] */

void FUN_10b9c32cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa3e98,8,param_3,0);
  return;
}



/* Entry: 10b9c32e4; end: 10b9c3363; -[SCARegistrationUserInitialInfoSuccess setRegistrationVersion:] */

void FUN_10b9c32e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb09878(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fa4058,9,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9c3364; end: 10b9c33e3; -[SCARegistrationUserInitialInfoSuccess setStrategy:] */

void FUN_10b9c3364(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10baf5e4c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110e753d8,10,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9c33e4; end: 10b9c3407; -[SCARegistrationUserInitialInfoSuccess getFieldNumberToFieldDict] */

void FUN_10b9c33e4(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9c3408; end: 10b9c343f; -[SCARegistrationUserInitialInfoSuccess addToProtoDictionary] */

void FUN_10b9c3408(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b9c3440; end: 10b9c3497; -[SCARegistrationUserInitialInfoSuccess toProtoWithAllowedFields:] */

void FUN_10b9c3440(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b9c3498; end: 10b9c349f; -[SCARegistrationUserInitialInfoSuccess getPayloadIdentifier] */

undefined8 FUN_10b9c3498(void)

{
  return 0x737;
}



/* Entry: 10b9c34a0; end: 10b9c34ab; -[SCARegistrationUserLoginPageview getEventName] */

undefined ** FUN_10b9c34a0(void)

{
  return &PTR____CFConstantStringClassReference_110fa4558;
}



/* Entry: 10b9c34ac; end: 10b9c34b3; -[SCARegistrationUserLoginPageview getEventQoS] */

undefined8 FUN_10b9c34ac(void)

{
  return 1;
}



/* Entry: 10b9c34b4; end: 10b9c3507; -[SCARegistrationUserLoginPageview setHasLoggedInBefore:] */

void FUN_10b9c34b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110dae8b8,2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9c3508; end: 10b9c3587; -[SCARegistrationUserLoginPageview setLoginSource:] */

void FUN_10b9c3508(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb00cf0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fa2478,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9c3588; end: 10b9c359f; -[SCARegistrationUserLoginPageview setLongClientId:] */

void FUN_10b9c3588(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fa23f8,4,param_3,0);
  return;
}



/* Entry: 10b9c35a0; end: 10b9c361f; -[SCARegistrationUserLoginPageview setRegistrationVersion:] */

void FUN_10b9c35a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb09878(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fa4058,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b9c3620; end: 10b9c3623; -[SCARegistrationUserLoginPageview getFieldNumberToFieldDict] */

void FUN_10b9c3620(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10b9c3624; end: 10b9c362f; -[SCARegistrationUserLoginPageview toProtoWithAllowedFields:] */

void FUN_10b9c3624(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}


