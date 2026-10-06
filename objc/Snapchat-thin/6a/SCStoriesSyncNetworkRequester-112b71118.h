// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesSyncNetworkRequester
// Superclass: NSObject
// Address: 0x112b71118

@interface SCStoriesSyncNetworkRequester

// Property: syncDelegates; attributes: T@"NSDictionary",R,N,V_syncDelegates

// -[SCStoriesSyncNetworkRequester initWithMixerRequester:syncDelegates:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107b16cbc

// -[SCStoriesSyncNetworkRequester initWithMixerRequester:syncDelegates:storiesCachedPropertiesCoordinator:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x107b16cc4

// -[SCStoriesSyncNetworkRequester lastFriendStoriesResponseTime]
// Type encoding: @16@0:8
// Implementation: 0x107b16df8

// -[SCStoriesSyncNetworkRequester fetchFriendStoriesForTriggerType:]
// Type encoding: v24@0:8q16
// Implementation: 0x107b16e78

// -[SCStoriesSyncNetworkRequester fetchFriendStoriesForTriggerType:completion:]
// Type encoding: v32@0:8q16@?24
// Implementation: 0x107b16e80

// -[SCStoriesSyncNetworkRequester fetchMyStoriesForTriggerType:bloopsInStoryEnabled:completion:]
// Type encoding: v36@0:8q16B24@?28
// Implementation: 0x107b16f54

// -[SCStoriesSyncNetworkRequester fetchStoriesWithRequests:triggerType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107b17038

// -[SCStoriesSyncNetworkRequester fetchStoriesWithRequests:triggerType:bloopsInStoryEnabled:]
// Type encoding: v36@0:8@16q24B32
// Implementation: 0x107b17040

// -[SCStoriesSyncNetworkRequester _syncStoriesWithFeedTypes:triggerType:bloopsInStoryEnabled:]
// Type encoding: v36@0:8@16q24B32
// Implementation: 0x107b17508

// -[SCStoriesSyncNetworkRequester _handleStoriesResponse:feedTypes:triggerType:extraData:]
// Type encoding: v48@0:8@16@24q32@40
// Implementation: 0x107b17a74

// -[SCStoriesSyncNetworkRequester _syncDelegate:]
// Type encoding: @24@0:8@16
// Implementation: 0x107b18050

// -[SCStoriesSyncNetworkRequester syncDelegates]
// Type encoding: @16@0:8
// Implementation: 0x107b18098

// -[SCStoriesSyncNetworkRequester .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107b180a0

@end
