// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: CTPUserDataFeedServiceImpl
// Superclass: NSObject
// Address: 0x112a6c448

@interface CTPUserDataFeedServiceImpl

// Property: itemsRepository; attributes: T@"SCLazy",&,N,V_itemsRepository
// Property: itemsPersistence; attributes: T@"SCLazy",&,N,V_itemsPersistence
// Property: feedsRepository; attributes: T@"SCLazy",&,N,V_feedsRepository
// Property: userDataClient; attributes: T@"SCLazy",&,N,V_userDataClient
// Property: protobufTransformer; attributes: T@"<CTPProtobufItemTransforming>",&,N,V_protobufTransformer
// Property: circumstanceEngine; attributes: T@"<SCCircumstanceEngineProtocol>",&,N,V_circumstanceEngine
// Property: userDataFeedServiceLogger; attributes: T@"CTPUserDataFeedServiceLogger",&,N,V_userDataFeedServiceLogger
// Property: updateJobObservable; attributes: T@"SCPublishSubject",&,N,V_updateJobObservable
// Property: performer; attributes: T@"SCQueuePerformer",&,N,V_performer
// Property: jobProcessor; attributes: T@"CTPUserDataUpdateJobProcessor",&,N,V_jobProcessor

// -[CTPUserDataFeedServiceImpl _soundFavoritesFeed]
// Type encoding: @16@0:8
// Implementation: 0x1057e6d70

// -[CTPUserDataFeedServiceImpl _soundRecentsFeed]
// Type encoding: @16@0:8
// Implementation: 0x1057e6e40

// -[CTPUserDataFeedServiceImpl _soundUnlocksFeed]
// Type encoding: @16@0:8
// Implementation: 0x1057e7024

// -[CTPUserDataFeedServiceImpl initWithItemsRepository:itemsPersistence:feedsRepository:userDataClient:grapheneRegistry:circumstanceEngine:retryJobProvider:docObjectContext:protobufTransformer:creativeToolsABProvider:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72@80@88
// Implementation: 0x1057e70f4

// -[CTPUserDataFeedServiceImpl addExternalId:toCategory:context:]
// Type encoding: @40@0:8@16Q24Q32
// Implementation: 0x1057e7350

// -[CTPUserDataFeedServiceImpl removeExternalId:fromCategory:context:]
// Type encoding: @40@0:8@16Q24Q32
// Implementation: 0x1057e8064

// -[CTPUserDataFeedServiceImpl userDataForCategory:context:]
// Type encoding: @32@0:8Q16Q24
// Implementation: 0x1057e8bc0

// -[CTPUserDataFeedServiceImpl userDataForCategory:pageToken:pageSize:context:]
// Type encoding: @48@0:8Q16@24q32Q40
// Implementation: 0x1057e8c54

// -[CTPUserDataFeedServiceImpl isProtobufItemInUserData:category:context:]
// Type encoding: @40@0:8@16Q24Q32
// Implementation: 0x1057e8f64

// -[CTPUserDataFeedServiceImpl isExternalIdInUserData:category:context:]
// Type encoding: @40@0:8@16Q24Q32
// Implementation: 0x1057e908c

// -[CTPUserDataFeedServiceImpl userDataUpdateObservable]
// Type encoding: @16@0:8
// Implementation: 0x1057e93d0

// -[CTPUserDataFeedServiceImpl updateCTPItem:userDataCategory:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1057e93f8

// -[CTPUserDataFeedServiceImpl _fetchItemsForFeed:pageToken:pageSize:promise:]
// Type encoding: v48@0:8@16@24q32@40
// Implementation: 0x1057e948c

// -[CTPUserDataFeedServiceImpl _completeUpdateJob:promise:lifecycle:context:withError:]
// Type encoding: v56@0:8@16@24@32Q40@48
// Implementation: 0x1057e9b88

// -[CTPUserDataFeedServiceImpl _updateMirroredFavoritesCacheFromContext:upsertedItems:deletedItemIds:]
// Type encoding: v40@0:8Q16@24@32
// Implementation: 0x1057e9f68

// -[CTPUserDataFeedServiceImpl _feedForCategory:context:]
// Type encoding: @32@0:8Q16Q24
// Implementation: 0x1057ea0bc

// -[CTPUserDataFeedServiceImpl _feedNodeForType:context:promise:]
// Type encoding: v40@0:8Q16Q24@32
// Implementation: 0x1057ea1b8

// -[CTPUserDataFeedServiceImpl _fetchItemsForCategory:context:]
// Type encoding: @32@0:8Q16Q24
// Implementation: 0x1057ea39c

// -[CTPUserDataFeedServiceImpl _soundFavorites]
// Type encoding: @16@0:8
// Implementation: 0x1057ea730

// -[CTPUserDataFeedServiceImpl _soundRecents]
// Type encoding: @16@0:8
// Implementation: 0x1057ea964

// -[CTPUserDataFeedServiceImpl _soundUnlocks]
// Type encoding: @16@0:8
// Implementation: 0x1057eab98

// -[CTPUserDataFeedServiceImpl _networkUserDataCategoryForFeedCategory:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x1057eadcc

// -[CTPUserDataFeedServiceImpl _persistedItemForItemId:data:feedType:feedsTreeContext:]
// Type encoding: @48@0:8@16@24Q32Q40
// Implementation: 0x1057eadf0

// -[CTPUserDataFeedServiceImpl _updateChatHometabFeedCacheIfNecessaryWithUpsertedItems:deletedItemsIds:category:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x1057eaedc

// -[CTPUserDataFeedServiceImpl itemsRepository]
// Type encoding: @16@0:8
// Implementation: 0x1057eafbc

// -[CTPUserDataFeedServiceImpl setItemsRepository:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057eafc4

// -[CTPUserDataFeedServiceImpl itemsPersistence]
// Type encoding: @16@0:8
// Implementation: 0x1057eaff4

// -[CTPUserDataFeedServiceImpl setItemsPersistence:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057eaffc

// -[CTPUserDataFeedServiceImpl feedsRepository]
// Type encoding: @16@0:8
// Implementation: 0x1057eb02c

// -[CTPUserDataFeedServiceImpl setFeedsRepository:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057eb034

// -[CTPUserDataFeedServiceImpl userDataClient]
// Type encoding: @16@0:8
// Implementation: 0x1057eb064

// -[CTPUserDataFeedServiceImpl setUserDataClient:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057eb06c

// -[CTPUserDataFeedServiceImpl protobufTransformer]
// Type encoding: @16@0:8
// Implementation: 0x1057eb09c

// -[CTPUserDataFeedServiceImpl setProtobufTransformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057eb0a4

// -[CTPUserDataFeedServiceImpl circumstanceEngine]
// Type encoding: @16@0:8
// Implementation: 0x1057eb0d4

// -[CTPUserDataFeedServiceImpl setCircumstanceEngine:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057eb0dc

// -[CTPUserDataFeedServiceImpl userDataFeedServiceLogger]
// Type encoding: @16@0:8
// Implementation: 0x1057eb10c

// -[CTPUserDataFeedServiceImpl setUserDataFeedServiceLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057eb114

// -[CTPUserDataFeedServiceImpl updateJobObservable]
// Type encoding: @16@0:8
// Implementation: 0x1057eb144

// -[CTPUserDataFeedServiceImpl setUpdateJobObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057eb14c

// -[CTPUserDataFeedServiceImpl performer]
// Type encoding: @16@0:8
// Implementation: 0x1057eb17c

// -[CTPUserDataFeedServiceImpl setPerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057eb184

// -[CTPUserDataFeedServiceImpl jobProcessor]
// Type encoding: @16@0:8
// Implementation: 0x1057eb1b4

// -[CTPUserDataFeedServiceImpl setJobProcessor:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057eb1bc

// -[CTPUserDataFeedServiceImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1057eb1ec

@end
