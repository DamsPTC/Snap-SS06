// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensDownloadLoggerManager
// Superclass: NSObject
// Address: 0x112ad3508

@interface SCLensDownloadLoggerManager


// -[SCLensDownloadLoggerManager initWithLensContentDownloadLogger:lensAssetsDownloadLogger:loggingPerformer:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x100b7b3a8

// -[SCLensDownloadLoggerManager logLensContentDownloadedWithLens:contentResult:fetchType:isUserInitiated:statusCode:]
// Type encoding: v52@0:8@16@24q32B40q44
// Implementation: 0x1061f6280

// -[SCLensDownloadLoggerManager logLensAssetDownloadedWithAsset:lens:contentResult:fetchType:statusCode:cached:]
// Type encoding: v60@0:8@16@24@32q40q48B56
// Implementation: 0x1061f63dc

// -[SCLensDownloadLoggerManager _logLensContentDownloadedWithLens:contentResult:fetchType:isUserInitiated:statusCode:]
// Type encoding: v52@0:8@16@24q32B40q44
// Implementation: 0x1061f655c

// -[SCLensDownloadLoggerManager _logLensAssetDownloadedWithAsset:lens:contentResult:fetchType:statusCode:cached:]
// Type encoding: v60@0:8@16@24@32q40q48B56
// Implementation: 0x1061f66bc

// -[SCLensDownloadLoggerManager _contentResultAlreadyReported:]
// Type encoding: B24@0:8@16
// Implementation: 0x1061f68a4

// -[SCLensDownloadLoggerManager _cacheContentResultDownloadTimestamp:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061f697c

// -[SCLensDownloadLoggerManager _cacheKeyForContentResult:]
// Type encoding: @24@0:8@16
// Implementation: 0x1061f6a08

// -[SCLensDownloadLoggerManager _downloadEndTypeTimestampFromContentResult:]
// Type encoding: @24@0:8@16
// Implementation: 0x1061f6ac8

// -[SCLensDownloadLoggerManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1061f6b4c

// +[SCLensDownloadLoggerManager _remoteAssetTypeFromAssetType:]
// Type encoding: q24@0:8q16
// Implementation: 0x1061f6880

@end
