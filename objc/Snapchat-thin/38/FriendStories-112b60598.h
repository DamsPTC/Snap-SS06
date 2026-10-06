// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FriendStories
// Superclass: NSObject
// Address: 0x112b60598

@interface FriendStories

// Property: atomicUsername; attributes: T@"NSString",C,V_atomicUsername
// Property: batchState; attributes: Tq,V_batchState
// Property: unviewedBatchState; attributes: Tq,V_unviewedBatchState
// Property: local; attributes: TB,GisLocal,V_local
// Property: shared; attributes: TB,GisShared,V_shared
// Property: officialTrackingId; attributes: T@"NSString",C,V_officialTrackingId
// Property: mostRecentStoryTimestamp; attributes: T@"NSDate",&,V_mostRecentStoryTimestamp
// Property: numSnapsToLoadBeforeAllowViewing; attributes: TQ,V_numSnapsToLoadBeforeAllowViewing
// Property: tapToLoadCount; attributes: TQ,V_tapToLoadCount
// Property: stories; attributes: T@"NSArray",C,N,V_stories
// Property: storyId; attributes: T@"NSString",C,N
// Property: displayName; attributes: T@"NSString",C,V_displayName
// Property: friendUsername; attributes: T@"NSString",R,C,N
// Property: loadContext; attributes: Tq,V_loadContext
// Property: unviewedLoadContext; attributes: Tq,V_unviewedLoadContext
// Property: isMapStories; attributes: TB,R
// Property: mapViewingInfo; attributes: T@"SCMapStoriesInfo",&,V_mapViewingInfo
// Property: cheetahStory; attributes: T@"SCDiscoverFeedStory",C,V_cheetahStory
// Property: discoverFeedItemPos; attributes: TQ,V_discoverFeedItemPos
// Property: isBusinessStories; attributes: TB,V_isBusinessStories
// Property: isHighlightStories; attributes: TB,V_isHighlightStories
// Property: trackingId; attributes: T@"NSString",R,C,V_trackingId
// Property: isPromotedStories; attributes: TB,V_isPromotedStories
// Property: version; attributes: Tq,N,V_version
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[FriendStories isCameoStory]
// Type encoding: B16@0:8
// Implementation: 0x1071de2b8

// -[FriendStories init]
// Type encoding: @16@0:8
// Implementation: 0x1071de3dc

// -[FriendStories initWithStoriesArray:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071de434

// -[FriendStories designatedInitializer]
// Type encoding: v16@0:8
// Implementation: 0x1071de4b8

// -[FriendStories cache]
// Type encoding: @16@0:8
// Implementation: 0x1071de52c

// -[FriendStories setStoryId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071de538

// -[FriendStories storyId]
// Type encoding: @16@0:8
// Implementation: 0x1071de53c

// -[FriendStories friendUsername]
// Type encoding: @16@0:8
// Implementation: 0x1071de540

// -[FriendStories isNormalFriendStories]
// Type encoding: B16@0:8
// Implementation: 0x1071de57c

// -[FriendStories isSaveable]
// Type encoding: B16@0:8
// Implementation: 0x1071de608

// -[FriendStories isShareable]
// Type encoding: B16@0:8
// Implementation: 0x1071de610

// -[FriendStories isMapStories]
// Type encoding: B16@0:8
// Implementation: 0x1071de658

// -[FriendStories copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x1071de6cc

// -[FriendStories initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071de6f0

// -[FriendStories encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071de948

// -[FriendStories initWithFriendStories:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071deb44

// -[FriendStories dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1071decc0

// -[FriendStories didDecodeObject]
// Type encoding: v16@0:8
// Implementation: 0x1071ded30

// -[FriendStories setStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071dedcc

// -[FriendStories addStoriesObservers]
// Type encoding: v16@0:8
// Implementation: 0x1071df0f0

// -[FriendStories _addIndividualStoriesObservers:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071df150

// -[FriendStories _removeIndividualStoriesObservers:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071df248

// -[FriendStories totalTimeForViewingType:]
// Type encoding: d24@0:8q16
// Implementation: 0x1071df340

// -[FriendStories totalTimeLeftForViewingType:]
// Type encoding: d24@0:8q16
// Implementation: 0x1071df3ec

// -[FriendStories observeValueForKeyPath:ofObject:change:context:]
// Type encoding: v48@0:8@16@24@32^v40
// Implementation: 0x1071df4d0

// -[FriendStories _handleChangetoStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071df534

// -[FriendStories resetMostRecentStoryInfo]
// Type encoding: v16@0:8
// Implementation: 0x1071df7a0

// -[FriendStories fetchMediaForBatch:viewingType:startAtIndex:loadContext:userInitiated:viewLocation:source:]
// Type encoding: v68@0:8Q16q24q32q40B48q52@60
// Implementation: 0x1071df850

// -[FriendStories _adjustedUserInitiatedWithCurrentUserInitiated:loadStartIndex:loadCurrentIndex:loadContext:]
// Type encoding: B44@0:8B16q20q28q36
// Implementation: 0x1071dfac8

// -[FriendStories _indexOfFirstUnviewedStory]
// Type encoding: q16@0:8
// Implementation: 0x1071dfadc

// -[FriendStories _indexOfViewingStory]
// Type encoding: q16@0:8
// Implementation: 0x1071dfc38

// -[FriendStories numberOfSnapsRemainingForViewingType:]
// Type encoding: Q24@0:8q16
// Implementation: 0x1071dfc74

// -[FriendStories firstStoryToPlayForViewingType:]
// Type encoding: @24@0:8q16
// Implementation: 0x1071dfc98

// -[FriendStories fetchStory:userInitiated:completion:source:]
// Type encoding: v44@0:8@16B24@?28@36
// Implementation: 0x1071dfd38

// -[FriendStories hasStories]
// Type encoding: B16@0:8
// Implementation: 0x1071dfec8

// -[FriendStories hasUnviewedStories]
// Type encoding: B16@0:8
// Implementation: 0x1071dff08

// -[FriendStories unviewedStories]
// Type encoding: @16@0:8
// Implementation: 0x1071e0008

// -[FriendStories removeStoriesWithIds:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1071e014c

// -[FriendStories resetFriendsStoryStateUseLatestConfig:]
// Type encoding: v20@0:8B16
// Implementation: 0x1071e032c

// -[FriendStories _shouldDisableSwipeUpToChatOnStory:]
// Type encoding: B24@0:8@16
// Implementation: 0x1071e0670

// -[FriendStories replyEnabledForStory:]
// Type encoding: B24@0:8@16
// Implementation: 0x1071e071c

// -[FriendStories isFullyViewed]
// Type encoding: B16@0:8
// Implementation: 0x1071e0814

// -[FriendStories numberOfLoadedStoryMediaNeededForLoadedStateUseLatestConfig:]
// Type encoding: Q20@0:8B16
// Implementation: 0x1071e0870

// -[FriendStories numberOfLoadedStoryMediaNeededForUnviewedLoadedStateUseLatestConfig:]
// Type encoding: Q20@0:8B16
// Implementation: 0x1071e087c

// -[FriendStories numberOfLoadedSnapsNeededBeforeViewingForViewingType:useLatestConfig:]
// Type encoding: Q28@0:8q16B24
// Implementation: 0x1071e0888

// -[FriendStories story:didChangeMediaState:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1071e08f4

// -[FriendStories enableCriticalModeWhenLoading]
// Type encoding: B16@0:8
// Implementation: 0x1071e0970

// -[FriendStories isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x1071e09a8

// -[FriendStories compare:]
// Type encoding: q24@0:8@16
// Implementation: 0x1071e0a60

// -[FriendStories hash]
// Type encoding: Q16@0:8
// Implementation: 0x1071e0b48

// -[FriendStories storyTypeSpecific]
// Type encoding: q16@0:8
// Implementation: 0x1071e0b84

// -[FriendStories storyType]
// Type encoding: q16@0:8
// Implementation: 0x1071e0dc8

// -[FriendStories batchState]
// Type encoding: q16@0:8
// Implementation: 0x1071e0fb8

// -[FriendStories setBatchState:]
// Type encoding: v24@0:8q16
// Implementation: 0x1071e0fc0

// -[FriendStories isLocal]
// Type encoding: B16@0:8
// Implementation: 0x1071e0fc8

// -[FriendStories setLocal:]
// Type encoding: v20@0:8B16
// Implementation: 0x1071e0fd4

// -[FriendStories isShared]
// Type encoding: B16@0:8
// Implementation: 0x1071e0fdc

// -[FriendStories setShared:]
// Type encoding: v20@0:8B16
// Implementation: 0x1071e0fe8

// -[FriendStories mostRecentStoryTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x1071e0ff0

// -[FriendStories setMostRecentStoryTimestamp:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071e0ffc

// -[FriendStories stories]
// Type encoding: @16@0:8
// Implementation: 0x1071e1004

// -[FriendStories displayName]
// Type encoding: @16@0:8
// Implementation: 0x1071e100c

// -[FriendStories setDisplayName:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071e1018

// -[FriendStories loadContext]
// Type encoding: q16@0:8
// Implementation: 0x1071e1020

// -[FriendStories setLoadContext:]
// Type encoding: v24@0:8q16
// Implementation: 0x1071e1028

// -[FriendStories unviewedLoadContext]
// Type encoding: q16@0:8
// Implementation: 0x1071e1030

// -[FriendStories setUnviewedLoadContext:]
// Type encoding: v24@0:8q16
// Implementation: 0x1071e1038

// -[FriendStories mapViewingInfo]
// Type encoding: @16@0:8
// Implementation: 0x1071e1040

// -[FriendStories setMapViewingInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071e104c

// -[FriendStories officialTrackingId]
// Type encoding: @16@0:8
// Implementation: 0x1071e1054

// -[FriendStories setOfficialTrackingId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071e1060

// -[FriendStories cheetahStory]
// Type encoding: @16@0:8
// Implementation: 0x1071e1068

// -[FriendStories setCheetahStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071e1074

// -[FriendStories discoverFeedItemPos]
// Type encoding: Q16@0:8
// Implementation: 0x1071e107c

// -[FriendStories setDiscoverFeedItemPos:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1071e1084

// -[FriendStories isBusinessStories]
// Type encoding: B16@0:8
// Implementation: 0x1071e108c

// -[FriendStories setIsBusinessStories:]
// Type encoding: v20@0:8B16
// Implementation: 0x1071e1098

// -[FriendStories isHighlightStories]
// Type encoding: B16@0:8
// Implementation: 0x1071e10a0

// -[FriendStories setIsHighlightStories:]
// Type encoding: v20@0:8B16
// Implementation: 0x1071e10ac

// -[FriendStories trackingId]
// Type encoding: @16@0:8
// Implementation: 0x1071e10b4

// -[FriendStories isPromotedStories]
// Type encoding: B16@0:8
// Implementation: 0x1071e10c0

// -[FriendStories setIsPromotedStories:]
// Type encoding: v20@0:8B16
// Implementation: 0x1071e10cc

// -[FriendStories version]
// Type encoding: q16@0:8
// Implementation: 0x1071e10d4

// -[FriendStories setVersion:]
// Type encoding: v24@0:8q16
// Implementation: 0x1071e10dc

// -[FriendStories atomicUsername]
// Type encoding: @16@0:8
// Implementation: 0x1071e10e4

// -[FriendStories setAtomicUsername:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071e10f0

// -[FriendStories unviewedBatchState]
// Type encoding: q16@0:8
// Implementation: 0x1071e10f8

// -[FriendStories setUnviewedBatchState:]
// Type encoding: v24@0:8q16
// Implementation: 0x1071e1100

// -[FriendStories numSnapsToLoadBeforeAllowViewing]
// Type encoding: Q16@0:8
// Implementation: 0x1071e1108

// -[FriendStories setNumSnapsToLoadBeforeAllowViewing:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1071e1110

// -[FriendStories tapToLoadCount]
// Type encoding: Q16@0:8
// Implementation: 0x1071e1118

// -[FriendStories setTapToLoadCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1071e1120

// -[FriendStories .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1071e1128

// +[FriendStories storiesFromManifest:storyId:reportedIds:enableStreaming:elementsType:]
// Type encoding: @52@0:8@16@24@32B40Q44
// Implementation: 0x1071e7f30

// +[FriendStories storiesFromEncodedStoryDoc:]
// Type encoding: @24@0:8@16
// Implementation: 0x106669618

// +[FriendStories storiesFromStoryDoc:]
// Type encoding: @24@0:8@16
// Implementation: 0x106669694

// +[FriendStories storiesFromFeedCardSnaps:feedCardCompositeId:storyTitle:storySubtitle:storyLogoURL:startingSnapId:creatorUserId:creatorUsername:creatorDisplayName:creatorEligibility:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72@80@88
// Implementation: 0x106669244

@end
