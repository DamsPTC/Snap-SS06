// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdPrefetchRuleTracker
// Superclass: NSObject
// Address: 0x112a61048

@interface SCAdPrefetchRuleTracker


// -[SCAdPrefetchRuleTracker initWithAdProductType:adConfigProvider:grapheneRegistry:performer:adViewingHistory:userTrackedLogger:bandwidthEstimator:]
// Type encoding: @72@0:8Q16@24@32@40@48@56@64
// Implementation: 0x1057644b8

// -[SCAdPrefetchRuleTracker checkPrefetchConditionsFromPrefetchConfigs:adPrefetchSource:unviewedFriendStoriesCount:completionBlock:]
// Type encoding: v48@0:8@16q24Q32@?40
// Implementation: 0x105764614

// -[SCAdPrefetchRuleTracker checkPrefetchConditionsFromPrefetchConfigs:adPrefetchSource:completionBlock:]
// Type encoding: v40@0:8@16q24@?32
// Implementation: 0x105764620

// -[SCAdPrefetchRuleTracker _checkUserEngagementScoreWithCompletionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105764760

// -[SCAdPrefetchRuleTracker _checkMaxAdIndexWithCompletionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105764804

// -[SCAdPrefetchRuleTracker _handleAdViewCount:maxAdIndex:completionBlock:]
// Type encoding: v40@0:8q16q24@?32
// Implementation: 0x1057649fc

// -[SCAdPrefetchRuleTracker _allowPrefetchWithCompletionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105764a20

// -[SCAdPrefetchRuleTracker _disallowPrefetchWithPrefetchThrottleType:skipReason:completionBlock:]
// Type encoding: v40@0:8Q16q24@?32
// Implementation: 0x105764a9c

// -[SCAdPrefetchRuleTracker logPrefetchThrottle:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105764b18

// -[SCAdPrefetchRuleTracker _logPrefetchRequestInfo]
// Type encoding: v16@0:8
// Implementation: 0x105764c7c

// -[SCAdPrefetchRuleTracker _logPrefetchSkipInfo:]
// Type encoding: v24@0:8q16
// Implementation: 0x105764d10

// -[SCAdPrefetchRuleTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105764e50

@end
