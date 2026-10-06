// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCAddFriendRequest
// Superclass: SCValdiMarshallableObject
// Address: 0x112cf0b38

@interface SCCAddFriendRequest

// Property: userId; attributes: T@"NSString",C,D,N
// Property: source; attributes: T@"NSString",C,D,N
// Property: displayIndex; attributes: T@"NSNumber",&,D,N
// Property: suggestionToken; attributes: T@"NSString",C,D,N
// Property: selectedShortcut; attributes: T@"NSString",C,D,N
// Property: section; attributes: T@"NSString",C,D,N
// Property: isIncoming; attributes: TB,D,N
// Property: isRecentlyActive; attributes: T@"NSNumber",&,D,N
// Property: pageSessionId; attributes: T@"NSString",C,D,N

// -[SCCAddFriendRequest initWithUserId:source:displayIndex:suggestionToken:selectedShortcut:section:isIncoming:isRecentlyActive:pageSessionId:]
// Type encoding: @84@0:8@16@24@32@40@48@56B64@68@76
// Implementation: 0x10b89c484

// -[SCCAddFriendRequest initWithUserId:source:displayIndex:selectedShortcut:section:isIncoming:isRecentlyActive:pageSessionId:]
// Type encoding: @76@0:8@16@24@32@40@48B56@60@68
// Implementation: 0x10b89c4c8

// -[SCCAddFriendRequest initWithUserId:source:selectedShortcut:section:isIncoming:isRecentlyActive:pageSessionId:]
// Type encoding: @68@0:8@16@24@32@40B48@52@60
// Implementation: 0x10b89c508

// +[SCCAddFriendRequest valdiMarshallableObjectDescriptor]
// Type encoding: {SCValdiMarshallableObjectDescriptor=^{SCValdiMarshallableObjectFieldDescriptor}^*^{SCValdiMarshallableObjectBlockSupport}C}16@0:8
// Implementation: 0x10b89c548

@end
