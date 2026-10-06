// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBatchCaptureConfigurationImpl
// Superclass: NSObject
// Address: 0x112bbeaa8

@interface SCBatchCaptureConfigurationImpl

// Property: segments; attributes: T@"NSArray",C,N,V_segments
// Property: previewEdits; attributes: T@"<SCBatchCapturePreviewEditing>",&,N,V_previewEdits
// Property: batchCaptureSessionID; attributes: T@"NSString",C,N,V_batchCaptureSessionID
// Property: deletedSegmentCaptureSessionIDs; attributes: T@"NSArray",R,N,V_deletedSegmentCaptureSessionIDs
// Property: uniqueSnapCreationCount; attributes: TQ,R,N,V_uniqueSnapCreationCount
// Property: saved; attributes: TB,N,GisSaved,V_saved
// Property: unsavedCount; attributes: TQ,R,N,V_unsavedCount
// Property: isV2; attributes: TB,N,V_isV2
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBatchCaptureConfigurationImpl init]
// Type encoding: @16@0:8
// Implementation: 0x108cdbe90

// -[SCBatchCaptureConfigurationImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x108cdbf54

// -[SCBatchCaptureConfigurationImpl setSegments:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cdbf9c

// -[SCBatchCaptureConfigurationImpl segments]
// Type encoding: @16@0:8
// Implementation: 0x108cdbfe0

// -[SCBatchCaptureConfigurationImpl uniqueSnapCreationCount]
// Type encoding: Q16@0:8
// Implementation: 0x108cdc008

// -[SCBatchCaptureConfigurationImpl deletedSegmentCaptureSessionIDs]
// Type encoding: @16@0:8
// Implementation: 0x108cdc074

// -[SCBatchCaptureConfigurationImpl timeRanges]
// Type encoding: @16@0:8
// Implementation: 0x108cdc09c

// -[SCBatchCaptureConfigurationImpl addBatchCaptureSegment:]
// Type encoding: @24@0:8@16
// Implementation: 0x108cdc1b0

// -[SCBatchCaptureConfigurationImpl updateSegment:atIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x108cdc28c

// -[SCBatchCaptureConfigurationImpl deleteSegmentAtIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x108cdc2bc

// -[SCBatchCaptureConfigurationImpl deleteSnapSegmentAtIndexPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cdc374

// -[SCBatchCaptureConfigurationImpl deleteAllSegments]
// Type encoding: v16@0:8
// Implementation: 0x108cdc3e0

// -[SCBatchCaptureConfigurationImpl deleteAllSegmentsWithDiscardMethod:]
// Type encoding: v24@0:8q16
// Implementation: 0x108cdc3e8

// -[SCBatchCaptureConfigurationImpl _updateSegmentStartTimeOffsetFromIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x108cdc5e0

// -[SCBatchCaptureConfigurationImpl firstFrameImage]
// Type encoding: @16@0:8
// Implementation: 0x108cdc724

// -[SCBatchCaptureConfigurationImpl addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cdc76c

// -[SCBatchCaptureConfigurationImpl unsavedCount]
// Type encoding: Q16@0:8
// Implementation: 0x108cdc774

// -[SCBatchCaptureConfigurationImpl previewEdits]
// Type encoding: @16@0:8
// Implementation: 0x108cdc80c

// -[SCBatchCaptureConfigurationImpl setPreviewEdits:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cdc814

// -[SCBatchCaptureConfigurationImpl batchCaptureSessionID]
// Type encoding: @16@0:8
// Implementation: 0x108cdc844

// -[SCBatchCaptureConfigurationImpl setBatchCaptureSessionID:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cdc84c

// -[SCBatchCaptureConfigurationImpl isSaved]
// Type encoding: B16@0:8
// Implementation: 0x108cdc854

// -[SCBatchCaptureConfigurationImpl setSaved:]
// Type encoding: v20@0:8B16
// Implementation: 0x108cdc85c

// -[SCBatchCaptureConfigurationImpl isV2]
// Type encoding: B16@0:8
// Implementation: 0x108cdc864

// -[SCBatchCaptureConfigurationImpl setIsV2:]
// Type encoding: v20@0:8B16
// Implementation: 0x108cdc86c

// -[SCBatchCaptureConfigurationImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108cdc874

@end
