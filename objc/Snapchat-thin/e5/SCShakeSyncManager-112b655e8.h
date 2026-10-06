// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCShakeSyncManager
// Superclass: NSObject
// Address: 0x112b655e8

@interface SCShakeSyncManager

// Property: mCurrentTicket; attributes: T@"SCShakeTicket",&,V_mCurrentTicket
// Property: mCurrentState; attributes: Tq,V_mCurrentState
// Property: mLastBackoffTicketId; attributes: T@"NSString",&,V_mLastBackoffTicketId
// Property: mIsCanceled; attributes: TB,V_mIsCanceled
// Property: mConfiguration; attributes: T@"SCSnapAirConfiguration",&,V_mConfiguration

// -[SCShakeSyncManager processNewTicketForConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079612b4

// -[SCShakeSyncManager init]
// Type encoding: @16@0:8
// Implementation: 0x1079612f4

// -[SCShakeSyncManager _isIdleState]
// Type encoding: B16@0:8
// Implementation: 0x107961390

// -[SCShakeSyncManager _transitionToState:]
// Type encoding: v24@0:8q16
// Implementation: 0x1079613cc

// -[SCShakeSyncManager _transitionToState:backOffDelayMillis:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x1079613d4

// -[SCShakeSyncManager _transitionToStateRunner:wasBackedOff:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x1079614a4

// -[SCShakeSyncManager _checkNextTicketInternal]
// Type encoding: v16@0:8
// Implementation: 0x107961548

// -[SCShakeSyncManager _executePendingTicketInternal]
// Type encoding: v16@0:8
// Implementation: 0x107961624

// -[SCShakeSyncManager _cleanLogFilesInternal]
// Type encoding: v16@0:8
// Implementation: 0x107961b04

// -[SCShakeSyncManager _completeUploadTicket:isUploadSucceed:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107961b08

// -[SCShakeSyncManager _getBackupOffTime:]
// Type encoding: q24@0:8@16
// Implementation: 0x107961bf0

// -[SCShakeSyncManager mCurrentTicket]
// Type encoding: @16@0:8
// Implementation: 0x107961c50

// -[SCShakeSyncManager setMCurrentTicket:]
// Type encoding: v24@0:8@16
// Implementation: 0x107961c5c

// -[SCShakeSyncManager mCurrentState]
// Type encoding: q16@0:8
// Implementation: 0x107961c64

// -[SCShakeSyncManager setMCurrentState:]
// Type encoding: v24@0:8q16
// Implementation: 0x107961c6c

// -[SCShakeSyncManager mLastBackoffTicketId]
// Type encoding: @16@0:8
// Implementation: 0x107961c74

// -[SCShakeSyncManager setMLastBackoffTicketId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107961c80

// -[SCShakeSyncManager mIsCanceled]
// Type encoding: B16@0:8
// Implementation: 0x107961c88

// -[SCShakeSyncManager setMIsCanceled:]
// Type encoding: v20@0:8B16
// Implementation: 0x107961c94

// -[SCShakeSyncManager mConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x107961c9c

// -[SCShakeSyncManager setMConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x107961ca8

// -[SCShakeSyncManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107961cb0

// +[SCShakeSyncManager sharedInstance]
// Type encoding: @16@0:8
// Implementation: 0x107961204

// +[SCShakeSyncManager deleteInstance]
// Type encoding: v16@0:8
// Implementation: 0x107961284

@end
