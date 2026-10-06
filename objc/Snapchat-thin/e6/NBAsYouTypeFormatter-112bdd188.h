// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: NBAsYouTypeFormatter
// Superclass: NSObject
// Address: 0x112bdd188

@interface NBAsYouTypeFormatter

// Property: currentOutput_; attributes: T@"NSString",&,N,V_currentOutput_
// Property: currentFormattingPattern_; attributes: T@"NSString",&,N,V_currentFormattingPattern_
// Property: defaultCountry_; attributes: T@"NSString",&,N,V_defaultCountry_
// Property: nationalPrefixExtracted_; attributes: T@"NSString",&,N,V_nationalPrefixExtracted_
// Property: formattingTemplate_; attributes: T@"NSMutableString",&,N,V_formattingTemplate_
// Property: accruedInput_; attributes: T@"NSMutableString",&,N,V_accruedInput_
// Property: prefixBeforeNationalNumber_; attributes: T@"NSMutableString",&,N,V_prefixBeforeNationalNumber_
// Property: accruedInputWithoutFormatting_; attributes: T@"NSMutableString",&,N,V_accruedInputWithoutFormatting_
// Property: nationalNumber_; attributes: T@"NSMutableString",&,N,V_nationalNumber_
// Property: DIGIT_PATTERN_; attributes: T@"NSRegularExpression",&,N,V_DIGIT_PATTERN_
// Property: NATIONAL_PREFIX_SEPARATORS_PATTERN_; attributes: T@"NSRegularExpression",&,N,V_NATIONAL_PREFIX_SEPARATORS_PATTERN_
// Property: CHARACTER_CLASS_PATTERN_; attributes: T@"NSRegularExpression",&,N,V_CHARACTER_CLASS_PATTERN_
// Property: STANDALONE_DIGIT_PATTERN_; attributes: T@"NSRegularExpression",&,N,V_STANDALONE_DIGIT_PATTERN_
// Property: ELIGIBLE_FORMAT_PATTERN_; attributes: T@"NSRegularExpression",&,N,V_ELIGIBLE_FORMAT_PATTERN_
// Property: ableToFormat_; attributes: TB,N,V_ableToFormat_
// Property: inputHasFormatting_; attributes: TB,N,V_inputHasFormatting_
// Property: isCompleteNumber_; attributes: TB,N,V_isCompleteNumber_
// Property: isExpectingCountryCallingCode_; attributes: TB,N,V_isExpectingCountryCallingCode_
// Property: shouldAddSpaceAfterNationalPrefix_; attributes: TB,N,V_shouldAddSpaceAfterNationalPrefix_
// Property: phoneUtil_; attributes: T@"NBPhoneNumberUtil",&,N,V_phoneUtil_
// Property: lastMatchPosition_; attributes: TQ,N,V_lastMatchPosition_
// Property: originalPosition_; attributes: TQ,N,V_originalPosition_
// Property: positionToRemember_; attributes: TQ,N,V_positionToRemember_
// Property: possibleFormats_; attributes: T@"NSMutableArray",&,N,V_possibleFormats_
// Property: currentMetaData_; attributes: T@"NBPhoneMetaData",&,N,V_currentMetaData_
// Property: defaultMetaData_; attributes: T@"NBPhoneMetaData",&,N,V_defaultMetaData_
// Property: isSuccessfulFormatting; attributes: TB,R,N,V_isSuccessfulFormatting

// -[NBAsYouTypeFormatter init]
// Type encoding: @16@0:8
// Implementation: 0x108f985fc

// -[NBAsYouTypeFormatter initWithRegionCode:]
// Type encoding: @24@0:8@16
// Implementation: 0x108f98948

// -[NBAsYouTypeFormatter initWithRegionCode:bundle:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108f989bc

// -[NBAsYouTypeFormatter getMetadataForRegion_:]
// Type encoding: @24@0:8@16
// Implementation: 0x108f98ab0

// -[NBAsYouTypeFormatter maybeCreateNewTemplate_]
// Type encoding: B16@0:8
// Implementation: 0x108f98bc4

// -[NBAsYouTypeFormatter getAvailableFormats_:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f98dcc

// -[NBAsYouTypeFormatter isFormatEligible_:]
// Type encoding: B24@0:8@16
// Implementation: 0x108f99060

// -[NBAsYouTypeFormatter narrowDownPossibleFormats_:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f99108

// -[NBAsYouTypeFormatter createFormattingTemplate_:]
// Type encoding: B24@0:8@16
// Implementation: 0x108f992e4

// -[NBAsYouTypeFormatter getFormattingTemplate_:numberFormat:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108f994b4

// -[NBAsYouTypeFormatter clear]
// Type encoding: v16@0:8
// Implementation: 0x108f99634

// -[NBAsYouTypeFormatter removeLastDigitAndRememberPosition]
// Type encoding: @16@0:8
// Implementation: 0x108f99844

// -[NBAsYouTypeFormatter removeLastDigit]
// Type encoding: @16@0:8
// Implementation: 0x108f99948

// -[NBAsYouTypeFormatter inputStringAndRememberPosition:]
// Type encoding: @24@0:8@16
// Implementation: 0x108f99a4c

// -[NBAsYouTypeFormatter inputString:]
// Type encoding: @24@0:8@16
// Implementation: 0x108f99b1c

// -[NBAsYouTypeFormatter inputDigit:]
// Type encoding: @24@0:8@16
// Implementation: 0x108f99bec

// -[NBAsYouTypeFormatter inputDigitAndRememberPosition:]
// Type encoding: @24@0:8@16
// Implementation: 0x108f99c7c

// -[NBAsYouTypeFormatter inputDigitWithOptionToRememberPosition_:rememberPosition:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x108f99d0c

// -[NBAsYouTypeFormatter attemptToChoosePatternWithPrefixExtracted_]
// Type encoding: @16@0:8
// Implementation: 0x108f9a150

// -[NBAsYouTypeFormatter ableToExtractLongerNdd_]
// Type encoding: B16@0:8
// Implementation: 0x108f9a1a4

// -[NBAsYouTypeFormatter isDigitOrLeadingPlusSign_:]
// Type encoding: B24@0:8@16
// Implementation: 0x108f9a36c

// -[NBAsYouTypeFormatter attemptToFormatAccruedDigits_]
// Type encoding: @16@0:8
// Implementation: 0x108f9a4f4

// -[NBAsYouTypeFormatter appendNationalNumber_:]
// Type encoding: @24@0:8@16
// Implementation: 0x108f9a7ec

// -[NBAsYouTypeFormatter getRememberedPosition]
// Type encoding: q16@0:8
// Implementation: 0x108f9a92c

// -[NBAsYouTypeFormatter attemptToChooseFormattingPattern_]
// Type encoding: @16@0:8
// Implementation: 0x108f9aa18

// -[NBAsYouTypeFormatter inputAccruedNationalNumber_]
// Type encoding: @16@0:8
// Implementation: 0x108f9ab08

// -[NBAsYouTypeFormatter isNanpaNumberWithNationalPrefix_]
// Type encoding: B16@0:8
// Implementation: 0x108f9ac5c

// -[NBAsYouTypeFormatter removeNationalPrefixFromNationalNumber_]
// Type encoding: @16@0:8
// Implementation: 0x108f9ad40

// -[NBAsYouTypeFormatter attemptToExtractIdd_]
// Type encoding: B16@0:8
// Implementation: 0x108f9b018

// -[NBAsYouTypeFormatter attemptToExtractCountryCallingCode_]
// Type encoding: B16@0:8
// Implementation: 0x108f9b23c

// -[NBAsYouTypeFormatter normalizeAndAccrueDigitsAndPlusSign_:rememberPosition:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x108f9b46c

// -[NBAsYouTypeFormatter inputDigitHelper_:]
// Type encoding: @24@0:8@16
// Implementation: 0x108f9b5c4

// -[NBAsYouTypeFormatter description]
// Type encoding: @16@0:8
// Implementation: 0x108f9b7d8

// -[NBAsYouTypeFormatter isSuccessfulFormatting]
// Type encoding: B16@0:8
// Implementation: 0x108f9b7dc

// -[NBAsYouTypeFormatter currentOutput_]
// Type encoding: @16@0:8
// Implementation: 0x108f9b7e4

// -[NBAsYouTypeFormatter setCurrentOutput_:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f9b7ec

// -[NBAsYouTypeFormatter currentFormattingPattern_]
// Type encoding: @16@0:8
// Implementation: 0x108f9b81c

// -[NBAsYouTypeFormatter setCurrentFormattingPattern_:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f9b824

// -[NBAsYouTypeFormatter defaultCountry_]
// Type encoding: @16@0:8
// Implementation: 0x108f9b854

// -[NBAsYouTypeFormatter setDefaultCountry_:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f9b85c

// -[NBAsYouTypeFormatter nationalPrefixExtracted_]
// Type encoding: @16@0:8
// Implementation: 0x108f9b88c

// -[NBAsYouTypeFormatter setNationalPrefixExtracted_:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f9b894

// -[NBAsYouTypeFormatter formattingTemplate_]
// Type encoding: @16@0:8
// Implementation: 0x108f9b8c4

// -[NBAsYouTypeFormatter setFormattingTemplate_:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f9b8cc

// -[NBAsYouTypeFormatter accruedInput_]
// Type encoding: @16@0:8
// Implementation: 0x108f9b8fc

// -[NBAsYouTypeFormatter setAccruedInput_:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f9b904

// -[NBAsYouTypeFormatter prefixBeforeNationalNumber_]
// Type encoding: @16@0:8
// Implementation: 0x108f9b934

// -[NBAsYouTypeFormatter setPrefixBeforeNationalNumber_:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f9b93c

// -[NBAsYouTypeFormatter accruedInputWithoutFormatting_]
// Type encoding: @16@0:8
// Implementation: 0x108f9b96c

// -[NBAsYouTypeFormatter setAccruedInputWithoutFormatting_:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f9b974

// -[NBAsYouTypeFormatter nationalNumber_]
// Type encoding: @16@0:8
// Implementation: 0x108f9b9a4

// -[NBAsYouTypeFormatter setNationalNumber_:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f9b9ac

// -[NBAsYouTypeFormatter DIGIT_PATTERN_]
// Type encoding: @16@0:8
// Implementation: 0x108f9b9dc

// -[NBAsYouTypeFormatter setDIGIT_PATTERN_:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f9b9e4

// -[NBAsYouTypeFormatter NATIONAL_PREFIX_SEPARATORS_PATTERN_]
// Type encoding: @16@0:8
// Implementation: 0x108f9ba14

// -[NBAsYouTypeFormatter setNATIONAL_PREFIX_SEPARATORS_PATTERN_:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f9ba1c

// -[NBAsYouTypeFormatter CHARACTER_CLASS_PATTERN_]
// Type encoding: @16@0:8
// Implementation: 0x108f9ba4c

// -[NBAsYouTypeFormatter setCHARACTER_CLASS_PATTERN_:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f9ba54

// -[NBAsYouTypeFormatter STANDALONE_DIGIT_PATTERN_]
// Type encoding: @16@0:8
// Implementation: 0x108f9ba84

// -[NBAsYouTypeFormatter setSTANDALONE_DIGIT_PATTERN_:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f9ba8c

// -[NBAsYouTypeFormatter ELIGIBLE_FORMAT_PATTERN_]
// Type encoding: @16@0:8
// Implementation: 0x108f9babc

// -[NBAsYouTypeFormatter setELIGIBLE_FORMAT_PATTERN_:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f9bac4

// -[NBAsYouTypeFormatter ableToFormat_]
// Type encoding: B16@0:8
// Implementation: 0x108f9baf4

// -[NBAsYouTypeFormatter setAbleToFormat_:]
// Type encoding: v20@0:8B16
// Implementation: 0x108f9bafc

// -[NBAsYouTypeFormatter inputHasFormatting_]
// Type encoding: B16@0:8
// Implementation: 0x108f9bb04

// -[NBAsYouTypeFormatter setInputHasFormatting_:]
// Type encoding: v20@0:8B16
// Implementation: 0x108f9bb0c

// -[NBAsYouTypeFormatter isCompleteNumber_]
// Type encoding: B16@0:8
// Implementation: 0x108f9bb14

// -[NBAsYouTypeFormatter setIsCompleteNumber_:]
// Type encoding: v20@0:8B16
// Implementation: 0x108f9bb1c

// -[NBAsYouTypeFormatter isExpectingCountryCallingCode_]
// Type encoding: B16@0:8
// Implementation: 0x108f9bb24

// -[NBAsYouTypeFormatter setIsExpectingCountryCallingCode_:]
// Type encoding: v20@0:8B16
// Implementation: 0x108f9bb2c

// -[NBAsYouTypeFormatter shouldAddSpaceAfterNationalPrefix_]
// Type encoding: B16@0:8
// Implementation: 0x108f9bb34

// -[NBAsYouTypeFormatter setShouldAddSpaceAfterNationalPrefix_:]
// Type encoding: v20@0:8B16
// Implementation: 0x108f9bb3c

// -[NBAsYouTypeFormatter phoneUtil_]
// Type encoding: @16@0:8
// Implementation: 0x108f9bb44

// -[NBAsYouTypeFormatter setPhoneUtil_:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f9bb4c

// -[NBAsYouTypeFormatter lastMatchPosition_]
// Type encoding: Q16@0:8
// Implementation: 0x108f9bb7c

// -[NBAsYouTypeFormatter setLastMatchPosition_:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108f9bb84

// -[NBAsYouTypeFormatter originalPosition_]
// Type encoding: Q16@0:8
// Implementation: 0x108f9bb8c

// -[NBAsYouTypeFormatter setOriginalPosition_:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108f9bb94

// -[NBAsYouTypeFormatter positionToRemember_]
// Type encoding: Q16@0:8
// Implementation: 0x108f9bb9c

// -[NBAsYouTypeFormatter setPositionToRemember_:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108f9bba4

// -[NBAsYouTypeFormatter possibleFormats_]
// Type encoding: @16@0:8
// Implementation: 0x108f9bbac

// -[NBAsYouTypeFormatter setPossibleFormats_:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f9bbb4

// -[NBAsYouTypeFormatter currentMetaData_]
// Type encoding: @16@0:8
// Implementation: 0x108f9bbe4

// -[NBAsYouTypeFormatter setCurrentMetaData_:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f9bbec

// -[NBAsYouTypeFormatter defaultMetaData_]
// Type encoding: @16@0:8
// Implementation: 0x108f9bc1c

// -[NBAsYouTypeFormatter setDefaultMetaData_:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f9bc24

// -[NBAsYouTypeFormatter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108f9bc54

@end
