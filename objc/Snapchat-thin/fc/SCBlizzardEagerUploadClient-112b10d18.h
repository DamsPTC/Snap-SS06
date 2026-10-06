// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBlizzardEagerUploadClient
// Superclass: NSObject
// Address: 0x112b10d18

@interface SCBlizzardEagerUploadClient


// -[SCBlizzardEagerUploadClient initWithEagerUploadStatusManager:graphene:uploadManager:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x100322adc

// -[SCBlizzardEagerUploadClient uploadEvents:eagerUploadId:eventCount:priority:region:seqItemsCount:isSpectrum:]
// Type encoding: v68@0:8@16Q24Q32Q40Q48Q56B64
// Implementation: 0x106acfc14

// -[SCBlizzardEagerUploadClient _handleOnEagerUploadCompletionWithEagerUploadId:isSpectrum:didCompleteWithSucess:]
// Type encoding: v32@0:8Q16B24B28
// Implementation: 0x106acfdd0

// -[SCBlizzardEagerUploadClient _logEagerUploadLatencyWithStartTimeMillis:endTimeMillis:isSpectrum:]
// Type encoding: v36@0:8q16q24B32
// Implementation: 0x106acfe88

// -[SCBlizzardEagerUploadClient .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106acfeb4

@end
