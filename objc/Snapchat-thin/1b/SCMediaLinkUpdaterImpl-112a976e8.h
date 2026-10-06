// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMediaLinkUpdaterImpl
// Superclass: NSObject
// Address: 0x112a976e8

@interface SCMediaLinkUpdaterImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMediaLinkUpdaterImpl initWithSocialSmsSender:boltUploader:grapheneLogger:performerProvider:jobScheduler:circumstanceEngine:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x105c70d0c

// -[SCMediaLinkUpdaterImpl updateMediaLinkWithMediaContent:linkId:missingSnapInfos:shareSource:completion:]
// Type encoding: v56@0:8@16@24@32q40@?48
// Implementation: 0x105c71030

// -[SCMediaLinkUpdaterImpl transcodeMediaAndUploadToBoltUsingFirstMediaFuture:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105c71460

// -[SCMediaLinkUpdaterImpl updateMediaInBackgroundWithMediaFutures:linkId:missingSnapInfos:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105c716e4

// -[SCMediaLinkUpdaterImpl updateMemoriesLinkWithThumbnailExternalLinkMedia:linkId:thumbnailURL:shareSource:completion:]
// Type encoding: v56@0:8@16@24@32q40@?48
// Implementation: 0x105c71780

// -[SCMediaLinkUpdaterImpl _createPerformerWithPerformerProvider:qualityOfService:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x105c7191c

// -[SCMediaLinkUpdaterImpl _updateNecessaryInformationWithFirstMediaFuture:linkId:boltUploader:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x105c7197c

// -[SCMediaLinkUpdaterImpl _updateMediaInBackgroundWithMediaFutures:linkId:missingSnapInfos:boltUploader:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x105c71c58

// -[SCMediaLinkUpdaterImpl _updateMediaInBackgroundWithMediaFutures:linkId:missingSnapInfos:remainingRetryCount:boltUploader:updateLinkInBackgroundCookie:]
// Type encoding: v64@0:8@16@24@32Q40@48Q56
// Implementation: 0x105c72188

// -[SCMediaLinkUpdaterImpl uploadMissingMediaToBolt:missingSnapInfo:boltUploader:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105c72758

// -[SCMediaLinkUpdaterImpl _updateMemoryLinkWithLinkId:mediaUpdatesArray:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105c72d88

// -[SCMediaLinkUpdaterImpl _logMemoriesUpdateLinkSucceededGraphene]
// Type encoding: v16@0:8
// Implementation: 0x105c72fec

// -[SCMediaLinkUpdaterImpl _logMemoriesUpdateLinkFailedGraphene]
// Type encoding: v16@0:8
// Implementation: 0x105c72ff8

// -[SCMediaLinkUpdaterImpl _logUpdateSocialLinkWithStartTime:mediaCount:didSucceed:]
// Type encoding: v36@0:8d16q24B32
// Implementation: 0x105c73004

// -[SCMediaLinkUpdaterImpl _logMemoryLinkUpdateWithMediaRetryCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x105c73084

// -[SCMediaLinkUpdaterImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105c73090

@end
