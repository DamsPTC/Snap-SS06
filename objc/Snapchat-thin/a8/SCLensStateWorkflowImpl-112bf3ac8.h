// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensStateWorkflowImpl
// Superclass: NSObject
// Address: 0x112bf3ac8

@interface SCLensStateWorkflowImpl

// Property: delegate; attributes: T@"<SCLensStateWorkflowDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensStateWorkflowImpl initWithDelegate:cameraHardwareResource:lensLogger:lensCarouselStudySettings:lensCarouselFunnelLogger:lensCarouselActivationTracker:cameraViewType:lensCarouselSettings:lensCTAHandler:lensCarouselManager:appStartExperimentReader:cameraPreviewPresenter:lensUrlBrowsingManager:lensCarouselSessionController:lensCarouselSessionStateProvider:]
// Type encoding: @136@0:8@16@24@32@40@48@56q64@72@80@88@96@104@112@120@128
// Implementation: 0x100c7eb60

// -[SCLensStateWorkflowImpl complete]
// Type encoding: v16@0:8
// Implementation: 0x1091d1ad0

// -[SCLensStateWorkflowImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1091d1b0c

// -[SCLensStateWorkflowImpl _setup]
// Type encoding: v16@0:8
// Implementation: 0x100c7ee74

// -[SCLensStateWorkflowImpl resetLensState]
// Type encoding: v16@0:8
// Implementation: 0x1091d1b5c

// -[SCLensStateWorkflowImpl restartLensState]
// Type encoding: v16@0:8
// Implementation: 0x1091d1b64

// -[SCLensStateWorkflowImpl restoreLensState]
// Type encoding: v16@0:8
// Implementation: 0x100c7fb60

// -[SCLensStateWorkflowImpl hasLensState]
// Type encoding: B16@0:8
// Implementation: 0x100c80148

// -[SCLensStateWorkflowImpl lensStateEvents]
// Type encoding: @16@0:8
// Implementation: 0x1091d1b9c

// -[SCLensStateWorkflowImpl _restoreLensState]
// Type encoding: @16@0:8
// Implementation: 0x100c80004

// -[SCLensStateWorkflowImpl _restoreLensStateWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1091d1c3c

// -[SCLensStateWorkflowImpl _fulfillRestoreStatePromiseIfPossibleWithSuccess:]
// Type encoding: v20@0:8B16
// Implementation: 0x100c8028c

// -[SCLensStateWorkflowImpl _stopLensSessionIfPaused]
// Type encoding: v16@0:8
// Implementation: 0x100c801f8

// -[SCLensStateWorkflowImpl _beginLensFunnelStateForLensSource:preferredLensSessionBaseId:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1091d1d18

// -[SCLensStateWorkflowImpl beginLensStateForLensSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x1091d1fb4

// -[SCLensStateWorkflowImpl beginLensStateForLensSource:preferredLensSessionBaseId:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1091d1fbc

// -[SCLensStateWorkflowImpl currentLensSource]
// Type encoding: q16@0:8
// Implementation: 0x1091d2048

// -[SCLensStateWorkflowImpl restoreOrRecreateStateForLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091d2050

// -[SCLensStateWorkflowImpl _didTryToRestoreStateForLens:success:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1091d2218

// -[SCLensStateWorkflowImpl _resetLensStateIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1091d23f0

// -[SCLensStateWorkflowImpl resetLensStateForce:]
// Type encoding: v20@0:8B16
// Implementation: 0x1091d23f8

// -[SCLensStateWorkflowImpl _cancelResetLensStateBlockIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1091d2554

// -[SCLensStateWorkflowImpl _scheduleResetLensStateBlock]
// Type encoding: v16@0:8
// Implementation: 0x1091d25d4

// -[SCLensStateWorkflowImpl clearLensState]
// Type encoding: v16@0:8
// Implementation: 0x1091d2764

// -[SCLensStateWorkflowImpl saveLensState]
// Type encoding: v16@0:8
// Implementation: 0x1091d278c

// -[SCLensStateWorkflowImpl _enableTabSessionLoggingForCurrentCameraType]
// Type encoding: v16@0:8
// Implementation: 0x100c7ee9c

// -[SCLensStateWorkflowImpl cameraViewControllerLensDelegate]
// Type encoding: @16@0:8
// Implementation: 0x100c7fbb8

// -[SCLensStateWorkflowImpl isPresentingPreviewViewController]
// Type encoding: B16@0:8
// Implementation: 0x1091d2890

// -[SCLensStateWorkflowImpl shouldRestoreAnyway]
// Type encoding: B16@0:8
// Implementation: 0x1091d28e8

// -[SCLensStateWorkflowImpl _startHandlingVolumeButtonEventsIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1091d292c

// -[SCLensStateWorkflowImpl _isReplyCamera]
// Type encoding: B16@0:8
// Implementation: 0x1091d2964

// -[SCLensStateWorkflowImpl _isMainCamera]
// Type encoding: B16@0:8
// Implementation: 0x100c7eedc

// -[SCLensStateWorkflowImpl _alwaysOnCarouselEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1091d2978

// -[SCLensStateWorkflowImpl _useCameraNavigationTypeForLoggerEntranceType]
// Type encoding: B16@0:8
// Implementation: 0x1091d29b8

// -[SCLensStateWorkflowImpl _storeLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091d29c8

// -[SCLensStateWorkflowImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x100c7fc04

// -[SCLensStateWorkflowImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091d2a60

// -[SCLensStateWorkflowImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1091d2a6c

@end
