// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesSnapSaveCoordinator
// Superclass: NSObject
// Address: 0x112b078a8

@interface SCStoriesSnapSaveCoordinator

// Property: saveStateForwarder; attributes: T@"<SCStoriesSnapSaveStateForwarding>",W,N,V_saveStateForwarder

// -[SCStoriesSnapSaveCoordinator init]
// Type encoding: @16@0:8
// Implementation: 0x10081338c

// -[SCStoriesSnapSaveCoordinator startSavingSnapWithStoryId:snapComponentId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106967ce0

// -[SCStoriesSnapSaveCoordinator finishSavingSnapWithStoryId:snapComponentId:success:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x106967d90

// -[SCStoriesSnapSaveCoordinator fetchSnapSaveStateWithStoryId:snapComponentId:]
// Type encoding: q32@0:8@16@24
// Implementation: 0x106967f64

// -[SCStoriesSnapSaveCoordinator _setSaveStateWithStoryId:snapComponentId:saveState:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x106967fec

// -[SCStoriesSnapSaveCoordinator _clearSaveStateWithStoryId:snapComponentId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106968100

// -[SCStoriesSnapSaveCoordinator saveStateForwarder]
// Type encoding: @16@0:8
// Implementation: 0x10696819c

// -[SCStoriesSnapSaveCoordinator setSaveStateForwarder:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008133f0

// -[SCStoriesSnapSaveCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1069681b4

@end
