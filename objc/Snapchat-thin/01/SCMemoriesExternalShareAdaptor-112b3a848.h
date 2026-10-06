// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesExternalShareAdaptor
// Superclass: NSObject
// Address: 0x112b3a848

@interface SCMemoriesExternalShareAdaptor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesExternalShareAdaptor initWithScope:memoriesSnapTranscoder:dataObjectContext:performerProvider:notificationPool:galleryExportLogger:standardExternalContentShareScopeExposer:spectaclesAppLogger:userTrackedLogger:grapheneRegistry:offPlatformLinkGenerationService:memoriesActivityItemProviderBuilder:memoriesTranscodingHelper:galleryLogger:circumstanceEngine:watermarkGenerator:]
// Type encoding: @144@0:8@16@24@32@40@48#56@64@72@80@88@96@104@112@120@128@136
// Implementation: 0x106df2a8c

// -[SCMemoriesExternalShareAdaptor presentExternalShareSheetWithScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x106df2f08

// -[SCMemoriesExternalShareAdaptor _presentExternalShareSheetWithGallerySnaps:currentMemoriesTab:memSessionId:collectionCategory:uiContainer:userContext:completion:]
// Type encoding: v72@0:8@16Q24@32@40@48q56@?64
// Implementation: 0x106df3118

// -[SCMemoriesExternalShareAdaptor _getLensIdWithGallerySnaps:]
// Type encoding: @24@0:8@16
// Implementation: 0x106df3b30

// -[SCMemoriesExternalShareAdaptor _presentExternalShareSheetWithGalleryItems:currentMemoriesTab:dataObjectContext:userContext:memSessionId:collectionCategory:crFeaturedStory:uiContainer:completion:]
// Type encoding: v88@0:8@16Q24@32q40@48@56@64@72@?80
// Implementation: 0x106df3b3c

// -[SCMemoriesExternalShareAdaptor handleShareDestination:standardExternalContentShareScope:]
// Type encoding: B32@0:8q16@24
// Implementation: 0x106df4b1c

// -[SCMemoriesExternalShareAdaptor _didCompleteExportWithSessionId:contextActionSource:numberOfSnaps:galleryEntryType:success:errorType:errorSource:cancelled:saveToCameraRoll:]
// Type encoding: v72@0:8@16q24Q32i40B44@48@56B64B68
// Implementation: 0x106df4d24

// -[SCMemoriesExternalShareAdaptor shareSheetDismissedWithShareDestination:]
// Type encoding: v24@0:8q16
// Implementation: 0x106df4da4

// -[SCMemoriesExternalShareAdaptor _showLowDiskErrorAlertIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106df4dec

// -[SCMemoriesExternalShareAdaptor _logLowDiskSpaceError]
// Type encoding: v16@0:8
// Implementation: 0x106df4f64

// -[SCMemoriesExternalShareAdaptor _dismissShareSheet]
// Type encoding: v16@0:8
// Implementation: 0x106df4f74

// -[SCMemoriesExternalShareAdaptor _logExportStartWithSnapCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x106df4f94

// -[SCMemoriesExternalShareAdaptor _generateShareableMediaWithGallerySnaps:]
// Type encoding: @24@0:8@16
// Implementation: 0x106df4fb0

// -[SCMemoriesExternalShareAdaptor _generateShareableAsyncMediaWithGallerySnap:watermarkProfile:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106df51b8

// -[SCMemoriesExternalShareAdaptor _generateShareableMediaWithGalleryItems:]
// Type encoding: @24@0:8@16
// Implementation: 0x106df5320

// -[SCMemoriesExternalShareAdaptor _generateShareTextConfigurationWithGallerySnaps:]
// Type encoding: @24@0:8@16
// Implementation: 0x106df5fd4

// -[SCMemoriesExternalShareAdaptor _generateShareTextConfigurationWithGalleryItems:]
// Type encoding: @24@0:8@16
// Implementation: 0x106df63a8

// -[SCMemoriesExternalShareAdaptor _firstLensLinkFromGallerySnaps:]
// Type encoding: @24@0:8@16
// Implementation: 0x106df6450

// -[SCMemoriesExternalShareAdaptor _addFriendLink]
// Type encoding: @16@0:8
// Implementation: 0x106df64a4

// -[SCMemoriesExternalShareAdaptor _createPerformerWithPerformerProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x106df64f4

// -[SCMemoriesExternalShareAdaptor _logGallerySnapShareWithSnaps:shareChannel:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106df6550

// -[SCMemoriesExternalShareAdaptor _logGallerySnapShareWithItems:]
// Type encoding: v24@0:8@16
// Implementation: 0x106df6734

// -[SCMemoriesExternalShareAdaptor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106df6954

@end
