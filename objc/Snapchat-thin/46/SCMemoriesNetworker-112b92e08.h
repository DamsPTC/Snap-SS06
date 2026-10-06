// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesNetworker
// Superclass: NSObject
// Address: 0x112b92e08

@interface SCMemoriesNetworker

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesNetworker initWithNetworker:userTrackedLogger:snapTokenProvider:headerProvider:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10801a0a4

// -[SCMemoriesNetworker networkResumeableDownloadRequestWithUrl:key:SOJURequest:isSmallFile:additionalHTTPHeaders:contexts:trackingInfo:]
// Type encoding: @68@0:8@16@24@32B40@44@52@60
// Implementation: 0x10801a208

// -[SCMemoriesNetworker submitResumeableRequest:callbackQueue:completionBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10801a640

// -[SCMemoriesNetworker submitPostRequestToURL:SOJURequest:key:contexts:requestParser:callbackQueue:successBlock:failureBlock:]
// Type encoding: v80@0:8@16@24@32@40@48@56@?64@?72
// Implementation: 0x10801a648

// -[SCMemoriesNetworker submitPostRequestToURL:SOJURequest:key:contexts:requestParser:callbackQueue:completionBlock:]
// Type encoding: v72@0:8@16@24@32@40@48@56@?64
// Implementation: 0x10801a650

// -[SCMemoriesNetworker submitPostRequestToEndpoint:SOJURequest:additionalHTTPHeaders:key:contexts:requestParser:authenticated:shouldTrace:callbackQueue:successBlock:failureBlock:]
// Type encoding: v96@0:8@16@24@32@40@48@56B64B68@72@?80@?88
// Implementation: 0x10801a658

// -[SCMemoriesNetworker submitPostRequestToEndpoint:proto:additionalHTTPHeaders:callbackQueue:successBlock:failureBlock:]
// Type encoding: v64@0:8@16@24@32@40@?48@?56
// Implementation: 0x10801ac28

// -[SCMemoriesNetworker submitPutRequestToURL:uploadData:additionalHTTPHeaders:key:contexts:callbackQueue:successBlock:failureBlock:]
// Type encoding: v80@0:8@16@24@32@40@48@56@?64@?72
// Implementation: 0x10801b170

// -[SCMemoriesNetworker submitPutRequestToURL:uploadFileURL:additionalHTTPHeaders:key:contexts:callbackQueue:progressBlock:successBlock:failureBlock:]
// Type encoding: v88@0:8@16@24@32@40@48@56@?64@?72@?80
// Implementation: 0x10801b284

// -[SCMemoriesNetworker submitBackgroundPutRequestToURL:uploadFileURL:additionalHTTPHeaders:key:contexts:callbackQueue:successBlock:failureBlock:]
// Type encoding: v80@0:8@16@24@32@40@48@56@?64@?72
// Implementation: 0x10801b3b4

// -[SCMemoriesNetworker _additionalHeadersWithHeaders:]
// Type encoding: @24@0:8@16
// Implementation: 0x10801b4c8

// -[SCMemoriesNetworker _fetchAccessTokenWithResultBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10801b534

// -[SCMemoriesNetworker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10801b694

@end
