// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesLogger
// Superclass: NSObject
// Address: 0x112a844f8

@interface SCSpectaclesLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesLogger initWithServerMetadataFetcher:grapheneRegistry:blizzardLogger:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x100c595ec

// -[SCSpectaclesLogger _populateSpectaclesContentCaptureErrorEvent:device:errorType:timeOfCapture:]
// Type encoding: v48@0:8@16@24Q32@40
// Implementation: 0x105a33fc4

// -[SCSpectaclesLogger _populateSpectaclesTempTrackedEvent:device:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a34138

// -[SCSpectaclesLogger _populateTransferEventParameters:transferSession:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a342b8

// -[SCSpectaclesLogger _populateTransferEventParameters:info:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a34468

// -[SCSpectaclesLogger _populateTransferSessionParameters:transferSession:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a345d0

// -[SCSpectaclesLogger logTransferSessionStart:bluetoothBootTimeInMs:wifiBootTimeInMs:wifiConnectionStatus:]
// Type encoding: v48@0:8@16@24@32Q40
// Implementation: 0x105a349c0

// -[SCSpectaclesLogger logTransferSessionFinished:wifiConnectionStatus:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105a34ab4

// -[SCSpectaclesLogger logTransferSessionInterrupted:reason:wifiConnectionStatus:]
// Type encoding: v40@0:8@16Q24Q32
// Implementation: 0x105a34bec

// -[SCSpectaclesLogger logFileTransferForSession:durationOfThisFileTransfer:getHDstartSource:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x105a34d44

// -[SCSpectaclesLogger _popluateFileTransferMetric:withFileType:withTransferChannel:]
// Type encoding: @40@0:8@16q24q32
// Implementation: 0x105a35288

// -[SCSpectaclesLogger _popluateFileTransferMetric:withDeviceInfo:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105a35358

// -[SCSpectaclesLogger logMetadataTransferForSession:durationOfThisFileTransfer:fileSize:contentId:]
// Type encoding: v48@0:8@16@24q32@40
// Implementation: 0x105a354ec

// -[SCSpectaclesLogger logContentCaptureForSession:metadata:contentId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105a357a4

// -[SCSpectaclesLogger logTransferFailureWithTransferChannel:transferBatchID:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x105a36138

// -[SCSpectaclesLogger logCorruptContent:device:corruptionSource:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x105a361e8

// -[SCSpectaclesLogger logDeviceUnpaired:reason:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105a362a8

// -[SCSpectaclesLogger logNrfUnexpectedResponse:reason:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105a36340

// -[SCSpectaclesLogger logDebugReport:deviceId:firmwareErrorType:firmwareCrashType:transferSessionId:pairingSessionId:updateSessionId:firmwareVersion:hardwareVersion:frameColor:]
// Type encoding: v96@0:8@16@24@32@40@48@56@64@72@80q88
// Implementation: 0x105a363bc

// -[SCSpectaclesLogger logContentCaptureErrorForDevice:reason:timeOfCapture:]
// Type encoding: v40@0:8@16Q24@32
// Implementation: 0x105a36720

// -[SCSpectaclesLogger logSpectaclesConnectionStartForTransfer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a367b4

// -[SCSpectaclesLogger logSpectaclesConnectionSuccessForTransfer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a36848

// -[SCSpectaclesLogger logSpectaclesConnectionFailureForUpdate:failureReason:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a368dc

// -[SCSpectaclesLogger logDeviceStatusUpdate:videoCount:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105a36998

// -[SCSpectaclesLogger _populateOnboardingEventParameters:onboardingSessionInfo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a36c00

// -[SCSpectaclesLogger logOnboardingStart:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a36d98

// -[SCSpectaclesLogger logOnboardingPageChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a36e04

// -[SCSpectaclesLogger logOnboardingExit:exitSource:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105a36e70

// -[SCSpectaclesLogger _logSpectaclesSettingsActionWithType:]
// Type encoding: v24@0:8q16
// Implementation: 0x105a36ef8

// -[SCSpectaclesLogger _logSpectaclesSettingsDeviceActionWithType:device:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x105a36f48

// -[SCSpectaclesLogger _logSpectaclesSettingsDeviceActionWithType:device:failureReason:]
// Type encoding: v40@0:8q16@24q32
// Implementation: 0x105a36f50

// -[SCSpectaclesLogger logUserEnterSettingsPageWithNumDevices:deviceState:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x105a370f0

// -[SCSpectaclesLogger logUserExitSettingsPageWithNumDevices:deviceState:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x105a37188

// -[SCSpectaclesLogger logSettingsUserVisitedNeedHelpPage]
// Type encoding: v16@0:8
// Implementation: 0x105a371fc

// -[SCSpectaclesLogger logSettingsUserVisitedGettingStartedPage]
// Type encoding: v16@0:8
// Implementation: 0x105a37204

// -[SCSpectaclesLogger logSettingsUserPressedConnectDevice:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a3720c

// -[SCSpectaclesLogger logSettingsUserConnectDeviceFailure:failureReason:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105a37218

// -[SCSpectaclesLogger logSettingsUserConnectDeviceSuccess:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a37228

// -[SCSpectaclesLogger logSettingsUserVisitedCommerceWebsiteWithNumDevices:deviceState:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x105a37234

// -[SCSpectaclesLogger _populateGetHdEventParameters:deviceId:firmwareVersion:hardwareVersion:deviceColor:]
// Type encoding: v56@0:8@16@24@32@40q48
// Implementation: 0x105a372a8

// -[SCSpectaclesLogger _populateGetHdEventFlowParameters:getHdSessionInfo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a37380

// -[SCSpectaclesLogger _logHDUntransferredContentSeenByUser:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a374a8

// -[SCSpectaclesLogger logSpectaclesHDUntransferredContentSeenByUser:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a37610

// -[SCSpectaclesLogger logSpectaclesTransferHDButtonPressed:deviceStatusState:fromSource:]
// Type encoding: v40@0:8@16q24Q32
// Implementation: 0x105a37708

// -[SCSpectaclesLogger logSpectaclesHDTransferInitiation:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a37828

// -[SCSpectaclesLogger logHDFlowStartedWithBatchId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a37c3c

// -[SCSpectaclesLogger logSpectaclesTransferHDFlowStarted:fromSource:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105a37ce0

// -[SCSpectaclesLogger logSpectaclesTransferHDFlowCancelled:fromSource:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105a37d64

// -[SCSpectaclesLogger logCustomExportStart:source:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105a37de4

// -[SCSpectaclesLogger logCustomExportCancel:source:cancellationSource:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x105a37e18

// -[SCSpectaclesLogger logCustomExportForContentId:deviceId:lensInfo:source:action:shareChannel:]
// Type encoding: v64@0:8@16@24@32q40q48@56
// Implementation: 0x105a37e4c

// -[SCSpectaclesLogger _logCustomExportForContentId:deviceId:lensInfo:action:source:cancellationSource:shareChannel:]
// Type encoding: v72@0:8@16@24@32q40q48q56@64
// Implementation: 0x105a37e7c

// -[SCSpectaclesLogger logNotificationDisplayed:withSystem:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105a37f94

// -[SCSpectaclesLogger _populateSpectaclesTrackedEvent:device:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a380c8

// -[SCSpectaclesLogger _populateAndLogFirmwareUpdateEvent:device:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a381d4

// -[SCSpectaclesLogger logFirmwareUpdateChecked:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a38228

// -[SCSpectaclesLogger logFirmwareUpdatePromptShown:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a38288

// -[SCSpectaclesLogger logFirmwareUpdatePromptDismissed:promptAccepted:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105a382f0

// -[SCSpectaclesLogger _populateAndLogFirmwareUpdateSessionEvent:info:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a38364

// -[SCSpectaclesLogger logFirmwareUpdateStarted:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a3853c

// -[SCSpectaclesLogger logFirmwareUpdateBinaryRevertStarted:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a3859c

// -[SCSpectaclesLogger logFirmwareUpdateBinaryRevertFinished:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a385fc

// -[SCSpectaclesLogger logFirmwareUpdatePatchDownloadStarted:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a3865c

// -[SCSpectaclesLogger logFirmwareUpdatePatchDownloadFinished:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a386bc

// -[SCSpectaclesLogger logFirmwareUpdatePatchTransferStarted:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a3871c

// -[SCSpectaclesLogger logFirmwareUpdatePatchTransferFinished:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a3877c

// -[SCSpectaclesLogger logFirmwareUpdatePatchApplyStarted:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a387dc

// -[SCSpectaclesLogger logFirmwareUpdatePatchApplyFinished:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a3883c

// -[SCSpectaclesLogger logFirmwareUpdateScheduled:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a3889c

// -[SCSpectaclesLogger logFirmwareUpdateFlashStarted:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a388fc

// -[SCSpectaclesLogger logFirmwareUpdateSucceeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a3895c

// -[SCSpectaclesLogger logFirmwareUpdateFailed:reason:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105a389bc

// -[SCSpectaclesLogger logSpectaclesConnectionStartForUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a38a44

// -[SCSpectaclesLogger logSpectaclesConnectionSuccessForUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a38ad8

// -[SCSpectaclesLogger logSpectaclesConnectionFailureForTransfer:failureReason:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a38b6c

// -[SCSpectaclesLogger _populateConnectionEventParameters:connectionInfo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a38c28

// -[SCSpectaclesLogger logHomeWifiViewOpened:numAddedNetworks:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105a38df8

// -[SCSpectaclesLogger logHomeWifiShareFlowStarted:isResharingCredentials:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105a38e80

// -[SCSpectaclesLogger logHomeWifiShareFlowShared:isResharingCredentials:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105a38efc

// -[SCSpectaclesLogger logHomeWifiShareFlowConnected:isResharingCredentials:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105a38f78

// -[SCSpectaclesLogger logHomeWifiShareFlowFailed:isResharingCredentials:failureReason:]
// Type encoding: v36@0:8@16B24q28
// Implementation: 0x105a38ff4

// -[SCSpectaclesLogger logHomeWifiRemoveNetwork:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a39088

// -[SCSpectaclesLogger logHomeWifiUploadUpdate:updateType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105a390f4

// -[SCSpectaclesLogger logHomeWifiRefreshTokenInvalid:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a39170

// -[SCSpectaclesLogger logBoomboxSnapView:lensInfo:entryId:durationSec:fileType:deviceId:firmwareVersion:hardwareVersion:deviceColor:sessionId:viewSource:]
// Type encoding: v104@0:8@16@24@32d40q48@56@64@72q80@88q96
// Implementation: 0x105a391dc

// -[SCSpectaclesLogger logBoomboxStoryView:durationSec:numVideos:numPhotos:deviceId:firmwareVersion:hardwareVersion:deviceColor:sessionId:viewSource:]
// Type encoding: v96@0:8@16d24Q32Q40@48@56@64q72@80q88
// Implementation: 0x105a39380

// -[SCSpectaclesLogger _populateGrapheneMetric:pairingSessionInfo:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105a394f0

// -[SCSpectaclesLogger _populatePairingEventParameters:pairingSessionInfo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a396b8

// -[SCSpectaclesLogger logPairingStarted:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a3989c

// -[SCSpectaclesLogger logPairingBleDetected:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a3998c

// -[SCSpectaclesLogger logPairingBackupStart:failureReason:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105a399f8

// -[SCSpectaclesLogger logPairingBackupDetected:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a39aa0

// -[SCSpectaclesLogger logPairingBleConnected:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a39b0c

// -[SCSpectaclesLogger logPairingNameDialogDisplayed:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a39b78

// -[SCSpectaclesLogger logPairingNameChanged:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a39be4

// -[SCSpectaclesLogger logPairingLocationPermissionEnabled:pairingSessionInfo:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x105a39c50

// -[SCSpectaclesLogger logPairingTermsOfServiceOpened:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a39cd0

// -[SCSpectaclesLogger logPairingTermsOfServiceClosed:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a39d3c

// -[SCSpectaclesLogger logPairingTermsOfServiceAccepted:withIsBIPA:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105a39da8

// -[SCSpectaclesLogger logPairingBleSynced:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a39e3c

// -[SCSpectaclesLogger logPairingSuccessful:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a39ea8

// -[SCSpectaclesLogger logPairingFailure:failureReason:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105a39ffc

// -[SCSpectaclesLogger logPairingRetry:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a3a18c

// -[SCSpectaclesLogger logPairingCancel:cancellationSource:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105a3a1f8

// -[SCSpectaclesLogger logPairingInactiveAlertShown:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a3a39c

// -[SCSpectaclesLogger logPairingInactiveAlertKeepPairingPressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a3a408

// -[SCSpectaclesLogger logPairingInactiveAlertSupportSiteLinkPressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a3a474

// -[SCSpectaclesLogger _logPairingBackupDetectedNotificationPressed]
// Type encoding: v16@0:8
// Implementation: 0x105a3a4e0

// -[SCSpectaclesLogger logPairingNeedHelpPressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a3a51c

// -[SCSpectaclesLogger logSpectaclesConnectionStartForPairing:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a3a588

// -[SCSpectaclesLogger logSpectaclesConnectionSuccessForPairing:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a3a61c

// -[SCSpectaclesLogger logContentPageLoadCompleteForDevice:numVideos:numPhotos:totalLoadTimeMs:]
// Type encoding: v48@0:8@16Q24Q32d40
// Implementation: 0x105a3a6b0

// -[SCSpectaclesLogger logContentPageActionStartForDevice:eventType:numVideos:numPhotos:mediaIds:]
// Type encoding: v56@0:8@16q24Q32Q40@48
// Implementation: 0x105a3a75c

// -[SCSpectaclesLogger logContentPageActionCompleteForDevice:eventType:numVideos:numPhotos:mediaIds:isSuccessful:errorMsg:latencyMs:]
// Type encoding: v76@0:8@16q24Q32Q40@48B56@60d68
// Implementation: 0x105a3a82c

// -[SCSpectaclesLogger _spectaclesContentPageActionMediaTypeFromVideoCount:imageCount:]
// Type encoding: q32@0:8Q16Q24
// Implementation: 0x105a3a94c

// -[SCSpectaclesLogger logContentPageShareForDevice:contentId:mediaType:createTime:duration:]
// Type encoding: v48@0:8@16@24i32@36f44
// Implementation: 0x105a3a968

// -[SCSpectaclesLogger logDeviceSecuritySettingsForDevice:settingsSource:settingsActionType:lockOutTime:failureReason:]
// Type encoding: v56@0:8@16q24q32@40q48
// Implementation: 0x105a3aaf4

// -[SCSpectaclesLogger logStartFlightImuCalibrationForDevice:durationSec:phase:]
// Type encoding: v40@0:8@16d24q32
// Implementation: 0x105a3abcc

// -[SCSpectaclesLogger logStopFlightImuCalibrationForDevice:durationSec:phase:exitSource:]
// Type encoding: v48@0:8@16d24q32Q40
// Implementation: 0x105a3ac60

// -[SCSpectaclesLogger logKnobsSettingChangeForKnob:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a3ad18

// -[SCSpectaclesLogger _knobSettingIdStringForKnobIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x105a3ae64

// -[SCSpectaclesLogger _knobSettingSourceStringForKnobIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x105a3affc

// -[SCSpectaclesLogger _knobSettingValueStringForKnobInput:]
// Type encoding: @24@0:8@16
// Implementation: 0x105a3b130

// -[SCSpectaclesLogger _knobSettingsActionPayloadJSONStringFromKey:sourceString:value:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105a3b670

// -[SCSpectaclesLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a3b7bc

@end
