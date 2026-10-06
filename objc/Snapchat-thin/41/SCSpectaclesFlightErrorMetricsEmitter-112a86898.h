// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesFlightErrorMetricsEmitter
// Superclass: NSObject
// Address: 0x112a86898

@interface SCSpectaclesFlightErrorMetricsEmitter

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesFlightErrorMetricsEmitter initWithFlightManager:logger:performer:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105a6f1cc

// -[SCSpectaclesFlightErrorMetricsEmitter responseMonitorState]
// Type encoding: q16@0:8
// Implementation: 0x105a6f2c0

// -[SCSpectaclesFlightErrorMetricsEmitter handleResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a6f2c8

// -[SCSpectaclesFlightErrorMetricsEmitter _handleFlightInfoResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a6f314

// -[SCSpectaclesFlightErrorMetricsEmitter _pushFlightRemainInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a6f494

// -[SCSpectaclesFlightErrorMetricsEmitter _pushFlightStateErrors:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a6f4d8

// -[SCSpectaclesFlightErrorMetricsEmitter _setupFlightStatusObservable]
// Type encoding: v16@0:8
// Implementation: 0x105a6f520

// -[SCSpectaclesFlightErrorMetricsEmitter _logFlightSessionCountWithFlightStatus:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105a6f6ec

// -[SCSpectaclesFlightErrorMetricsEmitter _logFlightSessionError]
// Type encoding: v16@0:8
// Implementation: 0x105a6f76c

// -[SCSpectaclesFlightErrorMetricsEmitter _logFlightErrorMetrics:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a6f7dc

// -[SCSpectaclesFlightErrorMetricsEmitter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a6fa54

@end
