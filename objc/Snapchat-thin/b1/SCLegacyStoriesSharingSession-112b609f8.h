// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLegacyStoriesSharingSession
// Superclass: NSObject
// Address: 0x112b609f8

@interface SCLegacyStoriesSharingSession

// Property: trackingId; attributes: T@"NSString",C,N,V_trackingId
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLegacyStoriesSharingSession initWithUserSession:viewLocation:operaControlling:operaPageProvider:operaPlaylistItemController:externalLinkSendingService:grapheneRegistry:snapProShareMessageSender:isSavedStorySharingEnabled:boostCoordinator:notificationOSSettingsRetriever:temporaryFileWriter:circumstanceEngine:storiesMediaCoordinator:offPlatformLinkGenerationService:spotlightShareSender:storiesUsageLogger:lazyDiscoverFeedEventsController:lazyDiscoverFeedInteractionHistoryManager:]
// Type encoding: @164@0:8@16q24@32@40@48@56@64@72B80@84@92@100@108@116@124@132@140@148@156
// Implementation: 0x10720a374

// -[SCLegacyStoriesSharingSession dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10720a95c

// -[SCLegacyStoriesSharingSession extraPropertiesForStory:]
// Type encoding: @24@0:8@16
// Implementation: 0x10720a9a8

// -[SCLegacyStoriesSharingSession registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x10720aa24

// -[SCLegacyStoriesSharingSession operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10720acc4

// -[SCLegacyStoriesSharingSession _shareSheetConfigurationFromFetchedContentModel:attribution:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10720be90

// -[SCLegacyStoriesSharingSession _generateShareSheetConfigurationFromHighlightStory:attribution:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10720c128

// -[SCLegacyStoriesSharingSession _handleSubscribeButtonPressedForPage:params:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10720c468

// -[SCLegacyStoriesSharingSession _subscribeSuccess:isSubscribed:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10720c46c

// -[SCLegacyStoriesSharingSession _subscribeFailure:isSubscribed:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10720c51c

// -[SCLegacyStoriesSharingSession _handleNotificationOptInForPage:params:targetUserID:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10720c580

// -[SCLegacyStoriesSharingSession _handleNotificationForPublicUserWithCheetahStory:optingIn:interactionContext:]
// Type encoding: v36@0:8@16B24q28
// Implementation: 0x10720c7b8

// -[SCLegacyStoriesSharingSession _showOptInPrompt:]
// Type encoding: v20@0:8B16
// Implementation: 0x10720c99c

// -[SCLegacyStoriesSharingSession _logCheetahEventForActionType:story:interactionContext:]
// Type encoding: v40@0:8q16@24q32
// Implementation: 0x10720c9b0

// -[SCLegacyStoriesSharingSession _launchLegacySendToScopeFromViewController:attribution:shareSheetConfiguration:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10720ca7c

// -[SCLegacyStoriesSharingSession _fetchCreatorSetting]
// Type encoding: v16@0:8
// Implementation: 0x10720cca0

// -[SCLegacyStoriesSharingSession _fetchCreatorSettingWithSnapchatter:]
// Type encoding: v24@0:8@16
// Implementation: 0x10720ce1c

// -[SCLegacyStoriesSharingSession _fetchCreatorSettingSuccess:posterUserId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10720cec4

// -[SCLegacyStoriesSharingSession _fetchFriendScore]
// Type encoding: v16@0:8
// Implementation: 0x10720d108

// -[SCLegacyStoriesSharingSession _fetchFriendScoreWithSnapchatter:]
// Type encoding: v24@0:8@16
// Implementation: 0x10720d280

// -[SCLegacyStoriesSharingSession _updateStoryScorePropertyWithSnapchatter:friendScore:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10720d428

// -[SCLegacyStoriesSharingSession _logContextMenuViewWithStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x10720d5c8

// -[SCLegacyStoriesSharingSession _logContextMenuSendWithStory:recipientCount:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10720d6c8

// -[SCLegacyStoriesSharingSession legacySendToScopeDidDismiss:selectedItems:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10720d7e8

// -[SCLegacyStoriesSharingSession legacySendToScopeWillSend:sendToSelection:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10720d920

// -[SCLegacyStoriesSharingSession _didDetachUIWithSendToSelection:shareSheetConfiguration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10720dacc

// -[SCLegacyStoriesSharingSession _sendMessageWithSendToSelection:]
// Type encoding: v24@0:8@16
// Implementation: 0x10720dc48

// -[SCLegacyStoriesSharingSession _didFinishSendingWithSendToSelection:]
// Type encoding: v24@0:8@16
// Implementation: 0x10720e0c0

// -[SCLegacyStoriesSharingSession _sendStoryShareToRecipients:mischiefs:additionalText:destinationInfo:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10720e1e4

// -[SCLegacyStoriesSharingSession _sendStoryShareToSortedRecipients:additionalText:destinationInfo:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10720e434

// -[SCLegacyStoriesSharingSession _sendArroyoStoryShareToConversations:additionalText:platformAnalytics:additionalTextPlatformAnalytics:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10720e504

// -[SCLegacyStoriesSharingSession _sendToPhoneNumbersWithSendToSelection:shareSheetConfiguration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10720e92c

// -[SCLegacyStoriesSharingSession _didDismissSendViewController]
// Type encoding: v16@0:8
// Implementation: 0x10720eaa0

// -[SCLegacyStoriesSharingSession _savePressed]
// Type encoding: v16@0:8
// Implementation: 0x10720eae4

// -[SCLegacyStoriesSharingSession _deletePressed]
// Type encoding: v16@0:8
// Implementation: 0x10720ec88

// -[SCLegacyStoriesSharingSession _impalaFlowRefreshFeedCall:]
// Type encoding: v24@0:8@16
// Implementation: 0x10720ee38

// -[SCLegacyStoriesSharingSession didSelectDeleteStorySnaps:clientIdsBeingDeleted:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10720eefc

// -[SCLegacyStoriesSharingSession didCancelDeleteStorySnap]
// Type encoding: v16@0:8
// Implementation: 0x10720f02c

// -[SCLegacyStoriesSharingSession didDeleteSnapProStorySnaps:]
// Type encoding: v24@0:8@16
// Implementation: 0x10720f060

// -[SCLegacyStoriesSharingSession _showDeletionAlertForSpotlightWithMemberRolesWithDeleteHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10720f064

// -[SCLegacyStoriesSharingSession _showDeletionAlertWithDeleteHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10720f424

// -[SCLegacyStoriesSharingSession _didSendOperaEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10720f624

// -[SCLegacyStoriesSharingSession _shareLinkForUsername:inCell:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10720f6a0

// -[SCLegacyStoriesSharingSession _logFriendStoryOptIn:interactionContext:]
// Type encoding: v28@0:8B16q20
// Implementation: 0x10720fa90

// -[SCLegacyStoriesSharingSession didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10720fc3c

// -[SCLegacyStoriesSharingSession _photoPermissionCoordinator]
// Type encoding: @16@0:8
// Implementation: 0x10720fe9c

// -[SCLegacyStoriesSharingSession _updateFavoriteStatusForPage:params:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10720ff40

// -[SCLegacyStoriesSharingSession trackingId]
// Type encoding: @16@0:8
// Implementation: 0x1072100e4

// -[SCLegacyStoriesSharingSession setTrackingId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1072100ec

// -[SCLegacyStoriesSharingSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1072100f4

@end
