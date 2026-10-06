// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesContentPageBusinessLogic
// Superclass: SCBusinessLogic
// Address: 0x112a23568

@interface SCSpectaclesContentPageBusinessLogic

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesContentPageBusinessLogic initWithDevice:delegate:spectaclesManager:spectaclesStartWiFiController:exportWorkflowBuilder:removeContentDelay:exitContentPageDelay:preferences:analyticsLogger:interceptorsProvider:interceptorsCheck:]
// Type encoding: @104@0:8@16@24@32@40@?48q56q64@72@80@88@96
// Implementation: 0x10521abec

// -[SCSpectaclesContentPageBusinessLogic begin]
// Type encoding: v16@0:8
// Implementation: 0x10521aed0

// -[SCSpectaclesContentPageBusinessLogic viewModel]
// Type encoding: @16@0:8
// Implementation: 0x10521b094

// -[SCSpectaclesContentPageBusinessLogic handleAction:]
// Type encoding: v24@0:8@16
// Implementation: 0x10521b3e0

// -[SCSpectaclesContentPageBusinessLogic _refreshAllContents]
// Type encoding: v16@0:8
// Implementation: 0x10521b54c

// -[SCSpectaclesContentPageBusinessLogic _importContents:]
// Type encoding: v24@0:8@16
// Implementation: 0x10521ba8c

// -[SCSpectaclesContentPageBusinessLogic _performImportContents:]
// Type encoding: v24@0:8@16
// Implementation: 0x10521bfa4

// -[SCSpectaclesContentPageBusinessLogic _exportContents:]
// Type encoding: v24@0:8@16
// Implementation: 0x10521c05c

// -[SCSpectaclesContentPageBusinessLogic _performExportContents:]
// Type encoding: v24@0:8@16
// Implementation: 0x10521c618

// -[SCSpectaclesContentPageBusinessLogic _calculateMediaTypeCounts:]
// Type encoding: v24@0:8@16
// Implementation: 0x10521c6dc

// -[SCSpectaclesContentPageBusinessLogic _deleteContents:]
// Type encoding: v24@0:8@16
// Implementation: 0x10521c854

// -[SCSpectaclesContentPageBusinessLogic _exitContentPageWithStopWiFiDelay:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10521c9c8

// -[SCSpectaclesContentPageBusinessLogic _exitContentPageIfNoContentExits]
// Type encoding: v16@0:8
// Implementation: 0x10521ca44

// -[SCSpectaclesContentPageBusinessLogic _startWiFiIfPossible]
// Type encoding: v16@0:8
// Implementation: 0x10521cc44

// -[SCSpectaclesContentPageBusinessLogic _performStartWiFi]
// Type encoding: v16@0:8
// Implementation: 0x10521cf08

// -[SCSpectaclesContentPageBusinessLogic _stopWifiWithDelay:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10521cfa0

// -[SCSpectaclesContentPageBusinessLogic _tapWiFiButton]
// Type encoding: v16@0:8
// Implementation: 0x10521cfe4

// -[SCSpectaclesContentPageBusinessLogic _updateViewModelsForExportTransferSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x10521d000

// -[SCSpectaclesContentPageBusinessLogic _completeCurrentExportingContent]
// Type encoding: v16@0:8
// Implementation: 0x10521d1e4

// -[SCSpectaclesContentPageBusinessLogic _updateViewModelsForImportTransferSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x10521d2e8

// -[SCSpectaclesContentPageBusinessLogic _resetContentStatesAndUpdateViewModels]
// Type encoding: v16@0:8
// Implementation: 0x10521d808

// -[SCSpectaclesContentPageBusinessLogic _setContentStateDict:]
// Type encoding: v24@0:8@16
// Implementation: 0x10521d96c

// -[SCSpectaclesContentPageBusinessLogic _contentStateForContentId:]
// Type encoding: Q24@0:8@16
// Implementation: 0x10521da10

// -[SCSpectaclesContentPageBusinessLogic _removeContents:afterDelayInSeconds:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10521da68

// -[SCSpectaclesContentPageBusinessLogic _removeContentsImmediately:]
// Type encoding: v24@0:8@16
// Implementation: 0x10521dc90

// -[SCSpectaclesContentPageBusinessLogic _emitViewModelWithUpdatedContentIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x10521e03c

// -[SCSpectaclesContentPageBusinessLogic _progressBarViewModel]
// Type encoding: @16@0:8
// Implementation: 0x10521e1fc

// -[SCSpectaclesContentPageBusinessLogic _formatNumber:]
// Type encoding: @24@0:8@16
// Implementation: 0x10521e43c

// -[SCSpectaclesContentPageBusinessLogic _setContentLastViewedDate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10521e4c8

// -[SCSpectaclesContentPageBusinessLogic _setupConnectionInterruptedObservable]
// Type encoding: v16@0:8
// Implementation: 0x10521e520

// -[SCSpectaclesContentPageBusinessLogic _isUserSelectedTooManyContent]
// Type encoding: B16@0:8
// Implementation: 0x10521e7b0

// -[SCSpectaclesContentPageBusinessLogic _extraDiskSpaceNeededToTransferContents:]
// Type encoding: q24@0:8@16
// Implementation: 0x10521e7e4

// -[SCSpectaclesContentPageBusinessLogic _isTransferInProgress]
// Type encoding: B16@0:8
// Implementation: 0x10521e920

// -[SCSpectaclesContentPageBusinessLogic spectaclesStartWiFiController:didConnectWiFiWithDevice:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10521e978

// -[SCSpectaclesContentPageBusinessLogic spectaclesStartWiFiController:didDisconnectWiFiWithDevice:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10521eac8

// -[SCSpectaclesContentPageBusinessLogic spectaclesStartWiFiController:failedToConnectWiFiWithDevice:error:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10521ec18

// -[SCSpectaclesContentPageBusinessLogic spectaclesStartWiFiController:userRejectedWiFiWithDevice:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10521ed84

// -[SCSpectaclesContentPageBusinessLogic _handleWiFiDidConnect]
// Type encoding: v16@0:8
// Implementation: 0x10521eed4

// -[SCSpectaclesContentPageBusinessLogic _handleWiFiDidDisconnect]
// Type encoding: v16@0:8
// Implementation: 0x10521ef84

// -[SCSpectaclesContentPageBusinessLogic exportWorkflowWillStartPostShare:stopWiFi:showLoadingOverlay:]
// Type encoding: v32@0:8@16B24B28
// Implementation: 0x10521f23c

// -[SCSpectaclesContentPageBusinessLogic handleExportWorkflowWillStartPostShare:showLoadingOverlay:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x10521f388

// -[SCSpectaclesContentPageBusinessLogic exportWorkflowDidComplete:shouldExit:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10521f3a4

// -[SCSpectaclesContentPageBusinessLogic _handleExportWorkflowDidComplete:]
// Type encoding: v20@0:8B16
// Implementation: 0x10521f4dc

// -[SCSpectaclesContentPageBusinessLogic staticThumbnailImageWithContentId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10521f594

// -[SCSpectaclesContentPageBusinessLogic animatedThumbnailImageWithContentId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10521f658

// -[SCSpectaclesContentPageBusinessLogic spectaclesTransferSession:onTransferUpdate:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10521f73c

// -[SCSpectaclesContentPageBusinessLogic spectaclesDevice:onDeviceLogsUpdate:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10521f878

// -[SCSpectaclesContentPageBusinessLogic _handleSpectaclesTransferSessionUpdate:withUpdateType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10521f99c

// -[SCSpectaclesContentPageBusinessLogic .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10521fbd8

@end
