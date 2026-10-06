// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCKeyServiceAuthorizationRequestHandler
// Superclass: NSObject
// Address: 0x112bc2518

@interface SCKeyServiceAuthorizationRequestHandler

// Property: UUID; attributes: T@"NSString",R,C,N,V_UUID
// Property: passphrase; attributes: T@"NSString",R,C,N,V_passphrase
// Property: queue; attributes: T@"NSObject<OS_dispatch_queue>",R,N,V_queue
// Property: authorizationHandler; attributes: T@?,R,C,N,V_authorizationHandler

// -[SCKeyServiceAuthorizationRequestHandler initWithUUID:passphrase:queue:authorizationHandler:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x108de45d0

// -[SCKeyServiceAuthorizationRequestHandler performWithResult:error:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x108de46d8

// -[SCKeyServiceAuthorizationRequestHandler UUID]
// Type encoding: @16@0:8
// Implementation: 0x108de47ac

// -[SCKeyServiceAuthorizationRequestHandler passphrase]
// Type encoding: @16@0:8
// Implementation: 0x108de47b4

// -[SCKeyServiceAuthorizationRequestHandler queue]
// Type encoding: @16@0:8
// Implementation: 0x108de47bc

// -[SCKeyServiceAuthorizationRequestHandler authorizationHandler]
// Type encoding: @?16@0:8
// Implementation: 0x108de47c4

// -[SCKeyServiceAuthorizationRequestHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108de47cc

@end
