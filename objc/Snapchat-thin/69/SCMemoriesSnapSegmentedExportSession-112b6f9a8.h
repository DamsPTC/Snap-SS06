// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesSnapSegmentedExportSession
// Superclass: NSObject
// Address: 0x112b6f9a8

@interface SCMemoriesSnapSegmentedExportSession

// Property: optimizesForNetworkUse; attributes: TB,N,V_optimizesForNetworkUse

// -[SCMemoriesSnapSegmentedExportSession initWithEncryptedContentManager:snap:cloudFile:segmentDuration:]
// Type encoding: @48@0:8@16@24@32d40
// Implementation: 0x107aded74

// -[SCMemoriesSnapSegmentedExportSession exportWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107adee84

// -[SCMemoriesSnapSegmentedExportSession _exportSegmentAtIndex:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107adf258

// -[SCMemoriesSnapSegmentedExportSession _completeWithSegmentURLs:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107adf5c0

// -[SCMemoriesSnapSegmentedExportSession optimizesForNetworkUse]
// Type encoding: B16@0:8
// Implementation: 0x107adf83c

// -[SCMemoriesSnapSegmentedExportSession setOptimizesForNetworkUse:]
// Type encoding: v20@0:8B16
// Implementation: 0x107adf844

// -[SCMemoriesSnapSegmentedExportSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107adf84c

@end
