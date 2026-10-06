// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: NBPhoneNumberUtil
// Superclass: NSObject
// Address: 0x112bdd390

@interface NBPhoneNumberUtil

// Property: entireStringCacheLock; attributes: T@"NSLock",&,N,V_entireStringCacheLock
// Property: entireStringRegexCache; attributes: T@"NSMutableDictionary",&,N,V_entireStringRegexCache
// Property: lockPatternCache; attributes: T@"NSLock",&,N,V_lockPatternCache
// Property: regexPatternCache; attributes: T@"NSMutableDictionary",&,N,V_regexPatternCache
// Property: CAPTURING_DIGIT_PATTERN; attributes: T@"NSRegularExpression",&,N,V_CAPTURING_DIGIT_PATTERN
// Property: VALID_ALPHA_PHONE_PATTERN; attributes: T@"NSRegularExpression",&,N,V_VALID_ALPHA_PHONE_PATTERN
// Property: helper; attributes: T@"NBMetadataHelper",&,N,V_helper
// Property: DIGIT_MAPPINGS; attributes: T@"NSDictionary",R,N

// -[NBPhoneNumberUtil errorWithObject:withDomain:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108f9f320

// -[NBPhoneNumberUtil entireRegularExpressionWithPattern:options:error:]
// Type encoding: @40@0:8@16Q24^@32
// Implementation: 0x108f9f3b8

// -[NBPhoneNumberUtil regularExpressionWithPattern:options:error:]
// Type encoding: @40@0:8@16Q24^@32
// Implementation: 0x108f9f52c

// -[NBPhoneNumberUtil componentsSeparatedByRegex:regex:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108f9f63c

// -[NBPhoneNumberUtil stringPositionByRegex:regex:]
// Type encoding: i32@0:8@16@24
// Implementation: 0x108f9f6b8

// -[NBPhoneNumberUtil indexOfStringByString:target:]
// Type encoding: i32@0:8@16@24
// Implementation: 0x108f9f7dc

// -[NBPhoneNumberUtil replaceFirstStringByRegex:regex:withTemplate:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x108f9f7f8

// -[NBPhoneNumberUtil replaceStringByRegex:regex:withTemplate:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x108f9f928

// -[NBPhoneNumberUtil matchFirstByRegex:regex:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108f9fac0

// -[NBPhoneNumberUtil matchesByRegex:regex:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108f9fb94

// -[NBPhoneNumberUtil matchedStringByRegex:regex:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108f9fc34

// -[NBPhoneNumberUtil isStartingStringByRegex:regex:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x108f9fdac

// -[NBPhoneNumberUtil stringByReplacingOccurrencesString:withMap:removeNonMatches:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x108f9ff3c

// -[NBPhoneNumberUtil isAllDigits:]
// Type encoding: B24@0:8@16
// Implementation: 0x108fa004c

// -[NBPhoneNumberUtil getNationalSignificantNumber:]
// Type encoding: @24@0:8@16
// Implementation: 0x108fa00dc

// -[NBPhoneNumberUtil init]
// Type encoding: @16@0:8
// Implementation: 0x108fa0250

// -[NBPhoneNumberUtil initRegularExpressionSet]
// Type encoding: v16@0:8
// Implementation: 0x108fa02f8

// -[NBPhoneNumberUtil DIGIT_MAPPINGS]
// Type encoding: @16@0:8
// Implementation: 0x108fa0590

// -[NBPhoneNumberUtil initNormalizationMappings]
// Type encoding: v16@0:8
// Implementation: 0x108fa0a08

// -[NBPhoneNumberUtil extractPossibleNumber:]
// Type encoding: @24@0:8@16
// Implementation: 0x108fa1408

// -[NBPhoneNumberUtil isViablePhoneNumber:]
// Type encoding: B24@0:8@16
// Implementation: 0x108fa151c

// -[NBPhoneNumberUtil normalize:]
// Type encoding: @24@0:8@16
// Implementation: 0x108fa159c

// -[NBPhoneNumberUtil normalizeSB:]
// Type encoding: v24@0:8^@16
// Implementation: 0x108fa1624

// -[NBPhoneNumberUtil normalizeDigitsOnly:]
// Type encoding: @24@0:8@16
// Implementation: 0x108fa165c

// -[NBPhoneNumberUtil normalizeDiallableCharsOnly:]
// Type encoding: @24@0:8@16
// Implementation: 0x108fa16f4

// -[NBPhoneNumberUtil convertAlphaCharactersInNumber:]
// Type encoding: @24@0:8@16
// Implementation: 0x108fa176c

// -[NBPhoneNumberUtil getLengthOfGeographicalAreaCode:error:]
// Type encoding: i32@0:8@16^@24
// Implementation: 0x108fa17e4

// -[NBPhoneNumberUtil getLengthOfGeographicalAreaCode:]
// Type encoding: i24@0:8@16
// Implementation: 0x108fa1918

// -[NBPhoneNumberUtil getLengthOfNationalDestinationCode:error:]
// Type encoding: i32@0:8@16^@24
// Implementation: 0x108fa1a08

// -[NBPhoneNumberUtil getLengthOfNationalDestinationCode:]
// Type encoding: i24@0:8@16
// Implementation: 0x108fa1b3c

// -[NBPhoneNumberUtil getCountryMobileTokenFromCountryCode:]
// Type encoding: @24@0:8q16
// Implementation: 0x108fa1e28

// -[NBPhoneNumberUtil normalizeHelper:normalizationReplacements:removeNonMatches:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x108fa1ea8

// -[NBPhoneNumberUtil formattingRuleHasFirstGroupOnly:]
// Type encoding: B24@0:8@16
// Implementation: 0x108fa1fb4

// -[NBPhoneNumberUtil isNumberGeographical:]
// Type encoding: B24@0:8@16
// Implementation: 0x108fa201c

// -[NBPhoneNumberUtil isValidRegionCode:]
// Type encoding: B24@0:8@16
// Implementation: 0x108fa20ac

// -[NBPhoneNumberUtil hasValidCountryCallingCode:]
// Type encoding: B24@0:8@16
// Implementation: 0x108fa21d8

// -[NBPhoneNumberUtil format:numberFormat:error:]
// Type encoding: @40@0:8@16q24^@32
// Implementation: 0x108fa2214

// -[NBPhoneNumberUtil format:numberFormat:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x108fa2358

// -[NBPhoneNumberUtil formatByPattern:numberFormat:userDefinedFormats:error:]
// Type encoding: @48@0:8@16q24@32^@40
// Implementation: 0x108fa25b0

// -[NBPhoneNumberUtil formatByPattern:numberFormat:userDefinedFormats:]
// Type encoding: @40@0:8@16q24@32
// Implementation: 0x108fa2714

// -[NBPhoneNumberUtil formatNationalNumberWithCarrierCode:carrierCode:error:]
// Type encoding: @40@0:8@16@24^@32
// Implementation: 0x108fa2a08

// -[NBPhoneNumberUtil formatNationalNumberWithCarrierCode:carrierCode:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108fa2b64

// -[NBPhoneNumberUtil getMetadataForRegionOrCallingCode:regionCode:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108fa2ce4

// -[NBPhoneNumberUtil formatNationalNumberWithPreferredCarrierCode:fallbackCarrierCode:error:]
// Type encoding: @40@0:8@16@24^@32
// Implementation: 0x108fa2d98

// -[NBPhoneNumberUtil formatNationalNumberWithPreferredCarrierCode:fallbackCarrierCode:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108fa2ef4

// -[NBPhoneNumberUtil formatNumberForMobileDialing:regionCallingFrom:withFormatting:error:]
// Type encoding: @44@0:8@16@24B32^@36
// Implementation: 0x108fa2fb4

// -[NBPhoneNumberUtil formatNumberForMobileDialing:regionCallingFrom:withFormatting:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x108fa3118

// -[NBPhoneNumberUtil formatOutOfCountryCallingNumber:regionCallingFrom:error:]
// Type encoding: @40@0:8@16@24^@32
// Implementation: 0x108fa342c

// -[NBPhoneNumberUtil formatOutOfCountryCallingNumber:regionCallingFrom:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108fa3588

// -[NBPhoneNumberUtil prefixNumberWithCountryCallingCode:phoneNumberFormat:formattedNationalNumber:formattedExtension:]
// Type encoding: @48@0:8@16q24@32@40
// Implementation: 0x108fa3948

// -[NBPhoneNumberUtil formatInOriginalFormat:regionCallingFrom:error:]
// Type encoding: @40@0:8@16@24^@32
// Implementation: 0x108fa3a30

// -[NBPhoneNumberUtil formatInOriginalFormat:regionCallingFrom:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108fa3b8c

// -[NBPhoneNumberUtil rawInputContainsNationalPrefix:nationalPrefix:regionCode:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x108fa40a8

// -[NBPhoneNumberUtil hasUnexpectedItalianLeadingZero:]
// Type encoding: B24@0:8@16
// Implementation: 0x108fa41c4

// -[NBPhoneNumberUtil hasFormattingPatternForNumber:]
// Type encoding: B24@0:8@16
// Implementation: 0x108fa4240

// -[NBPhoneNumberUtil formatOutOfCountryKeepingAlphaChars:regionCallingFrom:error:]
// Type encoding: @40@0:8@16@24^@32
// Implementation: 0x108fa4360

// -[NBPhoneNumberUtil formatOutOfCountryKeepingAlphaChars:regionCallingFrom:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108fa44bc

// -[NBPhoneNumberUtil formatNsn:metadata:phoneNumberFormat:carrierCode:]
// Type encoding: @48@0:8@16@24q32@40
// Implementation: 0x108fa491c

// -[NBPhoneNumberUtil chooseFormattingPatternForNumber:nationalNumber:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108fa4a48

// -[NBPhoneNumberUtil formatNsnUsingPattern:formattingPattern:numberFormat:carrierCode:]
// Type encoding: @48@0:8@16@24q32@40
// Implementation: 0x108fa4c28

// -[NBPhoneNumberUtil getExampleNumber:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x108fa4f24

// -[NBPhoneNumberUtil getExampleNumberForType:type:error:]
// Type encoding: @40@0:8@16q24^@32
// Implementation: 0x108fa4f30

// -[NBPhoneNumberUtil getExampleNumberForNonGeoEntity:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x108fa506c

// -[NBPhoneNumberUtil maybeGetFormattedExtension:metadata:numberFormat:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x108fa5424

// -[NBPhoneNumberUtil getNumberDescByType:type:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x108fa55cc

// -[NBPhoneNumberUtil getNumberType:]
// Type encoding: q24@0:8@16
// Implementation: 0x108fa5734

// -[NBPhoneNumberUtil getNumberTypeHelper:metadata:]
// Type encoding: q32@0:8@16@24
// Implementation: 0x108fa5818

// -[NBPhoneNumberUtil isNumberMatchingDesc:numberDesc:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x108fa5b50

// -[NBPhoneNumberUtil isValidNumber:]
// Type encoding: B24@0:8@16
// Implementation: 0x108fa5c78

// -[NBPhoneNumberUtil isValidNumberForRegion:regionCode:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x108fa5ce8

// -[NBPhoneNumberUtil getRegionCodeForNumber:]
// Type encoding: @24@0:8@16
// Implementation: 0x108fa5ea0

// -[NBPhoneNumberUtil getRegionCodeForNumberFromRegionList:regionCodes:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108fa5f88

// -[NBPhoneNumberUtil getRegionCodeForCountryCode:]
// Type encoding: @24@0:8@16
// Implementation: 0x108fa6120

// -[NBPhoneNumberUtil getRegionCodesForCountryCode:]
// Type encoding: @24@0:8@16
// Implementation: 0x108fa6190

// -[NBPhoneNumberUtil getCountryCodeForRegion:]
// Type encoding: @24@0:8@16
// Implementation: 0x108fa619c

// -[NBPhoneNumberUtil getCountryCodeForValidRegion:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x108fa6244

// -[NBPhoneNumberUtil getNddPrefixForRegion:stripNonDigits:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x108fa6380

// -[NBPhoneNumberUtil isNANPACountry:]
// Type encoding: B24@0:8@16
// Implementation: 0x108fa6470

// -[NBPhoneNumberUtil isLeadingZeroPossible:]
// Type encoding: B24@0:8@16
// Implementation: 0x108fa6610

// -[NBPhoneNumberUtil isAlphaNumber:]
// Type encoding: B24@0:8@16
// Implementation: 0x108fa66a8

// -[NBPhoneNumberUtil isPossibleNumber:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x108fa6790

// -[NBPhoneNumberUtil isPossibleNumber:]
// Type encoding: B24@0:8@16
// Implementation: 0x108fa68c4

// -[NBPhoneNumberUtil validateNumberLength:metadata:]
// Type encoding: q32@0:8@16@24
// Implementation: 0x108fa68e0

// -[NBPhoneNumberUtil validateNumberLength:metadata:type:]
// Type encoding: q40@0:8@16@24q32
// Implementation: 0x108fa68e8

// -[NBPhoneNumberUtil testNumberLength:desc:]
// Type encoding: q32@0:8@16@24
// Implementation: 0x108fa6d10

// -[NBPhoneNumberUtil isPossibleNumberWithReason:error:]
// Type encoding: q32@0:8@16^@24
// Implementation: 0x108fa6ed0

// -[NBPhoneNumberUtil isPossibleNumberWithReason:]
// Type encoding: q24@0:8@16
// Implementation: 0x108fa7004

// -[NBPhoneNumberUtil isPossibleNumberString:regionDialingFrom:error:]
// Type encoding: B40@0:8@16@24^@32
// Implementation: 0x108fa710c

// -[NBPhoneNumberUtil truncateTooLongNumber:]
// Type encoding: B24@0:8@16
// Implementation: 0x108fa71c4

// -[NBPhoneNumberUtil extractCountryCode:nationalNumber:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x108fa7314

// -[NBPhoneNumberUtil getSupportedRegions]
// Type encoding: @16@0:8
// Implementation: 0x108fa752c

// -[NBPhoneNumberUtil maybeExtractCountryCode:metadata:nationalNumber:keepRawInput:phoneNumber:error:]
// Type encoding: @60@0:8@16@24^@32B40^@44^@52
// Implementation: 0x108fa75d0

// -[NBPhoneNumberUtil descHasPossibleNumberData:]
// Type encoding: B24@0:8@16
// Implementation: 0x108fa7abc

// -[NBPhoneNumberUtil parsePrefixAsIdd:sourceString:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x108fa7b70

// -[NBPhoneNumberUtil maybeStripInternationalPrefixAndNormalize:possibleIddPrefix:]
// Type encoding: q32@0:8^@16@24
// Implementation: 0x108fa7d9c

// -[NBPhoneNumberUtil maybeStripNationalPrefixAndCarrierCode:metadata:carrierCode:]
// Type encoding: B40@0:8^@16@24^@32
// Implementation: 0x108fa7e9c

// -[NBPhoneNumberUtil maybeStripExtension:]
// Type encoding: @24@0:8^@16
// Implementation: 0x108fa8288

// -[NBPhoneNumberUtil checkRegionForParsing:defaultRegion:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x108fa8440

// -[NBPhoneNumberUtil parse:defaultRegion:error:]
// Type encoding: @40@0:8@16@24^@32
// Implementation: 0x108fa84c8

// -[NBPhoneNumberUtil parseAndKeepRawInput:defaultRegion:error:]
// Type encoding: @40@0:8@16@24^@32
// Implementation: 0x108fa8598

// -[NBPhoneNumberUtil setItalianLeadingZerosForPhoneNumber:phoneNumber:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108fa86e4

// -[NBPhoneNumberUtil parseHelper:defaultRegion:keepRawInput:checkRegion:error:]
// Type encoding: @48@0:8@16@24B32B36^@40
// Implementation: 0x108fa8808

// -[NBPhoneNumberUtil buildNationalNumberForParsing:nationalNumber:]
// Type encoding: v32@0:8@16^@24
// Implementation: 0x108fa91b0

// -[NBPhoneNumberUtil isNumberMatch:second:error:]
// Type encoding: q40@0:8@16@24^@32
// Implementation: 0x108fa93d0

// -[NBPhoneNumberUtil isNumberMatch:second:]
// Type encoding: q32@0:8@16@24
// Implementation: 0x108fa9524

// -[NBPhoneNumberUtil isNationalNumberSuffixOfTheOther:second:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x108fa9adc

// -[NBPhoneNumberUtil canBeInternationallyDialled:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x108fa9be4

// -[NBPhoneNumberUtil canBeInternationallyDialled:]
// Type encoding: B24@0:8@16
// Implementation: 0x108fa9d18

// -[NBPhoneNumberUtil matchesEntirely:string:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x108fa9e14

// -[NBPhoneNumberUtil entireStringCacheLock]
// Type encoding: @16@0:8
// Implementation: 0x108fa9f18

// -[NBPhoneNumberUtil setEntireStringCacheLock:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fa9f20

// -[NBPhoneNumberUtil entireStringRegexCache]
// Type encoding: @16@0:8
// Implementation: 0x108fa9f50

// -[NBPhoneNumberUtil setEntireStringRegexCache:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fa9f58

// -[NBPhoneNumberUtil lockPatternCache]
// Type encoding: @16@0:8
// Implementation: 0x108fa9f88

// -[NBPhoneNumberUtil setLockPatternCache:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fa9f90

// -[NBPhoneNumberUtil regexPatternCache]
// Type encoding: @16@0:8
// Implementation: 0x108fa9fc0

// -[NBPhoneNumberUtil setRegexPatternCache:]
// Type encoding: v24@0:8@16
// Implementation: 0x108fa9fc8

// -[NBPhoneNumberUtil CAPTURING_DIGIT_PATTERN]
// Type encoding: @16@0:8
// Implementation: 0x108fa9ff8

// -[NBPhoneNumberUtil setCAPTURING_DIGIT_PATTERN:]
// Type encoding: v24@0:8@16
// Implementation: 0x108faa000

// -[NBPhoneNumberUtil VALID_ALPHA_PHONE_PATTERN]
// Type encoding: @16@0:8
// Implementation: 0x108faa030

// -[NBPhoneNumberUtil setVALID_ALPHA_PHONE_PATTERN:]
// Type encoding: v24@0:8@16
// Implementation: 0x108faa038

// -[NBPhoneNumberUtil helper]
// Type encoding: @16@0:8
// Implementation: 0x108faa068

// -[NBPhoneNumberUtil setHelper:]
// Type encoding: v24@0:8@16
// Implementation: 0x108faa070

// -[NBPhoneNumberUtil .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108faa0a0

// +[NBPhoneNumberUtil sharedInstance]
// Type encoding: @16@0:8
// Implementation: 0x108f9f270

// +[NBPhoneNumberUtil initialize]
// Type encoding: v16@0:8
// Implementation: 0x108fa0204

@end
