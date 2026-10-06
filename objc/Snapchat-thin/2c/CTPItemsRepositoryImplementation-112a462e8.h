// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: CTPItemsRepositoryImplementation
// Superclass: NSObject
// Address: 0x112a462e8

@interface CTPItemsRepositoryImplementation

// Property: registeredLoaders; attributes: T@"NSDictionary",R,N,V_registeredLoaders
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[CTPItemsRepositoryImplementation initWithNetworkItemsClient:itemsLoaders:itemsPersistenceService:experiments:logger:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x105573a24

// -[CTPItemsRepositoryImplementation _registerLoaders:]
// Type encoding: v24@0:8@16
// Implementation: 0x105573b74

// -[CTPItemsRepositoryImplementation _loaderForFeed:]
// Type encoding: @24@0:8@16
// Implementation: 0x105573d28

// -[CTPItemsRepositoryImplementation itemsForFeed:itemFetchStrategy:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x105573ebc

// -[CTPItemsRepositoryImplementation itemsForFeed:pageToken:pageSize:itemFetchStrategy:]
// Type encoding: @48@0:8@16@24q32q40
// Implementation: 0x105573f54

// -[CTPItemsRepositoryImplementation _itemsForFeed:returnCachedFirst:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x105573f6c

// -[CTPItemsRepositoryImplementation _itemsForFeed:returnCachedFirst:pageToken:pageSize:]
// Type encoding: @44@0:8@16B24@28q36
// Implementation: 0x105573f78

// -[CTPItemsRepositoryImplementation _continuouslyUpdatingItemsForFeed:]
// Type encoding: @24@0:8@16
// Implementation: 0x105574530

// -[CTPItemsRepositoryImplementation deprecated_cameoItemsWithSession:]
// Type encoding: @24@0:8@16
// Implementation: 0x1055746f8

// -[CTPItemsRepositoryImplementation _checkValidityAndLoadItemsFromCacheForFeed:withSession:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1055747f0

// -[CTPItemsRepositoryImplementation _loadItemsFromCacheForFeed:withSession:withSubject:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105574a54

// -[CTPItemsRepositoryImplementation _persistedItemsWithIndexRankFromRawItems:feed:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105574d88

// -[CTPItemsRepositoryImplementation _saveItemsToCacheObservableForFeed:items:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105575020

// -[CTPItemsRepositoryImplementation _saveItemsToCacheForFeed:items:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105575420

// -[CTPItemsRepositoryImplementation _isFeedValid:]
// Type encoding: B24@0:8@16
// Implementation: 0x105575840

// -[CTPItemsRepositoryImplementation registeredLoaders]
// Type encoding: @16@0:8
// Implementation: 0x1055758b4

// -[CTPItemsRepositoryImplementation .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1055758bc

@end
