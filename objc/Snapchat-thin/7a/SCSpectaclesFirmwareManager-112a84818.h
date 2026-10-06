// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesFirmwareManager
// Superclass: NSObject
// Address: 0x112a84818

@interface SCSpectaclesFirmwareManager

// Property: eventAnnouncer; attributes: T@"SCSpectaclesFirmwareUpdateEventListenerAnnouncer",&,N,V_eventAnnouncer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesFirmwareManager initWithServerMetadataFetcher:featureSettingsService:spectaclesManager:deviceActivationService:analyticsLogger:managingDataFlow:networkConnectivityMonitor:networkConnectivityServices:userTrackedLogger:temporaryFileWriter:crashLogger:]
// Type encoding: @104@0:8@16@24@32@40@48@56@64@72@80@88@96
// Implementation: 0x100c5ac54

// -[SCSpectaclesFirmwareManager stateForDevice:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105a46b20

// -[SCSpectaclesFirmwareManager updateProgressForDevice:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105a46b68

// -[SCSpectaclesFirmwareManager updateFirmwareVersionForDevice:]
// Type encoding: @24@0:8@16
// Implementation: 0x105a46bac

// -[SCSpectaclesFirmwareManager checkUpdateForDevice:]
// Type encoding: B24@0:8@16
// Implementation: 0x105a46c00

// -[SCSpectaclesFirmwareManager _startUpdatingDevice:]
// Type encoding: B24@0:8@16
// Implementation: 0x105a46dbc

// -[SCSpectaclesFirmwareManager addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a46f10

// -[SCSpectaclesFirmwareManager removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a46f18

// -[SCSpectaclesFirmwareManager prefetchNewFirmwareVersion]
// Type encoding: v16@0:8
// Implementation: 0x105a46f20

// -[SCSpectaclesFirmwareManager _activeAnnouncer]
// Type encoding: @16@0:8
// Implementation: 0x105a46ffc

// -[SCSpectaclesFirmwareManager _startUpdatingDevice:updateIsActive:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105a47038

// -[SCSpectaclesFirmwareManager _startPassiveUpdates]
// Type encoding: v16@0:8
// Implementation: 0x105a47228

// -[SCSpectaclesFirmwareManager _prefetchNewFirmwareVersion]
// Type encoding: v16@0:8
// Implementation: 0x105a473e0

// -[SCSpectaclesFirmwareManager updateTagFromTweak:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a47514

// -[SCSpectaclesFirmwareManager updateAvailableForDevice:]
// Type encoding: B24@0:8@16
// Implementation: 0x105a47628

// -[SCSpectaclesFirmwareManager updateRequiredForDevice:]
// Type encoding: B24@0:8@16
// Implementation: 0x105a476d0

// -[SCSpectaclesFirmwareManager _attemptStartUpdatingDevice:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a47754

// -[SCSpectaclesFirmwareManager showUpdateAlertForDevice:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a47844

// -[SCSpectaclesFirmwareManager startUpdateForDevice:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a47d84

// -[SCSpectaclesFirmwareManager tagStoreDidFetchLatestVersion:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a47dec

// -[SCSpectaclesFirmwareManager _showMetadataFetchFailureMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a480a0

// -[SCSpectaclesFirmwareManager firmwareDownloader:didFailMetadataFetch:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105a480a4

// -[SCSpectaclesFirmwareManager firmwareDownloader:didFetchTargetDigest:targetVersion:intermediateDigest:intermediateVersion:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x105a482a8

// -[SCSpectaclesFirmwareManager firmwareDownloaderDidFailPatchDownload:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a48528

// -[SCSpectaclesFirmwareManager firmwareDownloader:didDownloadPatchToPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a48630

// -[SCSpectaclesFirmwareManager spectaclesDeviceDidPair:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a487a4

// -[SCSpectaclesFirmwareManager spectaclesDeviceDidUpdateState:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a48924

// -[SCSpectaclesFirmwareManager spectaclesDevice:didUpdateInfo:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105a48ae4

// -[SCSpectaclesFirmwareManager spectaclesDevice:didFetchFirmwareUpdateDigest:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a48be4

// -[SCSpectaclesFirmwareManager spectaclesDevice:onFirmwareUpdate:progress:]
// Type encoding: v36@0:8@16Q24f32
// Implementation: 0x105a48e08

// -[SCSpectaclesFirmwareManager spectaclesDevice:didCompletedScheduledUpdateWithUserInfo:error:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105a49248

// -[SCSpectaclesFirmwareManager spectaclesTransferSession:onTransferUpdate:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105a492f0

// -[SCSpectaclesFirmwareManager _updateWindowDuration]
// Type encoding: d16@0:8
// Implementation: 0x105a49308

// -[SCSpectaclesFirmwareManager _updateWindowStart]
// Type encoding: @16@0:8
// Implementation: 0x105a49314

// -[SCSpectaclesFirmwareManager _failCurrentUpdate:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105a49344

// -[SCSpectaclesFirmwareManager _succeedIntermediateUpdate]
// Type encoding: v16@0:8
// Implementation: 0x105a49488

// -[SCSpectaclesFirmwareManager _succeedCurrentUpdate]
// Type encoding: v16@0:8
// Implementation: 0x105a49498

// -[SCSpectaclesFirmwareManager _transitionToState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105a49544

// -[SCSpectaclesFirmwareManager _startProgressTimer]
// Type encoding: v16@0:8
// Implementation: 0x105a497c8

// -[SCSpectaclesFirmwareManager _startFlashUpdateFailureTimer]
// Type encoding: v16@0:8
// Implementation: 0x105a49938

// -[SCSpectaclesFirmwareManager _startTransferUpdateFailureTimer]
// Type encoding: v16@0:8
// Implementation: 0x105a49a70

// -[SCSpectaclesFirmwareManager _startPrepareUpdateFailureTimer]
// Type encoding: v16@0:8
// Implementation: 0x105a49be0

// -[SCSpectaclesFirmwareManager _revertFirmwareBinary]
// Type encoding: v16@0:8
// Implementation: 0x105a49d18

// -[SCSpectaclesFirmwareManager _startCheckingForUpdate]
// Type encoding: v16@0:8
// Implementation: 0x105a49dfc

// -[SCSpectaclesFirmwareManager _startDownloadingPatch]
// Type encoding: v16@0:8
// Implementation: 0x105a49e6c

// -[SCSpectaclesFirmwareManager _startUpdatingPatch]
// Type encoding: v16@0:8
// Implementation: 0x105a49e74

// -[SCSpectaclesFirmwareManager _attemptFlashUpdate]
// Type encoding: v16@0:8
// Implementation: 0x105a49ee0

// -[SCSpectaclesFirmwareManager _isTargetDeviceBatteryLevelLowForFirmwareUpdate]
// Type encoding: B16@0:8
// Implementation: 0x105a4a0b0

// -[SCSpectaclesFirmwareManager _hasValidUpdateParameters]
// Type encoding: B16@0:8
// Implementation: 0x105a4a1fc

// -[SCSpectaclesFirmwareManager _targetDeviceActivelyUpdating]
// Type encoding: B16@0:8
// Implementation: 0x105a4a230

// -[SCSpectaclesFirmwareManager _targetDeviceCheckingDownloadingOrTransferring]
// Type encoding: B16@0:8
// Implementation: 0x105a4a254

// -[SCSpectaclesFirmwareManager _updateStateForManagerState:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x105a4a268

// -[SCSpectaclesFirmwareManager _analyticsUserInfo]
// Type encoding: @16@0:8
// Implementation: 0x105a4a28c

// -[SCSpectaclesFirmwareManager _specsConnectionInfo]
// Type encoding: @16@0:8
// Implementation: 0x105a4a41c

// -[SCSpectaclesFirmwareManager _logFirmwareUpdateSuccessWithUserInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a4a748

// -[SCSpectaclesFirmwareManager _logFirmwareUpdateFailureWithUserInfo:reason:errorString:]
// Type encoding: v40@0:8@16Q24@32
// Implementation: 0x105a4a778

// -[SCSpectaclesFirmwareManager _logFirmwareUpdateFinished:error:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x105a4a7f4

// -[SCSpectaclesFirmwareManager eventAnnouncer]
// Type encoding: @16@0:8
// Implementation: 0x105a4a8a8

// -[SCSpectaclesFirmwareManager setEventAnnouncer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a4a8b0

// -[SCSpectaclesFirmwareManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a4a8e0

// +[SCSpectaclesFirmwareManager requiredBatteryLevelForFirmwareUpdate:]
// Type encoding: q24@0:8@16
// Implementation: 0x105a46a74

// +[SCSpectaclesFirmwareManager _errorStringForFailureReason:]
// Type encoding: @24@0:8Q16
// Implementation: 0x105a4a750

@end
