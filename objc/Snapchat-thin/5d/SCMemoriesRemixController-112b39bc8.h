// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesRemixController
// Superclass: NSObject
// Address: 0x112b39bc8

@interface SCMemoriesRemixController

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesRemixController initWithRemixScopeExposer:remixScopeServices:memoriesSnapTranscoder:videoImportProcessing:galleryExportLogger:contextActionSource:musicMediaLoader:userTrackedLogger:grapheneRegistry:]
// Type encoding: @88@0:8@16@24@32@40#48q56@64@72@80
// Implementation: 0x106db3750

// -[SCMemoriesRemixController presentRemixWithGallerySnap:galleryEntryType:presentingViewController:memSessionId:contextSessionId:currentMemoriesTab:collectionCategory:completion:]
// Type encoding: v76@0:8@16i24@28@36@44Q52@60@?68
// Implementation: 0x106db3928

// -[SCMemoriesRemixController presentRemixWithCameraRollAsset:presentingViewController:contextSessionId:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x106db3d24

// -[SCMemoriesRemixController _exposeRemixScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x106db3fb4

// -[SCMemoriesRemixController _externalMediaItemFromCameraRollAsset:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106db4050

// -[SCMemoriesRemixController _imageFromPhotoAsset:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106db4488

// -[SCMemoriesRemixController _videoURLFromPhotoAsset:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106db45b8

// -[SCMemoriesRemixController _exportedUrlForImportedCameraRollAVAsset:strategy:logger:importedContentId:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x106db4800

// -[SCMemoriesRemixController _externalMediaItemMusicTrackInfoFromGallerySnap:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106db4b00

// -[SCMemoriesRemixController _externalMediaItemFromGallerySnap:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106db4d24

// -[SCMemoriesRemixController _setupProgressController]
// Type encoding: v16@0:8
// Implementation: 0x106db54e4

// -[SCMemoriesRemixController remixScopeDidComplete]
// Type encoding: v16@0:8
// Implementation: 0x106db57b8

// -[SCMemoriesRemixController _logExportStart]
// Type encoding: v16@0:8
// Implementation: 0x106db5858

// -[SCMemoriesRemixController _logExportCompleteWithSuccess:galleryEntryType:errorType:errorSource:cancelled:memSessionId:currentMemoriesTab:collectionCategory:]
// Type encoding: v68@0:8B16i20@24@32B40@44Q52@60
// Implementation: 0x106db5870

// -[SCMemoriesRemixController _trackInfoFromGallerySnap:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106db58d4

// -[SCMemoriesRemixController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106db5ae0

@end
