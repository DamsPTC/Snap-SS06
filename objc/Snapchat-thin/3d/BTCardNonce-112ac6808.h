// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: BTCardNonce
// Superclass: BTPaymentMethodNonce
// Address: 0x112ac6808

@interface BTCardNonce

// Property: cardNetwork; attributes: Tq,R,N,V_cardNetwork
// Property: lastTwo; attributes: T@"NSString",R,C,N,V_lastTwo
// Property: lastFour; attributes: T@"NSString",R,C,N,V_lastFour
// Property: bin; attributes: T@"NSString",R,C,N,V_bin
// Property: binData; attributes: T@"BTBinData",R,N,V_binData
// Property: threeDSecureInfo; attributes: T@"BTThreeDSecureInfo",R,N,V_threeDSecureInfo
// Property: authenticationInsight; attributes: T@"BTAuthenticationInsight",R,N,V_authenticationInsight

// -[BTCardNonce initWithNonce:description:cardNetwork:lastTwo:lastFour:isDefault:cardJSON:authInsightJSON:]
// Type encoding: @76@0:8@16@24q32@40@48B56@60@68
// Implementation: 0x1060ea5a8

// -[BTCardNonce cardNetwork]
// Type encoding: q16@0:8
// Implementation: 0x1060eafe4

// -[BTCardNonce lastTwo]
// Type encoding: @16@0:8
// Implementation: 0x1060eaff4

// -[BTCardNonce lastFour]
// Type encoding: @16@0:8
// Implementation: 0x1060eb004

// -[BTCardNonce bin]
// Type encoding: @16@0:8
// Implementation: 0x1060eb014

// -[BTCardNonce binData]
// Type encoding: @16@0:8
// Implementation: 0x1060eb024

// -[BTCardNonce threeDSecureInfo]
// Type encoding: @16@0:8
// Implementation: 0x1060eb034

// -[BTCardNonce authenticationInsight]
// Type encoding: @16@0:8
// Implementation: 0x1060eb044

// -[BTCardNonce .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1060eb054

// +[BTCardNonce typeStringFromCardNetwork:]
// Type encoding: @24@0:8q16
// Implementation: 0x1060ea920

// +[BTCardNonce cardNetworkFromGatewayCardType:]
// Type encoding: q24@0:8@16
// Implementation: 0x1060ea948

// +[BTCardNonce cardNonceWithJSON:]
// Type encoding: @24@0:8@16
// Implementation: 0x1060ea9e0

// +[BTCardNonce cardNonceWithGraphQLJSON:]
// Type encoding: @24@0:8@16
// Implementation: 0x1060eacb4

@end
