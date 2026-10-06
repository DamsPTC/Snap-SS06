// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensDownloadLogger
// Superclass: NSObject
// Address: 0x112ad34b8

@interface SCLensDownloadLogger


// -[SCLensDownloadLogger initWithBlizzardLogger:lensGraphene:grapheneLoggerV2:circumstanceEngine:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10074c954

// -[SCLensDownloadLogger setSnapSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x10074ca58

// -[SCLensDownloadLogger logDownloadFinishedForLens:downloadTimeSec:wasAutomaticDownload:downloadSize:mediaId:boltContentId:fetchType:statusCode:]
// Type encoding: v76@0:8@16d24B32q36@44@52q60q68
// Implementation: 0x1061f5c74

// -[SCLensDownloadLogger logCustomEventForLens:interactionName:interactionValue:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1061f5f8c

// -[SCLensDownloadLogger logResourceResolvedForLens:resolvedToFallback:cached:]
// Type encoding: v32@0:8@16B24B28
// Implementation: 0x1061f607c

// -[SCLensDownloadLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1061f6238

// +[SCLensDownloadLogger _lensTypeForLens:]
// Type encoding: @24@0:8@16
// Implementation: 0x1061f6110

// +[SCLensDownloadLogger _lensSourceFromLensType:]
// Type encoding: @24@0:8q16
// Implementation: 0x1061f6210

@end
