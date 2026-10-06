// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMappedRoutingDefinition
// Superclass: NSObject
// Address: 0x112c724b8

@interface SCMappedRoutingDefinition

// Property: urlMatchPatterns; attributes: T@"NSArray",R,C,N,V_urlMatchPatterns
// Property: urlPredicates; attributes: T@"NSArray",R,C,N,V_urlPredicates
// Property: reachabilityCdnHostMap; attributes: T@"NSDictionary",R,C,N,V_reachabilityCdnHostMap

// -[SCMappedRoutingDefinition init:withRouteRules:withRouteInfo:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10b276670

// -[SCMappedRoutingDefinition initWithCdnHostMap:withReachabilityCdnHostMap:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1001b1ef4

// -[SCMappedRoutingDefinition initPredicates]
// Type encoding: v16@0:8
// Implementation: 0x1005a2dd0

// -[SCMappedRoutingDefinition getRoutedHost:withReachability:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1005a2c74

// -[SCMappedRoutingDefinition getReachabilityCdnHostMap:withRouteInfo:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b27673c

// -[SCMappedRoutingDefinition urlMatchPatterns]
// Type encoding: @16@0:8
// Implementation: 0x10b276988

// -[SCMappedRoutingDefinition urlPredicates]
// Type encoding: @16@0:8
// Implementation: 0x10b276990

// -[SCMappedRoutingDefinition reachabilityCdnHostMap]
// Type encoding: @16@0:8
// Implementation: 0x10b276998

// -[SCMappedRoutingDefinition .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1009ad4a4

@end
