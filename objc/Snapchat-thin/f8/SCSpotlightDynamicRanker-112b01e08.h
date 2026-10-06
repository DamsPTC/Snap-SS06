// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpotlightDynamicRanker
// Superclass: NSObject
// Address: 0x112b01e08

@interface SCSpotlightDynamicRanker

// Property: boostValuesByDedupeFp; attributes: T@"SCObservable",R,N

// -[SCSpotlightDynamicRanker initWithStoriesConfigProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x10684d2fc

// -[SCSpotlightDynamicRanker updateTrackedStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x10684d4cc

// -[SCSpotlightDynamicRanker handleInteractionForDedupeFp:sentimentPolarity:confidence:]
// Type encoding: v32@0:8@16B24f28
// Implementation: 0x10684d568

// -[SCSpotlightDynamicRanker queryProximitiesFromStory:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10684d624

// -[SCSpotlightDynamicRanker boostValuesByDedupeFp]
// Type encoding: @16@0:8
// Implementation: 0x10684d728

// -[SCSpotlightDynamicRanker _updateTrackedStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x10684d750

// -[SCSpotlightDynamicRanker _handleInteractionForDedupeFp:sentimentPolarity:confidence:]
// Type encoding: v32@0:8@16B24f28
// Implementation: 0x10684da8c

// -[SCSpotlightDynamicRanker _queryProximitiesFromStory:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10684df3c

// -[SCSpotlightDynamicRanker _embeddingDictionaryForId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10684e1bc

// -[SCSpotlightDynamicRanker _untrackDedupeFps:]
// Type encoding: v24@0:8@16
// Implementation: 0x10684e258

// -[SCSpotlightDynamicRanker _calculateBoostDeltasForEmbedding:targetDedupeFp:embeddingsByDedupeFp:sentimentPolarity:confidence:]
// Type encoding: @48@0:8@16@24@32B40f44
// Implementation: 0x10684e408

// -[SCSpotlightDynamicRanker _orderedTokensByDistanceFrom:targetDedupeFp:scoringMethod:embeddingsByDedupeFp:]
// Type encoding: @48@0:8@16@24q32@40
// Implementation: 0x10684e410

// -[SCSpotlightDynamicRanker _polarityString:]
// Type encoding: @20@0:8f16
// Implementation: 0x10684e768

// -[SCSpotlightDynamicRanker _distanceSquaredBetween:vectorCount:embedding:]
// Type encoding: f40@0:8^f16q24@32
// Implementation: 0x10684e790

// -[SCSpotlightDynamicRanker _cosineSimilarityBetween:vectorCount:embedding:]
// Type encoding: f40@0:8^f16q24@32
// Implementation: 0x10684e8e0

// -[SCSpotlightDynamicRanker _dotProductBetween:vectorCount:embedding:]
// Type encoding: f40@0:8^f16q24@32
// Implementation: 0x10684ead0

// -[SCSpotlightDynamicRanker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10684ebf4

@end
