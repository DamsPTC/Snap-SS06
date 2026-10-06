// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensDataFetcherFactory
// Superclass: NSObject
// Address: 0x112c6d378

@interface SCLensDataFetcherFactory

// Property: cachedMainDataFetcher; attributes: T@"SCLensDataFetcher",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensDataFetcherFactory initWithFeatureSettingsService:downloadTracker:cacheClearTracker:urlDataFetcher:operationsFactory:lensUserProvider:lensIconRepository:circumstanceEngine:networkConnectivityMonitor:redownloadLogger:fetchTypeProvider:performerProvider:resourceResolver:lensDataConfig:]
// Type encoding: @128@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120
// Implementation: 0x100bac058

// -[SCLensDataFetcherFactory cachedMainDataFetcher]
// Type encoding: @16@0:8
// Implementation: 0x100bad0f8

// -[SCLensDataFetcherFactory unrestrictedLensDataFetcher]
// Type encoding: @16@0:8
// Implementation: 0x10b0ceee8

// -[SCLensDataFetcherFactory lensDataFetcherWithStrategyFactory:lensDataFetcherUIState:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b0cef40

// -[SCLensDataFetcherFactory _lensDataFetcherWithStrategyFactory:lensDataFetcherUIState:acfEnabled:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x100badaec

// -[SCLensDataFetcherFactory resetWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b0cef48

// -[SCLensDataFetcherFactory _fetcherStrategyFactoryWithUIState:]
// Type encoding: @24@0:8@16
// Implementation: 0x100bad430

// -[SCLensDataFetcherFactory .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0cef50

// +[SCLensDataFetcherFactory _visibleLensesPerformerWithProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x100bac9b0

@end
