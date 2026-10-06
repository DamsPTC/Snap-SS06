// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpotlightRecentStoryRepository
// Superclass: NSObject
// Address: 0x112b04428

@interface SCSpotlightRecentStoryRepository

// Property: performer; attributes: T@"<SCPerforming>",R,N,V_performer
// Property: transactor; attributes: T@"SCLazy",R,N,V_transactor
// Property: config; attributes: T@"SCSpotlightRecentStoriesRepoConfig",&,N,V_config
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpotlightRecentStoryRepository initWithTransactorProvider:config:performer:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1068b8128

// -[SCSpotlightRecentStoryRepository initDatabase]
// Type encoding: v16@0:8
// Implementation: 0x1068b82c8

// -[SCSpotlightRecentStoryRepository recordInteractionWithStory:interactionType:completion:]
// Type encoding: v40@0:8@16q24@?32
// Implementation: 0x1068b82d0

// -[SCSpotlightRecentStoryRepository _recordInteractionWithStory:interactionType:timestamp:completion:]
// Type encoding: v48@0:8@16q24d32@?40
// Implementation: 0x1068b8470

// -[SCSpotlightRecentStoryRepository removeRecordForDedupeFp:interactionType:completion:]
// Type encoding: v40@0:8Q16q24@?32
// Implementation: 0x1068b8694

// -[SCSpotlightRecentStoryRepository _removeRecordForDedupeFp:interactionType:completion:]
// Type encoding: v40@0:8Q16q24@?32
// Implementation: 0x1068b87d8

// -[SCSpotlightRecentStoryRepository getLatestStoriesWithInteractionType:afterTimestamp:limit:completion:]
// Type encoding: v48@0:8q16d24q32@?40
// Implementation: 0x1068b8908

// -[SCSpotlightRecentStoryRepository _getLatestStoriesWithInteractionType:afterTimestamp:limit:completion:]
// Type encoding: v48@0:8q16d24q32@?40
// Implementation: 0x1068b8a68

// -[SCSpotlightRecentStoryRepository clearOldStoriesWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1068b8d04

// -[SCSpotlightRecentStoryRepository _clearOldStoriesWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1068b8e30

// -[SCSpotlightRecentStoryRepository _allInteractionTypes]
// Type encoding: @16@0:8
// Implementation: 0x1068b903c

// -[SCSpotlightRecentStoryRepository _decodeDiscoverFeedStoryWithStoredData:]
// Type encoding: @24@0:8@16
// Implementation: 0x1068b9048

// -[SCSpotlightRecentStoryRepository _recordLimitForInteractionType:]
// Type encoding: Q24@0:8q16
// Implementation: 0x1068b9110

// -[SCSpotlightRecentStoryRepository performer]
// Type encoding: @16@0:8
// Implementation: 0x1068b91f0

// -[SCSpotlightRecentStoryRepository transactor]
// Type encoding: @16@0:8
// Implementation: 0x1068b91f8

// -[SCSpotlightRecentStoryRepository config]
// Type encoding: @16@0:8
// Implementation: 0x1068b9200

// -[SCSpotlightRecentStoryRepository setConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068b9208

// -[SCSpotlightRecentStoryRepository .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1068b9238

@end
