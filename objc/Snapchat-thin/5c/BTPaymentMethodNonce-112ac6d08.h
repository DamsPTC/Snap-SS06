// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: BTPaymentMethodNonce
// Superclass: NSObject
// Address: 0x112ac6d08

@interface BTPaymentMethodNonce

// Property: nonce; attributes: T@"NSString",C,N,V_nonce
// Property: localizedDescription; attributes: T@"NSString",C,N,V_localizedDescription
// Property: type; attributes: T@"NSString",C,N,V_type
// Property: isDefault; attributes: TB,N,V_isDefault

// -[BTPaymentMethodNonce initWithNonce:localizedDescription:type:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1060f4418

// -[BTPaymentMethodNonce initWithNonce:localizedDescription:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1060f44f4

// -[BTPaymentMethodNonce initWithNonce:localizedDescription:type:isDefault:]
// Type encoding: @44@0:8@16@24@32B40
// Implementation: 0x1060f4500

// -[BTPaymentMethodNonce nonce]
// Type encoding: @16@0:8
// Implementation: 0x1060f4528

// -[BTPaymentMethodNonce setNonce:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060f4530

// -[BTPaymentMethodNonce localizedDescription]
// Type encoding: @16@0:8
// Implementation: 0x1060f4538

// -[BTPaymentMethodNonce setLocalizedDescription:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060f4540

// -[BTPaymentMethodNonce type]
// Type encoding: @16@0:8
// Implementation: 0x1060f4548

// -[BTPaymentMethodNonce setType:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060f4550

// -[BTPaymentMethodNonce isDefault]
// Type encoding: B16@0:8
// Implementation: 0x1060f4558

// -[BTPaymentMethodNonce setIsDefault:]
// Type encoding: v20@0:8B16
// Implementation: 0x1060f4560

// -[BTPaymentMethodNonce .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1060f4568

@end
