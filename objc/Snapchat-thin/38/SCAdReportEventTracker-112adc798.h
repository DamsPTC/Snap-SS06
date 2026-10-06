// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdReportEventTracker
// Superclass: NSObject
// Address: 0x112adc798

@interface SCAdReportEventTracker

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdReportEventTracker initWithTracker:hideTracker:adRequestClientId:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106375e84

// -[SCAdReportEventTracker trackDidShowReportAd]
// Type encoding: v16@0:8
// Implementation: 0x106375f50

// -[SCAdReportEventTracker trackDidSubmitReportWithReasonId:flagNote:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106375f98

// -[SCAdReportEventTracker trackDidCancelReport]
// Type encoding: v16@0:8
// Implementation: 0x106376188

// -[SCAdReportEventTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10637618c

@end
