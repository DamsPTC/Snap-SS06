// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesHermosaRequestMessage
// Superclass: NSObject
// Address: 0x112b4df38

@interface SCSpectaclesHermosaRequestMessage

// Property: hermosaRequests; attributes: T@"NSArray",R,N,V_hermosaRequests
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesHermosaRequestMessage initWithHermosaRequests:]
// Type encoding: @24@0:8@16
// Implementation: 0x106faeac0

// -[SCSpectaclesHermosaRequestMessage hermosaRequests]
// Type encoding: @16@0:8
// Implementation: 0x106fb5fa8

// -[SCSpectaclesHermosaRequestMessage .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106fb5fb0

// +[SCSpectaclesHermosaRequestMessage turnBluetoothClassicOn:name:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106faeb34

// +[SCSpectaclesHermosaRequestMessage turnBluetoothClassicOff]
// Type encoding: @16@0:8
// Implementation: 0x106faeb3c

// +[SCSpectaclesHermosaRequestMessage turnWiFiOn:ssidPassword:countryCode:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106faeb44

// +[SCSpectaclesHermosaRequestMessage connectWifiTo:password:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106faed10

// +[SCSpectaclesHermosaRequestMessage turnWiFiOff]
// Type encoding: @16@0:8
// Implementation: 0x106faee68

// +[SCSpectaclesHermosaRequestMessage enableSpectaclesWiFiSettings:]
// Type encoding: @20@0:8B16
// Implementation: 0x106faef48

// +[SCSpectaclesHermosaRequestMessage forgetWiFiWithSSID:]
// Type encoding: @24@0:8@16
// Implementation: 0x106faf034

// +[SCSpectaclesHermosaRequestMessage ambaWatchdogKick]
// Type encoding: @16@0:8
// Implementation: 0x106faf128

// +[SCSpectaclesHermosaRequestMessage deviceRestart]
// Type encoding: @16@0:8
// Implementation: 0x106faf204

// +[SCSpectaclesHermosaRequestMessage deviceMinimalInfoRequest]
// Type encoding: @16@0:8
// Implementation: 0x106faf2e0

// +[SCSpectaclesHermosaRequestMessage serialNumberRequest]
// Type encoding: @16@0:8
// Implementation: 0x106faf55c

// +[SCSpectaclesHermosaRequestMessage deviceInfoUpdate]
// Type encoding: @16@0:8
// Implementation: 0x106faf63c

// +[SCSpectaclesHermosaRequestMessage deviceInfoUpdateLowBattery]
// Type encoding: @16@0:8
// Implementation: 0x106faf7f0

// +[SCSpectaclesHermosaRequestMessage deviceLeftBatteryStatus]
// Type encoding: @16@0:8
// Implementation: 0x106faf8f0

// +[SCSpectaclesHermosaRequestMessage deviceRightBatteryStatus]
// Type encoding: @16@0:8
// Implementation: 0x106fafa14

// +[SCSpectaclesHermosaRequestMessage deviceInfoInitialEnableHevc:enableLocation:forceBoot:]
// Type encoding: @32@0:8B16@20B28
// Implementation: 0x106fafb38

// +[SCSpectaclesHermosaRequestMessage deviceNameUpdateRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fafef8

// +[SCSpectaclesHermosaRequestMessage firmwareGetDigest]
// Type encoding: @16@0:8
// Implementation: 0x106faffec

// +[SCSpectaclesHermosaRequestMessage firmwareApplyPatch]
// Type encoding: @16@0:8
// Implementation: 0x106fafff4

// +[SCSpectaclesHermosaRequestMessage firmwareRevertBinary]
// Type encoding: @16@0:8
// Implementation: 0x106fafffc

// +[SCSpectaclesHermosaRequestMessage firmwareFlashUpdate]
// Type encoding: @16@0:8
// Implementation: 0x106fb0004

// +[SCSpectaclesHermosaRequestMessage firmwareGetScheduledUpdateStatus]
// Type encoding: @16@0:8
// Implementation: 0x106fb000c

// +[SCSpectaclesHermosaRequestMessage checkOTAUpdateAvailability:forceBoot:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x106fb0014

// +[SCSpectaclesHermosaRequestMessage installOTAUpdate:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fb0148

// +[SCSpectaclesHermosaRequestMessage setOTAAutoUpdateEnabled:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fb0264

// +[SCSpectaclesHermosaRequestMessage getOTAAutoUpdateEnabled]
// Type encoding: @16@0:8
// Implementation: 0x106fb036c

// +[SCSpectaclesHermosaRequestMessage cancelOTAUpdate]
// Type encoding: @16@0:8
// Implementation: 0x106fb044c

// +[SCSpectaclesHermosaRequestMessage firmwareScheduleUpdate:windowLength:targetVersion:targetDigest:]
// Type encoding: @48@0:8d16d24@32@40
// Implementation: 0x106fb052c

// +[SCSpectaclesHermosaRequestMessage requestCrashReport]
// Type encoding: @16@0:8
// Implementation: 0x106fb0534

// +[SCSpectaclesHermosaRequestMessage clearCrashReport]
// Type encoding: @16@0:8
// Implementation: 0x106fb0614

// +[SCSpectaclesHermosaRequestMessage prepShippingState]
// Type encoding: @16@0:8
// Implementation: 0x106fb06f4

// +[SCSpectaclesHermosaRequestMessage userAssociationRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fb06fc

// +[SCSpectaclesHermosaRequestMessage pairingTimerKick]
// Type encoding: @16@0:8
// Implementation: 0x106fb0704

// +[SCSpectaclesHermosaRequestMessage validatePairingWithUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fb070c

// +[SCSpectaclesHermosaRequestMessage exchangeKey:nonce:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106fb0800

// +[SCSpectaclesHermosaRequestMessage verifyPeer:tag:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106fb0940

// +[SCSpectaclesHermosaRequestMessage encryptionSetupNonce:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fb0a80

// +[SCSpectaclesHermosaRequestMessage accessToken:refreshToken:expirationTimeMs:userId:snapadsId:email:birthday:fideliusKeyProvider:scopes:]
// Type encoding: @88@0:8@16@24q32@40@48@56@64@72@80
// Implementation: 0x106fb0b80

// +[SCSpectaclesHermosaRequestMessage setPairingSessionId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fb1208

// +[SCSpectaclesHermosaRequestMessage getClientId]
// Type encoding: @16@0:8
// Implementation: 0x106fb1328

// +[SCSpectaclesHermosaRequestMessage authzCode:codeVerifier:redirectUri:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106fb1408

// +[SCSpectaclesHermosaRequestMessage getWifiApList]
// Type encoding: @16@0:8
// Implementation: 0x106fb1410

// +[SCSpectaclesHermosaRequestMessage setWifiApList:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fb1418

// +[SCSpectaclesHermosaRequestMessage shareWiFiCredentials:password:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106fb1420

// +[SCSpectaclesHermosaRequestMessage getLastCloudUploadTime]
// Type encoding: @16@0:8
// Implementation: 0x106fb159c

// +[SCSpectaclesHermosaRequestMessage exchangeNonce:channelType:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x106fb15a4

// +[SCSpectaclesHermosaRequestMessage unpair]
// Type encoding: @16@0:8
// Implementation: 0x106fb16e0

// +[SCSpectaclesHermosaRequestMessage postPairingCompletionEvent]
// Type encoding: @16@0:8
// Implementation: 0x106fb17c0

// +[SCSpectaclesHermosaRequestMessage getLocationEnabledWithForceBoot:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fb18a0

// +[SCSpectaclesHermosaRequestMessage setLocationEnabled:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fb1990

// +[SCSpectaclesHermosaRequestMessage setAudioLevel:]
// Type encoding: @24@0:8q16
// Implementation: 0x106fb1a7c

// +[SCSpectaclesHermosaRequestMessage getAudioLevelWithForceBoot:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fb1b44

// +[SCSpectaclesHermosaRequestMessage setBrightnessLevel:]
// Type encoding: @24@0:8q16
// Implementation: 0x106fb1c34

// +[SCSpectaclesHermosaRequestMessage getBrightnessLevelWithForceBoot:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fb1cfc

// +[SCSpectaclesHermosaRequestMessage setAutoBrightness:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fb1dec

// +[SCSpectaclesHermosaRequestMessage getAutoBrightness]
// Type encoding: @16@0:8
// Implementation: 0x106fb1ef4

// +[SCSpectaclesHermosaRequestMessage muteSystemSound:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fb1fd4

// +[SCSpectaclesHermosaRequestMessage getSystemSoundMutedStatus]
// Type encoding: @16@0:8
// Implementation: 0x106fb20dc

// +[SCSpectaclesHermosaRequestMessage playSound:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106fb21bc

// +[SCSpectaclesHermosaRequestMessage setUSBImportState:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fb22c0

// +[SCSpectaclesHermosaRequestMessage getUSBImportState]
// Type encoding: @16@0:8
// Implementation: 0x106fb22c8

// +[SCSpectaclesHermosaRequestMessage getUSBConnectionStatus]
// Type encoding: @16@0:8
// Implementation: 0x106fb22d0

// +[SCSpectaclesHermosaRequestMessage proxyStarted:password:port:ipv4:]
// Type encoding: @40@0:8@16@24i32i36
// Implementation: 0x106fb22d8

// +[SCSpectaclesHermosaRequestMessage proxyStatus:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106fb2428

// +[SCSpectaclesHermosaRequestMessage proxyManualStart]
// Type encoding: @16@0:8
// Implementation: 0x106fb252c

// +[SCSpectaclesHermosaRequestMessage proxyManualStop]
// Type encoding: @16@0:8
// Implementation: 0x106fb260c

// +[SCSpectaclesHermosaRequestMessage eventRegisterListenerRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fb26ec

// +[SCSpectaclesHermosaRequestMessage eventUnregisterListenerRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fb28c0

// +[SCSpectaclesHermosaRequestMessage mediaListRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fb29a0

// +[SCSpectaclesHermosaRequestMessage readRequestWithUUID:fileType:fileRange:]
// Type encoding: @48@0:8@16Q24{_NSRange=QQ}32
// Implementation: 0x106fb2ab0

// +[SCSpectaclesHermosaRequestMessage getGenericAssetWithFileIdentifier:range:]
// Type encoding: @40@0:8@16{_NSRange=QQ}24
// Implementation: 0x106fb2d88

// +[SCSpectaclesHermosaRequestMessage cancelBackupForIdentifiers:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fb2f24

// +[SCSpectaclesHermosaRequestMessage resumeBackup]
// Type encoding: @16@0:8
// Implementation: 0x106fb3004

// +[SCSpectaclesHermosaRequestMessage markTransferredRequestForContentUUID:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fb30e4

// +[SCSpectaclesHermosaRequestMessage deletionRequestForContentUUID:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fb3250

// +[SCSpectaclesHermosaRequestMessage setPhoneName:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fb33bc

// +[SCSpectaclesHermosaRequestMessage getWiFiStatusWithForceBoot:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fb3498

// +[SCSpectaclesHermosaRequestMessage getAvailableWiFiNetworksWithForceBoot:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fb3588

// +[SCSpectaclesHermosaRequestMessage getLowPowerMode]
// Type encoding: @16@0:8
// Implementation: 0x106fb3678

// +[SCSpectaclesHermosaRequestMessage setLowPowerMode:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fb3758

// +[SCSpectaclesHermosaRequestMessage getQuickSaveMode]
// Type encoding: @16@0:8
// Implementation: 0x106fb3860

// +[SCSpectaclesHermosaRequestMessage setQuickSaveMode:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fb3940

// +[SCSpectaclesHermosaRequestMessage performFactoryResetRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fb3a20

// +[SCSpectaclesHermosaRequestMessage clearAllContent]
// Type encoding: @16@0:8
// Implementation: 0x106fb3b00

// +[SCSpectaclesHermosaRequestMessage clearCacheRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fb3be0

// +[SCSpectaclesHermosaRequestMessage qcomDownRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fb3cc0

// +[SCSpectaclesHermosaRequestMessage qcomUpRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fb3dc4

// +[SCSpectaclesHermosaRequestMessage getQcomStateRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fb3ec8

// +[SCSpectaclesHermosaRequestMessage _pblocationStatusWithStatus:]
// Type encoding: i24@0:8Q16
// Implementation: 0x106fb3fa8

// +[SCSpectaclesHermosaRequestMessage _pbLocationWithCLLocation:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fb3fb8

// +[SCSpectaclesHermosaRequestMessage _pbLocationWithCLLocation:heading:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106fb3fc0

// +[SCSpectaclesHermosaRequestMessage provideLocationWithStatus:location:debugMessage:]
// Type encoding: @40@0:8Q16@24@32
// Implementation: 0x106fb4100

// +[SCSpectaclesHermosaRequestMessage provideLocationWithStatus:location:heading:debugMessage:]
// Type encoding: @48@0:8Q16@24@32@40
// Implementation: 0x106fb410c

// +[SCSpectaclesHermosaRequestMessage getAvailableLens:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fb42b4

// +[SCSpectaclesHermosaRequestMessage enableDeveloperMode:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fb43e0

// +[SCSpectaclesHermosaRequestMessage enableOemUnlocking:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fb44e8

// +[SCSpectaclesHermosaRequestMessage enableDemoMode]
// Type encoding: @16@0:8
// Implementation: 0x106fb45f0

// +[SCSpectaclesHermosaRequestMessage getDeveloperModeState]
// Type encoding: @16@0:8
// Implementation: 0x106fb46f4

// +[SCSpectaclesHermosaRequestMessage setAdbKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fb47d4

// +[SCSpectaclesHermosaRequestMessage getBatteryPreservationMode]
// Type encoding: @16@0:8
// Implementation: 0x106fb48f0

// +[SCSpectaclesHermosaRequestMessage setBatteryPreservationMode:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fb49d0

// +[SCSpectaclesHermosaRequestMessage sendShakeToReportData:description:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106fb4ae4

// +[SCSpectaclesHermosaRequestMessage activateFastboot]
// Type encoding: @16@0:8
// Implementation: 0x106fb4c18

// +[SCSpectaclesHermosaRequestMessage requestUserDeviceSecurityData]
// Type encoding: @16@0:8
// Implementation: 0x106fb4cf4

// +[SCSpectaclesHermosaRequestMessage setPhoneProximityEnable:lagunaId:passcode:]
// Type encoding: @36@0:8B16@20@28
// Implementation: 0x106fb4dd4

// +[SCSpectaclesHermosaRequestMessage _HRMPBLockOutEventFromSCSpectaclesLockOutEvent:]
// Type encoding: i24@0:8Q16
// Implementation: 0x106fb4f7c

// +[SCSpectaclesHermosaRequestMessage setLockOutEvent:lockOutTime:lagunaId:passcode:]
// Type encoding: @48@0:8Q16@24@32@40
// Implementation: 0x106fb4f9c

// +[SCSpectaclesHermosaRequestMessage setRequirePasscodeEnabled:lagunaId:passcode:]
// Type encoding: @36@0:8B16@20@28
// Implementation: 0x106fb51ac

// +[SCSpectaclesHermosaRequestMessage changePasscode:newPasscode:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106fb5330

// +[SCSpectaclesHermosaRequestMessage verifyPasscode:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fb548c

// +[SCSpectaclesHermosaRequestMessage performProximityUnlockWithPasscode:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fb55cc

// +[SCSpectaclesHermosaRequestMessage _setSettingRequestWithValue:forKey:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106fb570c

// +[SCSpectaclesHermosaRequestMessage setBatchSettingsRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fb59bc

// +[SCSpectaclesHermosaRequestMessage getSettingsInCategory:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106fb5c00

// +[SCSpectaclesHermosaRequestMessage _HRMPBSettingCategoryFromCategory:]
// Type encoding: i24@0:8Q16
// Implementation: 0x106fb5d18

// +[SCSpectaclesHermosaRequestMessage launchLensWithLensId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fb5d34

// +[SCSpectaclesHermosaRequestMessage syncLenses]
// Type encoding: @16@0:8
// Implementation: 0x106fb5e50

// +[SCSpectaclesHermosaRequestMessage firmwareUpdateUpload:startPosition:overwriteExistingFile:]
// Type encoding: @36@0:8@16q24B32
// Implementation: 0x106fb5f30

// +[SCSpectaclesHermosaRequestMessage firmwareGetCurrentVersion]
// Type encoding: @16@0:8
// Implementation: 0x106fb5f38

// +[SCSpectaclesHermosaRequestMessage firmwareApplyFullUpdate]
// Type encoding: @16@0:8
// Implementation: 0x106fb5f40

// +[SCSpectaclesHermosaRequestMessage firmwareGetChecksum]
// Type encoding: @16@0:8
// Implementation: 0x106fb5f48

// +[SCSpectaclesHermosaRequestMessage firmwwareRebootAndSwitchPartition]
// Type encoding: @16@0:8
// Implementation: 0x106fb5f50

// +[SCSpectaclesHermosaRequestMessage firmwareScheduleUpdate:targetDigest:isFullUpdate:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x106fb5f58

// +[SCSpectaclesHermosaRequestMessage firmwareCancelScheduledUpdate]
// Type encoding: @16@0:8
// Implementation: 0x106fb5f60

// +[SCSpectaclesHermosaRequestMessage debugLogFileListRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fb5f68

// +[SCSpectaclesHermosaRequestMessage debugLogFileRequestWithFilename:range:]
// Type encoding: @40@0:8@16{_NSRange=QQ}24
// Implementation: 0x106fb5f70

// +[SCSpectaclesHermosaRequestMessage analyticsFileListRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fb5f78

// +[SCSpectaclesHermosaRequestMessage analyticsFileGetWithFilename:range:]
// Type encoding: @40@0:8@16{_NSRange=QQ}24
// Implementation: 0x106fb5f80

// +[SCSpectaclesHermosaRequestMessage analyticsFileDeleteRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fb5f88

// +[SCSpectaclesHermosaRequestMessage enableLostMode]
// Type encoding: @16@0:8
// Implementation: 0x106fb5f90

// +[SCSpectaclesHermosaRequestMessage startFlightImuCalibrationRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fb5f98

// +[SCSpectaclesHermosaRequestMessage stopFlightImuCalibrationRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fb5fa0

@end
