// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCFriend
// Superclass: SCValdiMarshallableObject
// Address: 0x112cf0d68

@interface SCCFriend

// Property: user; attributes: T@"SCCUser",&,D,N
// Property: isBestFriend; attributes: TB,D,N
// Property: isMutual; attributes: TB,D,N
// Property: isBirthday; attributes: TB,D,N
// Property: lastInteractionTimestampMs; attributes: Td,D,N
// Property: snapStreakCount; attributes: Td,D,N
// Property: chatDisabled; attributes: TB,D,N
// Property: friendmojis; attributes: T@"NSArray",C,D,N
// Property: addedTimestampMs; attributes: T@"NSNumber",&,D,N
// Property: birthday; attributes: T@"SCCCalendarDate",&,D,N
// Property: pinnedTimestamp; attributes: T@"NSNumber",&,D,N
// Property: isPinnedBestFriend; attributes: T@"NSNumber",&,D,N
// Property: conversationId; attributes: T@"NSString",C,D,N
// Property: postSendEmoji; attributes: T@"NSString",C,D,N
// Property: friendLinkType; attributes: T@"NSNumber",&,D,N
// Property: isPlusSubscriber; attributes: T@"NSNumber",&,D,N
// Property: isMemoryOnlySubscriber; attributes: T@"NSNumber",&,D,N

// -[SCCFriend initWithSCSnapchatter:]
// Type encoding: @24@0:8@16
// Implementation: 0x108f3e280

// -[SCCFriend _getCalendarDate:]
// Type encoding: @24@0:8@16
// Implementation: 0x108f3e68c

// -[SCCFriend _composerFriendLinkTypeForSnapchatter:]
// Type encoding: i24@0:8@16
// Implementation: 0x108f3e704

// -[SCCFriend isEqualToFriend:]
// Type encoding: B24@0:8@16
// Implementation: 0x108f3e7b4

// -[SCCFriend initWithUser:isBestFriend:isMutual:isBirthday:lastInteractionTimestampMs:snapStreakCount:chatDisabled:]
// Type encoding: @56@0:8@16B24B28B32d36d44B52
// Implementation: 0x10b89c6ac

// +[SCCFriend valdiMarshallableObjectDescriptor]
// Type encoding: {SCValdiMarshallableObjectDescriptor=^{SCValdiMarshallableObjectFieldDescriptor}^*^{SCValdiMarshallableObjectBlockSupport}C}16@0:8
// Implementation: 0x10b89c6e4

@end
