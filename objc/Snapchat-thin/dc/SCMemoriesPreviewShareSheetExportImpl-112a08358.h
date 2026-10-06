// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesPreviewShareSheetExportImpl
// Superclass: NSObject
// Address: 0x112a08358

@interface SCMemoriesPreviewShareSheetExportImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesPreviewShareSheetExportImpl initWithStandardExternalContentShareScopeExposer:mediaOrientation:mediaType:liveCameraLensId:userInfoServices:offPlatformLinkGenerationService:memoriesExportLogger:userSession:previewConfiguration:commonLoggingParamsBuilder:previewExportLogger:memoriesPreviewShareSheetExportScope:spectaclesAppLogger:userTrackedLogger:grapheneRegistry:memoriesActivityItemProviderBuilder:galleryLogger:temporaryFileWriter:previewABServices:circumstanceEngine:]
// Type encoding: @176@0:8@16q24Q32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168
// Implementation: 0x104f0b48c

// -[SCMemoriesPreviewShareSheetExportImpl shareWithExternalShareSheet:presentingContainer:previewTranscoding:userContext:hasAnimatedOrExternalAudioContent:]
// Type encoding: v52@0:8@16@24@32q40B48
// Implementation: 0x104f0b8f0

// -[SCMemoriesPreviewShareSheetExportImpl _getLensIdFromLiveCameraLensId]
// Type encoding: @16@0:8
// Implementation: 0x104f0c2b8

// -[SCMemoriesPreviewShareSheetExportImpl handleShareDestination:standardExternalContentShareScope:]
// Type encoding: B32@0:8q16@24
// Implementation: 0x104f0c2e0

// -[SCMemoriesPreviewShareSheetExportImpl _didCompleteExportWithSessionId:contextActionSource:numberOfSnaps:galleryEntryType:success:errorType:errorSource:cancelled:saveToCameraRoll:]
// Type encoding: v72@0:8@16q24Q32i40B44@48@56B64B68
// Implementation: 0x104f0c548

// -[SCMemoriesPreviewShareSheetExportImpl shareSheetDismissedWithShareDestination:]
// Type encoding: v24@0:8q16
// Implementation: 0x104f0c67c

// -[SCMemoriesPreviewShareSheetExportImpl _generateTextConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x104f0c680

// -[SCMemoriesPreviewShareSheetExportImpl _generateShareableMediaWithExportPolicy:]
// Type encoding: @24@0:8@16
// Implementation: 0x104f0cbfc

// -[SCMemoriesPreviewShareSheetExportImpl _transcodeGallerySnapWithExportPolicy:imageCompletion:videoCompletion:videoTranscodeProgressCompletion:errorCompletion:]
// Type encoding: v56@0:8@16@?24@?32@?40@?48
// Implementation: 0x104f0d620

// -[SCMemoriesPreviewShareSheetExportImpl _transcodeVideoSnapWithExportPolicy:videoCompletion:videoTranscodeProgressCompletion:errorCompletion:]
// Type encoding: v48@0:8@16@?24@?32@?40
// Implementation: 0x104f0d9dc

// -[SCMemoriesPreviewShareSheetExportImpl _showLowDiskErrorAlertIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x104f0e0d0

// -[SCMemoriesPreviewShareSheetExportImpl _logLowDiskSpaceError]
// Type encoding: v16@0:8
// Implementation: 0x104f0e248

// -[SCMemoriesPreviewShareSheetExportImpl _logExportStartWithSnapCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x104f0e27c

// -[SCMemoriesPreviewShareSheetExportImpl _logGallerySnapShareWithItemProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f0e2c8

// -[SCMemoriesPreviewShareSheetExportImpl _dismissShareSheet]
// Type encoding: v16@0:8
// Implementation: 0x104f0e398

// -[SCMemoriesPreviewShareSheetExportImpl _debounceSetProgressWithProgressController:progress:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x104f0e3fc

// -[SCMemoriesPreviewShareSheetExportImpl _dismissShareSheetFromCancelPreviewExport]
// Type encoding: v16@0:8
// Implementation: 0x104f0e4dc

// -[SCMemoriesPreviewShareSheetExportImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104f0e5bc

@end
