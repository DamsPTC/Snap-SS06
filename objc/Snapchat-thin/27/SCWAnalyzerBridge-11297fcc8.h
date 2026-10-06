// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCWAnalyzerBridge
// Superclass: NSObject
// Address: 0x11297fcc8

@interface SCWAnalyzerBridge

// Property: isEnabled; attributes: TB,N,R
// Property: isAnalysisAvailable; attributes: TB,N,R

// -[SCWAnalyzerBridge markRevealedForMediaID:]
// Type encoding: v24@0:8@16
// Implementation: 0x102c1bf74

// -[SCWAnalyzerBridge isEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10402f334

// -[SCWAnalyzerBridge isAnalysisAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10402f344

// -[SCWAnalyzerBridge warmUp]
// Type encoding: v16@0:8
// Implementation: 0x10402f57c

// -[SCWAnalyzerBridge requiresModalRevealForMediaID:]
// Type encoding: B24@0:8@16
// Implementation: 0x10402fc48

// -[SCWAnalyzerBridge initWithConfigProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x10402fec0

// -[SCWAnalyzerBridge initWithConfigProvider:tweakOverride:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10402fec8

// -[SCWAnalyzerBridge appDidBecomeActive]
// Type encoding: v16@0:8
// Implementation: 0x104030610

// -[SCWAnalyzerBridge analyzeImage:mediaID:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x104030b44

// -[SCWAnalyzerBridge analyzeVideoAtURL:mediaID:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10403102c

// -[SCWAnalyzerBridge init]
// Type encoding: @16@0:8
// Implementation: 0x104031680

// -[SCWAnalyzerBridge .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1040316e0

// +[SCWAnalyzerBridge cofKey]
// Type encoding: @16@0:8
// Implementation: 0x10402eef8

// +[SCWAnalyzerBridge descriptiveModalCofKey]
// Type encoding: @16@0:8
// Implementation: 0x10402ef24

// +[SCWAnalyzerBridge isCallsiteGateOpenWithConfigProvider:]
// Type encoding: B24@0:8@16
// Implementation: 0x10402f0fc

// +[SCWAnalyzerBridge isLastKnownAppleAnalysisEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10402f3f8

// +[SCWAnalyzerBridge markRevealedMediaID:]
// Type encoding: v24@0:8@16
// Implementation: 0x10402fa88

@end
