// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDeckHierarchyImpl
// Superclass: NSObject
// Address: 0x112c695e8

@interface SCDeckHierarchyImpl

// Property: deckContainerFactory; attributes: T@"<SCDeckContainerFactory>",R,N,V_deckContainerFactory
// Property: deckTransitionEvent; attributes: T@"SCObservable",R,N,V_deckTransitionEvent
// Property: rootContainer; attributes: T@"<SCRootContainer>",R,N

// -[SCDeckHierarchyImpl initWithCurrentPageTracker:circumstanceEngine:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1000bf820

// -[SCDeckHierarchyImpl initWithParentVC:initialPage:currentPageTracker:circumstanceEngine:]
// Type encoding: @44@0:8@16i24@28@36
// Implementation: 0x10b08fcac

// -[SCDeckHierarchyImpl rootContainer]
// Type encoding: @16@0:8
// Implementation: 0x100593fd0

// -[SCDeckHierarchyImpl deckContainerFactory]
// Type encoding: @16@0:8
// Implementation: 0x10b08fe20

// -[SCDeckHierarchyImpl circumstanceEngine]
// Type encoding: @16@0:8
// Implementation: 0x10b08fe48

// -[SCDeckHierarchyImpl createComposerDeckHierarchyWithRuntimeProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b08fe70

// -[SCDeckHierarchyImpl createPrimaryDeckHierarchyRootContainerWithPresenter:]
// Type encoding: @24@0:8@16
// Implementation: 0x100593324

// -[SCDeckHierarchyImpl deckTransitionEvent]
// Type encoding: @16@0:8
// Implementation: 0x1000bfc48

// -[SCDeckHierarchyImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b08fecc

// +[SCDeckHierarchyImpl primaryDeckHierarchyWithCurrentPageTracker:circumstanceEngine:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1000bf7b4

// +[SCDeckHierarchyImpl nonPrimaryDeckHierarchyWithParentVC:currentPageTracker:circumstanceEngine:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10b08fb90

// +[SCDeckHierarchyImpl nonPrimaryDeckHierarchyWithParentVC:initialPage:currentPageTracker:circumstanceEngine:]
// Type encoding: @44@0:8@16i24@28@36
// Implementation: 0x10b08fc18

@end
