// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoryInviteStickerCarouselManager
// Superclass: NSObject
// Address: 0x112bc5128

@interface SCStoryInviteStickerCarouselManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCInfoStickerEditorCarouselManagerDelegate>",W,N,V_delegate

// -[SCStoryInviteStickerCarouselManager initWithStickerCarousel:editingSticker:userId:customStoriesDataFetcher:imageDownloader:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x108e67194

// -[SCStoryInviteStickerCarouselManager carouselHeight]
// Type encoding: d16@0:8
// Implementation: 0x108e672fc

// -[SCStoryInviteStickerCarouselManager carouselGradientHeight]
// Type encoding: d16@0:8
// Implementation: 0x108e67308

// -[SCStoryInviteStickerCarouselManager collectionView:numberOfItemsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x108e67314

// -[SCStoryInviteStickerCarouselManager collectionView:cellForItemAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108e6731c

// -[SCStoryInviteStickerCarouselManager collectionView:didSelectItemAtIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108e673c0

// -[SCStoryInviteStickerCarouselManager collectionView:layout:sizeForItemAtIndexPath:]
// Type encoding: {CGSize=dd}40@0:8@16@24@32
// Implementation: 0x108e67484

// -[SCStoryInviteStickerCarouselManager collectionView:layout:insetForSectionAtIndex:]
// Type encoding: {UIEdgeInsets=dddd}40@0:8@16@24q32
// Implementation: 0x108e67518

// -[SCStoryInviteStickerCarouselManager collectionView:layout:minimumInteritemSpacingForSectionAtIndex:]
// Type encoding: d40@0:8@16@24q32
// Implementation: 0x108e6752c

// -[SCStoryInviteStickerCarouselManager _setupStickerCarousel:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e67534

// -[SCStoryInviteStickerCarouselManager _setupTextFiltering]
// Type encoding: v16@0:8
// Implementation: 0x108e675bc

// -[SCStoryInviteStickerCarouselManager _fetchStories]
// Type encoding: v16@0:8
// Implementation: 0x108e6779c

// -[SCStoryInviteStickerCarouselManager _filterAndReloadWithFetchedStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e6796c

// -[SCStoryInviteStickerCarouselManager delegate]
// Type encoding: @16@0:8
// Implementation: 0x108e67ac0

// -[SCStoryInviteStickerCarouselManager setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e67ad8

// -[SCStoryInviteStickerCarouselManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108e67ae4

@end
