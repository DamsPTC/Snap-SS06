// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdReportUnlockableEventTracker
// Superclass: NSObject
// Address: 0x112adca68

@interface SCAdReportUnlockableEventTracker

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdReportUnlockableEventTracker initWithTracker:userTrackedLogger:unlockableId:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10637781c

// -[SCAdReportUnlockableEventTracker trackDidShowReportAd]
// Type encoding: v16@0:8
// Implementation: 0x1063778e8

// -[SCAdReportUnlockableEventTracker trackDidSubmitReportWithReasonId:flagNote:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063778ec

// -[SCAdReportUnlockableEventTracker trackDidCancelReport]
// Type encoding: v16@0:8
// Implementation: 0x10637795c

// -[SCAdReportUnlockableEventTracker _logAdUnlockableReportWithDidSubmit:reasonId:unlockableId:]
// Type encoding: v36@0:8B16@20@28
// Implementation: 0x10637799c

// -[SCAdReportUnlockableEventTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106377a68

@end
