// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLivePublicStoryStateObserver
// Superclass: NSObject
// Address: 0x112b00878

@interface SCLivePublicStoryStateObserver

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLivePublicStoryStateObserver initWithMyStoriesDataCoordinator:snapProProfilesProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10681f3fc

// -[SCLivePublicStoryStateObserver dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10681f5c0

// -[SCLivePublicStoryStateObserver tearDown]
// Type encoding: v16@0:8
// Implementation: 0x10681f79c

// -[SCLivePublicStoryStateObserver queuePerformer]
// Type encoding: @16@0:8
// Implementation: 0x10681fa24

// -[SCLivePublicStoryStateObserver observeLivePublicStoryWithBusinessProfileId:onChange:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x10681fa4c

// -[SCLivePublicStoryStateObserver removeSubscription:]
// Type encoding: v24@0:8@16
// Implementation: 0x10681fd30

// -[SCLivePublicStoryStateObserver _registerListenerIfNeededLocked]
// Type encoding: v16@0:8
// Implementation: 0x10681ff90

// -[SCLivePublicStoryStateObserver _ensureStoryHandlerObserverForBusinessProfileIdLocked:]
// Type encoding: v24@0:8@16
// Implementation: 0x10681ffe8

// -[SCLivePublicStoryStateObserver _recomputeAndEmitForBusinessProfileIdLocked:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068203b0

// -[SCLivePublicStoryStateObserver _emitStateForBusinessProfileIdLocked:lastSnapId:publicLatestComponentId:publicLatestServerId:publicLatestTimestamp:publicLatestThumbnailURL:publicSnapComponentIds:publicSnapshotVersion:postingInProgress:uploadFailed:pendingPublicPlaybackInfos:]
// Type encoding: v96@0:8@16@24@32@40@48@56@64Q72B80B84@88
// Implementation: 0x106821294

// -[SCLivePublicStoryStateObserver _findProfileHandlerForBusinessProfileId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106821ae0

// -[SCLivePublicStoryStateObserver didUpdateMyStoriesDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106821ca4

// -[SCLivePublicStoryStateObserver .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106822110

@end
