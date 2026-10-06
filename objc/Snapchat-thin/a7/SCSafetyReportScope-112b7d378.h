// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSafetyReportScope
// Superclass: NSObject
// Address: 0x112b7d378

@interface SCSafetyReportScope

// Property: uiContainer; attributes: T@"<SCUIContainer>",R,N,V_uiContainer
// Property: reportParams; attributes: T@"SCSafetyReportParams",R,N,V_reportParams
// Property: delegate; attributes: T@"<SCSafetyReportDelegate>",R,W,N,V_delegate
// Property: feature; attributes: T@"NSString",R,N,V_feature
// Property: subfeature; attributes: T@"NSString",R,N,V_subfeature
// Property: viewLocation; attributes: Tq,R,N,V_viewLocation
// Property: sourcePage; attributes: Tq,R,N,V_sourcePage

// -[SCSafetyReportScope initWithUiContainer:reportParams:delegate:feature:subfeature:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x107d50550

// -[SCSafetyReportScope initWithUiContainer:reportParams:delegate:feature:sourcePage:]
// Type encoding: @56@0:8@16@24@32@40q48
// Implementation: 0x107d50574

// -[SCSafetyReportScope initWithUiContainer:reportParams:delegate:viewLocation:subfeature:]
// Type encoding: @56@0:8@16@24@32q40@48
// Implementation: 0x107d505a8

// -[SCSafetyReportScope initWithUiContainer:reportParams:delegate:feature:subfeatureString:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x107d505d0

// -[SCSafetyReportScope initWithUiContainer:reportParams:delegate:feature:subfeature:viewLocation:sourcePage:]
// Type encoding: @72@0:8@16@24@32@40@48q56q64
// Implementation: 0x107d505f4

// -[SCSafetyReportScope uiContainer]
// Type encoding: @16@0:8
// Implementation: 0x107d50728

// -[SCSafetyReportScope reportParams]
// Type encoding: @16@0:8
// Implementation: 0x107d50730

// -[SCSafetyReportScope delegate]
// Type encoding: @16@0:8
// Implementation: 0x107d50738

// -[SCSafetyReportScope feature]
// Type encoding: @16@0:8
// Implementation: 0x107d50750

// -[SCSafetyReportScope subfeature]
// Type encoding: @16@0:8
// Implementation: 0x107d50758

// -[SCSafetyReportScope viewLocation]
// Type encoding: q16@0:8
// Implementation: 0x107d50760

// -[SCSafetyReportScope sourcePage]
// Type encoding: q16@0:8
// Implementation: 0x107d50768

// -[SCSafetyReportScope .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107d50770

@end
