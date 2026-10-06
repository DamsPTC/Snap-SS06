// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNeoMediaDataProviderRequestQueue
// Superclass: NSObject
// Address: 0x112be5b58

@interface SCNeoMediaDataProviderRequestQueue


// -[SCNeoMediaDataProviderRequestQueue init]
// Type encoding: @16@0:8
// Implementation: 0x10909ce54

// -[SCNeoMediaDataProviderRequestQueue _doEnqueueRequestWithByteOffset:chunkSizeHint:completionQueue:completion:isDataSizeRequest:]
// Type encoding: @52@0:8Q16Q24@32@40B48
// Implementation: 0x10909cef0

// -[SCNeoMediaDataProviderRequestQueue enqueueRequestWithByteOffset:chunkSizeHint:completionQueue:completion:]
// Type encoding: @48@0:8Q16Q24@32@40
// Implementation: 0x10909cfe8

// -[SCNeoMediaDataProviderRequestQueue enqueueDataSizeWithCompletionQueue:completion:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10909d008

// -[SCNeoMediaDataProviderRequestQueue topRequest]
// Type encoding: @16@0:8
// Implementation: 0x10909d038

// -[SCNeoMediaDataProviderRequestQueue associateCancelBlock:forRequestId:]
// Type encoding: v32@0:8@?16q24
// Implementation: 0x10909d088

// -[SCNeoMediaDataProviderRequestQueue _removeRequestWithId:]
// Type encoding: @24@0:8q16
// Implementation: 0x10909d13c

// -[SCNeoMediaDataProviderRequestQueue cancelRequestWithId:]
// Type encoding: v24@0:8q16
// Implementation: 0x10909d1d0

// -[SCNeoMediaDataProviderRequestQueue completeRequestWithId:data:totalDataSize:isEOF:error:]
// Type encoding: v52@0:8q16@24Q32B40@44
// Implementation: 0x10909d24c

// -[SCNeoMediaDataProviderRequestQueue .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10909d48c

@end
