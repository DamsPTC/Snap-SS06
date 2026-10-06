// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBlizzardRtusEventRouter
// Superclass: NSObject
// Address: 0x112b121b8

@interface SCBlizzardRtusEventRouter

// Property: graphene; attributes: T@"SCGrapheneBlizzardMetric2",&,N,V_graphene
// Property: rtusEventIdProvider; attributes: T@"SCBlizzardRtusEventIdProvider",&,N,V_rtusEventIdProvider
// Property: rtusConfigProvider; attributes: T@"SCLazy",&,N,V_rtusConfigProvider
// Property: rtusClientCacheManager; attributes: T@"SCLazy",&,N,V_rtusClientCacheManager

// -[SCBlizzardRtusEventRouter initWithRtusConfigProvider:rtusEventIdProvider:graphene:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10028103c

// -[SCBlizzardRtusEventRouter maybeRouteEventToCache:sessionId:logQueueName:logQueueSequenceId:]
// Type encoding: v48@0:8@16@24@32q40
// Implementation: 0x1003f673c

// -[SCBlizzardRtusEventRouter _reportSessionIdNilErrorForEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ae2094

// -[SCBlizzardRtusEventRouter _reportClientCacheManagerNilForRtusEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ae20a4

// -[SCBlizzardRtusEventRouter _routeRtusEventToProductQueues:eventProperties:eventId:clientTs:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106ae20f8

// -[SCBlizzardRtusEventRouter _getRtusEventFromEventBase:eventId:clientTs:product:]
// Type encoding: @48@0:8@16@24@32q40
// Implementation: 0x106ae2330

// -[SCBlizzardRtusEventRouter setRtusClientCacheManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x1002886cc

// -[SCBlizzardRtusEventRouter graphene]
// Type encoding: @16@0:8
// Implementation: 0x106ae2468

// -[SCBlizzardRtusEventRouter setGraphene:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ae2470

// -[SCBlizzardRtusEventRouter rtusEventIdProvider]
// Type encoding: @16@0:8
// Implementation: 0x106ae24a0

// -[SCBlizzardRtusEventRouter setRtusEventIdProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ae24a8

// -[SCBlizzardRtusEventRouter rtusConfigProvider]
// Type encoding: @16@0:8
// Implementation: 0x106ae24d8

// -[SCBlizzardRtusEventRouter setRtusConfigProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ae24e0

// -[SCBlizzardRtusEventRouter rtusClientCacheManager]
// Type encoding: @16@0:8
// Implementation: 0x106ae2510

// -[SCBlizzardRtusEventRouter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ae2518

@end
