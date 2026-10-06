// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCScanGrapheneLogger
// Superclass: NSObject
// Address: 0x112ab9158

@interface SCScanGrapheneLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCScanGrapheneLogger initWithScanRegisteredGrapheneMetric:timeProvider:performer:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105ffbe58

// -[SCScanGrapheneLogger scanDidBeginWithSessionId:source:sourceId:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x105ffbf24

// -[SCScanGrapheneLogger scanDidEnd]
// Type encoding: v16@0:8
// Implementation: 0x105ffc000

// -[SCScanGrapheneLogger scanAnalysisDidBeginWithQuery:categoryMetadata:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105ffc0c8

// -[SCScanGrapheneLogger scanPFEAnalysisDidBegin]
// Type encoding: v16@0:8
// Implementation: 0x105ffc144

// -[SCScanGrapheneLogger scanSnapcodeAnalysisDidBegin]
// Type encoding: v16@0:8
// Implementation: 0x105ffc150

// -[SCScanGrapheneLogger scanShazamAnalysisDidBegin]
// Type encoding: v16@0:8
// Implementation: 0x105ffc15c

// -[SCScanGrapheneLogger scanQRCodeAnalysisDidBegin]
// Type encoding: v16@0:8
// Implementation: 0x105ffc168

// -[SCScanGrapheneLogger scanPFEAnalysisDidEmitResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ffc174

// -[SCScanGrapheneLogger scanSnapcodeAnalysisDidEmitResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ffc228

// -[SCScanGrapheneLogger scanQRCodeAnalysisDidEmitResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ffc2dc

// -[SCScanGrapheneLogger scanAnalysisDidEmitResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ffc390

// -[SCScanGrapheneLogger scanAnalysisDidEnd]
// Type encoding: v16@0:8
// Implementation: 0x105ffc450

// -[SCScanGrapheneLogger scanAnalysisDidTimeout]
// Type encoding: v16@0:8
// Implementation: 0x105ffca4c

// -[SCScanGrapheneLogger scanPFEAnalysisDidFail:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ffca58

// -[SCScanGrapheneLogger scanSnapcodeAnalysisDidFail:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ffca64

// -[SCScanGrapheneLogger scanShazamAnalysisDidFail:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ffca70

// -[SCScanGrapheneLogger scanQRCodeAnalysisDidFail:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ffca7c

// -[SCScanGrapheneLogger scanCardDidDisplayWithViewModel:hasShareCTA:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105ffca88

// -[SCScanGrapheneLogger scanCardWithId:resultType:receivedAction:selectedIndex:selectedPillId:]
// Type encoding: v56@0:8@16q24@32Q40@48
// Implementation: 0x105ffcc34

// -[SCScanGrapheneLogger lensesCardDidDisplayWithId:lensIds:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105ffccb4

// -[SCScanGrapheneLogger scanResultsDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x105ffcd64

// -[SCScanGrapheneLogger _scanShazamAnalysisDidEmitSongDataModel]
// Type encoding: v16@0:8
// Implementation: 0x105ffcd70

// -[SCScanGrapheneLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105ffce24

@end
