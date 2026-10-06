// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBatchCaptureSavingConfiguration
// Superclass: NSObject
// Address: 0x112bbe9b8

@interface SCBatchCaptureSavingConfiguration

// Property: isSavingAll; attributes: TB,N,V_isSavingAll
// Property: segmentIndexToSave; attributes: Tq,N,V_segmentIndexToSave
// Property: numberOfSegmentsToSave; attributes: TQ,R,N

// -[SCBatchCaptureSavingConfiguration initWithBatchCaptureConfiguration:]
// Type encoding: @24@0:8@16
// Implementation: 0x108cd9fcc

// -[SCBatchCaptureSavingConfiguration numberOfMediasToSave]
// Type encoding: q16@0:8
// Implementation: 0x108cda12c

// -[SCBatchCaptureSavingConfiguration setSegmentIndexToSave:]
// Type encoding: v24@0:8q16
// Implementation: 0x108cda168

// -[SCBatchCaptureSavingConfiguration timeRangesOfMediasToSave]
// Type encoding: @16@0:8
// Implementation: 0x108cda170

// -[SCBatchCaptureSavingConfiguration timeRangesOfSegmentsToSave]
// Type encoding: @16@0:8
// Implementation: 0x108cda230

// -[SCBatchCaptureSavingConfiguration localTimeRangesOfMediasToSave]
// Type encoding: @16@0:8
// Implementation: 0x108cda350

// -[SCBatchCaptureSavingConfiguration localTimeRangesOfSegmentsToSave]
// Type encoding: @16@0:8
// Implementation: 0x108cda3d0

// -[SCBatchCaptureSavingConfiguration segmentMetadataOfMediasToSave]
// Type encoding: @16@0:8
// Implementation: 0x108cda4b8

// -[SCBatchCaptureSavingConfiguration numberOfMediasToSaveForSegmentIndex:]
// Type encoding: q24@0:8q16
// Implementation: 0x108cda578

// -[SCBatchCaptureSavingConfiguration startIndexOfMediasToSaveForSegmentIndex:]
// Type encoding: q24@0:8q16
// Implementation: 0x108cda60c

// -[SCBatchCaptureSavingConfiguration segmentIndexForMediaIndex:]
// Type encoding: q24@0:8q16
// Implementation: 0x108cda668

// -[SCBatchCaptureSavingConfiguration numberOfSegmentsToSave]
// Type encoding: Q16@0:8
// Implementation: 0x108cda6a8

// -[SCBatchCaptureSavingConfiguration shouldSaveSegmentAtIndex:]
// Type encoding: B24@0:8q16
// Implementation: 0x108cda6e0

// -[SCBatchCaptureSavingConfiguration _segmentIndexForMediaIndex:]
// Type encoding: q24@0:8q16
// Implementation: 0x108cda71c

// -[SCBatchCaptureSavingConfiguration _timeRangesForSegment:]
// Type encoding: @24@0:8@16
// Implementation: 0x108cda7ec

// -[SCBatchCaptureSavingConfiguration _segmentMetadatasForSegment:]
// Type encoding: @24@0:8@16
// Implementation: 0x108cda95c

// -[SCBatchCaptureSavingConfiguration isSavingAll]
// Type encoding: B16@0:8
// Implementation: 0x108cdaa14

// -[SCBatchCaptureSavingConfiguration setIsSavingAll:]
// Type encoding: v20@0:8B16
// Implementation: 0x108cdaa1c

// -[SCBatchCaptureSavingConfiguration segmentIndexToSave]
// Type encoding: q16@0:8
// Implementation: 0x108cdaa24

// -[SCBatchCaptureSavingConfiguration .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108cdaa2c

@end
