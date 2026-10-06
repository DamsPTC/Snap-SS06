// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaVideoStallTracker
// Superclass: NSObject
// Address: 0x112b83868

@interface SCOperaVideoStallTracker

// Property: hasExperiencedMidPlaybackStalling; attributes: TB,R,N
// Property: hasExperiencedStalling; attributes: TB,R,N
// Property: isStalling; attributes: TB,R,N
// Property: currentViewParameters; attributes: T@"NSDictionary",R,N

// -[SCOperaVideoStallTracker initWithPlaybackProgressAtTime:initiallyStalled:timeProvider:bandwidthEstimator:videoIdentifier:operaConfigProvider:]
// Type encoding: @60@0:8d16B24@28@36@44@52
// Implementation: 0x107de92b0

// -[SCOperaVideoStallTracker hasExperiencedStalling]
// Type encoding: B16@0:8
// Implementation: 0x107de9468

// -[SCOperaVideoStallTracker hasExperiencedMidPlaybackStalling]
// Type encoding: B16@0:8
// Implementation: 0x107de9488

// -[SCOperaVideoStallTracker isStalling]
// Type encoding: B16@0:8
// Implementation: 0x107de9590

// -[SCOperaVideoStallTracker currentViewParameters]
// Type encoding: @16@0:8
// Implementation: 0x107de95d0

// -[SCOperaVideoStallTracker didStallAtTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x107de99fc

// -[SCOperaVideoStallTracker didStartManualSeekAtTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x107de9a98

// -[SCOperaVideoStallTracker didStartLoopSeek]
// Type encoding: v16@0:8
// Implementation: 0x107de9aa4

// -[SCOperaVideoStallTracker didStartPlaying]
// Type encoding: v16@0:8
// Implementation: 0x107de9ab0

// -[SCOperaVideoStallTracker didExit]
// Type encoding: v16@0:8
// Implementation: 0x107de9af4

// -[SCOperaVideoStallTracker didReachEndOfPlayback]
// Type encoding: v16@0:8
// Implementation: 0x107de9b48

// -[SCOperaVideoStallTracker didFinishPlayback]
// Type encoding: v16@0:8
// Implementation: 0x107de9b54

// -[SCOperaVideoStallTracker _didResumeFromStall]
// Type encoding: v16@0:8
// Implementation: 0x107de9b88

// -[SCOperaVideoStallTracker _removeTooShortManualSeekStallIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x107de9be4

// -[SCOperaVideoStallTracker _initialStall]
// Type encoding: @16@0:8
// Implementation: 0x107de9c4c

// -[SCOperaVideoStallTracker _totalStallDuration]
// Type encoding: d16@0:8
// Implementation: 0x107de9cd0

// -[SCOperaVideoStallTracker _longestMidPlaybackStallDuration]
// Type encoding: d16@0:8
// Implementation: 0x107de9ddc

// -[SCOperaVideoStallTracker _longestMidPlaybackStall]
// Type encoding: @16@0:8
// Implementation: 0x107de9f10

// -[SCOperaVideoStallTracker _tryAppendingActiveStallAtTime:type:]
// Type encoding: v32@0:8d16Q24
// Implementation: 0x107dea064

// -[SCOperaVideoStallTracker _beginStallTrace:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107dea128

// -[SCOperaVideoStallTracker _finishStallTraceIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x107dea1cc

// -[SCOperaVideoStallTracker _tryAppendingActiveStall:]
// Type encoding: B24@0:8@16
// Implementation: 0x107dea284

// -[SCOperaVideoStallTracker _stallTypeWithTime:]
// Type encoding: Q24@0:8d16
// Implementation: 0x107dea3ac

// -[SCOperaVideoStallTracker _scaStalls]
// Type encoding: @16@0:8
// Implementation: 0x107dea46c

// -[SCOperaVideoStallTracker _scaNetworkSnapshots]
// Type encoding: @16@0:8
// Implementation: 0x107dea724

// -[SCOperaVideoStallTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107dea9a0

@end
