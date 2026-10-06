/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10babebbc; end: 10babebc3; -[SCAProfileInviteContactStart getPayloadIdentifier] */

undefined8 FUN_10babebbc(void)

{
  return 0x6a1;
}



/* Entry: 10babebc4; end: 10babebcf; -[SCAProfileMyContactsContactPermissionContinue getEventName] */

undefined ** FUN_10babebc4(void)

{
  return &PTR____CFConstantStringClassReference_110fed378;
}



/* Entry: 10babebd0; end: 10babebd7; -[SCAProfileMyContactsContactPermissionContinue getEventQoS] */

undefined8 FUN_10babebd0(void)

{
  return 1;
}



/* Entry: 10babebd8; end: 10babebe3; -[SCAProfileMyContactsContactPermissionContinue getPerUserSamplingRateV2] */

undefined8 FUN_10babebd8(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10babebe4; end: 10babec63; -[SCAProfileMyContactsContactPermissionContinue setVerificationType:] */

void FUN_10babebe4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb09854(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fa41b8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babec64; end: 10babec67; -[SCAProfileMyContactsContactPermissionContinue getFieldNumberToFieldDict] */

void FUN_10babec64(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10babec68; end: 10babec73; -[SCAProfileMyContactsContactPermissionContinue toProtoWithAllowedFields:] */

void FUN_10babec68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10babec74; end: 10babec7b; -[SCAProfileMyContactsContactPermissionContinue getPayloadIdentifier] */

undefined8 FUN_10babec74(void)

{
  return 0x6a3;
}



/* Entry: 10babec7c; end: 10babec87; -[SCAProfileMyContactsContactPermissionDeny getEventName] */

undefined ** FUN_10babec7c(void)

{
  return &PTR____CFConstantStringClassReference_110fed398;
}



/* Entry: 10babec88; end: 10babec8f; -[SCAProfileMyContactsContactPermissionDeny getEventQoS] */

undefined8 FUN_10babec88(void)

{
  return 1;
}



/* Entry: 10babec90; end: 10babec9b; -[SCAProfileMyContactsContactPermissionDeny getPerUserSamplingRateV2] */

undefined8 FUN_10babec90(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10babec9c; end: 10babed1b; -[SCAProfileMyContactsContactPermissionDeny setVerificationType:] */

void FUN_10babec9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb09854(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fa41b8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babed1c; end: 10babed1f; -[SCAProfileMyContactsContactPermissionDeny getFieldNumberToFieldDict] */

void FUN_10babed1c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10babed20; end: 10babed2b; -[SCAProfileMyContactsContactPermissionDeny toProtoWithAllowedFields:] */

void FUN_10babed20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10babed2c; end: 10babed33; -[SCAProfileMyContactsContactPermissionDeny getPayloadIdentifier] */

undefined8 FUN_10babed2c(void)

{
  return 0x6a4;
}



/* Entry: 10babed34; end: 10babed3f; -[SCAProfileMyContactsContactPermissionGrant getEventName] */

undefined ** FUN_10babed34(void)

{
  return &PTR____CFConstantStringClassReference_110fed3b8;
}



/* Entry: 10babed40; end: 10babed47; -[SCAProfileMyContactsContactPermissionGrant getEventQoS] */

undefined8 FUN_10babed40(void)

{
  return 1;
}



/* Entry: 10babed48; end: 10babedc7; -[SCAProfileMyContactsContactPermissionGrant setVerificationType:] */

void FUN_10babed48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  FUN_10bb09854(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fa41b8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babedc8; end: 10babedcb; -[SCAProfileMyContactsContactPermissionGrant getFieldNumberToFieldDict] */

void FUN_10babedc8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10babedcc; end: 10babedd7; -[SCAProfileMyContactsContactPermissionGrant toProtoWithAllowedFields:] */

void FUN_10babedcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10babedd8; end: 10babeddf; -[SCAProfileMyContactsContactPermissionGrant getPayloadIdentifier] */

undefined8 FUN_10babedd8(void)

{
  return 0x6a5;
}



/* Entry: 10babede0; end: 10babedeb; -[SCAProfileMyContactsFriendDelete getEventName] */

undefined ** FUN_10babede0(void)

{
  return &PTR____CFConstantStringClassReference_110fed3d8;
}



/* Entry: 10babedec; end: 10babedf3; -[SCAProfileMyContactsFriendDelete getEventQoS] */

undefined8 FUN_10babedec(void)

{
  return 1;
}



/* Entry: 10babedf4; end: 10babedff; -[SCAProfileMyContactsFriendDelete getPerUserSamplingRateV2] */

undefined8 FUN_10babedf4(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10babee00; end: 10babee53; -[SCAProfileMyContactsFriendDelete setWithDisplayPic:] */

void FUN_10babee00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fed3f8,2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babee54; end: 10babee57; -[SCAProfileMyContactsFriendDelete getFieldNumberToFieldDict] */

void FUN_10babee54(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10babee58; end: 10babee63; -[SCAProfileMyContactsFriendDelete toProtoWithAllowedFields:] */

void FUN_10babee58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10babee64; end: 10babee6b; -[SCAProfileMyContactsFriendDelete getPayloadIdentifier] */

undefined8 FUN_10babee64(void)

{
  return 0x6a6;
}



/* Entry: 10babee6c; end: 10babee77; -[SCAProfileMyContactsFriendRequestSent getEventName] */

undefined ** FUN_10babee6c(void)

{
  return &PTR____CFConstantStringClassReference_110fed418;
}



/* Entry: 10babee78; end: 10babee7f; -[SCAProfileMyContactsFriendRequestSent getEventQoS] */

undefined8 FUN_10babee78(void)

{
  return 1;
}



/* Entry: 10babee80; end: 10babee8b; -[SCAProfileMyContactsFriendRequestSent getPerUserSamplingRateV2] */

undefined8 FUN_10babee80(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10babee8c; end: 10babeedf; -[SCAProfileMyContactsFriendRequestSent setWithDisplayPic:] */

void FUN_10babee8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fed3f8,2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babeee0; end: 10babeee3; -[SCAProfileMyContactsFriendRequestSent getFieldNumberToFieldDict] */

void FUN_10babeee0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10babeee4; end: 10babeeef; -[SCAProfileMyContactsFriendRequestSent toProtoWithAllowedFields:] */

void FUN_10babeee4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10babeef0; end: 10babeef7; -[SCAProfileMyContactsFriendRequestSent getPayloadIdentifier] */

undefined8 FUN_10babeef0(void)

{
  return 0x6a7;
}



/* Entry: 10babeef8; end: 10babef03; -[SCAProfilePromptAction getEventName] */

undefined ** FUN_10babeef8(void)

{
  return &PTR____CFConstantStringClassReference_110fed438;
}



/* Entry: 10babef04; end: 10babef0b; -[SCAProfilePromptAction getEventQoS] */

undefined8 FUN_10babef04(void)

{
  return 1;
}



/* Entry: 10babef0c; end: 10babef17; -[SCAProfilePromptAction getPerUserSamplingRateV2] */

undefined8 FUN_10babef0c(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10babef18; end: 10babef97; -[SCAProfilePromptAction setAction:] */

void FUN_10babef18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010babcfd0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110daf5b8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babef98; end: 10babefaf; -[SCAProfilePromptAction setProfileSessionId:] */

void FUN_10babef98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb1a98,3,param_3,0);
  return;
}



/* Entry: 10babefb0; end: 10babf02f; -[SCAProfilePromptAction setStatus:] */

void FUN_10babefb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010babcff0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110daf4d8,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babf030; end: 10babf033; -[SCAProfilePromptAction getFieldNumberToFieldDict] */

void FUN_10babf030(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10babf034; end: 10babf03f; -[SCAProfilePromptAction toProtoWithAllowedFields:] */

void FUN_10babf034(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10babf040; end: 10babf047; -[SCAProfilePromptAction getPayloadIdentifier] */

undefined8 FUN_10babf040(void)

{
  return 0x6b6;
}



/* Entry: 10babf048; end: 10babf053; -[SCAProfileSessionEnd getEventName] */

undefined ** FUN_10babf048(void)

{
  return &PTR____CFConstantStringClassReference_110fed458;
}



/* Entry: 10babf054; end: 10babf05b; -[SCAProfileSessionEnd getEventQoS] */

undefined8 FUN_10babf054(void)

{
  return 2;
}



/* Entry: 10babf05c; end: 10babf067; -[SCAProfileSessionEnd getPerUserSamplingRate] */

undefined8 FUN_10babf05c(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10babf068; end: 10babf073; -[SCAProfileSessionEnd getPerUserSamplingRateV2] */

undefined8 FUN_10babf068(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10babf074; end: 10babf08b; -[SCAProfileSessionEnd setActionSummary:] */

void FUN_10babf074(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fed478,2,param_3,0);
  return;
}



/* Entry: 10babf08c; end: 10babf0a3; -[SCAProfileSessionEnd setAvailableBadgeSummary:] */

void FUN_10babf08c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fed498,3,param_3,0);
  return;
}



/* Entry: 10babf0a4; end: 10babf0bb; -[SCAProfileSessionEnd setAvailableSections:] */

void FUN_10babf0a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fed4b8,4,param_3,0);
  return;
}



/* Entry: 10babf0bc; end: 10babf0d3; -[SCAProfileSessionEnd setClearedBadgeSummary:] */

void FUN_10babf0bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fed4d8,5,param_3,0);
  return;
}



/* Entry: 10babf0d4; end: 10babf0eb; -[SCAProfileSessionEnd setProfileSessionId:] */

void FUN_10babf0d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb1a98,6,param_3,0);
  return;
}



/* Entry: 10babf0ec; end: 10babf13f; -[SCAProfileSessionEnd setViewTimeSecs:] */

void FUN_10babf0ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110f438d8,7,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babf140; end: 10babf143; -[SCAProfileSessionEnd getFieldNumberToFieldDict] */

void FUN_10babf140(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10babf144; end: 10babf14f; -[SCAProfileSessionEnd toProtoWithAllowedFields:] */

void FUN_10babf144(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10babf150; end: 10babf157; -[SCAProfileSessionEnd getPayloadIdentifier] */

undefined8 FUN_10babf150(void)

{
  return 0x6b9;
}



/* Entry: 10babf158; end: 10babf163; -[SCAProfileShareUsernameEnd getEventName] */

undefined ** FUN_10babf158(void)

{
  return &PTR____CFConstantStringClassReference_110fed4f8;
}



/* Entry: 10babf164; end: 10babf16b; -[SCAProfileShareUsernameEnd getEventQoS] */

undefined8 FUN_10babf164(void)

{
  return 1;
}



/* Entry: 10babf16c; end: 10babf177; -[SCAProfileShareUsernameEnd getPerUserSamplingRateV2] */

undefined8 FUN_10babf16c(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10babf178; end: 10babf1cb; -[SCAProfileShareUsernameEnd setCompleted:] */

void FUN_10babf178(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110e4b6b8,2,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babf1cc; end: 10babf1e3; -[SCAProfileShareUsernameEnd setErrorMessage:] */

void FUN_10babf1cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110e0a338,3,param_3,0);
  return;
}



/* Entry: 10babf1e4; end: 10babf1fb; -[SCAProfileShareUsernameEnd setProfileSessionId:] */

void FUN_10babf1e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb1a98,4,param_3,0);
  return;
}



/* Entry: 10babf1fc; end: 10babf213; -[SCAProfileShareUsernameEnd setShareAppType:] */

void FUN_10babf1fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fed518,5,param_3,0);
  return;
}



/* Entry: 10babf214; end: 10babf293; -[SCAProfileShareUsernameEnd setSource:] */

void FUN_10babf214(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10babf294; end: 10babf297; -[SCAProfileShareUsernameEnd getFieldNumberToFieldDict] */

void FUN_10babf294(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10babf298; end: 10babf2a3; -[SCAProfileShareUsernameEnd toProtoWithAllowedFields:] */

void FUN_10babf298(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10babf2a4; end: 10babf2ab; -[SCAProfileShareUsernameEnd getPayloadIdentifier] */

undefined8 FUN_10babf2a4(void)

{
  return 0x6bc;
}



/* Entry: 10babf2ac; end: 10babf2b7; -[SCAProfileShareUsernameStart getEventName] */

undefined ** FUN_10babf2ac(void)

{
  return &PTR____CFConstantStringClassReference_110fed538;
}



/* Entry: 10babf2b8; end: 10babf2bf; -[SCAProfileShareUsernameStart getEventQoS] */

undefined8 FUN_10babf2b8(void)

{
  return 1;
}



/* Entry: 10babf2c0; end: 10babf2cb; -[SCAProfileShareUsernameStart getPerUserSamplingRateV2] */

undefined8 FUN_10babf2c0(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10babf2cc; end: 10babf2e3; -[SCAProfileShareUsernameStart setProfileSessionId:] */

void FUN_10babf2cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb1a98,2,param_3,0);
  return;
}



/* Entry: 10babf2e4; end: 10babf2fb; -[SCAProfileShareUsernameStart setShareAppsAvailable:] */

void FUN_10babf2e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fed558,3,param_3,0);
  return;
}



/* Entry: 10babf2fc; end: 10babf37b; -[SCAProfileShareUsernameStart setSource:] */

void FUN_10babf2fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10babf37c; end: 10babf37f; -[SCAProfileShareUsernameStart getFieldNumberToFieldDict] */

void FUN_10babf37c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10babf380; end: 10babf38b; -[SCAProfileShareUsernameStart toProtoWithAllowedFields:] */

void FUN_10babf380(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10babf38c; end: 10babf393; -[SCAProfileShareUsernameStart getPayloadIdentifier] */

undefined8 FUN_10babf38c(void)

{
  return 0x6bd;
}



/* Entry: 10babf394; end: 10babf39f; -[SCAProfileStorySettingPageview getEventName] */

undefined ** FUN_10babf394(void)

{
  return &PTR____CFConstantStringClassReference_110fed578;
}



/* Entry: 10babf3a0; end: 10babf3a7; -[SCAProfileStorySettingPageview getEventQoS] */

undefined8 FUN_10babf3a0(void)

{
  return 1;
}



/* Entry: 10babf3a8; end: 10babf427; -[SCAProfileStorySettingPageview setAction:] */

void FUN_10babf3a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010babcfd0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110daf5b8,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babf428; end: 10babf43f; -[SCAProfileStorySettingPageview setProfileSessionId:] */

void FUN_10babf428(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fb1a98,3,param_3,0);
  return;
}



/* Entry: 10babf440; end: 10babf4bf; -[SCAProfileStorySettingPageview setStoryType:] */

void FUN_10babf440(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb15538(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110ea1fd8,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babf4c0; end: 10babf4c3; -[SCAProfileStorySettingPageview getFieldNumberToFieldDict] */

void FUN_10babf4c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10babf4c4; end: 10babf4cf; -[SCAProfileStorySettingPageview toProtoWithAllowedFields:] */

void FUN_10babf4c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10babf4d0; end: 10babf4d7; -[SCAProfileStorySettingPageview getPayloadIdentifier] */

undefined8 FUN_10babf4d0(void)

{
  return 0x6bf;
}



/* Entry: 10babf4d8; end: 10babf4e3; -[SCASnapshotsMySnapshotSession getEventName] */

undefined ** FUN_10babf4d8(void)

{
  return &PTR____CFConstantStringClassReference_110fed598;
}



/* Entry: 10babf4e4; end: 10babf4eb; -[SCASnapshotsMySnapshotSession getEventQoS] */

undefined8 FUN_10babf4e4(void)

{
  return 1;
}



/* Entry: 10babf4ec; end: 10babf4f7; -[SCASnapshotsMySnapshotSession getPerUserSamplingRateV2] */

undefined8 FUN_10babf4ec(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10babf4f8; end: 10babf577; -[SCASnapshotsMySnapshotSession setSessionSource:] */

void FUN_10babf4f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010babd030(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fed5b8,3,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babf578; end: 10babf58f; -[SCASnapshotsMySnapshotSession setMySnapshotSessionId:] */

void FUN_10babf578(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110fed5d8,4,param_3,0);
  return;
}



/* Entry: 10babf590; end: 10babf5e3; -[SCASnapshotsMySnapshotSession setHasSnapshot:] */

void FUN_10babf590(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110fed5f8,5,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babf5e4; end: 10babf5e7; -[SCASnapshotsMySnapshotSession getFieldNumberToFieldDict] */

void FUN_10babf5e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10babf5e8; end: 10babf5f3; -[SCASnapshotsMySnapshotSession toProtoWithAllowedFields:] */

void FUN_10babf5e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c272070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_toProtoWithBitmapLength_allowedF_11267a240,1,param_3);
  return;
}



/* Entry: 10babf5f4; end: 10babf5fb; -[SCASnapshotsMySnapshotSession getPayloadIdentifier] */

undefined8 FUN_10babf5f4(void)

{
  return 0xcb9;
}



/* Entry: 10babf5fc; end: 10babf607; -[SCASnapshotsOperaAction getEventName] */

undefined ** FUN_10babf5fc(void)

{
  return &PTR____CFConstantStringClassReference_110fed618;
}



/* Entry: 10babf608; end: 10babf60f; -[SCASnapshotsOperaAction getEventQoS] */

undefined8 FUN_10babf608(void)

{
  return 1;
}



/* Entry: 10babf610; end: 10babf61b; -[SCASnapshotsOperaAction getPerUserSamplingRateV2] */

undefined8 FUN_10babf610(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10babf61c; end: 10babf69b; -[SCASnapshotsOperaAction setActionType:] */

void FUN_10babf61c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010babd054(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fa2618,2,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babf69c; end: 10babf71b; -[SCASnapshotsOperaAction setSnapType:] */

void FUN_10babf69c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010babd094(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fed638,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10babf71c; end: 10babf79b; -[SCASnapshotsOperaAction setSnapshotType:] */

void FUN_10babf71c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010babd074(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fed658,5,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


