// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatInputStickerPlugin
// Superclass: NSObject
// Address: 0x112b0a918

@interface SCChatInputStickerPlugin

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: inputContext; attributes: T@"UIViewController<SCChatInputContext>",W,N,V_inputContext
// Property: inputItem; attributes: T@"UIButton<SCChatInputItem>",&,N,V_inputItem
// Property: position; attributes: TQ,R,N
// Property: pluginType; attributes: TQ,R,N

// -[SCChatInputStickerPlugin initWithUserSession:activeConversationInformation:cameoServices:ctpRepositoryServices:ctpItemViewService:notificationPool:cameoStickersPresentationServices:stickerSender:textSender:drawerMediaSender:navigationDelegate:groupFetcher:replyAllGroupId:storyReplySender:storyShareSender:userDataFeedServices:circumstanceEngine:bitmojiStickerCategoryIconProvider:stickerSearcher:chatNewMessageProvider:bitmojiAvatarProvider:bitmojiStickerRefresher:friendmojiFilteredContainer:quickReplyDataProvider:quickReplyDataProviderConfiguration:stickerGraphene:userPreferences:bitmojiAppPasteboardObserver:creativeToolsMetricsServices:friendsFeedDataCoordinator:contextNotificationManager:featureSettingsService:ctpSearchServices:bitmojiFriendmojiHintScopeExposer:stickerInjector:messagingExperimentService:creativeToolsABProvider:customStickerManager:customojiServices:aiStickersServiceFactory:plusFeatureGating:spotlightShareSender:discoverFeedBaseDeepLinkProcessor:bitmoji3DContentFetcher:bitmojiClientRenderer:blizzardLogger:appStartExperimentReader:bitmojiAvatarBuilderScopeExposer:stickerContentManager:renderStyleProvider:bitmojiAppEventsEmitter:memoriesPickerV2ScopeExposer:memoriesPickerV2ScopeServices:modularStickerCutoutScopeExposer:remixStickerServices:plusSubscribeScopeExposer:plusSubscribeScopeServices:contextExperimentService:mapChatLocationTrayPresenter:snapPlanChatDrawerPresenter:intentDetectionService:pollChatDrawerPresenter:]
// Type encoding: @512@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256@264@272@280@288@296@304@312@320@328@336@344@352@360@368@376@384@392@400@408@416@424@432@440@448@456@464@472@480@488@496@504
// Implementation: 0x1069c9330

// -[SCChatInputStickerPlugin _drawerStickerSearchable]
// Type encoding: @16@0:8
// Implementation: 0x1069ca370

// -[SCChatInputStickerPlugin _tabMetricInfoFromSticker:section:fromSource:searchSource:]
// Type encoding: @48@0:8@16@24q32q40
// Implementation: 0x1069ca3d8

// -[SCChatInputStickerPlugin _chatSendAnalyticsDataModelWithDrawerMetricInfo:memoriesMetricsInfo:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1069ca694

// -[SCChatInputStickerPlugin _destinationInfoForConversationInformation:]
// Type encoding: @24@0:8@16
// Implementation: 0x1069ca8d4

// -[SCChatInputStickerPlugin _subscribeToStickerSendEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069ca9d0

// -[SCChatInputStickerPlugin _subscribeToBitmojiAvatarChanges]
// Type encoding: v16@0:8
// Implementation: 0x1069caefc

// -[SCChatInputStickerPlugin _sendSticker:thumbnail:fromPosition:fromSource:searchSource:]
// Type encoding: v56@0:8@16@24Q32q40q48
// Implementation: 0x1069cb030

// -[SCChatInputStickerPlugin _populateConversationInformationForStickerSendEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069cb1bc

// -[SCChatInputStickerPlugin _shouldDisplayStickerSendUndoNotificationForSource:]
// Type encoding: B24@0:8q16
// Implementation: 0x1069cb30c

// -[SCChatInputStickerPlugin _handleStickerSendEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069cb32c

// -[SCChatInputStickerPlugin _displayUndoableNotificationWithGroupConversationId:conversationInformation:successBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1069cb430

// -[SCChatInputStickerPlugin _sendStickerEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069cb758

// -[SCChatInputStickerPlugin _sendDirectReplySticker:conversationId:analyticsDataModel:quotedMessageId:sendContextSource:attachedURL:source:completionHandler:]
// Type encoding: v80@0:8@16@24@32@40q48@56q64@?72
// Implementation: 0x1069cc124

// -[SCChatInputStickerPlugin _includedStickerDataModelFromSticker:analyticsDataModel:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1069cc444

// -[SCChatInputStickerPlugin _sendStoryReplySticker:conversationId:storyMetadata:analyticsDataModel:source:completionHandler:]
// Type encoding: v64@0:8@16@24@32@40q48@?56
// Implementation: 0x1069cc67c

// -[SCChatInputStickerPlugin _isChat]
// Type encoding: B16@0:8
// Implementation: 0x1069cc848

// -[SCChatInputStickerPlugin _isContext]
// Type encoding: B16@0:8
// Implementation: 0x1069cc880

// -[SCChatInputStickerPlugin _isChatAndQSIRotationEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1069cc898

// -[SCChatInputStickerPlugin _currentStickersSuggestionSource:]
// Type encoding: q20@0:8B16
// Implementation: 0x1069cc8b0

// -[SCChatInputStickerPlugin _updateBitmojiPresentationModelProvider]
// Type encoding: v16@0:8
// Implementation: 0x1069cc8c0

// -[SCChatInputStickerPlugin _performLocalStickerSearchWithInputText:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069cca50

// -[SCChatInputStickerPlugin _searchResultsFinishedNotifyResults:searchTerm:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x1069ccdc4

// -[SCChatInputStickerPlugin _filterSearchStickers:searchTerm:maxResults:]
// Type encoding: @40@0:8@16@24Q32
// Implementation: 0x1069cd000

// -[SCChatInputStickerPlugin _resetLocalSearchResults]
// Type encoding: v16@0:8
// Implementation: 0x1069cd160

// -[SCChatInputStickerPlugin _observeConversationIdAndActiveConversationInformation:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069cd1ac

// -[SCChatInputStickerPlugin _sinkConversationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069cd3dc

// -[SCChatInputStickerPlugin _handleConversationInformation:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069cd4a4

// -[SCChatInputStickerPlugin _resetDrawerOnConversationChange]
// Type encoding: v16@0:8
// Implementation: 0x1069cd4f4

// -[SCChatInputStickerPlugin _currentAutosuggestContext]
// Type encoding: q16@0:8
// Implementation: 0x1069cd544

// -[SCChatInputStickerPlugin _bitmojiKeyboardDidPasteBitmojiSticker:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069cd624

// -[SCChatInputStickerPlugin _updateQuickSearchIconWithSticker:animationStyle:isQSIRotation:]
// Type encoding: v36@0:8@16Q24B32
// Implementation: 0x1069cd7bc

// -[SCChatInputStickerPlugin _logSuggestionChatDrawerActionForSticker:suggestionSource:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1069cda30

// -[SCChatInputStickerPlugin _observeIntentDetection]
// Type encoding: v16@0:8
// Implementation: 0x1069cdb04

// -[SCChatInputStickerPlugin _intentDetectionStreamForConversationId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1069cdda8

// -[SCChatInputStickerPlugin _conversationSupportsSmartSuggestion:]
// Type encoding: B24@0:8@16
// Implementation: 0x1069cdf18

// -[SCChatInputStickerPlugin _setActiveSmartSuggestion:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069cdf6c

// -[SCChatInputStickerPlugin _buildStickerQuickReplyViewController]
// Type encoding: v16@0:8
// Implementation: 0x1069ce1b0

// -[SCChatInputStickerPlugin _showStickerQuickReply]
// Type encoding: v16@0:8
// Implementation: 0x1069ce2a8

// -[SCChatInputStickerPlugin _hideStickerQuickReply]
// Type encoding: v16@0:8
// Implementation: 0x1069ce37c

// -[SCChatInputStickerPlugin _shouldDisplayStickerQuickReply]
// Type encoding: B16@0:8
// Implementation: 0x1069ce438

// -[SCChatInputStickerPlugin chatNewMessageProvider:didReceiveNewTextMessage:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1069ce59c

// -[SCChatInputStickerPlugin configureInputItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069ce5a0

// -[SCChatInputStickerPlugin setInputContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069ce6ec

// -[SCChatInputStickerPlugin setInputItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069cea94

// -[SCChatInputStickerPlugin pluginType]
// Type encoding: Q16@0:8
// Implementation: 0x1069ceaec

// -[SCChatInputStickerPlugin position]
// Type encoding: Q16@0:8
// Implementation: 0x1069ceaf4

// -[SCChatInputStickerPlugin createDrawer]
// Type encoding: @16@0:8
// Implementation: 0x1069ceafc

// -[SCChatInputStickerPlugin createItemController]
// Type encoding: @16@0:8
// Implementation: 0x1069cecd0

// -[SCChatInputStickerPlugin inputViewDidDisappear]
// Type encoding: v16@0:8
// Implementation: 0x1069cecd8

// -[SCChatInputStickerPlugin inputViewDidAppear]
// Type encoding: v16@0:8
// Implementation: 0x1069ced18

// -[SCChatInputStickerPlugin didSelectInputItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069ced58

// -[SCChatInputStickerPlugin didDeselectInputItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069ced5c

// -[SCChatInputStickerPlugin didCollapseInputItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069ced60

// -[SCChatInputStickerPlugin didUncollapseInputItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069ced64

// -[SCChatInputStickerPlugin stickerQuickReplyViewController:stickerTapped:fromPosition:fromSource:]
// Type encoding: v48@0:8@16@24Q32q40
// Implementation: 0x1069ced68

// -[SCChatInputStickerPlugin canDisplayStickerQuickReply]
// Type encoding: B16@0:8
// Implementation: 0x1069cee1c

// -[SCChatInputStickerPlugin shouldAllowSnapchatStickersInSearch]
// Type encoding: B16@0:8
// Implementation: 0x1069cee24

// -[SCChatInputStickerPlugin _enableStickerQuickReply]
// Type encoding: B16@0:8
// Implementation: 0x1069cee28

// -[SCChatInputStickerPlugin didSelectSticker]
// Type encoding: v16@0:8
// Implementation: 0x1069cee68

// -[SCChatInputStickerPlugin stickerReplySourceType]
// Type encoding: q16@0:8
// Implementation: 0x1069cee6c

// -[SCChatInputStickerPlugin chatQSIRotationStickerProvider:didRotateToNextQSISticker:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1069ceea8

// -[SCChatInputStickerPlugin accessoryLocation]
// Type encoding: q16@0:8
// Implementation: 0x1069ceeb8

// -[SCChatInputStickerPlugin currentQSISticker]
// Type encoding: @16@0:8
// Implementation: 0x1069cef1c

// -[SCChatInputStickerPlugin inputStickerAccessoryDidResignActive]
// Type encoding: v16@0:8
// Implementation: 0x1069cef44

// -[SCChatInputStickerPlugin inputStickerAccessoryDidBecomeActive]
// Type encoding: v16@0:8
// Implementation: 0x1069cefec

// -[SCChatInputStickerPlugin stickersSuggestionSource]
// Type encoding: q16@0:8
// Implementation: 0x1069cf064

// -[SCChatInputStickerPlugin localSearchStickerResults]
// Type encoding: @16@0:8
// Implementation: 0x1069cf06c

// -[SCChatInputStickerPlugin currentUserInputText]
// Type encoding: @16@0:8
// Implementation: 0x1069cf104

// -[SCChatInputStickerPlugin hasActiveSmartSuggestion]
// Type encoding: B16@0:8
// Implementation: 0x1069cf12c

// -[SCChatInputStickerPlugin shouldIncludeLocationButton]
// Type encoding: B16@0:8
// Implementation: 0x1069cf13c

// -[SCChatInputStickerPlugin shouldIncludePlanButton]
// Type encoding: B16@0:8
// Implementation: 0x1069cf190

// -[SCChatInputStickerPlugin shouldIncludePollButton]
// Type encoding: B16@0:8
// Implementation: 0x1069cf2bc

// -[SCChatInputStickerPlugin _subscribeToPasteEvents]
// Type encoding: v16@0:8
// Implementation: 0x1069cf338

// -[SCChatInputStickerPlugin _sendPastedData:isAnimated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1069cf9f8

// -[SCChatInputStickerPlugin inputContext]
// Type encoding: @16@0:8
// Implementation: 0x1069cfc28

// -[SCChatInputStickerPlugin inputItem]
// Type encoding: @16@0:8
// Implementation: 0x1069cfc40

// -[SCChatInputStickerPlugin .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1069cfc48

@end
