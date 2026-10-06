// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCServerNetworkClockProviderImpl
// Superclass: NSObject
// Address: 0x112c752a8

@interface SCServerNetworkClockProviderImpl

// Property: networkTime; attributes: T@"SCNetworkClockTime",&,V_networkTime

// -[SCServerNetworkClockProviderImpl init]
// Type encoding: @16@0:8
// Implementation: 0x10036ac5c

// -[SCServerNetworkClockProviderImpl syncClockWithServerResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008a1c98

// -[SCServerNetworkClockProviderImpl networkTimeIfSignificantlyDifferentFromClientWithTolerance:]
// Type encoding: @24@0:8d16
// Implementation: 0x10036ae00

// -[SCServerNetworkClockProviderImpl networkTime]
// Type encoding: @16@0:8
// Implementation: 0x10036ae8c

// -[SCServerNetworkClockProviderImpl setNetworkTime:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2d1a3c

// -[SCServerNetworkClockProviderImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b2d1a44

// +[SCServerNetworkClockProviderImpl sharedInstance]
// Type encoding: @16@0:8
// Implementation: 0x10036abac

@end
