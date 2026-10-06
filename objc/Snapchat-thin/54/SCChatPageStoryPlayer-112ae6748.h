// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatPageStoryPlayer
// Superclass: NSObject
// Address: 0x112ae6748

@interface SCChatPageStoryPlayer

// Property: enabled; attributes: TB,R,N,V_enabled
// Property: playingStoryFromChatHeader; attributes: TB,N,V_playingStoryFromChatHeader

// -[SCChatPageStoryPlayer initWithOptInProvider:storiesDataCoordinator:pageLauncher:snapchattersDataFetcher:userSession:storiesCofExperimentServices:creatorSubscriptionsInfoProvider:plusFeatureGating:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x10658b4f4

// -[SCChatPageStoryPlayer handleTapOnSponsoredSnapsStoriesWithStoryId:baseView:viewController:playbackDelegate:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10658b69c

// -[SCChatPageStoryPlayer handleTapFriendStoriesWithStoryId:allUserIds:baseView:viewController:playbackDelegate:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x10658b8bc

// -[SCChatPageStoryPlayer _startContentPlaybackScopeWithSummaries:initialStoryId:allFeedIds:baseView:viewController:playbackDelegate:]
// Type encoding: v64@0:8@16@24@32@40@48@56
// Implementation: 0x10658bae4

// -[SCChatPageStoryPlayer _startContentPlaybackScopeWithSummaries:initialStoryId:orderedStoryIds:baseView:viewController:playbackDelegate:]
// Type encoding: v64@0:8@16@24@32@40@48@56
// Implementation: 0x10658bd20

// -[SCChatPageStoryPlayer _getCreatorSubscriptionsAndStartPlaybackWithSummaries:initialStoryId:orderedStoryIds:userIdToSnapchatter:baseView:viewController:playbackDelegate:]
// Type encoding: v72@0:8@16@24@32@40@48@56@64
// Implementation: 0x10658bfec

// -[SCChatPageStoryPlayer _startContentPlaybackScopeWithSummaries:initialStoryId:orderedStoryIds:userIdToSnapchatter:creatorSubscriptions:baseView:viewController:playbackDelegate:]
// Type encoding: v80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x10658c2ac

// -[SCChatPageStoryPlayer enabled]
// Type encoding: B16@0:8
// Implementation: 0x10658c774

// -[SCChatPageStoryPlayer playingStoryFromChatHeader]
// Type encoding: B16@0:8
// Implementation: 0x10658c77c

// -[SCChatPageStoryPlayer setPlayingStoryFromChatHeader:]
// Type encoding: v20@0:8B16
// Implementation: 0x10658c784

// -[SCChatPageStoryPlayer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10658c78c

@end
