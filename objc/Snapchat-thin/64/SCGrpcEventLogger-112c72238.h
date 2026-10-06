// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGrpcEventLogger
// Superclass: NSObject
// Address: 0x112c72238

@interface SCGrpcEventLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGrpcEventLogger initWithSystemBlizzardLogger:batteryLogger:connectivityMonitor:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1009d4ee8

// -[SCGrpcEventLogger enableNativeClientLogging]
// Type encoding: v16@0:8
// Implementation: 0x1009d4fbc

// -[SCGrpcEventLogger logUnaryBlizzard:]
// Type encoding: v24@0:8@16
// Implementation: 0x100bf6f68

// -[SCGrpcEventLogger logStreamBlizzard:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b275378

// -[SCGrpcEventLogger logNetworkEventEnabled]
// Type encoding: B16@0:8
// Implementation: 0x100aba3ac

// -[SCGrpcEventLogger logRequestStarted:serviceMethodName:feature:streaming:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x100aca3dc

// -[SCGrpcEventLogger logRequestFinished:serviceMethodName:feature:streaming:succeeded:]
// Type encoding: v48@0:8@16@24@32B40B44
// Implementation: 0x100bf5e3c

// -[SCGrpcEventLogger logMessageReceived:]
// Type encoding: v20@0:8B16
// Implementation: 0x100bf5d1c

// -[SCGrpcEventLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b275820

// +[SCGrpcEventLogger channelTypeToString:]
// Type encoding: @24@0:8q16
// Implementation: 0x10b2757e4

// +[SCGrpcEventLogger _convertArgosType:]
// Type encoding: q24@0:8q16
// Implementation: 0x10b275810

@end
