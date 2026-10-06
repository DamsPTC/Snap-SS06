// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatWindowingConversationDataCoordinator
// Superclass: NSObject
// Address: 0x112ae7238

@interface SCChatWindowingConversationDataCoordinator

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCChatWindowingConversationDataCoordinator addDataUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065b0628

// -[SCChatWindowingConversationDataCoordinator removeDataUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065b0630

// -[SCChatWindowingConversationDataCoordinator initWithUserId:nativeSessionManager:performerProvider:announcer:chatDisplayReadyLogger:chatGraphene:pageLoadMetricsEmitter:messagingExperimentService:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x1065b0638

// -[SCChatWindowingConversationDataCoordinator _subscribeToWindowUpdates]
// Type encoding: v16@0:8
// Implementation: 0x1065b096c

// -[SCChatWindowingConversationDataCoordinator dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1065b0bf0

// -[SCChatWindowingConversationDataCoordinator handleDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065b0c38

// -[SCChatWindowingConversationDataCoordinator _setActiveConversationId:chatIdentifier:metadata:metricsTracker:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1065b0e9c

// -[SCChatWindowingConversationDataCoordinator _resumeActiveConversationId:chatIdentifier:metadata:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1065b0f5c

// -[SCChatWindowingConversationDataCoordinator _unsetActiveConversationById:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065b1004

// -[SCChatWindowingConversationDataCoordinator _resetConversationState]
// Type encoding: v16@0:8
// Implementation: 0x1065b103c

// -[SCChatWindowingConversationDataCoordinator _enterConversationAndInitWindow:metadata:isReset:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1065b10b0

// -[SCChatWindowingConversationDataCoordinator _handleWindowMoveRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065b15a8

// -[SCChatWindowingConversationDataCoordinator _handleWindowUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065b1710

// -[SCChatWindowingConversationDataCoordinator _handleWindowError:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065b2100

// -[SCChatWindowingConversationDataCoordinator activeConversationDataForConversationId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1065b2260

// -[SCChatWindowingConversationDataCoordinator _conversationManager]
// Type encoding: @16@0:8
// Implementation: 0x1065b2468

// -[SCChatWindowingConversationDataCoordinator _windowManager]
// Type encoding: @16@0:8
// Implementation: 0x1065b24b0

// -[SCChatWindowingConversationDataCoordinator _announceDataCoordinatorUpdateWithDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065b24f8

// -[SCChatWindowingConversationDataCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1065b2574

// +[SCChatWindowingConversationDataCoordinator dataCoordinatorIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1065b061c

@end
