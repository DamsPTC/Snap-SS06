// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGtqNetworkController
// Superclass: NSObject
// Address: 0x112a7cb68

@interface SCGtqNetworkController

// Property: retriableRequestManager; attributes: T@"<SCRetriableRequestManaging>",R,N,V_retriableRequestManager
// Property: retriableViewRequestManager; attributes: T@"<SCRetriableRequestManaging>",R,N,V_retriableViewRequestManager
// Property: retriableCreationRequestManager; attributes: T@"<SCRetriableRequestManaging>",R,N,V_retriableCreationRequestManager
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGtqNetworkController initWithAdConfigProvider:lifecycleTracker:circumstanceEngine:sessionRequestManager:snapTokenProvider:trackRequestManager:viewTrackRequestManager:creationTrackRequestManager:userAdIdProvider:adsPreferencesProvider:networkConnectivityAnnouncer:]
// Type encoding: @104@0:8@16@24@32@40@48@56@64@72@80@88@96
// Implementation: 0x100b904d4

// -[SCGtqNetworkController fireGtqAdTrackProxyRequest:performer:success:failure:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x10591b268

// -[SCGtqNetworkController fireGtqCreationAdTrackProxyRequest:performer:success:failure:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x10591b590

// -[SCGtqNetworkController submitServeNetworkRequest:completionPerformer:success:failure:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x10591b8b8

// -[SCGtqNetworkController _getHost]
// Type encoding: @16@0:8
// Implementation: 0x10591bb88

// -[SCGtqNetworkController _getServePath]
// Type encoding: @16@0:8
// Implementation: 0x10591bbf4

// -[SCGtqNetworkController _getTrackViewPath]
// Type encoding: @16@0:8
// Implementation: 0x10591bc3c

// -[SCGtqNetworkController _getTrackCreationPath]
// Type encoding: @16@0:8
// Implementation: 0x10591bc8c

// -[SCGtqNetworkController _submitRequest:performer:latencyMeasure:failureMeasure:success:failure:requestType:]
// Type encoding: v72@0:8@16@24@32@40@?48@?56q64
// Implementation: 0x10591bcd4

// -[SCGtqNetworkController invalidate]
// Type encoding: v16@0:8
// Implementation: 0x10591c0c0

// -[SCGtqNetworkController submitRetryRequest:successQueue:failureQueue:successBlock:failureBlock:]
// Type encoding: v56@0:8@16@24@32@?40@?48
// Implementation: 0x10591c0f0

// -[SCGtqNetworkController retriableRequestManager]
// Type encoding: @16@0:8
// Implementation: 0x10591c2c4

// -[SCGtqNetworkController retriableViewRequestManager]
// Type encoding: @16@0:8
// Implementation: 0x10591c328

// -[SCGtqNetworkController retriableCreationRequestManager]
// Type encoding: @16@0:8
// Implementation: 0x10591c38c

// -[SCGtqNetworkController retrieveAdsCommonRequestData]
// Type encoding: @16@0:8
// Implementation: 0x10591c3f0

// -[SCGtqNetworkController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10591c400

@end
