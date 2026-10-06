// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapReplayController
// Superclass: NSObject
// Address: 0x112a0a158

@interface SCSnapReplayController

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSnapReplayController initWithDelegate:actionHandler:legacyChatTooltipService:plusFeatureGating:plusSubscribeScopeExposer:plusSubscribeScopeServices:userId:uiContainer:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x104f3d390

// -[SCSnapReplayController attemptReplayOfSnap:inConversation:isGroupConversation:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x104f3d538

// -[SCSnapReplayController attemptSnapReplayForConversation:isReplayAgain:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x104f3d788

// -[SCSnapReplayController _showFirstReplayAlertWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104f3d9b0

// -[SCSnapReplayController _handleFetchOfSnap:messageId:isGroupConversation:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x104f3dc2c

// -[SCSnapReplayController _handleSentSnap:isGroupConversation:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x104f3df24

// -[SCSnapReplayController _loadSnapIfEligible:isGroupConversation:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x104f3e12c

// -[SCSnapReplayController _loadSnap:isGroupConversation:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x104f3e1a4

// -[SCSnapReplayController _onLoadSnap:success:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x104f3e348

// -[SCSnapReplayController _replaySnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f3e3e8

// -[SCSnapReplayController _replaySnapsForConversation:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f3e464

// -[SCSnapReplayController _shouldDisplayFirstReplayDialog]
// Type encoding: B16@0:8
// Implementation: 0x104f3e5bc

// -[SCSnapReplayController _replayActionWithBlock:]
// Type encoding: @24@0:8@?16
// Implementation: 0x104f3e5fc

// -[SCSnapReplayController _cancelAction]
// Type encoding: @16@0:8
// Implementation: 0x104f3e7e0

// -[SCSnapReplayController _isReplayAgainEnabled]
// Type encoding: B16@0:8
// Implementation: 0x104f3e984

// -[SCSnapReplayController _upsellReplayAgainIfNeededForPageType:callback:]
// Type encoding: v32@0:8q16@?24
// Implementation: 0x104f3ea00

// -[SCSnapReplayController _exposePlusSubscribeScopeWithSourcePageType:plusFeatureType:callback:]
// Type encoding: v40@0:8q16q24@?32
// Implementation: 0x104f3eb20

// -[SCSnapReplayController plusSubscribeDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x104f3ec20

// -[SCSnapReplayController dialogDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f3ed48

// -[SCSnapReplayController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104f3ed74

@end
