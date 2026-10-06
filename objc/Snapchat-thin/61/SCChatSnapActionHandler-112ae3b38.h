// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatSnapActionHandler
// Superclass: NSObject
// Address: 0x112ae3b38

@interface SCChatSnapActionHandler

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCChatSnapActionHandler initWithMessageActionHandler:delegate:messagingPlaybackScopeExposer:snapReplayScopeExposer:animationDataCoordinator:chatLogger:loadMessageLogger:uiContainer:plusSubscribeScopeExposer:plusSubscribeScopeServices:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72@80@88
// Implementation: 0x1064f5c80

// -[SCChatSnapActionHandler handleActionWithSender:actionModel:fromSourceView:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x1064f5e90

// -[SCChatSnapActionHandler _performSnapLoadAction:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064f6174

// -[SCChatSnapActionHandler _performSnapTapToViewAction:sourceView:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1064f62fc

// -[SCChatSnapActionHandler _performSnapPressToReplayAction:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064f64b0

// -[SCChatSnapActionHandler _performLoadingLoggingAction:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064f65f0

// -[SCChatSnapActionHandler _performSnapTapToPlusSubscribe:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064f6698

// -[SCChatSnapActionHandler plusSubscribeDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x1064f6728

// -[SCChatSnapActionHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1064f6770

@end
