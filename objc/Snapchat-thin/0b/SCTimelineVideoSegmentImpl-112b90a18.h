// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTimelineVideoSegmentImpl
// Superclass: SCTimelineMediaSegmentImpl
// Address: 0x112b90a18

@interface SCTimelineVideoSegmentImpl

// Property: videoFuture; attributes: T@"SCFuture",&,N,V_videoFuture
// Property: videoCodecType; attributes: Tq,R,N,V_videoCodecType
// Property: assetURL; attributes: T@"NSURL",R,N,V_assetURL
// Property: videoAsset; attributes: T@"AVAsset",R,N,V_videoAsset
// Property: frameImage; attributes: T@"UIImage",R,N,V_frameImage
// Property: imagePixelBuffer; attributes: T^{__CVBuffer=},R,N
// Property: segmentCreationTimeTs; attributes: Td,R,N
// Property: snapSource; attributes: Tq,R,N
// Property: externalMediaSource; attributes: Ti,R,N
// Property: originalMediaOrigins; attributes: T@"NSArray",C,N
// Property: externalMediaCreationTimeTs; attributes: Td,N
// Property: tinselMedia; attributes: T@"SCTinselMedia",R,N
// Property: startTimeOffset; attributes: T{?=qiIq},N
// Property: contentTimeRange; attributes: T{?={?=qiIq}{?=qiIq}},R,N
// Property: trimmedTimeRange; attributes: T{?={?=qiIq}{?=qiIq}},N
// Property: trimmingTimeRange; attributes: T{?={?=qiIq}{?=qiIq}},R,N
// Property: firstFrameTime; attributes: T{?=qiIq},R,N
// Property: localTrimmedTimeRange; attributes: T{?={?=qiIq}{?=qiIq}},R,N
// Property: trimmedTimeRangeObservable; attributes: T@"SCObservable",R,N
// Property: localFirstFrameTime; attributes: T{?=qiIq},N
// Property: playbackRate; attributes: Td,N
// Property: uniqueId; attributes: Tq,R,N
// Property: captureSessionID; attributes: T@"NSString",C,N
// Property: lensSessionID; attributes: T@"NSString",C,N
// Property: activeLensID; attributes: T@"NSString",C,N
// Property: activeCameraModes; attributes: T@"NSArray",C,N
// Property: detailedCameraModes; attributes: T@"NSString",C,N
// Property: firstFrameThumbnailFuture; attributes: T@"SCFuture",&,N
// Property: editedThumbnail; attributes: T@"UIImage",&,N
// Property: thumbnailFutures; attributes: T@"NSArray",&,N
// Property: activeLensMusicTrackMetadata; attributes: T@"NSArray",C,N
// Property: baseMediaMusicSelection; attributes: T@"SCMusicSelection",C,N
// Property: creativeEditTag; attributes: T@"SDMCreativeEditTag",C,N
// Property: remixMetadata; attributes: T@"SCRemixMetadata",C,N
// Property: spotlightMediaSource; attributes: Tq,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCTimelineVideoSegmentImpl initWithAssetURL:frameImage:snapSource:externalMediaSource:uniqueId:activeLensID:blizzardLogger:]
// Type encoding: @68@0:8@16@24q32i40q44@52@60
// Implementation: 0x107fb40d8

// -[SCTimelineVideoSegmentImpl initWithVideoAsset:frameImage:snapSource:externalMediaSource:uniqueId:activeLensID:blizzardLogger:]
// Type encoding: @68@0:8@16@24q32i40q44@52@60
// Implementation: 0x107fb41cc

// -[SCTimelineVideoSegmentImpl videoCodecType]
// Type encoding: q16@0:8
// Implementation: 0x107fb4290

// -[SCTimelineVideoSegmentImpl assetURL]
// Type encoding: @16@0:8
// Implementation: 0x107fb42ec

// -[SCTimelineVideoSegmentImpl videoAsset]
// Type encoding: @16@0:8
// Implementation: 0x107fb431c

// -[SCTimelineVideoSegmentImpl hasAssetURL]
// Type encoding: B16@0:8
// Implementation: 0x107fb437c

// -[SCTimelineVideoSegmentImpl hasAudioTrack]
// Type encoding: B16@0:8
// Implementation: 0x107fb4394

// -[SCTimelineVideoSegmentImpl updateFirstFrameWithOriginalAsset:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107fb4444

// -[SCTimelineVideoSegmentImpl updateFirstFrameImageIfNeededWithPlayerHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fb4770

// -[SCTimelineVideoSegmentImpl frameImage]
// Type encoding: @16@0:8
// Implementation: 0x107fb4a64

// -[SCTimelineVideoSegmentImpl videoFuture]
// Type encoding: @16@0:8
// Implementation: 0x107fb4a74

// -[SCTimelineVideoSegmentImpl setVideoFuture:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fb4a84

// -[SCTimelineVideoSegmentImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107fb4ac4

@end
