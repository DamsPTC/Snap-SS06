// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPhoneNumberUtils
// Superclass: NSObject
// Address: 0x112bdcff8

@interface SCPhoneNumberUtils


// +[SCPhoneNumberUtils formatPhoneNumber:]
// Type encoding: @24@0:8@16
// Implementation: 0x108f96e58

// +[SCPhoneNumberUtils formatPhoneNumber:withCountryCode:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108f96ef8

// +[SCPhoneNumberUtils formatPhoneNumber:toE164UsingCountryCode:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108f97000

// +[SCPhoneNumberUtils formatPhoneNumberToE164Normalized:countryCode:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108f971c4

// +[SCPhoneNumberUtils formatPhoneNumberShouldShowForeignCountryCode:withPhoneNumber:withCountryCode:]
// Type encoding: @36@0:8B16@20@28
// Implementation: 0x108f973b4

// +[SCPhoneNumberUtils getCountryCodeForRegion:]
// Type encoding: I24@0:8@16
// Implementation: 0x108f97534

// +[SCPhoneNumberUtils getFormattedCountryCodeForRegion:]
// Type encoding: @24@0:8@16
// Implementation: 0x108f975b8

// +[SCPhoneNumberUtils getCountryFlagEmojiForRegion:]
// Type encoding: @24@0:8@16
// Implementation: 0x108f97634

// +[SCPhoneNumberUtils getPhoneCountryCodes]
// Type encoding: @16@0:8
// Implementation: 0x108f97700

// +[SCPhoneNumberUtils getPhoneCountryCodesWithCountrySuggestions:]
// Type encoding: @24@0:8@16
// Implementation: 0x108f97708

// +[SCPhoneNumberUtils isValidClientPhoneNumberFormat:]
// Type encoding: B24@0:8@16
// Implementation: 0x108f979f0

// +[SCPhoneNumberUtils stripDigitsFromPhoneNumber:]
// Type encoding: @24@0:8@16
// Implementation: 0x108f97a48

// +[SCPhoneNumberUtils normalizeDigitsOnly:]
// Type encoding: @24@0:8@16
// Implementation: 0x108f97ab0

// +[SCPhoneNumberUtils normalizeDigitsWithoutVanity:]
// Type encoding: @24@0:8@16
// Implementation: 0x108f97b20

// +[SCPhoneNumberUtils formatMobileNumber:countryCodeNumber:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108f97b90

// +[SCPhoneNumberUtils getCountryCodeAbbreviations:]
// Type encoding: @24@0:8@16
// Implementation: 0x108f97c18

// +[SCPhoneNumberUtils getMobileNumberForLogIn:mobileNumber:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108f97d6c

// +[SCPhoneNumberUtils getExamplePhoneNumber:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x108f97db4

// +[SCPhoneNumberUtils extractFullPhoneNumber:]
// Type encoding: @24@0:8@16
// Implementation: 0x108f97e64

// +[SCPhoneNumberUtils formatFullPhoneNumber:]
// Type encoding: @24@0:8@16
// Implementation: 0x108f97f68

// +[SCPhoneNumberUtils getRegionCodeForUnformattedPhoneNumber:]
// Type encoding: @24@0:8@16
// Implementation: 0x108f98008

@end
