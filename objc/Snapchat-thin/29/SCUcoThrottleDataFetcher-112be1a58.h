// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUcoThrottleDataFetcher
// Superclass: NSObject
// Address: 0x112be1a58

@interface SCUcoThrottleDataFetcher

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUcoThrottleDataFetcher initWithThrottledDataFetching:timeProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x109028870

// -[SCUcoThrottleDataFetcher fetchedUCOObservable]
// Type encoding: @16@0:8
// Implementation: 0x109028964

// -[SCUcoThrottleDataFetcher fetchUcoWithFilterId:completion:completionPerformer:]
// Type encoding: v40@0:8@16@?24@32
// Implementation: 0x10902896c

// -[SCUcoThrottleDataFetcher fetchUcoWithFilterId:requestTiming:completion:completionPerformer:]
// Type encoding: v48@0:8@16q24@?32@40
// Implementation: 0x10902897c

// -[SCUcoThrottleDataFetcher fetchUcoWithLens:completion:completionPerformer:]
// Type encoding: v40@0:8@16@?24@32
// Implementation: 0x109028990

// -[SCUcoThrottleDataFetcher fetchUcoIconWithFilterId:completion:completionPerformer:]
// Type encoding: v40@0:8@16@?24@32
// Implementation: 0x109028a2c

// -[SCUcoThrottleDataFetcher _fetchUcoWithFilterId:lens:requestTiming:completion:completionPerformer:]
// Type encoding: v56@0:8@16@24q32@?40@48
// Implementation: 0x109028bd8

// -[SCUcoThrottleDataFetcher startUpdatingWithMode:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10902909c

// -[SCUcoThrottleDataFetcher stopUpdating]
// Type encoding: v16@0:8
// Implementation: 0x1090290a4

// -[SCUcoThrottleDataFetcher dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1090290ac

// -[SCUcoThrottleDataFetcher _fetchFinishedForUcoWithFilterId:lens:error:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1090292c8

// -[SCUcoThrottleDataFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10902941c

// +[SCUcoThrottleDataFetcher _dataFetcherDeallocatedError]
// Type encoding: @16@0:8
// Implementation: 0x109029208

@end
