// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesMalibuRequestMessage
// Superclass: NSObject
// Address: 0x112b4dda8

@interface SCSpectaclesMalibuRequestMessage

// Property: rpcInvocations; attributes: T@"NSArray",R,N,V_rpcInvocations
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesMalibuRequestMessage initWithRpcInvocations:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fa3374

// -[SCSpectaclesMalibuRequestMessage rpcInvocations]
// Type encoding: @16@0:8
// Implementation: 0x106fa61e0

// -[SCSpectaclesMalibuRequestMessage .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106fa61e8

// +[SCSpectaclesMalibuRequestMessage turnBluetoothClassicOn:name:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106fa33e8

// +[SCSpectaclesMalibuRequestMessage turnBluetoothClassicOff]
// Type encoding: @16@0:8
// Implementation: 0x106fa3554

// +[SCSpectaclesMalibuRequestMessage turnWiFiOn:ssidPassword:countryCode:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106fa3630

// +[SCSpectaclesMalibuRequestMessage connectWifiTo:password:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106fa378c

// +[SCSpectaclesMalibuRequestMessage turnWiFiOff]
// Type encoding: @16@0:8
// Implementation: 0x106fa38b8

// +[SCSpectaclesMalibuRequestMessage ambaWatchdogKick]
// Type encoding: @16@0:8
// Implementation: 0x106fa3994

// +[SCSpectaclesMalibuRequestMessage deviceRestart]
// Type encoding: @16@0:8
// Implementation: 0x106fa3a70

// +[SCSpectaclesMalibuRequestMessage deviceMinimalInfoRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fa3b4c

// +[SCSpectaclesMalibuRequestMessage serialNumberRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fa3dfc

// +[SCSpectaclesMalibuRequestMessage deviceInfoUpdate]
// Type encoding: @16@0:8
// Implementation: 0x106fa3ed8

// +[SCSpectaclesMalibuRequestMessage deviceInfoUpdateLowBattery]
// Type encoding: @16@0:8
// Implementation: 0x106fa410c

// +[SCSpectaclesMalibuRequestMessage deviceLeftBatteryStatus]
// Type encoding: @16@0:8
// Implementation: 0x106fa423c

// +[SCSpectaclesMalibuRequestMessage deviceRightBatteryStatus]
// Type encoding: @16@0:8
// Implementation: 0x106fa433c

// +[SCSpectaclesMalibuRequestMessage deviceInfoInitialEnableHevc:enableLocation:forceBoot:]
// Type encoding: @32@0:8B16@20B28
// Implementation: 0x106fa443c

// +[SCSpectaclesMalibuRequestMessage deviceNameUpdateRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fa48b0

// +[SCSpectaclesMalibuRequestMessage firmwareGetDigest]
// Type encoding: @16@0:8
// Implementation: 0x106fa49b0

// +[SCSpectaclesMalibuRequestMessage firmwareApplyPatch]
// Type encoding: @16@0:8
// Implementation: 0x106fa4a8c

// +[SCSpectaclesMalibuRequestMessage firmwareRevertBinary]
// Type encoding: @16@0:8
// Implementation: 0x106fa4b68

// +[SCSpectaclesMalibuRequestMessage firmwareFlashUpdate]
// Type encoding: @16@0:8
// Implementation: 0x106fa4c44

// +[SCSpectaclesMalibuRequestMessage firmwareGetScheduledUpdateStatus]
// Type encoding: @16@0:8
// Implementation: 0x106fa4d2c

// +[SCSpectaclesMalibuRequestMessage firmwareScheduleUpdate:windowLength:targetVersion:targetDigest:]
// Type encoding: @48@0:8d16d24@32@40
// Implementation: 0x106fa4e08

// +[SCSpectaclesMalibuRequestMessage checkOTAUpdateAvailability:forceBoot:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x106fa4f90

// +[SCSpectaclesMalibuRequestMessage installOTAUpdate:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fa4f98

// +[SCSpectaclesMalibuRequestMessage setOTAAutoUpdateEnabled:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fa4fa0

// +[SCSpectaclesMalibuRequestMessage getOTAAutoUpdateEnabled]
// Type encoding: @16@0:8
// Implementation: 0x106fa4fa8

// +[SCSpectaclesMalibuRequestMessage cancelOTAUpdate]
// Type encoding: @16@0:8
// Implementation: 0x106fa4fb0

// +[SCSpectaclesMalibuRequestMessage requestCrashReport]
// Type encoding: @16@0:8
// Implementation: 0x106fa4fb8

// +[SCSpectaclesMalibuRequestMessage clearCrashReport]
// Type encoding: @16@0:8
// Implementation: 0x106fa5094

// +[SCSpectaclesMalibuRequestMessage clearAllContent]
// Type encoding: @16@0:8
// Implementation: 0x106fa5170

// +[SCSpectaclesMalibuRequestMessage prepShippingState]
// Type encoding: @16@0:8
// Implementation: 0x106fa524c

// +[SCSpectaclesMalibuRequestMessage userAssociationRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fa5334

// +[SCSpectaclesMalibuRequestMessage pairingTimerKick]
// Type encoding: @16@0:8
// Implementation: 0x106fa5434

// +[SCSpectaclesMalibuRequestMessage validatePairingWithUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fa5510

// +[SCSpectaclesMalibuRequestMessage exchangeKey:nonce:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106fa5518

// +[SCSpectaclesMalibuRequestMessage verifyPeer:tag:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106fa5638

// +[SCSpectaclesMalibuRequestMessage encryptionSetupNonce:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fa5758

// +[SCSpectaclesMalibuRequestMessage accessToken:refreshToken:expirationTimeMs:userId:snapadsId:email:birthday:fideliusKeyProvider:scopes:]
// Type encoding: @88@0:8@16@24q32@40@48@56@64@72@80
// Implementation: 0x106fa5760

// +[SCSpectaclesMalibuRequestMessage setPairingSessionId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fa5768

// +[SCSpectaclesMalibuRequestMessage getClientId]
// Type encoding: @16@0:8
// Implementation: 0x106fa5770

// +[SCSpectaclesMalibuRequestMessage authzCode:codeVerifier:redirectUri:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106fa584c

// +[SCSpectaclesMalibuRequestMessage getWifiApList]
// Type encoding: @16@0:8
// Implementation: 0x106fa5994

// +[SCSpectaclesMalibuRequestMessage _convertWifiAPState:]
// Type encoding: i24@0:8q16
// Implementation: 0x106fa5a70

// +[SCSpectaclesMalibuRequestMessage setWifiApList:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fa5a80

// +[SCSpectaclesMalibuRequestMessage shareWiFiCredentials:password:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106fa5ca8

// +[SCSpectaclesMalibuRequestMessage getLastCloudUploadTime]
// Type encoding: @16@0:8
// Implementation: 0x106fa5cb0

// +[SCSpectaclesMalibuRequestMessage getWiFiStatusWithForceBoot:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fa5d8c

// +[SCSpectaclesMalibuRequestMessage getAvailableWiFiNetworksWithForceBoot:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fa5d94

// +[SCSpectaclesMalibuRequestMessage enableSpectaclesWiFiSettings:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fa5d9c

// +[SCSpectaclesMalibuRequestMessage forgetWiFiWithSSID:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fa5da4

// +[SCSpectaclesMalibuRequestMessage exchangeNonce:channelType:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x106fa5dac

// +[SCSpectaclesMalibuRequestMessage unpair]
// Type encoding: @16@0:8
// Implementation: 0x106fa5eac

// +[SCSpectaclesMalibuRequestMessage postPairingCompletionEvent]
// Type encoding: @16@0:8
// Implementation: 0x106fa5f88

// +[SCSpectaclesMalibuRequestMessage getLocationEnabledWithForceBoot:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fa5f90

// +[SCSpectaclesMalibuRequestMessage setLocationEnabled:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fa5f98

// +[SCSpectaclesMalibuRequestMessage setAudioLevel:]
// Type encoding: @24@0:8q16
// Implementation: 0x106fa5fa0

// +[SCSpectaclesMalibuRequestMessage getAudioLevelWithForceBoot:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fa5fa8

// +[SCSpectaclesMalibuRequestMessage setBrightnessLevel:]
// Type encoding: @24@0:8q16
// Implementation: 0x106fa5fb0

// +[SCSpectaclesMalibuRequestMessage getBrightnessLevelWithForceBoot:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fa5fb8

// +[SCSpectaclesMalibuRequestMessage setAutoBrightness:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fa5fc0

// +[SCSpectaclesMalibuRequestMessage getAutoBrightness]
// Type encoding: @16@0:8
// Implementation: 0x106fa5fc8

// +[SCSpectaclesMalibuRequestMessage muteSystemSound:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fa5fd0

// +[SCSpectaclesMalibuRequestMessage getSystemSoundMutedStatus]
// Type encoding: @16@0:8
// Implementation: 0x106fa5fd8

// +[SCSpectaclesMalibuRequestMessage playSound:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106fa5fe0

// +[SCSpectaclesMalibuRequestMessage setUSBImportState:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fa5fe8

// +[SCSpectaclesMalibuRequestMessage getUSBImportState]
// Type encoding: @16@0:8
// Implementation: 0x106fa5ff0

// +[SCSpectaclesMalibuRequestMessage getUSBConnectionStatus]
// Type encoding: @16@0:8
// Implementation: 0x106fa5ff8

// +[SCSpectaclesMalibuRequestMessage proxyStarted:password:port:ipv4:]
// Type encoding: @40@0:8@16@24i32i36
// Implementation: 0x106fa6000

// +[SCSpectaclesMalibuRequestMessage proxyStatus:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106fa6008

// +[SCSpectaclesMalibuRequestMessage proxyManualStart]
// Type encoding: @16@0:8
// Implementation: 0x106fa6010

// +[SCSpectaclesMalibuRequestMessage proxyManualStop]
// Type encoding: @16@0:8
// Implementation: 0x106fa6018

// +[SCSpectaclesMalibuRequestMessage eventRegisterListenerRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fa6020

// +[SCSpectaclesMalibuRequestMessage eventUnregisterListenerRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fa6028

// +[SCSpectaclesMalibuRequestMessage mediaListRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fa6030

// +[SCSpectaclesMalibuRequestMessage readRequestWithUUID:fileType:fileRange:]
// Type encoding: @48@0:8@16Q24{_NSRange=QQ}32
// Implementation: 0x106fa6038

// +[SCSpectaclesMalibuRequestMessage markTransferredRequestForContentUUID:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fa6040

// +[SCSpectaclesMalibuRequestMessage deletionRequestForContentUUID:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fa6048

// +[SCSpectaclesMalibuRequestMessage getGenericAssetWithFileIdentifier:range:]
// Type encoding: @40@0:8@16{_NSRange=QQ}24
// Implementation: 0x106fa6050

// +[SCSpectaclesMalibuRequestMessage cancelBackupForIdentifiers:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fa6058

// +[SCSpectaclesMalibuRequestMessage resumeBackup]
// Type encoding: @16@0:8
// Implementation: 0x106fa6060

// +[SCSpectaclesMalibuRequestMessage setPhoneName:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fa6068

// +[SCSpectaclesMalibuRequestMessage getLowPowerMode]
// Type encoding: @16@0:8
// Implementation: 0x106fa6070

// +[SCSpectaclesMalibuRequestMessage setLowPowerMode:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fa6078

// +[SCSpectaclesMalibuRequestMessage provideLocationWithStatus:location:debugMessage:]
// Type encoding: @40@0:8Q16@24@32
// Implementation: 0x106fa6080

// +[SCSpectaclesMalibuRequestMessage provideLocationWithStatus:location:heading:debugMessage:]
// Type encoding: @48@0:8Q16@24@32@40
// Implementation: 0x106fa6088

// +[SCSpectaclesMalibuRequestMessage getQuickSaveMode]
// Type encoding: @16@0:8
// Implementation: 0x106fa6090

// +[SCSpectaclesMalibuRequestMessage setQuickSaveMode:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fa6098

// +[SCSpectaclesMalibuRequestMessage performFactoryResetRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fa60a0

// +[SCSpectaclesMalibuRequestMessage clearCacheRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fa60a8

// +[SCSpectaclesMalibuRequestMessage qcomDownRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fa60b0

// +[SCSpectaclesMalibuRequestMessage qcomUpRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fa60b8

// +[SCSpectaclesMalibuRequestMessage getQcomStateRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fa60c0

// +[SCSpectaclesMalibuRequestMessage getAvailableLens:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fa60c8

// +[SCSpectaclesMalibuRequestMessage enableDeveloperMode:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fa60d0

// +[SCSpectaclesMalibuRequestMessage enableOemUnlocking:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fa60d8

// +[SCSpectaclesMalibuRequestMessage enableDemoMode]
// Type encoding: @16@0:8
// Implementation: 0x106fa60e0

// +[SCSpectaclesMalibuRequestMessage getDeveloperModeState]
// Type encoding: @16@0:8
// Implementation: 0x106fa60e8

// +[SCSpectaclesMalibuRequestMessage setAdbKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fa60f0

// +[SCSpectaclesMalibuRequestMessage getBatteryPreservationMode]
// Type encoding: @16@0:8
// Implementation: 0x106fa60f8

// +[SCSpectaclesMalibuRequestMessage setBatteryPreservationMode:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fa6100

// +[SCSpectaclesMalibuRequestMessage sendShakeToReportData:description:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106fa6108

// +[SCSpectaclesMalibuRequestMessage activateFastboot]
// Type encoding: @16@0:8
// Implementation: 0x106fa6110

// +[SCSpectaclesMalibuRequestMessage requestUserDeviceSecurityData]
// Type encoding: @16@0:8
// Implementation: 0x106fa6118

// +[SCSpectaclesMalibuRequestMessage setPhoneProximityEnable:lagunaId:passcode:]
// Type encoding: @36@0:8B16@20@28
// Implementation: 0x106fa6120

// +[SCSpectaclesMalibuRequestMessage setLockOutEvent:lockOutTime:lagunaId:passcode:]
// Type encoding: @48@0:8Q16@24@32@40
// Implementation: 0x106fa6128

// +[SCSpectaclesMalibuRequestMessage setRequirePasscodeEnabled:lagunaId:passcode:]
// Type encoding: @36@0:8B16@20@28
// Implementation: 0x106fa6130

// +[SCSpectaclesMalibuRequestMessage changePasscode:newPasscode:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106fa6138

// +[SCSpectaclesMalibuRequestMessage verifyPasscode:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fa6140

// +[SCSpectaclesMalibuRequestMessage performProximityUnlockWithPasscode:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fa6148

// +[SCSpectaclesMalibuRequestMessage setBatchSettingsRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fa6150

// +[SCSpectaclesMalibuRequestMessage getSettingsInCategory:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106fa6158

// +[SCSpectaclesMalibuRequestMessage launchLensWithLensId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fa6160

// +[SCSpectaclesMalibuRequestMessage syncLenses]
// Type encoding: @16@0:8
// Implementation: 0x106fa6168

// +[SCSpectaclesMalibuRequestMessage firmwareUpdateUpload:startPosition:overwriteExistingFile:]
// Type encoding: @36@0:8@16q24B32
// Implementation: 0x106fa6170

// +[SCSpectaclesMalibuRequestMessage firmwareGetChecksum]
// Type encoding: @16@0:8
// Implementation: 0x106fa6178

// +[SCSpectaclesMalibuRequestMessage firmwareApplyFullUpdate]
// Type encoding: @16@0:8
// Implementation: 0x106fa6180

// +[SCSpectaclesMalibuRequestMessage firmwwareRebootAndSwitchPartition]
// Type encoding: @16@0:8
// Implementation: 0x106fa6188

// +[SCSpectaclesMalibuRequestMessage firmwareScheduleUpdate:targetDigest:isFullUpdate:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x106fa6190

// +[SCSpectaclesMalibuRequestMessage firmwareCancelScheduledUpdate]
// Type encoding: @16@0:8
// Implementation: 0x106fa6198

// +[SCSpectaclesMalibuRequestMessage debugLogFileListRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fa61a0

// +[SCSpectaclesMalibuRequestMessage debugLogFileRequestWithFilename:range:]
// Type encoding: @40@0:8@16{_NSRange=QQ}24
// Implementation: 0x106fa61a8

// +[SCSpectaclesMalibuRequestMessage analyticsFileListRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fa61b0

// +[SCSpectaclesMalibuRequestMessage analyticsFileGetWithFilename:range:]
// Type encoding: @40@0:8@16{_NSRange=QQ}24
// Implementation: 0x106fa61b8

// +[SCSpectaclesMalibuRequestMessage analyticsFileDeleteRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fa61c0

// +[SCSpectaclesMalibuRequestMessage enableLostMode]
// Type encoding: @16@0:8
// Implementation: 0x106fa61c8

// +[SCSpectaclesMalibuRequestMessage startFlightImuCalibrationRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fa61d0

// +[SCSpectaclesMalibuRequestMessage stopFlightImuCalibrationRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fa61d8

@end
