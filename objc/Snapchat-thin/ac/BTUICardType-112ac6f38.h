// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: BTUICardType
// Superclass: NSObject
// Address: 0x112ac6f38

@interface BTUICardType

// Property: brand; attributes: T@"NSString",R,C,N,V_brand
// Property: validNumberPrefixes; attributes: T@"NSArray",R,N,V_validNumberPrefixes
// Property: validNumberLengths; attributes: T@"NSIndexSet",R,N,V_validNumberLengths
// Property: validCvvLength; attributes: TQ,R,N,V_validCvvLength
// Property: formatSpaces; attributes: T@"NSArray",R,N,V_formatSpaces
// Property: maxNumberLength; attributes: TQ,R,N,V_maxNumberLength

// -[BTUICardType initWithBrand:prefixes:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1060f6094

// -[BTUICardType initWithBrand:prefixes:validNumberLengths:validCvvLength:formatSpaces:]
// Type encoding: @56@0:8@16@24@32Q40@48
// Implementation: 0x1060f6130

// -[BTUICardType validCvv:]
// Type encoding: B24@0:8@16
// Implementation: 0x1060f6868

// -[BTUICardType description]
// Type encoding: @16@0:8
// Implementation: 0x1060f6920

// -[BTUICardType formatNumber:kerning:]
// Type encoding: @32@0:8@16d24
// Implementation: 0x1060f70f8

// -[BTUICardType formatNumber:]
// Type encoding: @24@0:8@16
// Implementation: 0x1060f72f8

// -[BTUICardType validAndNecessarilyCompleteNumber:]
// Type encoding: B24@0:8@16
// Implementation: 0x1060f7300

// -[BTUICardType validNumber:]
// Type encoding: B24@0:8@16
// Implementation: 0x1060f738c

// -[BTUICardType completeNumber:]
// Type encoding: B24@0:8@16
// Implementation: 0x1060f73ec

// -[BTUICardType brand]
// Type encoding: @16@0:8
// Implementation: 0x1060f7460

// -[BTUICardType validNumberPrefixes]
// Type encoding: @16@0:8
// Implementation: 0x1060f7468

// -[BTUICardType validNumberLengths]
// Type encoding: @16@0:8
// Implementation: 0x1060f7470

// -[BTUICardType validCvvLength]
// Type encoding: Q16@0:8
// Implementation: 0x1060f7478

// -[BTUICardType formatSpaces]
// Type encoding: @16@0:8
// Implementation: 0x1060f7480

// -[BTUICardType maxNumberLength]
// Type encoding: Q16@0:8
// Implementation: 0x1060f7488

// -[BTUICardType .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1060f7490

// +[BTUICardType cardTypeForBrand:]
// Type encoding: @24@0:8@16
// Implementation: 0x1060f62fc

// +[BTUICardType cardTypeForNumber:]
// Type encoding: @24@0:8@16
// Implementation: 0x1060f636c

// +[BTUICardType possibleCardTypesForNumber:]
// Type encoding: @24@0:8@16
// Implementation: 0x1060f65bc

// +[BTUICardType maxNumberLength]
// Type encoding: Q16@0:8
// Implementation: 0x1060f6984

// +[BTUICardType allCards]
// Type encoding: @16@0:8
// Implementation: 0x1060f6b08

// +[BTUICardType cardsByBrand]
// Type encoding: @16@0:8
// Implementation: 0x1060f6f20

@end
