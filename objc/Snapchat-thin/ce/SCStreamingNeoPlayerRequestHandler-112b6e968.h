// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStreamingNeoPlayerRequestHandler
// Superclass: NSObject
// Address: 0x112b6e968

@interface SCStreamingNeoPlayerRequestHandler

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStreamingNeoPlayerRequestHandler initWithConfigProvider:contentInfo:callbackQueue:requestHandlerDelegate:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x107aaaa24

// -[SCStreamingNeoPlayerRequestHandler setStreamingContext]
// Type encoding: v16@0:8
// Implementation: 0x107aaac10

// -[SCStreamingNeoPlayerRequestHandler dealloc]
// Type encoding: v16@0:8
// Implementation: 0x107aaacac

// -[SCStreamingNeoPlayerRequestHandler setViewLocation:]
// Type encoding: v24@0:8q16
// Implementation: 0x107aaad50

// -[SCStreamingNeoPlayerRequestHandler cancel]
// Type encoding: v16@0:8
// Implementation: 0x107aaad54

// -[SCStreamingNeoPlayerRequestHandler _tearDown]
// Type encoding: v16@0:8
// Implementation: 0x107aaae38

// -[SCStreamingNeoPlayerRequestHandler cancelLoad:]
// Type encoding: v24@0:8q16
// Implementation: 0x107aaaf80

// -[SCStreamingNeoPlayerRequestHandler getTotalDataSize:]
// Type encoding: q24@0:8@?16
// Implementation: 0x107aab0f0

// -[SCStreamingNeoPlayerRequestHandler copyLocallyAvailableDataWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107aab178

// -[SCStreamingNeoPlayerRequestHandler loadDataChunk:chunkSize:completion:]
// Type encoding: q40@0:8q16q24@?32
// Implementation: 0x107aab350

// -[SCStreamingNeoPlayerRequestHandler _loadDataChunkWithByteOffset:chunkSize:externalRequestId:completion:]
// Type encoding: v48@0:8q16q24q32@?40
// Implementation: 0x107aab494

// -[SCStreamingNeoPlayerRequestHandler _handleCMWriteStreamCallbackforNeoPlayerLoadingRequest:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107aab7a0

// -[SCStreamingNeoPlayerRequestHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107aab874

@end
