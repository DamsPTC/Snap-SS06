// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewURLVideoProvider
// Superclass: NSObject
// Address: 0x112b92318

@interface SCPreviewURLVideoProvider

// Property: previewLoggingCommon; attributes: T@"SCLazy",W,N,V_previewLoggingCommon
// Property: previewBlizzardLogger; attributes: T@"<SCPreviewBlizzardLogging>",W,N,V_previewBlizzardLogger
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPreviewURLVideoProvider videoURL]
// Type encoding: @16@0:8
// Implementation: 0x107fff998

// -[SCPreviewURLVideoProvider newVideoAsset]
// Type encoding: @16@0:8
// Implementation: 0x107fff9f0

// -[SCPreviewURLVideoProvider newVideoAssetForQueue:resultHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107fffae0

// -[SCPreviewURLVideoProvider _logPreviewExportEventWithError:success:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107fffcac

// -[SCPreviewURLVideoProvider _errorInfoForAssetCreation]
// Type encoding: @16@0:8
// Implementation: 0x107fffdf8

// -[SCPreviewURLVideoProvider videoDuration]
// Type encoding: d16@0:8
// Implementation: 0x107fffe4c

// -[SCPreviewURLVideoProvider codecType]
// Type encoding: q16@0:8
// Implementation: 0x107fffed0

// -[SCPreviewURLVideoProvider shouldIncludeURLInActiveVideoPaths]
// Type encoding: B16@0:8
// Implementation: 0x107ffff44

// -[SCPreviewURLVideoProvider checkIsVideoReachable]
// Type encoding: B16@0:8
// Implementation: 0x107ffff4c

// -[SCPreviewURLVideoProvider writableURLRequiresSynchronousExport]
// Type encoding: B16@0:8
// Implementation: 0x107ffffe4

// -[SCPreviewURLVideoProvider writableURL]
// Type encoding: @16@0:8
// Implementation: 0x107ffffec

// -[SCPreviewURLVideoProvider cachedWritableURL]
// Type encoding: @16@0:8
// Implementation: 0x107fffff0

// -[SCPreviewURLVideoProvider removeBackingTemporaryVideo]
// Type encoding: v16@0:8
// Implementation: 0x107fffff4

// -[SCPreviewURLVideoProvider exportVideoForURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080001e4

// -[SCPreviewURLVideoProvider exportVideoData]
// Type encoding: @16@0:8
// Implementation: 0x108000310

// -[SCPreviewURLVideoProvider hasAudioTrack]
// Type encoding: B16@0:8
// Implementation: 0x1080003ac

// -[SCPreviewURLVideoProvider initWithVideoURL:rawVideoDataFileURL:activeVideoPaths:previewLoggingCommon:previewBlizzardLogger:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10800043c

// -[SCPreviewURLVideoProvider initWithURL:rawVideoDataFileURL:activeVideoPaths:previewLoggingCommon:previewBlizzardLogger:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x108000568

// -[SCPreviewURLVideoProvider dealloc]
// Type encoding: v16@0:8
// Implementation: 0x108000694

// -[SCPreviewURLVideoProvider copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x108000740

// -[SCPreviewURLVideoProvider _videoDataURL]
// Type encoding: @16@0:8
// Implementation: 0x1080008d8

// -[SCPreviewURLVideoProvider previewLoggingCommon]
// Type encoding: @16@0:8
// Implementation: 0x108000918

// -[SCPreviewURLVideoProvider setPreviewLoggingCommon:]
// Type encoding: v24@0:8@16
// Implementation: 0x108000930

// -[SCPreviewURLVideoProvider previewBlizzardLogger]
// Type encoding: @16@0:8
// Implementation: 0x10800093c

// -[SCPreviewURLVideoProvider setPreviewBlizzardLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x108000954

// -[SCPreviewURLVideoProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108000960

@end
