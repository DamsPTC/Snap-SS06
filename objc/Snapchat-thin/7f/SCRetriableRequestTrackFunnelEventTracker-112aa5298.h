// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRetriableRequestTrackFunnelEventTracker
// Superclass: NSObject
// Address: 0x112aa5298

@interface SCRetriableRequestTrackFunnelEventTracker


// -[SCRetriableRequestTrackFunnelEventTracker initWithAdConfigProvider:adConfigProviderV2:trackFunnelEventTracker:timeProvider:trackMetricsManager:version:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x1003d22cc

// -[SCRetriableRequestTrackFunnelEventTracker logTrackFunnelEventNetworkStartWithRequest:attemptCount:]
// Type encoding: B32@0:8@16q24
// Implementation: 0x105e7d890

// -[SCRetriableRequestTrackFunnelEventTracker logTrackFunnelEventNetworkEndWithRequest:success:statusCode:attemptCount:]
// Type encoding: v44@0:8@16B24q28q36
// Implementation: 0x105e7db70

// -[SCRetriableRequestTrackFunnelEventTracker logTrackFunnelEventDurableJobStartWithRequest:state:attemptCount:]
// Type encoding: v40@0:8@16Q24q32
// Implementation: 0x105e7dc3c

// -[SCRetriableRequestTrackFunnelEventTracker logTrackFunnelEventDurableJobSubmittedWithRequest:attemptCount:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105e7dcf8

// -[SCRetriableRequestTrackFunnelEventTracker _adTrackCommonWithRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x105e7ddac

// -[SCRetriableRequestTrackFunnelEventTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105e7df30

@end
