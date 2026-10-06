// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPhoneNumberDefaultFormatter
// Superclass: NSObject
// Address: 0x112bdcfa8

@interface SCPhoneNumberDefaultFormatter

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPhoneNumberDefaultFormatter initWithUseBetterSourceToGetCountryCode:multiSourceCountryProvider:]
// Type encoding: @28@0:8B16@20
// Implementation: 0x1003df690

// -[SCPhoneNumberDefaultFormatter getFormattedCountryCodeForRegion:]
// Type encoding: @24@0:8@16
// Implementation: 0x108f96028

// -[SCPhoneNumberDefaultFormatter getFormattedCountryCodeWithFlagForRegion:]
// Type encoding: @24@0:8@16
// Implementation: 0x108f96034

// -[SCPhoneNumberDefaultFormatter getFormattedFullCountryNameWithFlagForRegion:]
// Type encoding: @24@0:8@16
// Implementation: 0x108f960d8

// -[SCPhoneNumberDefaultFormatter isValidCountryNameAbbreviation:forCountryCode:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x108f9618c

// -[SCPhoneNumberDefaultFormatter getCountryCodeAbbreviation:]
// Type encoding: @24@0:8@16
// Implementation: 0x108f962b4

// -[SCPhoneNumberDefaultFormatter formatPhoneNumber:withCountryCode:phoneLengthConfigMap:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x108f96400

// -[SCPhoneNumberDefaultFormatter formatAsYouTypePhoneNumber:withCountryCode:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108f96650

// -[SCPhoneNumberDefaultFormatter formatAsYouTypeCountryCode:]
// Type encoding: @24@0:8@16
// Implementation: 0x108f9672c

// -[SCPhoneNumberDefaultFormatter normalizeDigitsOnly:]
// Type encoding: @24@0:8@16
// Implementation: 0x108f96838

// -[SCPhoneNumberDefaultFormatter normalizeDigitsWithoutVanity:]
// Type encoding: @24@0:8@16
// Implementation: 0x108f96844

// -[SCPhoneNumberDefaultFormatter getCountryCodeForRegion:]
// Type encoding: I24@0:8@16
// Implementation: 0x108f96850

// -[SCPhoneNumberDefaultFormatter getCurrentOrUSDefaultCountryCode]
// Type encoding: @16@0:8
// Implementation: 0x108f9685c

// -[SCPhoneNumberDefaultFormatter getCountryCodeNumber:]
// Type encoding: @24@0:8@16
// Implementation: 0x108f96928

// -[SCPhoneNumberDefaultFormatter getFullCountryNameFromCountryCodeAbbreviation:]
// Type encoding: @24@0:8@16
// Implementation: 0x108f96a00

// -[SCPhoneNumberDefaultFormatter getPhoneCountryCodes]
// Type encoding: @16@0:8
// Implementation: 0x108f96a88

// -[SCPhoneNumberDefaultFormatter getPhoneCountryCodesSuggestions:]
// Type encoding: @24@0:8@16
// Implementation: 0x108f96a94

// -[SCPhoneNumberDefaultFormatter isValidClientPhoneNumberFormat:]
// Type encoding: B24@0:8@16
// Implementation: 0x108f96aa0

// -[SCPhoneNumberDefaultFormatter stripDigitsFromPhoneNumber:]
// Type encoding: @24@0:8@16
// Implementation: 0x108f96aac

// -[SCPhoneNumberDefaultFormatter formatPhoneNumberFromCurrentPhone:newPhone:range:currentCountryCode:phoneLengthConfigMap:]
// Type encoding: @64@0:8@16@24{_NSRange=QQ}32@48@56
// Implementation: 0x108f96ab8

// -[SCPhoneNumberDefaultFormatter getPhoneCountryCodeFromCountryCodeAbbreviation:]
// Type encoding: @24@0:8@16
// Implementation: 0x108f96b70

// -[SCPhoneNumberDefaultFormatter getAutofillPhoneNumberIfPossible:]
// Type encoding: @24@0:8@16
// Implementation: 0x108f96c10

// -[SCPhoneNumberDefaultFormatter _isPotentiallyFullPhoneNumber:]
// Type encoding: B24@0:8@16
// Implementation: 0x108f96cbc

// -[SCPhoneNumberDefaultFormatter _isPhoneLengthValid:countryCode:phoneLengthConfigMap:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x108f96d18

// -[SCPhoneNumberDefaultFormatter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108f96e28

@end
