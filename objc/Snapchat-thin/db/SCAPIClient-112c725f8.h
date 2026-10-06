// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAPIClient
// Superclass: AFHTTPClient
// Address: 0x112c725f8

@interface SCAPIClient

// Property: loggingRate; attributes: Td,R,N,V_loggingRate
// Property: defaultBaseURL; attributes: T@"NSURL",&,N,V_defaultBaseURL
// Property: dateFormatter; attributes: T@"NSDateFormatter",&,N,V_dateFormatter

// -[SCAPIClient initWithBaseURL:]
// Type encoding: @24@0:8@16
// Implementation: 0x10028fee4

// -[SCAPIClient requestWithMethod:url:parameters:authenticated:]
// Type encoding: @44@0:8@16@24@32B40
// Implementation: 0x1005a1aa0

// -[SCAPIClient authenticateRequest:path:parameters:requestId:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10b278a44

// -[SCAPIClient _shouldLogPayloadGeneration]
// Type encoding: B16@0:8
// Implementation: 0x10b278d1c

// -[SCAPIClient isCustomEndpoint]
// Type encoding: B16@0:8
// Implementation: 0x1005a2420

// -[SCAPIClient multipartFormRequestWithMethod:path:parameters:constructingBodyWithBlock:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x10b278d3c

// -[SCAPIClient requestWithMethod:path:parameters:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10b278df8

// -[SCAPIClient defaultBaseURL]
// Type encoding: @16@0:8
// Implementation: 0x10b278f10

// -[SCAPIClient setDefaultBaseURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x10029b90c

// -[SCAPIClient loggingRate]
// Type encoding: d16@0:8
// Implementation: 0x10b278f20

// -[SCAPIClient dateFormatter]
// Type encoding: @16@0:8
// Implementation: 0x10b278f30

// -[SCAPIClient setDateFormatter:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b278f40

// -[SCAPIClient .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b278f80

// +[SCAPIClient showAlertAndWaitForDismissalWithUrl:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b27e81c

// +[SCAPIClient alertView:didDismissWithButtonIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10b27e970

// +[SCAPIClient sharedClient]
// Type encoding: @16@0:8
// Implementation: 0x10028d9c8

// +[SCAPIClient sharedAuthServiceClient]
// Type encoding: @16@0:8
// Implementation: 0x10b2781a8

// +[SCAPIClient sharedLoginServiceClient]
// Type encoding: @16@0:8
// Implementation: 0x10b278290

// +[SCAPIClient sharedSnapConnectClient]
// Type encoding: @16@0:8
// Implementation: 0x10b278378

// +[SCAPIClient updateSharedClientWithUrl:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b278460

// +[SCAPIClient updateSharedSnapConnectClientWithUrl:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b278610

// +[SCAPIClient defaultUrl]
// Type encoding: @16@0:8
// Implementation: 0x10b2786bc

// +[SCAPIClient defaultSnapConnectUrl]
// Type encoding: @16@0:8
// Implementation: 0x10b2786ec

// +[SCAPIClient isDevSnapchat]
// Type encoding: B16@0:8
// Implementation: 0x10b27871c

// +[SCAPIClient isDevAuthService]
// Type encoding: B16@0:8
// Implementation: 0x10b278850

// +[SCAPIClient isDevSnapConnect]
// Type encoding: B16@0:8
// Implementation: 0x10b27896c

@end
