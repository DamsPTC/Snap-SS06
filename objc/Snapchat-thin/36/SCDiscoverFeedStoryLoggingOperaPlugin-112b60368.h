// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedStoryLoggingOperaPlugin
// Superclass: NSObject
// Address: 0x112b60368

@interface SCDiscoverFeedStoryLoggingOperaPlugin

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDiscoverFeedStoryLoggingOperaPlugin addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071c8ce4

// -[SCDiscoverFeedStoryLoggingOperaPlugin removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071c8cec

// -[SCDiscoverFeedStoryLoggingOperaPlugin initWithSource:itemLayout:interactionContext:fieldsOverrideDict:discoverFeedDataFetcher:interactionHistoryManager:navigationStyle:loggingSourceLocation:circumstanceEngine:storiesConfigProvider:pageTypeToOverride:snapchattersDataFetcher:viewLocation:storiesMetricServices:triggeringSection:userPreferences:storiesMediaCoordinator:]
// Type encoding: @152@0:8q16q24q32@40@48@56q64Q72@80@88@96@104q112@120q128@136@144
// Implementation: 0x1071c8cf4

// -[SCDiscoverFeedStoryLoggingOperaPlugin _shouldStartLoggingEventForPublisherPlayableDatamodel:]
// Type encoding: B24@0:8@16
// Implementation: 0x1071c90dc

// -[SCDiscoverFeedStoryLoggingOperaPlugin _shouldStartLoggingForNonDFEntryPoint]
// Type encoding: B16@0:8
// Implementation: 0x1071c90f0

// -[SCDiscoverFeedStoryLoggingOperaPlugin _shouldStartSpotlightLoggingForNonDFEntryPoint]
// Type encoding: B16@0:8
// Implementation: 0x1071c9100

// -[SCDiscoverFeedStoryLoggingOperaPlugin setPlaylistItemController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071c911c

// -[SCDiscoverFeedStoryLoggingOperaPlugin registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x1071c9128

// -[SCDiscoverFeedStoryLoggingOperaPlugin setOperaControlling:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071c97e8

// -[SCDiscoverFeedStoryLoggingOperaPlugin _cacheLastInteraction:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071c9ae4

// -[SCDiscoverFeedStoryLoggingOperaPlugin _SCDiscoverFeedCurrentIndexWithoutAds]
// Type encoding: Q16@0:8
// Implementation: 0x1071c9b14

// -[SCDiscoverFeedStoryLoggingOperaPlugin operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1071c9d8c

// -[SCDiscoverFeedStoryLoggingOperaPlugin _fetchStoriesAndHandleOperaEvent:page:params:extraData:storyDedupeToFetch:currentPlayingStoryFp:currentPlayingStoryIndex:triggeringStoryFp:triggeringStoryIndex:playableViewModel:isInterstitial:triggeringSection:]
// Type encoding: v108@0:8@16@24@32@40@48Q56Q64Q72Q80@88B96q100
// Implementation: 0x1071caff0

// -[SCDiscoverFeedStoryLoggingOperaPlugin _isInterstitialTilePageLifecycleEvent:]
// Type encoding: B24@0:8@16
// Implementation: 0x1071cb4f8

// -[SCDiscoverFeedStoryLoggingOperaPlugin _handleSynchronouslyOperaEventWithName:isInterstitial:]
// Type encoding: B28@0:8@16B24
// Implementation: 0x1071cb728

// -[SCDiscoverFeedStoryLoggingOperaPlugin _announceImpressionForInterstitialStory:tileIndex:feedType:impTimeSecs:isLong:]
// Type encoding: v52@0:8@16q24@32d40B48
// Implementation: 0x1071cb944

// -[SCDiscoverFeedStoryLoggingOperaPlugin _announceTileViewForInterstitialStory:tileIndex:feedType:tileId:tilePlayTimeMs:mutedPlaybackMs:unmutedPlaybackMs:]
// Type encoding: v72@0:8@16q24@32@40@48@56@64
// Implementation: 0x1071cbcbc

// -[SCDiscoverFeedStoryLoggingOperaPlugin _isSwipeUpOpenOrganicAttachmentEvent:page:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1071cc14c

// -[SCDiscoverFeedStoryLoggingOperaPlugin _announceViewingSessionStartWithInfoExtractor:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071cc328

// -[SCDiscoverFeedStoryLoggingOperaPlugin _handleOperaEventWithName:page:params:extraData:isInterstitial:currentPlayingStory:currentStorySectionKey:triggeringStory:currentStoryIndex:triggeringStoryIndex:playableViewModel:triggeringSection:]
// Type encoding: v108@0:8@16@24@32@40B48@52@60@68Q76Q84@92q100
// Implementation: 0x1071cc57c

// -[SCDiscoverFeedStoryLoggingOperaPlugin _fillContextAndLensInfoForExtraData:page:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071d235c

// -[SCDiscoverFeedStoryLoggingOperaPlugin _usesRetainedSpotlightSessionHandling]
// Type encoding: B16@0:8
// Implementation: 0x1071d28b8

// -[SCDiscoverFeedStoryLoggingOperaPlugin _markRetainedSpotlightViewingSessionStarted]
// Type encoding: v16@0:8
// Implementation: 0x1071d2900

// -[SCDiscoverFeedStoryLoggingOperaPlugin _markRetainedSpotlightViewingSessionFinished]
// Type encoding: v16@0:8
// Implementation: 0x1071d292c

// -[SCDiscoverFeedStoryLoggingOperaPlugin _canFinishRetainedSpotlightViewingSession]
// Type encoding: B16@0:8
// Implementation: 0x1071d2958

// -[SCDiscoverFeedStoryLoggingOperaPlugin _backfillRetainedSpotlightStartTimestampsIfNeeded:shouldSeedMediaStart:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1071d29a4

// -[SCDiscoverFeedStoryLoggingOperaPlugin teardown]
// Type encoding: v16@0:8
// Implementation: 0x1071d2a8c

// -[SCDiscoverFeedStoryLoggingOperaPlugin _extraDataDictForNewViewSessionWithExtraData:event:page:params:discoverFeedStory:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1071d2c8c

// -[SCDiscoverFeedStoryLoggingOperaPlugin _sourceForCurrentEvent:]
// Type encoding: q24@0:8@16
// Implementation: 0x1071d423c

// -[SCDiscoverFeedStoryLoggingOperaPlugin _logFinishViewingSessionWithExtraData:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071d4244

// -[SCDiscoverFeedStoryLoggingOperaPlugin _shouldAllowUnsubscribeEmissionFromPage:]
// Type encoding: B24@0:8@16
// Implementation: 0x1071d44a0

// -[SCDiscoverFeedStoryLoggingOperaPlugin _insertUpNextLoggingInfoForStory:extraData:triggeringStoryIndex:currentStoryIndex:]
// Type encoding: v48@0:8@16@24Q32Q40
// Implementation: 0x1071d4588

// -[SCDiscoverFeedStoryLoggingOperaPlugin _insertVirtualSectionLoggingInfoForId:extraData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071d4770

// -[SCDiscoverFeedStoryLoggingOperaPlugin _announceFSCVS]
// Type encoding: v16@0:8
// Implementation: 0x1071d4818

// -[SCDiscoverFeedStoryLoggingOperaPlugin _fillSubtitlesFieldsWhenFinishViewSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071d4960

// -[SCDiscoverFeedStoryLoggingOperaPlugin _calculateMediaAvailableAtStartCount]
// Type encoding: v16@0:8
// Implementation: 0x1071d49f8

// -[SCDiscoverFeedStoryLoggingOperaPlugin _calculateMediaAvailableAtStartCount:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071d4c94

// -[SCDiscoverFeedStoryLoggingOperaPlugin _setInteractionContextWithParams:extraData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071d4fe8

// -[SCDiscoverFeedStoryLoggingOperaPlugin _setGestureTypeIfAvailableWithParams:extraData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071d50c8

// -[SCDiscoverFeedStoryLoggingOperaPlugin .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1071d51a8

// +[SCDiscoverFeedStoryLoggingOperaPlugin announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1071c8cd8

@end
