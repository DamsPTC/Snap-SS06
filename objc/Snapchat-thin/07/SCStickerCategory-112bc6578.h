// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStickerCategory
// Superclass: NSObject
// Address: 0x112bc6578

@interface SCStickerCategory

// Property: categoryIcon; attributes: T@"SCStickerCategoryIcon",R,N,V_categoryIcon
// Property: sectionCount; attributes: Tq,R,N
// Property: shouldDisplayScrollbar; attributes: TB,R,N,V_shouldDisplayScrollbar
// Property: shouldDisplaySectionHeader; attributes: TB,N,V_shouldDisplaySectionHeader
// Property: sectionTopSpacing; attributes: T@"NSNumber",R,N,V_sectionTopSpacing
// Property: sectionBottomSpacing; attributes: T@"NSNumber",R,N,V_sectionBottomSpacing
// Property: stickerSearchDataSourceObservable; attributes: T@"SCObservable",R,N,V_stickerSearchDataSourceObservable

// -[SCStickerCategory initWithEmojiSet:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e8efd8

// -[SCStickerCategory initWithRecentStickers:normalIconImage:selectedIconImage:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x108e8f344

// -[SCStickerCategory initWithPageDataSource:backfillStickers:stickerBackfillMax:isHorizontalScrollEnabled:isCustomStickersEnabled:normalIconImage:selectedIconImage:]
// Type encoding: @64@0:8@16@24q32B40B44@48@56
// Implementation: 0x108e8f4b0

// -[SCStickerCategory initWithChatStickerSearchDataSourceObservable:normalIconImage:selectedIconImage:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x108e8f5b8

// -[SCStickerCategory _handleObservedStickerResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e8f770

// -[SCStickerCategory copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x108e8f91c

// -[SCStickerCategory sectionCount]
// Type encoding: q16@0:8
// Implementation: 0x108e8fa28

// -[SCStickerCategory stickersForSection:]
// Type encoding: @24@0:8q16
// Implementation: 0x108e8fa30

// -[SCStickerCategory stickerForIndexPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e8fa38

// -[SCStickerCategory titleForSection:]
// Type encoding: @24@0:8q16
// Implementation: 0x108e8fb00

// -[SCStickerCategory ctpSectionForSection:]
// Type encoding: Q24@0:8q16
// Implementation: 0x108e8fb4c

// -[SCStickerCategory stickerPackIdForSection:]
// Type encoding: @24@0:8q16
// Implementation: 0x108e8fbb0

// -[SCStickerCategory shouldHorizontalScrollAtSection:]
// Type encoding: B24@0:8q16
// Implementation: 0x108e8fc6c

// -[SCStickerCategory isEmptyState:]
// Type encoding: B24@0:8q16
// Implementation: 0x108e8fc88

// -[SCStickerCategory isGiphySection:]
// Type encoding: B24@0:8q16
// Implementation: 0x108e8fcf0

// -[SCStickerCategory sectionIndexForName:]
// Type encoding: Q24@0:8@16
// Implementation: 0x108e8fcf8

// -[SCStickerCategory addStickersToSection:stickers:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x108e8fd94

// -[SCStickerCategory removeGiphySection:]
// Type encoding: B24@0:8q16
// Implementation: 0x108e8ff60

// -[SCStickerCategory removeForYouSection:]
// Type encoding: B24@0:8q16
// Implementation: 0x108e8ff68

// -[SCStickerCategory removeSection:]
// Type encoding: B24@0:8q16
// Implementation: 0x108e8ff70

// -[SCStickerCategory _categoryIconWithNormalIconImage:selectedIconImage:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108e90070

// -[SCStickerCategory _numberOfItemsPerSectionForStickerChatLayout:totalNumberOfItemsPerType:]
// Type encoding: Q32@0:8@16q24
// Implementation: 0x108e90118

// -[SCStickerCategory _shouldDisplaySectionHeaderForStickerChatLayout:]
// Type encoding: B24@0:8@16
// Implementation: 0x108e90234

// -[SCStickerCategory _setupWithPageDataSource:stickers:backfillStickers:stickerBackfillMax:isHorizontalScrollEnabled:isCustomStickersEnabled:normalIconImage:selectedIconImage:]
// Type encoding: v72@0:8@16@24@32q40B48B52@56@64
// Implementation: 0x108e9034c

// -[SCStickerCategory categoryIcon]
// Type encoding: @16@0:8
// Implementation: 0x108e912a0

// -[SCStickerCategory shouldDisplayScrollbar]
// Type encoding: B16@0:8
// Implementation: 0x108e912a8

// -[SCStickerCategory shouldDisplaySectionHeader]
// Type encoding: B16@0:8
// Implementation: 0x108e912b0

// -[SCStickerCategory setShouldDisplaySectionHeader:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e912b8

// -[SCStickerCategory sectionTopSpacing]
// Type encoding: @16@0:8
// Implementation: 0x108e912c0

// -[SCStickerCategory sectionBottomSpacing]
// Type encoding: @16@0:8
// Implementation: 0x108e912c8

// -[SCStickerCategory stickerSearchDataSourceObservable]
// Type encoding: @16@0:8
// Implementation: 0x108e912d0

// -[SCStickerCategory .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108e912d8

@end
