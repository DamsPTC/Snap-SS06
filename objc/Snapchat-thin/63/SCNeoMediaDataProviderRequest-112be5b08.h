// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNeoMediaDataProviderRequest
// Superclass: NSObject
// Address: 0x112be5b08

@interface SCNeoMediaDataProviderRequest

// Property: requestId; attributes: Tq,R,N,V_requestId
// Property: byteOffset; attributes: TQ,R,N,V_byteOffset
// Property: chunkSizeHint; attributes: TQ,R,N,V_chunkSizeHint
// Property: completionQueue; attributes: T@"NSObject<OS_dispatch_queue>",R,N,V_completionQueue
// Property: completion; attributes: T@"<SCNNeoPlayerMediaDataProviderCompletion>",R,N,V_completion
// Property: isDataSizeRequest; attributes: TB,R,N,V_isDataSizeRequest

// -[SCNeoMediaDataProviderRequest initWithRequestId:byteOffset:chunkSizeHint:completionQueue:completion:isDataSizeRequest:]
// Type encoding: @60@0:8q16Q24Q32@40@48B56
// Implementation: 0x10909ccd8

// -[SCNeoMediaDataProviderRequest setCancelBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10909cda8

// -[SCNeoMediaDataProviderRequest cancelBlock]
// Type encoding: @?16@0:8
// Implementation: 0x10909cdd8

// -[SCNeoMediaDataProviderRequest requestId]
// Type encoding: q16@0:8
// Implementation: 0x10909cdf0

// -[SCNeoMediaDataProviderRequest byteOffset]
// Type encoding: Q16@0:8
// Implementation: 0x10909cdf8

// -[SCNeoMediaDataProviderRequest chunkSizeHint]
// Type encoding: Q16@0:8
// Implementation: 0x10909ce00

// -[SCNeoMediaDataProviderRequest completionQueue]
// Type encoding: @16@0:8
// Implementation: 0x10909ce08

// -[SCNeoMediaDataProviderRequest completion]
// Type encoding: @16@0:8
// Implementation: 0x10909ce10

// -[SCNeoMediaDataProviderRequest isDataSizeRequest]
// Type encoding: B16@0:8
// Implementation: 0x10909ce18

// -[SCNeoMediaDataProviderRequest .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10909ce20

@end
