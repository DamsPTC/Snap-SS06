// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedEventsController
// Superclass: NSObject
// Address: 0x112b74f98

@interface SCDiscoverFeedEventsController

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDiscoverFeedEventsController initWithDiscoverFeedDataFetcher:cheetahInteractionHistoryManager:snapTokenProvider:requestManager:promotedStoriesLogger:storiesBlizzardLogger:registrationInfoProvider:grapheneRegistry:spectrumLogger:adConfigProvider:blizzardLogger:circumstanceEngine:performer:friendsFeedViewLifecycleListener:storiesConfigProvider:notificationPool:lensPlayTimeProvider:]
// Type encoding: @152@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144
// Implementation: 0x107bda6ac

// -[SCDiscoverFeedEventsController startSession]
// Type encoding: v16@0:8
// Implementation: 0x107bdaeec

// -[SCDiscoverFeedEventsController pageSessionId]
// Type encoding: @16@0:8
// Implementation: 0x107bdafdc

// -[SCDiscoverFeedEventsController itemSource]
// Type encoding: q16@0:8
// Implementation: 0x107bdb004

// -[SCDiscoverFeedEventsController triggeringItemId]
// Type encoding: @16@0:8
// Implementation: 0x107bdb00c

// -[SCDiscoverFeedEventsController notificationId]
// Type encoding: @16@0:8
// Implementation: 0x107bdb014

// -[SCDiscoverFeedEventsController friendServerRankingId]
// Type encoding: @16@0:8
// Implementation: 0x107bdb01c

// -[SCDiscoverFeedEventsController pageType]
// Type encoding: q16@0:8
// Implementation: 0x107bdb044

// -[SCDiscoverFeedEventsController feedType]
// Type encoding: @16@0:8
// Implementation: 0x107bdb04c

// -[SCDiscoverFeedEventsController itemViewingSessionDataProvider]
// Type encoding: @16@0:8
// Implementation: 0x107bdb074

// -[SCDiscoverFeedEventsController _initSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bdb09c

// -[SCDiscoverFeedEventsController _finishSession:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107bdb440

// -[SCDiscoverFeedEventsController didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107bdb66c

// -[SCDiscoverFeedEventsController _logEventWithEventName:identifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107bdbc94

// -[SCDiscoverFeedEventsController _handleFriendsFeedImpressionEvents:identifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107bdc190

// -[SCDiscoverFeedEventsController _updateLoggerInfoWithIdentifier:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107bdc414

// -[SCDiscoverFeedEventsController _pushPageInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bdfe58

// -[SCDiscoverFeedEventsController _popPageInfo]
// Type encoding: v16@0:8
// Implementation: 0x107bdff60

// -[SCDiscoverFeedEventsController _pageInfoFromData:]
// Type encoding: @24@0:8@16
// Implementation: 0x107be00c4

// -[SCDiscoverFeedEventsController _pageInfoDictionaryWithPageType:pageTypeSpecific:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x107be01e0

// -[SCDiscoverFeedEventsController _handlePageTypePushEventWithData:]
// Type encoding: v24@0:8@16
// Implementation: 0x107be02f4

// -[SCDiscoverFeedEventsController _handlePageTypePopEventWithData]
// Type encoding: v16@0:8
// Implementation: 0x107be0330

// -[SCDiscoverFeedEventsController _handleOpenEventWithIdentifier:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107be0334

// -[SCDiscoverFeedEventsController _shouldDedupFPOWithSamePageSessionIdWithPageType:]
// Type encoding: B24@0:8q16
// Implementation: 0x107be06f8

// -[SCDiscoverFeedEventsController _handleRefreshEventWithIdentifier:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107be0724

// -[SCDiscoverFeedEventsController _handleFeedItemLongImpressionEventWithIdentifier:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107be0890

// -[SCDiscoverFeedEventsController _handleDiscoverFeedItemImpressionEventWithIdentifier:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107be08a4

// -[SCDiscoverFeedEventsController _handlePageViewEventWithIdentifier:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107be08b8

// -[SCDiscoverFeedEventsController _handleFullscreenContentViewWithIdentifier:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107be0bf8

// -[SCDiscoverFeedEventsController _handlePageUpdateEventWithIdentifier:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107be0dc4

// -[SCDiscoverFeedEventsController _handleFeedViewDidPartiallyDisappearEventWithIdentifier:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107be0dd8

// -[SCDiscoverFeedEventsController _logFeedPageView:pageSessionId:bounceRateDict:chatInteractionDict:]
// Type encoding: v48@0:8q16@24@32@40
// Implementation: 0x107be0e90

// -[SCDiscoverFeedEventsController _isSameStoryAsItemViewingSession:]
// Type encoding: B24@0:8@16
// Implementation: 0x107be12f4

// -[SCDiscoverFeedEventsController _handleFeedItemActionWithIdentifier:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107be14fc

// -[SCDiscoverFeedEventsController _handleImpressionEventWithIdentifier:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107be260c

// -[SCDiscoverFeedEventsController _handleImpressionEndEventWithDate:extraData:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107be2db8

// -[SCDiscoverFeedEventsController _handleRerankingUpdateWithIdentifier:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107be32a0

// -[SCDiscoverFeedEventsController _handleContentCommentsActionEventWithIdentifier:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107be3974

// -[SCDiscoverFeedEventsController _handleContentCommentLongImpressionEventWithIdentifier:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107be3a8c

// -[SCDiscoverFeedEventsController _handleStoryFeedTileViewEventWithIdentifier:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107be3aa0

// -[SCDiscoverFeedEventsController _handleContentCommentsSnapReplyActionEventWithIdentifier:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107be3ab4

// -[SCDiscoverFeedEventsController _handleContentTooltipImpressionEventWithIdentifier:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107be3ac8

// -[SCDiscoverFeedEventsController _handleSpotlightPlaybackStartEventWithIdentifier:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107be3adc

// -[SCDiscoverFeedEventsController _handleNonFeedEntryPointPlaybackStartEventWithIdentifier:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107be3ae4

// -[SCDiscoverFeedEventsController _handleSuperFeedPlaybackStartEventWithIdentifier:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107be3aec

// -[SCDiscoverFeedEventsController _handleOperaSessionEventWithIdentifier:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107be3af4

// -[SCDiscoverFeedEventsController _handleFeedItemAnimationStarted:]
// Type encoding: v24@0:8@16
// Implementation: 0x107be3c44

// -[SCDiscoverFeedEventsController _promotedStoryWithEventData:]
// Type encoding: @24@0:8@16
// Implementation: 0x107be3c84

// -[SCDiscoverFeedEventsController _handleFeedItemAnimationCompleted:]
// Type encoding: v24@0:8@16
// Implementation: 0x107be3da0

// -[SCDiscoverFeedEventsController cheetahLoggingLongImpressionHelper:didReachThresholdForItems:date:extraData:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x107be3e74

// -[SCDiscoverFeedEventsController _updateLensDataForDiscoverStory:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107be5420

// -[SCDiscoverFeedEventsController discoverFeedRerankingManager:finishedRerankingWithData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107be5520

// -[SCDiscoverFeedEventsController discoverFeedScrollTracker:didEndScrollingWithData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107be557c

// -[SCDiscoverFeedEventsController _addBaseDataToMutableDict:addPageTypeParams:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107be55d0

// -[SCDiscoverFeedEventsController _addCameosDataToMutableDict:]
// Type encoding: v24@0:8@16
// Implementation: 0x107be5864

// -[SCDiscoverFeedEventsController _updateFriendDataIfNecessary:]
// Type encoding: v24@0:8@16
// Implementation: 0x107be5960

// -[SCDiscoverFeedEventsController _sendEventToLogger:data:addPageTypeParams:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x107be5ba8

// -[SCDiscoverFeedEventsController _updateFinalLoggingDestinationForEvent:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107be5e10

// -[SCDiscoverFeedEventsController _setPossibleLoggingDestinationsForDict:destinations:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107be5e4c

// -[SCDiscoverFeedEventsController _removeLoggingDestination:dict:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x107be5f18

// -[SCDiscoverFeedEventsController _shouldLogEvent:withData:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107be5fe0

// -[SCDiscoverFeedEventsController _updateFinalLoggingValues:]
// Type encoding: v24@0:8@16
// Implementation: 0x107be6078

// -[SCDiscoverFeedEventsController _logFeedItemViewingSessionWithIdentifier:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107be6110

// -[SCDiscoverFeedEventsController _updateLenseData:withSessionData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107be77a0

// -[SCDiscoverFeedEventsController _logFeedSubitemViewingSessionWithData:]
// Type encoding: v24@0:8@16
// Implementation: 0x107be7a1c

// -[SCDiscoverFeedEventsController _handleViewingSessionUpdateWithIdentifier:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107be8d80

// -[SCDiscoverFeedEventsController _resetViewingSessionInfo]
// Type encoding: v16@0:8
// Implementation: 0x107be9060

// -[SCDiscoverFeedEventsController _createItemViewingSessionWithData:]
// Type encoding: v24@0:8@16
// Implementation: 0x107be90a4

// -[SCDiscoverFeedEventsController _extractSectionInformation:]
// Type encoding: v24@0:8@16
// Implementation: 0x107be9b58

// -[SCDiscoverFeedEventsController _updateDictWithStoryLoggingInfo:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107be9d00

// -[SCDiscoverFeedEventsController _indexOfStoryWithDedupeFp:feedType:]
// Type encoding: q32@0:8Q16@24
// Implementation: 0x107beaa5c

// -[SCDiscoverFeedEventsController _logPromotedStoriesFeedItemActionIfNecessary:itemPos:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107beaafc

// -[SCDiscoverFeedEventsController _logPromotedStoriesImpressionIfNecessary:data:minimumVisibleFraction:itemPos:]
// Type encoding: v48@0:8@16@24d32q40
// Implementation: 0x107beab0c

// -[SCDiscoverFeedEventsController _startPromotedStoryViewThroughImpressionIfNecessary:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107beabb8

// -[SCDiscoverFeedEventsController _endPromotedStoryViewThroughImpressionIfNecessary:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107beabc0

// -[SCDiscoverFeedEventsController _userDidTakeScreenshot]
// Type encoding: v16@0:8
// Implementation: 0x107beabc8

// -[SCDiscoverFeedEventsController _userDidTakeScreenshotCorrectQueue]
// Type encoding: v16@0:8
// Implementation: 0x107beacac

// -[SCDiscoverFeedEventsController _reloadViewingSessionsWithData:]
// Type encoding: v24@0:8@16
// Implementation: 0x107beb0c8

// -[SCDiscoverFeedEventsController _logNavigatePastUpNext:identifier:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107beb1a0

// -[SCDiscoverFeedEventsController _applicationWillResignActive]
// Type encoding: v16@0:8
// Implementation: 0x107beb440

// -[SCDiscoverFeedEventsController _updateItemViewingSessionWithSubscribeSubitemsToSkip]
// Type encoding: v16@0:8
// Implementation: 0x107beb48c

// -[SCDiscoverFeedEventsController _handlePlaybackStallCountWithIdentifier:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107beb588

// -[SCDiscoverFeedEventsController _setFeedPageViewWithOpenTimestamp:sections:pageType:pageTypeSpecific:pageSessionId:]
// Type encoding: v56@0:8@16@24q32@40@48
// Implementation: 0x107beb6ec

// -[SCDiscoverFeedEventsController _sectionTypesToSCAFeedPageSectionString:]
// Type encoding: @24@0:8@16
// Implementation: 0x107beb9bc

// -[SCDiscoverFeedEventsController clearInteractionHistoryQualifiedSections]
// Type encoding: v16@0:8
// Implementation: 0x107bebafc

// -[SCDiscoverFeedEventsController _updateInteractionHistoryQualifiedSectionsWithFeedType:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bebb28

// -[SCDiscoverFeedEventsController _updateInteractionHistoryQualifiedSectionsToAll]
// Type encoding: v16@0:8
// Implementation: 0x107bebbe4

// -[SCDiscoverFeedEventsController _itemPosForStoryLoggingInfo:feedType:isRecommended:]
// Type encoding: q36@0:8@16@24B32
// Implementation: 0x107bebc54

// -[SCDiscoverFeedEventsController _incrementRerankingIdForSectionIfPossible:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bebd64

// -[SCDiscoverFeedEventsController _incrementRerankingIdForNonFriendSections]
// Type encoding: v16@0:8
// Implementation: 0x107bebe30

// -[SCDiscoverFeedEventsController _setUpFriendsFeedObservingEvents]
// Type encoding: v16@0:8
// Implementation: 0x107bebf54

// -[SCDiscoverFeedEventsController _handleFriendsFeedFeedPageEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bec0e4

// -[SCDiscoverFeedEventsController _logFeedPageOpenEventWithChatFeedSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bec17c

// -[SCDiscoverFeedEventsController _logFeedPageViewEventWithChatFeedSessionId:chatFeedLoggingDict:hasAdBillboard:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x107bec2f0

// -[SCDiscoverFeedEventsController _insertUpNextLoggingData:currentStoryLoggingInfo:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107bec4f4

// -[SCDiscoverFeedEventsController _insertUpNextStoryFeedItemSourceWithData:]
// Type encoding: q24@0:8@16
// Implementation: 0x107bec6bc

// -[SCDiscoverFeedEventsController _shouldAddTriggeringSection:]
// Type encoding: B24@0:8@16
// Implementation: 0x107bec82c

// -[SCDiscoverFeedEventsController _subscribeToOperaAnalyticsEvents]
// Type encoding: v16@0:8
// Implementation: 0x107bec8bc

// -[SCDiscoverFeedEventsController _handlePlaybackRateDidChange:]
// Type encoding: v24@0:8d16
// Implementation: 0x107becb54

// -[SCDiscoverFeedEventsController _handleOperaPlaybackEventId:isPlaying:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107becb5c

// -[SCDiscoverFeedEventsController _totalViewTimeForPageId:]
// Type encoding: d24@0:8@16
// Implementation: 0x107becc3c

// -[SCDiscoverFeedEventsController _subscribeToOperaPageVisibilityEvents]
// Type encoding: v16@0:8
// Implementation: 0x107becdf8

// -[SCDiscoverFeedEventsController _submitInternalRequestNotificationWithText:]
// Type encoding: v24@0:8@16
// Implementation: 0x107becdfc

// -[SCDiscoverFeedEventsController _presentStoriesRequestNotificationWithText:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bece00

// -[SCDiscoverFeedEventsController _addInFeedSurveyInfoToMutableDict:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bece60

// -[SCDiscoverFeedEventsController _includeInFeedSurveyDataIfAvailable:]
// Type encoding: v24@0:8@16
// Implementation: 0x107becfe0

// -[SCDiscoverFeedEventsController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107bed198

@end
