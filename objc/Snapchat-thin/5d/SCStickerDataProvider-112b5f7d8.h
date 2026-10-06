// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStickerDataProvider
// Superclass: NSObject
// Address: 0x112b5f7d8

@interface SCStickerDataProvider

// Property: shouldDisplayBitmojiLinkingPage; attributes: TB,R,N
// Property: customStickers; attributes: T@"NSArray",R,N,V_customStickers
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStickerDataProvider initForTarget:userSession:infoStickerDataProvider:hideAnimatedStickers:hideRecentStickersCategory:delegate:circumstanceEngine:itemsRepository:stickerItemPresentationModelSource:bitmojiStickerCategoryIconProvider:friendmojiFilteredContainer:stickerInjector:shouldFilterUnmigratedStickers:shouldFilterCTPItemBlock:creativeToolsABProvider:bitmojiAppEventsEmitter:]
// Type encoding: @132@0:8q16@24@32B40B44@48@56@64@72@80@88@96B104@?108@116@124
// Implementation: 0x10718b414

// -[SCStickerDataProvider initForChatWithSearchPageDataSource:searchSource:inputText:customStickers:userSession:delegate:stickerSearchObservable:circumstanceEngine:itemsRepository:stickerItemPresentationModelSource:bitmojiStickerCategoryIconProvider:friendmojiFilteredContainer:stickerInjector:shouldRenderChatSearchResultsAsCTItems:creativeToolsABProvider:bitmojiAppEventsEmitter:]
// Type encoding: @140@0:8@16q24@32@40@48@56@64@72@80@88@96@104@112B120@124@132
// Implementation: 0x10718b784

// -[SCStickerDataProvider dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10718bb38

// -[SCStickerDataProvider updateBitmoji]
// Type encoding: @16@0:8
// Implementation: 0x10718bb80

// -[SCStickerDataProvider _searchChatSuperCategoryWithSearchPageDataSource:searchSource:inputText:]
// Type encoding: @40@0:8@16q24@32
// Implementation: 0x10718bbf0

// -[SCStickerDataProvider _searchChatSuperCategoryWithSearchObservable:]
// Type encoding: @24@0:8@16
// Implementation: 0x10718bdc8

// -[SCStickerDataProvider updateChatSearchPageDataSource:searchSource:inputText:]
// Type encoding: @40@0:8@16q24@32
// Implementation: 0x10718bf68

// -[SCStickerDataProvider updateChatSearchObservable:]
// Type encoding: @24@0:8@16
// Implementation: 0x10718c048

// -[SCStickerDataProvider _recentlyUsedStickerSuperCategoryWithTarget:]
// Type encoding: @24@0:8q16
// Implementation: 0x10718c0b0

// -[SCStickerDataProvider updateSuperCategoryWithFeed:]
// Type encoding: @24@0:8@16
// Implementation: 0x10718c1d0

// -[SCStickerDataProvider superCategoryForFeedType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10718c8cc

// -[SCStickerDataProvider _categoryIconForFeed:]
// Type encoding: @24@0:8@16
// Implementation: 0x10718c924

// -[SCStickerDataProvider _futureIconImageWithFeed:]
// Type encoding: @24@0:8@16
// Implementation: 0x10718cb10

// -[SCStickerDataProvider _addStickerSuperCategories]
// Type encoding: v16@0:8
// Implementation: 0x10718ce64

// -[SCStickerDataProvider _sortSuperCategories]
// Type encoding: v16@0:8
// Implementation: 0x10718ceec

// -[SCStickerDataProvider _categoryIconWithNormalImageNamed:target:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10718cf58

// -[SCStickerDataProvider _snapchatStickersCategoryIconForTarget:]
// Type encoding: @24@0:8q16
// Implementation: 0x10718d008

// -[SCStickerDataProvider findStickerSuperCategory:]
// Type encoding: Q24@0:8q16
// Implementation: 0x10718d018

// -[SCStickerDataProvider _removeStickerSuperCategoryWithType:]
// Type encoding: @24@0:8q16
// Implementation: 0x10718d0a4

// -[SCStickerDataProvider _insertOrUpdateStickerSuperCategory:]
// Type encoding: @24@0:8@16
// Implementation: 0x10718d14c

// -[SCStickerDataProvider _indexOfSuperCategoryWithType:]
// Type encoding: Q24@0:8q16
// Implementation: 0x10718d2f8

// -[SCStickerDataProvider _bitmojiStickerSuperCategoryForTarget:]
// Type encoding: @24@0:8q16
// Implementation: 0x10718d3f4

// -[SCStickerDataProvider numberOfSuperCategoriesInStickerPickerMenu:]
// Type encoding: q24@0:8@16
// Implementation: 0x10718d4b0

// -[SCStickerDataProvider stickerPickerMenu:numberOfCategoriesInSuperCategory:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x10718d4b8

// -[SCStickerDataProvider shouldDisplayBitmojiLinkingPage]
// Type encoding: B16@0:8
// Implementation: 0x10718d58c

// -[SCStickerDataProvider stickerPickerMenu:stickerSuperCategoryForIndex:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10718d5e8

// -[SCStickerDataProvider stickerPickerMenu:stickerCategoryForIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10718d634

// -[SCStickerDataProvider stickerPickerMenu:shouldDisplayEmptyStateForIndexPath:sourceType:]
// Type encoding: B40@0:8@16@24Q32
// Implementation: 0x10718d734

// -[SCStickerDataProvider stickerPickerMenu:emptyStateViewForIndexPath:frame:sourceType:]
// Type encoding: @72@0:8@16@24{CGRect={CGPoint=dd}{CGSize=dd}}32Q64
// Implementation: 0x10718d7a0

// -[SCStickerDataProvider stickerPickerMenuHasSuperCategoryType:]
// Type encoding: B24@0:8q16
// Implementation: 0x10718d9b0

// -[SCStickerDataProvider stickerPickerMenuHasSuperCategoryType:atIndex:]
// Type encoding: B32@0:8q16@24
// Implementation: 0x10718d9d0

// -[SCStickerDataProvider superCategoryTypeAtIndexPath:]
// Type encoding: q24@0:8@16
// Implementation: 0x10718da30

// -[SCStickerDataProvider layoutSource]
// Type encoding: @16@0:8
// Implementation: 0x10718daac

// -[SCStickerDataProvider venuesInfoToDisplayForVenueStickerInPickerMenu:]
// Type encoding: @24@0:8@16
// Implementation: 0x10718dad4

// -[SCStickerDataProvider topicsInfoToDisplayForTopicStickerInPickerMenu:]
// Type encoding: @24@0:8@16
// Implementation: 0x10718dadc

// -[SCStickerDataProvider supportsAnimatedStickers]
// Type encoding: B16@0:8
// Implementation: 0x10718dae4

// -[SCStickerDataProvider numberOfSuperCategories]
// Type encoding: q16@0:8
// Implementation: 0x10718daf4

// -[SCStickerDataProvider numberOfCategoriesInSuperCategory:]
// Type encoding: q24@0:8q16
// Implementation: 0x10718dafc

// -[SCStickerDataProvider stickerSuperCategoryForIndex:]
// Type encoding: @24@0:8q16
// Implementation: 0x10718dbd0

// -[SCStickerDataProvider stickerCategoryForIndexPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x10718dbd8

// -[SCStickerDataProvider customStickers]
// Type encoding: @16@0:8
// Implementation: 0x10718dc78

// -[SCStickerDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10718dc80

@end
