// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMixerLogWorkflow
// Superclass: NSObject
// Address: 0x112bfb598

@interface SCMixerLogWorkflow


// -[SCMixerLogWorkflow initWithScheduleDataLogger:lensFetchTypeProvider:userLocationPermissionsManager:fetchEventsObservable:locationRequestObservable:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1003d7c04

// -[SCMixerLogWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10aeabdac

// +[SCMixerLogWorkflow _subscribeOnFetchEvents:dataLogger:disposeBag:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1003d7d44

// +[SCMixerLogWorkflow _handleMixerRequestNamespaces:requestParams:dataLogger:downloadBandwidthEstimation:downloadBandwidthClass:reachability:]
// Type encoding: v56@0:8@16@24@32q40i48i52
// Implementation: 0x10aeab4c0

// +[SCMixerLogWorkflow _cachedItemsCountFromRequestParams:namespaceId:]
// Type encoding: Q32@0:8@16@24
// Implementation: 0x10aeab7a8

// +[SCMixerLogWorkflow _handleMixerResponse:requestParams:latency:dataLogger:]
// Type encoding: v48@0:8@16@24d32@40
// Implementation: 0x10aeab924

// +[SCMixerLogWorkflow _handleMixerFailureWithParams:error:dataLogger:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10aeabaf0

// +[SCMixerLogWorkflow _subscribeOnLocationRequestEvents:scheduleDataLogger:lensFetchTypeProvider:userLocationPermissionsManager:disposeBag:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x1003d7e00

@end
