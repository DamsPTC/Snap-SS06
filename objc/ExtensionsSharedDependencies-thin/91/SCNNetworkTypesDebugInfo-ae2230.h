// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNNetworkTypesDebugInfo
// Superclass: NSObject
// Address: 0xae2230

@interface SCNNetworkTypesDebugInfo

// Property: estimatedRTTInMs; attributes: Tq,R,N,V_estimatedRTTInMs
// Property: longestCronetCallbackIntervalInMs; attributes: Tq,R,N,V_longestCronetCallbackIntervalInMs
// Property: calculatedDyanmicTiemoutInMs; attributes: Tq,R,N,V_calculatedDyanmicTiemoutInMs
// Property: networkQuality; attributes: Ti,R,N,V_networkQuality
// Property: contextUpdateLifecycle; attributes: T@"NSArray",R,N,V_contextUpdateLifecycle
// Property: latencyEstimation; attributes: T@"NSArray",R,N,V_latencyEstimation
// Property: isThrottled; attributes: TB,R,N,V_isThrottled

// -[SCNNetworkTypesDebugInfo initWithEstimatedRTTInMs:longestCronetCallbackIntervalInMs:calculatedDyanmicTiemoutInMs:networkQuality:contextUpdateLifecycle:latencyEstimation:isThrottled:]
// Type encoding: @64@0:8q16q24q32i40@44@52B60
// Implementation: 0x636008

// -[SCNNetworkTypesDebugInfo estimatedRTTInMs]
// Type encoding: q16@0:8
// Implementation: 0x636118

// -[SCNNetworkTypesDebugInfo longestCronetCallbackIntervalInMs]
// Type encoding: q16@0:8
// Implementation: 0x636120

// -[SCNNetworkTypesDebugInfo calculatedDyanmicTiemoutInMs]
// Type encoding: q16@0:8
// Implementation: 0x636128

// -[SCNNetworkTypesDebugInfo networkQuality]
// Type encoding: i16@0:8
// Implementation: 0x636130

// -[SCNNetworkTypesDebugInfo contextUpdateLifecycle]
// Type encoding: @16@0:8
// Implementation: 0x636138

// -[SCNNetworkTypesDebugInfo latencyEstimation]
// Type encoding: @16@0:8
// Implementation: 0x636140

// -[SCNNetworkTypesDebugInfo isThrottled]
// Type encoding: B16@0:8
// Implementation: 0x636148

// -[SCNNetworkTypesDebugInfo .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x636150

@end
