// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapPlaceVisitsService
// Superclass: NSObject
// Address: 0x112af6288

@interface SCMapPlaceVisitsService

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapPlaceVisitsService initWithEagleClient:workerQueue:grapheneMetricLogger:blizzardLogger:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106764b7c

// -[SCMapPlaceVisitsService getInferredLocationWithLocation:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106764c78

// -[SCMapPlaceVisitsService _handleInferredLocationResponse:error:captureLocation:startTimestamp:completionQueue:completion:]
// Type encoding: v64@0:8@16@24@32d40@48@?56
// Implementation: 0x106765114

// -[SCMapPlaceVisitsService _constructLocationSignalsForLocation:]
// Type encoding: @24@0:8@16
// Implementation: 0x106765468

// -[SCMapPlaceVisitsService _recordGetInferredLocationWithSuccess:hasInferredLocation:startTimestamp:]
// Type encoding: v32@0:8B16B20d24
// Implementation: 0x106765598

// -[SCMapPlaceVisitsService removeVisitForPlaceID:source:completion:]
// Type encoding: v40@0:8@16q24@?32
// Implementation: 0x106765644

// -[SCMapPlaceVisitsService removeAllPlaceVisitsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1067658d4

// -[SCMapPlaceVisitsService _recordRemovedPlaceID:source:success:]
// Type encoding: v36@0:8@16q24B32
// Implementation: 0x106765a68

// -[SCMapPlaceVisitsService _recordRemoveAllWithSuccess:]
// Type encoding: v20@0:8B16
// Implementation: 0x106765b14

// -[SCMapPlaceVisitsService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106765b88

@end
