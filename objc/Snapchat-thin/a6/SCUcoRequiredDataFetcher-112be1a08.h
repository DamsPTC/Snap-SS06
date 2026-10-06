// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUcoRequiredDataFetcher
// Superclass: NSObject
// Address: 0x112be1a08

@interface SCUcoRequiredDataFetcher

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUcoRequiredDataFetcher initWithUcoDataFetching:requiredDataLoader:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1090280b0

// -[SCUcoRequiredDataFetcher fetchedUCOObservable]
// Type encoding: @16@0:8
// Implementation: 0x109028154

// -[SCUcoRequiredDataFetcher fetchUcoWithFilterId:completion:completionPerformer:]
// Type encoding: v40@0:8@16@?24@32
// Implementation: 0x10902815c

// -[SCUcoRequiredDataFetcher fetchUcoWithFilterId:requestTiming:completion:completionPerformer:]
// Type encoding: v48@0:8@16q24@?32@40
// Implementation: 0x10902816c

// -[SCUcoRequiredDataFetcher fetchUcoIconWithFilterId:completion:completionPerformer:]
// Type encoding: v40@0:8@16@?24@32
// Implementation: 0x10902832c

// -[SCUcoRequiredDataFetcher fetchUcoWithLens:completion:completionPerformer:]
// Type encoding: v40@0:8@16@?24@32
// Implementation: 0x1090284d0

// -[SCUcoRequiredDataFetcher startUpdatingWithMode:]
// Type encoding: v24@0:8Q16
// Implementation: 0x109028688

// -[SCUcoRequiredDataFetcher stopUpdating]
// Type encoding: v16@0:8
// Implementation: 0x109028694

// -[SCUcoRequiredDataFetcher _fetchRequiredDataForLens:completion:completionPerformer:]
// Type encoding: v40@0:8@16@?24@32
// Implementation: 0x10902869c

// -[SCUcoRequiredDataFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109028840

@end
