// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesCheeriosRequestMessage
// Superclass: NSObject
// Address: 0x112b4dee8

@interface SCSpectaclesCheeriosRequestMessage

// Property: cheeriosRpcRequests; attributes: T@"NSArray",R,C,N,V_cheeriosRpcRequests
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesCheeriosRequestMessage initWithCheeriosRequests:]
// Type encoding: @24@0:8@16
// Implementation: 0x106faa818

// -[SCSpectaclesCheeriosRequestMessage cheeriosRpcRequests]
// Type encoding: @16@0:8
// Implementation: 0x106faeaac

// -[SCSpectaclesCheeriosRequestMessage .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106faeab4

// +[SCSpectaclesCheeriosRequestMessage turnBluetoothClassicOn:name:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106faa890

// +[SCSpectaclesCheeriosRequestMessage turnBluetoothClassicOff]
// Type encoding: @16@0:8
// Implementation: 0x106faa898

// +[SCSpectaclesCheeriosRequestMessage turnWiFiOn:ssidPassword:countryCode:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106faa8a0

// +[SCSpectaclesCheeriosRequestMessage connectWifiTo:password:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106faaa30

// +[SCSpectaclesCheeriosRequestMessage turnWiFiOff]
// Type encoding: @16@0:8
// Implementation: 0x106faaa38

// +[SCSpectaclesCheeriosRequestMessage ambaWatchdogKick]
// Type encoding: @16@0:8
// Implementation: 0x106faab18

// +[SCSpectaclesCheeriosRequestMessage deviceRestart]
// Type encoding: @16@0:8
// Implementation: 0x106faabf8

// +[SCSpectaclesCheeriosRequestMessage deviceMinimalInfoRequest]
// Type encoding: @16@0:8
// Implementation: 0x106faacd8

// +[SCSpectaclesCheeriosRequestMessage serialNumberRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fab02c

// +[SCSpectaclesCheeriosRequestMessage deviceInfoUpdate]
// Type encoding: @16@0:8
// Implementation: 0x106fab10c

// +[SCSpectaclesCheeriosRequestMessage deviceInfoUpdateLowBattery]
// Type encoding: @16@0:8
// Implementation: 0x106fab2d4

// +[SCSpectaclesCheeriosRequestMessage deviceLeftBatteryStatus]
// Type encoding: @16@0:8
// Implementation: 0x106fab3b4

// +[SCSpectaclesCheeriosRequestMessage deviceRightBatteryStatus]
// Type encoding: @16@0:8
// Implementation: 0x106fab3bc

// +[SCSpectaclesCheeriosRequestMessage deviceInfoInitialEnableHevc:enableLocation:forceBoot:]
// Type encoding: @32@0:8B16@20B28
// Implementation: 0x106fab3c4

// +[SCSpectaclesCheeriosRequestMessage deviceNameUpdateRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fab648

// +[SCSpectaclesCheeriosRequestMessage firmwareGetDigest]
// Type encoding: @16@0:8
// Implementation: 0x106fab73c

// +[SCSpectaclesCheeriosRequestMessage firmwareRevertBinary]
// Type encoding: @16@0:8
// Implementation: 0x106fab744

// +[SCSpectaclesCheeriosRequestMessage firmwareFlashUpdate]
// Type encoding: @16@0:8
// Implementation: 0x106fab74c

// +[SCSpectaclesCheeriosRequestMessage checkOTAUpdateAvailability:forceBoot:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x106fab754

// +[SCSpectaclesCheeriosRequestMessage installOTAUpdate:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fab75c

// +[SCSpectaclesCheeriosRequestMessage setOTAAutoUpdateEnabled:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fab764

// +[SCSpectaclesCheeriosRequestMessage getOTAAutoUpdateEnabled]
// Type encoding: @16@0:8
// Implementation: 0x106fab76c

// +[SCSpectaclesCheeriosRequestMessage cancelOTAUpdate]
// Type encoding: @16@0:8
// Implementation: 0x106fab774

// +[SCSpectaclesCheeriosRequestMessage requestCrashReport]
// Type encoding: @16@0:8
// Implementation: 0x106fab77c

// +[SCSpectaclesCheeriosRequestMessage clearCrashReport]
// Type encoding: @16@0:8
// Implementation: 0x106fab784

// +[SCSpectaclesCheeriosRequestMessage clearAllContent]
// Type encoding: @16@0:8
// Implementation: 0x106fab78c

// +[SCSpectaclesCheeriosRequestMessage prepShippingState]
// Type encoding: @16@0:8
// Implementation: 0x106fab86c

// +[SCSpectaclesCheeriosRequestMessage userAssociationRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fab874

// +[SCSpectaclesCheeriosRequestMessage pairingTimerKick]
// Type encoding: @16@0:8
// Implementation: 0x106fab87c

// +[SCSpectaclesCheeriosRequestMessage validatePairingWithUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fab884

// +[SCSpectaclesCheeriosRequestMessage exchangeKey:nonce:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106fab978

// +[SCSpectaclesCheeriosRequestMessage verifyPeer:tag:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106fabaac

// +[SCSpectaclesCheeriosRequestMessage encryptionSetupNonce:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fabbe0

// +[SCSpectaclesCheeriosRequestMessage accessToken:refreshToken:expirationTimeMs:userId:snapadsId:email:birthday:fideliusKeyProvider:scopes:]
// Type encoding: @88@0:8@16@24q32@40@48@56@64@72@80
// Implementation: 0x106fabcd4

// +[SCSpectaclesCheeriosRequestMessage setPairingSessionId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fabcdc

// +[SCSpectaclesCheeriosRequestMessage getClientId]
// Type encoding: @16@0:8
// Implementation: 0x106fabce4

// +[SCSpectaclesCheeriosRequestMessage authzCode:codeVerifier:redirectUri:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106fabcec

// +[SCSpectaclesCheeriosRequestMessage getWifiApList]
// Type encoding: @16@0:8
// Implementation: 0x106fabcf4

// +[SCSpectaclesCheeriosRequestMessage setWifiApList:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fabcfc

// +[SCSpectaclesCheeriosRequestMessage shareWiFiCredentials:password:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106fabd04

// +[SCSpectaclesCheeriosRequestMessage getLastCloudUploadTime]
// Type encoding: @16@0:8
// Implementation: 0x106fabd0c

// +[SCSpectaclesCheeriosRequestMessage getWiFiStatusWithForceBoot:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fabd14

// +[SCSpectaclesCheeriosRequestMessage getAvailableWiFiNetworksWithForceBoot:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fabd1c

// +[SCSpectaclesCheeriosRequestMessage enableSpectaclesWiFiSettings:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fabd24

// +[SCSpectaclesCheeriosRequestMessage forgetWiFiWithSSID:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fabe10

// +[SCSpectaclesCheeriosRequestMessage exchangeNonce:channelType:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x106fabe18

// +[SCSpectaclesCheeriosRequestMessage unpair]
// Type encoding: @16@0:8
// Implementation: 0x106fabe20

// +[SCSpectaclesCheeriosRequestMessage postPairingCompletionEvent]
// Type encoding: @16@0:8
// Implementation: 0x106fabf00

// +[SCSpectaclesCheeriosRequestMessage getLocationEnabledWithForceBoot:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fabf08

// +[SCSpectaclesCheeriosRequestMessage setLocationEnabled:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fabf10

// +[SCSpectaclesCheeriosRequestMessage setAudioLevel:]
// Type encoding: @24@0:8q16
// Implementation: 0x106fabf18

// +[SCSpectaclesCheeriosRequestMessage getAudioLevelWithForceBoot:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fabf20

// +[SCSpectaclesCheeriosRequestMessage setBrightnessLevel:]
// Type encoding: @24@0:8q16
// Implementation: 0x106fabf28

// +[SCSpectaclesCheeriosRequestMessage getBrightnessLevelWithForceBoot:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fabf30

// +[SCSpectaclesCheeriosRequestMessage setAutoBrightness:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fabf38

// +[SCSpectaclesCheeriosRequestMessage getAutoBrightness]
// Type encoding: @16@0:8
// Implementation: 0x106fabf40

// +[SCSpectaclesCheeriosRequestMessage muteSystemSound:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fabf48

// +[SCSpectaclesCheeriosRequestMessage getSystemSoundMutedStatus]
// Type encoding: @16@0:8
// Implementation: 0x106fabf50

// +[SCSpectaclesCheeriosRequestMessage playSound:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106fabf58

// +[SCSpectaclesCheeriosRequestMessage setUSBImportState:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fabf60

// +[SCSpectaclesCheeriosRequestMessage getUSBImportState]
// Type encoding: @16@0:8
// Implementation: 0x106fac028

// +[SCSpectaclesCheeriosRequestMessage getUSBConnectionStatus]
// Type encoding: @16@0:8
// Implementation: 0x106fac108

// +[SCSpectaclesCheeriosRequestMessage proxyStarted:password:port:ipv4:]
// Type encoding: @40@0:8@16@24i32i36
// Implementation: 0x106fac1e8

// +[SCSpectaclesCheeriosRequestMessage proxyStatus:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106fac1f0

// +[SCSpectaclesCheeriosRequestMessage proxyManualStart]
// Type encoding: @16@0:8
// Implementation: 0x106fac1f8

// +[SCSpectaclesCheeriosRequestMessage proxyManualStop]
// Type encoding: @16@0:8
// Implementation: 0x106fac200

// +[SCSpectaclesCheeriosRequestMessage eventRegisterListenerRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fac208

// +[SCSpectaclesCheeriosRequestMessage eventUnregisterListenerRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fac210

// +[SCSpectaclesCheeriosRequestMessage mediaListRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fac218

// +[SCSpectaclesCheeriosRequestMessage readRequestWithUUID:fileType:fileRange:]
// Type encoding: @48@0:8@16Q24{_NSRange=QQ}32
// Implementation: 0x106fac31c

// +[SCSpectaclesCheeriosRequestMessage markTransferredRequestForContentUUID:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fac5e4

// +[SCSpectaclesCheeriosRequestMessage deletionRequestForContentUUID:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fac744

// +[SCSpectaclesCheeriosRequestMessage getGenericAssetWithFileIdentifier:range:]
// Type encoding: @40@0:8@16{_NSRange=QQ}24
// Implementation: 0x106fac8a4

// +[SCSpectaclesCheeriosRequestMessage cancelBackupForIdentifiers:]
// Type encoding: @24@0:8@16
// Implementation: 0x106faca34

// +[SCSpectaclesCheeriosRequestMessage resumeBackup]
// Type encoding: @16@0:8
// Implementation: 0x106faca3c

// +[SCSpectaclesCheeriosRequestMessage setPhoneName:]
// Type encoding: @24@0:8@16
// Implementation: 0x106faca44

// +[SCSpectaclesCheeriosRequestMessage getLowPowerMode]
// Type encoding: @16@0:8
// Implementation: 0x106faca4c

// +[SCSpectaclesCheeriosRequestMessage setLowPowerMode:]
// Type encoding: @20@0:8B16
// Implementation: 0x106faca54

// +[SCSpectaclesCheeriosRequestMessage provideLocationWithStatus:location:debugMessage:]
// Type encoding: @40@0:8Q16@24@32
// Implementation: 0x106faca5c

// +[SCSpectaclesCheeriosRequestMessage provideLocationWithStatus:location:heading:debugMessage:]
// Type encoding: @48@0:8Q16@24@32@40
// Implementation: 0x106faca64

// +[SCSpectaclesCheeriosRequestMessage getQuickSaveMode]
// Type encoding: @16@0:8
// Implementation: 0x106faca6c

// +[SCSpectaclesCheeriosRequestMessage setQuickSaveMode:]
// Type encoding: @20@0:8B16
// Implementation: 0x106faca74

// +[SCSpectaclesCheeriosRequestMessage performFactoryResetRequest]
// Type encoding: @16@0:8
// Implementation: 0x106faca7c

// +[SCSpectaclesCheeriosRequestMessage clearCacheRequest]
// Type encoding: @16@0:8
// Implementation: 0x106faca84

// +[SCSpectaclesCheeriosRequestMessage qcomDownRequest]
// Type encoding: @16@0:8
// Implementation: 0x106faca8c

// +[SCSpectaclesCheeriosRequestMessage qcomUpRequest]
// Type encoding: @16@0:8
// Implementation: 0x106faca94

// +[SCSpectaclesCheeriosRequestMessage getQcomStateRequest]
// Type encoding: @16@0:8
// Implementation: 0x106faca9c

// +[SCSpectaclesCheeriosRequestMessage getAvailableLens:]
// Type encoding: @20@0:8B16
// Implementation: 0x106facaa4

// +[SCSpectaclesCheeriosRequestMessage enableDeveloperMode:]
// Type encoding: @20@0:8B16
// Implementation: 0x106facaac

// +[SCSpectaclesCheeriosRequestMessage enableOemUnlocking:]
// Type encoding: @20@0:8B16
// Implementation: 0x106facb74

// +[SCSpectaclesCheeriosRequestMessage enableDemoMode]
// Type encoding: @16@0:8
// Implementation: 0x106facb7c

// +[SCSpectaclesCheeriosRequestMessage getDeveloperModeState]
// Type encoding: @16@0:8
// Implementation: 0x106facb84

// +[SCSpectaclesCheeriosRequestMessage setAdbKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x106facc64

// +[SCSpectaclesCheeriosRequestMessage getBatteryPreservationMode]
// Type encoding: @16@0:8
// Implementation: 0x106facc6c

// +[SCSpectaclesCheeriosRequestMessage setBatteryPreservationMode:]
// Type encoding: @20@0:8B16
// Implementation: 0x106facc74

// +[SCSpectaclesCheeriosRequestMessage sendShakeToReportData:description:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106facc7c

// +[SCSpectaclesCheeriosRequestMessage activateFastboot]
// Type encoding: @16@0:8
// Implementation: 0x106facc84

// +[SCSpectaclesCheeriosRequestMessage requestUserDeviceSecurityData]
// Type encoding: @16@0:8
// Implementation: 0x106facc8c

// +[SCSpectaclesCheeriosRequestMessage setPhoneProximityEnable:lagunaId:passcode:]
// Type encoding: @36@0:8B16@20@28
// Implementation: 0x106facc94

// +[SCSpectaclesCheeriosRequestMessage setLockOutEvent:lockOutTime:lagunaId:passcode:]
// Type encoding: @48@0:8Q16@24@32@40
// Implementation: 0x106facc9c

// +[SCSpectaclesCheeriosRequestMessage setRequirePasscodeEnabled:lagunaId:passcode:]
// Type encoding: @36@0:8B16@20@28
// Implementation: 0x106facca4

// +[SCSpectaclesCheeriosRequestMessage changePasscode:newPasscode:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106faccac

// +[SCSpectaclesCheeriosRequestMessage verifyPasscode:]
// Type encoding: @24@0:8@16
// Implementation: 0x106faccb4

// +[SCSpectaclesCheeriosRequestMessage performProximityUnlockWithPasscode:]
// Type encoding: @24@0:8@16
// Implementation: 0x106faccbc

// +[SCSpectaclesCheeriosRequestMessage setBatchSettingsRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x106faccc4

// +[SCSpectaclesCheeriosRequestMessage getSettingsInCategory:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106facccc

// +[SCSpectaclesCheeriosRequestMessage abortFlightRequest]
// Type encoding: @16@0:8
// Implementation: 0x106faccd4

// +[SCSpectaclesCheeriosRequestMessage getFlightMode]
// Type encoding: @16@0:8
// Implementation: 0x106facdb4

// +[SCSpectaclesCheeriosRequestMessage getFlightStatus]
// Type encoding: @16@0:8
// Implementation: 0x106face94

// +[SCSpectaclesCheeriosRequestMessage getFlightStateError]
// Type encoding: @16@0:8
// Implementation: 0x106facf74

// +[SCSpectaclesCheeriosRequestMessage disableFlightRequest:]
// Type encoding: @20@0:8B16
// Implementation: 0x106fad054

// +[SCSpectaclesCheeriosRequestMessage getAllFlightSettings]
// Type encoding: @16@0:8
// Implementation: 0x106fad158

// +[SCSpectaclesCheeriosRequestMessage setFlightCaptureDuration:flightMode:]
// Type encoding: @32@0:8Q16Q24
// Implementation: 0x106fad238

// +[SCSpectaclesCheeriosRequestMessage setFlightDistance:flightMode:]
// Type encoding: @32@0:8d16Q24
// Implementation: 0x106fad384

// +[SCSpectaclesCheeriosRequestMessage setFlightCaptureType:flightMode:]
// Type encoding: @32@0:8Q16Q24
// Implementation: 0x106fad504

// +[SCSpectaclesCheeriosRequestMessage setFlightTracking:flightMode:]
// Type encoding: @32@0:8Q16Q24
// Implementation: 0x106fad65c

// +[SCSpectaclesCheeriosRequestMessage setFlightCustomMode:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106fad7b0

// +[SCSpectaclesCheeriosRequestMessage launchLensWithLensId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fad8d4

// +[SCSpectaclesCheeriosRequestMessage syncLenses]
// Type encoding: @16@0:8
// Implementation: 0x106fad8dc

// +[SCSpectaclesCheeriosRequestMessage firmwareUpdateUpload:startPosition:overwriteExistingFile:]
// Type encoding: @36@0:8@16q24B32
// Implementation: 0x106fad8e4

// +[SCSpectaclesCheeriosRequestMessage firmwareGetChecksum]
// Type encoding: @16@0:8
// Implementation: 0x106fada30

// +[SCSpectaclesCheeriosRequestMessage firmwwareRebootAndSwitchPartition]
// Type encoding: @16@0:8
// Implementation: 0x106fadb0c

// +[SCSpectaclesCheeriosRequestMessage firmwareApplyPatch]
// Type encoding: @16@0:8
// Implementation: 0x106fadbe8

// +[SCSpectaclesCheeriosRequestMessage firmwareApplyFullUpdate]
// Type encoding: @16@0:8
// Implementation: 0x106fadcc4

// +[SCSpectaclesCheeriosRequestMessage firmwareGetScheduledUpdateStatus]
// Type encoding: @16@0:8
// Implementation: 0x106fadda0

// +[SCSpectaclesCheeriosRequestMessage firmwareScheduleUpdate:windowLength:targetVersion:targetDigest:]
// Type encoding: @48@0:8d16d24@32@40
// Implementation: 0x106fade80

// +[SCSpectaclesCheeriosRequestMessage firmwareCancelScheduledUpdate]
// Type encoding: @16@0:8
// Implementation: 0x106fade88

// +[SCSpectaclesCheeriosRequestMessage firmwareScheduleUpdate:targetDigest:isFullUpdate:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x106fadf68

// +[SCSpectaclesCheeriosRequestMessage debugLogFileListRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fae150

// +[SCSpectaclesCheeriosRequestMessage debugLogFileRequestWithFilename:range:]
// Type encoding: @40@0:8@16{_NSRange=QQ}24
// Implementation: 0x106fae254

// +[SCSpectaclesCheeriosRequestMessage analyticsFileListRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fae42c

// +[SCSpectaclesCheeriosRequestMessage analyticsFileGetWithFilename:range:]
// Type encoding: @40@0:8@16{_NSRange=QQ}24
// Implementation: 0x106fae530

// +[SCSpectaclesCheeriosRequestMessage analyticsFileDeleteRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fae708

// +[SCSpectaclesCheeriosRequestMessage enableLostMode]
// Type encoding: @16@0:8
// Implementation: 0x106fae80c

// +[SCSpectaclesCheeriosRequestMessage startFlightImuCalibrationRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fae8ec

// +[SCSpectaclesCheeriosRequestMessage stopFlightImuCalibrationRequest]
// Type encoding: @16@0:8
// Implementation: 0x106fae9cc

@end
