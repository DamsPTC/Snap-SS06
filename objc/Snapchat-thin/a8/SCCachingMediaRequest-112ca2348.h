// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCachingMediaRequest
// Superclass: NSObject
// Address: 0x112ca2348

@interface SCCachingMediaRequest

// Property: requestGroup; attributes: T@"SCCachingMediaRequestGroup",W,N,V_requestGroup
// Property: isCancelled; attributes: TB,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: progressReceiver; attributes: T@"<SCProgressReceiving>",W,N,V_progressReceiver

// -[SCCachingMediaRequest initWithDeliveryMode:queue:cacheMissHandler:resultHandler:]
// Type encoding: @48@0:8Q16@24@?32@?40
// Implementation: 0x10b689b2c

// -[SCCachingMediaRequest isCancelled]
// Type encoding: B16@0:8
// Implementation: 0x10b689c2c

// -[SCCachingMediaRequest cancel]
// Type encoding: v16@0:8
// Implementation: 0x10b689c4c

// -[SCCachingMediaRequest performCacheMiss]
// Type encoding: v16@0:8
// Implementation: 0x10b689c88

// -[SCCachingMediaRequest perform:fromCache:sourceLevel:final:]
// Type encoding: v40@0:8@16B24q28B36
// Implementation: 0x10b689cfc

// -[SCCachingMediaRequest progressReceiver]
// Type encoding: @16@0:8
// Implementation: 0x10b689e20

// -[SCCachingMediaRequest setProgressReceiver:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b689e38

// -[SCCachingMediaRequest requestGroup]
// Type encoding: @16@0:8
// Implementation: 0x10b689e44

// -[SCCachingMediaRequest setRequestGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b689e5c

// -[SCCachingMediaRequest .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b689e68

@end
