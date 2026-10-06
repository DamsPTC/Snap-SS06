// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCArgosClient
// Superclass: NSObject
// Address: 0x112a2e4b8

@interface SCArgosClient

// Property: argosNativeClient; attributes: T@"SCLazy",R,N,V_argosNativeClient

// -[SCArgosClient initWithTokenProvider:blizzardLogger:circumstanceEngine:argosConfig:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x100444a30

// -[SCArgosClient _createNativeClientWithTokenProvider:blizzardLogger:circumstanceEngine:argosConfig:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x105388994

// -[SCArgosClient getAttestationHeaders:requestPath:isLogin:requestId:argosMode:]
// Type encoding: @52@0:8@16@24B32@36q44
// Implementation: 0x105388bf0

// -[SCArgosClient getArgosTokenAsync:requestId:callback:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105388ca4

// -[SCArgosClient argosNativeClient]
// Type encoding: @16@0:8
// Implementation: 0x105388d2c

// -[SCArgosClient .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105388d34

@end
