// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesSnapReadReceiptRecord
// Superclass: SCDocObject
// Address: 0x112c7a438

@interface SCStoriesSnapReadReceiptRecord

// Property: snapId; attributes: T@"NSString",R,C,N,V_snapId
// Property: snapOwnerId; attributes: T@"NSString",R,C,N,V_snapOwnerId
// Property: viewerUserId; attributes: T@"NSString",R,C,N,V_viewerUserId
// Property: expirationTimeMs; attributes: Td,R,N,V_expirationTimeMs
// Property: viewTimeMs; attributes: Td,R,N,V_viewTimeMs
// Property: readReceiptState; attributes: T@"SCStoriesSnapReadReceiptState",R,C,N,V_readReceiptState
// Property: friendLinkState; attributes: Tq,R,N,V_friendLinkState
// Property: storyType; attributes: Tq,R,N,V_storyType
// Property: syncState; attributes: Tq,R,N,V_syncState
// Property: shareCount; attributes: Tq,R,N,V_shareCount
// Property: viewedProgress; attributes: Td,R,N,V_viewedProgress
// Property: fullyViewed; attributes: TB,R,N,V_fullyViewed

// -[SCStoriesSnapReadReceiptRecord initWithSnapId:snapOwnerId:viewerUserId:expirationTimeMs:viewTimeMs:readReceiptState:friendLinkState:storyType:syncState:shareCount:viewedProgress:fullyViewed:]
// Type encoding: @108@0:8@16@24@32d40d48@56q64q72q80q88d96B104
// Implementation: 0x10b614744

// -[SCStoriesSnapReadReceiptRecord copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b6148ec

// -[SCStoriesSnapReadReceiptRecord hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b614910

// -[SCStoriesSnapReadReceiptRecord isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b614a74

// -[SCStoriesSnapReadReceiptRecord snapId]
// Type encoding: @16@0:8
// Implementation: 0x10b614c98

// -[SCStoriesSnapReadReceiptRecord snapOwnerId]
// Type encoding: @16@0:8
// Implementation: 0x10b614ca8

// -[SCStoriesSnapReadReceiptRecord viewerUserId]
// Type encoding: @16@0:8
// Implementation: 0x10b614cb8

// -[SCStoriesSnapReadReceiptRecord expirationTimeMs]
// Type encoding: d16@0:8
// Implementation: 0x10b614cc8

// -[SCStoriesSnapReadReceiptRecord viewTimeMs]
// Type encoding: d16@0:8
// Implementation: 0x10b614cd8

// -[SCStoriesSnapReadReceiptRecord readReceiptState]
// Type encoding: @16@0:8
// Implementation: 0x10b614ce8

// -[SCStoriesSnapReadReceiptRecord friendLinkState]
// Type encoding: q16@0:8
// Implementation: 0x10b614cf8

// -[SCStoriesSnapReadReceiptRecord storyType]
// Type encoding: q16@0:8
// Implementation: 0x10b614d08

// -[SCStoriesSnapReadReceiptRecord syncState]
// Type encoding: q16@0:8
// Implementation: 0x10b614d18

// -[SCStoriesSnapReadReceiptRecord shareCount]
// Type encoding: q16@0:8
// Implementation: 0x10b614d28

// -[SCStoriesSnapReadReceiptRecord viewedProgress]
// Type encoding: d16@0:8
// Implementation: 0x10b614d38

// -[SCStoriesSnapReadReceiptRecord fullyViewed]
// Type encoding: B16@0:8
// Implementation: 0x10b614d48

// -[SCStoriesSnapReadReceiptRecord .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b614d58

// +[SCStoriesSnapReadReceiptRecord table]
// Type encoding: r*16@0:8
// Implementation: 0x1084ffd30

// +[SCStoriesSnapReadReceiptRecord immutableObjectParse:bufferSize:]
// Type encoding: @32@0:8r^v16Q24
// Implementation: 0x1084ffd3c

// +[SCStoriesSnapReadReceiptRecord objectClassFunctionPointer]
// Type encoding: {SCDocObjectClassFunctionPointer=^?^?}16@0:8
// Implementation: 0x108500130

@end
