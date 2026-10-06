// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensExplorerTablessPageCoordinator
// Superclass: NSObject
// Address: 0x112af1a58

@interface SCLensExplorerTablessPageCoordinator

// Property: selectedPageIndex; attributes: TQ,N,V_selectedPageIndex
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensExplorerTablessPageCoordinator initWithScrollView:delegate:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10670aa1c

// -[SCLensExplorerTablessPageCoordinator setSelectedPageIndex:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10670aac0

// -[SCLensExplorerTablessPageCoordinator selectPageAtIndex:animated:]
// Type encoding: v28@0:8Q16B24
// Implementation: 0x10670ab34

// -[SCLensExplorerTablessPageCoordinator scrollViewWillBeginDragging:]
// Type encoding: v24@0:8@16
// Implementation: 0x10670abd8

// -[SCLensExplorerTablessPageCoordinator scrollViewDidScroll:]
// Type encoding: v24@0:8@16
// Implementation: 0x10670ac08

// -[SCLensExplorerTablessPageCoordinator scrollViewWillEndDragging:withVelocity:targetContentOffset:]
// Type encoding: v48@0:8@16{CGPoint=dd}24N^{CGPoint=dd}40
// Implementation: 0x10670ad20

// -[SCLensExplorerTablessPageCoordinator scrollViewDidEndScrollingAnimation:]
// Type encoding: v24@0:8@16
// Implementation: 0x10670ad48

// -[SCLensExplorerTablessPageCoordinator _setAnimatingToIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x10670ad50

// -[SCLensExplorerTablessPageCoordinator _notifyIfNeededDisplayPageAtIndex:pageCount:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x10670ade8

// -[SCLensExplorerTablessPageCoordinator _notifyIfNeededHidePageAtIndex:pageCount:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x10670ae38

// -[SCLensExplorerTablessPageCoordinator _notifyIfNeededSelectedPageAtIndex:pageCount:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x10670ae88

// -[SCLensExplorerTablessPageCoordinator selectedPageIndex]
// Type encoding: Q16@0:8
// Implementation: 0x10670aecc

// -[SCLensExplorerTablessPageCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10670aed4

@end
