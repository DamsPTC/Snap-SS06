// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesDevice
// Superclass: NSObject
// Address: 0x112b432b8

@interface SCSpectaclesDevice

// Property: hasEnoughBatteryForFirmwareUpdate; attributes: TB,R,N
// Property: tooColdForFirmwareUpdate; attributes: TB,R,N
// Property: tooHotForFirmwareUpdate; attributes: TB,R,N
// Property: requiredBatteryLevelForFirmwareUpdate; attributes: Tq,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: displayName; attributes: T@"NSString",R,C,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: outstandingBluetoothRequest; attributes: T@"SCSpectaclesRequestMessage",&,N,V_outstandingBluetoothRequest
// Property: serialNumber; attributes: T@"NSString",C,N,V_serialNumber
// Property: firmwareVersion; attributes: T@"<SCSpectaclesFirmwareVersion>",&,N,V_firmwareVersion
// Property: hardwareVersion; attributes: T@"<SCSpectaclesHardwareVersion>",&,N,V_hardwareVersion
// Property: batteryLevel; attributes: T@"NSNumber",&,N,V_batteryLevel
// Property: guppyBatteryLevel; attributes: T@"NSNumber",&,N,V_guppyBatteryLevel
// Property: voltageLevel; attributes: T@"NSNumber",&,N,V_voltageLevel
// Property: storageLevel; attributes: T@"NSNumber",&,N,V_storageLevel
// Property: batteryLevelStatus; attributes: TQ,N,V_batteryLevelStatus
// Property: storageLevelStatus; attributes: TQ,N,V_storageLevelStatus
// Property: temperatureStatus; attributes: TQ,N,V_temperatureStatus
// Property: hasSpaceToRecord; attributes: TB,N,V_hasSpaceToRecord
// Property: color; attributes: Tq,N,V_color
// Property: performer; attributes: T@"<SCPerforming>",&,N,V_performer
// Property: hasReconciledContentList; attributes: TB,N,V_hasReconciledContentList
// Property: transferDisabledReason; attributes: Tq,N,V_transferDisabledReason
// Property: progressMonitor; attributes: T@"SCSpectaclesTransferProgressMonitor",&,N,V_progressMonitor
// Property: shouldRequestCrashReports; attributes: TB,N,V_shouldRequestCrashReports
// Property: contentStore; attributes: T@"SCSpectaclesContentStore",&,N,V_contentStore
// Property: deviceAnnouncer; attributes: T@"SCSpectaclesDeviceEventListenerAnnouncer",&,N,V_deviceAnnouncer
// Property: connectionHub; attributes: T@"SCSpectaclesDeviceConnectionHub",R,N,V_connectionHub
// Property: genericMessageSender; attributes: T@"SCSpectaclesGenericMessageSender",R,N,V_genericMessageSender
// Property: dataFlowsManager; attributes: T@"SCSpectaclesDataFlowsManager",R,N
// Property: responseMonitors; attributes: T@"SCSpectaclesResponseMonitorSet",&,N,V_responseMonitors
// Property: shortDisplayName; attributes: T@"NSString",C,N,V_shortDisplayName
// Property: displayName; attributes: T@"NSString",C,N,V_displayName
// Property: deviceNumber; attributes: Tq,N,V_deviceNumber
// Property: firstPairedTimestamp; attributes: Tq,N,V_firstPairedTimestamp
// Property: lastPairedStatusUpdatedTimestamp; attributes: Tq,N,V_lastPairedStatusUpdatedTimestamp
// Property: lastNameUpdatedTimestamp; attributes: Tq,N,V_lastNameUpdatedTimestamp
// Property: lastGPSAlmanacUpdatedTimestamp; attributes: Tq,N,V_lastGPSAlmanacUpdatedTimestamp
// Property: lastConnectedTimestamp; attributes: Tq,N,V_lastConnectedTimestamp
// Property: lastActivatedTimestamp; attributes: Tq,N,V_lastActivatedTimestamp
// Property: state; attributes: Tq,N,V_stateDoNotUseIVarUsePropertyInstead
// Property: connectionReason; attributes: Tq,N,V_connectionReason
// Property: identifier; attributes: T@"NSUUID",&,N,V_identifier
// Property: detectedBluetoothOverloadError; attributes: TB,N,V_detectedBluetoothOverloadError
// Property: analyticsLogger; attributes: T@"<SCSpectaclesLibraryLogger>",W,N,V_analyticsLogger
// Property: lastMediaCountSeenInResponse; attributes: Tq,N,V_lastMediaCountSeenInResponse
// Property: lastMediaCount; attributes: Tq,N,V_lastMediaCount
// Property: nordicTemperature; attributes: Tq,N,V_nordicTemperature
// Property: coulombCounterTemperature; attributes: Tq,N,V_coulombCounterTemperature
// Property: socTemperature; attributes: Tq,N,V_socTemperature
// Property: wifiTemperature; attributes: Tq,N,V_wifiTemperature
// Property: lastTemperatureReportTime; attributes: T@"NSDate",&,N,V_lastTemperatureReportTime
// Property: calibration; attributes: T@"SCSpectaclesCalibration",C,N,V_calibration
// Property: deviceIpAddress; attributes: T@"NSString",C,N,V_deviceIpAddress
// Property: charging; attributes: TB,N,GisCharging,V_charging
// Property: hasChargingInfo; attributes: TB,N,V_hasChargingInfo
// Property: firmwareUpdater; attributes: T@"SCSpectaclesFirmwareUpdater",&,N,V_firmwareUpdater
// Property: ambaWatchdog; attributes: T@"SCSpectaclesAmbaWatchdog",&,N,V_ambaWatchdog
// Property: capabilities; attributes: TQ,R,N,V_capabilities
// Property: lastUploadAnalyticsLogsTime; attributes: T@"NSDate",&,N,V_lastUploadAnalyticsLogsTime
// Property: lastConnectionFailureReason; attributes: TQ,N,V_lastConnectionFailureReason
// Property: locationEnabled; attributes: TB,N,V_locationEnabled
// Property: lastPairFromUnpairedStateTimestamp; attributes: Tq,R,N,V_lastPairFromUnpairedStateTimestamp
// Property: wifiFrequency; attributes: T@"NSNumber",R,C,N,V_wifiFrequency
// Property: setupComplete; attributes: TB,N,V_setupComplete
// Property: deviceIsUpdatingFromOTAPostPairingPhase; attributes: TB,N,V_deviceIsUpdatingFromOTAPostPairingPhase
// Property: enableUsbImport; attributes: TB,N,V_enableUsbImport
// Property: isConnectedToUSB; attributes: TB,R,N,V_isConnectedToUSB
// Property: countryCode; attributes: T@"NSString",C,N,V_countryCode
// Property: encryptionKey; attributes: T@"NSData",&,N,V_encryptionKey
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: timeOfCaptureLastViewed; attributes: T@"NSDate",&,N,V_timeOfCaptureLastViewed
// Property: connectionState; attributes: T@"<SCSpectaclesDeviceConnectionStateReporting>",R,N
// Property: name; attributes: T@"<SCSpectaclesDeviceName>",R,N
// Property: internalDevice; attributes: T@"<SCSpectaclesDeviceInternal>",R,N
// Property: preferences; attributes: T@"<SCSpectaclesDevicePreferences>",R,N
// Property: contentState; attributes: T@"<SCSpectaclesDeviceContentState>",R,N
// Property: featureCatalog; attributes: T@"<SCSpectaclesDeviceFeatureCatalog>",R,W,N,V_featureCatalog

// -[SCSpectaclesDevice emoji]
// Type encoding: @16@0:8
// Implementation: 0x106e93604

// -[SCSpectaclesDevice displayNameWithoutEmoji]
// Type encoding: @16@0:8
// Implementation: 0x106e93670

// -[SCSpectaclesDevice bleDisplayName]
// Type encoding: @16@0:8
// Implementation: 0x106e93700

// -[SCSpectaclesDevice bluetoothDisplayName]
// Type encoding: @16@0:8
// Implementation: 0x106e93768

// -[SCSpectaclesDevice wifiDisplayName]
// Type encoding: @16@0:8
// Implementation: 0x106e9376c

// -[SCSpectaclesDevice hasEnoughBatteryForFirmwareUpdate]
// Type encoding: B16@0:8
// Implementation: 0x105a4629c

// -[SCSpectaclesDevice tooColdForFirmwareUpdate]
// Type encoding: B16@0:8
// Implementation: 0x105a46344

// -[SCSpectaclesDevice tooHotForFirmwareUpdate]
// Type encoding: B16@0:8
// Implementation: 0x105a463c0

// -[SCSpectaclesDevice requiredBatteryLevelForFirmwareUpdate]
// Type encoding: q16@0:8
// Implementation: 0x105a4643c

// -[SCSpectaclesDevice initInternal]
// Type encoding: @16@0:8
// Implementation: 0x106e93810

// -[SCSpectaclesDevice initWithSerialNumber:displayName:color:firstPairedTimestamp:lastPairedStatusUpdatedTimestamp:lastNameUpdatedTimestamp:deviceNumber:firmwareVersion:hardwareVersion:backgroundTaskWrapper:]
// Type encoding: @96@0:8@16@24q32q40q48q56q64@72@80@88
// Implementation: 0x106e939b8

// -[SCSpectaclesDevice initWithBabyDevice:performer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106e93b70

// -[SCSpectaclesDevice setupWithCentralManager:deviceFeatureScopeExposer:deviceFeatureScopeServices:clientControllerScopeExposer:clientControllerScopeServices:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x106e93bfc

// -[SCSpectaclesDevice setupFirstWithPerformer:analyticsLogger:progressMonitor:backgroundTaskWrapper:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106e94010

// -[SCSpectaclesDevice setupContentWithCache:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e941c0

// -[SCSpectaclesDevice openProximityUnlockChannelWithLagunaId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e943ec

// -[SCSpectaclesDevice setDisplayName:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e94528

// -[SCSpectaclesDevice isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x106e9457c

// -[SCSpectaclesDevice hash]
// Type encoding: Q16@0:8
// Implementation: 0x106e94620

// -[SCSpectaclesDevice hasHdContentToDownload]
// Type encoding: B16@0:8
// Implementation: 0x106e9465c

// -[SCSpectaclesDevice undownloadedHdContent]
// Type encoding: @16@0:8
// Implementation: 0x106e94720

// -[SCSpectaclesDevice connectionState]
// Type encoding: @16@0:8
// Implementation: 0x106e947d4

// -[SCSpectaclesDevice name]
// Type encoding: @16@0:8
// Implementation: 0x106e947fc

// -[SCSpectaclesDevice internalDevice]
// Type encoding: @16@0:8
// Implementation: 0x106e94800

// -[SCSpectaclesDevice dataFlowsManager]
// Type encoding: @16@0:8
// Implementation: 0x106e94804

// -[SCSpectaclesDevice batteryLevel]
// Type encoding: @16@0:8
// Implementation: 0x106e9482c

// -[SCSpectaclesDevice guppyBatteryLevel]
// Type encoding: @16@0:8
// Implementation: 0x106e94854

// -[SCSpectaclesDevice coulombCounterTemperature]
// Type encoding: q16@0:8
// Implementation: 0x106e9487c

// -[SCSpectaclesDevice socTemperature]
// Type encoding: q16@0:8
// Implementation: 0x106e94884

// -[SCSpectaclesDevice batteryLevelStatus]
// Type encoding: Q16@0:8
// Implementation: 0x106e9488c

// -[SCSpectaclesDevice temperatureStatus]
// Type encoding: Q16@0:8
// Implementation: 0x106e94894

// -[SCSpectaclesDevice storagelevelStatus]
// Type encoding: Q16@0:8
// Implementation: 0x106e9489c

// -[SCSpectaclesDevice updateLastConnectionFailureReason:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106e948a4

// -[SCSpectaclesDevice updateLastConnectedTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x106e948a8

// -[SCSpectaclesDevice updateLastActivatedTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x106e948ac

// -[SCSpectaclesDevice updateShouldRequestCrashReports:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e948b0

// -[SCSpectaclesDevice sendDeviceInfoRequestWithSupportsHevc]
// Type encoding: v16@0:8
// Implementation: 0x106e948b4

// -[SCSpectaclesDevice initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x106e94958

// -[SCSpectaclesDevice encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e94e80

// -[SCSpectaclesDevice preferences]
// Type encoding: @16@0:8
// Implementation: 0x106e953d4

// -[SCSpectaclesDevice devicePreferencesDidRequestArchiving:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e953fc

// -[SCSpectaclesDevice _sendDeviceRestart]
// Type encoding: v16@0:8
// Implementation: 0x106e95408

// -[SCSpectaclesDevice clearContentWithSuccess:failure:]
// Type encoding: v32@0:8@?16@?24
// Implementation: 0x106e954b8

// -[SCSpectaclesDevice _addResponseMonitorWithHandler:successBlock:failureBlock:timeoutBlock:]
// Type encoding: v48@0:8@?16@?24@?32@?40
// Implementation: 0x106e95898

// -[SCSpectaclesDevice setEnableUsbImport:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e95ab0

// -[SCSpectaclesDevice handlePeripheralResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e95af8

// -[SCSpectaclesDevice _handlePeripheralResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e95c2c

// -[SCSpectaclesDevice _crashDetectedInResponse:]
// Type encoding: B24@0:8@16
// Implementation: 0x106e963cc

// -[SCSpectaclesDevice _handleAmbaCrashed]
// Type encoding: v16@0:8
// Implementation: 0x106e96434

// -[SCSpectaclesDevice _handleDeviceStatus:]
// Type encoding: Q24@0:8@16
// Implementation: 0x106e96438

// -[SCSpectaclesDevice ambaWatchdogKick]
// Type encoding: v16@0:8
// Implementation: 0x106e96c60

// -[SCSpectaclesDevice requestCrashReport]
// Type encoding: v16@0:8
// Implementation: 0x106e96c68

// -[SCSpectaclesDevice clearCrashReport]
// Type encoding: v16@0:8
// Implementation: 0x106e96d08

// -[SCSpectaclesDevice setPeripheralDisplayName]
// Type encoding: v16@0:8
// Implementation: 0x106e96d10

// -[SCSpectaclesDevice transferDisabled]
// Type encoding: B16@0:8
// Implementation: 0x106e96e04

// -[SCSpectaclesDevice setTransferDisabled:forReason:]
// Type encoding: v28@0:8B16q20
// Implementation: 0x106e96e20

// -[SCSpectaclesDevice adoptBabyDevice:performer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106e97008

// -[SCSpectaclesDevice _adoptBabyDevice:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e97154

// -[SCSpectaclesDevice _setupDefaultDeviceColorForHardwareVersion:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e97450

// -[SCSpectaclesDevice removeCorruptContent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e974b8

// -[SCSpectaclesDevice activate]
// Type encoding: v16@0:8
// Implementation: 0x106e9759c

// -[SCSpectaclesDevice deactivate]
// Type encoding: v16@0:8
// Implementation: 0x106e976ac

// -[SCSpectaclesDevice unpairWithReason:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106e977dc

// -[SCSpectaclesDevice manualUnpairWithSuccess:failure:]
// Type encoding: v32@0:8@?16@?24
// Implementation: 0x106e979bc

// -[SCSpectaclesDevice restart]
// Type encoding: v16@0:8
// Implementation: 0x106e97b6c

// -[SCSpectaclesDevice cancelBackupForIdentifiers:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e97c60

// -[SCSpectaclesDevice resumeBackup]
// Type encoding: v16@0:8
// Implementation: 0x106e97c68

// -[SCSpectaclesDevice shareWifiCredentialsWithSSID:password:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106e97c70

// -[SCSpectaclesDevice requestClientId]
// Type encoding: v16@0:8
// Implementation: 0x106e97c78

// -[SCSpectaclesDevice sendAuthzCode:codeVerifier:redirectUri:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106e97c80

// -[SCSpectaclesDevice sendAccessToken:refreshToken:expirationTimeMs:userId:snapadsId:email:birthday:fideliusKeyProvider:scopes:]
// Type encoding: v88@0:8@16@24q32@40@48@56@64@72@80
// Implementation: 0x106e97c88

// -[SCSpectaclesDevice requestWifiAPList]
// Type encoding: v16@0:8
// Implementation: 0x106e97c90

// -[SCSpectaclesDevice setWifiAPList:success:failure:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x106e97c98

// -[SCSpectaclesDevice requestLastCloudUploadTime]
// Type encoding: v16@0:8
// Implementation: 0x106e97e68

// -[SCSpectaclesDevice setLastMediaCountSeenInResponse:]
// Type encoding: v24@0:8q16
// Implementation: 0x106e97e70

// -[SCSpectaclesDevice setLastMediaCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x106e97e84

// -[SCSpectaclesDevice setCalibration:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e97f94

// -[SCSpectaclesDevice contentState]
// Type encoding: @16@0:8
// Implementation: 0x106e98120

// -[SCSpectaclesDevice _resetBatteryState]
// Type encoding: v16@0:8
// Implementation: 0x106e98124

// -[SCSpectaclesDevice setTimeOfCaptureLastViewed:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e98150

// -[SCSpectaclesDevice firmwareUpdaterSendRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e982b4

// -[SCSpectaclesDevice isUnpaired]
// Type encoding: B16@0:8
// Implementation: 0x106e982bc

// -[SCSpectaclesDevice isActive]
// Type encoding: B16@0:8
// Implementation: 0x106e982d8

// -[SCSpectaclesDevice _announceStateUpdated]
// Type encoding: v16@0:8
// Implementation: 0x106e982f4

// -[SCSpectaclesDevice _handleConnectionStateDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e983a4

// -[SCSpectaclesDevice setState:]
// Type encoding: v24@0:8q16
// Implementation: 0x106e98408

// -[SCSpectaclesDevice setSetupComplete:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e98420

// -[SCSpectaclesDevice _observeConnectionState]
// Type encoding: v16@0:8
// Implementation: 0x106e98464

// -[SCSpectaclesDevice stateShortCode]
// Type encoding: @16@0:8
// Implementation: 0x106e985b8

// -[SCSpectaclesDevice postPairingCompletionEvent]
// Type encoding: v16@0:8
// Implementation: 0x106e987fc

// -[SCSpectaclesDevice supportsPsychomantis]
// Type encoding: B16@0:8
// Implementation: 0x106e98840

// -[SCSpectaclesDevice supportsBatchRequests]
// Type encoding: B16@0:8
// Implementation: 0x106e98858

// -[SCSpectaclesDevice supportsTaskBatching]
// Type encoding: B16@0:8
// Implementation: 0x106e98870

// -[SCSpectaclesDevice supportsAutomaticStartAsNeededDeletion]
// Type encoding: B16@0:8
// Implementation: 0x106e98888

// -[SCSpectaclesDevice supportsProtectedWifi]
// Type encoding: B16@0:8
// Implementation: 0x106e988a0

// -[SCSpectaclesDevice supportsHomeWiFi]
// Type encoding: B16@0:8
// Implementation: 0x106e988b8

// -[SCSpectaclesDevice supportsHevc]
// Type encoding: B16@0:8
// Implementation: 0x106e988d0

// -[SCSpectaclesDevice supportsAnalyticsLogs]
// Type encoding: B16@0:8
// Implementation: 0x106e988e8

// -[SCSpectaclesDevice supportsManualUnpair]
// Type encoding: B16@0:8
// Implementation: 0x106e98900

// -[SCSpectaclesDevice supportsDownloadLogFile]
// Type encoding: B16@0:8
// Implementation: 0x106e98918

// -[SCSpectaclesDevice supportsUploadLogFile]
// Type encoding: B16@0:8
// Implementation: 0x106e98930

// -[SCSpectaclesDevice supportsContextNotification]
// Type encoding: B16@0:8
// Implementation: 0x106e98948

// -[SCSpectaclesDevice supportsBluetoothTransferWhileRecording]
// Type encoding: B16@0:8
// Implementation: 0x106e98960

// -[SCSpectaclesDevice supportsSuspendingWifiWhileRecording]
// Type encoding: B16@0:8
// Implementation: 0x106e98978

// -[SCSpectaclesDevice supportsImuData]
// Type encoding: B16@0:8
// Implementation: 0x106e98990

// -[SCSpectaclesDevice supportsBundlingImuDataIntoContentFile]
// Type encoding: B16@0:8
// Implementation: 0x106e989a8

// -[SCSpectaclesDevice supportsBTC]
// Type encoding: B16@0:8
// Implementation: 0x106e989c0

// -[SCSpectaclesDevice supportsProxy]
// Type encoding: B16@0:8
// Implementation: 0x106e989d8

// -[SCSpectaclesDevice supportsLocation]
// Type encoding: B16@0:8
// Implementation: 0x106e989f0

// -[SCSpectaclesDevice supportsLowPowerMode]
// Type encoding: B16@0:8
// Implementation: 0x106e98a08

// -[SCSpectaclesDevice supportsClearCache]
// Type encoding: B16@0:8
// Implementation: 0x106e98a20

// -[SCSpectaclesDevice supportLocationProvider]
// Type encoding: B16@0:8
// Implementation: 0x106e98a38

// -[SCSpectaclesDevice supportsQuickSaveMode]
// Type encoding: B16@0:8
// Implementation: 0x106e98a50

// -[SCSpectaclesDevice supportsFactoryReset]
// Type encoding: B16@0:8
// Implementation: 0x106e98a68

// -[SCSpectaclesDevice supportsDisplayAndAudio]
// Type encoding: B16@0:8
// Implementation: 0x106e98a80

// -[SCSpectaclesDevice supportsInternalSettings]
// Type encoding: B16@0:8
// Implementation: 0x106e98a98

// -[SCSpectaclesDevice supportsSpookyInstall]
// Type encoding: B16@0:8
// Implementation: 0x106e98ab0

// -[SCSpectaclesDevice supportsDeveloperMode]
// Type encoding: B16@0:8
// Implementation: 0x106e98ac8

// -[SCSpectaclesDevice requiresPowerWatchdog]
// Type encoding: B16@0:8
// Implementation: 0x106e98ae0

// -[SCSpectaclesDevice supportsProximityUnlock]
// Type encoding: B16@0:8
// Implementation: 0x106e98af8

// -[SCSpectaclesDevice wifiCanUse5GhzChannelInAllCountries]
// Type encoding: B16@0:8
// Implementation: 0x106e98b10

// -[SCSpectaclesDevice _checkCapabilities]
// Type encoding: v16@0:8
// Implementation: 0x106e98b28

// -[SCSpectaclesDevice supportBLENetworkClient]
// Type encoding: B16@0:8
// Implementation: 0x106e98f20

// -[SCSpectaclesDevice supportsFlight]
// Type encoding: B16@0:8
// Implementation: 0x106e98f38

// -[SCSpectaclesDevice supportsUsbImport]
// Type encoding: B16@0:8
// Implementation: 0x106e98f50

// -[SCSpectaclesDevice supportsPinLens]
// Type encoding: B16@0:8
// Implementation: 0x106e98f68

// -[SCSpectaclesDevice supportsLaunchLens]
// Type encoding: B16@0:8
// Implementation: 0x106e98f80

// -[SCSpectaclesDevice supportLensExplorer]
// Type encoding: B16@0:8
// Implementation: 0x106e98f98

// -[SCSpectaclesDevice isMarkContentTransferredNeeded]
// Type encoding: B16@0:8
// Implementation: 0x106e98fcc

// -[SCSpectaclesDevice shouldSortTasksInDescendingOrder]
// Type encoding: B16@0:8
// Implementation: 0x106e99008

// -[SCSpectaclesDevice supportsForgetNetwork]
// Type encoding: B16@0:8
// Implementation: 0x106e99044

// -[SCSpectaclesDevice supportsDeviceSecurityBootCompleteEvents]
// Type encoding: B16@0:8
// Implementation: 0x106e9905c

// -[SCSpectaclesDevice supportsBatteryPreservationMode]
// Type encoding: B16@0:8
// Implementation: 0x106e99074

// -[SCSpectaclesDevice supportsRealTimeDeletion]
// Type encoding: B16@0:8
// Implementation: 0x106e9908c

// -[SCSpectaclesDevice supportsRestartBeforeFetchingDebugLogs]
// Type encoding: B16@0:8
// Implementation: 0x106e990c8

// -[SCSpectaclesDevice supportRepeatedDeviceUpdateRequest]
// Type encoding: B16@0:8
// Implementation: 0x106e99104

// -[SCSpectaclesDevice debugMetaInfo]
// Type encoding: @16@0:8
// Implementation: 0x106e99140

// -[SCSpectaclesDevice serialNumber]
// Type encoding: @16@0:8
// Implementation: 0x106e99340

// -[SCSpectaclesDevice setSerialNumber:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e99348

// -[SCSpectaclesDevice displayName]
// Type encoding: @16@0:8
// Implementation: 0x106e99350

// -[SCSpectaclesDevice firmwareVersion]
// Type encoding: @16@0:8
// Implementation: 0x106e99358

// -[SCSpectaclesDevice setFirmwareVersion:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e99360

// -[SCSpectaclesDevice hardwareVersion]
// Type encoding: @16@0:8
// Implementation: 0x106e99390

// -[SCSpectaclesDevice setHardwareVersion:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e99398

// -[SCSpectaclesDevice setBatteryLevel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e993c8

// -[SCSpectaclesDevice setBatteryLevelStatus:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106e993f8

// -[SCSpectaclesDevice setGuppyBatteryLevel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e99400

// -[SCSpectaclesDevice voltageLevel]
// Type encoding: @16@0:8
// Implementation: 0x106e99430

// -[SCSpectaclesDevice setVoltageLevel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e99438

// -[SCSpectaclesDevice storageLevel]
// Type encoding: @16@0:8
// Implementation: 0x106e99468

// -[SCSpectaclesDevice setStorageLevel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e99470

// -[SCSpectaclesDevice storageLevelStatus]
// Type encoding: Q16@0:8
// Implementation: 0x106e994a0

// -[SCSpectaclesDevice setStorageLevelStatus:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106e994a8

// -[SCSpectaclesDevice hasSpaceToRecord]
// Type encoding: B16@0:8
// Implementation: 0x106e994b0

// -[SCSpectaclesDevice setHasSpaceToRecord:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e994b8

// -[SCSpectaclesDevice calibration]
// Type encoding: @16@0:8
// Implementation: 0x106e994c0

// -[SCSpectaclesDevice deviceNumber]
// Type encoding: q16@0:8
// Implementation: 0x106e994c8

// -[SCSpectaclesDevice setDeviceNumber:]
// Type encoding: v24@0:8q16
// Implementation: 0x106e994d0

// -[SCSpectaclesDevice color]
// Type encoding: q16@0:8
// Implementation: 0x106e994d8

// -[SCSpectaclesDevice setColor:]
// Type encoding: v24@0:8q16
// Implementation: 0x106e994e0

// -[SCSpectaclesDevice firstPairedTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x106e994e8

// -[SCSpectaclesDevice setFirstPairedTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x106e994f0

// -[SCSpectaclesDevice lastPairedStatusUpdatedTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x106e994f8

// -[SCSpectaclesDevice setLastPairedStatusUpdatedTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x106e99500

// -[SCSpectaclesDevice lastPairFromUnpairedStateTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x106e99508

// -[SCSpectaclesDevice lastNameUpdatedTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x106e99510

// -[SCSpectaclesDevice setLastNameUpdatedTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x106e99518

// -[SCSpectaclesDevice lastGPSAlmanacUpdatedTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x106e99520

// -[SCSpectaclesDevice setLastGPSAlmanacUpdatedTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x106e99528

// -[SCSpectaclesDevice lastConnectedTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x106e99530

// -[SCSpectaclesDevice setLastConnectedTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x106e99538

// -[SCSpectaclesDevice lastActivatedTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x106e99540

// -[SCSpectaclesDevice setLastActivatedTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x106e99548

// -[SCSpectaclesDevice locationEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106e99550

// -[SCSpectaclesDevice setLocationEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e99558

// -[SCSpectaclesDevice nordicTemperature]
// Type encoding: q16@0:8
// Implementation: 0x106e99560

// -[SCSpectaclesDevice setNordicTemperature:]
// Type encoding: v24@0:8q16
// Implementation: 0x106e99568

// -[SCSpectaclesDevice setCoulombCounterTemperature:]
// Type encoding: v24@0:8q16
// Implementation: 0x106e99570

// -[SCSpectaclesDevice setSocTemperature:]
// Type encoding: v24@0:8q16
// Implementation: 0x106e99578

// -[SCSpectaclesDevice wifiTemperature]
// Type encoding: q16@0:8
// Implementation: 0x106e99580

// -[SCSpectaclesDevice setWifiTemperature:]
// Type encoding: v24@0:8q16
// Implementation: 0x106e99588

// -[SCSpectaclesDevice lastTemperatureReportTime]
// Type encoding: @16@0:8
// Implementation: 0x106e99590

// -[SCSpectaclesDevice setLastTemperatureReportTime:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e99598

// -[SCSpectaclesDevice setTemperatureStatus:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106e995c8

// -[SCSpectaclesDevice wifiFrequency]
// Type encoding: @16@0:8
// Implementation: 0x106e995d0

// -[SCSpectaclesDevice hasReconciledContentList]
// Type encoding: B16@0:8
// Implementation: 0x106e995d8

// -[SCSpectaclesDevice setHasReconciledContentList:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e995e0

// -[SCSpectaclesDevice detectedBluetoothOverloadError]
// Type encoding: B16@0:8
// Implementation: 0x106e995e8

// -[SCSpectaclesDevice setDetectedBluetoothOverloadError:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e995f0

// -[SCSpectaclesDevice isCharging]
// Type encoding: B16@0:8
// Implementation: 0x106e995f8

// -[SCSpectaclesDevice setCharging:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e99600

// -[SCSpectaclesDevice hasChargingInfo]
// Type encoding: B16@0:8
// Implementation: 0x106e99608

// -[SCSpectaclesDevice setHasChargingInfo:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e99610

// -[SCSpectaclesDevice lastUploadAnalyticsLogsTime]
// Type encoding: @16@0:8
// Implementation: 0x106e99618

// -[SCSpectaclesDevice setLastUploadAnalyticsLogsTime:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e99620

// -[SCSpectaclesDevice lastConnectionFailureReason]
// Type encoding: Q16@0:8
// Implementation: 0x106e99650

// -[SCSpectaclesDevice setLastConnectionFailureReason:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106e99658

// -[SCSpectaclesDevice enableUsbImport]
// Type encoding: B16@0:8
// Implementation: 0x106e99660

// -[SCSpectaclesDevice countryCode]
// Type encoding: @16@0:8
// Implementation: 0x106e99668

// -[SCSpectaclesDevice setCountryCode:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e99670

// -[SCSpectaclesDevice encryptionKey]
// Type encoding: @16@0:8
// Implementation: 0x106e99678

// -[SCSpectaclesDevice setEncryptionKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e99680

// -[SCSpectaclesDevice identifier]
// Type encoding: @16@0:8
// Implementation: 0x106e996b0

// -[SCSpectaclesDevice setIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e996b8

// -[SCSpectaclesDevice lastMediaCountSeenInResponse]
// Type encoding: q16@0:8
// Implementation: 0x106e996e8

// -[SCSpectaclesDevice state]
// Type encoding: q16@0:8
// Implementation: 0x106e996f0

// -[SCSpectaclesDevice setupComplete]
// Type encoding: B16@0:8
// Implementation: 0x106e996f8

// -[SCSpectaclesDevice deviceIsUpdatingFromOTAPostPairingPhase]
// Type encoding: B16@0:8
// Implementation: 0x106e99700

// -[SCSpectaclesDevice setDeviceIsUpdatingFromOTAPostPairingPhase:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e99708

// -[SCSpectaclesDevice featureCatalog]
// Type encoding: @16@0:8
// Implementation: 0x106e99710

// -[SCSpectaclesDevice isConnectedToUSB]
// Type encoding: B16@0:8
// Implementation: 0x106e99728

// -[SCSpectaclesDevice timeOfCaptureLastViewed]
// Type encoding: @16@0:8
// Implementation: 0x106e99730

// -[SCSpectaclesDevice outstandingBluetoothRequest]
// Type encoding: @16@0:8
// Implementation: 0x106e99738

// -[SCSpectaclesDevice setOutstandingBluetoothRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e99740

// -[SCSpectaclesDevice performer]
// Type encoding: @16@0:8
// Implementation: 0x106e99770

// -[SCSpectaclesDevice setPerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e99778

// -[SCSpectaclesDevice transferDisabledReason]
// Type encoding: q16@0:8
// Implementation: 0x106e997a8

// -[SCSpectaclesDevice setTransferDisabledReason:]
// Type encoding: v24@0:8q16
// Implementation: 0x106e997b0

// -[SCSpectaclesDevice progressMonitor]
// Type encoding: @16@0:8
// Implementation: 0x106e997b8

// -[SCSpectaclesDevice setProgressMonitor:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e997c0

// -[SCSpectaclesDevice shouldRequestCrashReports]
// Type encoding: B16@0:8
// Implementation: 0x106e997f0

// -[SCSpectaclesDevice setShouldRequestCrashReports:]
// Type encoding: v20@0:8B16
// Implementation: 0x106e997f8

// -[SCSpectaclesDevice contentStore]
// Type encoding: @16@0:8
// Implementation: 0x106e99800

// -[SCSpectaclesDevice setContentStore:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e99808

// -[SCSpectaclesDevice deviceAnnouncer]
// Type encoding: @16@0:8
// Implementation: 0x106e99838

// -[SCSpectaclesDevice setDeviceAnnouncer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e99840

// -[SCSpectaclesDevice connectionHub]
// Type encoding: @16@0:8
// Implementation: 0x106e99870

// -[SCSpectaclesDevice genericMessageSender]
// Type encoding: @16@0:8
// Implementation: 0x106e99878

// -[SCSpectaclesDevice responseMonitors]
// Type encoding: @16@0:8
// Implementation: 0x106e99880

// -[SCSpectaclesDevice setResponseMonitors:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e99888

// -[SCSpectaclesDevice shortDisplayName]
// Type encoding: @16@0:8
// Implementation: 0x106e998b8

// -[SCSpectaclesDevice setShortDisplayName:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e998c0

// -[SCSpectaclesDevice connectionReason]
// Type encoding: q16@0:8
// Implementation: 0x106e998c8

// -[SCSpectaclesDevice setConnectionReason:]
// Type encoding: v24@0:8q16
// Implementation: 0x106e998d0

// -[SCSpectaclesDevice analyticsLogger]
// Type encoding: @16@0:8
// Implementation: 0x106e998d8

// -[SCSpectaclesDevice setAnalyticsLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e998f0

// -[SCSpectaclesDevice lastMediaCount]
// Type encoding: q16@0:8
// Implementation: 0x106e998fc

// -[SCSpectaclesDevice deviceIpAddress]
// Type encoding: @16@0:8
// Implementation: 0x106e99904

// -[SCSpectaclesDevice setDeviceIpAddress:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e9990c

// -[SCSpectaclesDevice firmwareUpdater]
// Type encoding: @16@0:8
// Implementation: 0x106e99914

// -[SCSpectaclesDevice setFirmwareUpdater:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e9991c

// -[SCSpectaclesDevice ambaWatchdog]
// Type encoding: @16@0:8
// Implementation: 0x106e9994c

// -[SCSpectaclesDevice setAmbaWatchdog:]
// Type encoding: v24@0:8@16
// Implementation: 0x106e99954

// -[SCSpectaclesDevice capabilities]
// Type encoding: Q16@0:8
// Implementation: 0x106e99984

// -[SCSpectaclesDevice .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106e9998c

// +[SCSpectaclesDevice supportsPsychomantisWithFirmware:hardware:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106e98f00

@end
