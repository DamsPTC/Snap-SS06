// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewSnapDocVideoProvider
// Superclass: NSObject
// Address: 0x112b922c8

@interface SCPreviewSnapDocVideoProvider

// Property: previewLoggingCommon; attributes: T@"SCLazy",W,N,V_previewLoggingCommon
// Property: previewBlizzardLogger; attributes: T@"<SCPreviewBlizzardLogging>",W,N,V_previewBlizzardLogger
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPreviewSnapDocVideoProvider initWithMediaMetadata:snapDoc:snapDocKey:snapDocManager:previewLoggingCommon:previewBlizzardLogger:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x107fff3ac

// -[SCPreviewSnapDocVideoProvider generateBackingVideoProvider]
// Type encoding: v16@0:8
// Implementation: 0x107fff4f8

// -[SCPreviewSnapDocVideoProvider newVideoAsset]
// Type encoding: @16@0:8
// Implementation: 0x107fff6e0

// -[SCPreviewSnapDocVideoProvider newVideoAssetForQueue:resultHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107fff6e8

// -[SCPreviewSnapDocVideoProvider videoDuration]
// Type encoding: d16@0:8
// Implementation: 0x107fff870

// -[SCPreviewSnapDocVideoProvider codecType]
// Type encoding: q16@0:8
// Implementation: 0x107fff878

// -[SCPreviewSnapDocVideoProvider shouldIncludeURLInActiveVideoPaths]
// Type encoding: B16@0:8
// Implementation: 0x107fff880

// -[SCPreviewSnapDocVideoProvider checkIsVideoReachable]
// Type encoding: B16@0:8
// Implementation: 0x107fff888

// -[SCPreviewSnapDocVideoProvider writableURLRequiresSynchronousExport]
// Type encoding: B16@0:8
// Implementation: 0x107fff890

// -[SCPreviewSnapDocVideoProvider writableURL]
// Type encoding: @16@0:8
// Implementation: 0x107fff898

// -[SCPreviewSnapDocVideoProvider cachedWritableURL]
// Type encoding: @16@0:8
// Implementation: 0x107fff8a0

// -[SCPreviewSnapDocVideoProvider removeBackingTemporaryVideo]
// Type encoding: v16@0:8
// Implementation: 0x107fff8a8

// -[SCPreviewSnapDocVideoProvider exportVideoForURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fff8b0

// -[SCPreviewSnapDocVideoProvider exportVideoData]
// Type encoding: @16@0:8
// Implementation: 0x107fff8b8

// -[SCPreviewSnapDocVideoProvider hasAudioTrack]
// Type encoding: B16@0:8
// Implementation: 0x107fff8c0

// -[SCPreviewSnapDocVideoProvider copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x107fff8c8

// -[SCPreviewSnapDocVideoProvider previewLoggingCommon]
// Type encoding: @16@0:8
// Implementation: 0x107fff8ec

// -[SCPreviewSnapDocVideoProvider setPreviewLoggingCommon:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fff904

// -[SCPreviewSnapDocVideoProvider previewBlizzardLogger]
// Type encoding: @16@0:8
// Implementation: 0x107fff910

// -[SCPreviewSnapDocVideoProvider setPreviewBlizzardLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fff928

// -[SCPreviewSnapDocVideoProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107fff934

@end
