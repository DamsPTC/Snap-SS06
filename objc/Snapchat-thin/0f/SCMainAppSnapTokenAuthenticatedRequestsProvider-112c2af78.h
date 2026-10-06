// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMainAppSnapTokenAuthenticatedRequestsProvider
// Superclass: NSObject
// Address: 0x112c2af78

@interface SCMainAppSnapTokenAuthenticatedRequestsProvider

// Property: httpMetadataService; attributes: T@"<SCHTTPMetadataService>",R,W,N,V_httpMetadataService
// Property: httpRequestModifier; attributes: T@"<SCHTTPRequestModifier>",R,W,N,V_httpRequestModifier
// Property: deviceId; attributes: T@"NSString",R,C,N

// -[SCMainAppSnapTokenAuthenticatedRequestsProvider initWithHttpMetadataService:requestModifier:deviceIdManagerLazy:logger:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10029bdb4

// -[SCMainAppSnapTokenAuthenticatedRequestsProvider submitPostRequestWithEndpoint:data:completionPerformer:successBlock:failureBlock:]
// Type encoding: v56@0:8@16@24@32@?40@?48
// Implementation: 0x10af74094

// -[SCMainAppSnapTokenAuthenticatedRequestsProvider deviceId]
// Type encoding: @16@0:8
// Implementation: 0x10af74578

// -[SCMainAppSnapTokenAuthenticatedRequestsProvider httpMetadataService]
// Type encoding: @16@0:8
// Implementation: 0x10af745c0

// -[SCMainAppSnapTokenAuthenticatedRequestsProvider httpRequestModifier]
// Type encoding: @16@0:8
// Implementation: 0x10af745d8

// -[SCMainAppSnapTokenAuthenticatedRequestsProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10af745f0

@end
