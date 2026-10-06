// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverSharingSession
// Superclass: NSObject
// Address: 0x112b6f098

@interface SCDiscoverSharingSession

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: actionMenuEntryEvent; attributes: Tq,R,N,V_actionMenuEntryEvent
// Property: state; attributes: Tq,R,N
// Property: mediaPlaybackSessionId; attributes: T@"NSString",C,N,V_mediaPlaybackSessionId

// -[SCDiscoverSharingSession addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ac47f4

// -[SCDiscoverSharingSession removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ac47fc

// -[SCDiscoverSharingSession initWithStoryPlayableDataModel:userSession:operaControlling:playlistItemController:loggingContext:logger:videoFilterAdaptor:permissionRequester:notificationOSSettingsRetriever:impalaProfilePresentHandler:previewFilterDataProviderCreator:operaEventAnnouncing:notificationPool:viewLocation:imageDownloader:creatorSettingsMutator:creatorSettingsFetcher:creatorSettingsTracker:lazyDiscoverFeedEventsLogger:lazyDiscoverFeedInteractionHistoryManager:sendToScopeLauncher:lazyDiscoverFeedDataFetcher:lazyDiscoverFeedDataMutator:bitmojiImageFetcher:discoverFeedNotificationOptInRequestManager:offPlatformLinkGenerationService:snapVideoFilterFactory:previewURLVideoProvider:streamingMediaFetcher:circumstanceEngine:externalLinkSendingService:grapheneRegistry:boostCoordinator:subscriptionWorkflowStarter:offPlatformShareServices:storyViewingSessionId:snapDocEditorFactory:previewSnapSenderFactory:triggeringSection:storiesConfigProvider:imageFetchingService:]
// Type encoding: @344@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112q120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256@264@272@280@288@296@304@312q320@328@336
// Implementation: 0x107ac4804

// -[SCDiscoverSharingSession state]
// Type encoding: q16@0:8
// Implementation: 0x107ac5010

// -[SCDiscoverSharingSession registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x107ac5018

// -[SCDiscoverSharingSession operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107ac530c

// -[SCDiscoverSharingSession _handleSubscribeButtonPressedWithPage:params:interactionContext:shouldLogSubscribeEvent:]
// Type encoding: v44@0:8@16@24q32B40
// Implementation: 0x107ac6034

// -[SCDiscoverSharingSession _handleSubscribeButtonPressedWithStory:shouldSubscribe:shouldLogSubscribeEvent:interactionContext:currentItemPageId:]
// Type encoding: v48@0:8@16B24B28q32@40
// Implementation: 0x107ac6334

// -[SCDiscoverSharingSession _updateFavoriteStatusForPage:params:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107ac6638

// -[SCDiscoverSharingSession _handleNotificationOptInWithPage:params:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107ac67b8

// -[SCDiscoverSharingSession _handleNotificationOptInWithStory:optingIn:page:interactionContext:]
// Type encoding: v44@0:8@16B24@28q36
// Implementation: 0x107ac6ac8

// -[SCDiscoverSharingSession _denySharingWithPage:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ac6df0

// -[SCDiscoverSharingSession _setupShareControllerWithPage:params:zoomIn:asUpdateListener:]
// Type encoding: v40@0:8@16@24B32B36
// Implementation: 0x107ac70f8

// -[SCDiscoverSharingSession _handleCopyLinkForPage:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ac7750

// -[SCDiscoverSharingSession shareWithShareableMedias:touchOrigin:shareFrameMedia:linkToLongform:page:asUpdateListener:]
// Type encoding: v64@0:8@16{CGPoint=dd}24@40B48@52B60
// Implementation: 0x107ac7ae8

// -[SCDiscoverSharingSession shareControllerWithDSnapID:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ac8554

// -[SCDiscoverSharingSession shareControllerDidBeginSharing:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ac8b18

// -[SCDiscoverSharingSession shareController:didCompleteSharing:withParameters:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x107ac8b44

// -[SCDiscoverSharingSession shareControllerDidSaveSnap:parameters:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107ac8c7c

// -[SCDiscoverSharingSession shareControllerDidExitPreview]
// Type encoding: v16@0:8
// Implementation: 0x107ac8c80

// -[SCDiscoverSharingSession shareController:didChangeState:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107ac8ce8

// -[SCDiscoverSharingSession _displayDiscoverProfileForPage:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ac8d74

// -[SCDiscoverSharingSession _deprecatedDisplayPublisherProfileForPage:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ac8f70

// -[SCDiscoverSharingSession didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107ac9150

// -[SCDiscoverSharingSession _logCheetahEventForActionType:story:interactionContext:]
// Type encoding: v40@0:8q16@24q32
// Implementation: 0x107ac9158

// -[SCDiscoverSharingSession didUpdateWithAnnouncerIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ac922c

// -[SCDiscoverSharingSession _handleConfirmationUnsubscribeAction:params:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107ac931c

// -[SCDiscoverSharingSession _subscribeToPublisher:storyDedupeFp:shouldLogSubscribeEvent:interactionContext:currentItemPageId:]
// Type encoding: v48@0:8B16Q20B28q32@40
// Implementation: 0x107ac968c

// -[SCDiscoverSharingSession _updatePlaylistItemForItemPageId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ac9838

// -[SCDiscoverSharingSession _operaNavigationType]
// Type encoding: q16@0:8
// Implementation: 0x107ac98d8

// -[SCDiscoverSharingSession handleShareDestination:standardExternalContentShareScope:]
// Type encoding: B32@0:8q16@24
// Implementation: 0x107ac9934

// -[SCDiscoverSharingSession shareSheetDismissedWithShareDestination:]
// Type encoding: v24@0:8q16
// Implementation: 0x107ac993c

// -[SCDiscoverSharingSession actionMenuEntryEvent]
// Type encoding: q16@0:8
// Implementation: 0x107ac9940

// -[SCDiscoverSharingSession mediaPlaybackSessionId]
// Type encoding: @16@0:8
// Implementation: 0x107ac9948

// -[SCDiscoverSharingSession setMediaPlaybackSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ac9950

// -[SCDiscoverSharingSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107ac9958

// +[SCDiscoverSharingSession announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x107ac47e8

@end
