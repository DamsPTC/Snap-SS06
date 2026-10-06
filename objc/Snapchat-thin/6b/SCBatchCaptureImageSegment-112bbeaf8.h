// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBatchCaptureImageSegment
// Superclass: SCBatchCaptureSegmentImpl
// Address: 0x112bbeaf8

@interface SCBatchCaptureImageSegment

// Property: pixelBuffer; attributes: T^{__CVBuffer=},R,N,V_pixelBuffer
// Property: contextFilteredFrameImage; attributes: T@"UIImage",&,N,V_contextFilteredFrameImage
// Property: duration; attributes: T{?=qiIq},N,V_duration
// Property: hasAnimatedContent; attributes: TB,N,V_hasAnimatedContent

// -[SCBatchCaptureImageSegment initWithImage:]
// Type encoding: @24@0:8@16
// Implementation: 0x108cdc8e0

// -[SCBatchCaptureImageSegment initWithImage:setupBuffer:withMetrics:]
// Type encoding: @36@0:8@16B24@28
// Implementation: 0x108cdc8ec

// -[SCBatchCaptureImageSegment dealloc]
// Type encoding: v16@0:8
// Implementation: 0x108cdcb88

// -[SCBatchCaptureImageSegment _setupPixelBuffer]
// Type encoding: v16@0:8
// Implementation: 0x108cdcbfc

// -[SCBatchCaptureImageSegment _setupThumbnail]
// Type encoding: v16@0:8
// Implementation: 0x108cdccd8

// -[SCBatchCaptureImageSegment setDuration:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x108cdce54

// -[SCBatchCaptureImageSegment setStartTimeOffset:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x108cdcee8

// -[SCBatchCaptureImageSegment setLocalContentTimeRange:]
// Type encoding: v64@0:8{?={?=qiIq}{?=qiIq}}16
// Implementation: 0x108cdcf08

// -[SCBatchCaptureImageSegment setLocalTrimmedTimeRange:]
// Type encoding: v64@0:8{?={?=qiIq}{?=qiIq}}16
// Implementation: 0x108cdcf28

// -[SCBatchCaptureImageSegment pixelBuffer]
// Type encoding: ^{__CVBuffer=}16@0:8
// Implementation: 0x108cdcf2c

// -[SCBatchCaptureImageSegment forceSplittedTimeRanges]
// Type encoding: @16@0:8
// Implementation: 0x108cdcf58

// -[SCBatchCaptureImageSegment forceSplittedTimeRangesCount]
// Type encoding: q16@0:8
// Implementation: 0x108cdd040

// -[SCBatchCaptureImageSegment _updateTimeRanges]
// Type encoding: v16@0:8
// Implementation: 0x108cdd048

// -[SCBatchCaptureImageSegment frameImage]
// Type encoding: @16@0:8
// Implementation: 0x108cdd0e8

// -[SCBatchCaptureImageSegment setFrameImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cdd0f8

// -[SCBatchCaptureImageSegment startTimeOffset]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x108cdd138

// -[SCBatchCaptureImageSegment localContentTimeRange]
// Type encoding: {?={?=qiIq}{?=qiIq}}16@0:8
// Implementation: 0x108cdd158

// -[SCBatchCaptureImageSegment contentTimeRange]
// Type encoding: {?={?=qiIq}{?=qiIq}}16@0:8
// Implementation: 0x108cdd178

// -[SCBatchCaptureImageSegment localTrimmedTimeRange]
// Type encoding: {?={?=qiIq}{?=qiIq}}16@0:8
// Implementation: 0x108cdd198

// -[SCBatchCaptureImageSegment trimmedTimeRange]
// Type encoding: {?={?=qiIq}{?=qiIq}}16@0:8
// Implementation: 0x108cdd1b8

// -[SCBatchCaptureImageSegment editedThumbnails]
// Type encoding: @16@0:8
// Implementation: 0x108cdd1d8

// -[SCBatchCaptureImageSegment setEditedThumbnails:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cdd1e8

// -[SCBatchCaptureImageSegment thumbnailFuture]
// Type encoding: @16@0:8
// Implementation: 0x108cdd228

// -[SCBatchCaptureImageSegment setThumbnailFuture:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cdd238

// -[SCBatchCaptureImageSegment commonMetricLoggingParams]
// Type encoding: @16@0:8
// Implementation: 0x108cdd278

// -[SCBatchCaptureImageSegment setCommonMetricLoggingParams:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cdd288

// -[SCBatchCaptureImageSegment contextFilteredFrameImage]
// Type encoding: @16@0:8
// Implementation: 0x108cdd294

// -[SCBatchCaptureImageSegment setContextFilteredFrameImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cdd2a4

// -[SCBatchCaptureImageSegment duration]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x108cdd2e4

// -[SCBatchCaptureImageSegment hasAnimatedContent]
// Type encoding: B16@0:8
// Implementation: 0x108cdd304

// -[SCBatchCaptureImageSegment setHasAnimatedContent:]
// Type encoding: v20@0:8B16
// Implementation: 0x108cdd314

// -[SCBatchCaptureImageSegment .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108cdd324

@end
