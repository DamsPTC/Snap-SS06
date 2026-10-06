// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAuthMetricsLogger
// Superclass: NSObject
// Address: 0x112a32f68

@interface SCAuthMetricsLogger

// Property: graphene; attributes: T@"SCGraphene",&,N,V_graphene

// -[SCAuthMetricsLogger initWithGrapheneRegistry:]
// Type encoding: @24@0:8@16
// Implementation: 0x1053e1cf4

// -[SCAuthMetricsLogger logHTTPResponseForEndpoint:statusCode:metadata:]
// Type encoding: v40@0:8@16Q24@32
// Implementation: 0x1053e1d84

// -[SCAuthMetricsLogger logAuthError:forFeature:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1053e1ed0

// -[SCAuthMetricsLogger graphene]
// Type encoding: @16@0:8
// Implementation: 0x1053e1fb4

// -[SCAuthMetricsLogger setGraphene:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053e1fbc

// -[SCAuthMetricsLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1053e1fec

@end
