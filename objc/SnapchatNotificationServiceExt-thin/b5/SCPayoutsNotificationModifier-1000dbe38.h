// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPayoutsNotificationModifier
// Superclass: NSObject
// Address: 0x1000dbe38

@interface SCPayoutsNotificationModifier

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPayoutsNotificationModifier initWithProcessingScope:]
// Type encoding: @24@0:8@16
// Implementation: 0x100053a6c

// -[SCPayoutsNotificationModifier didReceiveNotificationRequest:withModifierCallback:suppressionEnabled:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x100053aec

// -[SCPayoutsNotificationModifier _replaceNotificationWithSameKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x100053f98

// -[SCPayoutsNotificationModifier _makePayoutTitleWithEarningType:]
// Type encoding: @24@0:8@16
// Implementation: 0x10005430c

// -[SCPayoutsNotificationModifier _makeBodyWithOnboarded:earningType:]
// Type encoding: @28@0:8B16@20
// Implementation: 0x10005442c

// -[SCPayoutsNotificationModifier _makeUpdateTitle]
// Type encoding: @16@0:8
// Implementation: 0x100054564

// -[SCPayoutsNotificationModifier _makeUpdateBody]
// Type encoding: @16@0:8
// Implementation: 0x1000545b4

// -[SCPayoutsNotificationModifier _makeFanUpdateTitle:]
// Type encoding: @24@0:8@16
// Implementation: 0x100054604

// -[SCPayoutsNotificationModifier _makeFanUpdateBody]
// Type encoding: @16@0:8
// Implementation: 0x1000546a4

// -[SCPayoutsNotificationModifier bestAttemptContent]
// Type encoding: @16@0:8
// Implementation: 0x1000546f4

// -[SCPayoutsNotificationModifier .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x100054980

// +[SCPayoutsNotificationModifier _makeExpirationTitleWithExpirationType:]
// Type encoding: @24@0:8@16
// Implementation: 0x10005471c

// +[SCPayoutsNotificationModifier _makeExpirationBodyWithExpirationType:expirationDate:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1000547c0

@end
