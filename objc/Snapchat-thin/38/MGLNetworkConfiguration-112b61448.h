// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: MGLNetworkConfiguration
// Superclass: NSObject
// Address: 0x112b61448

@interface MGLNetworkConfiguration

// Property: events; attributes: T@"NSMutableDictionary",&,N,V_events
// Property: metricsDelegate; attributes: T@"<MGLNetworkConfigurationMetricsDelegate>",W,N,V_metricsDelegate
// Property: eventsQueue; attributes: T@"NSObject<OS_dispatch_queue>",&,N,V_eventsQueue
// Property: delegate; attributes: T@"<MGLNetworkConfigurationDelegate>",W,N,V_delegate
// Property: sessionConfiguration; attributes: T@"NSURLSessionConfiguration",&
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[MGLNetworkConfiguration init]
// Type encoding: @16@0:8
// Implementation: 0x107246770

// -[MGLNetworkConfiguration resetNativeNetworkManagerDelegate]
// Type encoding: v16@0:8
// Implementation: 0x1072468cc

// -[MGLNetworkConfiguration sessionForNetworkManager:]
// Type encoding: @24@0:8@16
// Implementation: 0x107246974

// -[MGLNetworkConfiguration sessionConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x107246a30

// -[MGLNetworkConfiguration setSessionConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x107246a68

// -[MGLNetworkConfiguration startDownloadEvent:type:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107246ae8

// -[MGLNetworkConfiguration stopDownloadEventForResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x107246bf8

// -[MGLNetworkConfiguration cancelDownloadEventForResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x107246c00

// -[MGLNetworkConfiguration debugLog:]
// Type encoding: v24@0:8@16
// Implementation: 0x107246c0c

// -[MGLNetworkConfiguration errorLog:]
// Type encoding: v24@0:8@16
// Implementation: 0x107246c10

// -[MGLNetworkConfiguration sendEventForURLResponse:withAction:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107246cf0

// -[MGLNetworkConfiguration eventAttributesForURL:withAction:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107246e90

// -[MGLNetworkConfiguration eventDictionaryForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x1072474d0

// -[MGLNetworkConfiguration setEventDictionary:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107247628

// -[MGLNetworkConfiguration removeEventDictionaryForKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x10724771c

// -[MGLNetworkConfiguration delegate]
// Type encoding: @16@0:8
// Implementation: 0x1072477f4

// -[MGLNetworkConfiguration setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10724780c

// -[MGLNetworkConfiguration events]
// Type encoding: @16@0:8
// Implementation: 0x107247818

// -[MGLNetworkConfiguration setEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x107247820

// -[MGLNetworkConfiguration metricsDelegate]
// Type encoding: @16@0:8
// Implementation: 0x107247840

// -[MGLNetworkConfiguration setMetricsDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107247858

// -[MGLNetworkConfiguration eventsQueue]
// Type encoding: @16@0:8
// Implementation: 0x107247864

// -[MGLNetworkConfiguration setEventsQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x10724786c

// -[MGLNetworkConfiguration .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10724788c

// +[MGLNetworkConfiguration testing_clearNativeNetworkManagerDelegate]
// Type encoding: v16@0:8
// Implementation: 0x1072478d8

// +[MGLNetworkConfiguration testing_nativeNetworkManagerDelegate]
// Type encoding: @16@0:8
// Implementation: 0x107247918

// +[MGLNetworkConfiguration sharedManager]
// Type encoding: @16@0:8
// Implementation: 0x107246820

// +[MGLNetworkConfiguration defaultSessionConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x107246910

@end
