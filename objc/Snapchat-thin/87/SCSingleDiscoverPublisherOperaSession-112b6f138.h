// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSingleDiscoverPublisherOperaSession
// Superclass: NSObject
// Address: 0x112b6f138

@interface SCSingleDiscoverPublisherOperaSession

// Property: storyPlayableDataModel; attributes: T@"SCDiscoverPublisherStoryPlayableDataModel",R,N,V_storyPlayableDataModel
// Property: snapPlayableDataModel; attributes: T@"SCDiscoverPublisherSnapPlayableDataModel",R,N,V_snapPlayableDataModel
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: sessionID; attributes: T@"NSString",R,C,N,V_sessionID
// Property: loggingContext; attributes: T@"SCDiscoverOperaSessionLoggingContext",R,N,V_loggingContext
// Property: actionMenuEntryEvent; attributes: Tq,R,N
// Property: sessionTimeViewedSec; attributes: Td,R,N,V_sessionTimeViewedSec
// Property: topSnapsViewed; attributes: T@"NSSet",R,N,V_topSnapsViewed
// Property: channelIndex; attributes: TQ,R,N,V_channelIndex
// Property: numSnaps; attributes: TQ,R,N
// Property: sortOrderId; attributes: T@"NSString",R,C,N,V_sortOrderId
// Property: context; attributes: TQ,R,N,V_context
// Property: deepLinkId; attributes: T@"NSString",R,C,N,V_deepLinkId
// Property: editionVersion; attributes: T@"NSString",R,C,N
// Property: editionId; attributes: T@"NSString",R,C,N
// Property: publisherId; attributes: T@"NSString",R,C,N
// Property: subtitlesLocale; attributes: T@"NSString",R,C,N,V_subtitlesLocale
// Property: hostUserId; attributes: T@"NSString",R,C,N,V_hostUserId
// Property: mediaPlaybackSessionId; attributes: T@"NSString",R,C,N,V_mediaPlaybackSessionId
// Property: isPayToPromote; attributes: TB,R,N,V_isPayToPromote

// -[SCSingleDiscoverPublisherOperaSession addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107acae50

// -[SCSingleDiscoverPublisherOperaSession removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107acae58

// -[SCSingleDiscoverPublisherOperaSession didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107acae60

// -[SCSingleDiscoverPublisherOperaSession initWithOperaEventAnnouncing:viewContext:storyPlayableDataModel:userSession:operaControlling:playlistItemController:loggingContext:subscriptionStore:snapDocConfigurer:publisherPagePropertiesManager:cachedViewStateProvider:legacyStoriesTooltipsService:readReceiptCoordinator:videoFilterAdaptor:permissionRequester:notificationOSSettingsRetriever:impalaProfilePresentHandler:storiesGrapheneMetricsEmitter:previewFilterDataProviderCreator:networkConnectivityMonitor:notificationPool:circumstanceEngine:imageDownloader:creatorSettingsMutator:creatorSettingsFetcher:creatorSettingsTracker:lazyDiscoverFeedEventsLogger:lazyDiscoverFeedInteractionHistoryManager:sendToScopeLauncher:lazyDiscoverFeedDataFetcher:lazyDiscoverFeedDataMutator:bitmojiImageFetcher:discoverFeedNotificationOptInRequestManager:discoverBlizzardLogger:offPlatformLinkGenerationService:snapVideoFilterFactory:previewURLVideoProvider:streamingMediaFetcher:externalLinkSendingService:lazyUserTrackedLogger:grapheneRegistry:boostCoordinator:subscriptionWorkflowStarter:offPlatformShareServices:snapDocEditorFactory:previewSnapSenderFactory:triggeringSection:storiesConfigProvider:]
// Type encoding: @400@0:8@16Q24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256@264@272@280@288@296@304@312@320@328@336@344@352@360@368@376q384@392
// Implementation: 0x107acae68

// -[SCSingleDiscoverPublisherOperaSession viewWillEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x107acba80

// -[SCSingleDiscoverPublisherOperaSession beginViewingEdition:]
// Type encoding: v24@0:8@16
// Implementation: 0x107acba90

// -[SCSingleDiscoverPublisherOperaSession endSession]
// Type encoding: v16@0:8
// Implementation: 0x107acbc20

// -[SCSingleDiscoverPublisherOperaSession teardown]
// Type encoding: v16@0:8
// Implementation: 0x107acbdb0

// -[SCSingleDiscoverPublisherOperaSession extraPropertiesForDataModel:item:baseOperaPage:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107acbdb4

// -[SCSingleDiscoverPublisherOperaSession _addNotifications]
// Type encoding: v16@0:8
// Implementation: 0x107acc0bc

// -[SCSingleDiscoverPublisherOperaSession userDidTakeScreenshot]
// Type encoding: v16@0:8
// Implementation: 0x107acc114

// -[SCSingleDiscoverPublisherOperaSession _fetchMediaIfNecessaryFromConnectivityUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107acc140

// -[SCSingleDiscoverPublisherOperaSession registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x107acc18c

// -[SCSingleDiscoverPublisherOperaSession _shouldHandleEvent:page:params:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x107acc480

// -[SCSingleDiscoverPublisherOperaSession operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107acc5e8

// -[SCSingleDiscoverPublisherOperaSession _showTapTooltipsForCurrentPage:]
// Type encoding: v20@0:8B16
// Implementation: 0x107acd25c

// -[SCSingleDiscoverPublisherOperaSession _fetchMediaIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x107acd264

// -[SCSingleDiscoverPublisherOperaSession _setupSubSessions]
// Type encoding: v16@0:8
// Implementation: 0x107acd370

// -[SCSingleDiscoverPublisherOperaSession _startViewWithPage:logWaitTime:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107acd778

// -[SCSingleDiscoverPublisherOperaSession _endViewWithPage:params:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107acdaa8

// -[SCSingleDiscoverPublisherOperaSession _reportPremiumStoryReadReceiptWithPage:params:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107acdf18

// -[SCSingleDiscoverPublisherOperaSession _reportCurationSnapReadReceitptIfNecessaryWithAction:]
// Type encoding: v24@0:8q16
// Implementation: 0x107ace588

// -[SCSingleDiscoverPublisherOperaSession _handleOpenViewEventWithPage:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ace6a4

// -[SCSingleDiscoverPublisherOperaSession _startSessionTimer]
// Type encoding: v16@0:8
// Implementation: 0x107ace84c

// -[SCSingleDiscoverPublisherOperaSession _updateRequestManagerContexts]
// Type encoding: v16@0:8
// Implementation: 0x107ace87c

// -[SCSingleDiscoverPublisherOperaSession _updateCurrentPlaylistItem]
// Type encoding: v16@0:8
// Implementation: 0x107ace9e4

// -[SCSingleDiscoverPublisherOperaSession _logAffiliateWebpageImpressionWithIsTopSnap:]
// Type encoding: v20@0:8B16
// Implementation: 0x107acea98

// -[SCSingleDiscoverPublisherOperaSession currentLongformVideoId]
// Type encoding: @16@0:8
// Implementation: 0x107aceb94

// -[SCSingleDiscoverPublisherOperaSession currentDSnapId]
// Type encoding: @16@0:8
// Implementation: 0x107acebe8

// -[SCSingleDiscoverPublisherOperaSession pageTimeViewedSec]
// Type encoding: d16@0:8
// Implementation: 0x107acebf0

// -[SCSingleDiscoverPublisherOperaSession sessionTimeViewedSansLoadingTimeSec]
// Type encoding: d16@0:8
// Implementation: 0x107acebf8

// -[SCSingleDiscoverPublisherOperaSession numTopSnapsViewed]
// Type encoding: Q16@0:8
// Implementation: 0x107acec34

// -[SCSingleDiscoverPublisherOperaSession currentSnapIndexPos]
// Type encoding: Q16@0:8
// Implementation: 0x107acec3c

// -[SCSingleDiscoverPublisherOperaSession lastInteraction]
// Type encoding: @16@0:8
// Implementation: 0x107acec84

// -[SCSingleDiscoverPublisherOperaSession numLongformViewed]
// Type encoding: Q16@0:8
// Implementation: 0x107aced10

// -[SCSingleDiscoverPublisherOperaSession indexOfChunk:]
// Type encoding: Q24@0:8@16
// Implementation: 0x107aced18

// -[SCSingleDiscoverPublisherOperaSession isViewingTopSnap]
// Type encoding: B16@0:8
// Implementation: 0x107aced7c

// -[SCSingleDiscoverPublisherOperaSession isViewingTopSnapImage]
// Type encoding: B16@0:8
// Implementation: 0x107aced84

// -[SCSingleDiscoverPublisherOperaSession isViewingTopSnapVideo]
// Type encoding: B16@0:8
// Implementation: 0x107acedd4

// -[SCSingleDiscoverPublisherOperaSession isViewingLongform]
// Type encoding: B16@0:8
// Implementation: 0x107acee24

// -[SCSingleDiscoverPublisherOperaSession isViewingLongformVideo]
// Type encoding: B16@0:8
// Implementation: 0x107acee74

// -[SCSingleDiscoverPublisherOperaSession isViewingRemoteWebpage]
// Type encoding: B16@0:8
// Implementation: 0x107aceec4

// -[SCSingleDiscoverPublisherOperaSession isViewingContentTopSnapRemoteWebpage]
// Type encoding: B16@0:8
// Implementation: 0x107acef14

// -[SCSingleDiscoverPublisherOperaSession isViewingStore]
// Type encoding: B16@0:8
// Implementation: 0x107acef64

// -[SCSingleDiscoverPublisherOperaSession isViewingSubscriptionLongform]
// Type encoding: B16@0:8
// Implementation: 0x107acefb4

// -[SCSingleDiscoverPublisherOperaSession isViewingAd]
// Type encoding: B16@0:8
// Implementation: 0x107acf004

// -[SCSingleDiscoverPublisherOperaSession isViewingSubscriptionDSnap]
// Type encoding: B16@0:8
// Implementation: 0x107acf024

// -[SCSingleDiscoverPublisherOperaSession isViewingShow]
// Type encoding: B16@0:8
// Implementation: 0x107acf084

// -[SCSingleDiscoverPublisherOperaSession hasBeenFullyViewed]
// Type encoding: B16@0:8
// Implementation: 0x107acf08c

// -[SCSingleDiscoverPublisherOperaSession isSubscribed]
// Type encoding: B16@0:8
// Implementation: 0x107acf550

// -[SCSingleDiscoverPublisherOperaSession hasEdition]
// Type encoding: B16@0:8
// Implementation: 0x107acf5ac

// -[SCSingleDiscoverPublisherOperaSession areSubtitlesAvailable]
// Type encoding: B16@0:8
// Implementation: 0x107acf5bc

// -[SCSingleDiscoverPublisherOperaSession isShownWithSubtitles]
// Type encoding: B16@0:8
// Implementation: 0x107acf5c4

// -[SCSingleDiscoverPublisherOperaSession isPromoted]
// Type encoding: B16@0:8
// Implementation: 0x107acf5cc

// -[SCSingleDiscoverPublisherOperaSession isExplorationStory]
// Type encoding: B16@0:8
// Implementation: 0x107acf5d4

// -[SCSingleDiscoverPublisherOperaSession entryEvent]
// Type encoding: q16@0:8
// Implementation: 0x107acf5dc

// -[SCSingleDiscoverPublisherOperaSession entryIntent]
// Type encoding: q16@0:8
// Implementation: 0x107acf604

// -[SCSingleDiscoverPublisherOperaSession exitIntent]
// Type encoding: q16@0:8
// Implementation: 0x107acf698

// -[SCSingleDiscoverPublisherOperaSession storyTypeSpecific]
// Type encoding: q16@0:8
// Implementation: 0x107acf74c

// -[SCSingleDiscoverPublisherOperaSession operaNavigationType]
// Type encoding: q16@0:8
// Implementation: 0x107acf754

// -[SCSingleDiscoverPublisherOperaSession bloopsMetadata]
// Type encoding: @16@0:8
// Implementation: 0x107acf7b0

// -[SCSingleDiscoverPublisherOperaSession actionMenuEntryEvent]
// Type encoding: q16@0:8
// Implementation: 0x107acf7b8

// -[SCSingleDiscoverPublisherOperaSession editionVersion]
// Type encoding: @16@0:8
// Implementation: 0x107acf7c0

// -[SCSingleDiscoverPublisherOperaSession editionId]
// Type encoding: @16@0:8
// Implementation: 0x107acf7c8

// -[SCSingleDiscoverPublisherOperaSession publisherId]
// Type encoding: @16@0:8
// Implementation: 0x107acf7d0

// -[SCSingleDiscoverPublisherOperaSession numSnaps]
// Type encoding: Q16@0:8
// Implementation: 0x107acf7d8

// -[SCSingleDiscoverPublisherOperaSession _subscribeToOperaAnalyticsEvents]
// Type encoding: v16@0:8
// Implementation: 0x107acf818

// -[SCSingleDiscoverPublisherOperaSession _handleOperaPlaybackEventPageId:isPlaying:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107acfa48

// -[SCSingleDiscoverPublisherOperaSession _totalViewTimeForPageId:]
// Type encoding: d24@0:8@16
// Implementation: 0x107acfb10

// -[SCSingleDiscoverPublisherOperaSession sessionID]
// Type encoding: @16@0:8
// Implementation: 0x107acfccc

// -[SCSingleDiscoverPublisherOperaSession loggingContext]
// Type encoding: @16@0:8
// Implementation: 0x107acfcd4

// -[SCSingleDiscoverPublisherOperaSession sessionTimeViewedSec]
// Type encoding: d16@0:8
// Implementation: 0x107acfcdc

// -[SCSingleDiscoverPublisherOperaSession channelIndex]
// Type encoding: Q16@0:8
// Implementation: 0x107acfce4

// -[SCSingleDiscoverPublisherOperaSession sortOrderId]
// Type encoding: @16@0:8
// Implementation: 0x107acfcec

// -[SCSingleDiscoverPublisherOperaSession context]
// Type encoding: Q16@0:8
// Implementation: 0x107acfcf4

// -[SCSingleDiscoverPublisherOperaSession deepLinkId]
// Type encoding: @16@0:8
// Implementation: 0x107acfcfc

// -[SCSingleDiscoverPublisherOperaSession topSnapsViewed]
// Type encoding: @16@0:8
// Implementation: 0x107acfd04

// -[SCSingleDiscoverPublisherOperaSession subtitlesLocale]
// Type encoding: @16@0:8
// Implementation: 0x107acfd0c

// -[SCSingleDiscoverPublisherOperaSession isPayToPromote]
// Type encoding: B16@0:8
// Implementation: 0x107acfd14

// -[SCSingleDiscoverPublisherOperaSession hostUserId]
// Type encoding: @16@0:8
// Implementation: 0x107acfd1c

// -[SCSingleDiscoverPublisherOperaSession mediaPlaybackSessionId]
// Type encoding: @16@0:8
// Implementation: 0x107acfd24

// -[SCSingleDiscoverPublisherOperaSession storyPlayableDataModel]
// Type encoding: @16@0:8
// Implementation: 0x107acfd2c

// -[SCSingleDiscoverPublisherOperaSession snapPlayableDataModel]
// Type encoding: @16@0:8
// Implementation: 0x107acfd34

// -[SCSingleDiscoverPublisherOperaSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107acfd3c

// +[SCSingleDiscoverPublisherOperaSession announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x107acae44

@end
