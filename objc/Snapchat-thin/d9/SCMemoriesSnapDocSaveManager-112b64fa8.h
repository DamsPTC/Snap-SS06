// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesSnapDocSaveManager
// Superclass: NSObject
// Address: 0x112b64fa8

@interface SCMemoriesSnapDocSaveManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesSnapDocSaveManager initWithDataMutatingServices:featureSettingsService:overlayFormatServices:snapDocManager:previewURLVideoProvider:dataObjectContext:circumstanceEngine:memoriesExperimentService:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x10794bee4

// -[SCMemoriesSnapDocSaveManager saveSnap:saveSource:storyMetadata:]
// Type encoding: @40@0:8@16Q24@32
// Implementation: 0x10794c178

// -[SCMemoriesSnapDocSaveManager _saveSnap:saveSource:storyMetadata:snapDocKey:]
// Type encoding: @48@0:8@16Q24@32@40
// Implementation: 0x10794c638

// -[SCMemoriesSnapDocSaveManager _defaultNotImplemented]
// Type encoding: @16@0:8
// Implementation: 0x10794c7cc

// -[SCMemoriesSnapDocSaveManager _handleStorySave:storyMetadata:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10794c82c

// -[SCMemoriesSnapDocSaveManager _handleSnapDocDataMutatingSave:saveSource:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x10794c9c4

// -[SCMemoriesSnapDocSaveManager _handleSendOrPostAutoSave:saveSource:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x10794cb98

// -[SCMemoriesSnapDocSaveManager _handleSnapDocDataMutating:snapDocKey:saveData:saveSource:subject:]
// Type encoding: v56@0:8@16@24@32Q40@48
// Implementation: 0x10794ce28

// -[SCMemoriesSnapDocSaveManager _mapToDataMutatingSharedStory:storyMetadata:subject:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10794d160

// -[SCMemoriesSnapDocSaveManager _mapToDataMutatingSnapDocBasedSnap:snapDocKey:saveSource:saveData:originalCreateTimeUtc:subject:]
// Type encoding: v64@0:8@16@24Q32@40@48@56
// Implementation: 0x10794da54

// -[SCMemoriesSnapDocSaveManager _mapToDataMutatingSnapDocBasedSnap:snapDocKey:saveSource:saveData:originalCreateTimeUtc:snapDoc:mediaAssets:orientation:subject:]
// Type encoding: v88@0:8@16@24Q32@40@48@56@64q72@80
// Implementation: 0x10794e608

// -[SCMemoriesSnapDocSaveManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10794ed20

@end
