// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: CTPSearchLoggerDefault
// Superclass: NSObject
// Address: 0x112a6e158

@interface CTPSearchLoggerDefault

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[CTPSearchLoggerDefault initWithSession:logger:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105805e74

// -[CTPSearchLoggerDefault logSearchRankingQueryFromCache:queryEntityId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105805f18

// -[CTPSearchLoggerDefault logSearchRankingQuery:]
// Type encoding: v24@0:8@16
// Implementation: 0x105806018

// -[CTPSearchLoggerDefault logSearchRankingQuery:queryEntityId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105806020

// -[CTPSearchLoggerDefault logSearchRankingResultsFromCache:query:endTime:queryEntityId:]
// Type encoding: v44@0:8B16@20@28@36
// Implementation: 0x10580623c

// -[CTPSearchLoggerDefault logSearchRankingActionAtScreenLocation:section:sectionIndex:resultId:itemIndex:]
// Type encoding: v64@0:8{CGPoint=dd}16Q32Q40@48Q56
// Implementation: 0x105806404

// -[CTPSearchLoggerDefault logSearchRankingResultOnScreenForSection:resultId:itemIndex:initialLoad:]
// Type encoding: v44@0:8Q16@24Q32B40
// Implementation: 0x10580665c

// -[CTPSearchLoggerDefault _isValidSearchQuery:]
// Type encoding: B24@0:8@16
// Implementation: 0x1058067f8

// -[CTPSearchLoggerDefault _sanitizeSearchTerm:]
// Type encoding: @24@0:8@16
// Implementation: 0x105806818

// -[CTPSearchLoggerDefault _s2CellId]
// Type encoding: @16@0:8
// Implementation: 0x10580689c

// -[CTPSearchLoggerDefault _userLanguagePrefencesString]
// Type encoding: @16@0:8
// Implementation: 0x105806960

// -[CTPSearchLoggerDefault _resultSectionFromSection:]
// Type encoding: q24@0:8Q16
// Implementation: 0x1058069d0

// -[CTPSearchLoggerDefault _sourceTypeFromOrigin:]
// Type encoding: q24@0:8Q16
// Implementation: 0x1058069f4

// -[CTPSearchLoggerDefault .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105806a04

@end
