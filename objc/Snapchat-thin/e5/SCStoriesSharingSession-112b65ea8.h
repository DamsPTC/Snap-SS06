// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesSharingSession
// Superclass: NSObject
// Address: 0x112b65ea8

@interface SCStoriesSharingSession

// Property: trackingId; attributes: T@"NSString",C,N,V_trackingId
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: currentStoryViewId; attributes: T@"NSString",&,N,V_currentStoryViewId
// Property: mediaPlaybackSessionId; attributes: T@"NSString",&,N,V_mediaPlaybackSessionId

// -[SCStoriesSharingSession initWithUserSession:viewLocation:operaControlling:operaPageProvider:operaPlaylistItemController:externalLinkSendingService:grapheneRegistry:storiesMediaCoordinator:temporaryFileWriter:notificationOSSettingsRetriever:offPlatformShareServices:discoverFeedPageSessionId:triggeringSection:discoverFeedEventsController:spotlightShareSender:spotlightPlatformAnalyticsCreator:circumstanceEngine:shareNotificationService:]
// Type encoding: @160@0:8@16q24@32@40@48@56@64@72@80@88@96@104q112@120@128@136@144@152
// Implementation: 0x10796fc18

// -[SCStoriesSharingSession dealloc]
// Type encoding: v16@0:8
// Implementation: 0x107970484

// -[SCStoriesSharingSession extraPropertiesForStorySnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x1079704d0

// -[SCStoriesSharingSession registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x10797054c

// -[SCStoriesSharingSession operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107970848

// -[SCStoriesSharingSession _presentShareNotificationWithAttribution:]
// Type encoding: v24@0:8@16
// Implementation: 0x107971a10

// -[SCStoriesSharingSession _handleCopyLinkWithAttribution:]
// Type encoding: v24@0:8@16
// Implementation: 0x107971d98

// -[SCStoriesSharingSession _screenshotSharingConfigurationForSnapchatter:attribution:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107971f40

// -[SCStoriesSharingSession _fetchCreatorSetting]
// Type encoding: v16@0:8
// Implementation: 0x107972218

// -[SCStoriesSharingSession _fetchCreatorSettingSuccess:posterUserId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1079722a8

// -[SCStoriesSharingSession _handleNotificationOptInForOperaEventWithParams:targetUserId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1079724ec

// -[SCStoriesSharingSession _logFriendStoryOptIn:interactionContext:]
// Type encoding: v28@0:8B16q20
// Implementation: 0x1079726d0

// -[SCStoriesSharingSession _launchLegacySendToScopeFromViewController:attribution:shareSheetConfiguration:creatorUserName:friendInThisSnapIds:isCameosStory:]
// Type encoding: v60@0:8@16@24@32@40@48B56
// Implementation: 0x1079728a4

// -[SCStoriesSharingSession _generateMySnapShareSheetConfigurationWithCreatorUserName:attribution:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107972e50

// -[SCStoriesSharingSession _getGenAIWatermarkProfile]
// Type encoding: @16@0:8
// Implementation: 0x107973ba0

// -[SCStoriesSharingSession _generateShareSheetConfigurationBySnapType:attribution:]
// Type encoding: @32@0:8Q16@24
// Implementation: 0x107973d20

// -[SCStoriesSharingSession _savedStoryDeepLinkWithUsername:snapId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107974e64

// -[SCStoriesSharingSession _fetchFriendScore]
// Type encoding: v16@0:8
// Implementation: 0x107974f9c

// -[SCStoriesSharingSession _updateStoryScorePropertyWithUserId:friendScore:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107975160

// -[SCStoriesSharingSession legacySendToScopeDidDismiss:selectedItems:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107975330

// -[SCStoriesSharingSession legacySendToScopeWillSend:sendToSelection:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107975384

// -[SCStoriesSharingSession legacySendToScopeTrayDidChangeExpansion:]
// Type encoding: v20@0:8B16
// Implementation: 0x107975698

// -[SCStoriesSharingSession _didDetachUIWithSendToSelection:sendToSessionId:shareSheetConfiguration:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10797569c

// -[SCStoriesSharingSession _sendMessageWithSendToSelection:sendToSessionId:shareSheetConfiguration:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107975834

// -[SCStoriesSharingSession _sendStoryShareToRecipients:stories:businessIds:mischiefs:additionalText:sendToSessionId:]
// Type encoding: v64@0:8@16@24@32@40@48@56
// Implementation: 0x107975ad0

// -[SCStoriesSharingSession _sendDidShareOnSendToEventWithRecipients:mischiefs:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1079764bc

// -[SCStoriesSharingSession _sendStoryShareToSortedRecipients:additionalText:destinationInfo:sendToSessionId:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x107976698

// -[SCStoriesSharingSession _sendStoryShareToSortedRecipients:additionalText:destinationInfo:sendToSessionId:storyPosterSnapchatter:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x1079769c4

// -[SCStoriesSharingSession _spotlightPlatformAnalyticsDataModelWithDestinationInfo:sendToSessionId:storyId:streamId:sendUiType:]
// Type encoding: @56@0:8@16@24@32@40q48
// Implementation: 0x107977280

// -[SCStoriesSharingSession _sendStorySnapPlaybackInfo:toConversationIds:additionalText:platformAnalytics:additionalTextPlatformAnalytics:completion:]
// Type encoding: v64@0:8@16@24@32@40@48@?56
// Implementation: 0x1079773d8

// -[SCStoriesSharingSession _didDismissSendViewController]
// Type encoding: v16@0:8
// Implementation: 0x107977940

// -[SCStoriesSharingSession _canPostToStories]
// Type encoding: B16@0:8
// Implementation: 0x107977984

// -[SCStoriesSharingSession _deletePressedWithSkipNativeModal:params:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x107977a6c

// -[SCStoriesSharingSession didSelectDeleteStorySnaps:clientIdsBeingDeleted:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107977f74

// -[SCStoriesSharingSession didCancelDeleteStorySnap]
// Type encoding: v16@0:8
// Implementation: 0x1079784a8

// -[SCStoriesSharingSession didDeleteSnapProStorySnaps:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079784dc

// -[SCStoriesSharingSession _didSendOperaEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079785ec

// -[SCStoriesSharingSession _shareLinkForUsername:inCell:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107978668

// -[SCStoriesSharingSession _showOptInPrompt:]
// Type encoding: v20@0:8B16
// Implementation: 0x107978a58

// -[SCStoriesSharingSession _getCreatorSnapchatter]
// Type encoding: @16@0:8
// Implementation: 0x107978c30

// -[SCStoriesSharingSession didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107978f2c

// -[SCStoriesSharingSession _photoPermissionCoordinator]
// Type encoding: @16@0:8
// Implementation: 0x107979378

// -[SCStoriesSharingSession _setSpotlightSnapDownloadResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x10797941c

// -[SCStoriesSharingSession _removeSpotlightSnapDownloadResultIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x10797944c

// -[SCStoriesSharingSession handleShareDestination:standardExternalContentShareScope:]
// Type encoding: B32@0:8q16@24
// Implementation: 0x107979524

// -[SCStoriesSharingSession shareSheetDismissedWithShareDestination:]
// Type encoding: v24@0:8q16
// Implementation: 0x10797952c

// -[SCStoriesSharingSession _poiIdFromMockStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x107979530

// -[SCStoriesSharingSession _shareSpotlightWithMediaInfo:storiesConfig:businessIds:additionalText:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1079795a0

// -[SCStoriesSharingSession currentStoryViewId]
// Type encoding: @16@0:8
// Implementation: 0x10797975c

// -[SCStoriesSharingSession setCurrentStoryViewId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107979764

// -[SCStoriesSharingSession mediaPlaybackSessionId]
// Type encoding: @16@0:8
// Implementation: 0x107979794

// -[SCStoriesSharingSession setMediaPlaybackSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10797979c

// -[SCStoriesSharingSession trackingId]
// Type encoding: @16@0:8
// Implementation: 0x1079797cc

// -[SCStoriesSharingSession setTrackingId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079797d4

// -[SCStoriesSharingSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1079797dc

@end
