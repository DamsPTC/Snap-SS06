// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAppNotificationProvider
// Superclass: NSObject
// Address: 0x112a2a9a8

@interface SCAppNotificationProvider


// -[SCAppNotificationProvider initWithSystemScopedAppGroupUserDefaults:appLifeCycleManagerLazy:systemScope:circumstanceEngine:grapheneRegistry:watchDetector:notificationPermissionRetriever:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x100507ec8

// -[SCAppNotificationProvider initWithSystemScopedAppGroupUserDefaults:appLifeCycleManagerLazy:systemScope:circumstanceEngine:grapheneRegistry:incomingReporter:notificationPermissionRetriever:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x10050813c

// -[SCAppNotificationProvider _storeForegroundStateForExtensions:]
// Type encoding: v20@0:8B16
// Implementation: 0x100c7a864

// -[SCAppNotificationProvider addProcessor:]
// Type encoding: v24@0:8@16
// Implementation: 0x10092b9bc

// -[SCAppNotificationProvider removeProcessor:]
// Type encoding: v24@0:8@16
// Implementation: 0x105315398

// -[SCAppNotificationProvider userDidLogOut]
// Type encoding: v16@0:8
// Implementation: 0x1053153a0

// -[SCAppNotificationProvider registerPushNotificationPresenter:presenter:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100a07904

// -[SCAppNotificationProvider unregisterPushNotificationPresenter:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053154b4

// -[SCAppNotificationProvider _isAppInForeground]
// Type encoding: B16@0:8
// Implementation: 0x1053154bc

// -[SCAppNotificationProvider delegateForAppState]
// Type encoding: @16@0:8
// Implementation: 0x1053154dc

// -[SCAppNotificationProvider applicationWillResignActive]
// Type encoding: v16@0:8
// Implementation: 0x105315528

// -[SCAppNotificationProvider applicationDidBecomeActive]
// Type encoding: v16@0:8
// Implementation: 0x100c7a6c0

// -[SCAppNotificationProvider applicationDidChangeState:]
// Type encoding: v20@0:8B16
// Implementation: 0x100c7a6c8

// -[SCAppNotificationProvider _removeAllNotificationsExcept:]
// Type encoding: v24@0:8@16
// Implementation: 0x10531598c

// -[SCAppNotificationProvider removeNotificationWithoutSuccess:]
// Type encoding: v24@0:8@16
// Implementation: 0x105315c14

// -[SCAppNotificationProvider removeNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x105315c1c

// -[SCAppNotificationProvider _removeNotification:executeSuccessBlock:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105315c24

// -[SCAppNotificationProvider prepareToReplaceNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x105315ef0

// -[SCAppNotificationProvider addNotification:withSystemCompletion:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105316098

// -[SCAppNotificationProvider addTalkVoipNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x105316984

// -[SCAppNotificationProvider _isNotificationSuppressedByNative:]
// Type encoding: B24@0:8@16
// Implementation: 0x105316b18

// -[SCAppNotificationProvider _nativeSuppressionReason:]
// Type encoding: q24@0:8@16
// Implementation: 0x105316bd4

// -[SCAppNotificationProvider _addNonDuplicateNotification:systemCompletion:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105316cb8

// -[SCAppNotificationProvider _displayNotification:isAppForegrounded:systemCompletion:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x1053170e0

// -[SCAppNotificationProvider addNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x105317254

// -[SCAppNotificationProvider canDisplayNotification:]
// Type encoding: B24@0:8@16
// Implementation: 0x10531725c

// -[SCAppNotificationProvider addToActiveNotificationExpirations:withDuration:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x1053172c0

// -[SCAppNotificationProvider checkHasNotificationExpired:]
// Type encoding: v24@0:8@16
// Implementation: 0x105317434

// -[SCAppNotificationProvider currentNotifications]
// Type encoding: @16@0:8
// Implementation: 0x105317504

// -[SCAppNotificationProvider getPushNotificationPresenter:]
// Type encoding: @24@0:8@16
// Implementation: 0x105317560

// -[SCAppNotificationProvider _emitDisplayNotificationProcessingStepEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105317568

// -[SCAppNotificationProvider _emitSuppressionNotificationProcessingStepEvent:suppressionReason:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1053175e4

// -[SCAppNotificationProvider _emitNotificationProcessingStepEventSuppressedDueToOSPermission:]
// Type encoding: v24@0:8@16
// Implementation: 0x105317668

// -[SCAppNotificationProvider _emitNotificationProcessingStepEventNotificationIsClaimed:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053176b4

// -[SCAppNotificationProvider _filterResultToString:]
// Type encoding: @24@0:8q16
// Implementation: 0x105317700

// -[SCAppNotificationProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105317728

@end
