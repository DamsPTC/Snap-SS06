// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaScrollViewLayoutManager
// Superclass: NSObject
// Address: 0x112adb5a0

@interface SCOperaScrollViewLayoutManager

// Property: delegate; attributes: T@"<SCOperaScrollViewLayoutManagerDelegate>",W,N,V_delegate
// Property: scrollViewDataProvider; attributes: T@"<SCOperaScrollViewDataProviding>",W,N,V_scrollViewDataProvider
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCOperaScrollViewLayoutManager layoutPageViewControllers:viewModels:dimensionToLayoutDirectionMap:currentViewModel:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10631f96c

// -[SCOperaScrollViewLayoutManager _layoutPageViewControllers:loadedViewModels:currentViewModel:contentOffsetForCurrentViewModel:nextOperaPageOffset:]
// Type encoding: v72@0:8@16@24@32{CGPoint=dd}40{CGPoint=dd}56
// Implementation: 0x10631fc00

// -[SCOperaScrollViewLayoutManager _addPageViewControllers:originOffset:nextOffsetGenerator:]
// Type encoding: v48@0:8@16{CGPoint=dd}24@?40
// Implementation: 0x10631fcd0

// -[SCOperaScrollViewLayoutManager delegate]
// Type encoding: @16@0:8
// Implementation: 0x10631fe34

// -[SCOperaScrollViewLayoutManager setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10631fe4c

// -[SCOperaScrollViewLayoutManager scrollViewDataProvider]
// Type encoding: @16@0:8
// Implementation: 0x10631fe58

// -[SCOperaScrollViewLayoutManager setScrollViewDataProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x10631fe70

// -[SCOperaScrollViewLayoutManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10631fe7c

@end
