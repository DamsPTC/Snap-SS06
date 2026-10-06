// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCommerceGrapheneNetworkLogger
// Superclass: NSObject
// Address: 0x112b70768

@interface SCCommerceGrapheneNetworkLogger


// -[SCCommerceGrapheneNetworkLogger initWithGrapheneRegistry:]
// Type encoding: @24@0:8@16
// Implementation: 0x107af3908

// -[SCCommerceGrapheneNetworkLogger initWithCommerceGraphene:]
// Type encoding: @24@0:8@16
// Implementation: 0x107af3950

// -[SCCommerceGrapheneNetworkLogger logGrapheneNetworkRequestWithAction:endpoint:context:latency:statusCode:requestSize:responseSize:protoErrorCode:]
// Type encoding: v80@0:8Q16Q24Q32d40q48q56q64@72
// Implementation: 0x107af39c4

// -[SCCommerceGrapheneNetworkLogger logGRPCRequestWithService:additionalContext:countryCode:latency:requestSize:responseSize:errorCode:]
// Type encoding: v72@0:8Q16@24@32q40q48q56@64
// Implementation: 0x107af3c08

// -[SCCommerceGrapheneNetworkLogger logAPIRequestWithLatency:requestType:context:]
// Type encoding: v40@0:8d16@24Q32
// Implementation: 0x107af3d68

// -[SCCommerceGrapheneNetworkLogger logAPIRequestWithRequestPayloadSize:responsePayloadSize:requestType:context:]
// Type encoding: v48@0:8q16q24@32Q40
// Implementation: 0x107af3ddc

// -[SCCommerceGrapheneNetworkLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107af3ea4

@end
