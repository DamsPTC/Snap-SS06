// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMultiSourceCountryProviderImpl
// Superclass: NSObject
// Address: 0x112a297d8

@interface SCMultiSourceCountryProviderImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMultiSourceCountryProviderImpl initWithCarrierNetworkInfoProvider:graphene:IPCountryCodeProvider:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105306ef8

// -[SCMultiSourceCountryProviderImpl isoCountryCode]
// Type encoding: @16@0:8
// Implementation: 0x105306fc4

// -[SCMultiSourceCountryProviderImpl isoCountryCodeEvaluatedFromSources:]
// Type encoding: @24@0:8@16
// Implementation: 0x105307014

// -[SCMultiSourceCountryProviderImpl _isoCountryCodeFromTweak]
// Type encoding: @16@0:8
// Implementation: 0x1053072d8

// -[SCMultiSourceCountryProviderImpl _isoCountryCodeFromLocale]
// Type encoding: @16@0:8
// Implementation: 0x105307334

// -[SCMultiSourceCountryProviderImpl _isoCountryCodeFromCarrier]
// Type encoding: @16@0:8
// Implementation: 0x1053073f0

// -[SCMultiSourceCountryProviderImpl _isoCountryCodeFromIPAddress]
// Type encoding: @16@0:8
// Implementation: 0x1053074c8

// -[SCMultiSourceCountryProviderImpl _isValidISOCountryCode:]
// Type encoding: B24@0:8@16
// Implementation: 0x105307568

// -[SCMultiSourceCountryProviderImpl _logCountryCodeWithSource:isValid:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105307650

// -[SCMultiSourceCountryProviderImpl _osVersion]
// Type encoding: @16@0:8
// Implementation: 0x105307724

// -[SCMultiSourceCountryProviderImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1053077a4

@end
