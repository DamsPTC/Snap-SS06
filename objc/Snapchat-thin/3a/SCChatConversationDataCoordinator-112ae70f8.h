// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatConversationDataCoordinator
// Superclass: NSObject
// Address: 0x112ae70f8

@interface SCChatConversationDataCoordinator

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCChatConversationDataCoordinator addDataUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065a7ea0

// -[SCChatConversationDataCoordinator removeDataUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065a7ea8

// -[SCChatConversationDataCoordinator initWithStoriesDataCoordinator:groupCoordinator:arroyoCoordinator:conversationWindowCoordinator:animationDataCoordinator:snapchattersDataCoordinator:contextPostSnapActionsDataProvider:conversationIdResolver:snapchatterPublicInfoFetcher:reactionsDataProvider:graphene:conversationLifecycleEventPublisher:bitmojiAvatarProvider:chatDisplayReadyLogger:messagingExperimentService:appInsightsMetadataStorage:sponsoredSnapAdResponseParser:]
// Type encoding: @152@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144
// Implementation: 0x10049a15c

// -[SCChatConversationDataCoordinator _addSubcoordinator:]
// Type encoding: v24@0:8@16
// Implementation: 0x10049a730

// -[SCChatConversationDataCoordinator handleDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065a7ee0

// -[SCChatConversationDataCoordinator dataCoordinatorDidUpdateWithIdentifier:dataRequest:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1065a8850

// -[SCChatConversationDataCoordinator _handleUpdatesWithDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065a8b08

// -[SCChatConversationDataCoordinator _announceDataCoordinatorUpdateWithDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065aa380

// -[SCChatConversationDataCoordinator _logActiveChatRequestWithChatIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065aa3e8

// -[SCChatConversationDataCoordinator _startActiveConversationForIDResolvingRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065aa57c

// -[SCChatConversationDataCoordinator _logFetchConversationIdWithSuccess:convoId:isGroup:failureReason:]
// Type encoding: v40@0:8B16@20B28q32
// Implementation: 0x1065aace4

// -[SCChatConversationDataCoordinator _throwFailureForChatIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065aad28

// -[SCChatConversationDataCoordinator _throwActiveConversationForIDResolvingRequest:conversationId:metadata:metricsTracker:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1065aae2c

// -[SCChatConversationDataCoordinator _fetchConversationIdAndMetadataForChatIdentifier:metricsTracker:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1065ab100

// -[SCChatConversationDataCoordinator _fetchConversationIdAndMetadataForUserId:metricsTracker:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1065ab280

// -[SCChatConversationDataCoordinator _recordConversationMetricsForConversation:metricsTracker:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1065ab520

// -[SCChatConversationDataCoordinator _completeChatDisplayReadyFlowWithFailure:]
// Type encoding: v24@0:8q16
// Implementation: 0x1065ab61c

// -[SCChatConversationDataCoordinator _fetchConversationIdAndMetadataForSnapchatter:metricsTracker:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1065ab658

// -[SCChatConversationDataCoordinator updateRequests]
// Type encoding: @16@0:8
// Implementation: 0x1065ab93c

// -[SCChatConversationDataCoordinator _subscribeToStoriesSummariesIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x1065ab964

// -[SCChatConversationDataCoordinator _updateStoriesSummaryInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065abc20

// -[SCChatConversationDataCoordinator _subscribeToReactionsUpdatesIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x1065abc5c

// -[SCChatConversationDataCoordinator _updateReactionMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065abdd4

// -[SCChatConversationDataCoordinator _subscribeToPostSnapActionsIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x1065abe10

// -[SCChatConversationDataCoordinator _updatePostSnapConversationActions:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065abf8c

// -[SCChatConversationDataCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1065abfc8

// +[SCChatConversationDataCoordinator dataCoordinatorIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1065a7e94

@end
