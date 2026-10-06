// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCReceiveFlowMetricsEmitter
// Superclass: NSObject
// Address: 0x112a42738

@interface SCReceiveFlowMetricsEmitter

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCReceiveFlowMetricsEmitter initWithLogger:loadMessageGraphene:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1054fe094

// -[SCReceiveFlowMetricsEmitter logLoadMessage:metadata:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1054fe128

// -[SCReceiveFlowMetricsEmitter _logLoadMessageResultWithMediaType:messageType:mode:mediaSizeBytes:loadMessageStatus:triggerStep:]
// Type encoding: v64@0:8@16@24q32Q40@48@56
// Implementation: 0x1054fe3f8

// -[SCReceiveFlowMetricsEmitter _logLoadMessageFailureWithMediaType:messageType:mode:loadMessageStatus:failedStep:]
// Type encoding: v56@0:8@16@24q32@40@48
// Implementation: 0x1054fe66c

// -[SCReceiveFlowMetricsEmitter _logLoadMessageConnectivityWithMediaType:messageType:mode:loadMessageStatus:failedStep:]
// Type encoding: v56@0:8@16@24q32@40@48
// Implementation: 0x1054fe830

// -[SCReceiveFlowMetricsEmitter _logLoadMessageFatalWithMediaType:messageType:mode:loadMessageStatus:failedStep:]
// Type encoding: v56@0:8@16@24q32@40@48
// Implementation: 0x1054fe9f4

// -[SCReceiveFlowMetricsEmitter _logLoadMessagePerceivedLatencyWithMediaType:messageType:triggerType:loadMessageStatus:latencyInMillis:mode:]
// Type encoding: v64@0:8@16@24@32@40d48q56
// Implementation: 0x1054febb8

// -[SCReceiveFlowMetricsEmitter _logLoadMessageStepLatencyWithMediaType:messageType:triggerType:stepToLatencyString:mode:]
// Type encoding: v56@0:8@16@24@32@40q48
// Implementation: 0x1054fedb0

// -[SCReceiveFlowMetricsEmitter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1054ff0b0

@end
