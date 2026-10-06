// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCClearCacheManager
// Superclass: NSObject
// Address: 0x112a92148

@interface SCClearCacheManager

// Property: browserCacheSize; attributes: T@"NSNumber",&,N,V_browserCacheSize
// Property: memoriesCacheSize; attributes: T@"NSNumber",&,N,V_memoriesCacheSize
// Property: storiesCacheSize; attributes: T@"NSNumber",&,N,V_storiesCacheSize
// Property: lensCacheSize; attributes: T@"NSNumber",&,N,V_lensCacheSize
// Property: searchCacheSize; attributes: T@"NSNumber",&,N,V_searchCacheSize
// Property: contentManagerCacheSize; attributes: T@"NSNumber",&,N,V_contentManagerCacheSize
// Property: allCacheSize; attributes: T@"NSNumber",&,N,V_allCacheSize
// Property: userSession; attributes: T@"SCUserSession",W,N,V_userSession
// Property: stickersCacheSize; attributes: T@"NSNumber",R,N,V_stickersCacheSize

// -[SCClearCacheManager initWithAppTerminator:userSession:cacheController:imageDownloader:legacyLensDataFetcher:spectaclesContentDataSource:spectaclesCacheClearing:spectacleAuxiliaryCacheClearing:bloopsFriendCache:memoriesCachingMediaManager:contentClearCacheManager:]
// Type encoding: @104@0:8@16@24@32@40@48@56@64@72@80@88@96
// Implementation: 0x105c33aa8

// -[SCClearCacheManager _updateAllCacheSize]
// Type encoding: v16@0:8
// Implementation: 0x105c33d90

// -[SCClearCacheManager startCalculatingCacheSizeWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105c33ed4

// -[SCClearCacheManager rawCacheSizeByFeature:]
// Type encoding: @20@0:8i16
// Implementation: 0x105c34d04

// -[SCClearCacheManager cacheSizeByFeature:]
// Type encoding: @20@0:8i16
// Implementation: 0x105c34d48

// -[SCClearCacheManager clearAllCache:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105c34da4

// -[SCClearCacheManager clearBrowserCache:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105c351b0

// -[SCClearCacheManager clearMemoriesCache:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105c351bc

// -[SCClearCacheManager clearLensCache:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105c3532c

// -[SCClearCacheManager clearSearchCache:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105c35538

// -[SCClearCacheManager clearLagunaLocationsCache:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105c35594

// -[SCClearCacheManager clearCameosCache:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105c355f0

// -[SCClearCacheManager clearPublicContentFeeds:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105c356a4

// -[SCClearCacheManager _warmupSearchCache]
// Type encoding: v16@0:8
// Implementation: 0x105c35758

// -[SCClearCacheManager _appRestartPrompt]
// Type encoding: v16@0:8
// Implementation: 0x105c35778

// -[SCClearCacheManager presentClearDataAlertWithTitle:description:actionTitle:clearBlock:parentView:]
// Type encoding: v56@0:8@16@24@32@?40@48
// Implementation: 0x105c35988

// -[SCClearCacheManager _showClearProgress:parentView:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x105c35bc4

// -[SCClearCacheManager appClearBlackViewAndRestart:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c360b0

// -[SCClearCacheManager browserCacheSize]
// Type encoding: @16@0:8
// Implementation: 0x105c36180

// -[SCClearCacheManager setBrowserCacheSize:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c36188

// -[SCClearCacheManager memoriesCacheSize]
// Type encoding: @16@0:8
// Implementation: 0x105c361b8

// -[SCClearCacheManager setMemoriesCacheSize:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c361c0

// -[SCClearCacheManager storiesCacheSize]
// Type encoding: @16@0:8
// Implementation: 0x105c361f0

// -[SCClearCacheManager setStoriesCacheSize:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c361f8

// -[SCClearCacheManager lensCacheSize]
// Type encoding: @16@0:8
// Implementation: 0x105c36228

// -[SCClearCacheManager setLensCacheSize:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c36230

// -[SCClearCacheManager searchCacheSize]
// Type encoding: @16@0:8
// Implementation: 0x105c36260

// -[SCClearCacheManager setSearchCacheSize:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c36268

// -[SCClearCacheManager stickersCacheSize]
// Type encoding: @16@0:8
// Implementation: 0x105c36298

// -[SCClearCacheManager allCacheSize]
// Type encoding: @16@0:8
// Implementation: 0x105c362a0

// -[SCClearCacheManager setAllCacheSize:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c362a8

// -[SCClearCacheManager contentManagerCacheSize]
// Type encoding: @16@0:8
// Implementation: 0x105c362d8

// -[SCClearCacheManager setContentManagerCacheSize:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c362e0

// -[SCClearCacheManager userSession]
// Type encoding: @16@0:8
// Implementation: 0x105c36310

// -[SCClearCacheManager setUserSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c36328

// -[SCClearCacheManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105c36334

// +[SCClearCacheManager _fileSizeToMB:]
// Type encoding: @24@0:8@16
// Implementation: 0x105c34cb0

@end
