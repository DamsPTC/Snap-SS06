// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCInAppNotificationController
// Superclass: NSObject
// Address: 0x112b59298

@interface SCInAppNotificationController

// Property: inAppNotificationPresenter; attributes: T@"SCAppNotificationSequencer",R,N,V_inAppNotificationPresenter
// Property: grapheneRegistry; attributes: T@"SCLazy",R,N,V_grapheneRegistry
// Property: delegate; attributes: T@"<SCInAppNotificationInteractionDelegate>",R,W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCInAppNotificationController initWithDelegate:getCircumstanceEngineBlock:getCustomUIPlugInCollectorBlock:getNotificationEmitterBlock:notificationProcessingManager:grapheneRegistry:application:window:notificationProcessingStepEventEmitter:]
// Type encoding: @88@0:8@16@?24@?32@?40@48@56@64@72@80
// Implementation: 0x100a0737c

// -[SCInAppNotificationController applicationDidBackground:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fdb59c

// -[SCInAppNotificationController ensureView]
// Type encoding: v16@0:8
// Implementation: 0x106fdb5a4

// -[SCInAppNotificationController maybePauseVCPlaybackForNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fdb6e0

// -[SCInAppNotificationController maybeResumeVCPlayback]
// Type encoding: v16@0:8
// Implementation: 0x106fdb760

// -[SCInAppNotificationController handleCurrentNotificationDidChange:didInterrupt:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106fdb7a4

// -[SCInAppNotificationController _logMissingNotificationPluginCollector:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fdba38

// -[SCInAppNotificationController _ensurePluginsThenDisplayOrHideCurrentNotificationDidInterrupt:]
// Type encoding: v20@0:8B16
// Implementation: 0x106fdbb1c

// -[SCInAppNotificationController handleQueuedNotificationRevoked:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fdbcac

// -[SCInAppNotificationController handleActiveNotificationDisplayInterrupted:reason:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106fdbcb4

// -[SCInAppNotificationController handleDidChangeVisibleViewControllerNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fdbd08

// -[SCInAppNotificationController _applicationNavigationController]
// Type encoding: @16@0:8
// Implementation: 0x106fdbe18

// -[SCInAppNotificationController didChangeDisplayProtocol:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fdbed0

// -[SCInAppNotificationController didPauseTimer]
// Type encoding: v16@0:8
// Implementation: 0x106fdbfc4

// -[SCInAppNotificationController didResumeTimer]
// Type encoding: v16@0:8
// Implementation: 0x106fdbfcc

// -[SCInAppNotificationController shouldIgnoreNotificationTapEvent:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106fdbfd4

// -[SCInAppNotificationController handleCustomUINotificationPressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fdc068

// -[SCInAppNotificationController handleCustomUINotificationDismissed:reason:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106fdc06c

// -[SCInAppNotificationController handleInAppNotificationPressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fdc0f0

// -[SCInAppNotificationController handleInAppNotificationDismissed:reason:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106fdc16c

// -[SCInAppNotificationController handleInAppNotificationDisplayInterrupted:reason:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106fdc1e8

// -[SCInAppNotificationController inAppNotificationPresenter]
// Type encoding: @16@0:8
// Implementation: 0x100a077e4

// -[SCInAppNotificationController grapheneRegistry]
// Type encoding: @16@0:8
// Implementation: 0x106fdc240

// -[SCInAppNotificationController delegate]
// Type encoding: @16@0:8
// Implementation: 0x106fdc248

// -[SCInAppNotificationController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106fdc260

@end
