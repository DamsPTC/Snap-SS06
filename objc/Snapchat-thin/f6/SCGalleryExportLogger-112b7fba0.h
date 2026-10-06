// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGalleryExportLogger
// Superclass: NSObject
// Address: 0x112b7fba0

@interface SCGalleryExportLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// +[SCGalleryExportLogger markExportStart:exportSessionId:numberOfSnaps:grapheneRegistry:]
// Type encoding: v48@0:8q16@24Q32@40
// Implementation: 0x107d8fa98

// +[SCGalleryExportLogger markExportStart:exportSessionId:grapheneRegistry:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107d8fbd8

// +[SCGalleryExportLogger didCompleteExportWithSessionId:memSessionId:currentMemoriesTab:contextActionSource:numberOfSnaps:success:errorType:errorSource:cancelled:galleryEntryType:saveToCameraRoll:collectionCategory:exportContext:exportMatchId:inputSource:userTrackedLogger:grapheneRegistry:]
// Type encoding: v136@0:8@16@24Q32q40Q48B56@60@68B76i80B84@88@96@104@112@120@128
// Implementation: 0x107d8fd64

// +[SCGalleryExportLogger didCompleteExportWithSessionId:memSessionId:currentMemoriesTab:itemProviders:success:errorType:errorSource:cancelled:saveToCameraRoll:activityType:userTrackedLogger:dataObjectContext:grapheneRegistry:]
// Type encoding: v108@0:8@16@24Q32@40B48@52@60B68B72@76@84@92@100
// Implementation: 0x107d90094

// +[SCGalleryExportLogger logExportLowDiskSpaceErrorWithGrapheneRegistry:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d904cc

// +[SCGalleryExportLogger exportItemWithItemProvider:shareChannel:dataObjectContext:currentGalleryTab:userTrackedLogger:spectaclesAppLogger:]
// Type encoding: v64@0:8@16@24@32Q40@48@56
// Implementation: 0x107d904d8

// +[SCGalleryExportLogger _markExportStart:exportSessionId:numberOfSnaps:numberOfStories:grapheneRegistry:]
// Type encoding: v56@0:8@16@24Q32Q40@48
// Implementation: 0x107d90b28

// +[SCGalleryExportLogger _didCompleteExportWithSessionId:memSessionId:currentMemoriesTab:numberOfSnaps:numberOfStories:contents:isSaveAsVideo:contextMenuSource:success:errorType:errorSource:cancelled:saveToCameraRoll:hasSpectacles:galleryEntryType:collectionCategory:exportContext:exportMatchId:inputSource:userTrackedLogger:grapheneRegistry:]
// Type encoding: v160@0:8@16@24Q32Q40Q48@56B64q68B76@80@88B96B100B104i108@112@120@128@136@144@152
// Implementation: 0x107d90bf8

// +[SCGalleryExportLogger _getNumberOfSnapsFromItems:]
// Type encoding: Q24@0:8@16
// Implementation: 0x107d90fcc

// +[SCGalleryExportLogger _getNumberOfStoriesFromItems:]
// Type encoding: Q24@0:8@16
// Implementation: 0x107d910d4

// +[SCGalleryExportLogger _contentFromActivityItemProviders:]
// Type encoding: @24@0:8@16
// Implementation: 0x107d911d8

// +[SCGalleryExportLogger _galleryCollectionCategoryFromActivityItemProviders:dataObjectContext:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107d915ac

// +[SCGalleryExportLogger _hasSpectaclesFromActivityItemProviders:]
// Type encoding: B24@0:8@16
// Implementation: 0x107d91844

// +[SCGalleryExportLogger _isSaveAsVideoFromActivityItemProviders:activityType:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107d91ae4

// +[SCGalleryExportLogger _logGallerySnapShareForExportingItem:userTrackedLogger:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107d91bb8

// +[SCGalleryExportLogger _logSpectaclesCustomExportWithParameters:activityItemProvider:spectaclesAppLogger:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107d92214

// +[SCGalleryExportLogger _logSpectaclesCustomExportWithContentId:deviceId:lensInfo:activityItemProvider:contextMenuSource:shareChannel:spectaclesAppLogger:]
// Type encoding: v72@0:8@16@24@32@40q48@56@64
// Implementation: 0x107d92360

// +[SCGalleryExportLogger _galleryStoryShareWithSnaps:contextMenuSource:entry:dataObjectContext:currentGalleryTab:]
// Type encoding: @56@0:8@16q24@32@40Q48
// Implementation: 0x107d924b0

@end
