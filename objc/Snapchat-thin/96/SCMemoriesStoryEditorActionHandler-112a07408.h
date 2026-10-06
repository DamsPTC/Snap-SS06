// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesStoryEditorActionHandler
// Superclass: NSObject
// Address: 0x112a07408

@interface SCMemoriesStoryEditorActionHandler

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: operaPresenter; attributes: T@"<SCMemoriesOperaSnapsPresenting>",R,N,V_operaPresenter
// Property: presentingViewController; attributes: T@"UIViewController<SCPageNameLogging>",W,N,V_presentingViewController

// -[SCMemoriesStoryEditorActionHandler initWithDataObjectContext:performer:addSnapsScopeExposer:memoriesPickerScopeServices:userTrackedLogger:videoImportServices:memoriesDeletionMutating:memoriesRetryMutating:memoriesEditMutating:memoriesHighlightMutating:memoriesReorderMutating:memoriesActionMenuScopeExposer:memoriesActionMenuScopeServices:memoriesLegacyOperaPresenterBuilder:memoriesMergedDataSource:memoriesSnapThumbnailGeneratorBuilder:circumstanceEngine:memoriesFeaturedStoryDataMutator:memoriesHighlightContentDataSource:]
// Type encoding: @168@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160
// Implementation: 0x104ef9668

// -[SCMemoriesStoryEditorActionHandler handleAction:actionModel:completion:]
// Type encoding: v40@0:8Q16@24@?32
// Implementation: 0x104ef9b10

// -[SCMemoriesStoryEditorActionHandler _handleReorderForActionModel:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104efa0cc

// -[SCMemoriesStoryEditorActionHandler _handleDeleteOriginalEntry:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104efa220

// -[SCMemoriesStoryEditorActionHandler _handleSaveStoryForActionModel:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104efa3e8

// -[SCMemoriesStoryEditorActionHandler _handleSaveEditsForActionModel:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104efa6d4

// -[SCMemoriesStoryEditorActionHandler _updateSnapsForEntry:byEntryChangeResult:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x104efa968

// -[SCMemoriesStoryEditorActionHandler _deleteSnapsFromEntry:snapsToDelete:snapOrderToUpdate:newTitle:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x104efadcc

// -[SCMemoriesStoryEditorActionHandler _reorderSnapsToEntry:snapOrderToUpdate:newTitle:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x104efb040

// -[SCMemoriesStoryEditorActionHandler _handleDeleteCopyForActionModel:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104efb1b8

// -[SCMemoriesStoryEditorActionHandler _handleDeleteForActionModel:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104efb3a8

// -[SCMemoriesStoryEditorActionHandler _handleUpdateStoryTitleForActionModel:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104efb57c

// -[SCMemoriesStoryEditorActionHandler _userContextWithActionString:]
// Type encoding: @24@0:8@16
// Implementation: 0x104efb774

// -[SCMemoriesStoryEditorActionHandler _handleAddSnapForActionModel:disabledSnapIds:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104efb840

// -[SCMemoriesStoryEditorActionHandler _handlePresentActionMenuForActionModel:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104efbb28

// -[SCMemoriesStoryEditorActionHandler requestToDismissPage]
// Type encoding: v16@0:8
// Implementation: 0x104efbc68

// -[SCMemoriesStoryEditorActionHandler memoriesActionMenuHelperDidTriggerAddToStory:item:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104efbce4

// -[SCMemoriesStoryEditorActionHandler memoriesActionMenuHelperDidTapEntry:item:fromView:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104efbff0

// -[SCMemoriesStoryEditorActionHandler memoriesActionMenuHelperDidTapEditStory:item:fromView:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104efbff4

// -[SCMemoriesStoryEditorActionHandler memoriesActionMenuHelperDidTapViewSnapsFromView:]
// Type encoding: v24@0:8@16
// Implementation: 0x104efbff8

// -[SCMemoriesStoryEditorActionHandler memoriesActionMenuHelperDidTapRemoveStories]
// Type encoding: v16@0:8
// Implementation: 0x104efbffc

// -[SCMemoriesStoryEditorActionHandler memoriesActionMenuHelperDidTriggerCreateMashupForStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x104efc000

// -[SCMemoriesStoryEditorActionHandler memoriesActionMenuHelperDidTriggerRefetchLatestFeaturedStories]
// Type encoding: v16@0:8
// Implementation: 0x104efc004

// -[SCMemoriesStoryEditorActionHandler memoriesActionMenuHelperDidTriggerResetAllFeaturedStoriesViewProgress]
// Type encoding: v16@0:8
// Implementation: 0x104efc008

// -[SCMemoriesStoryEditorActionHandler memoriesActionMenuHelperDidTriggerInspectOriginalSnapsWithSnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x104efc00c

// -[SCMemoriesStoryEditorActionHandler operaPresenter]
// Type encoding: @16@0:8
// Implementation: 0x104efc010

// -[SCMemoriesStoryEditorActionHandler presentingViewController]
// Type encoding: @16@0:8
// Implementation: 0x104efc018

// -[SCMemoriesStoryEditorActionHandler setPresentingViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x104efc030

// -[SCMemoriesStoryEditorActionHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104efc03c

@end
