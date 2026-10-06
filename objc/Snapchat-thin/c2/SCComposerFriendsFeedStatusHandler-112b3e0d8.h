// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCComposerFriendsFeedStatusHandler
// Superclass: NSObject
// Address: 0x112b3e0d8

@interface SCComposerFriendsFeedStatusHandler

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCComposerFriendsFeedStatusHandler initWithMatcher:friendsFeedDataCoordinator:feedStatusConverter:]
// Type encoding: @40@0:8@?16@24@32
// Implementation: 0x106e6023c

// -[SCComposerFriendsFeedStatusHandler pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x106e60340

// -[SCComposerFriendsFeedStatusHandler fetchWithCallback:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106e6034c

// -[SCComposerFriendsFeedStatusHandler handleFriendsFeedObservableUpdate:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106e605dc

// -[SCComposerFriendsFeedStatusHandler unsubscribeFromFriendsFeedObservable]
// Type encoding: v16@0:8
// Implementation: 0x106e6071c

// -[SCComposerFriendsFeedStatusHandler subscribeWithCallback:]
// Type encoding: @?24@0:8@?16
// Implementation: 0x106e60724

// -[SCComposerFriendsFeedStatusHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106e60990

@end
