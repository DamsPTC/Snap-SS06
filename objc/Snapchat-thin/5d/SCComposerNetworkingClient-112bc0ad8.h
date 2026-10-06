// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCComposerNetworkingClient
// Superclass: NSObject
// Address: 0x112bc0ad8

@interface SCComposerNetworkingClient

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCComposerNetworkingClient initWithSessionRequestManager:snapTokenProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108d295f0

// -[SCComposerNetworkingClient pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x108d29694

// -[SCComposerNetworkingClient makeRequestWithRequest:completion:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x108d296a0

// -[SCComposerNetworkingClient makeRequestWithErrorMetadataWithRequest:completion:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x108d29858

// -[SCComposerNetworkingClient _doPerformRequestWithEndpoint:orURL:parameters:headers:key:postData:method:authenticated:respondWithString:includeErrorResponseBody:completion:]
// Type encoding: v92@0:8@16@24@32@40@48@56q64B72B76B80@?84
// Implementation: 0x108d29ec8

// -[SCComposerNetworkingClient _requestAuthTokenIfNeededFromScope:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108d2a3b4

// -[SCComposerNetworkingClient _requestSnapTokenWithScope:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108d2a550

// -[SCComposerNetworkingClient _parseRequestBody:postData:parameters:hasRawBodyData:error:]
// Type encoding: B56@0:8@16^@24^@32^B40^@48
// Implementation: 0x108d2a700

// -[SCComposerNetworkingClient .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108d2a960

@end
