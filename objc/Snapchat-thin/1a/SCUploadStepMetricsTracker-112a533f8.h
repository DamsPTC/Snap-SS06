// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUploadStepMetricsTracker
// Superclass: NSObject
// Address: 0x112a533f8

@interface SCUploadStepMetricsTracker

// Property: didResume; attributes: TB,N,V_didResume
// Property: uploadUrlType; attributes: Ti,N,V_uploadUrlType
// Property: locationAttribution; attributes: T@"NSString",C,N,V_locationAttribution

// -[SCUploadStepMetricsTracker initWithGrapheneRegistryLazy:blizzardLogger:uniqueMediaId:boltUploadRequest:uploadLocationCallbackMetrics:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10562d764

// -[SCUploadStepMetricsTracker mediaOrchestrationAttemptId]
// Type encoding: @16@0:8
// Implementation: 0x10562daac

// -[SCUploadStepMetricsTracker logStartUploadStep:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10562dad4

// -[SCUploadStepMetricsTracker logEndCurrentUploadStep]
// Type encoding: v16@0:8
// Implementation: 0x10562dafc

// -[SCUploadStepMetricsTracker logUploadCompletionWithSuccess:uploadSize:contentReference:errorResponse:error:]
// Type encoding: v52@0:8B16Q20@28@36@44
// Implementation: 0x10562dcd4

// -[SCUploadStepMetricsTracker logUploadBandwidthEstimate:timeToUploadWithDataSize:]
// Type encoding: v32@0:8q16Q24
// Implementation: 0x10562dd8c

// -[SCUploadStepMetricsTracker logUploadBytesAlreadyUploaded:bytesRemaining:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x10562dfc4

// -[SCUploadStepMetricsTracker logResumeState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10562e1c8

// -[SCUploadStepMetricsTracker logDequeUrlStepDidSucceed:]
// Type encoding: v20@0:8B16
// Implementation: 0x10562e2b4

// -[SCUploadStepMetricsTracker logPersistMediaStepDidSucceed:]
// Type encoding: v20@0:8B16
// Implementation: 0x10562e42c

// -[SCUploadStepMetricsTracker logReadMediaStepDidSucceed:]
// Type encoding: v20@0:8B16
// Implementation: 0x10562e5a4

// -[SCUploadStepMetricsTracker logResumableUploaderStartStep:]
// Type encoding: v24@0:8q16
// Implementation: 0x10562e71c

// -[SCUploadStepMetricsTracker logResumeStartByteFromGcs:]
// Type encoding: v24@0:8q16
// Implementation: 0x10562e7e0

// -[SCUploadStepMetricsTracker _logUploadResultWithSuccess:contentReference:errorResponse:error:]
// Type encoding: v44@0:8B16@20@28@36
// Implementation: 0x10562e864

// -[SCUploadStepMetricsTracker _logUploadLatencyWithSuccess:]
// Type encoding: v20@0:8B16
// Implementation: 0x10562eba8

// -[SCUploadStepMetricsTracker _logUploadSize:withSuccess:]
// Type encoding: v28@0:8Q16B24
// Implementation: 0x10562ed40

// -[SCUploadStepMetricsTracker _logCUPSBlizzardMetricsWithSuccess:contentReference:errorResponse:error:]
// Type encoding: v44@0:8B16@20@28@36
// Implementation: 0x10562ef28

// -[SCUploadStepMetricsTracker logGCSRUOperationLatency:type:]
// Type encoding: v32@0:8d16Q24
// Implementation: 0x10562f63c

// -[SCUploadStepMetricsTracker didResume]
// Type encoding: B16@0:8
// Implementation: 0x10562f730

// -[SCUploadStepMetricsTracker setDidResume:]
// Type encoding: v20@0:8B16
// Implementation: 0x10562f738

// -[SCUploadStepMetricsTracker uploadUrlType]
// Type encoding: i16@0:8
// Implementation: 0x10562f740

// -[SCUploadStepMetricsTracker setUploadUrlType:]
// Type encoding: v20@0:8i16
// Implementation: 0x10562f748

// -[SCUploadStepMetricsTracker locationAttribution]
// Type encoding: @16@0:8
// Implementation: 0x10562f750

// -[SCUploadStepMetricsTracker setLocationAttribution:]
// Type encoding: v24@0:8@16
// Implementation: 0x10562f758

// -[SCUploadStepMetricsTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10562f760

// +[SCUploadStepMetricsTracker logGCSRUStateMetricsWithValidStateCount:expiredStateCount:grapheneRegistryLazy:]
// Type encoding: v40@0:8q16q24@32
// Implementation: 0x10562f49c

@end
