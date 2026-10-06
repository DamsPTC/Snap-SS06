// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatAttribution
// Superclass: NSObject
// Address: 0x1129cb1f8

@interface SCChatAttribution

// Property: legacy_sourceNotification; attributes: T@"SCAppNotification",&,N
// Property: chatPageSource; attributes: Tq,N,R,VchatPageSource
// Property: deeplinkType; attributes: TQ,N,R,VdeeplinkType
// Property: navigationAction; attributes: Tq,N,R,VnavigationAction
// Property: hash; attributes: Tq,N,R
// Property: description; attributes: T@"NSString",N,R

// -[SCChatAttribution legacy_sourceNotification]
// Type encoding: @16@0:8
// Implementation: 0x10687a73c

// -[SCChatAttribution setLegacy_sourceNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x10687a748

// -[SCChatAttribution chatPageSource]
// Type encoding: q16@0:8
// Implementation: 0x104522f34

// -[SCChatAttribution deeplinkType]
// Type encoding: Q16@0:8
// Implementation: 0x104522f44

// -[SCChatAttribution navigationAction]
// Type encoding: q16@0:8
// Implementation: 0x104522f54

// -[SCChatAttribution initWithChatPageSource:deeplinkType:navigationAction:]
// Type encoding: @40@0:8q16Q24q32
// Implementation: 0x104522fe0

// -[SCChatAttribution hash]
// Type encoding: q16@0:8
// Implementation: 0x1045230c8

// -[SCChatAttribution isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x104523138

// -[SCChatAttribution copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x1045231b8

// -[SCChatAttribution description]
// Type encoding: @16@0:8
// Implementation: 0x1045231bc

// -[SCChatAttribution init]
// Type encoding: @16@0:8
// Implementation: 0x1045231d8

@end
