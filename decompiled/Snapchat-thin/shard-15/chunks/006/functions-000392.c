/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10bad36c4; end: 10bad36cb; -[SCASpectaclesDepth getPayloadIdentifier] */

undefined8 FUN_10bad36c4(void)

{
  return 0x843;
}



/* Entry: 10bad36cc; end: 10bad36d7; -[SCASpectaclesDeviceStatus getEventName] */

undefined ** FUN_10bad36cc(void)

{
  return &PTR____CFConstantStringClassReference_110ff3ab8;
}



/* Entry: 10bad36d8; end: 10bad36df; -[SCASpectaclesDeviceStatus getEventQoS] */

undefined8 FUN_10bad36d8(void)

{
  return 1;
}



/* Entry: 10bad36e0; end: 10bad3733; -[SCASpectaclesDeviceStatus setVideoCount:] */

void FUN_10bad36e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b840(param_1,param_2,&PTR____CFConstantStringClassReference_110e09f98,9,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bad3734; end: 10bad3757; -[SCASpectaclesDeviceStatus getFieldNumberToFieldDict] */

void FUN_10bad3734(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bad3758; end: 10bad378f; -[SCASpectaclesDeviceStatus addToProtoDictionary] */

void FUN_10bad3758(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bad3790; end: 10bad37e7; -[SCASpectaclesDeviceStatus toProtoWithAllowedFields:] */

void FUN_10bad3790(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bad37e8; end: 10bad37ef; -[SCASpectaclesDeviceStatus getPayloadIdentifier] */

undefined8 FUN_10bad37e8(void)

{
  return 0x848;
}



/* Entry: 10bad37f0; end: 10bad37fb; -[SCASpectaclesExperimentalDeviceAction getEventName] */

undefined ** FUN_10bad37f0(void)

{
  return &PTR____CFConstantStringClassReference_110ff3ad8;
}



/* Entry: 10bad37fc; end: 10bad3803; -[SCASpectaclesExperimentalDeviceAction getEventQoS] */

undefined8 FUN_10bad37fc(void)

{
  return 1;
}



/* Entry: 10bad3804; end: 10bad380f; -[SCASpectaclesExperimentalDeviceAction getPerUserSamplingRateV2] */

undefined8 FUN_10bad3804(void)

{
  return 0x3fb999999999999a;
}



/* Entry: 10bad3810; end: 10bad3827; -[SCASpectaclesExperimentalDeviceAction setSettingsActionPayload:] */

void FUN_10bad3810(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110ff3af8,9,param_3,0);
  return;
}



/* Entry: 10bad3828; end: 10bad384b; -[SCASpectaclesExperimentalDeviceAction getFieldNumberToFieldDict] */

void FUN_10bad3828(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bad384c; end: 10bad3883; -[SCASpectaclesExperimentalDeviceAction addToProtoDictionary] */

void FUN_10bad384c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bad3884; end: 10bad38db; -[SCASpectaclesExperimentalDeviceAction toProtoWithAllowedFields:] */

void FUN_10bad3884(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bad38dc; end: 10bad38e3; -[SCASpectaclesExperimentalDeviceAction getPayloadIdentifier] */

undefined8 FUN_10bad38dc(void)

{
  return 0xcf5;
}



/* Entry: 10bad38e4; end: 10bad38ef; -[SCASpectaclesFirmwareUpdateBackgroundSchedule getEventName] */

undefined ** FUN_10bad38e4(void)

{
  return &PTR____CFConstantStringClassReference_110ff3b18;
}



/* Entry: 10bad38f0; end: 10bad38f7; -[SCASpectaclesFirmwareUpdateBackgroundSchedule getEventQoS] */

undefined8 FUN_10bad38f0(void)

{
  return 1;
}



/* Entry: 10bad38f8; end: 10bad391b; -[SCASpectaclesFirmwareUpdateBackgroundSchedule getFieldNumberToFieldDict] */

void FUN_10bad38f8(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bad391c; end: 10bad3953; -[SCASpectaclesFirmwareUpdateBackgroundSchedule addToProtoDictionary] */

void FUN_10bad391c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bad3954; end: 10bad39ab; -[SCASpectaclesFirmwareUpdateBackgroundSchedule toProtoWithAllowedFields:] */

void FUN_10bad3954(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bad39ac; end: 10bad39b3; -[SCASpectaclesFirmwareUpdateBackgroundSchedule getPayloadIdentifier] */

undefined8 FUN_10bad39ac(void)

{
  return 0x84f;
}



/* Entry: 10bad39b4; end: 10bad39bf; -[SCASpectaclesFirmwareUpdateCheck getEventName] */

undefined ** FUN_10bad39b4(void)

{
  return &PTR____CFConstantStringClassReference_110ff3b38;
}



/* Entry: 10bad39c0; end: 10bad39c7; -[SCASpectaclesFirmwareUpdateCheck getEventQoS] */

undefined8 FUN_10bad39c0(void)

{
  return 1;
}



/* Entry: 10bad39c8; end: 10bad39eb; -[SCASpectaclesFirmwareUpdateCheck getFieldNumberToFieldDict] */

void FUN_10bad39c8(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bad39ec; end: 10bad3a23; -[SCASpectaclesFirmwareUpdateCheck addToProtoDictionary] */

void FUN_10bad39ec(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bad3a24; end: 10bad3a7b; -[SCASpectaclesFirmwareUpdateCheck toProtoWithAllowedFields:] */

void FUN_10bad3a24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bad3a7c; end: 10bad3a83; -[SCASpectaclesFirmwareUpdateCheck getPayloadIdentifier] */

undefined8 FUN_10bad3a7c(void)

{
  return 0x850;
}



/* Entry: 10bad3a84; end: 10bad3a8f; -[SCASpectaclesFirmwareUpdateDownloadStart getEventName] */

undefined ** FUN_10bad3a84(void)

{
  return &PTR____CFConstantStringClassReference_110ff3b58;
}



/* Entry: 10bad3a90; end: 10bad3a97; -[SCASpectaclesFirmwareUpdateDownloadStart getEventQoS] */

undefined8 FUN_10bad3a90(void)

{
  return 1;
}



/* Entry: 10bad3a98; end: 10bad3abb; -[SCASpectaclesFirmwareUpdateDownloadStart getFieldNumberToFieldDict] */

void FUN_10bad3a98(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bad3abc; end: 10bad3af3; -[SCASpectaclesFirmwareUpdateDownloadStart addToProtoDictionary] */

void FUN_10bad3abc(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bad3af4; end: 10bad3b4b; -[SCASpectaclesFirmwareUpdateDownloadStart toProtoWithAllowedFields:] */

void FUN_10bad3af4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bad3b4c; end: 10bad3b53; -[SCASpectaclesFirmwareUpdateDownloadStart getPayloadIdentifier] */

undefined8 FUN_10bad3b4c(void)

{
  return 0x852;
}



/* Entry: 10bad3b54; end: 10bad3b5f; -[SCASpectaclesFirmwareUpdateDownloaded getEventName] */

undefined ** FUN_10bad3b54(void)

{
  return &PTR____CFConstantStringClassReference_110ff3b78;
}



/* Entry: 10bad3b60; end: 10bad3b67; -[SCASpectaclesFirmwareUpdateDownloaded getEventQoS] */

undefined8 FUN_10bad3b60(void)

{
  return 1;
}



/* Entry: 10bad3b68; end: 10bad3b8b; -[SCASpectaclesFirmwareUpdateDownloaded getFieldNumberToFieldDict] */

void FUN_10bad3b68(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bad3b8c; end: 10bad3bc3; -[SCASpectaclesFirmwareUpdateDownloaded addToProtoDictionary] */

void FUN_10bad3b8c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bad3bc4; end: 10bad3c1b; -[SCASpectaclesFirmwareUpdateDownloaded toProtoWithAllowedFields:] */

void FUN_10bad3bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bad3c1c; end: 10bad3c23; -[SCASpectaclesFirmwareUpdateDownloaded getPayloadIdentifier] */

undefined8 FUN_10bad3c1c(void)

{
  return 0x853;
}



/* Entry: 10bad3c24; end: 10bad3c2f; -[SCASpectaclesFirmwareUpdateFailure getEventName] */

undefined ** FUN_10bad3c24(void)

{
  return &PTR____CFConstantStringClassReference_110ff3b98;
}



/* Entry: 10bad3c30; end: 10bad3c37; -[SCASpectaclesFirmwareUpdateFailure getEventQoS] */

undefined8 FUN_10bad3c30(void)

{
  return 1;
}



/* Entry: 10bad3c38; end: 10bad3cb7; -[SCASpectaclesFirmwareUpdateFailure setFailureReason:] */

void FUN_10bad3c38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bacfd9c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110dbdcd8,4,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bad3cb8; end: 10bad3cdb; -[SCASpectaclesFirmwareUpdateFailure getFieldNumberToFieldDict] */

void FUN_10bad3cb8(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bad3cdc; end: 10bad3d13; -[SCASpectaclesFirmwareUpdateFailure addToProtoDictionary] */

void FUN_10bad3cdc(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bad3d14; end: 10bad3d6b; -[SCASpectaclesFirmwareUpdateFailure toProtoWithAllowedFields:] */

void FUN_10bad3d14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bad3d6c; end: 10bad3d73; -[SCASpectaclesFirmwareUpdateFailure getPayloadIdentifier] */

undefined8 FUN_10bad3d6c(void)

{
  return 0x854;
}



/* Entry: 10bad3d74; end: 10bad3d7f; -[SCASpectaclesFirmwareUpdateFlashStart getEventName] */

undefined ** FUN_10bad3d74(void)

{
  return &PTR____CFConstantStringClassReference_110ff3bb8;
}



/* Entry: 10bad3d80; end: 10bad3d87; -[SCASpectaclesFirmwareUpdateFlashStart getEventQoS] */

undefined8 FUN_10bad3d80(void)

{
  return 1;
}



/* Entry: 10bad3d88; end: 10bad3dab; -[SCASpectaclesFirmwareUpdateFlashStart getFieldNumberToFieldDict] */

void FUN_10bad3d88(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bad3dac; end: 10bad3de3; -[SCASpectaclesFirmwareUpdateFlashStart addToProtoDictionary] */

void FUN_10bad3dac(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bad3de4; end: 10bad3e3b; -[SCASpectaclesFirmwareUpdateFlashStart toProtoWithAllowedFields:] */

void FUN_10bad3de4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bad3e3c; end: 10bad3e43; -[SCASpectaclesFirmwareUpdateFlashStart getPayloadIdentifier] */

undefined8 FUN_10bad3e3c(void)

{
  return 0x856;
}



/* Entry: 10bad3e44; end: 10bad3e4f; -[SCASpectaclesFirmwareUpdatePatchStart getEventName] */

undefined ** FUN_10bad3e44(void)

{
  return &PTR____CFConstantStringClassReference_110ff3bd8;
}



/* Entry: 10bad3e50; end: 10bad3e57; -[SCASpectaclesFirmwareUpdatePatchStart getEventQoS] */

undefined8 FUN_10bad3e50(void)

{
  return 1;
}



/* Entry: 10bad3e58; end: 10bad3e7b; -[SCASpectaclesFirmwareUpdatePatchStart getFieldNumberToFieldDict] */

void FUN_10bad3e58(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bad3e7c; end: 10bad3eb3; -[SCASpectaclesFirmwareUpdatePatchStart addToProtoDictionary] */

void FUN_10bad3e7c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bad3eb4; end: 10bad3f0b; -[SCASpectaclesFirmwareUpdatePatchStart toProtoWithAllowedFields:] */

void FUN_10bad3eb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bad3f0c; end: 10bad3f13; -[SCASpectaclesFirmwareUpdatePatchStart getPayloadIdentifier] */

undefined8 FUN_10bad3f0c(void)

{
  return 0x857;
}



/* Entry: 10bad3f14; end: 10bad3f1f; -[SCASpectaclesFirmwareUpdatePatched getEventName] */

undefined ** FUN_10bad3f14(void)

{
  return &PTR____CFConstantStringClassReference_110ff3bf8;
}



/* Entry: 10bad3f20; end: 10bad3f27; -[SCASpectaclesFirmwareUpdatePatched getEventQoS] */

undefined8 FUN_10bad3f20(void)

{
  return 1;
}



/* Entry: 10bad3f28; end: 10bad3f4b; -[SCASpectaclesFirmwareUpdatePatched getFieldNumberToFieldDict] */

void FUN_10bad3f28(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bad3f4c; end: 10bad3f83; -[SCASpectaclesFirmwareUpdatePatched addToProtoDictionary] */

void FUN_10bad3f4c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bad3f84; end: 10bad3fdb; -[SCASpectaclesFirmwareUpdatePatched toProtoWithAllowedFields:] */

void FUN_10bad3f84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bad3fdc; end: 10bad3fe3; -[SCASpectaclesFirmwareUpdatePatched getPayloadIdentifier] */

undefined8 FUN_10bad3fdc(void)

{
  return 0x858;
}



/* Entry: 10bad3fe4; end: 10bad3fef; -[SCASpectaclesFirmwareUpdatePrompt getEventName] */

undefined ** FUN_10bad3fe4(void)

{
  return &PTR____CFConstantStringClassReference_110ff3c18;
}



/* Entry: 10bad3ff0; end: 10bad3ff7; -[SCASpectaclesFirmwareUpdatePrompt getEventQoS] */

undefined8 FUN_10bad3ff0(void)

{
  return 1;
}



/* Entry: 10bad3ff8; end: 10bad4077; -[SCASpectaclesFirmwareUpdatePrompt setPromptAction:] */

void FUN_10bad3ff8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bacfdbc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b820(param_1,param_2,&PTR____CFConstantStringClassReference_110fdad98,6,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bad4078; end: 10bad409b; -[SCASpectaclesFirmwareUpdatePrompt getFieldNumberToFieldDict] */

void FUN_10bad4078(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bad409c; end: 10bad40d3; -[SCASpectaclesFirmwareUpdatePrompt addToProtoDictionary] */

void FUN_10bad409c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bad40d4; end: 10bad412b; -[SCASpectaclesFirmwareUpdatePrompt toProtoWithAllowedFields:] */

void FUN_10bad40d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bad412c; end: 10bad4133; -[SCASpectaclesFirmwareUpdatePrompt getPayloadIdentifier] */

undefined8 FUN_10bad412c(void)

{
  return 0x859;
}



/* Entry: 10bad4134; end: 10bad413f; -[SCASpectaclesFirmwareUpdateRevertRequired getEventName] */

undefined ** FUN_10bad4134(void)

{
  return &PTR____CFConstantStringClassReference_110ff3c38;
}



/* Entry: 10bad4140; end: 10bad4147; -[SCASpectaclesFirmwareUpdateRevertRequired getEventQoS] */

undefined8 FUN_10bad4140(void)

{
  return 1;
}



/* Entry: 10bad4148; end: 10bad416b; -[SCASpectaclesFirmwareUpdateRevertRequired getFieldNumberToFieldDict] */

void FUN_10bad4148(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bad416c; end: 10bad41a3; -[SCASpectaclesFirmwareUpdateRevertRequired addToProtoDictionary] */

void FUN_10bad416c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bad41a4; end: 10bad41fb; -[SCASpectaclesFirmwareUpdateRevertRequired toProtoWithAllowedFields:] */

void FUN_10bad41a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bad41fc; end: 10bad4203; -[SCASpectaclesFirmwareUpdateRevertRequired getPayloadIdentifier] */

undefined8 FUN_10bad41fc(void)

{
  return 0x85b;
}



/* Entry: 10bad4204; end: 10bad420f; -[SCASpectaclesFirmwareUpdateReverted getEventName] */

undefined ** FUN_10bad4204(void)

{
  return &PTR____CFConstantStringClassReference_110ff3c58;
}



/* Entry: 10bad4210; end: 10bad4217; -[SCASpectaclesFirmwareUpdateReverted getEventQoS] */

undefined8 FUN_10bad4210(void)

{
  return 1;
}



/* Entry: 10bad4218; end: 10bad423b; -[SCASpectaclesFirmwareUpdateReverted getFieldNumberToFieldDict] */

void FUN_10bad4218(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bad423c; end: 10bad4273; -[SCASpectaclesFirmwareUpdateReverted addToProtoDictionary] */

void FUN_10bad423c(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bad4274; end: 10bad42cb; -[SCASpectaclesFirmwareUpdateReverted toProtoWithAllowedFields:] */

void FUN_10bad4274(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bad42cc; end: 10bad42d3; -[SCASpectaclesFirmwareUpdateReverted getPayloadIdentifier] */

undefined8 FUN_10bad42cc(void)

{
  return 0x85c;
}



/* Entry: 10bad42d4; end: 10bad4323; -[SCASpectaclesFirmwareUpdateSessionEventBase setDurationSec:] */

void FUN_10bad42d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b880(param_1,param_2,&PTR____CFConstantStringClassReference_110f0d2d8,puVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bad4324; end: 10bad4337; -[SCASpectaclesFirmwareUpdateSessionEventBase setTargetFirmwareVersion:] */

void FUN_10bad4324(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_value_type__112644840,
             &PTR____CFConstantStringClassReference_110ff3158,param_3,0);
  return;
}



/* Entry: 10bad4338; end: 10bad434b; -[SCASpectaclesFirmwareUpdateSessionEventBase setUpdateSessionId:] */

void FUN_10bad4338(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_value_type__112644840,
             &PTR____CFConstantStringClassReference_110ff3178,param_3,0);
  return;
}



/* Entry: 10bad434c; end: 10bad43c7; -[SCASpectaclesFirmwareUpdateSessionEventBase setUpdateType:] */

void FUN_10bad434c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bacfddc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b860(param_1,param_2,&PTR____CFConstantStringClassReference_110fe5498,puVar1,3,
                      param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10bad43c8; end: 10bad43d3; -[SCASpectaclesFirmwareUpdateShow getEventName] */

undefined ** FUN_10bad43c8(void)

{
  return &PTR____CFConstantStringClassReference_110ff3c78;
}



/* Entry: 10bad43d4; end: 10bad43db; -[SCASpectaclesFirmwareUpdateShow getEventQoS] */

undefined8 FUN_10bad43d4(void)

{
  return 1;
}



/* Entry: 10bad43dc; end: 10bad43ff; -[SCASpectaclesFirmwareUpdateShow getFieldNumberToFieldDict] */

void FUN_10bad43dc(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bad4400; end: 10bad4437; -[SCASpectaclesFirmwareUpdateShow addToProtoDictionary] */

void FUN_10bad4400(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bad4438; end: 10bad448f; -[SCASpectaclesFirmwareUpdateShow toProtoWithAllowedFields:] */

void FUN_10bad4438(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bad4490; end: 10bad4497; -[SCASpectaclesFirmwareUpdateShow getPayloadIdentifier] */

undefined8 FUN_10bad4490(void)

{
  return 0x85d;
}



/* Entry: 10bad4498; end: 10bad44a3; -[SCASpectaclesFirmwareUpdateStart getEventName] */

undefined ** FUN_10bad4498(void)

{
  return &PTR____CFConstantStringClassReference_110ff3c98;
}



/* Entry: 10bad44a4; end: 10bad44ab; -[SCASpectaclesFirmwareUpdateStart getEventQoS] */

undefined8 FUN_10bad44a4(void)

{
  return 1;
}



/* Entry: 10bad44ac; end: 10bad44cf; -[SCASpectaclesFirmwareUpdateStart getFieldNumberToFieldDict] */

void FUN_10bad44ac(undefined8 param_1)

{
  func_0x00010befc280();
                    /* WARNING: Could not recover jumptable at 0x00010bf49690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constructFieldNumberToFieldDict_1125aff48);
  return;
}



/* Entry: 10bad44d0; end: 10bad4507; -[SCASpectaclesFirmwareUpdateStart addToProtoDictionary] */

void FUN_10bad44d0(undefined8 param_1)

{
  func_0x00010c1191a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10bad4508; end: 10bad455f; -[SCASpectaclesFirmwareUpdateStart toProtoWithAllowedFields:] */

void FUN_10bad4508(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10bad4560; end: 10bad4567; -[SCASpectaclesFirmwareUpdateStart getPayloadIdentifier] */

undefined8 FUN_10bad4560(void)

{
  return 0x85e;
}


