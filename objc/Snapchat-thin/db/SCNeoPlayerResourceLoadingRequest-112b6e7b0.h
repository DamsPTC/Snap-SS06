// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNeoPlayerResourceLoadingRequest
// Superclass: NSObject
// Address: 0x112b6e7b0

@interface SCNeoPlayerResourceLoadingRequest

// Property: requestId; attributes: T@"NSNumber",R,N,V_requestId
// Property: dataRequest; attributes: T@"<SCResourceLoadingDataRequest>",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNeoPlayerResourceLoadingRequest initWithloadDataChunk:chunkSize:requestId:completion:]
// Type encoding: @48@0:8q16q24q32@?40
// Implementation: 0x107aa7b88

// -[SCNeoPlayerResourceLoadingRequest finishLoading]
// Type encoding: v16@0:8
// Implementation: 0x107aa7c3c

// -[SCNeoPlayerResourceLoadingRequest finishLoadingWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x107aa7c44

// -[SCNeoPlayerResourceLoadingRequest dataRequest]
// Type encoding: @16@0:8
// Implementation: 0x107aa7c4c

// -[SCNeoPlayerResourceLoadingRequest requestId]
// Type encoding: @16@0:8
// Implementation: 0x107aa7c74

// -[SCNeoPlayerResourceLoadingRequest .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107aa7c7c

@end
