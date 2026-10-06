// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRecordedVideoProvider
// Superclass: NSObject
// Address: 0x112b96a08

@interface SCRecordedVideoProvider

// Property: videoURL; attributes: T@"NSURL",R,C,N,V_videoURL
// Property: backupURL; attributes: T@"NSURL",R,C,N,V_backupURL
// Property: rawVideoDataFileURL; attributes: T@"NSURL",R,C,N,V_rawVideoDataFileURL
// Property: previewLoggingCommon; attributes: T@"SCLazy",W,N,V_previewLoggingCommon
// Property: previewBlizzardLogger; attributes: T@"<SCPreviewBlizzardLogging>",W,N,V_previewBlizzardLogger
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCRecordedVideoProvider newVideoAsset]
// Type encoding: @16@0:8
// Implementation: 0x108066a28

// -[SCRecordedVideoProvider newVideoAssetForQueue:resultHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108066b18

// -[SCRecordedVideoProvider _logPreviewExportEventWithError:success:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x108066cc8

// -[SCRecordedVideoProvider _errorInfoForAssetCreation]
// Type encoding: @16@0:8
// Implementation: 0x108066e14

// -[SCRecordedVideoProvider videoDuration]
// Type encoding: d16@0:8
// Implementation: 0x108066e40

// -[SCRecordedVideoProvider codecType]
// Type encoding: q16@0:8
// Implementation: 0x108066e48

// -[SCRecordedVideoProvider shouldIncludeURLInActiveVideoPaths]
// Type encoding: B16@0:8
// Implementation: 0x108066e8c

// -[SCRecordedVideoProvider writableURLRequiresSynchronousExport]
// Type encoding: B16@0:8
// Implementation: 0x108066e94

// -[SCRecordedVideoProvider writableURL]
// Type encoding: @16@0:8
// Implementation: 0x108066e9c

// -[SCRecordedVideoProvider cachedWritableURL]
// Type encoding: @16@0:8
// Implementation: 0x108066ec4

// -[SCRecordedVideoProvider removeBackingTemporaryVideo]
// Type encoding: v16@0:8
// Implementation: 0x108066eec

// -[SCRecordedVideoProvider exportVideoForURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x108067074

// -[SCRecordedVideoProvider exportVideoData]
// Type encoding: @16@0:8
// Implementation: 0x1080671b0

// -[SCRecordedVideoProvider checkIsVideoReachable]
// Type encoding: B16@0:8
// Implementation: 0x10806729c

// -[SCRecordedVideoProvider initWithRecordedVideo:activeVideoPaths:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108067334

// -[SCRecordedVideoProvider initWithVideoURL:rawVideoDataFileURL:videoDuration:activeVideoPaths:codecType:]
// Type encoding: @56@0:8@16@24d32@40q48
// Implementation: 0x108067404

// -[SCRecordedVideoProvider dealloc]
// Type encoding: v16@0:8
// Implementation: 0x108067508

// -[SCRecordedVideoProvider copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x1080675b4

// -[SCRecordedVideoProvider _videoDataURL]
// Type encoding: @16@0:8
// Implementation: 0x108067728

// -[SCRecordedVideoProvider hasAudioTrack]
// Type encoding: B16@0:8
// Implementation: 0x108067758

// -[SCRecordedVideoProvider previewLoggingCommon]
// Type encoding: @16@0:8
// Implementation: 0x1080677e8

// -[SCRecordedVideoProvider setPreviewLoggingCommon:]
// Type encoding: v24@0:8@16
// Implementation: 0x108067800

// -[SCRecordedVideoProvider previewBlizzardLogger]
// Type encoding: @16@0:8
// Implementation: 0x10806780c

// -[SCRecordedVideoProvider setPreviewBlizzardLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x108067824

// -[SCRecordedVideoProvider videoURL]
// Type encoding: @16@0:8
// Implementation: 0x108067830

// -[SCRecordedVideoProvider backupURL]
// Type encoding: @16@0:8
// Implementation: 0x108067838

// -[SCRecordedVideoProvider rawVideoDataFileURL]
// Type encoding: @16@0:8
// Implementation: 0x108067840

// -[SCRecordedVideoProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108067848

@end
