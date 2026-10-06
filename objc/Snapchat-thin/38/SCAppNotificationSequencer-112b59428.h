// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAppNotificationSequencer
// Superclass: NSObject
// Address: 0x112b59428

@interface SCAppNotificationSequencer

// Property: activeNotification; attributes: T@"SCAppNotification",R,N,V_activeNotification
// Property: delegate; attributes: T@"<SCAppNotificationSequencerDelegate>",R,W,N,V_delegate
// Property: displayProtocol; attributes: T@"<SCInAppNotificationDisplayProtocol>",W,N,V_displayProtocol
// Property: userSession; attributes: T@"SCUserSession",&,N,V_userSession

// -[SCAppNotificationSequencer initWithDelegate:application:notificationProcessingStepEventEmitter:displayTimeProvider:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x100a07630

// -[SCAppNotificationSequencer setUserSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x100a077ec

// -[SCAppNotificationSequencer updateActiveNotificationProperty:withInterruption:interruptReason:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x106fde6b8

// -[SCAppNotificationSequencer dequeueNextNotification]
// Type encoding: @16@0:8
// Implementation: 0x106fde794

// -[SCAppNotificationSequencer _markAsDelayedIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fdeb18

// -[SCAppNotificationSequencer requeryPolicy:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fdebf4

// -[SCAppNotificationSequencer displayNextNotification]
// Type encoding: v16@0:8
// Implementation: 0x106fdec38

// -[SCAppNotificationSequencer displayNotification:forInterval:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x106fdece4

// -[SCAppNotificationSequencer expireActiveNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fdee00

// -[SCAppNotificationSequencer suppressActiveNotificationWithReason:]
// Type encoding: v24@0:8q16
// Implementation: 0x106fdee10

// -[SCAppNotificationSequencer verifyWhetherAnyPendingNotificationsShouldBeRevoked]
// Type encoding: v16@0:8
// Implementation: 0x106fdeeec

// -[SCAppNotificationSequencer setDisplayProtocol:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fdf1c8

// -[SCAppNotificationSequencer pauseTimer]
// Type encoding: v16@0:8
// Implementation: 0x106fdf2ac

// -[SCAppNotificationSequencer resumeTimer]
// Type encoding: v16@0:8
// Implementation: 0x106fdf2f0

// -[SCAppNotificationSequencer hideNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fdf330

// -[SCAppNotificationSequencer canDisplayNotification:]
// Type encoding: B24@0:8@16
// Implementation: 0x106fdf40c

// -[SCAppNotificationSequencer displayNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fdf508

// -[SCAppNotificationSequencer enqueueNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fdf50c

// -[SCAppNotificationSequencer snapshotForAppStateChangeClear]
// Type encoding: @16@0:8
// Implementation: 0x100c7ab8c

// -[SCAppNotificationSequencer didApplicationStateChange:withCurrentNotifications:snapshot:]
// Type encoding: v36@0:8B16@20@28
// Implementation: 0x106fdf618

// -[SCAppNotificationSequencer setIntentDonator:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fdf834

// -[SCAppNotificationSequencer setPlusFeatureGating:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fdf864

// -[SCAppNotificationSequencer setAppGroupUserDefaults:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fdf868

// -[SCAppNotificationSequencer setImageFetchingService:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fdf86c

// -[SCAppNotificationSequencer _isAppForegrounded]
// Type encoding: B16@0:8
// Implementation: 0x106fdf870

// -[SCAppNotificationSequencer _emitNotificationSuppressionEventWithNotification:suppressionReason:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106fdf890

// -[SCAppNotificationSequencer activeNotification]
// Type encoding: @16@0:8
// Implementation: 0x100c7ac58

// -[SCAppNotificationSequencer delegate]
// Type encoding: @16@0:8
// Implementation: 0x106fdf90c

// -[SCAppNotificationSequencer displayProtocol]
// Type encoding: @16@0:8
// Implementation: 0x106fdf924

// -[SCAppNotificationSequencer userSession]
// Type encoding: @16@0:8
// Implementation: 0x106fdf93c

// -[SCAppNotificationSequencer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106fdf944

@end
