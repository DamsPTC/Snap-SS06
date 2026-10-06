// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoryManagementPagingController
// Superclass: NSObject
// Address: 0x112b6a1d8

@interface SCStoryManagementPagingController

// Property: operaEventAnnouncer; attributes: T@"<SCOperaEventAnnouncing>",&,N,V_operaEventAnnouncer
// Property: currentSnapIndex; attributes: Tq,R,N,V_currentSnapIndex
// Property: isCurrentlyPaging; attributes: TB,R,N,V_isCurrentlyPaging
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoryManagementPagingController initWithSnapCarouselCollectionView:snapViewersCollectionView:dataSource:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x107a19824

// -[SCStoryManagementPagingController clientIdForCurrentIndex]
// Type encoding: @16@0:8
// Implementation: 0x107a19904

// -[SCStoryManagementPagingController pageToClientId:animated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107a19974

// -[SCStoryManagementPagingController updateCurrentSnapIndex]
// Type encoding: v16@0:8
// Implementation: 0x107a19bc4

// -[SCStoryManagementPagingController currentSnapIndexObservable]
// Type encoding: @16@0:8
// Implementation: 0x107a19cd8

// -[SCStoryManagementPagingController scrollViewDidScroll:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a19d00

// -[SCStoryManagementPagingController _snapCarouselContentInsetLeft]
// Type encoding: d16@0:8
// Implementation: 0x107a19ea4

// -[SCStoryManagementPagingController scrollViewWillBeginDragging:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a19ee4

// -[SCStoryManagementPagingController scrollViewDidEndDragging:willDecelerate:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107a19f9c

// -[SCStoryManagementPagingController scrollViewDidEndDecelerating:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a19fa8

// -[SCStoryManagementPagingController scrollViewDidEndScrollingAnimation:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a19fac

// -[SCStoryManagementPagingController _scrollViewDidEndScrolling:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a19fb0

// -[SCStoryManagementPagingController _currentSnapIndex]
// Type encoding: q16@0:8
// Implementation: 0x107a1a034

// -[SCStoryManagementPagingController _currentSnapIndexDuringScrolling]
// Type encoding: q16@0:8
// Implementation: 0x107a1a0b0

// -[SCStoryManagementPagingController operaEventAnnouncer]
// Type encoding: @16@0:8
// Implementation: 0x107a1a13c

// -[SCStoryManagementPagingController setOperaEventAnnouncer:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a1a144

// -[SCStoryManagementPagingController currentSnapIndex]
// Type encoding: q16@0:8
// Implementation: 0x107a1a174

// -[SCStoryManagementPagingController isCurrentlyPaging]
// Type encoding: B16@0:8
// Implementation: 0x107a1a17c

// -[SCStoryManagementPagingController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107a1a184

@end
