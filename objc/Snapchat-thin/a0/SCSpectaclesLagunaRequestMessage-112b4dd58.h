// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesLagunaRequestMessage
// Superclass: NSObject
// Address: 0x112b4dd58

@interface SCSpectaclesLagunaRequestMessage

// Property: nrfRequest; attributes: T@"VLKNrfRequest",R,N,V_nrfRequest
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesLagunaRequestMessage initWithNrfRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fa1a54

// -[SCSpectaclesLagunaRequestMessage nrfRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fa3360

// -[SCSpectaclesLagunaRequestMessage .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106fa3368

// +[SCSpectaclesLagunaRequestMessage turnBluetoothClassicOn:name:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106fa1ac8

// +[SCSpectaclesLagunaRequestMessage turnBluetoothClassicOff]
// Type encoding: @16@0:8
// Implementation: 0x106fa1c14

// +[SCSpectaclesLagunaRequestMessage turnWiFiOn:ssidPassword:countryCode:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106fa1c88

// +[SCSpectaclesLagunaRequestMessage connectWifiTo:password:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106fa1da0

// +[SCSpectaclesLagunaRequestMessage turnWiFiOff]
// Type encoding: @16@0:8
// Implementation: 0x106fa1ef8

// +[SCSpectaclesLagunaRequestMessage ambaWatchdogKick]
// Type encoding: @16@0:8
// Implementation: 0x106fa1f6c

// +[SCSpectaclesLagunaRequestMessage deviceRestart]
// Type encoding: @16@0:8
// Implementation: 0x106fa1fe0

// +[SCSpectaclesLagunaRequestMessage deviceMinimalInfoRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fa2054

// +[SCSpectaclesLagunaRequestMessage serialNumberRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fa21fc

// +[SCSpectaclesLagunaRequestMessage deviceInfoUpdate]
// Type encoding: @16@0:8
// Implementation: 0x106fa2294

// +[SCSpectaclesLagunaRequestMessage deviceInfoUpdateLowBattery]
// Type encoding: @16@0:8
// Implementation: 0x106fa23fc

// +[SCSpectaclesLagunaRequestMessage deviceLeftBatteryStatus]
// Type encoding: @16@0:8
// Implementation: 0x106fa2494

// +[SCSpectaclesLagunaRequestMessage deviceRightBatteryStatus]
// Type encoding: @16@0:8
// Implementation: 0x106fa252c

// +[SCSpectaclesLagunaRequestMessage deviceInfoInitialEnableHevc:enableLocation:forceBoot:]
// Type encoding: @32@0:8B16@20B28
// Implementation: 0x106fa25c4

// +[SCSpectaclesLagunaRequestMessage deviceNameUpdateRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fa2890

// +[SCSpectaclesLagunaRequestMessage firmwareGetDigest]
// Type encoding: @16@0:8
// Implementation: 0x106fa291c

// +[SCSpectaclesLagunaRequestMessage firmwareApplyPatch]
// Type encoding: @16@0:8
// Implementation: 0x106fa29b4

// +[SCSpectaclesLagunaRequestMessage firmwareRevertBinary]
// Type encoding: @16@0:8
// Implementation: 0x106fa2a4c

// +[SCSpectaclesLagunaRequestMessage firmwareFlashUpdate]
// Type encoding: @16@0:8
// Implementation: 0x106fa2ae4

// +[SCSpectaclesLagunaRequestMessage firmwareGetScheduledUpdateStatus]
// Type encoding: @16@0:8
// Implementation: 0x106fa2b58

// +[SCSpectaclesLagunaRequestMessage firmwareScheduleUpdate:windowLength:targetVersion:targetDigest:]
// Type encoding: @48@0:8d16d24@32@40
// Implementation: 0x106fa2bcc

// +[SCSpectaclesLagunaRequestMessage checkOTAUpdateAvailability:forceBoot:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x106fa2d5c

// +[SCSpectaclesLagunaRequestMessage installOTAUpdate:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fa2d64

// +[SCSpectaclesLagunaRequestMessage setOTAAutoUpdateEnabled:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fa2d6c

// +[SCSpectaclesLagunaRequestMessage getOTAAutoUpdateEnabled]
// Type encoding: @16@0:8
// Implementation: 0x106fa2d74

// +[SCSpectaclesLagunaRequestMessage cancelOTAUpdate]
// Type encoding: @16@0:8
// Implementation: 0x106fa2d7c

// +[SCSpectaclesLagunaRequestMessage requestCrashReport]
// Type encoding: @16@0:8
// Implementation: 0x106fa2d84

// +[SCSpectaclesLagunaRequestMessage clearCrashReport]
// Type encoding: @16@0:8
// Implementation: 0x106fa2e1c

// +[SCSpectaclesLagunaRequestMessage clearAllContent]
// Type encoding: @16@0:8
// Implementation: 0x106fa2e90

// +[SCSpectaclesLagunaRequestMessage prepShippingState]
// Type encoding: @16@0:8
// Implementation: 0x106fa2f04

// +[SCSpectaclesLagunaRequestMessage userAssociationRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fa2f78

// +[SCSpectaclesLagunaRequestMessage pairingTimerKick]
// Type encoding: @16@0:8
// Implementation: 0x106fa3004

// +[SCSpectaclesLagunaRequestMessage validatePairingWithUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fa3078

// +[SCSpectaclesLagunaRequestMessage exchangeKey:nonce:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106fa3080

// +[SCSpectaclesLagunaRequestMessage verifyPeer:tag:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106fa3088

// +[SCSpectaclesLagunaRequestMessage encryptionSetupNonce:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fa3090

// +[SCSpectaclesLagunaRequestMessage accessToken:refreshToken:expirationTimeMs:userId:snapadsId:email:birthday:fideliusKeyProvider:scopes:]
// Type encoding: @88@0:8@16@24q32@40@48@56@64@72@80
// Implementation: 0x106fa3098

// +[SCSpectaclesLagunaRequestMessage setPairingSessionId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fa30a0

// +[SCSpectaclesLagunaRequestMessage getClientId]
// Type encoding: @16@0:8
// Implementation: 0x106fa30a8

// +[SCSpectaclesLagunaRequestMessage authzCode:codeVerifier:redirectUri:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106fa30b0

// +[SCSpectaclesLagunaRequestMessage getWifiApList]
// Type encoding: @16@0:8
// Implementation: 0x106fa30b8

// +[SCSpectaclesLagunaRequestMessage setWifiApList:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fa30c0

// +[SCSpectaclesLagunaRequestMessage shareWiFiCredentials:password:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106fa30c8

// +[SCSpectaclesLagunaRequestMessage getLastCloudUploadTime]
// Type encoding: @16@0:8
// Implementation: 0x106fa30d0

// +[SCSpectaclesLagunaRequestMessage getWiFiStatusWithForceBoot:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fa30d8

// +[SCSpectaclesLagunaRequestMessage getAvailableWiFiNetworksWithForceBoot:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fa30e0

// +[SCSpectaclesLagunaRequestMessage enableSpectaclesWiFiSettings:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fa30e8

// +[SCSpectaclesLagunaRequestMessage forgetWiFiWithSSID:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fa30f0

// +[SCSpectaclesLagunaRequestMessage exchangeNonce:channelType:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x106fa30f8

// +[SCSpectaclesLagunaRequestMessage unpair]
// Type encoding: @16@0:8
// Implementation: 0x106fa3100

// +[SCSpectaclesLagunaRequestMessage postPairingCompletionEvent]
// Type encoding: @16@0:8
// Implementation: 0x106fa3108

// +[SCSpectaclesLagunaRequestMessage getLocationEnabledWithForceBoot:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fa3110

// +[SCSpectaclesLagunaRequestMessage setLocationEnabled:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fa3118

// +[SCSpectaclesLagunaRequestMessage setAudioLevel:]
// Type encoding: @24@0:8q16
// Implementation: 0x106fa3120

// +[SCSpectaclesLagunaRequestMessage getAudioLevelWithForceBoot:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fa3128

// +[SCSpectaclesLagunaRequestMessage setBrightnessLevel:]
// Type encoding: @24@0:8q16
// Implementation: 0x106fa3130

// +[SCSpectaclesLagunaRequestMessage getBrightnessLevelWithForceBoot:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fa3138

// +[SCSpectaclesLagunaRequestMessage setAutoBrightness:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fa3140

// +[SCSpectaclesLagunaRequestMessage getAutoBrightness]
// Type encoding: @16@0:8
// Implementation: 0x106fa3148

// +[SCSpectaclesLagunaRequestMessage muteSystemSound:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fa3150

// +[SCSpectaclesLagunaRequestMessage getSystemSoundMutedStatus]
// Type encoding: @16@0:8
// Implementation: 0x106fa3158

// +[SCSpectaclesLagunaRequestMessage playSound:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106fa3160

// +[SCSpectaclesLagunaRequestMessage setUSBImportState:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fa3168

// +[SCSpectaclesLagunaRequestMessage getUSBImportState]
// Type encoding: @16@0:8
// Implementation: 0x106fa3170

// +[SCSpectaclesLagunaRequestMessage getUSBConnectionStatus]
// Type encoding: @16@0:8
// Implementation: 0x106fa3178

// +[SCSpectaclesLagunaRequestMessage proxyStarted:password:port:ipv4:]
// Type encoding: @40@0:8@16@24i32i36
// Implementation: 0x106fa3180

// +[SCSpectaclesLagunaRequestMessage proxyStatus:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106fa3188

// +[SCSpectaclesLagunaRequestMessage proxyManualStart]
// Type encoding: @16@0:8
// Implementation: 0x106fa3190

// +[SCSpectaclesLagunaRequestMessage proxyManualStop]
// Type encoding: @16@0:8
// Implementation: 0x106fa3198

// +[SCSpectaclesLagunaRequestMessage eventRegisterListenerRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fa31a0

// +[SCSpectaclesLagunaRequestMessage eventUnregisterListenerRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fa31a8

// +[SCSpectaclesLagunaRequestMessage mediaListRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fa31b0

// +[SCSpectaclesLagunaRequestMessage readRequestWithUUID:fileType:fileRange:]
// Type encoding: @48@0:8@16Q24{_NSRange=QQ}32
// Implementation: 0x106fa31b8

// +[SCSpectaclesLagunaRequestMessage markTransferredRequestForContentUUID:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fa31c0

// +[SCSpectaclesLagunaRequestMessage deletionRequestForContentUUID:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fa31c8

// +[SCSpectaclesLagunaRequestMessage getGenericAssetWithFileIdentifier:range:]
// Type encoding: @40@0:8@16{_NSRange=QQ}24
// Implementation: 0x106fa31d0

// +[SCSpectaclesLagunaRequestMessage cancelBackupForIdentifiers:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fa31d8

// +[SCSpectaclesLagunaRequestMessage resumeBackup]
// Type encoding: @16@0:8
// Implementation: 0x106fa31e0

// +[SCSpectaclesLagunaRequestMessage setPhoneName:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fa31e8

// +[SCSpectaclesLagunaRequestMessage getLowPowerMode]
// Type encoding: @16@0:8
// Implementation: 0x106fa31f0

// +[SCSpectaclesLagunaRequestMessage setLowPowerMode:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fa31f8

// +[SCSpectaclesLagunaRequestMessage provideLocationWithStatus:location:debugMessage:]
// Type encoding: @40@0:8Q16@24@32
// Implementation: 0x106fa3200

// +[SCSpectaclesLagunaRequestMessage provideLocationWithStatus:location:heading:debugMessage:]
// Type encoding: @48@0:8Q16@24@32@40
// Implementation: 0x106fa3208

// +[SCSpectaclesLagunaRequestMessage getQuickSaveMode]
// Type encoding: @16@0:8
// Implementation: 0x106fa3210

// +[SCSpectaclesLagunaRequestMessage setQuickSaveMode:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fa3218

// +[SCSpectaclesLagunaRequestMessage performFactoryResetRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fa3220

// +[SCSpectaclesLagunaRequestMessage clearCacheRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fa3228

// +[SCSpectaclesLagunaRequestMessage qcomDownRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fa3230

// +[SCSpectaclesLagunaRequestMessage qcomUpRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fa3238

// +[SCSpectaclesLagunaRequestMessage getQcomStateRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fa3240

// +[SCSpectaclesLagunaRequestMessage getAvailableLens:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fa3248

// +[SCSpectaclesLagunaRequestMessage enableDeveloperMode:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fa3250

// +[SCSpectaclesLagunaRequestMessage enableOemUnlocking:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fa3258

// +[SCSpectaclesLagunaRequestMessage enableDemoMode]
// Type encoding: @16@0:8
// Implementation: 0x106fa3260

// +[SCSpectaclesLagunaRequestMessage getDeveloperModeState]
// Type encoding: @16@0:8
// Implementation: 0x106fa3268

// +[SCSpectaclesLagunaRequestMessage setAdbKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fa3270

// +[SCSpectaclesLagunaRequestMessage getBatteryPreservationMode]
// Type encoding: @16@0:8
// Implementation: 0x106fa3278

// +[SCSpectaclesLagunaRequestMessage setBatteryPreservationMode:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fa3280

// +[SCSpectaclesLagunaRequestMessage sendShakeToReportData:description:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106fa3288

// +[SCSpectaclesLagunaRequestMessage activateFastboot]
// Type encoding: @16@0:8
// Implementation: 0x106fa3290

// +[SCSpectaclesLagunaRequestMessage requestUserDeviceSecurityData]
// Type encoding: @16@0:8
// Implementation: 0x106fa3298

// +[SCSpectaclesLagunaRequestMessage setPhoneProximityEnable:lagunaId:passcode:]
// Type encoding: @36@0:8B16@20@28
// Implementation: 0x106fa32a0

// +[SCSpectaclesLagunaRequestMessage setLockOutEvent:lockOutTime:lagunaId:passcode:]
// Type encoding: @48@0:8Q16@24@32@40
// Implementation: 0x106fa32a8

// +[SCSpectaclesLagunaRequestMessage setRequirePasscodeEnabled:lagunaId:passcode:]
// Type encoding: @36@0:8B16@20@28
// Implementation: 0x106fa32b0

// +[SCSpectaclesLagunaRequestMessage changePasscode:newPasscode:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106fa32b8

// +[SCSpectaclesLagunaRequestMessage verifyPasscode:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fa32c0

// +[SCSpectaclesLagunaRequestMessage performProximityUnlockWithPasscode:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fa32c8

// +[SCSpectaclesLagunaRequestMessage setBatchSettingsRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fa32d0

// +[SCSpectaclesLagunaRequestMessage getSettingsInCategory:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106fa32d8

// +[SCSpectaclesLagunaRequestMessage launchLensWithLensId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fa32e0

// +[SCSpectaclesLagunaRequestMessage syncLenses]
// Type encoding: @16@0:8
// Implementation: 0x106fa32e8

// +[SCSpectaclesLagunaRequestMessage firmwareUpdateUpload:startPosition:overwriteExistingFile:]
// Type encoding: @36@0:8@16q24B32
// Implementation: 0x106fa32f0

// +[SCSpectaclesLagunaRequestMessage firmwareGetChecksum]
// Type encoding: @16@0:8
// Implementation: 0x106fa32f8

// +[SCSpectaclesLagunaRequestMessage firmwareApplyFullUpdate]
// Type encoding: @16@0:8
// Implementation: 0x106fa3300

// +[SCSpectaclesLagunaRequestMessage firmwwareRebootAndSwitchPartition]
// Type encoding: @16@0:8
// Implementation: 0x106fa3308

// +[SCSpectaclesLagunaRequestMessage firmwareScheduleUpdate:targetDigest:isFullUpdate:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x106fa3310

// +[SCSpectaclesLagunaRequestMessage firmwareCancelScheduledUpdate]
// Type encoding: @16@0:8
// Implementation: 0x106fa3318

// +[SCSpectaclesLagunaRequestMessage debugLogFileListRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fa3320

// +[SCSpectaclesLagunaRequestMessage debugLogFileRequestWithFilename:range:]
// Type encoding: @40@0:8@16{_NSRange=QQ}24
// Implementation: 0x106fa3328

// +[SCSpectaclesLagunaRequestMessage analyticsFileListRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fa3330

// +[SCSpectaclesLagunaRequestMessage analyticsFileGetWithFilename:range:]
// Type encoding: @40@0:8@16{_NSRange=QQ}24
// Implementation: 0x106fa3338

// +[SCSpectaclesLagunaRequestMessage analyticsFileDeleteRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fa3340

// +[SCSpectaclesLagunaRequestMessage enableLostMode]
// Type encoding: @16@0:8
// Implementation: 0x106fa3348

// +[SCSpectaclesLagunaRequestMessage startFlightImuCalibrationRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fa3350

// +[SCSpectaclesLagunaRequestMessage stopFlightImuCalibrationRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fa3358

@end
