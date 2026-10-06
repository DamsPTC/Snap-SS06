// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatArroyoConversationDataCoordinator
// Superclass: NSObject
// Address: 0x112ae70a8

@interface SCChatArroyoConversationDataCoordinator

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCChatArroyoConversationDataCoordinator initWithNativeSessionManager:nativeFeedManager:userId:performer:announcer:chatDisplayReadyLogger:chatGraphene:pageLoadMetricsEmitter:messagingExperimentService:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x100496868

// -[SCChatArroyoConversationDataCoordinator initWithNativeSessionManager:nativeFeedManager:userId:chatDisplayReadyLogger:chatGraphene:pageLoadMetricsEmitter:messagingExperimentService:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x1004966d0

// -[SCChatArroyoConversationDataCoordinator nativeConversationManager]
// Type encoding: @16@0:8
// Implementation: 0x1065a490c

// -[SCChatArroyoConversationDataCoordinator addDataUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x100497034

// -[SCChatArroyoConversationDataCoordinator removeDataUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065a4960

// -[SCChatArroyoConversationDataCoordinator handleDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065a4968

// -[SCChatArroyoConversationDataCoordinator _unsetActiveConversationById:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065a4e40

// -[SCChatArroyoConversationDataCoordinator _resumeActiveConversationById:chatIdentifier:metadata:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1065a4ec4

// -[SCChatArroyoConversationDataCoordinator _resumeActiveConversation:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065a549c

// -[SCChatArroyoConversationDataCoordinator _setActiveConversationId:chatIdentifier:metadata:metricsTracker:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1065a553c

// -[SCChatArroyoConversationDataCoordinator _handleFailedConversationUpdate:failedMessage:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1065a5ce0

// -[SCChatArroyoConversationDataCoordinator _completeChatDisplayReadyFlowWithFailure:]
// Type encoding: v24@0:8q16
// Implementation: 0x1065a5d64

// -[SCChatArroyoConversationDataCoordinator _recordFetchedMessagesCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1065a5da0

// -[SCChatArroyoConversationDataCoordinator _paginationRequestDidCompleteForConversationId:paginationToken:pageSize:success:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x1065a5ddc

// -[SCChatArroyoConversationDataCoordinator _paginateForConversationId:sinceMessageId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1065a5ef4

// -[SCChatArroyoConversationDataCoordinator _paginationRequestDidFail]
// Type encoding: v16@0:8
// Implementation: 0x1065a6758

// -[SCChatArroyoConversationDataCoordinator _fetchingOlderMessagesFromServer]
// Type encoding: v16@0:8
// Implementation: 0x1065a67d8

// -[SCChatArroyoConversationDataCoordinator _shouldDiscardPaginationResultWithCapturedEpoch:conversation:]
// Type encoding: B32@0:8Q16@24
// Implementation: 0x1065a6858

// -[SCChatArroyoConversationDataCoordinator _didPaginateForConversation:fetchedMessages:pageSize:hasMore:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x1065a68bc

// -[SCChatArroyoConversationDataCoordinator _generateAndSetSnapshotForConversation:messagesForFirstAboveTheFold:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1065a6c10

// -[SCChatArroyoConversationDataCoordinator _generateAndSetSnapshotForConversation:messagesForFirstAboveTheFold:overrideTimestamp:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1065a6c18

// -[SCChatArroyoConversationDataCoordinator _setInitialActiveConversation:metricsTracker:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1065a6d40

// -[SCChatArroyoConversationDataCoordinator _resetInitialStateAndUpdateConversation:metricsTracker:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1065a6e54

// -[SCChatArroyoConversationDataCoordinator _resetInitialStateAndUpdateConversation:metricsTracker:clearSnapshots:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1065a6e5c

// -[SCChatArroyoConversationDataCoordinator _shouldProcessUpdateForConversationId:conversation:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1065a700c

// -[SCChatArroyoConversationDataCoordinator _shouldProcessResetForConversationId:]
// Type encoding: B24@0:8@16
// Implementation: 0x1065a717c

// -[SCChatArroyoConversationDataCoordinator _conversationDidUpdate:metricsTracker:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1065a720c

// -[SCChatArroyoConversationDataCoordinator _conversationDidUpdate:hasMoreMessages:didPaginate:metricsTracker:]
// Type encoding: v40@0:8@16B24B28@32
// Implementation: 0x1065a7220

// -[SCChatArroyoConversationDataCoordinator _conversationDidUpdate:hasMoreMessages:conversationHistoryLoadStatus:conversationLoadStatus:didPaginate:metricsTracker:]
// Type encoding: v56@0:8@16B24q28q36B44@48
// Implementation: 0x1065a7308

// -[SCChatArroyoConversationDataCoordinator activeConversationDataForConversationId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1065a74b8

// -[SCChatArroyoConversationDataCoordinator didConversationUpdateForConversationId:conversation:updatedMessages:removedMessages:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1065a7680

// -[SCChatArroyoConversationDataCoordinator didCreateConversation:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065a7b0c

// -[SCChatArroyoConversationDataCoordinator didRemoveConversation:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065a7b10

// -[SCChatArroyoConversationDataCoordinator didSendStart:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065a7b14

// -[SCChatArroyoConversationDataCoordinator didSendComplete:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065a7b18

// -[SCChatArroyoConversationDataCoordinator didConfirmConversationServerCreation:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065a7b1c

// -[SCChatArroyoConversationDataCoordinator didConversationReset:messages:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1065a7b20

// -[SCChatArroyoConversationDataCoordinator _announceDataCoordinatorUpdateWithDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065a7d58

// -[SCChatArroyoConversationDataCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1065a7dd4

// +[SCChatArroyoConversationDataCoordinator dataCoordinatorIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1065a4954

@end
