// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesManager
// Superclass: NSObject
// Address: 0x112b43768

@interface SCSpectaclesManager

// Property: pairedDeviceSupportsLensExplorer; attributes: TB,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: bluetoothOverrideOn; attributes: T@"NSNumber",&,N,V_bluetoothOverrideOn
// Property: announcer; attributes: T@"SCSpectaclesEventListenerAnnouncer",&,N,V_announcer
// Property: cache; attributes: T@"SCSpectaclesCache",&,N,V_cache
// Property: pairingManager; attributes: T@"SCSpectaclesPairingManager",&,N,V_pairingManager
// Property: pairingManagerSessionId; attributes: T@"NSUUID",C,N,V_pairingManagerSessionId
// Property: crashLogger; attributes: T@"<SCSpectaclesCrashLogger>",&,N,V_crashLogger
// Property: analyticsLogger; attributes: T@"<SCSpectaclesLibraryLogger>",&,N,V_analyticsLogger
// Property: centralManagerLogger; attributes: T@"<SCSpectaclesCBCentralManagerEventListener>",&,N,V_centralManagerLogger
// Property: centralManager; attributes: T@"SCLazy",&,N,V_centralManager
// Property: deviceStore; attributes: T@"SCSpectaclesDeviceStore",&,N,V_deviceStore
// Property: fideliusKeyProvider; attributes: T@"<SCFideliusKeyProvider>",R,N,V_fideliusKeyProvider
// Property: authorizationProviderBlock; attributes: T@?,C,N,V_authorizationProviderBlock
// Property: spectaclesProfile; attributes: T@"SCSpectaclesProfile",R,N,V_spectaclesProfile
// Property: usernameProvider; attributes: T@"SCLazy",&,N,V_usernameProvider
// Property: serverMetadataFetcher; attributes: T@"SCLazy",&,N,V_serverMetadataFetcher
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesManager mockSpectaclesPairingComplete]
// Type encoding: v16@0:8
// Implementation: 0x106ec3778

// -[SCSpectaclesManager mockSpectaclesTransferSessionCompleteHdVideo]
// Type encoding: v16@0:8
// Implementation: 0x106ec390c

// -[SCSpectaclesManager mockSpectaclesTransferSessionCompletePhoto]
// Type encoding: v16@0:8
// Implementation: 0x106ec3970

// -[SCSpectaclesManager mockSpectaclesContentDownloading]
// Type encoding: v16@0:8
// Implementation: 0x106ec39d4

// -[SCSpectaclesManager mockFoundSpectaclesBackupPairing]
// Type encoding: v16@0:8
// Implementation: 0x106ec3a38

// -[SCSpectaclesManager mockSpectaclesTransferInterrupted]
// Type encoding: v16@0:8
// Implementation: 0x106ec3a70

// -[SCSpectaclesManager setOverrideBluetoothOn:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ec3c3c

// -[SCSpectaclesManager getOverrideBluetoothOn]
// Type encoding: @16@0:8
// Implementation: 0x106ec3c88

// -[SCSpectaclesManager pairingStateShortCode]
// Type encoding: @16@0:8
// Implementation: 0x106ec24f4

// -[SCSpectaclesManager device0StateShortCode]
// Type encoding: @16@0:8
// Implementation: 0x106ec2564

// -[SCSpectaclesManager requestCurrentDeviceLogs:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106ec2634

// -[SCSpectaclesManager unpairDevicesWithError]
// Type encoding: v16@0:8
// Implementation: 0x106ec28e0

// -[SCSpectaclesManager updateMockBatteryLevelStatus:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106ec2a08

// -[SCSpectaclesManager _applyMockBatteryLevelStatusToDevice:mockBatteryLevelStatusToDevice:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106ec2b2c

// -[SCSpectaclesManager updateMockTemperatureStatus:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106ec2bb8

// -[SCSpectaclesManager _applyMockTemperatureStatusToDevice:mockTemperatureStatusToDevice:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106ec2cdc

// -[SCSpectaclesManager updateMockStorageLevelStatus:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106ec2d7c

// -[SCSpectaclesManager _applyMockStorageLevelStatusToDevice:mockStorageLevelStatus:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106ec2ea0

// -[SCSpectaclesManager crashDetected]
// Type encoding: v16@0:8
// Implementation: 0x106ec2f2c

// -[SCSpectaclesManager startProxy]
// Type encoding: v16@0:8
// Implementation: 0x106ec308c

// -[SCSpectaclesManager stopProxy]
// Type encoding: v16@0:8
// Implementation: 0x106ec3218

// -[SCSpectaclesManager startProxyFull]
// Type encoding: v16@0:8
// Implementation: 0x106ec33a4

// -[SCSpectaclesManager stopProxyFull]
// Type encoding: v16@0:8
// Implementation: 0x106ec3530

// -[SCSpectaclesManager startPairingFlowForDeviceWithUserDisplayName:targetDeviceProductType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106eaeaf4

// -[SCSpectaclesManager stopPairingFlowForNewDevice]
// Type encoding: v16@0:8
// Implementation: 0x106eaedb0

// -[SCSpectaclesManager factoryResetNewDevice]
// Type encoding: v16@0:8
// Implementation: 0x106eaeec8

// -[SCSpectaclesManager confirmUnpairPreviousDevice]
// Type encoding: v16@0:8
// Implementation: 0x106eaeef8

// -[SCSpectaclesManager confirmKeepPreviousDevicePaired]
// Type encoding: v16@0:8
// Implementation: 0x106eaef54

// -[SCSpectaclesManager confirmKeepPairingAfterValidatingRequest]
// Type encoding: v16@0:8
// Implementation: 0x106eaefb0

// -[SCSpectaclesManager setPairingDeviceName:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eaefe0

// -[SCSpectaclesManager pairingMaxDeviceNameLimit]
// Type encoding: Q16@0:8
// Implementation: 0x106eaf080

// -[SCSpectaclesManager pairingDeviceNameWithoutEmoji]
// Type encoding: @16@0:8
// Implementation: 0x106eaf0bc

// -[SCSpectaclesManager pairingDeviceNameWithEmoji]
// Type encoding: @16@0:8
// Implementation: 0x106eaf100

// -[SCSpectaclesManager pairingDeviceEmoji]
// Type encoding: @16@0:8
// Implementation: 0x106eaf144

// -[SCSpectaclesManager setPairingSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eaf188

// -[SCSpectaclesManager setPairingDeviceLocationEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106eaf200

// -[SCSpectaclesManager pairingUpdate]
// Type encoding: @16@0:8
// Implementation: 0x106eaf270

// -[SCSpectaclesManager pairingDeviceInfo]
// Type encoding: @16@0:8
// Implementation: 0x106eaf2b4

// -[SCSpectaclesManager connectedDevices]
// Type encoding: @16@0:8
// Implementation: 0x106eae614

// -[SCSpectaclesManager firstConnectedDevice]
// Type encoding: @16@0:8
// Implementation: 0x106eae6d0

// -[SCSpectaclesManager firstPairedDevice]
// Type encoding: @16@0:8
// Implementation: 0x106eae714

// -[SCSpectaclesManager pairedDeviceCount]
// Type encoding: Q16@0:8
// Implementation: 0x106eae758

// -[SCSpectaclesManager connectedDeviceCount]
// Type encoding: Q16@0:8
// Implementation: 0x106eae794

// -[SCSpectaclesManager deviceWithSerialNumber:]
// Type encoding: @24@0:8@16
// Implementation: 0x106eae7d0

// -[SCSpectaclesManager isDeviceNameTaken:]
// Type encoding: B24@0:8@16
// Implementation: 0x106eae928

// -[SCSpectaclesManager _pairedDevices]
// Type encoding: @16@0:8
// Implementation: 0x106eaea8c

// -[SCSpectaclesManager pairedDeviceSupportsLensExplorer]
// Type encoding: B16@0:8
// Implementation: 0x106eae530

// -[SCSpectaclesManager initWithSpectaclesProfile:usernameProvider:authorizationProvider:crashLogger:analyticsLogger:fideliusKeyProvider:networkConnectivityServices:deviceFeatureScopeExposer:deviceFeatureScopeServices:backgroundTaskWrapper:serverMetadataFetcher:announcer:centralManager:clientControllerScopeExposer:clientControllerScopeServices:workerQueue:]
// Type encoding: @144@0:8@16@24@?32@40@48@56@64@72@80@88@96@104@112@120@128@136
// Implementation: 0x100c59a14

// -[SCSpectaclesManager dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106eaf2f8

// -[SCSpectaclesManager setupCentralManager]
// Type encoding: v16@0:8
// Implementation: 0x106eaf35c

// -[SCSpectaclesManager clearCacheExceptForCurrentUser]
// Type encoding: v16@0:8
// Implementation: 0x106eaf3d8

// -[SCSpectaclesManager renameDevice:inputNameWithoutEmoji:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106eaf3e0

// -[SCSpectaclesManager loadDevicesFromFileWithCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106eaf610

// -[SCSpectaclesManager _loadDevicesFromFileWithCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106eaf714

// -[SCSpectaclesManager loadDevicesFromServerWithCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106eaf834

// -[SCSpectaclesManager reconcileDevicesFromServer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eafa64

// -[SCSpectaclesManager devices]
// Type encoding: @16@0:8
// Implementation: 0x100c5bae8

// -[SCSpectaclesManager activateDevice:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eafab4

// -[SCSpectaclesManager deactivateDevice:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eafb10

// -[SCSpectaclesManager forgetDevice:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eafb6c

// -[SCSpectaclesManager manualUnpairDevice:successBlock:failureBlock:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x106eafc4c

// -[SCSpectaclesManager restartDevice:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eafeb4

// -[SCSpectaclesManager clearAllContentOnDevice:successBlock:failureBlock:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x106eafee8

// -[SCSpectaclesManager addDeviceLogsRequestOnDevice:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106eb00bc

// -[SCSpectaclesManager addDeviceIdleAnalyticsRequestForDevice:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106eb013c

// -[SCSpectaclesManager updateGPSAlmanacOnDevice:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106eb0320

// -[SCSpectaclesManager bluetoothState]
// Type encoding: q16@0:8
// Implementation: 0x106eb03a0

// -[SCSpectaclesManager isContentRefreshInProgressForDevice:]
// Type encoding: B24@0:8@16
// Implementation: 0x106eb03f8

// -[SCSpectaclesManager totalSizeOfCacheFilesWithQueue:handler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106eb04d4

// -[SCSpectaclesManager cleanUpCacheWithQueue:block:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106eb062c

// -[SCSpectaclesManager deviceStore:didAddDevice:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106eb06c0

// -[SCSpectaclesManager deviceStoreDidClearDevices]
// Type encoding: v16@0:8
// Implementation: 0x106eb07e8

// -[SCSpectaclesManager requestClientId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb0838

// -[SCSpectaclesManager sendAuthzCodeForDevice:authzCode:codeVerifier:redirectUri:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106eb086c

// -[SCSpectaclesManager sendAccessTokenForDevice:accessToken:refreshToken:expirationTimeMs:userId:]
// Type encoding: v56@0:8@16@24@32q40@48
// Implementation: 0x106eb08f4

// -[SCSpectaclesManager requestWifiAPList:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb0a14

// -[SCSpectaclesManager setWifiAPList:forDevice:successBlock:failureBlock:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x106eb0a48

// -[SCSpectaclesManager requestLastCloudUploadTime:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb0ad0

// -[SCSpectaclesManager startManualWifiForProxyRequest]
// Type encoding: v16@0:8
// Implementation: 0x106eb0b04

// -[SCSpectaclesManager startProxyManualControl]
// Type encoding: v16@0:8
// Implementation: 0x106eb0bb8

// -[SCSpectaclesManager stopProxyManualControl]
// Type encoding: v16@0:8
// Implementation: 0x106eb0c6c

// -[SCSpectaclesManager isProxyConnectionActive]
// Type encoding: B16@0:8
// Implementation: 0x106eb0d20

// -[SCSpectaclesManager startFirmwareUpdate:updateIsActive:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106eb0de8

// -[SCSpectaclesManager applyFirmwareUpdatePatch:filepath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106eb0e44

// -[SCSpectaclesManager revertFirmwareBinary:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb0eb4

// -[SCSpectaclesManager requestFirmwareUpdate:version:digest:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106eb0f00

// -[SCSpectaclesManager requestFirmwareUpdate:version:targetDigest:windowStart:windowLength:userInfo:]
// Type encoding: v64@0:8@16@24@32@40d48@56
// Implementation: 0x106eb0fb0

// -[SCSpectaclesManager cancelFirmwareUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb1094

// -[SCSpectaclesManager setMinimumRequiredFirmwareVersion:forHardwareWithMajorNumber:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106eb10e0

// -[SCSpectaclesManager markContentAsSynced:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb1140

// -[SCSpectaclesManager markContentAsCorrupt:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb13f8

// -[SCSpectaclesManager refreshContentList:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb162c

// -[SCSpectaclesManager _deleteSyncedContentsIfPossible:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb167c

// -[SCSpectaclesManager initiateDataFlowWithRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb1754

// -[SCSpectaclesManager addTasks:forRequest:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106eb17dc

// -[SCSpectaclesManager moveTaskToTheFrontOfTheQueue:forRequest:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106eb187c

// -[SCSpectaclesManager cancelDataFlowRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb191c

// -[SCSpectaclesManager setCountryCode:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb19a4

// -[SCSpectaclesManager content]
// Type encoding: @16@0:8
// Implementation: 0x106eb1aec

// -[SCSpectaclesManager contentWithUUID:fromDevice:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106eb1c60

// -[SCSpectaclesManager startContentTransferWithDevice:source:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106eb1e20

// -[SCSpectaclesManager startContentTransferWithDevice:contentIds:source:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x106eb1ef8

// -[SCSpectaclesManager startAnimatedThumbnailTransferWithDevice:contentIds:source:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x106eb1fe8

// -[SCSpectaclesManager cancelContentTransferWithDevice:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb20d8

// -[SCSpectaclesManager transferringContentForContentComponent:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106eb21a0

// -[SCSpectaclesManager untransferredContentForContentComponent:device:]
// Type encoding: @32@0:8Q16@24
// Implementation: 0x106eb23b0

// -[SCSpectaclesManager unsyncedContentUUIDs]
// Type encoding: @16@0:8
// Implementation: 0x106eb25b4

// -[SCSpectaclesManager currentTransferSession]
// Type encoding: @16@0:8
// Implementation: 0x106eb26c8

// -[SCSpectaclesManager setTransferPriorityContext:contentUUIDs:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x106eb27dc

// -[SCSpectaclesManager deleteContentWithUUIDs:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb28a8

// -[SCSpectaclesManager isContentPartOfCurrentTransferBatch:component:]
// Type encoding: B32@0:8@16Q24
// Implementation: 0x106eb29b8

// -[SCSpectaclesManager isContentBeingTranferred:component:]
// Type encoding: B32@0:8@16Q24
// Implementation: 0x106eb2ac8

// -[SCSpectaclesManager _isContent:component:partOfTransferSession:]
// Type encoding: B40@0:8@16Q24@32
// Implementation: 0x106eb2c5c

// -[SCSpectaclesManager addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c5a9f8

// -[SCSpectaclesManager removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb2ee4

// -[SCSpectaclesManager managerDeviceList]
// Type encoding: @16@0:8
// Implementation: 0x106eb2f34

// -[SCSpectaclesManager managerPairing]
// Type encoding: @16@0:8
// Implementation: 0x106eb2f38

// -[SCSpectaclesManager managerTweaks]
// Type encoding: @16@0:8
// Implementation: 0x106eb2f3c

// -[SCSpectaclesManager managerDataFlow]
// Type encoding: @16@0:8
// Implementation: 0x100c5ac50

// -[SCSpectaclesManager managerUIAutomation]
// Type encoding: @16@0:8
// Implementation: 0x106eb2f40

// -[SCSpectaclesManager spectaclesCapabilities]
// Type encoding: @16@0:8
// Implementation: 0x106eb2f44

// -[SCSpectaclesManager streamableAssetWithSpecsRemoteFileName:fileSize:fromDevice:]
// Type encoding: @40@0:8@16q24@32
// Implementation: 0x106eb2f48

// -[SCSpectaclesManager bluetoothOverrideOn]
// Type encoding: @16@0:8
// Implementation: 0x106eb304c

// -[SCSpectaclesManager setBluetoothOverrideOn:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb3054

// -[SCSpectaclesManager announcer]
// Type encoding: @16@0:8
// Implementation: 0x100c5aa48

// -[SCSpectaclesManager setAnnouncer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb3084

// -[SCSpectaclesManager cache]
// Type encoding: @16@0:8
// Implementation: 0x106eb30b4

// -[SCSpectaclesManager setCache:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb30bc

// -[SCSpectaclesManager pairingManager]
// Type encoding: @16@0:8
// Implementation: 0x106eb30ec

// -[SCSpectaclesManager setPairingManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb30f4

// -[SCSpectaclesManager pairingManagerSessionId]
// Type encoding: @16@0:8
// Implementation: 0x106eb3124

// -[SCSpectaclesManager setPairingManagerSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb312c

// -[SCSpectaclesManager crashLogger]
// Type encoding: @16@0:8
// Implementation: 0x106eb3134

// -[SCSpectaclesManager setCrashLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb313c

// -[SCSpectaclesManager analyticsLogger]
// Type encoding: @16@0:8
// Implementation: 0x106eb316c

// -[SCSpectaclesManager setAnalyticsLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb3174

// -[SCSpectaclesManager centralManagerLogger]
// Type encoding: @16@0:8
// Implementation: 0x106eb31a4

// -[SCSpectaclesManager setCentralManagerLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb31ac

// -[SCSpectaclesManager centralManager]
// Type encoding: @16@0:8
// Implementation: 0x106eb31dc

// -[SCSpectaclesManager setCentralManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb31e4

// -[SCSpectaclesManager deviceStore]
// Type encoding: @16@0:8
// Implementation: 0x100c5bb2c

// -[SCSpectaclesManager setDeviceStore:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb3214

// -[SCSpectaclesManager fideliusKeyProvider]
// Type encoding: @16@0:8
// Implementation: 0x106eb3244

// -[SCSpectaclesManager authorizationProviderBlock]
// Type encoding: @?16@0:8
// Implementation: 0x106eb324c

// -[SCSpectaclesManager setAuthorizationProviderBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106eb3254

// -[SCSpectaclesManager spectaclesProfile]
// Type encoding: @16@0:8
// Implementation: 0x106eb325c

// -[SCSpectaclesManager usernameProvider]
// Type encoding: @16@0:8
// Implementation: 0x106eb3264

// -[SCSpectaclesManager setUsernameProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb326c

// -[SCSpectaclesManager serverMetadataFetcher]
// Type encoding: @16@0:8
// Implementation: 0x106eb329c

// -[SCSpectaclesManager setServerMetadataFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb32a4

// -[SCSpectaclesManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106eb32d4

@end
