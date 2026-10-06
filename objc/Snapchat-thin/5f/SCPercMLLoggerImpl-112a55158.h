// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPercMLLoggerImpl
// Superclass: NSObject
// Address: 0x112a55158

@interface SCPercMLLoggerImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPercMLLoggerImpl initWithBlizzardLogger:grapheneRegistry:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10568f830

// -[SCPercMLLoggerImpl logModelInferenceLatencyWithModelKey:modelId:taskType:latency:]
// Type encoding: v48@0:8@16@24q32d40
// Implementation: 0x10568f9f4

// -[SCPercMLLoggerImpl loggingTimerForModelInferenceLatencyWithModelKey:modelId:taskType:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x10568fbdc

// -[SCPercMLLoggerImpl logModelInferenceStatusWithModelKey:modelId:taskType:status:]
// Type encoding: v48@0:8@16@24q32q40
// Implementation: 0x10568fd50

// -[SCPercMLLoggerImpl logModelInferenceStatusWithModelKey:modelId:taskType:status:reason:]
// Type encoding: v56@0:8@16@24q32q40@48
// Implementation: 0x10568fd68

// -[SCPercMLLoggerImpl logModelWarmupLatencyWithModelKey:modelId:latency:]
// Type encoding: v40@0:8@16@24d32
// Implementation: 0x10568ff10

// -[SCPercMLLoggerImpl loggingTimerForModelWarmupLatencyWithModelKey:modelId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10568ffec

// -[SCPercMLLoggerImpl logModelFetchLatencyWithModelKey:modelId:latency:]
// Type encoding: v40@0:8@16@24d32
// Implementation: 0x10569014c

// -[SCPercMLLoggerImpl loggingTimerForModelFetchLatencyWithModelKey:modelId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10569023c

// -[SCPercMLLoggerImpl logModelFetchStatusWithModelKey:modelId:status:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x10569039c

// -[SCPercMLLoggerImpl logModelFetchStatusWithModelKey:modelId:status:reason:]
// Type encoding: v48@0:8@16@24q32@40
// Implementation: 0x1056903a8

// -[SCPercMLLoggerImpl logModelProvideStatusWithModelKey:modelId:status:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x1056904fc

// -[SCPercMLLoggerImpl _isValidMetricValue:]
// Type encoding: B24@0:8@16
// Implementation: 0x105690624

// -[SCPercMLLoggerImpl _isValidReason:]
// Type encoding: B24@0:8@16
// Implementation: 0x105690680

// -[SCPercMLLoggerImpl _isLoggableBlizzardTaskType:]
// Type encoding: B24@0:8q16
// Implementation: 0x1056906f0

// -[SCPercMLLoggerImpl _taskTypeToString:]
// Type encoding: @24@0:8q16
// Implementation: 0x1056906fc

// -[SCPercMLLoggerImpl _statusToString:]
// Type encoding: @24@0:8q16
// Implementation: 0x105690724

// -[SCPercMLLoggerImpl _statusToString:withReason:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x105690750

// -[SCPercMLLoggerImpl _timeIntervalToMs:]
// Type encoding: q24@0:8d16
// Implementation: 0x1056907f8

// -[SCPercMLLoggerImpl _createPercMLRegisteredGrapheneMetric]
// Type encoding: @16@0:8
// Implementation: 0x10569080c

// -[SCPercMLLoggerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105690854

@end
