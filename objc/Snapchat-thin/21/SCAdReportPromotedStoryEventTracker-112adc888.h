// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdReportPromotedStoryEventTracker
// Superclass: NSObject
// Address: 0x112adc888

@interface SCAdReportPromotedStoryEventTracker

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdReportPromotedStoryEventTracker initWithLogger:promotedStory:tileSize:]
// Type encoding: @48@0:8@16@24{CGSize=dd}32
// Implementation: 0x1063765a8

// -[SCAdReportPromotedStoryEventTracker trackDidShowReportAd]
// Type encoding: v16@0:8
// Implementation: 0x106376660

// -[SCAdReportPromotedStoryEventTracker trackDidSubmitReportWithReasonId:flagNote:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106376664

// -[SCAdReportPromotedStoryEventTracker trackDidCancelReport]
// Type encoding: v16@0:8
// Implementation: 0x1063766f8

// -[SCAdReportPromotedStoryEventTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106376738

@end
