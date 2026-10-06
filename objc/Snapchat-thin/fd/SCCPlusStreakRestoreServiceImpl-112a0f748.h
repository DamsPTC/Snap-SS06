// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCPlusStreakRestoreServiceImpl
// Superclass: NSObject
// Address: 0x112a0f748

@interface SCCPlusStreakRestoreServiceImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCPlusStreakRestoreServiceImpl initWithUIContainer:currentUserId:displayNameProvider:friendsFeedServices:groupsDataFetcher:streakRestorePurchaseScopeFactoryServices:streakRestoreSupportScopeFactoryServices:sourcePageType:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64q72
// Implementation: 0x104fdb250

// -[SCCPlusStreakRestoreServiceImpl presentSupportPage]
// Type encoding: v16@0:8
// Implementation: 0x104fdb3dc

// -[SCCPlusStreakRestoreServiceImpl fetchRestorableConversationStreaksWithCallback:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104fdb4e0

// -[SCCPlusStreakRestoreServiceImpl restoreConversationStreakWithConversationId:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104fdb6e8

// -[SCCPlusStreakRestoreServiceImpl streakRestorePurchaseDismissedWithDidRestore:]
// Type encoding: v20@0:8B16
// Implementation: 0x104fdb8c0

// -[SCCPlusStreakRestoreServiceImpl streakSupportPageDismissed]
// Type encoding: v16@0:8
// Implementation: 0x104fdb914

// -[SCCPlusStreakRestoreServiceImpl _restorableConversationStreak:]
// Type encoding: @24@0:8@16
// Implementation: 0x104fdb924

// -[SCCPlusStreakRestoreServiceImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104fdbf30

@end
