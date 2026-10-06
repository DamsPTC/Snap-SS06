// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBlizzardSessionIdProvider
// Superclass: NSObject
// Address: 0x112b12348

@interface SCBlizzardSessionIdProvider

// Property: experimentProvider; attributes: T@"SCBlizzardExperimentProvider",R,N,V_experimentProvider
// Property: isFirstStart; attributes: TB,N,V_isFirstStart
// Property: sessionId; attributes: T@"NSString",R,C,N,V_sessionId
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBlizzardSessionIdProvider initWithExperimentProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x100280940

// -[SCBlizzardSessionIdProvider generateNewSessionId]
// Type encoding: v16@0:8
// Implementation: 0x100c75b88

// -[SCBlizzardSessionIdProvider _random12BytesUuidString]
// Type encoding: @16@0:8
// Implementation: 0x1002809e0

// -[SCBlizzardSessionIdProvider sessionId]
// Type encoding: @16@0:8
// Implementation: 0x1002832ec

// -[SCBlizzardSessionIdProvider experimentProvider]
// Type encoding: @16@0:8
// Implementation: 0x106ae2a8c

// -[SCBlizzardSessionIdProvider isFirstStart]
// Type encoding: B16@0:8
// Implementation: 0x106ae2a94

// -[SCBlizzardSessionIdProvider setIsFirstStart:]
// Type encoding: v20@0:8B16
// Implementation: 0x106ae2a9c

// -[SCBlizzardSessionIdProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ae2aa4

// +[SCBlizzardSessionIdProvider initialize]
// Type encoding: v16@0:8
// Implementation: 0x1000d2b60

// +[SCBlizzardSessionIdProvider addSessionIdDidChangeHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1000d2f88

// +[SCBlizzardSessionIdProvider removeAllSessionIdDidChangeHandlers]
// Type encoding: v16@0:8
// Implementation: 0x106ae2a24

@end
