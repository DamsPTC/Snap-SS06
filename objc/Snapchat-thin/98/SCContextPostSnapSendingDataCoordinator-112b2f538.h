// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContextPostSnapSendingDataCoordinator
// Superclass: NSObject
// Address: 0x112b2f538

@interface SCContextPostSnapSendingDataCoordinator


// -[SCContextPostSnapSendingDataCoordinator initWithUserSession:conversationDataUpdateAnnouncer:conversationManager:actionBarDataFetcher:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106ca0680

// -[SCContextPostSnapSendingDataCoordinator initWithUserSession:conversationDataUpdateAnnouncer:conversationManager:actionBarDataFetcher:performer:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x106ca0754

// -[SCContextPostSnapSendingDataCoordinator didCreateConversation:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ca089c

// -[SCContextPostSnapSendingDataCoordinator didConversationUpdateForConversationId:conversation:updatedMessages:removedMessages:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106ca08a0

// -[SCContextPostSnapSendingDataCoordinator didRemoveConversation:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ca08ac

// -[SCContextPostSnapSendingDataCoordinator didSendStart:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ca08b0

// -[SCContextPostSnapSendingDataCoordinator didSendComplete:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ca08b4

// -[SCContextPostSnapSendingDataCoordinator didConfirmConversationServerCreation:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ca08b8

// -[SCContextPostSnapSendingDataCoordinator didConversationReset:messages:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106ca08bc

// -[SCContextPostSnapSendingDataCoordinator beginObservingDataUpdates]
// Type encoding: v16@0:8
// Implementation: 0x106ca0920

// -[SCContextPostSnapSendingDataCoordinator endObservingDataUpdates]
// Type encoding: v16@0:8
// Implementation: 0x106ca095c

// -[SCContextPostSnapSendingDataCoordinator _processMessagesForContextData:conversationId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106ca0998

// -[SCContextPostSnapSendingDataCoordinator _fetchedConversationWithId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106ca0ec8

// -[SCContextPostSnapSendingDataCoordinator _snapdocsForMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x106ca101c

// -[SCContextPostSnapSendingDataCoordinator _isEligibleForFetchingContextDataMessage:]
// Type encoding: B24@0:8@16
// Implementation: 0x106ca119c

// -[SCContextPostSnapSendingDataCoordinator _fetchSessionParamsAndFetchContextData:isGroupConversation:conversationId:chatMessageId:currentUserId:participants:]
// Type encoding: v60@0:8@16B24@28@36@44@52
// Implementation: 0x106ca1414

// -[SCContextPostSnapSendingDataCoordinator _fetchPostSnapActionsDataForSessionParams:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ca1750

// -[SCContextPostSnapSendingDataCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ca19ec

@end
