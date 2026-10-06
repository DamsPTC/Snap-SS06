// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesStoryEditorDataSource
// Superclass: NSObject
// Address: 0x112b0b9f8

@interface SCMemoriesStoryEditorDataSource

// Property: originalEntry; attributes: T@"<SCGalleryEntry>",R,N,V_originalEntry
// Property: entry; attributes: T@"<SCGalleryEntry>",R,N,V_entry
// Property: headerViewModel; attributes: T@"SCMemoriesStoryEditorHeaderViewModel",R,N
// Property: viewModel; attributes: T@"SCMemoriesSnapGroupViewModel",R,N,V_viewModel
// Property: hasUnsavedEdits; attributes: TB,R,N,V_hasUnsavedEdits
// Property: isNewStoryFromSeletingSnapsSaved; attributes: TB,R,N,V_isNewStoryFromSeletingSnapsSaved
// Property: isFailedEntry; attributes: TB,R,N
// Property: storyEditorType; attributes: TQ,R,N,V_storyEditorType
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesStoryEditorDataSource initWithWithPerformer:originalEntry:storyEditorType:memoriesHighlightContentDataSource:memoriesFeaturedStoryDataMutator:memoriesMergedDataSource:memoriesExperimentService:memoriesMonetizationServices:]
// Type encoding: @80@0:8@16@24Q32@40@48@56@64@72
// Implementation: 0x106a0f368

// -[SCMemoriesStoryEditorDataSource dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106a0f5b8

// -[SCMemoriesStoryEditorDataSource markNewStoryFromSeletingSnapsSaved]
// Type encoding: v16@0:8
// Implementation: 0x106a0f640

// -[SCMemoriesStoryEditorDataSource resetUpdateStates]
// Type encoding: v16@0:8
// Implementation: 0x106a0f70c

// -[SCMemoriesStoryEditorDataSource cleanUp]
// Type encoding: v16@0:8
// Implementation: 0x106a0f850

// -[SCMemoriesStoryEditorDataSource addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a0f8d0

// -[SCMemoriesStoryEditorDataSource removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a0f8f8

// -[SCMemoriesStoryEditorDataSource isFailedEntry]
// Type encoding: B16@0:8
// Implementation: 0x106a0f900

// -[SCMemoriesStoryEditorDataSource headerViewModel]
// Type encoding: @16@0:8
// Implementation: 0x106a0f948

// -[SCMemoriesStoryEditorDataSource _copyOriginalEntryAndObserveBothEntries]
// Type encoding: v16@0:8
// Implementation: 0x106a0fa00

// -[SCMemoriesStoryEditorDataSource _updateEntryWithTempEntry:snaps:updateType:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x106a0fce8

// -[SCMemoriesStoryEditorDataSource _isSavingFeaturedStory]
// Type encoding: B16@0:8
// Implementation: 0x106a0fd80

// -[SCMemoriesStoryEditorDataSource _unobserveOriginalEntry]
// Type encoding: v16@0:8
// Implementation: 0x106a0fdc8

// -[SCMemoriesStoryEditorDataSource _observeOriginalEntry]
// Type encoding: v16@0:8
// Implementation: 0x106a0fe04

// -[SCMemoriesStoryEditorDataSource _unobserveEntry]
// Type encoding: v16@0:8
// Implementation: 0x106a0ff78

// -[SCMemoriesStoryEditorDataSource _observeEntry]
// Type encoding: v16@0:8
// Implementation: 0x106a0ffb4

// -[SCMemoriesStoryEditorDataSource _updateEntry:updateType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106a10248

// -[SCMemoriesStoryEditorDataSource _updateViewModelWithSnaps:updateType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106a1041c

// -[SCMemoriesStoryEditorDataSource _isStoriesTabEmptyStateFlow]
// Type encoding: B16@0:8
// Implementation: 0x106a10b98

// -[SCMemoriesStoryEditorDataSource isSavingFeaturedStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a10ba8

// -[SCMemoriesStoryEditorDataSource didSaveFeaturedStory:savedStory:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a10bac

// -[SCMemoriesStoryEditorDataSource didUpdateTitleForPlaceholderEntry:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a10d04

// -[SCMemoriesStoryEditorDataSource didCreateStoryForPlaceholderEntry:newEntry:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a10e1c

// -[SCMemoriesStoryEditorDataSource entry]
// Type encoding: @16@0:8
// Implementation: 0x106a10fc0

// -[SCMemoriesStoryEditorDataSource originalEntry]
// Type encoding: @16@0:8
// Implementation: 0x106a10fc8

// -[SCMemoriesStoryEditorDataSource viewModel]
// Type encoding: @16@0:8
// Implementation: 0x106a10fd0

// -[SCMemoriesStoryEditorDataSource hasUnsavedEdits]
// Type encoding: B16@0:8
// Implementation: 0x106a10fd8

// -[SCMemoriesStoryEditorDataSource isNewStoryFromSeletingSnapsSaved]
// Type encoding: B16@0:8
// Implementation: 0x106a10fe0

// -[SCMemoriesStoryEditorDataSource storyEditorType]
// Type encoding: Q16@0:8
// Implementation: 0x106a10fe8

// -[SCMemoriesStoryEditorDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106a10ff0

@end
