// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesPostPairingManager
// Superclass: NSObject
// Address: 0x112a893b8

@interface SCSpectaclesPostPairingManager

// Property: delegate; attributes: T@"<SCSpectaclesPostPairingManagerDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesPostPairingManager initWithDevice:onDemandResourceFetching:playerProvider:otaManager:phaseOrder:analyticsLogger:onboardingSessionInfo:lagunaId:runtime:composerCoreUIServices:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72@80@88
// Implementation: 0x105aa7be4

// -[SCSpectaclesPostPairingManager startPostPairingFlow]
// Type encoding: v16@0:8
// Implementation: 0x105aa7de8

// -[SCSpectaclesPostPairingManager postPairingPhaseDidComplete:]
// Type encoding: v24@0:8@16
// Implementation: 0x105aa7dec

// -[SCSpectaclesPostPairingManager postPairingPhaseDidFail:]
// Type encoding: v24@0:8@16
// Implementation: 0x105aa7e44

// -[SCSpectaclesPostPairingManager postPairingPhaseDidSkip:]
// Type encoding: v24@0:8@16
// Implementation: 0x105aa7eb0

// -[SCSpectaclesPostPairingManager postPairingPhaseDidUpdateLater:]
// Type encoding: v24@0:8@16
// Implementation: 0x105aa7f08

// -[SCSpectaclesPostPairingManager postPairingPhaseDidUpdateUIDataSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x105aa7f74

// -[SCSpectaclesPostPairingManager _navigateToNextPhase]
// Type encoding: v16@0:8
// Implementation: 0x105aa7fa8

// -[SCSpectaclesPostPairingManager _pushToUIContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105aa8058

// -[SCSpectaclesPostPairingManager _taskForPage:]
// Type encoding: @24@0:8Q16
// Implementation: 0x105aa80ac

// -[SCSpectaclesPostPairingManager _getNextTask]
// Type encoding: @16@0:8
// Implementation: 0x105aa8214

// -[SCSpectaclesPostPairingManager _markTaskAsComplete]
// Type encoding: v16@0:8
// Implementation: 0x105aa8280

// -[SCSpectaclesPostPairingManager _currentOnboardingSessionInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x105aa82dc

// -[SCSpectaclesPostPairingManager delegate]
// Type encoding: @16@0:8
// Implementation: 0x105aa847c

// -[SCSpectaclesPostPairingManager setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105aa8494

// -[SCSpectaclesPostPairingManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105aa84a0

@end
