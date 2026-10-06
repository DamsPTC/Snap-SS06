// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SIGHeader
// Superclass: UIView
// Address: 0x112ce78a8

@interface SIGHeader

// Property: useNewAnimation; attributes: TB,N,V_useNewAnimation
// Property: currentHeaderItem; attributes: T@"SIGHeaderItem",&,N
// Property: headerItemViewCache; attributes: T@"NSMutableDictionary",&,N,V_headerItemViewCache
// Property: titleTextField; attributes: T@"UITextField",R,N
// Property: searchField; attributes: T@"SIGTextField",R,N
// Property: tooltipPresenter; attributes: T@"<SIGTooltipPresenter>",W,N,V_tooltipPresenter
// Property: delegate; attributes: T@"<SIGHeaderDelegate>",W,N,V_delegate
// Property: contentInset; attributes: T{UIEdgeInsets=dddd},N
// Property: scrollViewVerticalOffset; attributes: Tq,N
// Property: maximumHeight; attributes: Td,R,N
// Property: maximumHeightWithFullBottomAccessoryRow; attributes: Td,R,N
// Property: scrollViewScrollingToTopOnTappingStatusBar; attributes: TB,R,N
// Property: headerAssociateBackgroundDelegate; attributes: T@"<SIGHeaderAssociateBackgroundDelegate>",W,N,V_headerAssociateBackgroundDelegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SIGHeader initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x10057cb14

// -[SIGHeader dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10b850018

// -[SIGHeader _passThroughTouchEventsChanged:]
// Type encoding: v20@0:8B16
// Implementation: 0x100587358

// -[SIGHeader _showsSectionTitleChanged:]
// Type encoding: v20@0:8B16
// Implementation: 0x1005873bc

// -[SIGHeader _stopObservingHeaderItem]
// Type encoding: v16@0:8
// Implementation: 0x100587038

// -[SIGHeader _startObservingHeaderItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1005870c4

// -[SIGHeader scrollViewContentOffsetDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b85005c

// -[SIGHeader currentHeaderItem]
// Type encoding: @16@0:8
// Implementation: 0x10057db28

// -[SIGHeader setCurrentHeaderItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x10057dc08

// -[SIGHeader titleTextField]
// Type encoding: @16@0:8
// Implementation: 0x10b8500b8

// -[SIGHeader searchField]
// Type encoding: @16@0:8
// Implementation: 0x10b8500c8

// -[SIGHeader contentInset]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x10b8500d8

// -[SIGHeader setContentInset:]
// Type encoding: v48@0:8{UIEdgeInsets=dddd}16
// Implementation: 0x10b8500e8

// -[SIGHeader setTooltipPresenter:]
// Type encoding: v24@0:8@16
// Implementation: 0x100588648

// -[SIGHeader scrollViewVerticalOffset]
// Type encoding: q16@0:8
// Implementation: 0x10b8500f8

// -[SIGHeader setScrollViewVerticalOffset:]
// Type encoding: v24@0:8q16
// Implementation: 0x10057da6c

// -[SIGHeader maximumHeight]
// Type encoding: d16@0:8
// Implementation: 0x1008bf470

// -[SIGHeader maximumHeightWithFullBottomAccessoryRow]
// Type encoding: d16@0:8
// Implementation: 0x10b850108

// -[SIGHeader scrollViewScrollingToTopOnTappingStatusBar]
// Type encoding: B16@0:8
// Implementation: 0x10b850154

// -[SIGHeader hitTest:withEvent:]
// Type encoding: @40@0:8{CGPoint=dd}16@32
// Implementation: 0x10b850164

// -[SIGHeader pointInside:withEvent:]
// Type encoding: B40@0:8{CGPoint=dd}16@32
// Implementation: 0x10b850224

// -[SIGHeader _stylize:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10058725c

// -[SIGHeader headerItemView:heightDidChange:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x100587698

// -[SIGHeader setHeaderItemViewCache:]
// Type encoding: v24@0:8@16
// Implementation: 0x10058dab8

// -[SIGHeader disassociateBackgroundView]
// Type encoding: @16@0:8
// Implementation: 0x10b8502c4

// -[SIGHeader associateBackgroundView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10057d388

// -[SIGHeader animateInHeaderItem:withStyle:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10057dc88

// -[SIGHeader completeAnimation:]
// Type encoding: v20@0:8B16
// Implementation: 0x100587a3c

// -[SIGHeader preCreateHeaderItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b850314

// -[SIGHeader setUpAnimatedTransitionToHeaderItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x10057de00

// -[SIGHeader performAnimationsWithStyle:]
// Type encoding: v24@0:8q16
// Implementation: 0x100586f70

// -[SIGHeader finishTransitionCompleted:]
// Type encoding: v20@0:8B16
// Implementation: 0x100587a40

// -[SIGHeader headerItem:didChangeStyle:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x100587254

// -[SIGHeader headerItem:didChangeShowsSectionTitle:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1005873b4

// -[SIGHeader headerItem:didChangePassThroughTouchEvents:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x100587350

// -[SIGHeader useNewAnimation]
// Type encoding: B16@0:8
// Implementation: 0x10b850400

// -[SIGHeader setUseNewAnimation:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b850410

// -[SIGHeader headerItemViewCache]
// Type encoding: @16@0:8
// Implementation: 0x10b850420

// -[SIGHeader tooltipPresenter]
// Type encoding: @16@0:8
// Implementation: 0x10b850430

// -[SIGHeader delegate]
// Type encoding: @16@0:8
// Implementation: 0x10b850450

// -[SIGHeader setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10058873c

// -[SIGHeader headerAssociateBackgroundDelegate]
// Type encoding: @16@0:8
// Implementation: 0x10b850470

// -[SIGHeader setHeaderAssociateBackgroundDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b850490

// -[SIGHeader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b8504a4

@end
