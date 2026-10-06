// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapGhostModeTimerController
// Superclass: NSObject
// Address: 0x112aab648

@interface SCMapGhostModeTimerController

// Property: forceSync; attributes: TB,V_forceSync
// Property: delegate; attributes: T@"<SCMapGhostModeTimerControllerDelegate>",W,N,V_delegate

// -[SCMapGhostModeTimerController initWithMapUserPreferences:notificationPresenter:applicationLifecycleEvents:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x100508e70

// -[SCMapGhostModeTimerController applicationWillEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x105f0f9b0

// -[SCMapGhostModeTimerController _displayGhostModeTimerDoneNotificationIfPossible]
// Type encoding: v16@0:8
// Implementation: 0x105f0fa2c

// -[SCMapGhostModeTimerController _updateNotificationStatusBasedOnResult:]
// Type encoding: v24@0:8q16
// Implementation: 0x105f0fbb8

// -[SCMapGhostModeTimerController remainingDuration]
// Type encoding: d16@0:8
// Implementation: 0x105f0fbd4

// -[SCMapGhostModeTimerController needsSync]
// Type encoding: B16@0:8
// Implementation: 0x100509308

// -[SCMapGhostModeTimerController exitGhostModeBecauseTimerExpired]
// Type encoding: v16@0:8
// Implementation: 0x105f0fc1c

// -[SCMapGhostModeTimerController exitGhostModeIfTimerExpired]
// Type encoding: v16@0:8
// Implementation: 0x1005091b8

// -[SCMapGhostModeTimerController startTimerWithDuration:]
// Type encoding: v24@0:8d16
// Implementation: 0x105f0fc20

// -[SCMapGhostModeTimerController invalidateTimer]
// Type encoding: v16@0:8
// Implementation: 0x105f0fc78

// -[SCMapGhostModeTimerController _updateTimerWithRemainingDuration:]
// Type encoding: v24@0:8d16
// Implementation: 0x105f0fcd4

// -[SCMapGhostModeTimerController _exitGhostModeIfTimerExpired]
// Type encoding: v16@0:8
// Implementation: 0x10050922c

// -[SCMapGhostModeTimerController _exitGhostMode]
// Type encoding: v16@0:8
// Implementation: 0x105f0fdd8

// -[SCMapGhostModeTimerController _startForegroundTimerWithDuration:]
// Type encoding: v24@0:8d16
// Implementation: 0x105f0fec8

// -[SCMapGhostModeTimerController _foregroundTimerDidFire:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f0ff80

// -[SCMapGhostModeTimerController delegate]
// Type encoding: @16@0:8
// Implementation: 0x105f0ffe0

// -[SCMapGhostModeTimerController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x100509210

// -[SCMapGhostModeTimerController forceSync]
// Type encoding: B16@0:8
// Implementation: 0x100509390

// -[SCMapGhostModeTimerController setForceSync:]
// Type encoding: v20@0:8B16
// Implementation: 0x1005091b0

// -[SCMapGhostModeTimerController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f0fff8

@end
