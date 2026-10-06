// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStickerFeedCategory
// Superclass: SCStickerCategory
// Address: 0x112bc65c8

@interface SCStickerFeedCategory

// Property: filterBlock; attributes: T@?,C,N,V_filterBlock
// Property: error; attributes: T@"NSError",&,N,V_error
// Property: feed; attributes: T@"CTPFeed",R,N,V_feed
// Property: itemsPublishSubject; attributes: T@"SCPublishSubject",R,N,V_itemsPublishSubject
// Property: itemsGroups; attributes: T@"NSArray",R,N,V_itemsGroups
// Property: isLoading; attributes: TB,N,V_isLoading

// -[SCStickerFeedCategory initWithFeed:itemsObservable:stickerInjector:filterItemsBlock:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x108e91374

// -[SCStickerFeedCategory reloadData]
// Type encoding: v16@0:8
// Implementation: 0x108e914d0

// -[SCStickerFeedCategory _handleResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e916e0

// -[SCStickerFeedCategory _handleOnComplete]
// Type encoding: v16@0:8
// Implementation: 0x108e918b0

// -[SCStickerFeedCategory itemForIndexPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e91914

// -[SCStickerFeedCategory _setItemsGroups:filterItemsBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108e919fc

// -[SCStickerFeedCategory itemsGroupAtIndex:]
// Type encoding: @24@0:8Q16
// Implementation: 0x108e91d50

// -[SCStickerFeedCategory titleForSection:]
// Type encoding: @24@0:8q16
// Implementation: 0x108e91dac

// -[SCStickerFeedCategory _testItemsWithGroup:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e91e88

// -[SCStickerFeedCategory shouldHorizontalScrollAtSection:]
// Type encoding: B24@0:8q16
// Implementation: 0x108e91f70

// -[SCStickerFeedCategory feed]
// Type encoding: @16@0:8
// Implementation: 0x108e91fe8

// -[SCStickerFeedCategory itemsPublishSubject]
// Type encoding: @16@0:8
// Implementation: 0x108e91ff8

// -[SCStickerFeedCategory itemsGroups]
// Type encoding: @16@0:8
// Implementation: 0x108e92008

// -[SCStickerFeedCategory isLoading]
// Type encoding: B16@0:8
// Implementation: 0x108e92018

// -[SCStickerFeedCategory setIsLoading:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e92028

// -[SCStickerFeedCategory error]
// Type encoding: @16@0:8
// Implementation: 0x108e92038

// -[SCStickerFeedCategory setError:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e92048

// -[SCStickerFeedCategory filterBlock]
// Type encoding: @?16@0:8
// Implementation: 0x108e92088

// -[SCStickerFeedCategory setFilterBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x108e92098

// -[SCStickerFeedCategory .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108e920a4

@end
