// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNeoPlayerHLSSegmentsRequest
// Superclass: NSObject
// Address: 0x112be67d8

@interface SCNeoPlayerHLSSegmentsRequest

// Property: baseURL; attributes: T@"NSURL",R,N,V_baseURL
// Property: queue; attributes: T@"NSObject<OS_dispatch_queue>",R,N,V_queue
// Property: completion; attributes: T@?,R,N,V_completion
// Property: requestId; attributes: Tq,N,V_requestId
// Property: dataProvider; attributes: T@"<SCNNeoPlayerMediaDataProvider>",&,N,V_dataProvider
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNeoPlayerHLSSegmentsRequest initWithBaseURL:queue:completion:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x1090b24c0

// -[SCNeoPlayerHLSSegmentsRequest cancelRequest]
// Type encoding: v16@0:8
// Implementation: 0x1090b254c

// -[SCNeoPlayerHLSSegmentsRequest onLoadFailed:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090b257c

// -[SCNeoPlayerHLSSegmentsRequest onLoadCompleted:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090b263c

// -[SCNeoPlayerHLSSegmentsRequest onDataSizeResolved:]
// Type encoding: v24@0:8q16
// Implementation: 0x1090b2740

// -[SCNeoPlayerHLSSegmentsRequest baseURL]
// Type encoding: @16@0:8
// Implementation: 0x1090b2744

// -[SCNeoPlayerHLSSegmentsRequest queue]
// Type encoding: @16@0:8
// Implementation: 0x1090b274c

// -[SCNeoPlayerHLSSegmentsRequest completion]
// Type encoding: @?16@0:8
// Implementation: 0x1090b2754

// -[SCNeoPlayerHLSSegmentsRequest requestId]
// Type encoding: q16@0:8
// Implementation: 0x1090b275c

// -[SCNeoPlayerHLSSegmentsRequest setRequestId:]
// Type encoding: v24@0:8q16
// Implementation: 0x1090b2764

// -[SCNeoPlayerHLSSegmentsRequest dataProvider]
// Type encoding: @16@0:8
// Implementation: 0x1090b276c

// -[SCNeoPlayerHLSSegmentsRequest setDataProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090b2774

// -[SCNeoPlayerHLSSegmentsRequest .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090b2794

@end
