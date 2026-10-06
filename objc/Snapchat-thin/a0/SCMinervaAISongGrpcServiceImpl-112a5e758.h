// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMinervaAISongGrpcServiceImpl
// Superclass: NSObject
// Address: 0x112a5e758

@interface SCMinervaAISongGrpcServiceImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMinervaAISongGrpcServiceImpl initWithMinervaService:minervaProtoModelsConverter:grpcCallOptionsBuilder:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x100abf260

// -[SCMinervaAISongGrpcServiceImpl generateSongForPrompt:genre:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105733a1c

// -[SCMinervaAISongGrpcServiceImpl _getErrorFromStatusResponse:]
// Type encoding: @24@0:8@16
// Implementation: 0x105733e6c

// -[SCMinervaAISongGrpcServiceImpl _songServiceErrorFromCameosError:]
// Type encoding: @24@0:8@16
// Implementation: 0x105733f34

// -[SCMinervaAISongGrpcServiceImpl _songServiceErrorWithCode:message:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x105733fc4

// -[SCMinervaAISongGrpcServiceImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1057340dc

@end
