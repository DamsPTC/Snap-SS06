// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNNetworkApiNetworkApi
// Superclass: NSObject
// Address: 0x112c75618

@interface SCNNetworkApiNetworkApi


// -[SCNNetworkApiNetworkApi initWithCpp:]
// Type encoding: @24@0:8r^v16
// Implementation: 0x10066a6d0

// -[SCNNetworkApiNetworkApi submit:downloadFilePath:rankingSignals:executor:callback:uploadDataProvider:retryConfig:timeoutMillis:bytesConsumptionType:]
// Type encoding: v88@0:8@16@24@32@40@48@56@64@72q80
// Implementation: 0x100679fcc

// -[SCNNetworkApiNetworkApi readMoreBytes:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b2d4d30

// -[SCNNetworkApiNetworkApi update:rankingSignals:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10b2d4d80

// -[SCNNetworkApiNetworkApi cancel:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b2d4e08

// -[SCNNetworkApiNetworkApi startNetLog]
// Type encoding: B16@0:8
// Implementation: 0x10b2d4e58

// -[SCNNetworkApiNetworkApi stopNetLog]
// Type encoding: v16@0:8
// Implementation: 0x10b2d4ea8

// -[SCNNetworkApiNetworkApi getNetworkQueueState]
// Type encoding: @16@0:8
// Implementation: 0x10b2d4ef4

// -[SCNNetworkApiNetworkApi getNetLogPathList]
// Type encoding: @16@0:8
// Implementation: 0x10b2d4f7c

// -[SCNNetworkApiNetworkApi addNetworkQualityEstimatorListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x100670ab8

// -[SCNNetworkApiNetworkApi removeNetworkQualityEstimatorListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2d5004

// -[SCNNetworkApiNetworkApi getEstimatedThroughputBps:hostname:]
// Type encoding: q32@0:8q16@24
// Implementation: 0x10b2d5088

// -[SCNNetworkApiNetworkApi getNQEService]
// Type encoding: @16@0:8
// Implementation: 0x100786cb4

// -[SCNNetworkApiNetworkApi registerAppStateChangeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10066a854

// -[SCNNetworkApiNetworkApi .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b2d512c

// -[SCNNetworkApiNetworkApi .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10066a690

// +[SCNNetworkApiNetworkApi createInstance:bandwidthChangeNotifier:deckTransitionEventNotifier:networkDispatchQueue:networkApiConfig:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1005c95c8

// +[SCNNetworkApiNetworkApi getCronetStreamEngineAndInitCronet:]
// Type encoding: q24@0:8@16
// Implementation: 0x1000fba30

@end
