// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCScanResultsSnapcodeAnalyzer
// Superclass: NSObject
// Address: 0x112a0dd58

@interface SCScanResultsSnapcodeAnalyzer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCScanResultsSnapcodeAnalyzer initWithIdentifierProvider:modelProvider:deepScanConfiguration:metadataProvider:snapcodeDecoder:sessionLogger:performer:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x104fabe38

// -[SCScanResultsSnapcodeAnalyzer supportsRequestedAnalyzerServiceIds:source:]
// Type encoding: B32@0:8@16q24
// Implementation: 0x104fabfb4

// -[SCScanResultsSnapcodeAnalyzer beginWithContext:]
// Type encoding: @24@0:8@16
// Implementation: 0x104fabfc8

// -[SCScanResultsSnapcodeAnalyzer end]
// Type encoding: v16@0:8
// Implementation: 0x104fac0b8

// -[SCScanResultsSnapcodeAnalyzer _beginWithContext:resultsSubject:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104fac118

// -[SCScanResultsSnapcodeAnalyzer _end]
// Type encoding: v16@0:8
// Implementation: 0x104fac2c4

// -[SCScanResultsSnapcodeAnalyzer _analyzeWithContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x104fac334

// -[SCScanResultsSnapcodeAnalyzer _didReceiveScannableDataUpdate:withContext:frameNumber:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x104fac55c

// -[SCScanResultsSnapcodeAnalyzer _snapcodeIdentifiersObservableForImage:frameNumber:isPostCapture:]
// Type encoding: @36@0:8@16Q24B32
// Implementation: 0x104fac9c4

// -[SCScanResultsSnapcodeAnalyzer _didReceiveIdentifier:inQuery:onFrame:error:]
// Type encoding: v48@0:8@16@24Q32@40
// Implementation: 0x104fad0dc

// -[SCScanResultsSnapcodeAnalyzer _didReceiveMetadata:forIdentifier:inQuery:error:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x104fad518

// -[SCScanResultsSnapcodeAnalyzer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104fad71c

@end
