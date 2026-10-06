// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensScheduleDataLogger
// Superclass: NSObject
// Address: 0x112ad36e8

@interface SCLensScheduleDataLogger


// -[SCLensScheduleDataLogger initWithGraphene:grapheneLoggerV2:circumstanceEngine:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1003d7af4

// -[SCLensScheduleDataLogger logLensScheduleDataUpdateDurationMs:]
// Type encoding: v24@0:8d16
// Implementation: 0x1061ff174

// -[SCLensScheduleDataLogger logScheduleRequestNamespace:providedChecksumsCount:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1061ff188

// -[SCLensScheduleDataLogger logScheduleResponseData:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061ff1ec

// -[SCLensScheduleDataLogger logScheduleLatency:scheduleNamespace:]
// Type encoding: v32@0:8d16@24
// Implementation: 0x1061ff3ac

// -[SCLensScheduleDataLogger logAverageParsingTime:scheduleNamespace:]
// Type encoding: v32@0:8d16@24
// Implementation: 0x1061ff3c0

// -[SCLensScheduleDataLogger logMixerLocationFreshness:age:accuracy:hasPermission:fetchStatus:]
// Type encoding: v52@0:8q16q24d32B40q44
// Implementation: 0x1061ff3cc

// -[SCLensScheduleDataLogger logScheduleResponseStatusCode:updatingMode:scheduleNamespace:isFirstPage:]
// Type encoding: v44@0:8q16Q24@32B40
// Implementation: 0x1061ff4b8

// -[SCLensScheduleDataLogger logMixerCTItemsEnabledOldValue:newValue:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1061ff5c0

// -[SCLensScheduleDataLogger logMixerBandwidthEstimation:bandwidthClass:reachability:]
// Type encoding: v40@0:8q16@24@32
// Implementation: 0x1061ff690

// -[SCLensScheduleDataLogger logMixerAppStartDelta:]
// Type encoding: v24@0:8q16
// Implementation: 0x1061ff6a4

// -[SCLensScheduleDataLogger _logScheduleResponseForNamespace:isFirstPage:stat:value:]
// Type encoding: v44@0:8@16B24@28Q36
// Implementation: 0x1061ff704

// -[SCLensScheduleDataLogger _locationFreshnessStringFromLocationFreshness:]
// Type encoding: @24@0:8q16
// Implementation: 0x1061ff72c

// -[SCLensScheduleDataLogger _fetchStatusFromFetchType:]
// Type encoding: @24@0:8q16
// Implementation: 0x1061ff758

// -[SCLensScheduleDataLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1061ff780

// +[SCLensScheduleDataLogger _stringBoolValue:]
// Type encoding: @24@0:8@16
// Implementation: 0x1061ff6b0

@end
