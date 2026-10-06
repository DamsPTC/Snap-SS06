// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPageLoadMetricManagerImpl
// Superclass: NSObject
// Address: 0x112adc3d8

@interface SCPageLoadMetricManagerImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPageLoadMetricManagerImpl initWithMetricReport:applicationLifecycleEvents:currentPageEvent:featureStartupEventBus:deckTransitionEvents:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1000e3d60

// -[SCPageLoadMetricManagerImpl userEnterPage:]
// Type encoding: v24@0:8@16
// Implementation: 0x100878320

// -[SCPageLoadMetricManagerImpl viewDidLoad:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063737fc

// -[SCPageLoadMetricManagerImpl pageIsVisible:]
// Type encoding: v24@0:8@16
// Implementation: 0x10637382c

// -[SCPageLoadMetricManagerImpl pageDidDisappear:]
// Type encoding: v24@0:8@16
// Implementation: 0x10637385c

// -[SCPageLoadMetricManagerImpl pageLoadCompletes:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c6c4e4

// -[SCPageLoadMetricManagerImpl pageLoadCompletes:customSplits:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100c6c4ec

// -[SCPageLoadMetricManagerImpl cancelPageLoad:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063738a8

// -[SCPageLoadMetricManagerImpl injectionStart:]
// Type encoding: v24@0:8@16
// Implementation: 0x106373904

// -[SCPageLoadMetricManagerImpl injectionEnd:]
// Type encoding: v24@0:8@16
// Implementation: 0x106373934

// -[SCPageLoadMetricManagerImpl dataLoadStart:]
// Type encoding: v24@0:8@16
// Implementation: 0x100bae58c

// -[SCPageLoadMetricManagerImpl dataLoadEnd:]
// Type encoding: v24@0:8@16
// Implementation: 0x100bf4340

// -[SCPageLoadMetricManagerImpl viewModelCreationStart:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063739c0

// -[SCPageLoadMetricManagerImpl viewModelCreationEnd:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063739f0

// -[SCPageLoadMetricManagerImpl sectionStart:page:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106373a20

// -[SCPageLoadMetricManagerImpl sectionEnd:page:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106373a80

// -[SCPageLoadMetricManagerImpl _pageLoadMetric:]
// Type encoding: @24@0:8@16
// Implementation: 0x10087841c

// -[SCPageLoadMetricManagerImpl _logOnAppBackground]
// Type encoding: v16@0:8
// Implementation: 0x106373ae0

// -[SCPageLoadMetricManagerImpl _onAppForeground]
// Type encoding: v16@0:8
// Implementation: 0x106373af4

// -[SCPageLoadMetricManagerImpl _onDeckWillTransitionWithData:]
// Type encoding: v24@0:8@16
// Implementation: 0x100878170

// -[SCPageLoadMetricManagerImpl _invalidatePageLoad:abandonType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106373b5c

// -[SCPageLoadMetricManagerImpl _setCurrentLoadingPage:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008783bc

// -[SCPageLoadMetricManagerImpl _clearLoadingPage]
// Type encoding: v16@0:8
// Implementation: 0x100c6c5d4

// -[SCPageLoadMetricManagerImpl _onPageEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1000e4674

// -[SCPageLoadMetricManagerImpl _isLoadingPage:]
// Type encoding: B24@0:8@16
// Implementation: 0x106373c1c

// -[SCPageLoadMetricManagerImpl _getPageFromName:]
// Type encoding: q24@0:8@16
// Implementation: 0x100878800

// -[SCPageLoadMetricManagerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106373c84

@end
