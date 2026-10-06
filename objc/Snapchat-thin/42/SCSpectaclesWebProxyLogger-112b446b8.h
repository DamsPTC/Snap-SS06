// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesWebProxyLogger
// Superclass: NSObject
// Address: 0x112b446b8

@interface SCSpectaclesWebProxyLogger

// Property: sessionId; attributes: T@"NSString",R,N,V_sessionId
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesWebProxyLogger initWithBlizzardLogger:]
// Type encoding: @24@0:8@16
// Implementation: 0x106ecc5c4

// -[SCSpectaclesWebProxyLogger generateSessionId]
// Type encoding: @16@0:8
// Implementation: 0x106ecc648

// -[SCSpectaclesWebProxyLogger startMonitoringUsageForSessionId:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106ecc690

// -[SCSpectaclesWebProxyLogger stopMonitoringUsage]
// Type encoding: v16@0:8
// Implementation: 0x106ecc7c4

// -[SCSpectaclesWebProxyLogger _sampleWithBlock:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ecc7f0

// -[SCSpectaclesWebProxyLogger logProxyStart:success:failureReason:]
// Type encoding: v36@0:8@16B24Q28
// Implementation: 0x106ecc8a0

// -[SCSpectaclesWebProxyLogger logProxyStopped:withError:failureReason:]
// Type encoding: v36@0:8@16B24Q28
// Implementation: 0x106ecc938

// -[SCSpectaclesWebProxyLogger logProxyBandwidthUsed:received:sent:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x106ecc9d0

// -[SCSpectaclesWebProxyLogger sessionId]
// Type encoding: @16@0:8
// Implementation: 0x106ecca5c

// -[SCSpectaclesWebProxyLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ecca64

@end
