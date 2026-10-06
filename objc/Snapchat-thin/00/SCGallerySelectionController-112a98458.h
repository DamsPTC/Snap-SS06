// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGallerySelectionController
// Superclass: NSObject
// Address: 0x112a98458

@interface SCGallerySelectionController

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGallerySelectionController initWithPresentingViewController:delegate:dataSource:mergedDataSource:encryptedContentManager:cachingMediaManager:dataObjectContext:galleryLogger:editDataMutator:favoriteDataMutator:cloudFS:contentDelivery:circumstanceEngine:musicSelectionLoader:musicMediaLoader:grapheneRegistry:actionHandler:userTrackedLogger:boomboxScopeExposer:boomboxScopeServices:memoriesEntryThumbnailGeneratorBuilder:memoriesSnapThumbnailGeneratorBuilder:memoriesEntrySyncStatusGeneratorBuilder:composerRuntime:memoriesExperimentService:snapDocDownloadingService:memoriesPickerV2ScopeExposer:memoriesPickerV2ScopeServices:memoriesSnapDocSaveManager:memoriesSaveManager:snapDocFactory:memoriesMashupSnapDocFactory:snapDocEditorFactory:mlModelProvider:collageManager:crCollageManager:crMashupManager:snapRenderer:docObjectContext:snapInfoFetcher:musicSyncTrackLoader:memoriesQuickCutScopeExposer:deckHierarchyFactory:]
// Type encoding: @360@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256@264@272@280@288@296@304@312@320@328@336@344@352
// Implementation: 0x105c9158c

// -[SCGallerySelectionController enterSelectionModeWithTabType:headerBarType:isFromLongPress:]
// Type encoding: v36@0:8Q16Q24B32
// Implementation: 0x105c91ed8

// -[SCGallerySelectionController exitSelectionMode]
// Type encoding: v16@0:8
// Implementation: 0x105c91f40

// -[SCGallerySelectionController selectionUpdated]
// Type encoding: v16@0:8
// Implementation: 0x105c920f8

// -[SCGallerySelectionController isSelectMode]
// Type encoding: B16@0:8
// Implementation: 0x105c921e4

// -[SCGallerySelectionController bottomInset]
// Type encoding: d16@0:8
// Implementation: 0x105c921f4

// -[SCGallerySelectionController _loadFooterBarIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x105c9222c

// -[SCGallerySelectionController _loadHeaderBarIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x105c92248

// -[SCGallerySelectionController _promptToMakeSelectedItemsPrivate:]
// Type encoding: v20@0:8B16
// Implementation: 0x105c92700

// -[SCGallerySelectionController _updateHeaderCount]
// Type encoding: v16@0:8
// Implementation: 0x105c9284c

// -[SCGallerySelectionController _updateFooterActionItemsWithSelectedGalleryItems:selectedGallerySnaps:totalSelectedItemsCount:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x105c92934

// -[SCGallerySelectionController _processFooterActionItemsWithSelectedGalleryItems:selectedGallerySnaps:totalSelectedItemsCount:hasExistingStoriesToShowAddToStoryOption:completion:]
// Type encoding: v52@0:8@16@24Q32B40@?44
// Implementation: 0x105c92c70

// -[SCGallerySelectionController _logMEOUnhideButtonShownIfNeededWithFooterActionItems:selectedGalleryItems:selectedGallerySnaps:numberOfPrivateEntries:numberOfTooLongToImportVideoAssets:containBackupFailedEntries:]
// Type encoding: v60@0:8@16@24@32Q40Q48B56
// Implementation: 0x105c93b20

// -[SCGallerySelectionController _setupActionBar]
// Type encoding: v16@0:8
// Implementation: 0x105c94088

// -[SCGallerySelectionController _setupMemoriesActionBarWithSelectedItemCount:footerActionItems:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x105c945d4

// -[SCGallerySelectionController _shouldShowEditButtonForSelectedItemCount:footerActionItems:]
// Type encoding: B32@0:8Q16@24
// Implementation: 0x105c94ac0

// -[SCGallerySelectionController _toggleCreateVideoButtonVisibility:]
// Type encoding: v20@0:8B16
// Implementation: 0x105c94be4

// -[SCGallerySelectionController _createVideoTreatmentConfig]
// Type encoding: {?=qB}16@0:8
// Implementation: 0x105c94bec

// -[SCGallerySelectionController _didTapCreateVideoButton]
// Type encoding: v16@0:8
// Implementation: 0x105c94c58

// -[SCGallerySelectionController removeQuickCutScopeWithScope:]
// Type encoding: @24@0:8@16
// Implementation: 0x105c94e4c

// -[SCGallerySelectionController onDismiss]
// Type encoding: v16@0:8
// Implementation: 0x105c94e9c

// -[SCGallerySelectionController didPressSendToWithActionBar:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c94ea0

// -[SCGallerySelectionController _didPressSendToWithActionBar]
// Type encoding: v16@0:8
// Implementation: 0x105c94ea4

// -[SCGallerySelectionController _presentingViewController]
// Type encoding: @16@0:8
// Implementation: 0x105c950a8

// -[SCGallerySelectionController _presentDisabledAlertForTitle:dialogText:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105c9511c

// -[SCGallerySelectionController _presentAlertForMashupVC:dialogText:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105c95298

// -[SCGallerySelectionController _presentStartMashupGenerationDialog]
// Type encoding: v16@0:8
// Implementation: 0x105c95594

// -[SCGallerySelectionController _presentDisabledAlertForItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c956c4

// -[SCGallerySelectionController galleryFooterActionItemDidTap:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c95784

// -[SCGallerySelectionController _galleryFooterBarDidPressDebugCRCollage]
// Type encoding: v16@0:8
// Implementation: 0x105c95924

// -[SCGallerySelectionController _galleryFooterBarDidPressDebugCRMashup]
// Type encoding: v16@0:8
// Implementation: 0x105c95cb0

// -[SCGallerySelectionController _galleryFooterBarDidPressDebugCollage]
// Type encoding: v16@0:8
// Implementation: 0x105c96038

// -[SCGallerySelectionController _galleryFooterBarDidPressDebugSoundSyncedCollage]
// Type encoding: v16@0:8
// Implementation: 0x105c96040

// -[SCGallerySelectionController _soundSyncedMusicMetadata]
// Type encoding: @16@0:8
// Implementation: 0x105c964bc

// -[SCGallerySelectionController _generateTestCollageWithCreativeTools:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c969d4

// -[SCGallerySelectionController _galleryFooterBarDidPressInspectingSnapBackupStatus]
// Type encoding: v16@0:8
// Implementation: 0x105c96e18

// -[SCGallerySelectionController _galleryFooterBarDidPressInspectingTinyClipResult]
// Type encoding: v16@0:8
// Implementation: 0x105c970f8

// -[SCGallerySelectionController _galleryFooterBarDidPressTinyClipDemoWithShouldEnforceBaseMedia:]
// Type encoding: v20@0:8B16
// Implementation: 0x105c97758

// -[SCGallerySelectionController _requestBaseMediaForGallerySnap:snapDetail:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105c97d9c

// -[SCGallerySelectionController _displayTinyClipDemoViewControllerWithImage:sourceLevel:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105c97ee4

// -[SCGallerySelectionController _galleryFooterBarDidPressDebugMashup]
// Type encoding: v16@0:8
// Implementation: 0x105c98164

// -[SCGallerySelectionController _galleryFooterBarRenameStory]
// Type encoding: v16@0:8
// Implementation: 0x105c985f8

// -[SCGallerySelectionController _galleryFooterBarEditItem]
// Type encoding: v16@0:8
// Implementation: 0x105c988cc

// -[SCGallerySelectionController _prepareFooterBarEditItemForPreview:snapsToEdit:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105c98c74

// -[SCGallerySelectionController _prepareEntryForPreview:snapsToEdit:shouldUseRegularPreview:musicSelection:showSaveButton:shouldDismissAfterSharing:shouldSaveAsNewCopy:shouldBackupClientGenFeaturedStory:shouldExitSelectionMode:]
// Type encoding: v64@0:8@16@24B32@36B44B48B52B56B60
// Implementation: 0x105c98d70

// -[SCGallerySelectionController _galleryFooterBarAddToStory]
// Type encoding: v16@0:8
// Implementation: 0x105c9987c

// -[SCGallerySelectionController _galleryFooterBarDidPressStoryButton]
// Type encoding: v16@0:8
// Implementation: 0x105c999b0

// -[SCGallerySelectionController _galleryFooterBarDidPressShareButton]
// Type encoding: v16@0:8
// Implementation: 0x105c99b80

// -[SCGallerySelectionController _galleryFooterBarDidPressTrashButton]
// Type encoding: v16@0:8
// Implementation: 0x105c99d3c

// -[SCGallerySelectionController _galleryFooterBarDidPressLockButton]
// Type encoding: v16@0:8
// Implementation: 0x105c99ef8

// -[SCGallerySelectionController _galleryFooterBarDidPressUnlockButton]
// Type encoding: v16@0:8
// Implementation: 0x105c99f2c

// -[SCGallerySelectionController _galleryFooterBarDidPressBoomboxButton]
// Type encoding: v16@0:8
// Implementation: 0x105c99f34

// -[SCGallerySelectionController _galleryFooterBarDidPressDebugViewerButton]
// Type encoding: v16@0:8
// Implementation: 0x105c9a234

// -[SCGallerySelectionController _galleryFooterBarDidPressDirectorModeButton]
// Type encoding: v16@0:8
// Implementation: 0x105c9a2bc

// -[SCGallerySelectionController _openDirectorModeWithSelectedSnaps]
// Type encoding: v16@0:8
// Implementation: 0x105c9a2ec

// -[SCGallerySelectionController _didPressCancelButton]
// Type encoding: v16@0:8
// Implementation: 0x105c9a3b8

// -[SCGallerySelectionController _updateItemsWithNeedFavorited:isPlural:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x105c9a3e8

// -[SCGallerySelectionController storySelectViewController:didSelectStory:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105c9aa84

// -[SCGallerySelectionController boomboxScopeDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c9acb4

// -[SCGallerySelectionController _setUpDisposables]
// Type encoding: v16@0:8
// Implementation: 0x105c9acd4

// -[SCGallerySelectionController memoriesPickerV2DidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x105c9af14

// -[SCGallerySelectionController _createTemplateWithSnapDoc:medias:completionBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105c9af18

// -[SCGallerySelectionController onItemsSelectedWithItems:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c9b164

// -[SCGallerySelectionController _onItemsSelectedWithItems:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c9b1f8

// -[SCGallerySelectionController _saveMashup:createdFromSnapIds:templateId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105c9bf9c

// -[SCGallerySelectionController onBackPressed]
// Type encoding: v16@0:8
// Implementation: 0x105c9c4b0

// -[SCGallerySelectionController onCameraRollAlbumClickedWithCameraRollAlbumId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c9c500

// -[SCGallerySelectionController onItemClickedWithItem:thumbnailCell:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105c9c504

// -[SCGallerySelectionController onTrimItemTappedWithItem:remainingDurationMs:selectedItems:disallowDurationChange:]
// Type encoding: @44@0:8@16@24@32B40
// Implementation: 0x105c9c508

// -[SCGallerySelectionController multiSelectSendButtonTapped]
// Type encoding: v16@0:8
// Implementation: 0x105c9c510

// -[SCGallerySelectionController multiSelectCreateVideoButtonTapped]
// Type encoding: v16@0:8
// Implementation: 0x105c9c514

// -[SCGallerySelectionController multiSelectEditButtonTapped]
// Type encoding: v16@0:8
// Implementation: 0x105c9c518

// -[SCGallerySelectionController multiSelectMoreButtonTapped]
// Type encoding: v16@0:8
// Implementation: 0x105c9c51c

// -[SCGallerySelectionController _logGallerySnapSelectWithExitAction:videoCreateSessionId:selectMode:]
// Type encoding: v40@0:8q16@24q32
// Implementation: 0x105c9c9e0

// -[SCGallerySelectionController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105c9ce8c

@end
