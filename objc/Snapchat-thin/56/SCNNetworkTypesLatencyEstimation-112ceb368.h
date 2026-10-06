// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNNetworkTypesLatencyEstimation
// Superclass: NSObject
// Address: 0x112ceb368

@interface SCNNetworkTypesLatencyEstimation

// Property: formulaVersion; attributes: Tq,R,N,V_formulaVersion
// Property: latencyPrediction; attributes: Tq,R,N,V_latencyPrediction
// Property: rtt; attributes: Tq,R,N,V_rtt
// Property: throughput; attributes: Tq,R,N,V_throughput
// Property: throughputConfidenceScore; attributes: Td,R,N,V_throughputConfidenceScore
// Property: estimatedContentLength; attributes: Tq,R,N,V_estimatedContentLength

// -[SCNNetworkTypesLatencyEstimation initWithFormulaVersion:latencyPrediction:rtt:throughput:throughputConfidenceScore:estimatedContentLength:]
// Type encoding: @64@0:8q16q24q32q40d48q56
// Implementation: 0x10b88c8d8

// -[SCNNetworkTypesLatencyEstimation formulaVersion]
// Type encoding: q16@0:8
// Implementation: 0x10b88c958

// -[SCNNetworkTypesLatencyEstimation latencyPrediction]
// Type encoding: q16@0:8
// Implementation: 0x10b88c960

// -[SCNNetworkTypesLatencyEstimation rtt]
// Type encoding: q16@0:8
// Implementation: 0x10b88c968

// -[SCNNetworkTypesLatencyEstimation throughput]
// Type encoding: q16@0:8
// Implementation: 0x10b88c970

// -[SCNNetworkTypesLatencyEstimation throughputConfidenceScore]
// Type encoding: d16@0:8
// Implementation: 0x10b88c978

// -[SCNNetworkTypesLatencyEstimation estimatedContentLength]
// Type encoding: q16@0:8
// Implementation: 0x10b88c980

@end
