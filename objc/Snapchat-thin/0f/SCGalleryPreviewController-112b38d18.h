// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGalleryPreviewController
// Superclass: NSObject
// Address: 0x112b38d18

@interface SCGalleryPreviewController

// Property: delegate; attributes: T@"<SCGalleryPreviewControllerDelegate>",W,N,V_delegate
// Property: previewWorkflowDelegate; attributes: T@"<SCPreviewWorkflowDelegate>",W,N,V_previewWorkflowDelegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: previewViewController; attributes: T@"UIViewController<SCPreviewViewController><SCPreviewViewControllerSending>",R,N,V_previewViewController

// -[SCGalleryPreviewController initWithBlizzardLogger:cachingMediaManager:dataObjectContext:encryptedContentManager:userSession:memoriesEngagementLogger:previewScopeExposer:previewScopeBuilderServices:ucoMemoriesServices:spectaclesAuxiliaryContentServices:videoImportServices:snapDocManager:circumstanceEngine:complianceEngine:activeVideoPaths:previewVideoProviderServices:musicSelectionLoader:memoriesMediaRetriever:ucoServices:cameraConfiguration:stickerInjector:mediaImportEditorScopeExposer:applicationLifecycleEvents:previewABProvider:snapEditorTweakServices:snapEditorScopeExposer:snapEditorScopeServices:snapDocEditorFactory:snapchatterFetcher:memoriesExperimentService:memoriesSnapDocEncryptionManager:memoriesCloudFSServices:deckServices:checkInOptionFetcher:contentPostSendUpsellServices:ucoDataStore:userLocationPermissionManager:locationProvider:memoriesEncryptedDatabase:tinsel:creativeToolsABProvider:imageProcessRenderingSessionFactory:memoriesMergedDataSource:memoriesSaveServices:previewRewriteSnapRendererServices:]
// Type encoding: @376@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256@264@272@280@288@296@304@312@320@328@336@344@352@360@368
// Implementation: 0x106d7a8b8

// -[SCGalleryPreviewController presentPreviewWithGalleryEntry:gallerySnap:cloudFile:assetCloudFiles:fromViewController:transitioningDelegate:animated:userContext:musicSelection:replyConfiguration:triggeringSection:]
// Type encoding: v104@0:8@16@24@32@40@48@56q64q72@80@88q96
// Implementation: 0x106d7b2e4

// -[SCGalleryPreviewController presentPreviewWithGalleryEntry:gallerySnaps:primarySnap:cloudFiles:snapAssetCloudFilesMap:entryAssetCloudFilesMap:lens:shouldShowSaveChangesPrompt:fromViewController:shouldShowPostStorySelection:transitioningDelegate:animated:userContext:snapDoc:preselectedPreviewTool:musicSelection:shouldUseRegularPreview:showSaveButton:shouldDismissAfterSharing:shouldSaveAsNewCopy:shouldBackupClientGenFeaturedStory:replyConfiguration:triggeringSection:]
// Type encoding: v172@0:8@16@24@32@40@48@56@64B72@76B84@88q96q104@112q120@128B136B140B144B148B152@156q164
// Implementation: 0x106d7b578

// -[SCGalleryPreviewController presentPreviewWithSnapDoc:shouldShowSaveChangesPrompt:fromViewController:shouldShowPostStorySelection:quickCutConfig:transitioningDelegate:animated:userContext:preselectedPreviewTool:snapPageSource:triggeringSection:]
// Type encoding: v96@0:8@16B24@28B36@40@48q56q64q72q80q88
// Implementation: 0x106d7b62c

// -[SCGalleryPreviewController presentPreviewWithSnapDoc:shouldShowSaveChangesPrompt:fromViewController:shouldShowPostStorySelection:replyConfiguration:musicSelection:transitioningDelegate:animated:userContext:preselectedPreviewTool:snapPageSource:triggeringSection:]
// Type encoding: v104@0:8@16B24@28B36@40@48@56q64q72q80q88q96
// Implementation: 0x106d7b8e8

// -[SCGalleryPreviewController _applySpotlightPreselectFromReplyConfiguration:toLegacyConfig:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106d7beb8

// -[SCGalleryPreviewController presentPreviewWithPhotoAsset:fromViewController:shouldShowPostStorySelection:transitioningDelegate:animated:userContext:preselectedPreviewTool:memoriesCRFeaturedStory:replyConfiguration:musicSelection:triggeringSection:]
// Type encoding: v100@0:8@16@24B32@36q44q52q60@68@76@84q92
// Implementation: 0x106d7bf88

// -[SCGalleryPreviewController _importVideoAsset:timeRange:progress:completion:]
// Type encoding: v88@0:8@16{?={?=qiIq}{?=qiIq}}24@?72@?80
// Implementation: 0x106d7d630

// -[SCGalleryPreviewController presentPreviewForQuickSendWithGalleryEntry:gallerySnap:cloudFiles:snapAssetCloudFiles:entryAssetCloudFiles:snapDoc:fromViewController:prefilledCaption:recipientName:recipientDisplayName:recipientUserId:recipientIsChatGroup:userContext:replyConfiguration:musicSelection:triggeringSection:]
// Type encoding: v140@0:8@16@24@32@40@48@56@64@72@80@88@96B104q108@116@124q132
// Implementation: 0x106d7e410

// -[SCGalleryPreviewController _previewViewControllerWillPresent]
// Type encoding: v16@0:8
// Implementation: 0x106d7e7a8

// -[SCGalleryPreviewController didCancelFromPreview:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d7e7b4

// -[SCGalleryPreviewController didSendChatMessage]
// Type encoding: v16@0:8
// Implementation: 0x106d7e81c

// -[SCGalleryPreviewController didPostStoryWithStoryTypes:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d7e8e0

// -[SCGalleryPreviewController didSendSnapsAndPostToStory:storyTypes:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x106d7e968

// -[SCGalleryPreviewController previewViewControllerDidExitSaveAsCopy:copySaved:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106d7e9f8

// -[SCGalleryPreviewController _previewViewControllerDidExitSaveAsCopy]
// Type encoding: v16@0:8
// Implementation: 0x106d7eb04

// -[SCGalleryPreviewController didSaveAndDismissIfNeeded:fromViewController:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x106d7eb84

// -[SCGalleryPreviewController _didSaveAndDismissIfNeededOnMainThread:fromViewController:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x106d7eca4

// -[SCGalleryPreviewController previewViewController:didEditAsset:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106d7ee70

// -[SCGalleryPreviewController previewViewController:didCopyAsset:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106d7ee74

// -[SCGalleryPreviewController previewViewControllerDidSendOrPostPhoto:hasUnsavedChange:previewThumbnailFuture:thumbnailAspectRatio:videoNoSoundLogger:]
// Type encoding: v52@0:8@16B24@28d36@44
// Implementation: 0x106d7ee78

// -[SCGalleryPreviewController previewViewControllerDidSendOrPostVideo:hasUnsavedChange:previewBlob:thumbnailAspectRatio:captionDataProvider:videoNoSoundLogger:videoTrackingServices:contentDeliveryServices:stickerInjector:creativeToolsABProvider:itemViewService:]
// Type encoding: v100@0:8@16B24@28d36@44@52@60@68@76@84@92
// Implementation: 0x106d7f3fc

// -[SCGalleryPreviewController previewViewControllerDidExitAutoSave]
// Type encoding: v16@0:8
// Implementation: 0x106d7fa68

// -[SCGalleryPreviewController _castedPreviewViewControllerFromViewController:]
// Type encoding: @24@0:8@16
// Implementation: 0x106d7fad8

// -[SCGalleryPreviewController _applicationWillEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x106d7fb30

// -[SCGalleryPreviewController _presentPreviewPrepSnapdocPlaceholderImageWithGalleryEntry:gallerySnaps:primarySnap:cloudFiles:snapAssetCloudFilesMap:entryAssetCloudFilesMap:lens:prefilledCaption:quickSendRecipientName:quickSendRecipientDisplayName:quickSendRecipientUserId:quickSendIsToChatGroup:shouldShowSaveChangesPrompt:shouldShowPostStorySelection:fromViewController:transitioningDelegate:animated:userContext:snapDoc:preselectedPreviewTool:replyConfiguration:musicSelection:shouldUseRegularPreview:showSaveButton:shouldDismissAfterSharing:shouldSaveAsNewCopy:shouldBackupClientGenFeaturedStory:triggeringSection:]
// Type encoding: v208@0:8@16@24@32@40@48@56@64@72@80@88@96B104B108B112@116@124q132q140@148q156@164@172B180B184B188B192B196q200
// Implementation: 0x106d7fbd0

// -[SCGalleryPreviewController _masterKeyDecryptSnapDoc:]
// Type encoding: @24@0:8@16
// Implementation: 0x106d80860

// -[SCGalleryPreviewController _createSnapDocFromGallerySnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x106d8092c

// -[SCGalleryPreviewController _presentPreviewWithGalleryEntry:gallerySnaps:primarySnap:cloudFiles:snapAssetCloudFilesMap:entryAssetCloudFilesMap:lens:placeholderImage:prefilledCaption:quickSendRecipientName:quickSendRecipientDisplayName:quickSendRecipientUserId:quickSendIsToChatGroup:shouldShowSaveChangesPrompt:shouldShowPostStorySelection:fromViewController:transitioningDelegate:animated:userContext:snapDoc:preselectedPreviewTool:replyConfiguration:musicSelection:shouldUseRegularPreview:showSaveButton:shouldDismissAfterSharing:shouldSaveAsNewCopy:shouldBackupClientGenFeaturedStory:triggeringSection:]
// Type encoding: v216@0:8@16@24@32@40@48@56@64@72@80@88@96@104B112B116B120@124@132q140q148@156q164@172@180B188B192B196B200B204q208
// Implementation: 0x106d80bac

// -[SCGalleryPreviewController _continuePresentPreviewWithLegacyConfig:galleryEntry:gallerySnaps:primarySnap:cloudFiles:snapAssetCloudFilesMap:entryAssetCloudFilesMap:lens:placeholderImage:prefilledCaption:quickSendRecipientName:quickSendRecipientDisplayName:quickSendRecipientUserId:quickSendIsToChatGroup:shouldShowSaveChangesPrompt:fromViewController:transitioningDelegate:animated:userContext:snapDoc:replyConfiguration:shouldUseRegularPreview:showSaveButton:shouldSaveAsNewCopy:shouldBackupClientGenFeaturedStory:]
// Type encoding: v192@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112B120B124@128@136q144q152@160@168B176B180B184B188
// Implementation: 0x106d815ec

// -[SCGalleryPreviewController _setupConfigAndPresentPreviewWithSnapDocEditor:gallerySnap:snapDocMediaIdToAssetIdMap:legacyConfig:fromViewController:transitioningDelegate:userContext:]
// Type encoding: v72@0:8@16@24@32@40@48@56q64
// Implementation: 0x106d85bec

// -[SCGalleryPreviewController _launchTrimmerWithVideoAsset:fromViewController:withCompletion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106d86008

// -[SCGalleryPreviewController _presentPreviewWithLegacyConfig:quickSendIsToChatGroup:shouldShowSaveChangesPrompt:fromViewController:transitioningDelegate:animated:userContext:snapDoc:]
// Type encoding: v72@0:8@16B24B28@32@40q48q56@64
// Implementation: 0x106d86294

// -[SCGalleryPreviewController _isSpectaclesSingleSegmentTimeline:]
// Type encoding: B24@0:8@16
// Implementation: 0x106d87528

// -[SCGalleryPreviewController _isSnapEligibleForSuperCutsEffect:]
// Type encoding: B24@0:8@16
// Implementation: 0x106d87530

// -[SCGalleryPreviewController _shouldShowMultiSnapUIForSpectacles:]
// Type encoding: B24@0:8@16
// Implementation: 0x106d87570

// -[SCGalleryPreviewController _resolveDepthDataIfNeededForGallerySnaps:primarySnap:config:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106d875c0

// -[SCGalleryPreviewController _presentPreviewMultisnapWithLegacyConfig:snapDocEditor:videoAsset:placeholderImage:fromViewController:transitioningDelegate:userContext:]
// Type encoding: v72@0:8@16@24@32@40@48@56q64
// Implementation: 0x106d8765c

// -[SCGalleryPreviewController _shouldShowPostToSpotlightActionBarForCameraRollLegacyPreviewWithPHAsset:]
// Type encoding: B24@0:8@16
// Implementation: 0x106d87b94

// -[SCGalleryPreviewController _shouldShowPostToSpotlightActionBarForHomeLegacyPreviewWithSnap:]
// Type encoding: B24@0:8@16
// Implementation: 0x106d87c10

// -[SCGalleryPreviewController _shouldShowPostToSpotlightActionBarWithSnapDoc:]
// Type encoding: B24@0:8@16
// Implementation: 0x106d87cac

// -[SCGalleryPreviewController _isVideoEligibleForSpotlightPostWithDurationSeconds:]
// Type encoding: B24@0:8d16
// Implementation: 0x106d87f58

// -[SCGalleryPreviewController _exposePreviewScopeWithSnapEditorConfig:legacyConfig:snapDocEditor:snapAssets:fromViewController:transitioningDelegate:snapId:userContext:]
// Type encoding: v80@0:8@16@24@32@40@48@56@64q72
// Implementation: 0x106d87fdc

// -[SCGalleryPreviewController _updateSnapDocWithSnapDocEditor:userContext:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106d88c5c

// -[SCGalleryPreviewController _snapEditorCaptureLocationWithLegacyConfig:]
// Type encoding: @24@0:8@16
// Implementation: 0x106d88d9c

// -[SCGalleryPreviewController _snapEditorCaptureDateWithLegacyConfig:]
// Type encoding: @24@0:8@16
// Implementation: 0x106d88e68

// -[SCGalleryPreviewController _snapEditorSaveConfigWithSnapId:userContext:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x106d88f7c

// -[SCGalleryPreviewController _snapEditorLoggingParamsWithLegacyConfig:userContext:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x106d8902c

// -[SCGalleryPreviewController _attachPreviewUIWithLegacyConfig:snapAssets:fromViewController:transitioningDelegate:previewViewController:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x106d891d8

// -[SCGalleryPreviewController _presentPreviewWithPHAsset:contentEditingInput:image:videoAsset:videoURL:embeddedMetadata:externalMediaSource:orientation:fromViewController:shouldShowPostStorySelection:transitioningDelegate:animated:userContext:preselectedPreviewTool:memoriesCRFeaturedStory:replyConfiguration:importedContentId:musicSelection:triggeringSection:]
// Type encoding: v160@0:8@16@24@32@40@48@56i64q68@76B84@88q96q104q112@120@128@136@144q152
// Implementation: 0x106d89468

// -[SCGalleryPreviewController _importGalleryAssetWithSnapDocEditor:legacyConfig:phAsset:videoAsset:image:fromViewController:transitioningDelegate:userContext:]
// Type encoding: v80@0:8@16@24@32@40@48@56@64q72
// Implementation: 0x106d8a10c

// -[SCGalleryPreviewController _getMultisnapSegmentsWithAsset:placeholderImage:legacyConfig:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x106d8a61c

// -[SCGalleryPreviewController _dismissPreview]
// Type encoding: v16@0:8
// Implementation: 0x106d8aee0

// -[SCGalleryPreviewController _dismissPreviewWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106d8aee8

// -[SCGalleryPreviewController _isEnterTransitionAnimated:]
// Type encoding: B24@0:8q16
// Implementation: 0x106d8b1b4

// -[SCGalleryPreviewController _isExitTransitionAnimated:]
// Type encoding: B24@0:8q16
// Implementation: 0x106d8b1bc

// -[SCGalleryPreviewController _isPreviewToolbarAnimated:]
// Type encoding: B24@0:8q16
// Implementation: 0x106d8b1c4

// -[SCGalleryPreviewController _ucoDataFetcher]
// Type encoding: @16@0:8
// Implementation: 0x106d8b1cc

// -[SCGalleryPreviewController _isUcoFeatureEnabledForVideoSnap:]
// Type encoding: B24@0:8@16
// Implementation: 0x106d8b278

// -[SCGalleryPreviewController _removePreviewScopeIfExposed]
// Type encoding: v16@0:8
// Implementation: 0x106d8b2b0

// -[SCGalleryPreviewController _maxVideoDurationSecondAllowedForImporting]
// Type encoding: d16@0:8
// Implementation: 0x106d8b32c

// -[SCGalleryPreviewController _shouldReadCameraRollImageMetadata:]
// Type encoding: B24@0:8@16
// Implementation: 0x106d8b370

// -[SCGalleryPreviewController _launchUpsellFlow]
// Type encoding: v16@0:8
// Implementation: 0x106d8b3c8

// -[SCGalleryPreviewController _prepareSnapDocEditorForPreview:legacyConfig:captureDate:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106d8b410

// -[SCGalleryPreviewController _timelineConfigurationFromVideoProviders:usageType:segmentsEditable:snapSource:]
// Type encoding: @44@0:8@16q24B32q36
// Implementation: 0x106d8b960

// -[SCGalleryPreviewController _addSegmentForVideoProvider:toTimelineConfiguration:timeRange:snapSource:completion:]
// Type encoding: v56@0:8@16@24@32q40@?48
// Implementation: 0x106d8bb68

// -[SCGalleryPreviewController _removeFirstSegmentFromTimelineConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d8bfe8

// -[SCGalleryPreviewController _addToActiveUrlOfVideosInTimelineConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d8c04c

// -[SCGalleryPreviewController _globalUcoIDWithParser:]
// Type encoding: @24@0:8@16
// Implementation: 0x106d8c228

// -[SCGalleryPreviewController progressOverlayViewDidCancel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d8c35c

// -[SCGalleryPreviewController _setSizeOrientationOnLegacyConfig:fromBaseMediaOfSnapDoc:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106d8c478

// -[SCGalleryPreviewController _snapDocCompatibleForPreview:]
// Type encoding: @24@0:8@16
// Implementation: 0x106d8c708

// -[SCGalleryPreviewController _getBaseMediaPlaybackLayer:snapDocEditor:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106d8c794

// -[SCGalleryPreviewController _getPreviewConfigRecordedVideoFuture:snapDocEditor:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106d8c898

// -[SCGalleryPreviewController _getPreviewConfigImageFuture:snapDocEditor:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106d8ca64

// -[SCGalleryPreviewController snapEditorDidStartSendWithSnapDoc:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d8cb58

// -[SCGalleryPreviewController snapEditorDidDismissWithDidSend:didPost:postedClientIds:postedStoryIds:precaptureLensIds:isCrossPostingSpotlightToStories:]
// Type encoding: v52@0:8B16B20@24@32@40B48
// Implementation: 0x106d8cb88

// -[SCGalleryPreviewController _showSnapEditorMemorySaveDialogWithSaveRenderResponse:originalSnapId:originalEntryId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106d8ce00

// -[SCGalleryPreviewController _saveEditedSnapDocToMemoryWithRenderResponse:snapId:entryId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106d8cf48

// -[SCGalleryPreviewController snapEditorDidSaveMemoriesWithEntryId:snapId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106d8d270

// -[SCGalleryPreviewController _canSnapEditorSupportMemoriesEditWithSnapDoc:legacyConfig:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106d8d2e8

// -[SCGalleryPreviewController _shouldEnableSnapEditorMemories:]
// Type encoding: B24@0:8@16
// Implementation: 0x106d8d364

// -[SCGalleryPreviewController _snapEditorEditMode:]
// Type encoding: @24@0:8@16
// Implementation: 0x106d8d3ec

// -[SCGalleryPreviewController previewViewController]
// Type encoding: @16@0:8
// Implementation: 0x106d8d420

// -[SCGalleryPreviewController delegate]
// Type encoding: @16@0:8
// Implementation: 0x106d8d428

// -[SCGalleryPreviewController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d8d440

// -[SCGalleryPreviewController previewWorkflowDelegate]
// Type encoding: @16@0:8
// Implementation: 0x106d8d44c

// -[SCGalleryPreviewController setPreviewWorkflowDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d8d464

// -[SCGalleryPreviewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106d8d470

// +[SCGalleryPreviewController _profileAddToStorySnapPageSourceForSnap:]
// Type encoding: q24@0:8@16
// Implementation: 0x106d80b64

@end
