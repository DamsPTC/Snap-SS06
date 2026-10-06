// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: BTConfiguration
// Superclass: NSObject
// Address: 0x112ac6b28

@interface BTConfiguration

// Property: collectFraudData; attributes: TB,R,N
// Property: isGraphQLEnabled; attributes: TB,R,N
// Property: json; attributes: T@"BTJSON",R,N,V_json

// -[BTConfiguration isGraphQLEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1060efe3c

// -[BTConfiguration collectFraudData]
// Type encoding: B16@0:8
// Implementation: 0x1060eb23c

// -[BTConfiguration init]
// Type encoding: @16@0:8
// Implementation: 0x1060efee4

// -[BTConfiguration initWithJSON:]
// Type encoding: @24@0:8@16
// Implementation: 0x1060eff18

// -[BTConfiguration json]
// Type encoding: @16@0:8
// Implementation: 0x1060eff98

// -[BTConfiguration .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1060effa0

// +[BTConfiguration isBetaEnabledPaymentOption:]
// Type encoding: B24@0:8@16
// Implementation: 0x1060eff8c

// +[BTConfiguration setBetaPaymentOption:isEnabled:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1060eff94

@end
