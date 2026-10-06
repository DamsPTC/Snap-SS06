// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdNetworkManager
// Superclass: NSObject
// Address: 0x112aa5068

@interface SCAdNetworkManager

// Property: unlockablesRetriableRequestManager; attributes: T@"<SCRetriableRequestManaging>",R,N,V_unlockablesRetriableRequestManager
// Property: snapAdsRetriableRequestManager; attributes: T@"<SCRetriableRequestManaging>",R,N,V_snapAdsRetriableRequestManager
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdNetworkManager initWithAdConfigProvider:retroNetworkServices:lifecycleTracker:performer:httpMetadataService:httpRequestModifier:adConfigProviderV2:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x100b8e844

// -[SCAdNetworkManager submit:successBlock:failureBlock:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x105e7872c

// -[SCAdNetworkManager submit:useMainThread:successBlock:failureBlock:]
// Type encoding: v44@0:8@16B24@?28@?36
// Implementation: 0x105e7873c

// -[SCAdNetworkManager submitRetryRequest:successQueue:failureQueue:successBlock:failureBlock:]
// Type encoding: v56@0:8@16@24@32@?40@?48
// Implementation: 0x105e78db0

// -[SCAdNetworkManager cleanup]
// Type encoding: v16@0:8
// Implementation: 0x105e78fc4

// -[SCAdNetworkManager _createRetriableWithRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x105e79020

// -[SCAdNetworkManager _shouldUseCustomUserAgent:]
// Type encoding: B24@0:8@16
// Implementation: 0x105e790f0

// -[SCAdNetworkManager _httpMethodFromRequestType:]
// Type encoding: q24@0:8q16
// Implementation: 0x105e7911c

// -[SCAdNetworkManager _submitRequest:successBlock:failureBlock:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x105e79128

// -[SCAdNetworkManager _submitMatchaRequest:successBlock:failureBlock:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x105e793a0

// -[SCAdNetworkManager _submitRetriableRequest:successBlock:failureBlock:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x105e79b84

// -[SCAdNetworkManager unlockablesRetriableRequestManager]
// Type encoding: @16@0:8
// Implementation: 0x105e79cc8

// -[SCAdNetworkManager snapAdsRetriableRequestManager]
// Type encoding: @16@0:8
// Implementation: 0x105e79d3c

// -[SCAdNetworkManager snapAdsRetriableRequestManagerV3]
// Type encoding: @16@0:8
// Implementation: 0x105e79db0

// -[SCAdNetworkManager _createRetriableRequestManager:]
// Type encoding: @24@0:8q16
// Implementation: 0x105e79e24

// -[SCAdNetworkManager _logRetroNilInstanceMetric:]
// Type encoding: v24@0:8q16
// Implementation: 0x105e79ee4

// -[SCAdNetworkManager _overwriteRetryAndPersistBlock:statusCodes:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105e79fc8

// -[SCAdNetworkManager _parsePersistenceStatusCodes]
// Type encoding: @16@0:8
// Implementation: 0x105e7a13c

// -[SCAdNetworkManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105e7a1f8

@end
