// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpotlightDisplayOrderer
// Superclass: NSObject
// Address: 0x112b041a8

@interface SCSpotlightDisplayOrderer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: orderedStories; attributes: T@"SCObservable",R,N
// Property: currentOrderedStories; attributes: T@"NSArray",R,C,N
// Property: hasMoreStories; attributes: T@"SCObservable",R,N

// -[SCSpotlightDisplayOrderer initWithCircumstanceEngine:appStartReader:feedType:discoverFeedDataFetcher:discoverFeedSectionsCoordinator:networkConnectivityMonitor:spotlightMediaFetcherFactory:notificationCenter:preferences:]
// Type encoding: @88@0:8@16@24q32@40@48@56@64@72@80
// Implementation: 0x1068ab8cc

// -[SCSpotlightDisplayOrderer dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1068ac2e4

// -[SCSpotlightDisplayOrderer orderedStories]
// Type encoding: @16@0:8
// Implementation: 0x1068ac348

// -[SCSpotlightDisplayOrderer hasMoreStories]
// Type encoding: @16@0:8
// Implementation: 0x1068ac370

// -[SCSpotlightDisplayOrderer currentOrderedStories]
// Type encoding: @16@0:8
// Implementation: 0x1068ac398

// -[SCSpotlightDisplayOrderer trackIncomingFeedPage:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068ac3e8

// -[SCSpotlightDisplayOrderer didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1068ac630

// -[SCSpotlightDisplayOrderer _readStoriesFromDataFetcher]
// Type encoding: v16@0:8
// Implementation: 0x1068ac718

// -[SCSpotlightDisplayOrderer _readEOFStateFromSectionCoordinator]
// Type encoding: v16@0:8
// Implementation: 0x1068ac85c

// -[SCSpotlightDisplayOrderer _updateCurrentStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068aca34

// -[SCSpotlightDisplayOrderer _updateHasMoreStories:]
// Type encoding: v20@0:8B16
// Implementation: 0x1068acaa4

// -[SCSpotlightDisplayOrderer _updateStoriesOrder:storyMediaStates:partialSameAsFull:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1068acae8

// -[SCSpotlightDisplayOrderer _loadTrackedPositionAndTimestamps]
// Type encoding: v16@0:8
// Implementation: 0x1068ad0fc

// -[SCSpotlightDisplayOrderer _saveTrackedPositionAndTimestamps]
// Type encoding: v16@0:8
// Implementation: 0x1068ad294

// -[SCSpotlightDisplayOrderer _onResignActive:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068ad444

// -[SCSpotlightDisplayOrderer _preferencesKeyForFeedType:]
// Type encoding: @24@0:8q16
// Implementation: 0x1068ad4a4

// -[SCSpotlightDisplayOrderer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1068ad510

@end
