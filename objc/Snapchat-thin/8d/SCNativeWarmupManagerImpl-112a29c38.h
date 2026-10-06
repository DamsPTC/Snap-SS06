// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNativeWarmupManagerImpl
// Superclass: NSObject
// Address: 0x112a29c38

@interface SCNativeWarmupManagerImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNativeWarmupManagerImpl initWithNativeWarmupManagerProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x105309920

// -[SCNativeWarmupManagerImpl warmupForURL:useCase:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105309a34

// -[SCNativeWarmupManagerImpl warmupForHost:useCase:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105309a40

// -[SCNativeWarmupManagerImpl warmupForURL:httpMethod:useCase:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x105309a4c

// -[SCNativeWarmupManagerImpl warmupForHost:useCase:onSuccess:onError:]
// Type encoding: v48@0:8@16q24@?32@?40
// Implementation: 0x105309a58

// -[SCNativeWarmupManagerImpl warmupForURL:useCase:onSuccess:onError:]
// Type encoding: v48@0:8@16q24@?32@?40
// Implementation: 0x105309b04

// -[SCNativeWarmupManagerImpl warmupForURL:httpMethod:useCase:onSuccess:onError:]
// Type encoding: v56@0:8@16q24q32@?40@?48
// Implementation: 0x105309bfc

// -[SCNativeWarmupManagerImpl submitToNativeWarmupManager:useCase:onSuccess:onError:]
// Type encoding: v48@0:8@16q24@?32@?40
// Implementation: 0x105309d24

// -[SCNativeWarmupManagerImpl onAppStateChanged:]
// Type encoding: v24@0:8q16
// Implementation: 0x105309e08

// -[SCNativeWarmupManagerImpl getHost:]
// Type encoding: @24@0:8@16
// Implementation: 0x105309e4c

// -[SCNativeWarmupManagerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105309eec

@end
