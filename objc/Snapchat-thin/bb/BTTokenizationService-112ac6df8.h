// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: BTTokenizationService
// Superclass: NSObject
// Address: 0x112ac6df8

@interface BTTokenizationService

// Property: tokenizationBlocks; attributes: T@"NSMutableDictionary",&,N,V_tokenizationBlocks
// Property: allTypes; attributes: T@"NSArray",R,N

// -[BTTokenizationService tokenizationBlocks]
// Type encoding: @16@0:8
// Implementation: 0x10002a634

// -[BTTokenizationService registerType:withTokenizationBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10002a5c0

// -[BTTokenizationService isTypeAvailable:]
// Type encoding: B24@0:8@16
// Implementation: 0x1060f4c14

// -[BTTokenizationService allTypes]
// Type encoding: @16@0:8
// Implementation: 0x1060f4c90

// -[BTTokenizationService tokenizeType:withAPIClient:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1060f4cd4

// -[BTTokenizationService tokenizeType:options:withAPIClient:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1060f4ce4

// -[BTTokenizationService setTokenizationBlocks:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060f4f30

// -[BTTokenizationService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1060f4f60

// +[BTTokenizationService sharedService]
// Type encoding: @16@0:8
// Implementation: 0x10002a2a8

@end
