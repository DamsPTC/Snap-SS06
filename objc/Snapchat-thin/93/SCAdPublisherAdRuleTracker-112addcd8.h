// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdPublisherAdRuleTracker
// Superclass: NSObject
// Address: 0x112addcd8

@interface SCAdPublisherAdRuleTracker

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdPublisherAdRuleTracker initWithInteractionTimer:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063ed9e4

// -[SCAdPublisherAdRuleTracker updateInsertionRuleConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063eda88

// -[SCAdPublisherAdRuleTracker enoughSnapsViewed]
// Type encoding: B16@0:8
// Implementation: 0x1063edab8

// -[SCAdPublisherAdRuleTracker enoughTimeViewed]
// Type encoding: B16@0:8
// Implementation: 0x1063edacc

// -[SCAdPublisherAdRuleTracker timeGapFromNextAdInSec]
// Type encoding: d16@0:8
// Implementation: 0x1063edae8

// -[SCAdPublisherAdRuleTracker setAdRulesForFirstSessionAd]
// Type encoding: v16@0:8
// Implementation: 0x1063edb48

// -[SCAdPublisherAdRuleTracker setAdRulesForNonFirstSessionAd]
// Type encoding: v16@0:8
// Implementation: 0x1063edb88

// -[SCAdPublisherAdRuleTracker resetSnapsViewed]
// Type encoding: v16@0:8
// Implementation: 0x1063edbc4

// -[SCAdPublisherAdRuleTracker incrementSnapsViewed]
// Type encoding: v16@0:8
// Implementation: 0x1063edbcc

// -[SCAdPublisherAdRuleTracker setSnapsRemaining:]
// Type encoding: v24@0:8q16
// Implementation: 0x1063edbdc

// -[SCAdPublisherAdRuleTracker snapsRemaining]
// Type encoding: q16@0:8
// Implementation: 0x1063edbe4

// -[SCAdPublisherAdRuleTracker startSessionAdTimer]
// Type encoding: v16@0:8
// Implementation: 0x1063edbec

// -[SCAdPublisherAdRuleTracker resetSessionAdTimer]
// Type encoding: v16@0:8
// Implementation: 0x1063edbf4

// -[SCAdPublisherAdRuleTracker stopSessionAdTimer]
// Type encoding: v16@0:8
// Implementation: 0x1063edbfc

// -[SCAdPublisherAdRuleTracker snapsViewed]
// Type encoding: q16@0:8
// Implementation: 0x1063edc04

// -[SCAdPublisherAdRuleTracker storiesViewed]
// Type encoding: q16@0:8
// Implementation: 0x1063edc0c

// -[SCAdPublisherAdRuleTracker timeViewedSeconds]
// Type encoding: d16@0:8
// Implementation: 0x1063edc14

// -[SCAdPublisherAdRuleTracker setAdSlotIndexes:priorityAdSlotIndexes:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063edc40

// -[SCAdPublisherAdRuleTracker setLastViewedPlaylistIdx:]
// Type encoding: v24@0:8q16
// Implementation: 0x1063edca4

// -[SCAdPublisherAdRuleTracker afterFarthestViewedSnap]
// Type encoding: B16@0:8
// Implementation: 0x1063edcbc

// -[SCAdPublisherAdRuleTracker setLastViewedItemId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063edccc

// -[SCAdPublisherAdRuleTracker isLastItemViewedUnique]
// Type encoding: B16@0:8
// Implementation: 0x1063edd24

// -[SCAdPublisherAdRuleTracker insertionRulesSatisfied]
// Type encoding: B16@0:8
// Implementation: 0x1063edd48

// -[SCAdPublisherAdRuleTracker resetRulesAfterInsertion]
// Type encoding: v16@0:8
// Implementation: 0x1063edddc

// -[SCAdPublisherAdRuleTracker _isPotentialInsertionSpot]
// Type encoding: B16@0:8
// Implementation: 0x1063ede00

// -[SCAdPublisherAdRuleTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1063ede9c

@end
