// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStreakProvider
// Superclass: NSObject
// Address: 0x112a428c8

@interface SCStreakProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStreakProvider initWithCurrentUserId:performer:translator:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105500cd0

// -[SCStreakProvider streakForFeedId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105500df8

// -[SCStreakProvider streaksObservable]
// Type encoding: @16@0:8
// Implementation: 0x105500e70

// -[SCStreakProvider streakObservableForFeedId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105500e98

// -[SCStreakProvider conversationStreaksObservable]
// Type encoding: @16@0:8
// Implementation: 0x10550100c

// -[SCStreakProvider processFeedEntries:deletedFeedEntries:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105501014

// -[SCStreakProvider _processFeedEntries:deletedFeedEntries:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105501148

// -[SCStreakProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105501828

@end
