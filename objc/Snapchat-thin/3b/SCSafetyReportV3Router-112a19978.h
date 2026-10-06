// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSafetyReportV3Router
// Superclass: NSObject
// Address: 0x112a19978

@interface SCSafetyReportV3Router

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSafetyReportV3Router initWithReportScope:valdiRuntimeProvider:customReportComposerFactory:composerGrpcServiceFactory:reportedChatMessageFetcher:cofStore:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x10511d6ac

// -[SCSafetyReportV3Router begin]
// Type encoding: v16@0:8
// Implementation: 0x10511d800

// -[SCSafetyReportV3Router makeSafetyReportDepsStartedAtMs:]
// Type encoding: @24@0:8q16
// Implementation: 0x10511d980

// -[SCSafetyReportV3Router makeReportPageV2WithCoreDeps:startedAtMs:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10511da48

// -[SCSafetyReportV3Router _getReportAttribution]
// Type encoding: @16@0:8
// Implementation: 0x10511dbb8

// -[SCSafetyReportV3Router reportDidCompleteWithCancelled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10511dc94

// -[SCSafetyReportV3Router reportDidSubmitWithReasonId:comment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10511dd34

// -[SCSafetyReportV3Router pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x10511dddc

// -[SCSafetyReportV3Router .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10511dde8

@end
