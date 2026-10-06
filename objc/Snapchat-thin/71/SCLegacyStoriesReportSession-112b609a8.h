// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLegacyStoriesReportSession
// Superclass: NSObject
// Address: 0x112b609a8

@interface SCLegacyStoriesReportSession

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLegacyStoriesReportSession initWithOperaControlling:operaPageProvider:userSession:viewLocation:safetyReportScopeExposer:]
// Type encoding: @56@0:8@16@24@32q40@48
// Implementation: 0x107209ab0

// -[SCLegacyStoriesReportSession dealloc]
// Type encoding: v16@0:8
// Implementation: 0x107209ba4

// -[SCLegacyStoriesReportSession registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x107209bd8

// -[SCLegacyStoriesReportSession operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107209c94

// -[SCLegacyStoriesReportSession _reportForMapInAppReporting]
// Type encoding: v16@0:8
// Implementation: 0x107209de8

// -[SCLegacyStoriesReportSession _reportForStoryInAppReporting]
// Type encoding: v16@0:8
// Implementation: 0x107209e9c

// -[SCLegacyStoriesReportSession _reportForPublicUserStoryInAppReporting]
// Type encoding: v16@0:8
// Implementation: 0x107209f50

// -[SCLegacyStoriesReportSession _reportForHighlightsStoryInAppReporting]
// Type encoding: v16@0:8
// Implementation: 0x10720a004

// -[SCLegacyStoriesReportSession _startSafetyReportWithParams:]
// Type encoding: v24@0:8@16
// Implementation: 0x10720a15c

// -[SCLegacyStoriesReportSession reportDidCompleteWithCancelled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10720a250

// -[SCLegacyStoriesReportSession reportDidSubmitWithReasonId:comment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10720a324

// -[SCLegacyStoriesReportSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10720a328

// +[SCLegacyStoriesReportSession announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x107209aa4

// +[SCLegacyStoriesReportSession _isStoriesFeedReportSnapSource:]
// Type encoding: B24@0:8q16
// Implementation: 0x10720a118

@end
