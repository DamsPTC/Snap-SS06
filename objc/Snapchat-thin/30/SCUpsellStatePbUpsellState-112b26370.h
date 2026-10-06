// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUpsellStatePbUpsellState
// Superclass: GPBMessage
// Address: 0x112b26370

@interface SCUpsellStatePbUpsellState

// Property: pageLoads; attributes: TI,D,N
// Property: impressionCount; attributes: TI,D,N
// Property: interactionCount; attributes: TI,D,N
// Property: lastImpressionFeature; attributes: Ti,D,N
// Property: lastImpressionMillis; attributes: TQ,D,N
// Property: lastImpressionPageLoad; attributes: TI,D,N
// Property: lastInteractionMillis; attributes: TQ,D,N
// Property: completedBumpsArray; attributes: T@"GPBUInt64Array",&,D,N
// Property: completedBumpsArray_Count; attributes: TQ,R,D,N
// Property: currentBump; attributes: T@"SCUpsellStatePbBumpState",&,D,N
// Property: hasCurrentBump; attributes: TB,D,N
// Property: currentPeriodFirstImpressionMillis; attributes: TQ,D,N
// Property: currentPeriodImpressions; attributes: TI,D,N
// Property: currentFeatureImpressions; attributes: TI,D,N
// Property: impressedFeaturesArray; attributes: T@"GPBEnumArray",&,D,N
// Property: impressedFeaturesArray_Count; attributes: TQ,R,D,N
// Property: currentPeriodInteractions; attributes: TI,D,N
// Property: currentPeriodFirstInteractionMillis; attributes: TQ,D,N

// -[SCUpsellStatePbUpsellState activeImpressionCount]
// Type encoding: I16@0:8
// Implementation: 0x106c44760

// -[SCUpsellStatePbUpsellState updateCurrentBump:nowMillis:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106c447dc

// -[SCUpsellStatePbUpsellState getImpressionConfig:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c44bbc

// -[SCUpsellStatePbUpsellState clear]
// Type encoding: v16@0:8
// Implementation: 0x106c44c8c

// -[SCUpsellStatePbUpsellState activeImpCount]
// Type encoding: I16@0:8
// Implementation: 0x106c43980

// +[SCUpsellStatePbUpsellState descriptor]
// Type encoding: @16@0:8
// Implementation: 0x106c58060

@end
