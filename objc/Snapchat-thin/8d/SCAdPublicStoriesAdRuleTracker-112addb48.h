// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdPublicStoriesAdRuleTracker
// Superclass: NSObject
// Address: 0x112addb48

@interface SCAdPublicStoriesAdRuleTracker

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdPublicStoriesAdRuleTracker initWithViewedSnapsCount:accumulatedDurationSeconds:]
// Type encoding: @32@0:8q16d24
// Implementation: 0x1063d59cc

// -[SCAdPublicStoriesAdRuleTracker initWithViewedSnapsCount:timer:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x1063d5a4c

// -[SCAdPublicStoriesAdRuleTracker enoughSnapsViewed]
// Type encoding: B16@0:8
// Implementation: 0x1063d5adc

// -[SCAdPublicStoriesAdRuleTracker enoughTimeViewed]
// Type encoding: B16@0:8
// Implementation: 0x1063d5af0

// -[SCAdPublicStoriesAdRuleTracker incrementSnapsViewed]
// Type encoding: v16@0:8
// Implementation: 0x1063d5b3c

// -[SCAdPublicStoriesAdRuleTracker resetSnapsViewed]
// Type encoding: v16@0:8
// Implementation: 0x1063d5b4c

// -[SCAdPublicStoriesAdRuleTracker setAdRulesForFirstSessionAd]
// Type encoding: v16@0:8
// Implementation: 0x1063d5b54

// -[SCAdPublicStoriesAdRuleTracker setAdRulesForNonFirstSessionAd]
// Type encoding: v16@0:8
// Implementation: 0x1063d5b8c

// -[SCAdPublicStoriesAdRuleTracker resetSessionAdTimer]
// Type encoding: v16@0:8
// Implementation: 0x1063d5bc4

// -[SCAdPublicStoriesAdRuleTracker startSessionAdTimer]
// Type encoding: v16@0:8
// Implementation: 0x1063d5bcc

// -[SCAdPublicStoriesAdRuleTracker stopSessionAdTimer]
// Type encoding: v16@0:8
// Implementation: 0x1063d5bd4

// -[SCAdPublicStoriesAdRuleTracker timeGapFromNextAdInSec]
// Type encoding: d16@0:8
// Implementation: 0x1063d5bdc

// -[SCAdPublicStoriesAdRuleTracker updateInsertionRuleConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063d5c2c

// -[SCAdPublicStoriesAdRuleTracker snapsViewed]
// Type encoding: q16@0:8
// Implementation: 0x1063d5c5c

// -[SCAdPublicStoriesAdRuleTracker storiesViewed]
// Type encoding: q16@0:8
// Implementation: 0x1063d5c64

// -[SCAdPublicStoriesAdRuleTracker timeViewedSeconds]
// Type encoding: d16@0:8
// Implementation: 0x1063d5c6c

// -[SCAdPublicStoriesAdRuleTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1063d5c98

@end
