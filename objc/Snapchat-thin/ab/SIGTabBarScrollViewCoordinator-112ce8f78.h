// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SIGTabBarScrollViewCoordinator
// Superclass: NSObject
// Address: 0x112ce8f78

@interface SIGTabBarScrollViewCoordinator

// Property: delegate; attributes: T@"<SIGTabBarScrollViewCoordinatorDelegate>",W,N,V_delegate
// Property: selectedIndex; attributes: TQ,R,N,V_selectedIndex
// Property: animatingToIndex; attributes: TQ,R,N,V_animatingToIndex
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SIGTabBarScrollViewCoordinator initWithTabs:scrollView:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b872750

// -[SIGTabBarScrollViewCoordinator initWithTabs:scrollView:selectedIndex:animatingToIndex:]
// Type encoding: @48@0:8@16@24Q32Q40
// Implementation: 0x10b87275c

// -[SIGTabBarScrollViewCoordinator setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b872858

// -[SIGTabBarScrollViewCoordinator _rectForPageAtIndex:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}24@0:8Q16
// Implementation: 0x10b872890

// -[SIGTabBarScrollViewCoordinator selectPageAtIndex:animated:]
// Type encoding: v28@0:8Q16B24
// Implementation: 0x10b872974

// -[SIGTabBarScrollViewCoordinator tabSelected:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b872a2c

// -[SIGTabBarScrollViewCoordinator scrollViewWillBeginDragging:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b872a70

// -[SIGTabBarScrollViewCoordinator scrollViewDidEndDecelerating:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b872ae8

// -[SIGTabBarScrollViewCoordinator scrollViewDidScroll:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b872b2c

// -[SIGTabBarScrollViewCoordinator scrollViewWillEndDragging:withVelocity:targetContentOffset:]
// Type encoding: v48@0:8@16{CGPoint=dd}24N^{CGPoint=dd}40
// Implementation: 0x10b872cb4

// -[SIGTabBarScrollViewCoordinator scrollViewDidEndScrollingAnimation:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b872d54

// -[SIGTabBarScrollViewCoordinator _completeTransitionWithResult:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b872d80

// -[SIGTabBarScrollViewCoordinator _notifyPageAppearedAtIndex:disappearedPageIndex:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x10b872ee0

// -[SIGTabBarScrollViewCoordinator delegate]
// Type encoding: @16@0:8
// Implementation: 0x10b872fb4

// -[SIGTabBarScrollViewCoordinator selectedIndex]
// Type encoding: Q16@0:8
// Implementation: 0x10b872fcc

// -[SIGTabBarScrollViewCoordinator animatingToIndex]
// Type encoding: Q16@0:8
// Implementation: 0x10b872fd4

// -[SIGTabBarScrollViewCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b872fdc

@end
