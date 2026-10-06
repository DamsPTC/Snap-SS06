// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMixerFetchEvent
// Superclass: NSObject
// Address: 0x112bfccb8

@interface SCMixerFetchEvent


// -[SCMixerFetchEvent copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10aec7450

// -[SCMixerFetchEvent hash]
// Type encoding: Q16@0:8
// Implementation: 0x10aec7474

// -[SCMixerFetchEvent internalInit]
// Type encoding: @16@0:8
// Implementation: 0x10aec7588

// -[SCMixerFetchEvent isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10aec75cc

// -[SCMixerFetchEvent matchRequest:response:failure:]
// Type encoding: v40@0:8@?16@?24@?32
// Implementation: 0x10aec77a8

// -[SCMixerFetchEvent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10aec7878

// +[SCMixerFetchEvent failureWithRequestParams:error:clientRequestId:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10aec7194

// +[SCMixerFetchEvent requestWithRequestedNamespaces:requestParams:downloadBandwidthEstimation:downloadBandwidthClass:reachability:]
// Type encoding: @48@0:8@16@24q32i40i44
// Implementation: 0x10aec7260

// +[SCMixerFetchEvent responseWithRequestedNamespaces:requestParams:parsedResponse:latencySec:clientRequestId:feedData:]
// Type encoding: @64@0:8@16@24@32d40@48@56
// Implementation: 0x10aec7314

@end
