// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesAddSnapsDataProvider
// Superclass: NSObject
// Address: 0x112a98c78

@interface SCMemoriesAddSnapsDataProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: containerViewController; attributes: T@"UIViewController<SCPageNameLogging>",W,N,V_containerViewController
// Property: delegate; attributes: T@"<SCMemoriesAddSnapsDataProviderDelegate>",W,N,V_delegate
// Property: tabControllers; attributes: T@"NSArray",R,N

// -[SCMemoriesAddSnapsDataProvider initWithActionHandler:disabledSnapIds:config:cloudSync:gridTabsService:memoriesCameraRollTabService:currentPageTracker:cameraRollFirst:grapheneRegistry:applicationLifecycleEvents:cameraConfig:circumstanceEngine:cameraRollAlbumPickerScopeExposer:memoriesExperimentService:]
// Type encoding: @124@0:8@16@24@32@40@48@56@64B72@76@84@92@100@108@116
// Implementation: 0x105cbb800

// -[SCMemoriesAddSnapsDataProvider tabControllers]
// Type encoding: @16@0:8
// Implementation: 0x105cbbaec

// -[SCMemoriesAddSnapsDataProvider selectedItemCount]
// Type encoding: Q16@0:8
// Implementation: 0x105cbbde8

// -[SCMemoriesAddSnapsDataProvider selectedGalleryItems]
// Type encoding: @16@0:8
// Implementation: 0x105cbbf24

// -[SCMemoriesAddSnapsDataProvider _selectedSnapItems]
// Type encoding: @16@0:8
// Implementation: 0x105cbc0a4

// -[SCMemoriesAddSnapsDataProvider selectedGallerySnaps]
// Type encoding: @16@0:8
// Implementation: 0x105cbc224

// -[SCMemoriesAddSnapsDataProvider selectedCameraRollItemsEligibleForStory]
// Type encoding: B16@0:8
// Implementation: 0x105cbc37c

// -[SCMemoriesAddSnapsDataProvider _updateCloudSyncLoadingState]
// Type encoding: v16@0:8
// Implementation: 0x105cbc518

// -[SCMemoriesAddSnapsDataProvider cloudSync:didChangeStatus:isBackingUpNow:mayUpload:requiresUpgrade:]
// Type encoding: v44@0:8@16Q24B32B36B40
// Implementation: 0x105cbc63c

// -[SCMemoriesAddSnapsDataProvider tabController:browseSelected:initialItemId:items:fromView:context:]
// Type encoding: v64@0:8@16q24@32@40@48@56
// Implementation: 0x105cbc69c

// -[SCMemoriesAddSnapsDataProvider tabController:browseSelected:initialItemId:items:fromView:context:galleryItemIdToSnapsMap:galleryItemIdToPHAssetsMap:itemLevelIdentifiersEligibleForSingleSnapFeed:]
// Type encoding: v88@0:8@16q24@32@40@48@56@64@72@80
// Implementation: 0x105cbc6a0

// -[SCMemoriesAddSnapsDataProvider tabController:requestsSelectMode:isFromLongPress:]
// Type encoding: B32@0:8@16B24B28
// Implementation: 0x105cbc6a4

// -[SCMemoriesAddSnapsDataProvider tabControllerRequestsNavigationToTab:]
// Type encoding: B24@0:8Q16
// Implementation: 0x105cbc6ac

// -[SCMemoriesAddSnapsDataProvider tabControllerRequestsNavigationToTab:withAutoScrollItem:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x105cbc6b4

// -[SCMemoriesAddSnapsDataProvider tabController:requestsAddToStorySelectModeForItem:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105cbc6b8

// -[SCMemoriesAddSnapsDataProvider cameraRollTabControllerDidDisplayAlbumsPicker:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cbc6bc

// -[SCMemoriesAddSnapsDataProvider cameraRollTabControllerDidDismissAlbumsPicker:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cbc6c0

// -[SCMemoriesAddSnapsDataProvider tabControllerDidChangeScrollContentOffsetWithTabController:contentOffset:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x105cbc6c4

// -[SCMemoriesAddSnapsDataProvider tabController:didChangeDisplayedContent:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105cbc6c8

// -[SCMemoriesAddSnapsDataProvider tabController:didChangeSelected:forGalleryItem:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x105cbc6cc

// -[SCMemoriesAddSnapsDataProvider tabController:didChangeSelected:forGallerySnapItem:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x105cbc700

// -[SCMemoriesAddSnapsDataProvider tabController:didChangeSelected:forItems:snapItems:]
// Type encoding: v44@0:8@16B24@28@36
// Implementation: 0x105cbc734

// -[SCMemoriesAddSnapsDataProvider tabControllerWillBeginDragging:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cbc768

// -[SCMemoriesAddSnapsDataProvider tabControllerDidEndDragging:willDecelerate:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105cbc76c

// -[SCMemoriesAddSnapsDataProvider tabControllerDidEndDecelerating:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cbc770

// -[SCMemoriesAddSnapsDataProvider tabControllerDidBeginEditing:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cbc774

// -[SCMemoriesAddSnapsDataProvider tabControllerDidEndEditing:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cbc778

// -[SCMemoriesAddSnapsDataProvider tabControllerTopInset:]
// Type encoding: d24@0:8@16
// Implementation: 0x105cbc77c

// -[SCMemoriesAddSnapsDataProvider operaPresenterTopInset]
// Type encoding: d16@0:8
// Implementation: 0x105cbc784

// -[SCMemoriesAddSnapsDataProvider tabControllerCollectionViewIsFullyVisible:]
// Type encoding: B24@0:8@16
// Implementation: 0x105cbc78c

// -[SCMemoriesAddSnapsDataProvider tabControllerDidPresentOpera:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cbc794

// -[SCMemoriesAddSnapsDataProvider tabControllerDidDismissOpera:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cbc798

// -[SCMemoriesAddSnapsDataProvider tabController:didTapEditStory:isCreatingStoryFromSelection:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x105cbc79c

// -[SCMemoriesAddSnapsDataProvider displayedTabController]
// Type encoding: @16@0:8
// Implementation: 0x105cbc7a0

// -[SCMemoriesAddSnapsDataProvider tabController:didTriggerCreateMashupForStory:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105cbc7a8

// -[SCMemoriesAddSnapsDataProvider tabControllerDidFinishFirstDataLoad:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cbc7ac

// -[SCMemoriesAddSnapsDataProvider containerViewController]
// Type encoding: @16@0:8
// Implementation: 0x105cbc7b0

// -[SCMemoriesAddSnapsDataProvider setContainerViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cbc7c8

// -[SCMemoriesAddSnapsDataProvider delegate]
// Type encoding: @16@0:8
// Implementation: 0x105cbc7d4

// -[SCMemoriesAddSnapsDataProvider setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cbc7ec

// -[SCMemoriesAddSnapsDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105cbc7f8

@end
