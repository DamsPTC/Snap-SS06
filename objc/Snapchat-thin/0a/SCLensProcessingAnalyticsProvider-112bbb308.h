// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensProcessingAnalyticsProvider
// Superclass: NSObject
// Address: 0x112bbb308

@interface SCLensProcessingAnalyticsProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: profilingAnalyticsObservable; attributes: T@"SCObservable",R,N,V_profilingAnalyticsSubject
// Property: didChangeOptionContentObservable; attributes: T@"SCObservable",R,N,V_didChangeOptionContentSubject
// Property: creatorAnalyticsObservable; attributes: T@"SCObservable",R,N,V_creatorAnalyticsSubject
// Property: analyticsObservable; attributes: T@"SCObservable",R,N,V_analyticsSubject

// -[SCLensProcessingAnalyticsProvider initWithAnalyticsComponent:metricsComponent:applicator:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x108c8ce94

// -[SCLensProcessingAnalyticsProvider dealloc]
// Type encoding: v16@0:8
// Implementation: 0x108c8cfd4

// -[SCLensProcessingAnalyticsProvider metricsComponent:didReceiveMetrics:forLensId:]
// Type encoding: v184@0:8@16{LSAProfilingMetrics=ddddddddddddddddddB}24@176
// Implementation: 0x108c8d04c

// -[SCLensProcessingAnalyticsProvider analyticsComponent:didPrepareCreatorsEventAnalyticsReport:lensId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x108c8d0e8

// -[SCLensProcessingAnalyticsProvider analyticsComponent:didPrepareEventAnalyticsReport:lensId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x108c8d1fc

// -[SCLensProcessingAnalyticsProvider analyticsComponent:didPreparePerformanceAnalyticsReport:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108c8d528

// -[SCLensProcessingAnalyticsProvider creatorAnalyticsObservable]
// Type encoding: @16@0:8
// Implementation: 0x108c8d52c

// -[SCLensProcessingAnalyticsProvider analyticsObservable]
// Type encoding: @16@0:8
// Implementation: 0x108c8d534

// -[SCLensProcessingAnalyticsProvider didChangeOptionContentObservable]
// Type encoding: @16@0:8
// Implementation: 0x108c8d53c

// -[SCLensProcessingAnalyticsProvider profilingAnalyticsObservable]
// Type encoding: @16@0:8
// Implementation: 0x108c8d544

// -[SCLensProcessingAnalyticsProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108c8d54c

@end
