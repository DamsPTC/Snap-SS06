// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesCheeriosOTAManager
// Superclass: NSObject
// Address: 0x112a85858

@interface SCSpectaclesCheeriosOTAManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: autoUpdateSettingsObservable; attributes: T@"SCObservable",R,N,V_autoUpdateSettingsObservable
// Property: stateObservable; attributes: T@"SCObservable",R,N,V_stateObservable

// -[SCSpectaclesCheeriosOTAManager initWithCurrentDevice:deviceActivationService:managingDataFlow:networkConnectivityMonitor:firmwareUpdateClient:otaPackageFetcher:spectaclesManager:devicePreferences:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x105a5d9d0

// -[SCSpectaclesCheeriosOTAManager syncOTAUpdateState]
// Type encoding: v16@0:8
// Implementation: 0x105a5dc10

// -[SCSpectaclesCheeriosOTAManager updateOTA]
// Type encoding: v16@0:8
// Implementation: 0x105a5dd3c

// -[SCSpectaclesCheeriosOTAManager updatingOTA]
// Type encoding: B16@0:8
// Implementation: 0x105a5ddd8

// -[SCSpectaclesCheeriosOTAManager currentVersionString]
// Type encoding: @16@0:8
// Implementation: 0x105a5de00

// -[SCSpectaclesCheeriosOTAManager updateAvailableVersionString]
// Type encoding: @16@0:8
// Implementation: 0x105a5de60

// -[SCSpectaclesCheeriosOTAManager hasRequiredUpdate]
// Type encoding: B16@0:8
// Implementation: 0x105a5dec4

// -[SCSpectaclesCheeriosOTAManager _handleConnectionState:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a5decc

// -[SCSpectaclesCheeriosOTAManager autoUpdateManager]
// Type encoding: @16@0:8
// Implementation: 0x105a5dfc8

// -[SCSpectaclesCheeriosOTAManager syncOTAAutoUpdateEnabledSettings]
// Type encoding: v16@0:8
// Implementation: 0x105a5dfd0

// -[SCSpectaclesCheeriosOTAManager setOTAAutoUpdateEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x105a5e038

// -[SCSpectaclesCheeriosOTAManager spectaclesDevice:didUpdateInfo:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105a5e190

// -[SCSpectaclesCheeriosOTAManager _freezeActivateDeviceForFirmwareUpdate]
// Type encoding: v16@0:8
// Implementation: 0x105a5e250

// -[SCSpectaclesCheeriosOTAManager _unfreezeActivateDevice]
// Type encoding: v16@0:8
// Implementation: 0x105a5e2dc

// -[SCSpectaclesCheeriosOTAManager _restartOTASync]
// Type encoding: v16@0:8
// Implementation: 0x105a5e308

// -[SCSpectaclesCheeriosOTAManager _startRestartTimer]
// Type encoding: v16@0:8
// Implementation: 0x105a5e40c

// -[SCSpectaclesCheeriosOTAManager _cancelRestartTimer]
// Type encoding: v16@0:8
// Implementation: 0x105a5e52c

// -[SCSpectaclesCheeriosOTAManager _disableTransfer]
// Type encoding: v16@0:8
// Implementation: 0x105a5e568

// -[SCSpectaclesCheeriosOTAManager _enableTransfer]
// Type encoding: v16@0:8
// Implementation: 0x105a5e5b4

// -[SCSpectaclesCheeriosOTAManager _canRequestOTAUpdateFromCurrentOTAUpdateStatus]
// Type encoding: B16@0:8
// Implementation: 0x105a5e600

// -[SCSpectaclesCheeriosOTAManager _didChangeOtaTag]
// Type encoding: B16@0:8
// Implementation: 0x105a5e684

// -[SCSpectaclesCheeriosOTAManager _canRequestAvailabilityCheck]
// Type encoding: B16@0:8
// Implementation: 0x105a5e6f0

// -[SCSpectaclesCheeriosOTAManager _startUpload]
// Type encoding: v16@0:8
// Implementation: 0x105a5e760

// -[SCSpectaclesCheeriosOTAManager _stopUpload]
// Type encoding: v16@0:8
// Implementation: 0x105a5e94c

// -[SCSpectaclesCheeriosOTAManager _setOTAUpdateAppState:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a5e9dc

// -[SCSpectaclesCheeriosOTAManager _shouldAutomaticallyResetWhenFailed]
// Type encoding: B16@0:8
// Implementation: 0x105a5ea94

// -[SCSpectaclesCheeriosOTAManager _checkForUpdate]
// Type encoding: v16@0:8
// Implementation: 0x105a5eb9c

// -[SCSpectaclesCheeriosOTAManager _checkFirmwareVersionFromServerInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a5ee18

// -[SCSpectaclesCheeriosOTAManager _downloadUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a5f14c

// -[SCSpectaclesCheeriosOTAManager _startUpdateWithContentResult:packageServerInfo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a5f410

// -[SCSpectaclesCheeriosOTAManager _downloadProgressState:]
// Type encoding: v24@0:8q16
// Implementation: 0x105a5f6bc

// -[SCSpectaclesCheeriosOTAManager _isEligibleForUpdateDownload]
// Type encoding: Q16@0:8
// Implementation: 0x105a5f79c

// -[SCSpectaclesCheeriosOTAManager _isBatteryCharging]
// Type encoding: B16@0:8
// Implementation: 0x105a5f810

// -[SCSpectaclesCheeriosOTAManager _isEligibleForUpdate]
// Type encoding: Q16@0:8
// Implementation: 0x105a5f8b0

// -[SCSpectaclesCheeriosOTAManager _isEligibleForAutomaticUpdateTransfer]
// Type encoding: B16@0:8
// Implementation: 0x105a5fa04

// -[SCSpectaclesCheeriosOTAManager _setFailedOTAUpdateStateWithError:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105a5fa6c

// -[SCSpectaclesCheeriosOTAManager _handleOTAUpdateErrorType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105a5faec

// -[SCSpectaclesCheeriosOTAManager _setServerInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a5fb98

// -[SCSpectaclesCheeriosOTAManager _handleRequiredUpdateStatus:]
// Type encoding: v20@0:8B16
// Implementation: 0x105a5fbc8

// -[SCSpectaclesCheeriosOTAManager _customOTATag]
// Type encoding: @16@0:8
// Implementation: 0x105a5fc5c

// -[SCSpectaclesCheeriosOTAManager _setupOTAStateObservable]
// Type encoding: v16@0:8
// Implementation: 0x105a5fcb8

// -[SCSpectaclesCheeriosOTAManager _setupDeviceConnectionStateObservable]
// Type encoding: v16@0:8
// Implementation: 0x105a5fe4c

// -[SCSpectaclesCheeriosOTAManager _startReachabilityWatcher]
// Type encoding: v16@0:8
// Implementation: 0x105a5fff0

// -[SCSpectaclesCheeriosOTAManager _networkConnectivityStatusDidChange:]
// Type encoding: v24@0:8q16
// Implementation: 0x105a6017c

// -[SCSpectaclesCheeriosOTAManager _handleOTAUpdateEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a601dc

// -[SCSpectaclesCheeriosOTAManager _handleOTAUpdateWasScheduledSuccessfully:]
// Type encoding: v20@0:8B16
// Implementation: 0x105a606a0

// -[SCSpectaclesCheeriosOTAManager _handleOTAUpdateWasCancelledSuccessfully:]
// Type encoding: v20@0:8B16
// Implementation: 0x105a60720

// -[SCSpectaclesCheeriosOTAManager _isAutomaticUpdatesEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105a607a0

// -[SCSpectaclesCheeriosOTAManager _isNewestFirmwareBinaryOnCheeriosDevice]
// Type encoding: B16@0:8
// Implementation: 0x105a607e8

// -[SCSpectaclesCheeriosOTAManager _verifyChecksum:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a60834

// -[SCSpectaclesCheeriosOTAManager dataFlowsRequest:failedToExecutedTask:error:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105a608e4

// -[SCSpectaclesCheeriosOTAManager dataFlowsRequestCompleted:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a608f8

// -[SCSpectaclesCheeriosOTAManager dataFlowsRequestCancelled:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a60950

// -[SCSpectaclesCheeriosOTAManager dataFlowsRequest:failedWithError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a60964

// -[SCSpectaclesCheeriosOTAManager dataFlowsRequest:updatedProgressForTask:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a60978

// -[SCSpectaclesCheeriosOTAManager stateObservable]
// Type encoding: @16@0:8
// Implementation: 0x105a60ad0

// -[SCSpectaclesCheeriosOTAManager autoUpdateSettingsObservable]
// Type encoding: @16@0:8
// Implementation: 0x105a60ad8

// -[SCSpectaclesCheeriosOTAManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a60ae0

@end
