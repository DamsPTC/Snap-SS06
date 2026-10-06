// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCScanSessionCompoundLogger
// Superclass: NSObject
// Address: 0x112ab9388

@interface SCScanSessionCompoundLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCScanSessionCompoundLogger initWithLoggers:]
// Type encoding: @24@0:8@16
// Implementation: 0x105ffebf8

// -[SCScanSessionCompoundLogger scanDidBeginWithSessionId:source:sourceId:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x105ffec70

// -[SCScanSessionCompoundLogger scanDidEnd]
// Type encoding: v16@0:8
// Implementation: 0x105ffee0c

// -[SCScanSessionCompoundLogger scanAnalysisDidBeginWithQuery:categoryMetadata:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105ffef60

// -[SCScanSessionCompoundLogger scanPFEAnalysisDidBegin]
// Type encoding: v16@0:8
// Implementation: 0x105fff0e8

// -[SCScanSessionCompoundLogger scanSnapcodeAnalysisDidBegin]
// Type encoding: v16@0:8
// Implementation: 0x105fff23c

// -[SCScanSessionCompoundLogger scanShazamAnalysisDidBegin]
// Type encoding: v16@0:8
// Implementation: 0x105fff390

// -[SCScanSessionCompoundLogger scanQRCodeAnalysisDidBegin]
// Type encoding: v16@0:8
// Implementation: 0x105fff4e4

// -[SCScanSessionCompoundLogger scanPFEAnalysisDidEmitResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fff638

// -[SCScanSessionCompoundLogger scanSnapcodeAnalysisDidEmitResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fff7a4

// -[SCScanSessionCompoundLogger scanShazamAnalysisDidEmitResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fff910

// -[SCScanSessionCompoundLogger scanQRCodeAnalysisDidEmitResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fffa7c

// -[SCScanSessionCompoundLogger scanAnalysisDidEmitResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fffbe8

// -[SCScanSessionCompoundLogger scanAnalysisDidEnd]
// Type encoding: v16@0:8
// Implementation: 0x105fffd54

// -[SCScanSessionCompoundLogger scanAnalysisDidTimeout]
// Type encoding: v16@0:8
// Implementation: 0x105fffea8

// -[SCScanSessionCompoundLogger scanPFEAnalysisDidFail:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fffffc

// -[SCScanSessionCompoundLogger scanSnapcodeAnalysisDidFail:]
// Type encoding: v24@0:8@16
// Implementation: 0x106000168

// -[SCScanSessionCompoundLogger scanShazamAnalysisDidFail:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060002d4

// -[SCScanSessionCompoundLogger scanQRCodeAnalysisDidFail:]
// Type encoding: v24@0:8@16
// Implementation: 0x106000440

// -[SCScanSessionCompoundLogger scanCardDidDisplayWithViewModel:hasShareCTA:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1060005ac

// -[SCScanSessionCompoundLogger visibleScanCardsDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x106000724

// -[SCScanSessionCompoundLogger scanCardWithId:resultType:receivedAction:selectedIndex:selectedPillId:]
// Type encoding: v56@0:8@16q24@32Q40@48
// Implementation: 0x106000894

// -[SCScanSessionCompoundLogger scanCardsPositionBeforeDismissal:]
// Type encoding: v24@0:8@16
// Implementation: 0x106000a68

// -[SCScanSessionCompoundLogger scanDidAutoOpenViewModeForResultType:]
// Type encoding: v24@0:8q16
// Implementation: 0x106000bd8

// -[SCScanSessionCompoundLogger lensesCardDidDisplayWithId:lensIds:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106000d34

// -[SCScanSessionCompoundLogger scanResultsDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x106000ec0

// -[SCScanSessionCompoundLogger scanDidBeginSnapcodeDetectionForFrameNumber:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106001014

// -[SCScanSessionCompoundLogger scanDidFinishSnapcodeDetectionForFrameNumber:identifier:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x106001170

// -[SCScanSessionCompoundLogger scanDidBeginSnapcodeMetadataFetchForIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060012e4

// -[SCScanSessionCompoundLogger scanDidFinishSnapcodeMetadataFetchForIdentifier:metadata:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106001450

// -[SCScanSessionCompoundLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1060015d4

@end
