// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapInsightsPresenter
// Superclass: NSObject
// Address: 0x112a00ab8

@interface SCSnapInsightsPresenter

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSnapInsightsPresenter initWithSnapInsightsScopeExposer:viewController:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104e2961c

// -[SCSnapInsightsPresenter launchInsightsWithProfileId:snapId:thumbnailUrl:timestamp:animated:]
// Type encoding: v56@0:8@16@24@32q40@48
// Implementation: 0x104e296b8

// -[SCSnapInsightsPresenter snapInsightsDidComplete]
// Type encoding: v16@0:8
// Implementation: 0x104e29a34

// -[SCSnapInsightsPresenter snapInsightsNeedsRemoval]
// Type encoding: v16@0:8
// Implementation: 0x104e29a90

// -[SCSnapInsightsPresenter providedViewControllerWithProvidedViewControllerBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104e29b6c

// -[SCSnapInsightsPresenter swipeInteractionPresenter:didStartPresentingWithSwipeDirection:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x104e29dd0

// -[SCSnapInsightsPresenter swipeInteractionPresenterDidFinishDismissing:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e29dd4

// -[SCSnapInsightsPresenter swipeInteractionPresenter:swipeEnabledWithDirection:]
// Type encoding: B32@0:8@16q24
// Implementation: 0x104e29dd8

// -[SCSnapInsightsPresenter pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x104e29de0

// -[SCSnapInsightsPresenter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104e29dec

@end
