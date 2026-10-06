// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCThrottledFriendsResponseFetcher
// Superclass: NSObject
// Address: 0x112a4a4d8

@interface SCThrottledFriendsResponseFetcher

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCThrottledFriendsResponseFetcher initWithSnapchatterCoordinatedSyncer:dataTracker:timeProvider:preferences:friendsResponseSubject:queuePerformer:circumstanceEngine:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x100977144

// -[SCThrottledFriendsResponseFetcher tryFetchFriendsResponseFromScenarioType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1009772ec

// -[SCThrottledFriendsResponseFetcher _shouldThrottleFetchFriendsResponseFromScenario:]
// Type encoding: B24@0:8Q16
// Implementation: 0x10097769c

// -[SCThrottledFriendsResponseFetcher _fetchFriendsResponseFromScenarioType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x100977564

// -[SCThrottledFriendsResponseFetcher _shouldThrottle:withIntervalInMinutes:]
// Type encoding: B32@0:8@16Q24
// Implementation: 0x1055bf89c

// -[SCThrottledFriendsResponseFetcher didStartSnapchattersUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055bf96c

// -[SCThrottledFriendsResponseFetcher didEndSnapchattersUpdateDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x1055bf970

// -[SCThrottledFriendsResponseFetcher didStartSnapchattersFetchDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x100a12c30

// -[SCThrottledFriendsResponseFetcher didEndSnapchattersFetchDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x100c5a0e4

// -[SCThrottledFriendsResponseFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1055bf974

@end
