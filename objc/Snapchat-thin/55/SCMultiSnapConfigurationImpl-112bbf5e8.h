// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMultiSnapConfigurationImpl
// Superclass: NSObject
// Address: 0x112bbf5e8

@interface SCMultiSnapConfigurationImpl

// Property: segments; attributes: T@"NSArray",C,N,V_segments
// Property: timeRanges; attributes: T@"NSArray",R,N
// Property: forceSplittedTimeRanges; attributes: T@"NSArray",R,N
// Property: timeRangesForCameraRollSaving; attributes: T@"NSArray",R,N
// Property: forceSplittedTimeRangesCount; attributes: Tq,R,N
// Property: segmentIdToIndexMap; attributes: T@"NSDictionary",R,N,V_segmentIdToIndexMap
// Property: isLongSnap; attributes: TB,R,N
// Property: hasDeletion; attributes: TB,N,V_hasDeletion
// Property: supportsSplitting; attributes: TB,N,V_supportsSplitting
// Property: isVideoCapturedBySnapchat; attributes: TB,N,V_isVideoCapturedBySnapchat
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMultiSnapConfigurationImpl initWithCircumstanceEngine:]
// Type encoding: @24@0:8@16
// Implementation: 0x108cf09b8

// -[SCMultiSnapConfigurationImpl setSegments:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cf0ae4

// -[SCMultiSnapConfigurationImpl segments]
// Type encoding: @16@0:8
// Implementation: 0x108cf0bf0

// -[SCMultiSnapConfigurationImpl timeRanges]
// Type encoding: @16@0:8
// Implementation: 0x108cf0c18

// -[SCMultiSnapConfigurationImpl forceSplittedTimeRanges]
// Type encoding: @16@0:8
// Implementation: 0x108cf0d2c

// -[SCMultiSnapConfigurationImpl timeRangesForCameraRollSaving]
// Type encoding: @16@0:8
// Implementation: 0x108cf105c

// -[SCMultiSnapConfigurationImpl forceSplittedTimeRangesCount]
// Type encoding: q16@0:8
// Implementation: 0x108cf1174

// -[SCMultiSnapConfigurationImpl isLongSnap]
// Type encoding: B16@0:8
// Implementation: 0x108cf1444

// -[SCMultiSnapConfigurationImpl anySegmentTrimmed]
// Type encoding: B16@0:8
// Implementation: 0x108cf14a0

// -[SCMultiSnapConfigurationImpl segmentsHaveThumbnailFutures]
// Type encoding: B16@0:8
// Implementation: 0x108cf15d8

// -[SCMultiSnapConfigurationImpl addMultiSnapSegment:]
// Type encoding: @24@0:8@16
// Implementation: 0x108cf1700

// -[SCMultiSnapConfigurationImpl updateSegment:atIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x108cf17c4

// -[SCMultiSnapConfigurationImpl totalContentDuration]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x108cf184c

// -[SCMultiSnapConfigurationImpl updateSegmentTrimmedTimeRange:atIndex:]
// Type encoding: v72@0:8{?={?=qiIq}{?=qiIq}}16q64
// Implementation: 0x108cf19ac

// -[SCMultiSnapConfigurationImpl deleteSegmentAtIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x108cf1a08

// -[SCMultiSnapConfigurationImpl generateThumbnailsForDemotedStatesWithAVAsset:]
// Type encoding: @24@0:8@16
// Implementation: 0x108cf1b38

// -[SCMultiSnapConfigurationImpl generateThumbnailsForSelectedStatesWithAVAsset:withPlayerHandler:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108cf1e7c

// -[SCMultiSnapConfigurationImpl fetchAndSetThumbnailsForCapturedSingleSegmentWithPlayerHandler:isDelayThumbnailGenerationEnabled:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x108cf2434

// -[SCMultiSnapConfigurationImpl originalThumbnailsForDemotedStateAtIndex:completion:]
// Type encoding: v32@0:8q16@?24
// Implementation: 0x108cf27b0

// -[SCMultiSnapConfigurationImpl updateCaptureSegmentWithFinalDuration:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x108cf2d38

// -[SCMultiSnapConfigurationImpl hasDeletion]
// Type encoding: B16@0:8
// Implementation: 0x108cf3834

// -[SCMultiSnapConfigurationImpl setHasDeletion:]
// Type encoding: v20@0:8B16
// Implementation: 0x108cf383c

// -[SCMultiSnapConfigurationImpl isVideoCapturedBySnapchat]
// Type encoding: B16@0:8
// Implementation: 0x108cf3844

// -[SCMultiSnapConfigurationImpl setIsVideoCapturedBySnapchat:]
// Type encoding: v20@0:8B16
// Implementation: 0x108cf384c

// -[SCMultiSnapConfigurationImpl segmentIdToIndexMap]
// Type encoding: @16@0:8
// Implementation: 0x108cf3854

// -[SCMultiSnapConfigurationImpl supportsSplitting]
// Type encoding: B16@0:8
// Implementation: 0x108cf385c

// -[SCMultiSnapConfigurationImpl setSupportsSplitting:]
// Type encoding: v20@0:8B16
// Implementation: 0x108cf3864

// -[SCMultiSnapConfigurationImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108cf386c

// +[SCMultiSnapConfigurationImpl generateThumbnailsFromVideoAsset:atTimes:withImageSize:]
// Type encoding: @48@0:8@16@24{CGSize=dd}32
// Implementation: 0x108cf2e34

// +[SCMultiSnapConfigurationImpl generateThumbnailFuturesFromVideoAsset:atTimes:withImageSize:]
// Type encoding: @48@0:8@16@24{CGSize=dd}32
// Implementation: 0x108cf3124

// +[SCMultiSnapConfigurationImpl generateThumbnailFuturesWithVideoAsset:]
// Type encoding: @24@0:8@16
// Implementation: 0x108cf345c

// +[SCMultiSnapConfigurationImpl generateMultiSnapSegmentsWithVideoAsset:]
// Type encoding: @24@0:8@16
// Implementation: 0x108cf35fc

// +[SCMultiSnapConfigurationImpl generatingMultiSnapSegmentsWithDelayThumbnailsGeneration:videoAsset:]
// Type encoding: @28@0:8B16@20
// Implementation: 0x108cf3608

@end
