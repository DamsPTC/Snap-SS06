// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNGrpcParamsBuilder
// Superclass: NSObject
// Address: 0x1000c34f8

@interface SCNGrpcParamsBuilder

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNGrpcParamsBuilder initPrivate]
// Type encoding: @16@0:8
// Implementation: 0x100082010

// -[SCNGrpcParamsBuilder build]
// Type encoding: @16@0:8
// Implementation: 0x1000820b4

// -[SCNGrpcParamsBuilder setEndpointAddress:]
// Type encoding: @24@0:8@16
// Implementation: 0x100082168

// -[SCNGrpcParamsBuilder setRpcTimeoutInMs:]
// Type encoding: @24@0:8q16
// Implementation: 0x1000821a0

// -[SCNGrpcParamsBuilder setChannelType:]
// Type encoding: @24@0:8q16
// Implementation: 0x1000821e4

// -[SCNGrpcParamsBuilder setUserAgentPrefix:]
// Type encoding: @24@0:8@16
// Implementation: 0x1000821ec

// -[SCNGrpcParamsBuilder setTimeAliveInBackgroundMs:]
// Type encoding: @24@0:8q16
// Implementation: 0x100082224

// -[SCNGrpcParamsBuilder setRequestPathPrefix:]
// Type encoding: @24@0:8@16
// Implementation: 0x10008222c

// -[SCNGrpcParamsBuilder setCronetStreamEnginePtr:]
// Type encoding: @24@0:8@16
// Implementation: 0x100082264

// -[SCNGrpcParamsBuilder setClientAttestation:]
// Type encoding: @20@0:8B16
// Implementation: 0x10008229c

// -[SCNGrpcParamsBuilder setServiceClientSBConfigKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x1000822a4

// -[SCNGrpcParamsBuilder setShouldUseRetryFallback:]
// Type encoding: @20@0:8B16
// Implementation: 0x1000822dc

// -[SCNGrpcParamsBuilder setMaxInboundMessageSize:]
// Type encoding: @24@0:8@16
// Implementation: 0x1000822e4

// -[SCNGrpcParamsBuilder .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10008231c

// +[SCNGrpcParamsBuilder builder]
// Type encoding: @16@0:8
// Implementation: 0x100081ff8

@end
