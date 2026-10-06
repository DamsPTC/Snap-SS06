// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: BTCard
// Superclass: NSObject
// Address: 0x112ac6768

@interface BTCard

// Property: mutableParameters; attributes: T@"NSMutableDictionary",&,N,V_mutableParameters
// Property: cardTokenizationGraphQLMutation; attributes: T@"NSString",R,N
// Property: number; attributes: T@"NSString",C,N,V_number
// Property: expirationMonth; attributes: T@"NSString",C,N,V_expirationMonth
// Property: expirationYear; attributes: T@"NSString",C,N,V_expirationYear
// Property: cvv; attributes: T@"NSString",C,N,V_cvv
// Property: postalCode; attributes: T@"NSString",C,N,V_postalCode
// Property: cardholderName; attributes: T@"NSString",C,N,V_cardholderName
// Property: firstName; attributes: T@"NSString",C,N,V_firstName
// Property: lastName; attributes: T@"NSString",C,N,V_lastName
// Property: company; attributes: T@"NSString",C,N,V_company
// Property: streetAddress; attributes: T@"NSString",C,N,V_streetAddress
// Property: extendedAddress; attributes: T@"NSString",C,N,V_extendedAddress
// Property: locality; attributes: T@"NSString",C,N,V_locality
// Property: region; attributes: T@"NSString",C,N,V_region
// Property: countryName; attributes: T@"NSString",C,N,V_countryName
// Property: countryCodeAlpha2; attributes: T@"NSString",C,N,V_countryCodeAlpha2
// Property: countryCodeAlpha3; attributes: T@"NSString",C,N,V_countryCodeAlpha3
// Property: countryCodeNumeric; attributes: T@"NSString",C,N,V_countryCodeNumeric
// Property: shouldValidate; attributes: TB,N,V_shouldValidate
// Property: authenticationInsightRequested; attributes: TB,N,V_authenticationInsightRequested
// Property: merchantAccountId; attributes: T@"NSString",C,N,V_merchantAccountId

// -[BTCard init]
// Type encoding: @16@0:8
// Implementation: 0x1060e74ec

// -[BTCard initWithParameters:]
// Type encoding: @24@0:8@16
// Implementation: 0x1060e74f8

// -[BTCard initWithNumber:expirationMonth:expirationYear:cvv:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1060e7a18

// -[BTCard parameters]
// Type encoding: @16@0:8
// Implementation: 0x1060e7b00

// -[BTCard graphQLParameters]
// Type encoding: @16@0:8
// Implementation: 0x1060e8250

// -[BTCard cardTokenizationGraphQLMutation]
// Type encoding: @16@0:8
// Implementation: 0x1060e8b34

// -[BTCard number]
// Type encoding: @16@0:8
// Implementation: 0x1060e8bbc

// -[BTCard setNumber:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060e8bc4

// -[BTCard expirationMonth]
// Type encoding: @16@0:8
// Implementation: 0x1060e8bcc

// -[BTCard setExpirationMonth:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060e8bd4

// -[BTCard expirationYear]
// Type encoding: @16@0:8
// Implementation: 0x1060e8bdc

// -[BTCard setExpirationYear:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060e8be4

// -[BTCard cvv]
// Type encoding: @16@0:8
// Implementation: 0x1060e8bec

// -[BTCard setCvv:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060e8bf4

// -[BTCard postalCode]
// Type encoding: @16@0:8
// Implementation: 0x1060e8bfc

// -[BTCard setPostalCode:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060e8c04

// -[BTCard cardholderName]
// Type encoding: @16@0:8
// Implementation: 0x1060e8c0c

// -[BTCard setCardholderName:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060e8c14

// -[BTCard firstName]
// Type encoding: @16@0:8
// Implementation: 0x1060e8c1c

// -[BTCard setFirstName:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060e8c24

// -[BTCard lastName]
// Type encoding: @16@0:8
// Implementation: 0x1060e8c2c

// -[BTCard setLastName:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060e8c34

// -[BTCard company]
// Type encoding: @16@0:8
// Implementation: 0x1060e8c3c

// -[BTCard setCompany:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060e8c44

// -[BTCard streetAddress]
// Type encoding: @16@0:8
// Implementation: 0x1060e8c4c

// -[BTCard setStreetAddress:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060e8c54

// -[BTCard extendedAddress]
// Type encoding: @16@0:8
// Implementation: 0x1060e8c5c

// -[BTCard setExtendedAddress:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060e8c64

// -[BTCard locality]
// Type encoding: @16@0:8
// Implementation: 0x1060e8c6c

// -[BTCard setLocality:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060e8c74

// -[BTCard region]
// Type encoding: @16@0:8
// Implementation: 0x1060e8c7c

// -[BTCard setRegion:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060e8c84

// -[BTCard countryName]
// Type encoding: @16@0:8
// Implementation: 0x1060e8c8c

// -[BTCard setCountryName:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060e8c94

// -[BTCard countryCodeAlpha2]
// Type encoding: @16@0:8
// Implementation: 0x1060e8c9c

// -[BTCard setCountryCodeAlpha2:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060e8ca4

// -[BTCard countryCodeAlpha3]
// Type encoding: @16@0:8
// Implementation: 0x1060e8cac

// -[BTCard setCountryCodeAlpha3:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060e8cb4

// -[BTCard countryCodeNumeric]
// Type encoding: @16@0:8
// Implementation: 0x1060e8cbc

// -[BTCard setCountryCodeNumeric:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060e8cc4

// -[BTCard shouldValidate]
// Type encoding: B16@0:8
// Implementation: 0x1060e8ccc

// -[BTCard setShouldValidate:]
// Type encoding: v20@0:8B16
// Implementation: 0x1060e8cd4

// -[BTCard authenticationInsightRequested]
// Type encoding: B16@0:8
// Implementation: 0x1060e8cdc

// -[BTCard setAuthenticationInsightRequested:]
// Type encoding: v20@0:8B16
// Implementation: 0x1060e8ce4

// -[BTCard merchantAccountId]
// Type encoding: @16@0:8
// Implementation: 0x1060e8cec

// -[BTCard setMerchantAccountId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060e8cf4

// -[BTCard mutableParameters]
// Type encoding: @16@0:8
// Implementation: 0x1060e8cfc

// -[BTCard setMutableParameters:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060e8d04

// -[BTCard .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1060e8d34

@end
