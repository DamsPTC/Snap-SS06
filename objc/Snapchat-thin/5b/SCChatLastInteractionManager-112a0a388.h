// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatLastInteractionManager
// Superclass: NSObject
// Address: 0x112a0a388

@interface SCChatLastInteractionManager


// -[SCChatLastInteractionManager initWithLastInteractionDataService:userId:chatMessageActionHandler:circumstanceEngine:messagingExperimentService:conversationUpdateAccumulatedAnnouncer:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x104f445b8

// -[SCChatLastInteractionManager _subscribeToConversationUpdates]
// Type encoding: v16@0:8
// Implementation: 0x104f447e0

// -[SCChatLastInteractionManager _updateWithNativeConversationId:updatedMessages:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104f44acc

// -[SCChatLastInteractionManager _updateByPerformerWithNativeConversationId:isGroup:recipientUserId:updatedMessages:]
// Type encoding: v44@0:8@16B24@28@36
// Implementation: 0x104f44d1c

// -[SCChatLastInteractionManager _updateWithNativeConversationId:isGroup:recipientUserId:updatedMessages:]
// Type encoding: v44@0:8@16B24@28@36
// Implementation: 0x104f44e90

// -[SCChatLastInteractionManager didCreateConversation:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f44fe8

// -[SCChatLastInteractionManager didConversationUpdateForConversationId:conversation:updatedMessages:removedMessages:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x104f44fec

// -[SCChatLastInteractionManager didRemoveConversation:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f45158

// -[SCChatLastInteractionManager didSendStart:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f4515c

// -[SCChatLastInteractionManager didSendComplete:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f45160

// -[SCChatLastInteractionManager didConfirmConversationServerCreation:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f45164

// -[SCChatLastInteractionManager didConversationReset:messages:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104f45168

// -[SCChatLastInteractionManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104f452d0

@end
