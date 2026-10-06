// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapNavigationRouteFetcher
// Superclass: NSObject
// Address: 0x112af5928

@interface SCMapNavigationRouteFetcher

// Property: mapNavigationRouteGRPCService; attributes: T@"UNIValhalla",&,N,V_mapNavigationRouteGRPCService

// -[SCMapNavigationRouteFetcher initWithUnifiedGRPCClientFactory:workerQueue:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106753fb0

// -[SCMapNavigationRouteFetcher mapNavigationRouteGRPCService]
// Type encoding: @16@0:8
// Implementation: 0x106754054

// -[SCMapNavigationRouteFetcher getRouteWithRequest:handler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106754140

// -[SCMapNavigationRouteFetcher getRouteWithStartLocation:endLocation:routeMode:completion:]
// Type encoding: v64@0:8{CLLocationCoordinate2D=dd}16{CLLocationCoordinate2D=dd}32q48@?56
// Implementation: 0x10675429c

// -[SCMapNavigationRouteFetcher setMapNavigationRouteGRPCService:]
// Type encoding: v24@0:8@16
// Implementation: 0x1067544b4

// -[SCMapNavigationRouteFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1067544e4

@end
