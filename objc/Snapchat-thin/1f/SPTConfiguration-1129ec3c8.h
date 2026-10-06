// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SPTConfiguration
// Superclass: NSObject
// Address: 0x1129ec3c8

@interface SPTConfiguration

// Property: clientID; attributes: T@"NSString",N,R
// Property: redirectURL; attributes: T@"NSURL",N,R
// Property: tokenSwapURL; attributes: T@"NSURL",N,C
// Property: tokenRefreshURL; attributes: T@"NSURL",N,C
// Property: playURI; attributes: T@"NSString",N,C

// -[SPTConfiguration initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a2183c

// -[SPTConfiguration encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a21958

// -[SPTConfiguration clientID]
// Type encoding: @16@0:8
// Implementation: 0x104a2060c

// -[SPTConfiguration redirectURL]
// Type encoding: @16@0:8
// Implementation: 0x104a20690

// -[SPTConfiguration tokenSwapURL]
// Type encoding: @16@0:8
// Implementation: 0x104a20770

// -[SPTConfiguration setTokenSwapURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a207d0

// -[SPTConfiguration tokenRefreshURL]
// Type encoding: @16@0:8
// Implementation: 0x104a20874

// -[SPTConfiguration setTokenRefreshURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a209b8

// -[SPTConfiguration playURI]
// Type encoding: @16@0:8
// Implementation: 0x104a20b5c

// -[SPTConfiguration setPlayURI:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a20c28

// -[SPTConfiguration initWithClientID:redirectURL:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104a20f74

// -[SPTConfiguration init]
// Type encoding: @16@0:8
// Implementation: 0x104a212ec

// -[SPTConfiguration .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104a2134c

// +[SPTConfiguration supportsSecureCoding]
// Type encoding: B16@0:8
// Implementation: 0x104a213e0

// +[SPTConfiguration isValidWithClientID:]
// Type encoding: B24@0:8@16
// Implementation: 0x104a210c8

// +[SPTConfiguration isValidWithRedirectURL:]
// Type encoding: B24@0:8@16
// Implementation: 0x104a211f8

@end
