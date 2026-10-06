// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdInFlightResult
// Superclass: NSObject
// Address: 0x112a60c10

@interface SCAdInFlightResult

// Property: isSuccess; attributes: TB,R,N,V_isSuccess
// Property: responses; attributes: T@"NSArray",R,N,V_responses
// Property: errorResponse; attributes: T@"SCAdErrorResponse",R,N,V_errorResponse

// -[SCAdInFlightResult isSuccess]
// Type encoding: B16@0:8
// Implementation: 0x10574440c

// -[SCAdInFlightResult responses]
// Type encoding: @16@0:8
// Implementation: 0x105744414

// -[SCAdInFlightResult errorResponse]
// Type encoding: @16@0:8
// Implementation: 0x10574441c

// -[SCAdInFlightResult .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105744424

// +[SCAdInFlightResult successWithResponses:]
// Type encoding: @24@0:8@16
// Implementation: 0x105744378

// +[SCAdInFlightResult failureWithErrorResponse:]
// Type encoding: @24@0:8@16
// Implementation: 0x1057443c4

@end
