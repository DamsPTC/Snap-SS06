// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensCarouselCollectionControllerNotifyer
// Superclass: NSObject
// Address: 0x112bf2fd8

@interface SCLensCarouselCollectionControllerNotifyer

// Property: delegate; attributes: T@"<SCLensCarouselCollectionControllerDelegate>",W,N,V_delegate
// Property: lensCarouselDidScrollObservable; attributes: T@"SCObservable",&,N,V_lensCarouselDidScrollObservable

// -[SCLensCarouselCollectionControllerNotifyer initWithController:lensStatusProvider:uiUpdateAnnouncer:carouselDataAdapter:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1091b0fa8

// -[SCLensCarouselCollectionControllerNotifyer lensCarouselDidScrollObservable]
// Type encoding: @16@0:8
// Implementation: 0x1091b10b8

// -[SCLensCarouselCollectionControllerNotifyer lensCarouselPresenter:didActivateItem:index:selectionType:originalLensIndex:totalLensesCount:]
// Type encoding: v64@0:8@16@24Q32q40Q48Q56
// Implementation: 0x1091b10e0

// -[SCLensCarouselCollectionControllerNotifyer lensCarouselPresenter:willSelectItem:index:originalLensIndex:]
// Type encoding: v48@0:8@16@24Q32Q40
// Implementation: 0x1091b11d0

// -[SCLensCarouselCollectionControllerNotifyer lensCarouselPresenter:didSelectItem:index:selectionType:originalLensIndex:totalLensesCount:]
// Type encoding: v64@0:8@16@24Q32q40Q48Q56
// Implementation: 0x1091b1290

// -[SCLensCarouselCollectionControllerNotifyer lensCarouselPresenter:willDisplayItem:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091b1380

// -[SCLensCarouselCollectionControllerNotifyer lensCarouselPresenter:didUpdateDisplayedLens:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091b1438

// -[SCLensCarouselCollectionControllerNotifyer lensCarouselPresenter:didEndDisplayingItem:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091b14f0

// -[SCLensCarouselCollectionControllerNotifyer lensCarouselPresenter:didDrawIcon:forItem:atIndex:]
// Type encoding: v48@0:8@16@24@32q40
// Implementation: 0x1091b15a8

// -[SCLensCarouselCollectionControllerNotifyer lensCarouselPresenter:didUpdateItemsList:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091b1654

// -[SCLensCarouselCollectionControllerNotifyer lensCarouselPresenter:isItemBeingApplied:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1091b1740

// -[SCLensCarouselCollectionControllerNotifyer lensCarouselPresenter:didScroll:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091b17d0

// -[SCLensCarouselCollectionControllerNotifyer lensCarouselPresenter:didEndScrolling:atItem:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1091b17dc

// -[SCLensCarouselCollectionControllerNotifyer lensCarouselPresenter:willBeginDragging:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091b17e0

// -[SCLensCarouselCollectionControllerNotifyer lensCarouselPresenter:didUpdateVisibleLenses:selectedLensIndex:originalLensIndex:]
// Type encoding: v48@0:8@16@24Q32Q40
// Implementation: 0x1091b17e4

// -[SCLensCarouselCollectionControllerNotifyer delegate]
// Type encoding: @16@0:8
// Implementation: 0x1091b1868

// -[SCLensCarouselCollectionControllerNotifyer setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091b1880

// -[SCLensCarouselCollectionControllerNotifyer setLensCarouselDidScrollObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091b188c

// -[SCLensCarouselCollectionControllerNotifyer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1091b18bc

@end
