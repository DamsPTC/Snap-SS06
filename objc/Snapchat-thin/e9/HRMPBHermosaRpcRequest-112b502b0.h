// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: HRMPBHermosaRpcRequest
// Superclass: GPBMessage
// Address: 0x112b502b0

@interface HRMPBHermosaRpcRequest

// Property: id_p; attributes: TI,D,N
// Property: hasId_p; attributes: TB,D,N
// Property: bootSocIfNecessary; attributes: TB,D,N
// Property: hasBootSocIfNecessary; attributes: TB,D,N
// Property: targetSoc; attributes: Ti,D,N
// Property: hasTargetSoc; attributes: TB,D,N
// Property: requestOneOfCase; attributes: Ti,R,D,N
// Property: testRequest; attributes: T@"NSString",C,D,N
// Property: batteryStatusRequest; attributes: T@"HRMPBBatteryStatusRequest",&,D,N
// Property: gitRequest; attributes: T@"HRMPBEmpty",&,D,N
// Property: getTemperatureRequest; attributes: T@"HRMPBEmpty",&,D,N
// Property: haltRequest; attributes: T@"HRMPBHaltRequest",&,D,N
// Property: getNameRequest; attributes: T@"HRMPBEmpty",&,D,N
// Property: qcomRequest; attributes: T@"HRMPBQcomBootType",&,D,N
// Property: boardIdRequest; attributes: T@"HRMPBEmpty",&,D,N
// Property: clearBugRequest; attributes: T@"HRMPBEmpty",&,D,N
// Property: getSerialNumberRequest; attributes: T@"HRMPBEmpty",&,D,N
// Property: pushMessageRequest; attributes: T@"HRMPBSpectaclesPushMessage",&,D,N
// Property: wifiGetStateRequest; attributes: T@"HRMPBEmpty",&,D,N
// Property: wifiStartRequest; attributes: T@"HRMPBWifiParams",&,D,N
// Property: wifiStopRequest; attributes: T@"HRMPBEmpty",&,D,N
// Property: chargerStateRequest; attributes: T@"HRMPBEmpty",&,D,N
// Property: qcomStateRequest; attributes: T@"HRMPBEmpty",&,D,N
// Property: mediaCountsGetRequest; attributes: T@"HRMPBEmpty",&,D,N
// Property: mediaRequest; attributes: T@"HRMPBMediaRequest",&,D,N
// Property: oauthSetUserAssociationRequest; attributes: T@"HRMPBUserAssociationRequest",&,D,N
// Property: setNameRequest; attributes: T@"HRMPBBleName",&,D,N
// Property: getFrameColorRequest; attributes: T@"HRMPBEmpty",&,D,N
// Property: getLocationEnabledRequest; attributes: T@"HRMPBEmpty",&,D,N
// Property: setLocationEnabledRequest; attributes: T@"HRMPBBoolMessage",&,D,N
// Property: setTimeUtcRequest; attributes: T@"HRMPBRealTimeMessage",&,D,N
// Property: getHomeWifiNetworksRequest; attributes: T@"HRMPBEmpty",&,D,N
// Property: setHomeWifiNetworksRequest; attributes: T@"HRMPBWifiAPList",&,D,N
// Property: wearDetectorGetStateRequest; attributes: T@"HRMPBEmpty",&,D,N
// Property: eventRegisterListenerRequest; attributes: T@"HRMPBEventRegisterListenerRequest",&,D,N
// Property: eventUnregisterListenerRequest; attributes: T@"HRMPBEventRegisterListenerRequest",&,D,N
// Property: getAudioLevelRequest; attributes: T@"HRMPBEmpty",&,D,N
// Property: setAudioLevelRequest; attributes: Ti,D,N
// Property: getBrightnessLevelRequest; attributes: T@"HRMPBEmpty",&,D,N
// Property: setBrightnessLevelRequest; attributes: Ti,D,N
// Property: phoneNameSetRequest; attributes: T@"NSString",C,D,N
// Property: proxyStartedRequest; attributes: T@"HRMPBProxyStartedRequest",&,D,N
// Property: oauthGetProdClientidRequest; attributes: T@"HRMPBEmpty",&,D,N
// Property: getWifiStatusRequest; attributes: T@"HRMPBEmpty",&,D,N
// Property: getAvailableWifiRequest; attributes: T@"HRMPBEmpty",&,D,N
// Property: shipmodeRequest; attributes: T@"HRMPBShipmodeRequest",&,D,N
// Property: checkOsOtaUpdateRequest; attributes: T@"HRMPBOTACheckRequest",&,D,N
// Property: downloadInstallOsOtaUpdateRequest; attributes: T@"HRMPBOTADownloadAndInstallRequest",&,D,N
// Property: bleDisconnectReasonRequest; attributes: T@"HRMPBEmpty",&,D,N
// Property: setDeveloperFeaturesRequest; attributes: T@"HRMPBHermosaDevFeatureSet",&,D,N
// Property: clientLocationProvidingRequest; attributes: T@"HRMPBClientLocation",&,D,N
// Property: setLowPowerModeRequest; attributes: T@"HRMPBLowPowerModeMessage",&,D,N
// Property: getLowPowerModeRequest; attributes: T@"HRMPBEmpty",&,D,N
// Property: displayTurnOnRequest; attributes: T@"HRMPBEmpty",&,D,N
// Property: unpairDeviceRequest; attributes: T@"HRMPBEmpty",&,D,N
// Property: clearContentRequest; attributes: T@"HRMPBEmpty",&,D,N
// Property: clearCacheRequest; attributes: T@"HRMPBEmpty",&,D,N
// Property: performFactoryResetRequest; attributes: T@"HRMPBEmpty",&,D,N
// Property: setPairingPublicKeyRequest; attributes: T@"HRMPBKeyExchangeMessage",&,D,N
// Property: setPeerVerificationRequest; attributes: T@"HRMPBPeerVerificationMessage",&,D,N
// Property: getQuickSaveModeEnabledRequest; attributes: T@"HRMPBEmpty",&,D,N
// Property: setQuickSaveModeEnabledRequest; attributes: T@"HRMPBBoolMessage",&,D,N
// Property: encryptionSetupNonceRequest; attributes: T@"HRMPBEncryptionSetupNonceExchangeMessage",&,D,N
// Property: setPairingCompletionRequest; attributes: T@"HRMPBEmpty",&,D,N
// Property: setUserDeviceSecurityRequest; attributes: T@"HRMPBSetUserDeviceSecurityRequest",&,D,N
// Property: setUserDevicePasswordRequest; attributes: T@"HRMPBSetUserDevicePasswordRequest",&,D,N
// Property: setAdbKeyRequest; attributes: T@"HRMPBAdbPublicKeySetup",&,D,N
// Property: setAutoBrightnessRequest; attributes: T@"HRMPBSetAutoBrightnessRequest",&,D,N
// Property: getAutoBrightnessRequest; attributes: T@"HRMPBGetAutoBrightnessRequest",&,D,N
// Property: getUserDeviceSecurityRequest; attributes: T@"HRMPBEmpty",&,D,N
// Property: setChannelEncryptionNonceRequest; attributes: T@"HRMPBEncryptionNonceExchange",&,D,N
// Property: setShakeToReportDataRequest; attributes: T@"HRMPBShakeToReportRequest",&,D,N
// Property: verifyPasscodeRequest; attributes: T@"HRMPBVerifyPasscodeRequest",&,D,N
// Property: setPairingSessionIdRequest; attributes: T@"HRMPBPairingSessionIdRequest",&,D,N
// Property: proxyNotifyStatusRequest; attributes: T@"HRMPBProxyNotifyStatusRequest",&,D,N
// Property: getOtaAutoUpdateEnabledRequest; attributes: T@"HRMPBEmpty",&,D,N
// Property: setOtaAutoUpdateEnabledRequest; attributes: T@"HRMPBBoolValue",&,D,N
// Property: getTransferFileRequest; attributes: T@"HRMPBGetFileRequest",&,D,N
// Property: getBackupStatusRequest; attributes: T@"HRMPBEmpty",&,D,N
// Property: playSoundRequest; attributes: T@"HRMPBSoundData",&,D,N
// Property: proxyStartManualRequest; attributes: T@"HRMPBProxyStartManualRequest",&,D,N
// Property: proxyStopManualRequest; attributes: T@"HRMPBProxyStopManualRequest",&,D,N
// Property: setSystemSoundRequest; attributes: T@"HRMPBSetSystemSoundRequest",&,D,N
// Property: getSystemSoundRequest; attributes: T@"HRMPBGetSystemSoundRequest",&,D,N
// Property: cancelOtaUpdateRequest; attributes: T@"HRMPBEmpty",&,D,N
// Property: validatePairingRequest; attributes: T@"HRMPBValidatePairingRequest",&,D,N
// Property: lensLaunchRequest; attributes: T@"HRMPBLensLaunchInfo",&,D,N
// Property: getNrfCrashInfoRequest; attributes: T@"HRMPBNrfCrashInfoRequest",&,D,N
// Property: syncLensesRequest; attributes: T@"HRMPBLensSyncRequest",&,D,N
// Property: oauthSetUserAdditionalInfoRequest; attributes: T@"HRMPBUserAdditionalInfo",&,D,N
// Property: bleCentralPairRequest; attributes: T@"HRMPBBleCentralPairRequest",&,D,N
// Property: forgetNetworkRequest; attributes: T@"HRMPBForgetNetworkRequest",&,D,N
// Property: getSettingsForCategoryRequest; attributes: T@"HRMPBGetSettingsForCategoryRequest",&,D,N
// Property: setBatchSettingsRequest; attributes: T@"HRMPBSetBatchSettingsRequest",&,D,N
// Property: batteryPreservationModeRequest; attributes: T@"HRMPBBatteryPreservationModeRequest",&,D,N
// Property: getBatteryPreservationModeRequest; attributes: T@"HRMPBEmpty",&,D,N
// Property: cancelBackupRequest; attributes: T@"HRMPBCancelBackupParams",&,D,N
// Property: resumeBackupRequest; attributes: T@"HRMPBResumeBackupParams",&,D,N
// Property: availableLensesGetRequest; attributes: T@"HRMPBAvailableLensesGetRequest",&,D,N
// Property: openSocketConnectionRequest; attributes: T@"HRMPBOpenSocketConnectionRequest",&,D,N
// Property: setTouchEventRequest; attributes: T@"HRMPBTouchEventRequest",&,D,N
// Property: internetConnectivityCheckRequest; attributes: T@"HRMPBInternetConnectivityCheckRequest",&,D,N
// Property: getQcomStateRequest; attributes: T@"HRMPBGetQcomStateRequest",&,D,N
// Property: displayToggleRequest; attributes: T@"HRMPBDisplayToggleRequest",&,D,N
// Property: performFeatureActionRequest; attributes: T@"HRMPBFeatureActionRequest",&,D,N
// Property: setSardoCalibrationActionRequest; attributes: T@"HRMPBSetSardoCalibrationActionRequest",&,D,N
// Property: setSardoDataRequest; attributes: T@"HRMPBSardoDataRequest",&,D,N
// Property: setSardoMobileStatusRequest; attributes: T@"HRMPBSardoMobileStatusRequest",&,D,N
// Property: getSardoSpectaclesStatusRequest; attributes: T@"HRMPBGetSardoSpectaclesStatusRequest",&,D,N
// Property: getServiceInfoRequest; attributes: T@"HRMPBGetServiceInfoRequest",&,D,N
// Property: startWifiSubnetMonitorRequest; attributes: T@"HRMPBStartWifiSubnetMonitorRequest",&,D,N
// Property: acquireServiceAccessPointRequest; attributes: T@"HRMPBAcquireServiceAccessPointRequest",&,D,N
// Property: renewServiceAccessPointRequest; attributes: T@"HRMPBRenewServiceAccessPointRequest",&,D,N
// Property: releaseServiceAccessPointRequest; attributes: T@"HRMPBReleaseServiceAccessPointRequest",&,D,N
// Property: stopWifiSubnetMonitorRequest; attributes: T@"HRMPBStopWifiSubnetMonitorRequest",&,D,N
// Property: sendEnvelopeRequest; attributes: T@"HRMPBSendEnvelopeRequest",&,D,N
// Property: powerManagerRequest; attributes: T@"HRMPBPowerManagerRequest",&,D,N
// Property: getScreenStateRequest; attributes: T@"HRMPBScreenStateRequest",&,D,N
// Property: kauaiClearBugRequest; attributes: T@"HRMPBEmpty",&,D,N
// Property: kauaiGetCrashInfoRequest; attributes: T@"HRMPBKauaiGetCrashInfoRequest",&,D,N
// Property: temperatureRequest; attributes: T@"HRMPBTemperatureRequest",&,D,N

// +[HRMPBHermosaRpcRequest descriptor]
// Type encoding: @16@0:8
// Implementation: 0x106fb9b04

@end
