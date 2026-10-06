/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ba10488; end: 10ba1049f; -[SCACognacDrawerTileTap setCognacId:] */

void FUN_10ba10488(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fbfa98,3,param_3,0);
  return;
}



/* Entry: 10ba104a0; end: 10ba104f3; -[SCACognacDrawerTileTap setIsNew:] */

void FUN_10ba104a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbfd58,6,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba104f4; end: 10ba10547; -[SCACognacDrawerTileTap setIsUpdate:] */

void FUN_10ba104f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbfd78,7,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba10548; end: 10ba1059b; -[SCACognacDrawerTileTap setRanking:] */

void FUN_10ba10548(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110de69d8,8,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba1059c; end: 10ba1061b; -[SCACognacDrawerTileTap setTileActionType:] */

void FUN_10ba1059c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba0c584(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fbfd98,9,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba1061c; end: 10ba1063f; -[SCACognacDrawerTileTap getFieldNumberToFieldDict] */

void FUN_10ba1061c(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba10640; end: 10ba10677; -[SCACognacDrawerTileTap addToProtoDictionary] */

void FUN_10ba10640(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba10678; end: 10ba106cf; -[SCACognacDrawerTileTap toProtoWithAllowedFields:] */

void FUN_10ba10678(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba106d0; end: 10ba106d7; -[SCACognacDrawerTileTap getPayloadIdentifier] */

undefined8 FUN_10ba106d0(void)

{
  return 0x226;
}



/* Entry: 10ba106d8; end: 10ba106e3; -[SCACognacInAppButtonTap getEventName] */

undefined ** FUN_10ba106d8(void)

{
  return &PTR____CFConstantStringClassReference_110fbfdb8;
}



/* Entry: 10ba106e4; end: 10ba106eb; -[SCACognacInAppButtonTap getEventQoS] */

undefined8 FUN_10ba106e4(void)

{
  return 1;
}



/* Entry: 10ba106ec; end: 10ba1076b; -[SCACognacInAppButtonTap setButtonType:] */

void FUN_10ba106ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba0c4e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fbfdd8,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba1076c; end: 10ba107bf; -[SCACognacInAppButtonTap setIsActivityVisibleToFriends:] */

void FUN_10ba1076c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbfdf8,7,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba107c0; end: 10ba107e3; -[SCACognacInAppButtonTap getFieldNumberToFieldDict] */

void FUN_10ba107c0(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba107e4; end: 10ba1081b; -[SCACognacInAppButtonTap addToProtoDictionary] */

void FUN_10ba107e4(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba1081c; end: 10ba10873; -[SCACognacInAppButtonTap toProtoWithAllowedFields:] */

void FUN_10ba1081c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba10874; end: 10ba1087b; -[SCACognacInAppButtonTap getPayloadIdentifier] */

undefined8 FUN_10ba10874(void)

{
  return 0x22a;
}



/* Entry: 10ba1087c; end: 10ba10887; -[SCACognacInAppSettingsPageSelection getEventName] */

undefined ** FUN_10ba1087c(void)

{
  return &PTR____CFConstantStringClassReference_110fbfe18;
}



/* Entry: 10ba10888; end: 10ba1088f; -[SCACognacInAppSettingsPageSelection getEventQoS] */

undefined8 FUN_10ba10888(void)

{
  return 1;
}



/* Entry: 10ba10890; end: 10ba108e3; -[SCACognacInAppSettingsPageSelection setAppAudioOn:] */

void FUN_10ba10890(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbfe38,2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba108e4; end: 10ba10937; -[SCACognacInAppSettingsPageSelection setIsHideScoreEnabled:] */

void FUN_10ba108e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbfe58,7,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba10938; end: 10ba109b7; -[SCACognacInAppSettingsPageSelection setSelection:] */

void FUN_10ba10938(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba0c544(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dcecf8,8,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba109b8; end: 10ba109cf; -[SCACognacInAppSettingsPageSelection setDestinationCognacId:] */

void FUN_10ba109b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fbfe78,9,param_3,0);
  return;
}



/* Entry: 10ba109d0; end: 10ba109f3; -[SCACognacInAppSettingsPageSelection getFieldNumberToFieldDict] */

void FUN_10ba109d0(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba109f4; end: 10ba10a2b; -[SCACognacInAppSettingsPageSelection addToProtoDictionary] */

void FUN_10ba109f4(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba10a2c; end: 10ba10a83; -[SCACognacInAppSettingsPageSelection toProtoWithAllowedFields:] */

void FUN_10ba10a2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba10a84; end: 10ba10a8b; -[SCACognacInAppSettingsPageSelection getPayloadIdentifier] */

undefined8 FUN_10ba10a84(void)

{
  return 0x22c;
}



/* Entry: 10ba10a8c; end: 10ba10a97; -[SCACognacInGameClickPlay getEventName] */

undefined ** FUN_10ba10a8c(void)

{
  return &PTR____CFConstantStringClassReference_110fbfe98;
}



/* Entry: 10ba10a98; end: 10ba10a9f; -[SCACognacInGameClickPlay getEventQoS] */

undefined8 FUN_10ba10a98(void)

{
  return 1;
}



/* Entry: 10ba10aa0; end: 10ba10ab7; -[SCACognacInGameClickPlay setEntry:] */

void FUN_10ba10aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110df9af8,5,param_3,0);
  return;
}



/* Entry: 10ba10ab8; end: 10ba10b0b; -[SCACognacInGameClickPlay setPrepTimeSec:] */

void FUN_10ba10ab8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbfeb8,7,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba10b0c; end: 10ba10b2f; -[SCACognacInGameClickPlay getFieldNumberToFieldDict] */

void FUN_10ba10b0c(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba10b30; end: 10ba10b67; -[SCACognacInGameClickPlay addToProtoDictionary] */

void FUN_10ba10b30(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba10b68; end: 10ba10bbf; -[SCACognacInGameClickPlay toProtoWithAllowedFields:] */

void FUN_10ba10b68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba10bc0; end: 10ba10bc7; -[SCACognacInGameClickPlay getPayloadIdentifier] */

undefined8 FUN_10ba10bc0(void)

{
  return 0x22d;
}



/* Entry: 10ba10bc8; end: 10ba10bd3; -[SCACognacInGameMatchEnd getEventName] */

undefined ** FUN_10ba10bc8(void)

{
  return &PTR____CFConstantStringClassReference_110fbfed8;
}



/* Entry: 10ba10bd4; end: 10ba10bdb; -[SCACognacInGameMatchEnd getEventQoS] */

undefined8 FUN_10ba10bd4(void)

{
  return 1;
}



/* Entry: 10ba10bdc; end: 10ba10c2f; -[SCACognacInGameMatchEnd setMatchId:] */

void FUN_10ba10bdc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbfef8,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba10c30; end: 10ba10c83; -[SCACognacInGameMatchEnd setMatchTimeSec:] */

void FUN_10ba10c30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbff18,7,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba10c84; end: 10ba10c9b; -[SCACognacInGameMatchEnd setMatchType:] */

void FUN_10ba10c84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fbff38,8,param_3,0);
  return;
}



/* Entry: 10ba10c9c; end: 10ba10cbf; -[SCACognacInGameMatchEnd getFieldNumberToFieldDict] */

void FUN_10ba10c9c(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba10cc0; end: 10ba10cf7; -[SCACognacInGameMatchEnd addToProtoDictionary] */

void FUN_10ba10cc0(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba10cf8; end: 10ba10d4f; -[SCACognacInGameMatchEnd toProtoWithAllowedFields:] */

void FUN_10ba10cf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba10d50; end: 10ba10d57; -[SCACognacInGameMatchEnd getPayloadIdentifier] */

undefined8 FUN_10ba10d50(void)

{
  return 0x22f;
}



/* Entry: 10ba10d58; end: 10ba10d63; -[SCACognacInGameMatchStart getEventName] */

undefined ** FUN_10ba10d58(void)

{
  return &PTR____CFConstantStringClassReference_110fbff58;
}



/* Entry: 10ba10d64; end: 10ba10d6b; -[SCACognacInGameMatchStart getEventQoS] */

undefined8 FUN_10ba10d64(void)

{
  return 1;
}



/* Entry: 10ba10d6c; end: 10ba10dbf; -[SCACognacInGameMatchStart setMatchId:] */

void FUN_10ba10d6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbfef8,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba10dc0; end: 10ba10dd7; -[SCACognacInGameMatchStart setMatchType:] */

void FUN_10ba10dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fbff38,7,param_3,0);
  return;
}



/* Entry: 10ba10dd8; end: 10ba10e2b; -[SCACognacInGameMatchStart setQueueTimeSec:] */

void FUN_10ba10dd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbff78,8,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba10e2c; end: 10ba10e4f; -[SCACognacInGameMatchStart getFieldNumberToFieldDict] */

void FUN_10ba10e2c(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba10e50; end: 10ba10e87; -[SCACognacInGameMatchStart addToProtoDictionary] */

void FUN_10ba10e50(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba10e88; end: 10ba10edf; -[SCACognacInGameMatchStart toProtoWithAllowedFields:] */

void FUN_10ba10e88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba10ee0; end: 10ba10ee7; -[SCACognacInGameMatchStart getPayloadIdentifier] */

undefined8 FUN_10ba10ee0(void)

{
  return 0x230;
}



/* Entry: 10ba10ee8; end: 10ba10ef3; -[SCACognacInGameOnboardingComplete getEventName] */

undefined ** FUN_10ba10ee8(void)

{
  return &PTR____CFConstantStringClassReference_110fbff98;
}



/* Entry: 10ba10ef4; end: 10ba10efb; -[SCACognacInGameOnboardingComplete getEventQoS] */

undefined8 FUN_10ba10ef4(void)

{
  return 1;
}



/* Entry: 10ba10efc; end: 10ba10f03; -[SCACognacInGameOnboardingComplete getPerUserSamplingRateV2] */

undefined8 FUN_10ba10efc(void)

{
  return 0x3ff0000000000000;
}



/* Entry: 10ba10f04; end: 10ba10f57; -[SCACognacInGameOnboardingComplete setOnboardingTimeSec:] */

void FUN_10ba10f04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbffb8,6,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba10f58; end: 10ba10f7b; -[SCACognacInGameOnboardingComplete getFieldNumberToFieldDict] */

void FUN_10ba10f58(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba10f7c; end: 10ba10fb3; -[SCACognacInGameOnboardingComplete addToProtoDictionary] */

void FUN_10ba10f7c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba10fb4; end: 10ba1100b; -[SCACognacInGameOnboardingComplete toProtoWithAllowedFields:] */

void FUN_10ba10fb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba1100c; end: 10ba11013; -[SCACognacInGameOnboardingComplete getPayloadIdentifier] */

undefined8 FUN_10ba1100c(void)

{
  return 0x231;
}



/* Entry: 10ba11014; end: 10ba1101f; -[SCACognacInGameOnboardingStageComplete getEventName] */

undefined ** FUN_10ba11014(void)

{
  return &PTR____CFConstantStringClassReference_110fbffd8;
}



/* Entry: 10ba11020; end: 10ba11027; -[SCACognacInGameOnboardingStageComplete getEventQoS] */

undefined8 FUN_10ba11020(void)

{
  return 1;
}



/* Entry: 10ba11028; end: 10ba1102f; -[SCACognacInGameOnboardingStageComplete getPerUserSamplingRateV2] */

undefined8 FUN_10ba11028(void)

{
  return 0x3ff0000000000000;
}



/* Entry: 10ba11030; end: 10ba11083; -[SCACognacInGameOnboardingStageComplete setStageId:] */

void FUN_10ba11030(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fbfff8,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba11084; end: 10ba110a7; -[SCACognacInGameOnboardingStageComplete getFieldNumberToFieldDict] */

void FUN_10ba11084(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba110a8; end: 10ba110df; -[SCACognacInGameOnboardingStageComplete addToProtoDictionary] */

void FUN_10ba110a8(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba110e0; end: 10ba11137; -[SCACognacInGameOnboardingStageComplete toProtoWithAllowedFields:] */

void FUN_10ba110e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba11138; end: 10ba1113f; -[SCACognacInGameOnboardingStageComplete getPayloadIdentifier] */

undefined8 FUN_10ba11138(void)

{
  return 0x232;
}



/* Entry: 10ba11140; end: 10ba1114b; -[SCACognacInGameOnboardingStart getEventName] */

undefined ** FUN_10ba11140(void)

{
  return &PTR____CFConstantStringClassReference_110fc0018;
}



/* Entry: 10ba1114c; end: 10ba11153; -[SCACognacInGameOnboardingStart getEventQoS] */

undefined8 FUN_10ba1114c(void)

{
  return 1;
}



/* Entry: 10ba11154; end: 10ba11177; -[SCACognacInGameOnboardingStart getFieldNumberToFieldDict] */

void FUN_10ba11154(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba11178; end: 10ba111af; -[SCACognacInGameOnboardingStart addToProtoDictionary] */

void FUN_10ba11178(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba111b0; end: 10ba11207; -[SCACognacInGameOnboardingStart toProtoWithAllowedFields:] */

void FUN_10ba111b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba11208; end: 10ba1120f; -[SCACognacInGameOnboardingStart getPayloadIdentifier] */

undefined8 FUN_10ba11208(void)

{
  return 0x233;
}



/* Entry: 10ba11210; end: 10ba1121b; -[SCACognacInGameShopExit getEventName] */

undefined ** FUN_10ba11210(void)

{
  return &PTR____CFConstantStringClassReference_110fc0038;
}



/* Entry: 10ba1121c; end: 10ba11223; -[SCACognacInGameShopExit getEventQoS] */

undefined8 FUN_10ba1121c(void)

{
  return 1;
}



/* Entry: 10ba11224; end: 10ba11277; -[SCACognacInGameShopExit setShopTimeSec:] */

void FUN_10ba11224(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fc0058,6,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba11278; end: 10ba1129b; -[SCACognacInGameShopExit getFieldNumberToFieldDict] */

void FUN_10ba11278(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba1129c; end: 10ba112d3; -[SCACognacInGameShopExit addToProtoDictionary] */

void FUN_10ba1129c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba112d4; end: 10ba1132b; -[SCACognacInGameShopExit toProtoWithAllowedFields:] */

void FUN_10ba112d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba1132c; end: 10ba11333; -[SCACognacInGameShopExit getPayloadIdentifier] */

undefined8 FUN_10ba1132c(void)

{
  return 0x235;
}



/* Entry: 10ba11334; end: 10ba1133f; -[SCACognacInGameShopStart getEventName] */

undefined ** FUN_10ba11334(void)

{
  return &PTR____CFConstantStringClassReference_110fc0078;
}



/* Entry: 10ba11340; end: 10ba11347; -[SCACognacInGameShopStart getEventQoS] */

undefined8 FUN_10ba11340(void)

{
  return 1;
}



/* Entry: 10ba11348; end: 10ba1136b; -[SCACognacInGameShopStart getFieldNumberToFieldDict] */

void FUN_10ba11348(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba1136c; end: 10ba113a3; -[SCACognacInGameShopStart addToProtoDictionary] */

void FUN_10ba1136c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba113a4; end: 10ba113fb; -[SCACognacInGameShopStart toProtoWithAllowedFields:] */

void FUN_10ba113a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba113fc; end: 10ba11403; -[SCACognacInGameShopStart getPayloadIdentifier] */

undefined8 FUN_10ba113fc(void)

{
  return 0x236;
}



/* Entry: 10ba11404; end: 10ba1140f; -[SCACognacInGameTransaction getEventName] */

undefined ** FUN_10ba11404(void)

{
  return &PTR____CFConstantStringClassReference_110fc0098;
}



/* Entry: 10ba11410; end: 10ba11417; -[SCACognacInGameTransaction getEventQoS] */

undefined8 FUN_10ba11410(void)

{
  return 1;
}



/* Entry: 10ba11418; end: 10ba1142f; -[SCACognacInGameTransaction setItemId:] */

void FUN_10ba11418(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e02998,6,param_3,0);
  return;
}



/* Entry: 10ba11430; end: 10ba11483; -[SCACognacInGameTransaction setItemPrice:] */

void FUN_10ba11430(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fc00b8,7,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10ba11484; end: 10ba1149b; -[SCACognacInGameTransaction setPaymentType:] */

void FUN_10ba11484(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fc00d8,8,param_3,0);
  return;
}



/* Entry: 10ba1149c; end: 10ba114b3; -[SCACognacInGameTransaction setSource:] */

void FUN_10ba1149c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dae8d8,9,param_3,0);
  return;
}



/* Entry: 10ba114b4; end: 10ba114d7; -[SCACognacInGameTransaction getFieldNumberToFieldDict] */

void FUN_10ba114b4(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10ba114d8; end: 10ba1150f; -[SCACognacInGameTransaction addToProtoDictionary] */

void FUN_10ba114d8(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10ba11510; end: 10ba11567; -[SCACognacInGameTransaction toProtoWithAllowedFields:] */

void FUN_10ba11510(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10ba11568; end: 10ba1156f; -[SCACognacInGameTransaction getPayloadIdentifier] */

undefined8 FUN_10ba11568(void)

{
  return 0x237;
}



/* Entry: 10ba11570; end: 10ba1157b; -[SCACognacInMiniAchievementUnlocked getEventName] */

undefined ** FUN_10ba11570(void)

{
  return &PTR____CFConstantStringClassReference_110fc00f8;
}



/* Entry: 10ba1157c; end: 10ba11583; -[SCACognacInMiniAchievementUnlocked getEventQoS] */

undefined8 FUN_10ba1157c(void)

{
  return 1;
}


