// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBatchCaptureSegmentExportSession
// Superclass: NSObject
// Address: 0x112bbea08

@interface SCBatchCaptureSegmentExportSession

// Property: savingConfiguration; attributes: T@"SCBatchCaptureSavingConfiguration",&,N,V_savingConfiguration

// -[SCBatchCaptureSegmentExportSession initWithBatchCaptureConfiguration:]
// Type encoding: @24@0:8@16
// Implementation: 0x108cdaa5c

// -[SCBatchCaptureSegmentExportSession batchExportToOutputUrls:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108cdab1c

// -[SCBatchCaptureSegmentExportSession exportSegmentAtIndex:timeRange:toOutputUrl:circumstanceEngine:completionQueue:completionHandler:]
// Type encoding: v104@0:8q16{?={?=qiIq}{?=qiIq}}24@72@80@88@?96
// Implementation: 0x108cdb060

// -[SCBatchCaptureSegmentExportSession cancel]
// Type encoding: v16@0:8
// Implementation: 0x108cdb4ec

// -[SCBatchCaptureSegmentExportSession dealloc]
// Type encoding: v16@0:8
// Implementation: 0x108cdb4f4

// -[SCBatchCaptureSegmentExportSession _addExportOperationsForSegment:finishOperation:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108cdb53c

// -[SCBatchCaptureSegmentExportSession _addExportOperationsForVideoSegment:finishedOperation:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108cdb5f4

// -[SCBatchCaptureSegmentExportSession savingConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x108cdb784

// -[SCBatchCaptureSegmentExportSession setSavingConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cdb78c

// -[SCBatchCaptureSegmentExportSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108cdb7bc

@end
