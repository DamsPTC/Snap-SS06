// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewAssetVideoProvider
// Superclass: NSObject
// Address: 0x112b92278

@interface SCPreviewAssetVideoProvider

// Property: previewLoggingCommon; attributes: T@"SCLazy",W,N,V_previewLoggingCommon
// Property: previewBlizzardLogger; attributes: T@"<SCPreviewBlizzardLogging>",W,N,V_previewBlizzardLogger
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPreviewAssetVideoProvider initWithVideoAsset:previewLoggingCommon:previewBlizzardLogger:circumstanceEngine:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x107ffe984

// -[SCPreviewAssetVideoProvider dealloc]
// Type encoding: v16@0:8
// Implementation: 0x107ffea70

// -[SCPreviewAssetVideoProvider newVideoAsset]
// Type encoding: @16@0:8
// Implementation: 0x107ffeab4

// -[SCPreviewAssetVideoProvider newVideoAssetForQueue:resultHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107ffeabc

// -[SCPreviewAssetVideoProvider videoDuration]
// Type encoding: d16@0:8
// Implementation: 0x107ffebd0

// -[SCPreviewAssetVideoProvider codecType]
// Type encoding: q16@0:8
// Implementation: 0x107ffec0c

// -[SCPreviewAssetVideoProvider shouldIncludeURLInActiveVideoPaths]
// Type encoding: B16@0:8
// Implementation: 0x107ffec68

// -[SCPreviewAssetVideoProvider checkIsVideoReachable]
// Type encoding: B16@0:8
// Implementation: 0x107ffec70

// -[SCPreviewAssetVideoProvider writableURLRequiresSynchronousExport]
// Type encoding: B16@0:8
// Implementation: 0x107ffec78

// -[SCPreviewAssetVideoProvider writableURL]
// Type encoding: @16@0:8
// Implementation: 0x107ffec80

// -[SCPreviewAssetVideoProvider cachedWritableURL]
// Type encoding: @16@0:8
// Implementation: 0x107ffec84

// -[SCPreviewAssetVideoProvider removeBackingTemporaryVideo]
// Type encoding: v16@0:8
// Implementation: 0x107ffecac

// -[SCPreviewAssetVideoProvider exportVideoForURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ffed24

// -[SCPreviewAssetVideoProvider _videoExportDataFromURL:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ffede4

// -[SCPreviewAssetVideoProvider exportVideoData]
// Type encoding: @16@0:8
// Implementation: 0x107ffee8c

// -[SCPreviewAssetVideoProvider _logPreviewExportEventWithError:success:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107ffef00

// -[SCPreviewAssetVideoProvider hasAudioTrack]
// Type encoding: B16@0:8
// Implementation: 0x107fff04c

// -[SCPreviewAssetVideoProvider _nonNilBackingURL]
// Type encoding: @16@0:8
// Implementation: 0x107fff0e4

// -[SCPreviewAssetVideoProvider _exportAssetSynchronouslyToURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fff178

// -[SCPreviewAssetVideoProvider copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x107fff278

// -[SCPreviewAssetVideoProvider previewLoggingCommon]
// Type encoding: @16@0:8
// Implementation: 0x107fff30c

// -[SCPreviewAssetVideoProvider setPreviewLoggingCommon:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fff324

// -[SCPreviewAssetVideoProvider previewBlizzardLogger]
// Type encoding: @16@0:8
// Implementation: 0x107fff330

// -[SCPreviewAssetVideoProvider setPreviewBlizzardLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fff348

// -[SCPreviewAssetVideoProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107fff354

@end
