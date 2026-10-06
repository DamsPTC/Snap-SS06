// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatMessageViewModelFactoryV3
// Superclass: NSObject
// Address: 0x112ae5118

@interface SCChatMessageViewModelFactoryV3

// Property: userSession; attributes: T@"SCUserSession",R,W,N,V_userSession

// -[SCChatMessageViewModelFactoryV3 initWithUserSession:polaroidViewTransitionResolver:pluginManager:accessoryPluginManager:graphene:valdiRuntimeProvider:circumstanceEngine:snapCountDownManager:groupsDataFetcher:snapchattersSynchronousDataFetcher:snapchattersDataTracking:connectivityMonitor:friendmojiPresenter:contentDelivery:mediaFetcher:valdiContextCreator:blizzardLogger:messagingExperimentService:chatEligibilityProvider:urlSpamProvider:normalizedSpamCheckURLFinder:notificationToMessageReadyLogger:viewModelGenerationPerformer:ctpItemViewService:plusFeatureGating:groupChatAddButtonViewModelProvider:groupsCustomColorsFetcher:chatMessageDisplayStateLogger:]
// Type encoding: @240@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232
// Implementation: 0x106557f04

// -[SCChatMessageViewModelFactoryV3 _processNotificationToMessageReadyLifecycleEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065588d8

// -[SCChatMessageViewModelFactoryV3 viewModelForMessage:messageGroup:withConversation:conversationSubtypeMetadata:conversationParticipants:earlierContentExists:config:previousViewModel:parsingData:messageAnimationData:snapchattersData:postSnapActionsParams:currentUserSnapchatter:reactionMetadata:]
// Type encoding: @124@0:8@16@24@32@40@48B56@60@68@76@84@92@100@108@116
// Implementation: 0x106558974

// -[SCChatMessageViewModelFactoryV3 viewModelForToday:isGroupConversation:conversationId:recipientUserId:]
// Type encoding: @40@0:8B16B20@24@32
// Implementation: 0x10655956c

// -[SCChatMessageViewModelFactoryV3 viewModelForEmptyChatConversation:withMessageRetentionInMinutes:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x106559580

// -[SCChatMessageViewModelFactoryV3 viewModelForLoading:conversationId:isGroupConversation:sinceMessageId:recipientUserId:]
// Type encoding: @52@0:8q16@24B32@36@44
// Implementation: 0x106559640

// -[SCChatMessageViewModelFactoryV3 viewModelForPlaceholder]
// Type encoding: @16@0:8
// Implementation: 0x106559658

// -[SCChatMessageViewModelFactoryV3 viewModelForPendingSnaps:pendingChats:conversationId:recipientUsername:]
// Type encoding: @48@0:8q16q24@32@40
// Implementation: 0x1065596ac

// -[SCChatMessageViewModelFactoryV3 conversationLoadingViewModel:metadata:currentUserId:isInitialLoad:]
// Type encoding: @44@0:8@16@24@32B40
// Implementation: 0x1065597a0

// -[SCChatMessageViewModelFactoryV3 addToGroupViewModelForConversation:participants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106559c88

// -[SCChatMessageViewModelFactoryV3 _viewModelForMessage:withConversation:viewModelClass:conversationParticipants:currentUserId:earlierContentExists:config:previousViewModel:showsDateHeader:showsBelowTheFold:showsTimestamp:showsFoldIndicator:cornerMask:currentUserSnapchatter:snapchattersData:postSnapActionsParams:reactionMetadata:]
// Type encoding: @132@0:8@16@24#32@40@48B56@60@68B76B80B84B88Q92@100@108@116@124
// Implementation: 0x106559f60

// -[SCChatMessageViewModelFactoryV3 _createViewModelPropsWithConversation:conversationParticipants:currentUserId:earlierContentExists:message:previousViewModel:config:showsDateHeader:showsBelowTheFold:showsTimestamp:showsFoldIndicator:cornerMask:currentUserSnapchatter:snapchattersData:postSnapActionsParams:reactionMetadata:]
// Type encoding: @124@0:8@16@24@32B40@44@52@60B68B72B76B80Q84@92@100@108@116
// Implementation: 0x10655a0c8

// -[SCChatMessageViewModelFactoryV3 _shouldUpdateViewModelForClass:previousViewModel:messageProps:message:config:]
// Type encoding: B56@0:8#16@24@32@40@48
// Implementation: 0x10655ac30

// -[SCChatMessageViewModelFactoryV3 _updatePreviousViewModelForMessage:previousViewModel:viewModelProps:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10655ad60

// -[SCChatMessageViewModelFactoryV3 _createSingleMessageViewModelWithViewModelProps:message:viewModelClass:previousViewModel:]
// Type encoding: @48@0:8@16@24#32@40
// Implementation: 0x10655adc4

// -[SCChatMessageViewModelFactoryV3 _updateCornersBasedOnPreviousViewModel:previousViewModel:message:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10655ae60

// -[SCChatMessageViewModelFactoryV3 _getPayloadViewModelClassForMessage:]
// Type encoding: #24@0:8@16
// Implementation: 0x10655b008

// -[SCChatMessageViewModelFactoryV3 _messageIsSentByUser:]
// Type encoding: B24@0:8@16
// Implementation: 0x10655b2d0

// -[SCChatMessageViewModelFactoryV3 _setRecipientInfoForOneOnOneConversationOnProps:isGroupConversation:conversationParticipants:message:]
// Type encoding: v44@0:8@16B24@28@36
// Implementation: 0x10655b350

// -[SCChatMessageViewModelFactoryV3 _logMessageDisplayInitializedForMessage:conversationId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10655b4e0

// -[SCChatMessageViewModelFactoryV3 _logNotificationToMessageReadyForMessage:conversation:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10655b568

// -[SCChatMessageViewModelFactoryV3 userSession]
// Type encoding: @16@0:8
// Implementation: 0x10655b6b8

// -[SCChatMessageViewModelFactoryV3 .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10655b6d0

@end
