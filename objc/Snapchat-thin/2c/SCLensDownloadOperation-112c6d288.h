// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensDownloadOperation
// Superclass: NSObject
// Address: 0x112c6d288

@interface SCLensDownloadOperation

// Property: enqueuedRequestId; attributes: T@"NSString",C,V_enqueuedRequestId
// Property: operationId; attributes: T@"NSString",R,C,N,V_operationId
// Property: lens; attributes: T@"SCLens",R,N,V_lens
// Property: requestTiming; attributes: Tq,R,N,V_requestTiming
// Property: fetchPriority; attributes: Tq,N,V_fetchPriority
// Property: resultPromise; attributes: T@"SCPromise",R,N,V_resultPromise
// Property: progressObservable; attributes: T@"SCObservable",R,N

// -[SCLensDownloadOperation initWithLens:requestTiming:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10b0cd89c

// -[SCLensDownloadOperation executeWithSettings:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0cd958

// -[SCLensDownloadOperation boostWithSettings:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0cd9b8

// -[SCLensDownloadOperation boostWithRequestTiming:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b0cda18

// -[SCLensDownloadOperation finishWithResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0cda2c

// -[SCLensDownloadOperation finishWithSuccess:settings:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b0cda7c

// -[SCLensDownloadOperation finishWithFailure:settings:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b0cdac0

// -[SCLensDownloadOperation progressObservable]
// Type encoding: @16@0:8
// Implementation: 0x10b0cdb04

// -[SCLensDownloadOperation copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b0cdb0c

// -[SCLensDownloadOperation operationId]
// Type encoding: @16@0:8
// Implementation: 0x10b0cdb30

// -[SCLensDownloadOperation lens]
// Type encoding: @16@0:8
// Implementation: 0x10b0cdb38

// -[SCLensDownloadOperation requestTiming]
// Type encoding: q16@0:8
// Implementation: 0x10b0cdb40

// -[SCLensDownloadOperation fetchPriority]
// Type encoding: q16@0:8
// Implementation: 0x10b0cdb48

// -[SCLensDownloadOperation setFetchPriority:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b0cdb50

// -[SCLensDownloadOperation resultPromise]
// Type encoding: @16@0:8
// Implementation: 0x10b0cdb58

// -[SCLensDownloadOperation enqueuedRequestId]
// Type encoding: @16@0:8
// Implementation: 0x10b0cdb60

// -[SCLensDownloadOperation setEnqueuedRequestId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0cdb6c

// -[SCLensDownloadOperation .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0cdb74

@end
