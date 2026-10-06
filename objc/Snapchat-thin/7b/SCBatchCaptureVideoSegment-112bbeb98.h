// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBatchCaptureVideoSegment
// Superclass: SCBatchCaptureSegmentImpl
// Address: 0x112bbeb98

@interface SCBatchCaptureVideoSegment

// Property: rawVideoDataFileURL; attributes: T@"NSURL",&,N,V_rawVideoDataFileURL
// Property: codecType; attributes: Tq,N,V_codecType
// Property: isMultiSnap; attributes: TB,N,V_isMultiSnap
// Property: isInfiniteDuration; attributes: TB,N,V_isInfiniteDuration

// -[SCBatchCaptureVideoSegment initWithURL:frameImage:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108cdd79c

// -[SCBatchCaptureVideoSegment initWithURL:frameImage:setupAsync:withMetrics:]
// Type encoding: @44@0:8@16@24B32@36
// Implementation: 0x108cdd7a8

// -[SCBatchCaptureVideoSegment _setupFrameImage]
// Type encoding: v16@0:8
// Implementation: 0x108cdda48

// -[SCBatchCaptureVideoSegment _setupThumbnail]
// Type encoding: v16@0:8
// Implementation: 0x108cdda9c

// -[SCBatchCaptureVideoSegment setStartTimeOffset:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x108cddc18

// -[SCBatchCaptureVideoSegment setLocalContentTimeRange:]
// Type encoding: v64@0:8{?={?=qiIq}{?=qiIq}}16
// Implementation: 0x108cddc38

// -[SCBatchCaptureVideoSegment setLocalTrimmedTimeRange:]
// Type encoding: v64@0:8{?={?=qiIq}{?=qiIq}}16
// Implementation: 0x108cddc58

// -[SCBatchCaptureVideoSegment forceSplittedTimeRanges]
// Type encoding: @16@0:8
// Implementation: 0x108cddd1c

// -[SCBatchCaptureVideoSegment forceSplittedTimeRangesCount]
// Type encoding: q16@0:8
// Implementation: 0x108cddd4c

// -[SCBatchCaptureVideoSegment hasAudioTrack]
// Type encoding: B16@0:8
// Implementation: 0x108cdddac

// -[SCBatchCaptureVideoSegment setDisableAudioTrack:]
// Type encoding: v20@0:8B16
// Implementation: 0x108cdde74

// -[SCBatchCaptureVideoSegment disableAudioTrack]
// Type encoding: B16@0:8
// Implementation: 0x108cdde84

// -[SCBatchCaptureVideoSegment setLensMusicTrackMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cdde94

// -[SCBatchCaptureVideoSegment _updateTimeRanges]
// Type encoding: v16@0:8
// Implementation: 0x108cddecc

// -[SCBatchCaptureVideoSegment isVideoSegment]
// Type encoding: B16@0:8
// Implementation: 0x108cddfec

// -[SCBatchCaptureVideoSegment assetURL]
// Type encoding: @16@0:8
// Implementation: 0x108cddffc

// -[SCBatchCaptureVideoSegment frameImage]
// Type encoding: @16@0:8
// Implementation: 0x108cde00c

// -[SCBatchCaptureVideoSegment setFrameImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cde01c

// -[SCBatchCaptureVideoSegment startTimeOffset]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x108cde05c

// -[SCBatchCaptureVideoSegment localContentTimeRange]
// Type encoding: {?={?=qiIq}{?=qiIq}}16@0:8
// Implementation: 0x108cde07c

// -[SCBatchCaptureVideoSegment contentTimeRange]
// Type encoding: {?={?=qiIq}{?=qiIq}}16@0:8
// Implementation: 0x108cde09c

// -[SCBatchCaptureVideoSegment localTrimmedTimeRange]
// Type encoding: {?={?=qiIq}{?=qiIq}}16@0:8
// Implementation: 0x108cde0bc

// -[SCBatchCaptureVideoSegment trimmedTimeRange]
// Type encoding: {?={?=qiIq}{?=qiIq}}16@0:8
// Implementation: 0x108cde0dc

// -[SCBatchCaptureVideoSegment editedThumbnails]
// Type encoding: @16@0:8
// Implementation: 0x108cde0fc

// -[SCBatchCaptureVideoSegment setEditedThumbnails:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cde10c

// -[SCBatchCaptureVideoSegment thumbnailFuture]
// Type encoding: @16@0:8
// Implementation: 0x108cde14c

// -[SCBatchCaptureVideoSegment setThumbnailFuture:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cde15c

// -[SCBatchCaptureVideoSegment lensMusicTrackMetadata]
// Type encoding: @16@0:8
// Implementation: 0x108cde19c

// -[SCBatchCaptureVideoSegment containsTrim]
// Type encoding: B16@0:8
// Implementation: 0x108cde1ac

// -[SCBatchCaptureVideoSegment setContainsTrim:]
// Type encoding: v20@0:8B16
// Implementation: 0x108cde1bc

// -[SCBatchCaptureVideoSegment commonMetricLoggingParams]
// Type encoding: @16@0:8
// Implementation: 0x108cde1cc

// -[SCBatchCaptureVideoSegment setCommonMetricLoggingParams:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cde1dc

// -[SCBatchCaptureVideoSegment rawVideoDataFileURL]
// Type encoding: @16@0:8
// Implementation: 0x108cde1e8

// -[SCBatchCaptureVideoSegment setRawVideoDataFileURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cde1f8

// -[SCBatchCaptureVideoSegment codecType]
// Type encoding: q16@0:8
// Implementation: 0x108cde238

// -[SCBatchCaptureVideoSegment setCodecType:]
// Type encoding: v24@0:8q16
// Implementation: 0x108cde248

// -[SCBatchCaptureVideoSegment isMultiSnap]
// Type encoding: B16@0:8
// Implementation: 0x108cde258

// -[SCBatchCaptureVideoSegment setIsMultiSnap:]
// Type encoding: v20@0:8B16
// Implementation: 0x108cde268

// -[SCBatchCaptureVideoSegment isInfiniteDuration]
// Type encoding: B16@0:8
// Implementation: 0x108cde278

// -[SCBatchCaptureVideoSegment setIsInfiniteDuration:]
// Type encoding: v20@0:8B16
// Implementation: 0x108cde288

// -[SCBatchCaptureVideoSegment .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108cde298

@end
