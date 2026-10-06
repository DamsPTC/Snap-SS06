// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdLifecycleTimestampsTracker
// Superclass: NSObject
// Address: 0x112a39638

@interface SCAdLifecycleTimestampsTracker

// Property: adWebviewLifecycleEventObservable; attributes: T@"SCObservable",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdLifecycleTimestampsTracker initWithAdConfigProvider:timeProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10546bad0

// -[SCAdLifecycleTimestampsTracker adWebviewLifecycleEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x10546bbb0

// -[SCAdLifecycleTimestampsTracker onLifecycleEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10546bbd8

// -[SCAdLifecycleTimestampsTracker _onPageLoaded:snapIndex:timestamp:]
// Type encoding: B40@0:8@16q24d32
// Implementation: 0x10546c090

// -[SCAdLifecycleTimestampsTracker _onClick:snapIndex:timestamp:]
// Type encoding: B40@0:8@16q24d32
// Implementation: 0x10546c154

// -[SCAdLifecycleTimestampsTracker _onAttachmentPresented:snapIndex:timestamp:]
// Type encoding: B40@0:8@16q24d32
// Implementation: 0x10546c218

// -[SCAdLifecycleTimestampsTracker _onNavigationStart:snapIndex:timestamp:]
// Type encoding: B40@0:8@16q24d32
// Implementation: 0x10546c2dc

// -[SCAdLifecycleTimestampsTracker _onNavigationFinish:snapIndex:timestamp:]
// Type encoding: B40@0:8@16q24d32
// Implementation: 0x10546c3a0

// -[SCAdLifecycleTimestampsTracker _onDismiss:snapIndex:timestamp:]
// Type encoding: B40@0:8@16q24d32
// Implementation: 0x10546c464

// -[SCAdLifecycleTimestampsTracker _onView:snapIndex:timestamp:]
// Type encoding: B40@0:8@16q24d32
// Implementation: 0x10546c528

// -[SCAdLifecycleTimestampsTracker _onExitAd:snapIndex:timestamp:]
// Type encoding: B40@0:8@16q24d32
// Implementation: 0x10546c5ec

// -[SCAdLifecycleTimestampsTracker _onHtmlDownloaded:snapIndex:timestamp:]
// Type encoding: B40@0:8@16q24d32
// Implementation: 0x10546c6b0

// -[SCAdLifecycleTimestampsTracker _onDomContentLoaded:snapIndex:timestamp:]
// Type encoding: B40@0:8@16q24d32
// Implementation: 0x10546c774

// -[SCAdLifecycleTimestampsTracker _onPaint:snapIndex:timestamp:]
// Type encoding: B40@0:8@16q24d32
// Implementation: 0x10546c838

// -[SCAdLifecycleTimestampsTracker _onFullyLoaded:snapIndex:timestamp:]
// Type encoding: B40@0:8@16q24d32
// Implementation: 0x10546c8fc

// -[SCAdLifecycleTimestampsTracker _onFirstGA:snapIndex:timestampMs:]
// Type encoding: B40@0:8@16q24d32
// Implementation: 0x10546c9c0

// -[SCAdLifecycleTimestampsTracker onTopSnapPlaybackBegin:snapIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10546ca84

// -[SCAdLifecycleTimestampsTracker updateForAdIdentifier:adResponseParseCompleteTimestampInMillis:adInsertionTimestampInMillis:]
// Type encoding: v40@0:8@16d24d32
// Implementation: 0x10546cb38

// -[SCAdLifecycleTimestampsTracker adLifecycleTimestampsArrayForAdIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x10546cc90

// -[SCAdLifecycleTimestampsTracker adLifecycleTimestampsForAdIdentifier:snapIndex:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10546cd40

// -[SCAdLifecycleTimestampsTracker resetForAdIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x10546cdac

// -[SCAdLifecycleTimestampsTracker _getOrCreateAdLifecycleTimestampBuilderForAdIdentifier:snapIndex:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10546ce0c

// -[SCAdLifecycleTimestampsTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10546cf7c

@end
