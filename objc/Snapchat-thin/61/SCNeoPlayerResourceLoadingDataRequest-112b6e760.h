// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNeoPlayerResourceLoadingDataRequest
// Superclass: NSObject
// Address: 0x112b6e760

@interface SCNeoPlayerResourceLoadingDataRequest

// Property: requestedLength; attributes: Tq,R,N,VrequestedLength
// Property: requestsAllDataToEndOfResource; attributes: TB,R,N,VrequestsAllDataToEndOfResource
// Property: requestedOffset; attributes: Tq,R,N,VrequestedOffset
// Property: currentOffset; attributes: Tq,R,N,VcurrentOffset
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNeoPlayerResourceLoadingDataRequest initWithloadDataChunk:chunkSize:completion:]
// Type encoding: @40@0:8q16q24@?32
// Implementation: 0x107aa7a00

// -[SCNeoPlayerResourceLoadingDataRequest respondWithData:]
// Type encoding: v24@0:8@16
// Implementation: 0x107aa7a9c

// -[SCNeoPlayerResourceLoadingDataRequest finishLoading]
// Type encoding: v16@0:8
// Implementation: 0x107aa7aa4

// -[SCNeoPlayerResourceLoadingDataRequest finishLoadingWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x107aa7abc

// -[SCNeoPlayerResourceLoadingDataRequest requestedLength]
// Type encoding: q16@0:8
// Implementation: 0x107aa7b38

// -[SCNeoPlayerResourceLoadingDataRequest requestedOffset]
// Type encoding: q16@0:8
// Implementation: 0x107aa7b40

// -[SCNeoPlayerResourceLoadingDataRequest requestsAllDataToEndOfResource]
// Type encoding: B16@0:8
// Implementation: 0x107aa7b48

// -[SCNeoPlayerResourceLoadingDataRequest currentOffset]
// Type encoding: q16@0:8
// Implementation: 0x107aa7b50

// -[SCNeoPlayerResourceLoadingDataRequest .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107aa7b58

@end
