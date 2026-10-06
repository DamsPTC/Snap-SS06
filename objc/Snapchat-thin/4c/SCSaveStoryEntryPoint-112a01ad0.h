// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSaveStoryEntryPoint
// Superclass: SCEntryPoint
// Address: 0x112a01ad0

@interface SCSaveStoryEntryPoint

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSaveStoryEntryPoint begin]
// Type encoding: v16@0:8
// Implementation: 0x104e5549c

// -[SCSaveStoryEntryPoint _onDiskSpaceCheckPassed]
// Type encoding: v16@0:8
// Implementation: 0x104e556a8

// -[SCSaveStoryEntryPoint _myStoriesSaverWithMyStoriesCoordinator:]
// Type encoding: @24@0:8@16
// Implementation: 0x104e55888

// -[SCSaveStoryEntryPoint _saveSingleSnapWithClientId:storyId:snapPlaybackInfosOverride:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104e55ca8

// -[SCSaveStoryEntryPoint _onOurStoriesSaveUpdate:clientId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104e560a0

// -[SCSaveStoryEntryPoint _trySaveEntireStoryWithStoryId:snapPlaybackInfosOverride:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104e56308

// -[SCSaveStoryEntryPoint _displaySaveEntireStoryOnboardingWithConfirmationHandler:dismissalHandler:]
// Type encoding: v32@0:8@?16@?24
// Implementation: 0x104e5658c

// -[SCSaveStoryEntryPoint _saveEntireStoryWithStoryId:snapPlaybackInfosOverride:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104e56bac

// -[SCSaveStoryEntryPoint dialogDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e56cfc

// -[SCSaveStoryEntryPoint _onMyStoriesSaveUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e56d00

// -[SCSaveStoryEntryPoint _onMyStoriesSaveBeganWithSavingToMemories:savingToCameraRoll:savingIndividualSnap:]
// Type encoding: v28@0:8B16B20B24
// Implementation: 0x104e56dd4

// -[SCSaveStoryEntryPoint _onMyStoriesSaveSucceededWithSavedToMemories:savedToCameraRoll:savedIndividualSnap:storyDisplayName:]
// Type encoding: v36@0:8B16B20B24@28
// Implementation: 0x104e56ff4

// -[SCSaveStoryEntryPoint _onMyStoriesSaveFailed:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e57300

// -[SCSaveStoryEntryPoint _markSaveEntireStoryOnboardingComplete]
// Type encoding: v16@0:8
// Implementation: 0x104e57580

// -[SCSaveStoryEntryPoint _signalScopeWillComplete]
// Type encoding: v16@0:8
// Implementation: 0x104e575f0

// -[SCSaveStoryEntryPoint .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104e57664

@end
