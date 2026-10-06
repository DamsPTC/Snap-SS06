// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendsFeedNativeData
// Superclass: NSObject
// Address: 0x1128a3a98

@interface SCFriendsFeedNativeData

// Property: feedId; attributes: T@"NSString",N,R
// Property: feedType; attributes: Tq,N,R,VfeedType
// Property: activeMessageData; attributes: T@"SCFriendsFeedActiveMessageData",N,R,VactiveMessageData
// Property: hash; attributes: Tq,N,R
// Property: description; attributes: T@"NSString",N,R

// -[SCFriendsFeedNativeData feedId]
// Type encoding: @16@0:8
// Implementation: 0x100bec0b4

// -[SCFriendsFeedNativeData feedType]
// Type encoding: q16@0:8
// Implementation: 0x100bec0a4

// -[SCFriendsFeedNativeData activeMessageData]
// Type encoding: @16@0:8
// Implementation: 0x100bec100

// -[SCFriendsFeedNativeData initWithFeedId:feedType:activeMessageData:]
// Type encoding: @40@0:8@16q24@32
// Implementation: 0x102d756f0

// -[SCFriendsFeedNativeData hash]
// Type encoding: q16@0:8
// Implementation: 0x102d7580c

// -[SCFriendsFeedNativeData isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x102d759f8

// -[SCFriendsFeedNativeData copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x102d75a78

// -[SCFriendsFeedNativeData description]
// Type encoding: @16@0:8
// Implementation: 0x102d75a7c

// -[SCFriendsFeedNativeData init]
// Type encoding: @16@0:8
// Implementation: 0x102d75a98

// -[SCFriendsFeedNativeData .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x102d75b14

@end
