// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCachingMediaItemBuildRequest
// Superclass: NSObject
// Address: 0x112ca20c8

@interface SCCachingMediaItemBuildRequest

// Property: requestGroup; attributes: T@"SCCachingMediaItemBuildRequestGroup",W,N,V_requestGroup
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: progressReceiver; attributes: T@"<SCProgressReceiving>",W,N,V_progressReceiver

// -[SCCachingMediaItemBuildRequest initWithResultHandler:]
// Type encoding: @24@0:8@?16
// Implementation: 0x10b67ef14

// -[SCCachingMediaItemBuildRequest isCancelled]
// Type encoding: B16@0:8
// Implementation: 0x10b67efa8

// -[SCCachingMediaItemBuildRequest cancel]
// Type encoding: v16@0:8
// Implementation: 0x10b67efc8

// -[SCCachingMediaItemBuildRequest performWithItem:count:isCancelled:isFinal:]
// Type encoding: v40@0:8@16q24B32B36
// Implementation: 0x10b67f004

// -[SCCachingMediaItemBuildRequest progressReceiver]
// Type encoding: @16@0:8
// Implementation: 0x10b67f084

// -[SCCachingMediaItemBuildRequest setProgressReceiver:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b67f09c

// -[SCCachingMediaItemBuildRequest requestGroup]
// Type encoding: @16@0:8
// Implementation: 0x10b67f0a8

// -[SCCachingMediaItemBuildRequest setRequestGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b67f0c0

// -[SCCachingMediaItemBuildRequest .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b67f0cc

@end
