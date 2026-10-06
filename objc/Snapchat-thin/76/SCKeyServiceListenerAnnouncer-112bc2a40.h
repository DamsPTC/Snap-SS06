// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCKeyServiceListenerAnnouncer
// Superclass: NSObject
// Address: 0x112bc2a40

@interface SCKeyServiceListenerAnnouncer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCKeyServiceListenerAnnouncer description]
// Type encoding: @16@0:8
// Implementation: 0x108dee358

// -[SCKeyServiceListenerAnnouncer addListener:]
// Type encoding: B24@0:8@16
// Implementation: 0x108dee534

// -[SCKeyServiceListenerAnnouncer removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x108dee968

// -[SCKeyServiceListenerAnnouncer keyService:didChangeAllowedFutureAuthorizationDate:errorCode:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x108deeb98

// -[SCKeyServiceListenerAnnouncer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108deecac

// -[SCKeyServiceListenerAnnouncer .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x108deecd4

@end
