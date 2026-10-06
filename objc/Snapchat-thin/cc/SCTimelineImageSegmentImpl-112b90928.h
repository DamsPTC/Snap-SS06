// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTimelineImageSegmentImpl
// Superclass: SCTimelineMediaSegmentImpl
// Address: 0x112b90928

@interface SCTimelineImageSegmentImpl

// Property: assetURL; attributes: T@"NSURL",R,N,V_assetURL
// Property: videoAsset; attributes: T@"AVAsset",R,N
// Property: frameImage; attributes: T@"UIImage",R,N,V_frameImage
// Property: imagePixelBuffer; attributes: T^{__CVBuffer=},R,N,V_imagePixelBuffer
// Property: segmentCreationTimeTs; attributes: Td,R,N
// Property: snapSource; attributes: Tq,R,N
// Property: externalMediaSource; attributes: Ti,R,N
// Property: originalMediaOrigins; attributes: T@"NSArray",C,N
// Property: externalMediaCreationTimeTs; attributes: Td,N
// Property: tinselMedia; attributes: T@"SCTinselMedia",R,N,V_tinselMedia
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

// -[SCTimelineImageSegmentImpl initWithAssetURL:frameImage:snapSource:uniqueId:blizzardLogger:tinselMedia:activeLensID:]
// Type encoding: @72@0:8@16@24q32q40@48@56@64
// Implementation: 0x107fb0578

// -[SCTimelineImageSegmentImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x107fb068c

// -[SCTimelineImageSegmentImpl isImportedContent]
// Type encoding: B16@0:8
// Implementation: 0x107fb06e0

// -[SCTimelineImageSegmentImpl hasAudioTrack]
// Type encoding: B16@0:8
// Implementation: 0x107fb06e8

// -[SCTimelineImageSegmentImpl hasAssetURL]
// Type encoding: B16@0:8
// Implementation: 0x107fb06f0

// -[SCTimelineImageSegmentImpl videoAsset]
// Type encoding: @16@0:8
// Implementation: 0x107fb06f8

// -[SCTimelineImageSegmentImpl createImagePixelBufferWithSize:]
// Type encoding: ^{__CVBuffer=}32@0:8{CGSize=dd}16
// Implementation: 0x107fb0700

// -[SCTimelineImageSegmentImpl assetURL]
// Type encoding: @16@0:8
// Implementation: 0x107fb0858

// -[SCTimelineImageSegmentImpl frameImage]
// Type encoding: @16@0:8
// Implementation: 0x107fb0868

// -[SCTimelineImageSegmentImpl tinselMedia]
// Type encoding: @16@0:8
// Implementation: 0x107fb0878

// -[SCTimelineImageSegmentImpl imagePixelBuffer]
// Type encoding: ^{__CVBuffer=}16@0:8
// Implementation: 0x107fb0888

// -[SCTimelineImageSegmentImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107fb0898

@end
