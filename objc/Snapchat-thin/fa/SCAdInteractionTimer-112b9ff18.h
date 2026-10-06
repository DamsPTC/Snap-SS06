// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdInteractionTimer
// Superclass: NSObject
// Address: 0x112b9ff18

@interface SCAdInteractionTimer

// Property: mediaDurationMillis; attributes: Td,N,V_mediaDurationMillis
// Property: maxDurationMillis; attributes: Td,N,V_maxDurationMillis
// Property: totalDurationMillis; attributes: Td,N,V_totalDurationMillis
// Property: isActive; attributes: TB,N,V_isActive
// Property: startTimeStamp; attributes: Td,N,V_startTimeStamp
// Property: accumulatedDurationMillis; attributes: Td,N,V_accumulatedDurationMillis

// -[SCAdInteractionTimer initWithMediaDurationMillis:]
// Type encoding: @24@0:8d16
// Implementation: 0x10849afa0

// -[SCAdInteractionTimer initWithMediaDurationMillis:accumulatedDurationMillis:]
// Type encoding: @32@0:8d16d24
// Implementation: 0x10849b000

// -[SCAdInteractionTimer start]
// Type encoding: v16@0:8
// Implementation: 0x10849b028

// -[SCAdInteractionTimer stop]
// Type encoding: v16@0:8
// Implementation: 0x10849b05c

// -[SCAdInteractionTimer reset]
// Type encoding: v16@0:8
// Implementation: 0x10849b0ac

// -[SCAdInteractionTimer getAccurateAccumulatedDurationMillis]
// Type encoding: d16@0:8
// Implementation: 0x10849b0c0

// -[SCAdInteractionTimer getTotalMillis]
// Type encoding: d16@0:8
// Implementation: 0x10849b108

// -[SCAdInteractionTimer getMaxDurationMillis]
// Type encoding: d16@0:8
// Implementation: 0x10849b110

// -[SCAdInteractionTimer getUncappedTotalDurationMillis]
// Type encoding: d16@0:8
// Implementation: 0x10849b118

// -[SCAdInteractionTimer getUncappedMaxDurationMillis]
// Type encoding: d16@0:8
// Implementation: 0x10849b120

// -[SCAdInteractionTimer getCurrentDurationMillis]
// Type encoding: d16@0:8
// Implementation: 0x10849b128

// -[SCAdInteractionTimer _getTotalDurationMillisWithCapAtDuration:]
// Type encoding: d20@0:8B16
// Implementation: 0x10849b160

// -[SCAdInteractionTimer _getMaxDurationMillisWithCapAtDuration:]
// Type encoding: d20@0:8B16
// Implementation: 0x10849b1bc

// -[SCAdInteractionTimer setMediaDurationMillis:]
// Type encoding: v24@0:8d16
// Implementation: 0x10849b20c

// -[SCAdInteractionTimer _updateIntervalMillis:]
// Type encoding: v24@0:8d16
// Implementation: 0x10849b214

// -[SCAdInteractionTimer _updateTotalMillis:]
// Type encoding: v24@0:8d16
// Implementation: 0x10849b23c

// -[SCAdInteractionTimer getTimeStamp]
// Type encoding: d16@0:8
// Implementation: 0x10849b250

// -[SCAdInteractionTimer isActive]
// Type encoding: B16@0:8
// Implementation: 0x10849b2ac

// -[SCAdInteractionTimer setIsActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x10849b2b4

// -[SCAdInteractionTimer mediaDurationMillis]
// Type encoding: d16@0:8
// Implementation: 0x10849b2bc

// -[SCAdInteractionTimer maxDurationMillis]
// Type encoding: d16@0:8
// Implementation: 0x10849b2c4

// -[SCAdInteractionTimer setMaxDurationMillis:]
// Type encoding: v24@0:8d16
// Implementation: 0x10849b2cc

// -[SCAdInteractionTimer totalDurationMillis]
// Type encoding: d16@0:8
// Implementation: 0x10849b2d4

// -[SCAdInteractionTimer setTotalDurationMillis:]
// Type encoding: v24@0:8d16
// Implementation: 0x10849b2dc

// -[SCAdInteractionTimer startTimeStamp]
// Type encoding: d16@0:8
// Implementation: 0x10849b2e4

// -[SCAdInteractionTimer setStartTimeStamp:]
// Type encoding: v24@0:8d16
// Implementation: 0x10849b2ec

// -[SCAdInteractionTimer accumulatedDurationMillis]
// Type encoding: d16@0:8
// Implementation: 0x10849b2f4

// -[SCAdInteractionTimer setAccumulatedDurationMillis:]
// Type encoding: v24@0:8d16
// Implementation: 0x10849b2fc

@end
