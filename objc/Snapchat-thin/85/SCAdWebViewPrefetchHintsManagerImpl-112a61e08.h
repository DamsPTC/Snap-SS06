// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdWebViewPrefetchHintsManagerImpl
// Superclass: NSObject
// Address: 0x112a61e08

@interface SCAdWebViewPrefetchHintsManagerImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdWebViewPrefetchHintsManagerImpl initWithPrefetchHintsDataSource:adConfigProvider:adConfigProviderV2:webBrowsingConfigProvider:grapheneRegistry:webViewPool:prefetchHintsLoadWorkerProvider:queuePerformer:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x105779c24

// -[SCAdWebViewPrefetchHintsManagerImpl preparePrefetchHints:adSwipeUpLikely:isPrefetchOptIn:adType:metadata:completion:]
// Type encoding: v56@0:8@16B24B28q32@40@?48
// Implementation: 0x105779e10

// -[SCAdWebViewPrefetchHintsManagerImpl prepareAndLoadPrefetchHintsFor:]
// Type encoding: v24@0:8@16
// Implementation: 0x105779f7c

// -[SCAdWebViewPrefetchHintsManagerImpl retrievePrefetchHintsWithPrefetchHintsId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10577a4e4

// -[SCAdWebViewPrefetchHintsManagerImpl prefetchHintsLoadComplete:webview:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10577a568

// -[SCAdWebViewPrefetchHintsManagerImpl _loadPrefetchHints:prefetchHintsId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10577a614

// -[SCAdWebViewPrefetchHintsManagerImpl _startLoadPrefetchHints:prefetchHintsId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10577a748

// -[SCAdWebViewPrefetchHintsManagerImpl _spawnWorkerForPrefetchHints:prefetchHintsId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10577a7ec

// -[SCAdWebViewPrefetchHintsManagerImpl _releaseWorker:]
// Type encoding: v24@0:8@16
// Implementation: 0x10577a894

// -[SCAdWebViewPrefetchHintsManagerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10577a89c

@end
