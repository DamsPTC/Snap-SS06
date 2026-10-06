// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCExtensionGrpcLogger
// Superclass: NSObject
// Address: 0xada0d0

@interface SCExtensionGrpcLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCExtensionGrpcLogger initWithBlizzardLogger:]
// Type encoding: @24@0:8@16
// Implementation: 0x58becc

// -[SCExtensionGrpcLogger logUnaryBlizzard:]
// Type encoding: v24@0:8@16
// Implementation: 0x58bf48

// -[SCExtensionGrpcLogger logStreamBlizzard:]
// Type encoding: v24@0:8@16
// Implementation: 0x58c510

// -[SCExtensionGrpcLogger logNetworkEventEnabled]
// Type encoding: B16@0:8
// Implementation: 0x58c90c

// -[SCExtensionGrpcLogger logRequestStarted:serviceMethodName:feature:streaming:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x58c914

// -[SCExtensionGrpcLogger logRequestFinished:serviceMethodName:feature:streaming:succeeded:]
// Type encoding: v48@0:8@16@24@32B40B44
// Implementation: 0x58c928

// -[SCExtensionGrpcLogger logMessageReceived:]
// Type encoding: v20@0:8B16
// Implementation: 0x58c92c

// -[SCExtensionGrpcLogger enableNativeClientLogging]
// Type encoding: v16@0:8
// Implementation: 0x58c930

// -[SCExtensionGrpcLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x58c940

// +[SCExtensionGrpcLogger _convertArgosType:]
// Type encoding: q24@0:8q16
// Implementation: 0x58c918

@end
