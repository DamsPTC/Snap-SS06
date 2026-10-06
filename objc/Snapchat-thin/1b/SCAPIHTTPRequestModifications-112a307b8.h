// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAPIHTTPRequestModifications
// Superclass: NSObject
// Address: 0x112a307b8

@interface SCAPIHTTPRequestModifications

// Property: requestWithModifications; attributes: T@"SCHTTPRequest",R,N

// -[SCAPIHTTPRequestModifications initWithHTTPRequest:fsnHostProvider:gatewayRouteTagProvider:clientAttestationHeadersGenerator:fsnAuthGenerator:httpClient:]
// Type encoding: @64@0:8@16@?24@?32@?40@?48@56
// Implementation: 0x100b4039c

// -[SCAPIHTTPRequestModifications requestWithModifications]
// Type encoding: @16@0:8
// Implementation: 0x100b4134c

// -[SCAPIHTTPRequestModifications useFSNHost]
// Type encoding: v16@0:8
// Implementation: 0x1053bcbc4

// -[SCAPIHTTPRequestModifications useQueryParameters:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053bcc50

// -[SCAPIHTTPRequestModifications useArgosClientAttestationHeaders]
// Type encoding: v16@0:8
// Implementation: 0x1053bcd0c

// -[SCAPIHTTPRequestModifications useSnapTokenHeaderWithAccessType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x100b40830

// -[SCAPIHTTPRequestModifications useGatewayRouteTag:]
// Type encoding: v24@0:8@16
// Implementation: 0x100b40754

// -[SCAPIHTTPRequestModifications useContentType:]
// Type encoding: v24@0:8@16
// Implementation: 0x100b409a0

// -[SCAPIHTTPRequestModifications useProtobufContentType]
// Type encoding: v16@0:8
// Implementation: 0x1053bcd18

// -[SCAPIHTTPRequestModifications useMultipartFormBody:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053bcd24

// -[SCAPIHTTPRequestModifications useURLEncodedFormBody:]
// Type encoding: v24@0:8@16
// Implementation: 0x100b40838

// -[SCAPIHTTPRequestModifications useFSNAuthAndURLEncodedFormBody:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053bd104

// -[SCAPIHTTPRequestModifications useFSNAuthAndURLEncodedFormBody:withAuthBasedParams:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1053bd10c

// -[SCAPIHTTPRequestModifications useJSONBody:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053bd458

// -[SCAPIHTTPRequestModifications useGzippedBody]
// Type encoding: v16@0:8
// Implementation: 0x1053bd53c

// -[SCAPIHTTPRequestModifications setIsAnalytics]
// Type encoding: v16@0:8
// Implementation: 0x1053bd570

// -[SCAPIHTTPRequestModifications _ensureURLIsFullyQualified]
// Type encoding: v16@0:8
// Implementation: 0x1053bd57c

// -[SCAPIHTTPRequestModifications _ensureRequestCanHaveBody]
// Type encoding: v16@0:8
// Implementation: 0x100b40914

// -[SCAPIHTTPRequestModifications .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x100b41530

@end
