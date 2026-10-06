// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCComposerNetworkingBridgeGRPCServiceFactoryImpl
// Superclass: NSObject
// Address: 0x112a31b18

@interface SCComposerNetworkingBridgeGRPCServiceFactoryImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCComposerNetworkingBridgeGRPCServiceFactoryImpl initWithGRPCClientFactory:]
// Type encoding: @24@0:8@16
// Implementation: 0x1006f7ec4

// -[SCComposerNetworkingBridgeGRPCServiceFactoryImpl createServiceWithServiceName:endpoint:requestPathPrefix:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1053cc8f8

// -[SCComposerNetworkingBridgeGRPCServiceFactoryImpl createServiceWithServiceName:endpoint:requestPathPrefix:userAgentPrefix:requiresAttestation:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1053cc904

// -[SCComposerNetworkingBridgeGRPCServiceFactoryImpl makeComposerGRPCServiceWith:grpcParamsBuilder:queue:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1006f7f38

// -[SCComposerNetworkingBridgeGRPCServiceFactoryImpl pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x1053ccaec

// -[SCComposerNetworkingBridgeGRPCServiceFactoryImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1053ccaf8

@end
