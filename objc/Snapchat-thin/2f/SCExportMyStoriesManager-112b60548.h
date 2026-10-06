// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCExportMyStoriesManager
// Superclass: NSObject
// Address: 0x112b60548

@interface SCExportMyStoriesManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCExportMyStoriesManager initWithUserSession:delegate:blizzardLogger:customStoriesDataFetcher:lazyBackgroundTaskWrapper:lazyActiveVideoPaths:featureSettingsService:memoriesStoryMutator:galleryStorySaver:circumstanceEngine:userBlizzardLogger:grapheneRegistry:genAIDreamsService:]
// Type encoding: @120@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112
// Implementation: 0x1071d9618

// -[SCExportMyStoriesManager saveEntireStorySequence:isMultiSnapBundle:onError:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x1071d994c

// -[SCExportMyStoriesManager saveEntireStorySequence:isMultiSnapBundle:isStoryManagedByCurrentUser:onError:]
// Type encoding: v40@0:8@16B24B28@?32
// Implementation: 0x1071d9958

// -[SCExportMyStoriesManager _saveEntireStorySequence:customStory:isMultiSnapBundle:onError:]
// Type encoding: v44@0:8@16@24B32@?36
// Implementation: 0x1071d9d10

// -[SCExportMyStoriesManager _exportMyStorySequence:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071da18c

// -[SCExportMyStoriesManager _saveMyStorySequenceToMemories:customStory:saveGroup:onError:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1071da34c

// -[SCExportMyStoriesManager _saveMyStorySequenceToMemTwo:customStory:saveGroup:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1071dac54

// -[SCExportMyStoriesManager _finishMemTwoStorySave:success:error:saveGroup:]
// Type encoding: v44@0:8@16B24@28@36
// Implementation: 0x1071db318

// -[SCExportMyStoriesManager _logSaveEntireStorySequence:isMultiSnapBundle:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1071db4f4

// -[SCExportMyStoriesManager storyExporter:didProceedToProgress:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x1071dba24

// -[SCExportMyStoriesManager storyExporter:didFinishExportingToURL:withError:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1071dba28

// -[SCExportMyStoriesManager isSavingMyStoriesForStoryId:]
// Type encoding: B24@0:8@16
// Implementation: 0x1071dc010

// -[SCExportMyStoriesManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1071dc048

@end
