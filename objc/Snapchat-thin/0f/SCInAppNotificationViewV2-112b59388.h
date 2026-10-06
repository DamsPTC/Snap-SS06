// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCInAppNotificationViewV2
// Superclass: UIWindow
// Address: 0x112b59388

@interface SCInAppNotificationViewV2

// Property: delegate; attributes: T@"<SCInAppNotificationViewV2Delegate>",W,N,V_delegate
// Property: shouldPrompt; attributes: TB,N,V_shouldPrompt
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCInAppNotificationViewV2 initWithDelegate:withLazyNotificationEmitter:circEngine:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106fdd0b8

// -[SCInAppNotificationViewV2 removeCard:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fdd33c

// -[SCInAppNotificationViewV2 didActiveNotificationChange:withInterrupt:withUserSession:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x106fdd3ac

// -[SCInAppNotificationViewV2 _showNonBitmojiNotificationCard:userSession:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106fdd6e0

// -[SCInAppNotificationViewV2 _showBitmojiNotificationCard:userSession:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106fdd7bc

// -[SCInAppNotificationViewV2 _displayInAppNotificationCard:forNotification:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106fdd844

// -[SCInAppNotificationViewV2 delegate]
// Type encoding: @16@0:8
// Implementation: 0x106fdd944

// -[SCInAppNotificationViewV2 setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fdd964

// -[SCInAppNotificationViewV2 shouldPrompt]
// Type encoding: B16@0:8
// Implementation: 0x106fdd978

// -[SCInAppNotificationViewV2 setShouldPrompt:]
// Type encoding: v20@0:8B16
// Implementation: 0x106fdd988

// -[SCInAppNotificationViewV2 .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106fdd998

@end
