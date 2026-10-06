// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLongformAdInsertionRuleTracker
// Superclass: NSObject
// Address: 0x112addfa8

@interface SCLongformAdInsertionRuleTracker


// -[SCLongformAdInsertionRuleTracker initWithAdConfigProvider:adInsertionMetricsManaging:crossInventoryInsertionRuleTracker:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1063fe330

// -[SCLongformAdInsertionRuleTracker initWithAdConfigProvider:adInsertionMetricsManaging:crossInventoryInsertionRuleTracker:timeSinceLastAdInCurrentLongform:timeSinceCurrentLongformStart:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1063fe3ec

// -[SCLongformAdInsertionRuleTracker updateInsertionRuleConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063fe534

// -[SCLongformAdInsertionRuleTracker reset]
// Type encoding: v16@0:8
// Implementation: 0x1063fe564

// -[SCLongformAdInsertionRuleTracker didHitNoFillAd]
// Type encoding: v16@0:8
// Implementation: 0x1063fe5a4

// -[SCLongformAdInsertionRuleTracker didEndViewingAdWithSnapIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x1063fe5ac

// -[SCLongformAdInsertionRuleTracker didStartViewingLongformWithLongformId:duration:snapsCount:firstSnapIndex:]
// Type encoding: v48@0:8@16d24q32q40
// Implementation: 0x1063fe688

// -[SCLongformAdInsertionRuleTracker triggerPointMeetInsertionRule:triggerPointSnapIndex:isOptionalAdSlot:timestamp:adResponse:adIndexPos:]
// Type encoding: B60@0:8@16q24B32d36@44q52
// Implementation: 0x1063fe700

// -[SCLongformAdInsertionRuleTracker timeGapFromNextAdInSec]
// Type encoding: d16@0:8
// Implementation: 0x1063fe994

// -[SCLongformAdInsertionRuleTracker snapsViewedSinceLastAdForTriggerPointSnapIndex:]
// Type encoding: q24@0:8q16
// Implementation: 0x1063fe9f4

// -[SCLongformAdInsertionRuleTracker timeViewedSecondsSinceLastAd]
// Type encoding: d16@0:8
// Implementation: 0x1063fea60

// -[SCLongformAdInsertionRuleTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1063fea98

@end
