// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesPreviewExportLoggerImpl
// Superclass: NSObject
// Address: 0x112a082b8

@interface SCMemoriesPreviewExportLoggerImpl


// -[SCMemoriesPreviewExportLoggerImpl initWithGrapheneRegistry:]
// Type encoding: @24@0:8@16
// Implementation: 0x104f0abb4

// -[SCMemoriesPreviewExportLoggerImpl markExportStart:exportSessionId:numberOfSnaps:]
// Type encoding: v40@0:8q16@24Q32
// Implementation: 0x104f0ac28

// -[SCMemoriesPreviewExportLoggerImpl didCompleteExportWithSessionId:memSessionId:currentMemoriesTab:contextActionSource:numberOfSnaps:success:errorType:errorSource:cancelled:galleryEntryType:saveToCameraRoll:collectionCategory:exportContext:exportMatchId:inputSource:userTrackedLogger:]
// Type encoding: v128@0:8@16@24Q32q40Q48B56@60@68B76i80B84@88@96@104@112@120
// Implementation: 0x104f0ac3c

// -[SCMemoriesPreviewExportLoggerImpl logExportLowDiskSpaceError]
// Type encoding: v16@0:8
// Implementation: 0x104f0ac98

// -[SCMemoriesPreviewExportLoggerImpl exportItemWithItemProvider:shareChannel:dataObjectContext:currentGalleryTab:userTrackedLogger:spectaclesAppLogger:]
// Type encoding: v64@0:8@16@24@32Q40@48@56
// Implementation: 0x104f0acac

// -[SCMemoriesPreviewExportLoggerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104f0acb8

@end
