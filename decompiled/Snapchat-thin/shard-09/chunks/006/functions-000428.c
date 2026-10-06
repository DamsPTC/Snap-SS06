/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106fa9f84; end: 106fa9fa7; +[SCSpectaclesRequestMessage analyticsFileDeleteRequest] */

void FUN_106fa9f84(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc();
  func_0x00010c055f40(param_1,param_2,0x7c,&PTR___NSConcreteGlobalBlock_110986c38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa9fa8; end: 106fa9faf;  */

void FUN_106fa9fa8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf025d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_analyticsFileDeleteRequest_11259e318);
  return;
}



/* Entry: 106fa9fb0; end: 106fa9fd3; +[SCSpectaclesRequestMessage enableLostMode] */

void FUN_106fa9fb0(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc();
  func_0x00010c055f40(param_1,param_2,0x81,&PTR___NSConcreteGlobalBlock_110986c58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa9fd4; end: 106fa9fdb;  */

void FUN_106fa9fd4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf90bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_enableLostMode_1125c1c98);
  return;
}



/* Entry: 106fa9fdc; end: 106fa9fff; +[SCSpectaclesRequestMessage startFlightImuCalibrationRequest] */

void FUN_106fa9fdc(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc();
  func_0x00010c055f40(param_1,param_2,0x82,&PTR___NSConcreteGlobalBlock_110986c78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106faa000; end: 106faa007;  */

void FUN_106faa000(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24ecd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_startFlightImuCalibrationRequest_112671558);
  return;
}



/* Entry: 106faa008; end: 106faa02b; +[SCSpectaclesRequestMessage stopFlightImuCalibrationRequest] */

void FUN_106faa008(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc();
  func_0x00010c055f40(param_1,param_2,0x83,&PTR___NSConcreteGlobalBlock_110986c98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106faa02c; end: 106faa033;  */

void FUN_106faa02c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c256010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_stopFlightImuCalibrationRequest_112673228);
  return;
}



/* Entry: 106faa034; end: 106faa03b; -[SCSpectaclesRequestMessage type] */

undefined8 FUN_106faa034(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106faa03c; end: 106faa043; -[SCSpectaclesRequestMessage providerBlock] */

undefined8 FUN_106faa03c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106faa044; end: 106faa04b; -[SCSpectaclesRequestMessage setProviderBlock:] */

void FUN_106faa044(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106faa04c; end: 106faa057; -[SCSpectaclesRequestMessage .cxx_destruct] */

void FUN_106faa04c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106faa058; end: 106faa0cb; -[SCSpectaclesResponseMessage initWithRequest:] */

undefined1 * FUN_106faa058(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f81b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106faa0cc; end: 106faa11f; -[SCSpectaclesResponseMessage responseStatus] */

undefined * FUN_106faa0cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 106faa120; end: 106faa12b; -[SCSpectaclesResponseMessage crashReports] */

undefined * FUN_106faa120(void)

{
  return PTR____NSArray0__struct_11034ab48;
}



/* Entry: 106faa12c; end: 106faa17f; -[SCSpectaclesResponseMessage nrfErrorType] */

undefined8 FUN_106faa12c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  return 0;
}



/* Entry: 106faa180; end: 106faa187; -[SCSpectaclesResponseMessage hasNrfError] */

undefined8 FUN_106faa180(void)

{
  return 0;
}



/* Entry: 106faa188; end: 106faa18f; -[SCSpectaclesResponseMessage batteryLevel] */

undefined8 FUN_106faa188(void)

{
  return 0;
}



/* Entry: 106faa190; end: 106faa197; -[SCSpectaclesResponseMessage hasBatteryLevelStatus] */

undefined8 FUN_106faa190(void)

{
  return 0;
}



/* Entry: 106faa198; end: 106faa19f; -[SCSpectaclesResponseMessage batteryLevelStatus] */

undefined8 FUN_106faa198(void)

{
  return 0;
}



/* Entry: 106faa1a0; end: 106faa1a7; -[SCSpectaclesResponseMessage guppyBatteryLevel] */

undefined8 FUN_106faa1a0(void)

{
  return 0;
}



/* Entry: 106faa1a8; end: 106faa1af; -[SCSpectaclesResponseMessage voltageLevel] */

undefined8 FUN_106faa1a8(void)

{
  return 0;
}



/* Entry: 106faa1b0; end: 106faa1b7; -[SCSpectaclesResponseMessage hasCharging] */

undefined8 FUN_106faa1b0(void)

{
  return 0;
}



/* Entry: 106faa1b8; end: 106faa20b; -[SCSpectaclesResponseMessage charging] */

undefined8 FUN_106faa1b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  return 0;
}



/* Entry: 106faa20c; end: 106faa213; -[SCSpectaclesResponseMessage hasDeviceColor] */

undefined8 FUN_106faa20c(void)

{
  return 0;
}



/* Entry: 106faa214; end: 106faa267; -[SCSpectaclesResponseMessage deviceColor] */

undefined8 FUN_106faa214(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  return 0;
}



/* Entry: 106faa268; end: 106faa26f; -[SCSpectaclesResponseMessage firmwareVersion] */

undefined8 FUN_106faa268(void)

{
  return 0;
}



/* Entry: 106faa270; end: 106faa277; -[SCSpectaclesResponseMessage serialNumber] */

undefined8 FUN_106faa270(void)

{
  return 0;
}



/* Entry: 106faa278; end: 106faa27f; -[SCSpectaclesResponseMessage hasHasSpaceToRecord] */

undefined8 FUN_106faa278(void)

{
  return 0;
}



/* Entry: 106faa280; end: 106faa2d3; -[SCSpectaclesResponseMessage hasSpaceToRecord] */

undefined8 FUN_106faa280(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  return 0;
}



/* Entry: 106faa2d4; end: 106faa2db; -[SCSpectaclesResponseMessage storagePercentage] */

undefined8 FUN_106faa2d4(void)

{
  return 0;
}



/* Entry: 106faa2dc; end: 106faa2e3; -[SCSpectaclesResponseMessage hasStorageLevelStatus] */

undefined8 FUN_106faa2dc(void)

{
  return 0;
}



/* Entry: 106faa2e4; end: 106faa2eb; -[SCSpectaclesResponseMessage storageLevelStatus] */

undefined8 FUN_106faa2e4(void)

{
  return 0;
}



/* Entry: 106faa2ec; end: 106faa2f3; -[SCSpectaclesResponseMessage hardwareVersion] */

undefined8 FUN_106faa2ec(void)

{
  return 0;
}



/* Entry: 106faa2f4; end: 106faa2fb; -[SCSpectaclesResponseMessage nordicTemperature] */

undefined8 FUN_106faa2f4(void)

{
  return 0;
}



/* Entry: 106faa2fc; end: 106faa303; -[SCSpectaclesResponseMessage socTemperature] */

undefined8 FUN_106faa2fc(void)

{
  return 0;
}



/* Entry: 106faa304; end: 106faa30b; -[SCSpectaclesResponseMessage coulombCounterTemperature] */

undefined8 FUN_106faa304(void)

{
  return 0;
}



/* Entry: 106faa30c; end: 106faa313; -[SCSpectaclesResponseMessage wifiTemperature] */

undefined8 FUN_106faa30c(void)

{
  return 0;
}



/* Entry: 106faa314; end: 106faa31b; -[SCSpectaclesResponseMessage hasTemperatureLevelStatus] */

undefined8 FUN_106faa314(void)

{
  return 0;
}



/* Entry: 106faa31c; end: 106faa323; -[SCSpectaclesResponseMessage temperatureStatus] */

undefined8 FUN_106faa31c(void)

{
  return 0;
}



/* Entry: 106faa324; end: 106faa32b; -[SCSpectaclesResponseMessage hasBackupStatusEvent] */

undefined8 FUN_106faa324(void)

{
  return 0;
}



/* Entry: 106faa32c; end: 106faa333; -[SCSpectaclesResponseMessage backupStatusEvent] */

undefined8 FUN_106faa32c(void)

{
  return 0;
}



/* Entry: 106faa334; end: 106faa33b; -[SCSpectaclesResponseMessage hasBluetoothEvent] */

undefined8 FUN_106faa334(void)

{
  return 0;
}



/* Entry: 106faa33c; end: 106faa38f; -[SCSpectaclesResponseMessage bluetoothEvent] */

undefined8 FUN_106faa33c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  return 0;
}



/* Entry: 106faa390; end: 106faa397; -[SCSpectaclesResponseMessage hasWifiState] */

undefined8 FUN_106faa390(void)

{
  return 0;
}



/* Entry: 106faa398; end: 106faa3eb; -[SCSpectaclesResponseMessage wifiOn] */

undefined8 FUN_106faa398(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  return 0;
}



/* Entry: 106faa3ec; end: 106faa3f3; -[SCSpectaclesResponseMessage ipAddress] */

undefined8 FUN_106faa3ec(void)

{
  return 0;
}



/* Entry: 106faa3f4; end: 106faa3fb; -[SCSpectaclesResponseMessage wifiFrequency] */

undefined8 FUN_106faa3f4(void)

{
  return 0;
}



/* Entry: 106faa3fc; end: 106faa403; -[SCSpectaclesResponseMessage hasFirmwareUpdateResponse] */

undefined8 FUN_106faa3fc(void)

{
  return 0;
}



/* Entry: 106faa404; end: 106faa457; -[SCSpectaclesResponseMessage firmwareUpdateResponseType] */

undefined8 FUN_106faa404(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  return 0;
}



/* Entry: 106faa458; end: 106faa45f; -[SCSpectaclesResponseMessage hasPatchApplied] */

undefined8 FUN_106faa458(void)

{
  return 0;
}



/* Entry: 106faa460; end: 106faa4b3; -[SCSpectaclesResponseMessage patchApplied] */

undefined8 FUN_106faa460(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2803a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  return 0;
}



/* Entry: 106faa4b4; end: 106faa4bb; -[SCSpectaclesResponseMessage firmwareDigest] */

undefined8 FUN_106faa4b4(void)

{
  return 0;
}



/* Entry: 106faa4bc; end: 106faa4c3; -[SCSpectaclesResponseMessage backgroundUpdateParameters] */

undefined8 FUN_106faa4bc(void)

{
  return 0;
}



/* Entry: 106faa4c4; end: 106faa4cb; -[SCSpectaclesResponseMessage backgroundUpdateFailureReason] */

undefined8 FUN_106faa4c4(void)

{
  return 0;
}



/* Entry: 106faa4cc; end: 106faa4d3; -[SCSpectaclesResponseMessage receivedCheckOTAUpdateAvailabilityRequest] */

undefined8 FUN_106faa4cc(void)

{
  return 0;
}



/* Entry: 106faa4d4; end: 106faa4db; -[SCSpectaclesResponseMessage receivedOTAUpdateRequest] */

undefined8 FUN_106faa4d4(void)

{
  return 0;
}



/* Entry: 106faa4dc; end: 106faa4e3; -[SCSpectaclesResponseMessage systemSoundMuted] */

undefined8 FUN_106faa4dc(void)

{
  return 0;
}



/* Entry: 106faa4e4; end: 106faa4eb; -[SCSpectaclesResponseMessage hasMuteSystemSound] */

undefined8 FUN_106faa4e4(void)

{
  return 0;
}



/* Entry: 106faa4ec; end: 106faa4f3; -[SCSpectaclesResponseMessage usbImportEnabled] */

undefined8 FUN_106faa4ec(void)

{
  return 0;
}



/* Entry: 106faa4f4; end: 106faa4fb; -[SCSpectaclesResponseMessage usbConnected] */

undefined8 FUN_106faa4f4(void)

{
  return 0;
}



/* Entry: 106faa4fc; end: 106faa503; -[SCSpectaclesResponseMessage otaUpdateEvent] */

undefined8 FUN_106faa4fc(void)

{
  return 0;
}



/* Entry: 106faa504; end: 106faa50b; -[SCSpectaclesResponseMessage otaUpdateAvailabilityEvent] */

undefined8 FUN_106faa504(void)

{
  return 0;
}



/* Entry: 106faa50c; end: 106faa513; -[SCSpectaclesResponseMessage receivedReadyForUserAssociationMessage] */

undefined8 FUN_106faa50c(void)

{
  return 0;
}



/* Entry: 106faa514; end: 106faa51b; -[SCSpectaclesResponseMessage receivedUserAssociationDoneMessage] */

undefined8 FUN_106faa514(void)

{
  return 0;
}



/* Entry: 106faa51c; end: 106faa523; -[SCSpectaclesResponseMessage validatePairingResult] */

undefined8 FUN_106faa51c(void)

{
  return 0;
}



/* Entry: 106faa524; end: 106faa52b; -[SCSpectaclesResponseMessage peerPublicKey] */

undefined8 FUN_106faa524(void)

{
  return 0;
}



/* Entry: 106faa52c; end: 106faa533; -[SCSpectaclesResponseMessage peerVerificationNonce] */

undefined8 FUN_106faa52c(void)

{
  return 0;
}



/* Entry: 106faa534; end: 106faa53b; -[SCSpectaclesResponseMessage peerVerificationCiphertext] */

undefined8 FUN_106faa534(void)

{
  return 0;
}



/* Entry: 106faa53c; end: 106faa543; -[SCSpectaclesResponseMessage peerVerificationTag] */

undefined8 FUN_106faa53c(void)

{
  return 0;
}



/* Entry: 106faa544; end: 106faa54b; -[SCSpectaclesResponseMessage peerVerificationSigPairing] */

undefined8 FUN_106faa544(void)

{
  return 0;
}



/* Entry: 106faa54c; end: 106faa553; -[SCSpectaclesResponseMessage peerVerificationPairingSCCertChain] */

undefined8 FUN_106faa54c(void)

{
  return 0;
}



/* Entry: 106faa554; end: 106faa55b; -[SCSpectaclesResponseMessage encryptionSetupNonce] */

undefined8 FUN_106faa554(void)

{
  return 0;
}



/* Entry: 106faa55c; end: 106faa563; -[SCSpectaclesResponseMessage channelEncryptionNonce] */

undefined8 FUN_106faa55c(void)

{
  return 0;
}



/* Entry: 106faa564; end: 106faa56b; -[SCSpectaclesResponseMessage previousUserMediaCount] */

undefined8 FUN_106faa564(void)

{
  return 0;
}



/* Entry: 106faa56c; end: 106faa573; -[SCSpectaclesResponseMessage requestAuthzCode] */

undefined8 FUN_106faa56c(void)

{
  return 0;
}



/* Entry: 106faa574; end: 106faa57b; -[SCSpectaclesResponseMessage cloudUploadClientId] */

undefined8 FUN_106faa574(void)

{
  return 0;
}



/* Entry: 106faa57c; end: 106faa583; -[SCSpectaclesResponseMessage oauthScopes] */

undefined8 FUN_106faa57c(void)

{
  return 0;
}



/* Entry: 106faa584; end: 106faa58b; -[SCSpectaclesResponseMessage uploadToCloudEvent] */

undefined8 FUN_106faa584(void)

{
  return 0;
}



/* Entry: 106faa58c; end: 106faa593; -[SCSpectaclesResponseMessage knownWifiAPList] */

undefined8 FUN_106faa58c(void)

{
  return 0;
}



/* Entry: 106faa594; end: 106faa59b; -[SCSpectaclesResponseMessage setWifiAPListResponse] */

undefined8 FUN_106faa594(void)

{
  return 0;
}



/* Entry: 106faa59c; end: 106faa5a3; -[SCSpectaclesResponseMessage lastCloudUploadTime] */

undefined8 FUN_106faa59c(void)

{
  return 0;
}



/* Entry: 106faa5a4; end: 106faa5ab; -[SCSpectaclesResponseMessage wiFiStatus] */

undefined8 FUN_106faa5a4(void)

{
  return 0;
}



/* Entry: 106faa5ac; end: 106faa5b3; -[SCSpectaclesResponseMessage availableWiFiNetworks] */

undefined8 FUN_106faa5ac(void)

{
  return 0;
}



/* Entry: 106faa5b4; end: 106faa5bb; -[SCSpectaclesResponseMessage setWifiNetworksResponse] */

undefined8 FUN_106faa5b4(void)

{
  return 0;
}



/* Entry: 106faa5bc; end: 106faa5c3; -[SCSpectaclesResponseMessage hasWiFiAccessPointConnectedClientCount] */

undefined8 FUN_106faa5bc(void)

{
  return 0;
}



/* Entry: 106faa5c4; end: 106faa5cb; -[SCSpectaclesResponseMessage wiFiAccessPointConnectedClientCount] */

undefined8 FUN_106faa5c4(void)

{
  return 0;
}



/* Entry: 106faa5cc; end: 106faa5d3; -[SCSpectaclesResponseMessage contentCleared] */

undefined8 FUN_106faa5cc(void)

{
  return 0;
}



/* Entry: 106faa5d4; end: 106faa5db; -[SCSpectaclesResponseMessage ambaCrashed] */

undefined8 FUN_106faa5d4(void)

{
  return 0;
}



/* Entry: 106faa5dc; end: 106faa5e3; -[SCSpectaclesResponseMessage videoRecordingHasStarted] */

undefined8 FUN_106faa5dc(void)

{
  return 0;
}



/* Entry: 106faa5e4; end: 106faa5eb; -[SCSpectaclesResponseMessage photoCaptureHasStarted] */

undefined8 FUN_106faa5e4(void)

{
  return 0;
}



/* Entry: 106faa5ec; end: 106faa5f3; -[SCSpectaclesResponseMessage mediaCount] */

undefined8 FUN_106faa5ec(void)

{
  return 0;
}



/* Entry: 106faa5f4; end: 106faa5fb; -[SCSpectaclesResponseMessage shipmodeSet] */

undefined8 FUN_106faa5f4(void)

{
  return 0;
}



/* Entry: 106faa5fc; end: 106faa603; -[SCSpectaclesResponseMessage encryptionLayerFailure] */

undefined8 FUN_106faa5fc(void)

{
  return 0;
}



/* Entry: 106faa604; end: 106faa60b; -[SCSpectaclesResponseMessage audioLevel] */

undefined8 FUN_106faa604(void)

{
  return 0;
}



/* Entry: 106faa60c; end: 106faa613; -[SCSpectaclesResponseMessage brightnessLevel] */

undefined8 FUN_106faa60c(void)

{
  return 0;
}



/* Entry: 106faa614; end: 106faa61b; -[SCSpectaclesResponseMessage hasAutoBrightnessEnabled] */

undefined8 FUN_106faa614(void)

{
  return 0;
}



/* Entry: 106faa61c; end: 106faa623; -[SCSpectaclesResponseMessage autoBrightnessEnabled] */

undefined8 FUN_106faa61c(void)

{
  return 0;
}



/* Entry: 106faa624; end: 106faa62b; -[SCSpectaclesResponseMessage receivedAutoBrightnessEnabled] */

undefined8 FUN_106faa624(void)

{
  return 0;
}



/* Entry: 106faa62c; end: 106faa633; -[SCSpectaclesResponseMessage startProxy] */

undefined8 FUN_106faa62c(void)

{
  return 0;
}


