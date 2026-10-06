// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPaymentsCard
// Superclass: BTCard
// Address: 0x1129fb6a8

@interface SCPaymentsCard

// Property: identifier; attributes: T@"NSString",&,N,V_identifier
// Property: adAccountId; attributes: T@"NSString",R,N,V_adAccountId
// Property: lastFourDigits; attributes: T@"NSString",R,N,V_lastFourDigits
// Property: brandNetwork; attributes: Tq,R,N,V_brandNetwork
// Property: brandName; attributes: T@"NSString",R,N,V_brandName
// Property: iconImage; attributes: T@"UIImage",R,N
// Property: error; attributes: T@"NSError",R,N,V_error

// -[SCPaymentsCard initWithNumber:expirationMonth:expirationYear:cvv:billingAdress:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x104da9d58

// -[SCPaymentsCard initWithLastFourDigits:expirationMonth:expirationYear:cvv:brandNetwork:brandName:billingAdress:]
// Type encoding: @72@0:8@16@24@32@40q48@56@64
// Implementation: 0x104da9f0c

// -[SCPaymentsCard initWithNumber:expirationMonth:expirationYear:cvv:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x104dcd190

// -[SCPaymentsCard initWithObfuscated:]
// Type encoding: @24@0:8@16
// Implementation: 0x104dcd2e4

// -[SCPaymentsCard initWithLastFourDigits:expirationMonth:expirationYear:cvv:postalCode:brandNetwork:brandName:]
// Type encoding: @72@0:8@16@24@32@40@48q56@64
// Implementation: 0x104dcd658

// -[SCPaymentsCard initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x104dcd868

// -[SCPaymentsCard encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dcdbb0

// -[SCPaymentsCard iconImage]
// Type encoding: @16@0:8
// Implementation: 0x104dcde90

// -[SCPaymentsCard btUICardType]
// Type encoding: @16@0:8
// Implementation: 0x104dcdf50

// -[SCPaymentsCard allowedCardType]
// Type encoding: q16@0:8
// Implementation: 0x104dce11c

// -[SCPaymentsCard isBillingAddressValid]
// Type encoding: B16@0:8
// Implementation: 0x104dce168

// -[SCPaymentsCard identifier]
// Type encoding: @16@0:8
// Implementation: 0x104dce338

// -[SCPaymentsCard setIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dce348

// -[SCPaymentsCard adAccountId]
// Type encoding: @16@0:8
// Implementation: 0x104dce388

// -[SCPaymentsCard lastFourDigits]
// Type encoding: @16@0:8
// Implementation: 0x104dce398

// -[SCPaymentsCard brandNetwork]
// Type encoding: q16@0:8
// Implementation: 0x104dce3a8

// -[SCPaymentsCard brandName]
// Type encoding: @16@0:8
// Implementation: 0x104dce3b8

// -[SCPaymentsCard error]
// Type encoding: @16@0:8
// Implementation: 0x104dce3c8

// -[SCPaymentsCard .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104dce3d8

@end
