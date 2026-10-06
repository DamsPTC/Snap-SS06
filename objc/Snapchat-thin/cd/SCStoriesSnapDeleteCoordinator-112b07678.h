// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesSnapDeleteCoordinator
// Superclass: NSObject
// Address: 0x112b07678

@interface SCStoriesSnapDeleteCoordinator

// Property: deleteStateForwarder; attributes: T@"<SCStoriesSnapDeleteStateForwarding>",W,N,V_deleteStateForwarder

// -[SCStoriesSnapDeleteCoordinator initWithStoriesFSNNetworkRequester:storiesDataCoordinator:storiesSnapViewerDataCoordinator:grapheneMetricsEmitter:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x100812b8c

// -[SCStoriesSnapDeleteCoordinator deleteSnapWithStoryType:postingStoryType:storyId:clientId:serverId:snapProAttributes:completion:]
// Type encoding: v68@0:8q16i24@28@36@44@52@?60
// Implementation: 0x10694d10c

// -[SCStoriesSnapDeleteCoordinator fetchSnapDeleteStateWithStoryId:snapComponentId:]
// Type encoding: q32@0:8@16@24
// Implementation: 0x10694d5d8

// -[SCStoriesSnapDeleteCoordinator _handleDeletionFailureWithStoryId:snapComponentId:snapProAttributes:statusCode:]
// Type encoding: v48@0:8@16@24@32q40
// Implementation: 0x10694d660

// -[SCStoriesSnapDeleteCoordinator _updateDeleteStateWithStoryId:snapComponentId:snapProAttributes:deleteState:]
// Type encoding: v48@0:8@16@24@32q40
// Implementation: 0x10694d6f0

// -[SCStoriesSnapDeleteCoordinator _handleDeletedSnapWithStoryId:snapComponentId:storyType:clientId:serverId:snapProAttributes:]
// Type encoding: v64@0:8@16@24q32@40@48@56
// Implementation: 0x10694d838

// -[SCStoriesSnapDeleteCoordinator fetchSnapDeleteStatesWithStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10694da00

// -[SCStoriesSnapDeleteCoordinator deleteStateForwarder]
// Type encoding: @16@0:8
// Implementation: 0x10694da08

// -[SCStoriesSnapDeleteCoordinator setDeleteStateForwarder:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008133fc

// -[SCStoriesSnapDeleteCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10694da20

@end
