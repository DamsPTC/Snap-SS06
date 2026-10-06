// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLongformShowOperaSession
// Superclass: NSObject
// Address: 0x112b6be48

@interface SCLongformShowOperaSession

// Property: operaControlling; attributes: T@"<SCOperaControlling>",W,N,V_operaControlling
// Property: playlistItemController; attributes: T@"<SCOperaPlaylistItemController>",W,N,V_playlistItemController
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: sessionID; attributes: T@"NSString",R,C,N,V_sessionID
// Property: loggingContext; attributes: T@"SCDiscoverOperaSessionLoggingContext",R,N,V_loggingContext
// Property: actionMenuEntryEvent; attributes: Tq,R,N,V_actionMenuEntryEvent
// Property: sessionTimeViewedSec; attributes: Td,R,N,V_sessionTimeViewedSec
// Property: topSnapsViewed; attributes: T@"NSSet",R,N,V_topSnapsViewed
// Property: channelIndex; attributes: TQ,R,N,V_channelIndex
// Property: numSnaps; attributes: TQ,R,N,V_numSnaps
// Property: sortOrderId; attributes: T@"NSString",R,C,N,V_sortOrderId
// Property: context; attributes: TQ,R,N,V_context
// Property: deepLinkId; attributes: T@"NSString",R,C,N,V_deepLinkId
// Property: editionVersion; attributes: T@"NSString",R,C,N,V_editionVersion
// Property: editionId; attributes: T@"NSString",R,C,N,V_editionId
// Property: publisherId; attributes: T@"NSString",R,C,N,V_publisherId
// Property: subtitlesLocale; attributes: T@"NSString",R,C,N
// Property: hostUserId; attributes: T@"NSString",R,C,N,V_hostUserId
// Property: mediaPlaybackSessionId; attributes: T@"NSString",R,C,N,V_mediaPlaybackSessionId
// Property: isPayToPromote; attributes: TB,R,N,V_isPayToPromote

// -[SCLongformShowOperaSession addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a46f58

// -[SCLongformShowOperaSession removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a46f60

// -[SCLongformShowOperaSession initWithUserSession:storySessionId:viewLocation:readReceiptCoordinator:bitmojiImageFetcher:notificationsPermissionRequester:notificationOSSettingsRetriever:impalaProfilePresentHandler:circumstanceEngine:legacyStoriesTooltipsService:discoverBlizzardLogger:lazyDiscoverFeedEventsController:creatorSettingsFetcher:creatorSettingsMutator:creatorSettingsTracker:lazyDiscoverFeedDataFetcher:grapheneRegistry:offPlatformLinkGenerationService:grapheneMetricsEmitter:deeplinkSendToScopeExposer:sendToScopeExposer:sendToScopeLauncher:sendToScopeServices:imageDownloader:lazyUserTrackedLogger:boostCoordinator:subscriptionWorkflowStarter:interactionHistoryManager:premiumStoryShareSender:premiumStoryConversationResolver:offPlatformShareServices:shareNotificationService:businessProfileScopeExposer:triggeringSection:storiesConfigProvider:]
// Type encoding: @296@0:8@16@24q32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256@264@272q280@288
// Implementation: 0x107a46f68

// -[SCLongformShowOperaSession setEventAnnouncing:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a47874

// -[SCLongformShowOperaSession setOperaControlling:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a478ec

// -[SCLongformShowOperaSession userDidTakeScreenshot]
// Type encoding: v16@0:8
// Implementation: 0x107a47960

// -[SCLongformShowOperaSession _teardown]
// Type encoding: v16@0:8
// Implementation: 0x107a47968

// -[SCLongformShowOperaSession registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x107a479a8

// -[SCLongformShowOperaSession operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107a47eac

// -[SCLongformShowOperaSession _fetchThumbnailUrlFromPage:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a490a0

// -[SCLongformShowOperaSession _updateShouldShowTapTooltipsForCurrentPage:currentPageId:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x107a49214

// -[SCLongformShowOperaSession _updateViewLocationIfNeeded:withPage:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x107a4935c

// -[SCLongformShowOperaSession _reportLongFormStoryWatchStateWithPage:params:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a49400

// -[SCLongformShowOperaSession extraPropertiesForDataModel:item:baseOperaPage:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107a49f4c

// -[SCLongformShowOperaSession _startEditionViewIfNecessaryForPage:params:event:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107a4a0b8

// -[SCLongformShowOperaSession _startEditionViewIfNecessaryDeprecatedForPage:params:event:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107a4a384

// -[SCLongformShowOperaSession _sendViewLocationUpdateIfNeeded:withPage:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x107a4a5f4

// -[SCLongformShowOperaSession _startEditionViewForPage:show:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a4a70c

// -[SCLongformShowOperaSession _handleLongformPlaybackEventForPage:params:event:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107a4aa80

// -[SCLongformShowOperaSession _endEditionViewForPage:params:event:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107a4adac

// -[SCLongformShowOperaSession _endSnapViewForPage:params:event:currentShow:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x107a4af08

// -[SCLongformShowOperaSession currentDSnapId]
// Type encoding: @16@0:8
// Implementation: 0x107a4b354

// -[SCLongformShowOperaSession currentLongformVideoId]
// Type encoding: @16@0:8
// Implementation: 0x107a4b35c

// -[SCLongformShowOperaSession currentSnapIndexPos]
// Type encoding: Q16@0:8
// Implementation: 0x107a4b3b0

// -[SCLongformShowOperaSession hasBeenFullyViewed]
// Type encoding: B16@0:8
// Implementation: 0x107a4b3b8

// -[SCLongformShowOperaSession hasEdition]
// Type encoding: B16@0:8
// Implementation: 0x107a4b3d0

// -[SCLongformShowOperaSession indexOfChunk:]
// Type encoding: Q24@0:8@16
// Implementation: 0x107a4b3d8

// -[SCLongformShowOperaSession isSubscribed]
// Type encoding: B16@0:8
// Implementation: 0x107a4b3e0

// -[SCLongformShowOperaSession isViewingAd]
// Type encoding: B16@0:8
// Implementation: 0x107a4b490

// -[SCLongformShowOperaSession isViewingLongform]
// Type encoding: B16@0:8
// Implementation: 0x107a4b498

// -[SCLongformShowOperaSession isViewingLongformVideo]
// Type encoding: B16@0:8
// Implementation: 0x107a4b4e8

// -[SCLongformShowOperaSession isViewingRemoteWebpage]
// Type encoding: B16@0:8
// Implementation: 0x107a4b538

// -[SCLongformShowOperaSession isViewingStore]
// Type encoding: B16@0:8
// Implementation: 0x107a4b588

// -[SCLongformShowOperaSession isViewingSubscriptionDSnap]
// Type encoding: B16@0:8
// Implementation: 0x107a4b5d8

// -[SCLongformShowOperaSession isViewingSubscriptionLongform]
// Type encoding: B16@0:8
// Implementation: 0x107a4b5e0

// -[SCLongformShowOperaSession isViewingTopSnap]
// Type encoding: B16@0:8
// Implementation: 0x107a4b630

// -[SCLongformShowOperaSession isViewingTopSnapImage]
// Type encoding: B16@0:8
// Implementation: 0x107a4b6c4

// -[SCLongformShowOperaSession isViewingContentTopSnapRemoteWebpage]
// Type encoding: B16@0:8
// Implementation: 0x107a4b714

// -[SCLongformShowOperaSession isViewingTopSnapVideo]
// Type encoding: B16@0:8
// Implementation: 0x107a4b764

// -[SCLongformShowOperaSession isViewingShow]
// Type encoding: B16@0:8
// Implementation: 0x107a4b7b4

// -[SCLongformShowOperaSession areSubtitlesAvailable]
// Type encoding: B16@0:8
// Implementation: 0x107a4b7bc

// -[SCLongformShowOperaSession isShownWithSubtitles]
// Type encoding: B16@0:8
// Implementation: 0x107a4b7c4

// -[SCLongformShowOperaSession subtitlesLocale]
// Type encoding: @16@0:8
// Implementation: 0x107a4b7cc

// -[SCLongformShowOperaSession isPromoted]
// Type encoding: B16@0:8
// Implementation: 0x107a4b7d4

// -[SCLongformShowOperaSession isExplorationStory]
// Type encoding: B16@0:8
// Implementation: 0x107a4b7dc

// -[SCLongformShowOperaSession entryEvent]
// Type encoding: q16@0:8
// Implementation: 0x107a4b7e4

// -[SCLongformShowOperaSession exitIntent]
// Type encoding: q16@0:8
// Implementation: 0x107a4b80c

// -[SCLongformShowOperaSession entryIntent]
// Type encoding: q16@0:8
// Implementation: 0x107a4b898

// -[SCLongformShowOperaSession storyTypeSpecific]
// Type encoding: q16@0:8
// Implementation: 0x107a4b92c

// -[SCLongformShowOperaSession operaNavigationType]
// Type encoding: q16@0:8
// Implementation: 0x107a4b934

// -[SCLongformShowOperaSession lastInteraction]
// Type encoding: @16@0:8
// Implementation: 0x107a4b990

// -[SCLongformShowOperaSession numLongformViewed]
// Type encoding: Q16@0:8
// Implementation: 0x107a4ba18

// -[SCLongformShowOperaSession numTopSnapsViewed]
// Type encoding: Q16@0:8
// Implementation: 0x107a4ba20

// -[SCLongformShowOperaSession pageTimeViewedSec]
// Type encoding: d16@0:8
// Implementation: 0x107a4ba28

// -[SCLongformShowOperaSession sessionTimeViewedSansLoadingTimeSec]
// Type encoding: d16@0:8
// Implementation: 0x107a4ba30

// -[SCLongformShowOperaSession bloopsMetadata]
// Type encoding: @16@0:8
// Implementation: 0x107a4ba6c

// -[SCLongformShowOperaSession currentChapterIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x107a4ba74

// -[SCLongformShowOperaSession lastPositionMs]
// Type encoding: @16@0:8
// Implementation: 0x107a4ba7c

// -[SCLongformShowOperaSession lastWatchedEditionId]
// Type encoding: @16@0:8
// Implementation: 0x107a4baa4

// -[SCLongformShowOperaSession shouldGeneratePreviewForShowWithId:]
// Type encoding: B24@0:8@16
// Implementation: 0x107a4bacc

// -[SCLongformShowOperaSession _displayShowProfileForPage:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a4bae8

// -[SCLongformShowOperaSession _editionDeeplinkURLForPage:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a4be90

// -[SCLongformShowOperaSession _presentScreenshotShareUpsellForPage:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a4c04c

// -[SCLongformShowOperaSession _screenshotSharingConfigurationForPage:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a4c1e8

// -[SCLongformShowOperaSession _sendShowProfileForPage:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a4c2a0

// -[SCLongformShowOperaSession _handleCopyLinkForPage:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a4c6e8

// -[SCLongformShowOperaSession _updateSubscribeStatusForPage:params:show:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107a4c8b4

// -[SCLongformShowOperaSession _updateFavoriteStatusForPage:params:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a4cbe4

// -[SCLongformShowOperaSession _updateNotificationStatusWithPage:params:show:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107a4cd48

// -[SCLongformShowOperaSession _announceFeedItemActionEventForShowIfNecessary:actionType:interactionContext:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x107a4d0b0

// -[SCLongformShowOperaSession _logStoryFeedItemActionForShow:params:event:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107a4d23c

// -[SCLongformShowOperaSession _longformShowOperaDataModelForPage:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a4d4b4

// -[SCLongformShowOperaSession _updatePlaylistItemIfNecessaryForCurrentChapter:previousChapter:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a4d594

// -[SCLongformShowOperaSession _shouldUpdatePlaylistItemForCurrentChapter:previousChapter:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107a4d668

// -[SCLongformShowOperaSession didDismissWithRecipientsCount:groupsCount:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x107a4d900

// -[SCLongformShowOperaSession didSendWithSelectionState:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a4db5c

// -[SCLongformShowOperaSession didDismissWithSelectedItems:sendToDismissSource:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x107a4de34

// -[SCLongformShowOperaSession _sendToPreviewConfigurationWithThumbnailUrl:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107a4dee8

// -[SCLongformShowOperaSession _detachSendToUIWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107a4e264

// -[SCLongformShowOperaSession _didDismissSendViewController]
// Type encoding: v16@0:8
// Implementation: 0x107a4e388

// -[SCLongformShowOperaSession _sendStoryShareToSelectedItems:additionalText:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a4e3e0

// -[SCLongformShowOperaSession _handleResolvedConversations:platformAnalytics:recipients:additionalText:completionQueue:completionHandler:]
// Type encoding: v64@0:8@16@24@32@40@48@?56
// Implementation: 0x107a4ea44

// -[SCLongformShowOperaSession _handleStoryShareSendResult:]
// Type encoding: v24@0:8q16
// Implementation: 0x107a4eb64

// -[SCLongformShowOperaSession _resumeOpera]
// Type encoding: v16@0:8
// Implementation: 0x107a4ec1c

// -[SCLongformShowOperaSession _pauseOpera]
// Type encoding: v16@0:8
// Implementation: 0x107a4ecac

// -[SCLongformShowOperaSession _logAffiliateWebpageImpressionWithIsTopSnap:currentShow:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x107a4ed28

// -[SCLongformShowOperaSession _handleConfirmationUnsubscribeAction:params:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a4ee28

// -[SCLongformShowOperaSession _subscribeToLongform:show:interactionContext:shouldLogSubscribeAction:currentItemPageId:]
// Type encoding: v48@0:8B16@20q28B36@40
// Implementation: 0x107a4f180

// -[SCLongformShowOperaSession _updatePlaylistItemForItemPageId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a4f4c8

// -[SCLongformShowOperaSession _sendToShareSheetConfigurationWithDeeplinkUrl:sendToSessionId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107a4f568

// -[SCLongformShowOperaSession handleShareDestination:standardExternalContentShareScope:]
// Type encoding: B32@0:8q16@24
// Implementation: 0x107a4f730

// -[SCLongformShowOperaSession shareSheetDismissedWithShareDestination:]
// Type encoding: v24@0:8q16
// Implementation: 0x107a4f738

// -[SCLongformShowOperaSession showProfilePresenterDidFinishPresenting:profileViewController:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a4f73c

// -[SCLongformShowOperaSession businessProfilesPresenterScopeWillDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a4f740

// -[SCLongformShowOperaSession _subscribeToOperaAnalyticsEvents]
// Type encoding: v16@0:8
// Implementation: 0x107a4f760

// -[SCLongformShowOperaSession _handleOperaPlaybackEventPageId:isPlaying:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107a4f990

// -[SCLongformShowOperaSession _totalViewTimeForPageId:]
// Type encoding: d24@0:8@16
// Implementation: 0x107a4fa58

// -[SCLongformShowOperaSession sessionID]
// Type encoding: @16@0:8
// Implementation: 0x107a4fc14

// -[SCLongformShowOperaSession loggingContext]
// Type encoding: @16@0:8
// Implementation: 0x107a4fc1c

// -[SCLongformShowOperaSession actionMenuEntryEvent]
// Type encoding: q16@0:8
// Implementation: 0x107a4fc24

// -[SCLongformShowOperaSession sessionTimeViewedSec]
// Type encoding: d16@0:8
// Implementation: 0x107a4fc2c

// -[SCLongformShowOperaSession topSnapsViewed]
// Type encoding: @16@0:8
// Implementation: 0x107a4fc34

// -[SCLongformShowOperaSession channelIndex]
// Type encoding: Q16@0:8
// Implementation: 0x107a4fc3c

// -[SCLongformShowOperaSession numSnaps]
// Type encoding: Q16@0:8
// Implementation: 0x107a4fc44

// -[SCLongformShowOperaSession sortOrderId]
// Type encoding: @16@0:8
// Implementation: 0x107a4fc4c

// -[SCLongformShowOperaSession context]
// Type encoding: Q16@0:8
// Implementation: 0x107a4fc54

// -[SCLongformShowOperaSession deepLinkId]
// Type encoding: @16@0:8
// Implementation: 0x107a4fc5c

// -[SCLongformShowOperaSession editionVersion]
// Type encoding: @16@0:8
// Implementation: 0x107a4fc64

// -[SCLongformShowOperaSession editionId]
// Type encoding: @16@0:8
// Implementation: 0x107a4fc6c

// -[SCLongformShowOperaSession publisherId]
// Type encoding: @16@0:8
// Implementation: 0x107a4fc74

// -[SCLongformShowOperaSession isPayToPromote]
// Type encoding: B16@0:8
// Implementation: 0x107a4fc7c

// -[SCLongformShowOperaSession hostUserId]
// Type encoding: @16@0:8
// Implementation: 0x107a4fc84

// -[SCLongformShowOperaSession mediaPlaybackSessionId]
// Type encoding: @16@0:8
// Implementation: 0x107a4fc8c

// -[SCLongformShowOperaSession operaControlling]
// Type encoding: @16@0:8
// Implementation: 0x107a4fc94

// -[SCLongformShowOperaSession playlistItemController]
// Type encoding: @16@0:8
// Implementation: 0x107a4fcac

// -[SCLongformShowOperaSession setPlaylistItemController:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a4fcc4

// -[SCLongformShowOperaSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107a4fcd0

// +[SCLongformShowOperaSession announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x107a46f4c

@end
