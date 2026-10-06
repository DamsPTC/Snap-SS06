// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreLoginAttestationImpl
// Superclass: NSObject
// Address: 0x112a2e558

@interface SCPreLoginAttestationImpl

// Property: userNotTrackedLogger; attributes: T@"SCLazy",R,N,V_userNotTrackedLogger
// Property: grapheneRegistry; attributes: T@"SCLazy",R,N,V_grapheneRegistry
// Property: metricFriendlyOsVersion; attributes: T@"NSString",R,N,V_metricFriendlyOsVersion

// -[SCPreLoginAttestationImpl initWithBlizzardLogger:grapheneRegistry:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105388e5c

// -[SCPreLoginAttestationImpl generateAttestationPayloadForLogin:requestPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105388f6c

// -[SCPreLoginAttestationImpl generateAttestationPayloadForRegister:requestPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105388f74

// -[SCPreLoginAttestationImpl generateAttestationPayloadForLoginOrRegistration:requestPath:requestType:]
// Type encoding: @36@0:8@16@24i32
// Implementation: 0x105388f7c

// -[SCPreLoginAttestationImpl _getAttestationPayload:path:requestType:]
// Type encoding: @36@0:8@16@24i32
// Implementation: 0x105389030

// -[SCPreLoginAttestationImpl _getGeneratedPayloadCount]
// Type encoding: q16@0:8
// Implementation: 0x1053890f0

// -[SCPreLoginAttestationImpl _logPayloadCreationEvent:requestCount:requestType:]
// Type encoding: v40@0:8d16q24@32
// Implementation: 0x1053890f4

// -[SCPreLoginAttestationImpl userNotTrackedLogger]
// Type encoding: @16@0:8
// Implementation: 0x10538924c

// -[SCPreLoginAttestationImpl grapheneRegistry]
// Type encoding: @16@0:8
// Implementation: 0x105389254

// -[SCPreLoginAttestationImpl metricFriendlyOsVersion]
// Type encoding: @16@0:8
// Implementation: 0x10538925c

// -[SCPreLoginAttestationImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105389264

@end
