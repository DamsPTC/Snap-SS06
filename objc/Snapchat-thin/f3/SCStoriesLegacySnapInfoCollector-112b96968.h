// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesLegacySnapInfoCollector
// Superclass: NSObject
// Address: 0x112b96968

@interface SCStoriesLegacySnapInfoCollector

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: currentSnapEditTime; attributes: Td,R,N,V_currentSnapEditTime
// Property: numberOfRetakeBeforeSend; attributes: TQ,R,N,V_numberOfRetakeBeforeSend
// Property: hasCurrentSnapSavedToMemories; attributes: TB,R,N,V_hasCurrentSnapSavedToMemories
// Property: isCurrentSnapLoadedFromCameraRoll; attributes: TB,R,N,V_isCurrentSnapLoadedFromCameraRoll
// Property: currentSnapZoomLevels; attributes: T@"NSArray",R,C,N,V_currentSnapZoomLevels

// -[SCStoriesLegacySnapInfoCollector init]
// Type encoding: @16@0:8
// Implementation: 0x1080663bc

// -[SCStoriesLegacySnapInfoCollector currentSnapEditTime]
// Type encoding: d16@0:8
// Implementation: 0x10806646c

// -[SCStoriesLegacySnapInfoCollector didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1080664c0

// -[SCStoriesLegacySnapInfoCollector currentSnapZoomLevels]
// Type encoding: @16@0:8
// Implementation: 0x1080668a0

// -[SCStoriesLegacySnapInfoCollector _sampleVideoZoomLevelWithZoomLevelProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080668fc

// -[SCStoriesLegacySnapInfoCollector numberOfRetakeBeforeSend]
// Type encoding: Q16@0:8
// Implementation: 0x1080669a0

// -[SCStoriesLegacySnapInfoCollector hasCurrentSnapSavedToMemories]
// Type encoding: B16@0:8
// Implementation: 0x1080669a8

// -[SCStoriesLegacySnapInfoCollector isCurrentSnapLoadedFromCameraRoll]
// Type encoding: B16@0:8
// Implementation: 0x1080669b0

// -[SCStoriesLegacySnapInfoCollector .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1080669b8

@end
