// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: CTPCustomStickerServicesImpl
// Superclass: NSObject
// Address: 0x112a6e4c8

@interface CTPCustomStickerServicesImpl

// Property: itemsPersistence; attributes: T@"SCLazy",&,N,V_itemsPersistence
// Property: contentManager; attributes: T@"SCLazy",&,N,V_contentManager
// Property: performer; attributes: T@"SCQueuePerformer",&,N,V_performer
// Property: itemTransformer; attributes: T@"SCLazy",&,N,V_itemTransformer
// Property: updateProcessor; attributes: T@"CTPCustomStickerUpdateProcessor",&,N,V_updateProcessor
// Property: repositoryExperiments; attributes: T@"SCLazy",&,N,V_repositoryExperiments
// Property: customStickerServicesLogger; attributes: T@"CTPCustomStickerServicesLogger",&,N,V_customStickerServicesLogger
// Property: preferences; attributes: T@"SCLazy",&,N,V_preferences
// Property: queue; attributes: T@"sc_async_queue",&,N,V_queue
// Property: currentUserId; attributes: T@"NSString",&,N,V_currentUserId

// -[CTPCustomStickerServicesImpl initWithItemsPersistence:contentManager:customStickerClient:itemTransformer:userStorageServices:repositoryExperiments:grapheneRegistry:asyncQueueProvider:currentUserId:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x10580abc8

// -[CTPCustomStickerServicesImpl _localCustomStickerCTPItemWithCTId:imageDimensions:origin:isAnimated:]
// Type encoding: @48@0:8@16{CGSize=dd}24i40B44
// Implementation: 0x10580ae88

// -[CTPCustomStickerServicesImpl _dimensionsForImageData:]
// Type encoding: {CGSize=dd}24@0:8@16
// Implementation: 0x10580af8c

// -[CTPCustomStickerServicesImpl _persistedItemForCTPItem:feedType:feedsTreeContext:]
// Type encoding: @40@0:8@16Q24Q32
// Implementation: 0x10580affc

// -[CTPCustomStickerServicesImpl addCustomSticker:origin:isAnimated:]
// Type encoding: @32@0:8@16i24B28
// Implementation: 0x10580b15c

// -[CTPCustomStickerServicesImpl deleteCustomSticker:]
// Type encoding: @24@0:8@16
// Implementation: 0x10580ba34

// -[CTPCustomStickerServicesImpl triggerSyncJob]
// Type encoding: v16@0:8
// Implementation: 0x10580bef0

// -[CTPCustomStickerServicesImpl _logSuccessOperation:]
// Type encoding: v24@0:8q16
// Implementation: 0x10580bfdc

// -[CTPCustomStickerServicesImpl _logFailureForOperation:errorType:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x10580c024

// -[CTPCustomStickerServicesImpl updateCustomStickerRankID:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10580c0b0

// -[CTPCustomStickerServicesImpl _fetchItemForCTId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10580c3f0

// -[CTPCustomStickerServicesImpl _updateChatHometabFeedCacheIfNecessaryWithItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x10580c610

// -[CTPCustomStickerServicesImpl itemsPersistence]
// Type encoding: @16@0:8
// Implementation: 0x10580c734

// -[CTPCustomStickerServicesImpl setItemsPersistence:]
// Type encoding: v24@0:8@16
// Implementation: 0x10580c73c

// -[CTPCustomStickerServicesImpl contentManager]
// Type encoding: @16@0:8
// Implementation: 0x10580c76c

// -[CTPCustomStickerServicesImpl setContentManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x10580c774

// -[CTPCustomStickerServicesImpl performer]
// Type encoding: @16@0:8
// Implementation: 0x10580c7a4

// -[CTPCustomStickerServicesImpl setPerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10580c7ac

// -[CTPCustomStickerServicesImpl itemTransformer]
// Type encoding: @16@0:8
// Implementation: 0x10580c7dc

// -[CTPCustomStickerServicesImpl setItemTransformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10580c7e4

// -[CTPCustomStickerServicesImpl updateProcessor]
// Type encoding: @16@0:8
// Implementation: 0x10580c814

// -[CTPCustomStickerServicesImpl setUpdateProcessor:]
// Type encoding: v24@0:8@16
// Implementation: 0x10580c81c

// -[CTPCustomStickerServicesImpl repositoryExperiments]
// Type encoding: @16@0:8
// Implementation: 0x10580c84c

// -[CTPCustomStickerServicesImpl setRepositoryExperiments:]
// Type encoding: v24@0:8@16
// Implementation: 0x10580c854

// -[CTPCustomStickerServicesImpl customStickerServicesLogger]
// Type encoding: @16@0:8
// Implementation: 0x10580c884

// -[CTPCustomStickerServicesImpl setCustomStickerServicesLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x10580c88c

// -[CTPCustomStickerServicesImpl preferences]
// Type encoding: @16@0:8
// Implementation: 0x10580c8bc

// -[CTPCustomStickerServicesImpl setPreferences:]
// Type encoding: v24@0:8@16
// Implementation: 0x10580c8c4

// -[CTPCustomStickerServicesImpl queue]
// Type encoding: @16@0:8
// Implementation: 0x10580c8f4

// -[CTPCustomStickerServicesImpl setQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x10580c8fc

// -[CTPCustomStickerServicesImpl currentUserId]
// Type encoding: @16@0:8
// Implementation: 0x10580c92c

// -[CTPCustomStickerServicesImpl setCurrentUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10580c934

// -[CTPCustomStickerServicesImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10580c964

@end
