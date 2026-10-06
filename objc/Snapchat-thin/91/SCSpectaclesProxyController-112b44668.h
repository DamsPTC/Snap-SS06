// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesProxyController
// Superclass: NSObject
// Address: 0x112b44668

@interface SCSpectaclesProxyController

// Property: totalBytesWritten; attributes: TQ,R,N
// Property: totalBytesRead; attributes: TQ,R,N
// Property: connectionEstablished; attributes: TB,N,VconnectionEstablished
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesProxyController initWithBlizzardLogger:backgroundTaskWrapper:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106ecbd2c

// -[SCSpectaclesProxyController dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106ecbe40

// -[SCSpectaclesProxyController totalBytesRead]
// Type encoding: Q16@0:8
// Implementation: 0x106ecbe84

// -[SCSpectaclesProxyController totalBytesWritten]
// Type encoding: Q16@0:8
// Implementation: 0x106ecbe8c

// -[SCSpectaclesProxyController configureWithClient:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ecbe94

// -[SCSpectaclesProxyController _startBackgroundTask]
// Type encoding: v16@0:8
// Implementation: 0x106ecbed8

// -[SCSpectaclesProxyController _endBackgroundTask]
// Type encoding: v16@0:8
// Implementation: 0x106ecbf38

// -[SCSpectaclesProxyController _setupBackgroundTaskWithTimeoutInterval]
// Type encoding: v16@0:8
// Implementation: 0x106ecbfb4

// -[SCSpectaclesProxyController socksProxy:clientDidConnect:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106ecc130

// -[SCSpectaclesProxyController socksProxy:clientDidDisconnect:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106ecc188

// -[SCSpectaclesProxyController socksProxy:shouldAcceptConnectionForUsername:password:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x106ecc18c

// -[SCSpectaclesProxyController startProxyOnPort:error:]
// Type encoding: v28@0:8S16^@20
// Implementation: 0x106ecc214

// -[SCSpectaclesProxyController stopProxy]
// Type encoding: v16@0:8
// Implementation: 0x106ecc398

// -[SCSpectaclesProxyController startProxyForClient:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ecc408

// -[SCSpectaclesProxyController stopProxyForClient:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ecc4dc

// -[SCSpectaclesProxyController connectionEstablished]
// Type encoding: B16@0:8
// Implementation: 0x106ecc558

// -[SCSpectaclesProxyController setConnectionEstablished:]
// Type encoding: v20@0:8B16
// Implementation: 0x106ecc560

// -[SCSpectaclesProxyController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ecc568

@end
