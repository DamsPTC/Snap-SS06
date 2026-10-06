// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: LSABitmojiComponentListenerAnnouncer
// Superclass: NSObject
// Address: 0x112bf8be0

@interface LSABitmojiComponentListenerAnnouncer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[LSABitmojiComponentListenerAnnouncer description]
// Type encoding: @16@0:8
// Implementation: 0x10ad909ec

// -[LSABitmojiComponentListenerAnnouncer addListener:]
// Type encoding: B24@0:8@16
// Implementation: 0x10ad90bc8

// -[LSABitmojiComponentListenerAnnouncer removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ad9100c

// -[LSABitmojiComponentListenerAnnouncer hasAnyListeners]
// Type encoding: B16@0:8
// Implementation: 0x10ad9123c

// -[LSABitmojiComponentListenerAnnouncer bitmojiComponent:didRequestBitmojiWithId:avatarId:friendAvatarId:bitmojiType:scale:isRequestingSelfie:]
// Type encoding: v68@0:8@16@24@32@40Q48q56B64
// Implementation: 0x10ad912c4

// -[LSABitmojiComponentListenerAnnouncer lensComponentDidRequestBitmojiInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ad91438

// -[LSABitmojiComponentListenerAnnouncer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10ad9151c

// -[LSABitmojiComponentListenerAnnouncer .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10ad91544

@end
