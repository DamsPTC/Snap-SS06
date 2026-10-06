// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatStickerFuzzySearch
// Superclass: NSObject
// Address: 0x112b7db98

@interface SCChatStickerFuzzySearch

// Property: searchResultsFinishedObservable; attributes: T@"SCObservable",R,N
// Property: chatSearchResults; attributes: T@"NSArray",R,C,N,V_chatSearchResults
// Property: announcer; attributes: T@"SCChatStickerFuzzySearchListenerAnnouncer",R,N,V_announcer

// -[SCChatStickerFuzzySearch initWithUserSession:repositoryExperiments:stickerSearcher:creativeToolsABProvider:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x107d56830

// -[SCChatStickerFuzzySearch searchResultsFinishedObservable]
// Type encoding: @16@0:8
// Implementation: 0x107d569c4

// -[SCChatStickerFuzzySearch searchChatStickersWithQuery:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d569ec

// -[SCChatStickerFuzzySearch searchChatStickersWithFuzzyText:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d56a2c

// -[SCChatStickerFuzzySearch resetChatSearchText]
// Type encoding: v16@0:8
// Implementation: 0x107d57044

// -[SCChatStickerFuzzySearch _updateChatSearchResultsWithStickers:bitmojiStickerSearchResults:customojiSearchResults:searchTerm:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x107d5705c

// -[SCChatStickerFuzzySearch searchDynamicDebounceForSearchText:]
// Type encoding: d24@0:8@16
// Implementation: 0x107d571c0

// -[SCChatStickerFuzzySearch chatSearchResults]
// Type encoding: @16@0:8
// Implementation: 0x107d57244

// -[SCChatStickerFuzzySearch announcer]
// Type encoding: @16@0:8
// Implementation: 0x107d5724c

// -[SCChatStickerFuzzySearch .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107d57254

@end
