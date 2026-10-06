// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRTUSClientCacheMetricsLogger
// Superclass: NSObject
// Address: 0x112c2a168

@interface SCRTUSClientCacheMetricsLogger


// -[SCRTUSClientCacheMetricsLogger initWithConfigProvider:graphene:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10af68178

// -[SCRTUSClientCacheMetricsLogger logAddEventLatencyMillisForProduct:durationMillis:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x10af6821c

// -[SCRTUSClientCacheMetricsLogger logWriteEventResultForProduct:payloadId:status:]
// Type encoding: v40@0:8q16q24@32
// Implementation: 0x10af6828c

// -[SCRTUSClientCacheMetricsLogger logBlizzardEventSize:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af6835c

// -[SCRTUSClientCacheMetricsLogger logNumRecordsInDbForProduct:count:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x10af6845c

// -[SCRTUSClientCacheMetricsLogger logGetNumRecordsFailureForProduct:error:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10af684cc

// -[SCRTUSClientCacheMetricsLogger logDbTrimRecordsFailureForProduct:error:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10af68538

// -[SCRTUSClientCacheMetricsLogger logGetEventsLatencyMillisForProduct:durationMillis:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x10af685a4

// -[SCRTUSClientCacheMetricsLogger logGetEventsAsyncDeleteLatencyMillisForProduct:durationMillis:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x10af68614

// -[SCRTUSClientCacheMetricsLogger logNumberOfEventsRetrievedForProduct:count:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x10af68684

// -[SCRTUSClientCacheMetricsLogger logGetEventsFailureForProduct:error:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10af686f4

// -[SCRTUSClientCacheMetricsLogger logGetEventsDeleteFailureForProduct:error:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10af687a0

// -[SCRTUSClientCacheMetricsLogger logPurgeEventsLatencyMillisForProduct:durationMillis:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x10af6880c

// -[SCRTUSClientCacheMetricsLogger logPurgeEventsFailureForProduct:error:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10af6887c

// -[SCRTUSClientCacheMetricsLogger logEventsPurgedForProduct:]
// Type encoding: v24@0:8q16
// Implementation: 0x10af688e8

// -[SCRTUSClientCacheMetricsLogger logPurgeEventsOnBackgroundLatencyMillis:]
// Type encoding: v24@0:8q16
// Implementation: 0x10af68954

// -[SCRTUSClientCacheMetricsLogger logPurgeEventsOnBackgroundFailureForProduct:error:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10af68960

// -[SCRTUSClientCacheMetricsLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10af689cc

@end
