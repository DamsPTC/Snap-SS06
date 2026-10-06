// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAppInstallConversionValueJobProcessor
// Superclass: NSObject
// Address: 0x112b21a78

@interface SCAppInstallConversionValueJobProcessor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAppInstallConversionValueJobProcessor initWithPerformer:circumstanceEngine:grapheneMetric:grapheneFlusher:uaSKadNetworkService:requireAuth:systemLogger:firstInstallDate:enableSkan4:]
// Type encoding: @80@0:8@16@24@32@40@48B56@60@68B76
// Implementation: 0x106bf24c8

// -[SCAppInstallConversionValueJobProcessor processJobWithJobConfig:input:context:onComplete:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x106bf26d0

// -[SCAppInstallConversionValueJobProcessor deleteJobWithJobConfig:jobData:jobDeletionReason:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x106bf274c

// -[SCAppInstallConversionValueJobProcessor _processJobWithEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106bf2760

// -[SCAppInstallConversionValueJobProcessor _handleUpdateConversionValue]
// Type encoding: v16@0:8
// Implementation: 0x106bf2798

// -[SCAppInstallConversionValueJobProcessor _handleConversionValueUpdateWithResponse:error:updateStartTimestamp:]
// Type encoding: v40@0:8@16@24d32
// Implementation: 0x106bf29d8

// -[SCAppInstallConversionValueJobProcessor _updateConversionValueWithSKAN2Response:error:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106bf2ac8

// -[SCAppInstallConversionValueJobProcessor _updateConversionValueWithSKAN4Response:error:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106bf2bd8

// -[SCAppInstallConversionValueJobProcessor _convertCoarseValueToSKAdNetworkType:]
// Type encoding: @24@0:8q16
// Implementation: 0x106bf2da8

// -[SCAppInstallConversionValueJobProcessor _logJobExecutionGrapheneMetrics]
// Type encoding: v16@0:8
// Implementation: 0x106bf2de4

// -[SCAppInstallConversionValueJobProcessor _logJobEnabledGrapheneMetricsWithEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106bf2e2c

// -[SCAppInstallConversionValueJobProcessor _logGrapheneMetricsCallSkan2ApiCountWithConversionValue:]
// Type encoding: v24@0:8q16
// Implementation: 0x106bf2e50

// -[SCAppInstallConversionValueJobProcessor _logGrapheneMetricsCallSkan4ApiCountWithSuccess:conversionValue:coarseValue:]
// Type encoding: v36@0:8B16q20q28
// Implementation: 0x106bf2eac

// -[SCAppInstallConversionValueJobProcessor _logGrapheneMetricsWithDidUpdate:totalLatency:fetchLatency:conversionValue:coarseValue:error:]
// Type encoding: v60@0:8B16d20d28q36q44@52
// Implementation: 0x106bf2f50

// -[SCAppInstallConversionValueJobProcessor _logBlizzardGrowthSKAdNetworkAndSkipFutureJobExecutionWithFinalConversionValue:]
// Type encoding: v24@0:8q16
// Implementation: 0x106bf3118

// -[SCAppInstallConversionValueJobProcessor _logBlizzardGrowthSKAdNetworkAndSkipFutureJobExecutionWithFinalConversionValue:finalCoarseValue:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x106bf3188

// -[SCAppInstallConversionValueJobProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106bf3208

@end
