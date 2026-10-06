// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewGalleryVideoProvider
// Superclass: NSObject
// Address: 0x112bc14d8

@interface SCPreviewGalleryVideoProvider

// Property: previewLoggingCommon; attributes: T@"SCLazy",W,N,V_previewLoggingCommon
// Property: previewBlizzardLogger; attributes: T@"<SCPreviewBlizzardLogging>",W,N,V_previewBlizzardLogger
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPreviewGalleryVideoProvider newVideoAsset]
// Type encoding: @16@0:8
// Implementation: 0x108d3e070

// -[SCPreviewGalleryVideoProvider newVideoAssetForQueue:resultHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108d3e1a8

// -[SCPreviewGalleryVideoProvider _logPreviewExportEventWithError:success:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x108d3e390

// -[SCPreviewGalleryVideoProvider videoDuration]
// Type encoding: d16@0:8
// Implementation: 0x108d3e4dc

// -[SCPreviewGalleryVideoProvider codecType]
// Type encoding: q16@0:8
// Implementation: 0x108d3e4f8

// -[SCPreviewGalleryVideoProvider shouldIncludeURLInActiveVideoPaths]
// Type encoding: B16@0:8
// Implementation: 0x108d3e56c

// -[SCPreviewGalleryVideoProvider checkIsVideoReachable]
// Type encoding: B16@0:8
// Implementation: 0x108d3e574

// -[SCPreviewGalleryVideoProvider hasAudioTrack]
// Type encoding: B16@0:8
// Implementation: 0x108d3e57c

// -[SCPreviewGalleryVideoProvider writableURLRequiresSynchronousExport]
// Type encoding: B16@0:8
// Implementation: 0x108d3e60c

// -[SCPreviewGalleryVideoProvider writableURL]
// Type encoding: @16@0:8
// Implementation: 0x108d3e614

// -[SCPreviewGalleryVideoProvider cachedWritableURL]
// Type encoding: @16@0:8
// Implementation: 0x108d3e6fc

// -[SCPreviewGalleryVideoProvider removeBackingTemporaryVideo]
// Type encoding: v16@0:8
// Implementation: 0x108d3e724

// -[SCPreviewGalleryVideoProvider exportVideoForURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d3e7c8

// -[SCPreviewGalleryVideoProvider exportVideoData]
// Type encoding: @16@0:8
// Implementation: 0x108d3e9a8

// -[SCPreviewGalleryVideoProvider createTimeUtc]
// Type encoding: @16@0:8
// Implementation: 0x108d3eb8c

// -[SCPreviewGalleryVideoProvider initWithSnap:cloudFile:contentDataProvider:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x108d3eb94

// -[SCPreviewGalleryVideoProvider copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x108d3ec60

// -[SCPreviewGalleryVideoProvider previewLoggingCommon]
// Type encoding: @16@0:8
// Implementation: 0x108d3ec84

// -[SCPreviewGalleryVideoProvider setPreviewLoggingCommon:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d3ec9c

// -[SCPreviewGalleryVideoProvider previewBlizzardLogger]
// Type encoding: @16@0:8
// Implementation: 0x108d3eca8

// -[SCPreviewGalleryVideoProvider setPreviewBlizzardLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d3ecc0

// -[SCPreviewGalleryVideoProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108d3eccc

@end
