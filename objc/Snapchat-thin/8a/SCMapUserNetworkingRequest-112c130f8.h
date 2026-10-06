// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapUserNetworkingRequest
// Superclass: NSObject
// Address: 0x112c130f8

@interface SCMapUserNetworkingRequest

// Property: url; attributes: T@"NSURL",R,N,V_url
// Property: message; attributes: T@"GPBMessage",R,N,V_message
// Property: headers; attributes: T@"NSDictionary",R,N,V_headers
// Property: responseType; attributes: T#,R,N,V_responseType
// Property: visibility; attributes: TQ,R,N,V_visibility
// Property: cacheConfiguration; attributes: T@"SCMapUserNetworkingCacheConfiguration",R,N,V_cacheConfiguration

// -[SCMapUserNetworkingRequest initWithUrl:message:headers:cacheConfiguration:responseType:visibility:]
// Type encoding: @64@0:8@16@24@32@40#48Q56
// Implementation: 0x10af19c48

// -[SCMapUserNetworkingRequest url]
// Type encoding: @16@0:8
// Implementation: 0x10af19d60

// -[SCMapUserNetworkingRequest message]
// Type encoding: @16@0:8
// Implementation: 0x10af19d68

// -[SCMapUserNetworkingRequest headers]
// Type encoding: @16@0:8
// Implementation: 0x10af19d70

// -[SCMapUserNetworkingRequest responseType]
// Type encoding: #16@0:8
// Implementation: 0x10af19d78

// -[SCMapUserNetworkingRequest visibility]
// Type encoding: Q16@0:8
// Implementation: 0x10af19d80

// -[SCMapUserNetworkingRequest cacheConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x10af19d88

// -[SCMapUserNetworkingRequest .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10af19d90

// +[SCMapUserNetworkingRequest requestWithUrl:message:responseType:]
// Type encoding: @40@0:8@16@24#32
// Implementation: 0x10af19b2c

// +[SCMapUserNetworkingRequest requestWithUrl:message:cacheConfiguration:responseType:]
// Type encoding: @48@0:8@16@24@32#40
// Implementation: 0x10af19bac

@end
