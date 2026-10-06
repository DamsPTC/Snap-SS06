// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMediaEndpointInfo
// Superclass: NSObject
// Address: 0x112ca1e48

@interface SCMediaEndpointInfo

// Property: requestMethod; attributes: T@"NSString",R,C,N,V_requestMethod
// Property: shouldAuthenticate; attributes: TB,R,N,V_shouldAuthenticate
// Property: shouldDecrypt; attributes: TB,R,N,V_shouldDecrypt
// Property: mediaIV; attributes: T@"NSString",R,C,N,V_mediaIV
// Property: mediaKey; attributes: T@"NSString",R,C,N,V_mediaKey

// -[SCMediaEndpointInfo initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b67c31c

// -[SCMediaEndpointInfo initWithRequestMethod:shouldAuthenticate:shouldDecrypt:mediaIV:mediaKey:]
// Type encoding: @48@0:8@16B24B28@32@40
// Implementation: 0x10b67c41c

// -[SCMediaEndpointInfo copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b67c50c

// -[SCMediaEndpointInfo encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b67c530

// -[SCMediaEndpointInfo hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b67c5cc

// -[SCMediaEndpointInfo isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b67c658

// -[SCMediaEndpointInfo requestMethod]
// Type encoding: @16@0:8
// Implementation: 0x10b67c738

// -[SCMediaEndpointInfo shouldAuthenticate]
// Type encoding: B16@0:8
// Implementation: 0x10b67c740

// -[SCMediaEndpointInfo shouldDecrypt]
// Type encoding: B16@0:8
// Implementation: 0x10b67c748

// -[SCMediaEndpointInfo mediaIV]
// Type encoding: @16@0:8
// Implementation: 0x10b67c750

// -[SCMediaEndpointInfo mediaKey]
// Type encoding: @16@0:8
// Implementation: 0x10b67c758

// -[SCMediaEndpointInfo .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b67c760

@end
