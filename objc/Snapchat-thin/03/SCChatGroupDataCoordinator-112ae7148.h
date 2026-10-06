// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatGroupDataCoordinator
// Superclass: NSObject
// Address: 0x112ae7148

@interface SCChatGroupDataCoordinator

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCChatGroupDataCoordinator addDataUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10049a79c

// -[SCChatGroupDataCoordinator removeDataUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065ad554

// -[SCChatGroupDataCoordinator initWithGroupsDataFetcher:groupsDataTracker:pageLoadMetricsEmitter:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1004986c8

// -[SCChatGroupDataCoordinator handleDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065ad55c

// -[SCChatGroupDataCoordinator cachedGroupForId:withCompletion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1065ad638

// -[SCChatGroupDataCoordinator _announceChangeForGroup:withGroupId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1065ad760

// -[SCChatGroupDataCoordinator _announceDataCoordinatorUpdateWithDataRequestAndMetricsTracker:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065ad900

// -[SCChatGroupDataCoordinator _handleActiveConversationDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065ad9b4

// -[SCChatGroupDataCoordinator _setActiveConversationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065adac4

// -[SCChatGroupDataCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1065adc90

// +[SCChatGroupDataCoordinator dataCoordinatorIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1065ad548

@end
