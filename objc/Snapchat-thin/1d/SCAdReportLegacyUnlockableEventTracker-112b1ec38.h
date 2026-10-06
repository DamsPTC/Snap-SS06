// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdReportLegacyUnlockableEventTracker
// Superclass: NSObject
// Address: 0x112b1ec38

@interface SCAdReportLegacyUnlockableEventTracker

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdReportLegacyUnlockableEventTracker initWithTracker:userTrackedLogger:unlockableId:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106bb6c94

// -[SCAdReportLegacyUnlockableEventTracker trackDidShowReportAd]
// Type encoding: v16@0:8
// Implementation: 0x106bb6d60

// -[SCAdReportLegacyUnlockableEventTracker trackDidSubmitReportWithReasonId:flagNote:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106bb6d64

// -[SCAdReportLegacyUnlockableEventTracker trackDidCancelReport]
// Type encoding: v16@0:8
// Implementation: 0x106bb6dd4

// -[SCAdReportLegacyUnlockableEventTracker _logAdUnlockableReportWithDidSubmit:reasonId:unlockableId:]
// Type encoding: v36@0:8B16@20@28
// Implementation: 0x106bb6e14

// -[SCAdReportLegacyUnlockableEventTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106bb6ee0

@end
