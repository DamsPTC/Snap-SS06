// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMusicSyncActionHandler
// Superclass: NSObject
// Address: 0x112a0d218

@interface SCMusicSyncActionHandler

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMusicSyncActionHandler initWithPresentingViewController:delegate:preselectedCameraRollAssets:snapDocEditorServices:mediaImportServices:memoriesPreviewPresenterBuilder:temporaryFileWriter:smartTemplateService:memoriesPickerV2ScopeExposer:memoriesPickerV2ScopeServices:musicSyncTrackLoader:composerCoreUIServices:progressOverlayScopeExposer:progressOverlayScopeServices:musicLoggingServices:cameraConfigurationServices:viewSourceType:]
// Type encoding: @148@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136i144
// Implementation: 0x104f9b604

// -[SCMusicSyncActionHandler presentMemoriesPicker]
// Type encoding: v16@0:8
// Implementation: 0x104f9b9f4

// -[SCMusicSyncActionHandler memoriesPickerV2DidSelectItemsWithMediaSegments:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f9be34

// -[SCMusicSyncActionHandler memoriesPickerV2DidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x104f9be38

// -[SCMusicSyncActionHandler didCancelFromPreview:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f9be98

// -[SCMusicSyncActionHandler didSendSnapsAndPostToStory:storyTypes:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x104f9be9c

// -[SCMusicSyncActionHandler progressOverlayScopeDidCancel:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f9becc

// -[SCMusicSyncActionHandler _presentPreviewWithMediaSegments:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f9bf00

// -[SCMusicSyncActionHandler _presentPreviewWithSnapDoc:cancelGroup:mediaSegments:startDate:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x104f9e7a0

// -[SCMusicSyncActionHandler _presentProgressOverlayWithProgressObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f9ec18

// -[SCMusicSyncActionHandler _dismissProgressOverlayIfNeededWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104f9ed14

// -[SCMusicSyncActionHandler _cacheMusicSyncAsset:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f9ee00

// -[SCMusicSyncActionHandler _presentErrorDialogWithMediaSegments:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f9eef8

// -[SCMusicSyncActionHandler _memoriesPickerViewController]
// Type encoding: @16@0:8
// Implementation: 0x104f9f1ac

// -[SCMusicSyncActionHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104f9f1ec

// +[SCMusicSyncActionHandler _musicSyncAssetForVideoAsset:videoImporter:directorModeVideoOptimizationConfig:temporaryFileWriter:cancelGroup:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x104f9ca84

// +[SCMusicSyncActionHandler _musicSyncAssetForImageAsset:imageImporter:temporaryFileWriter:cancelGroup:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x104f9cdc4

// +[SCMusicSyncActionHandler _getMusicSyncTrackWithMusicSyncTrackLoader:performer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104f9d0d4

// +[SCMusicSyncActionHandler _updateSnapDocWithSmartTemplate:snapDocMediaLayers:musicSyncTrack:snapDocEditor:cancelGroup:performer:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x104f9d3f4

// +[SCMusicSyncActionHandler _applyTemplateToSnapDoc:withMusicMetadata:error:smartTemplateService:]
// Type encoding: @48@0:8@16@24^@32@40
// Implementation: 0x104f9d77c

// +[SCMusicSyncActionHandler _updateSnapDocWithMusicSyncAssets:snapDocEditor:performer:cancelGroup:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x104f9d964

// +[SCMusicSyncActionHandler _updateSnapDocWithMusicSyncTrack:snapDocEditor:performer:cancelGroup:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x104f9df7c

@end
