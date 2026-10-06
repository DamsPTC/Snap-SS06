// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesProtobufRequestManager
// Superclass: NSObject
// Address: 0x112b94618

@interface SCStoriesProtobufRequestManager


// -[SCStoriesProtobufRequestManager initWithRequestManager:snapTokenProvider:grapheneMetricsEmitter:attestationProvider:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1004442c8

// -[SCStoriesProtobufRequestManager makeRequestWithSnapTokenAcessType:requestConstructionBlock:responseClass:requestSource:completionQueue:completion:]
// Type encoding: v64@0:8Q16@?24#32@40@48@?56
// Implementation: 0x10055eb0c

// -[SCStoriesProtobufRequestManager makeRequestWithSnapTokenAcessType:attestedRequestConstructionBlock:attestedPath:responseClass:requestSource:completionQueue:completion:]
// Type encoding: v72@0:8Q16@?24@32#40@48@56@?64
// Implementation: 0x10055ebd4

// -[SCStoriesProtobufRequestManager _fetchArgosTokenAndSubmitRequest:attestedPath:createAndSubmitRequestBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10805e45c

// -[SCStoriesProtobufRequestManager _submitRequest:responseClass:requestSource:fetchStartTime:completionQueue:completion:]
// Type encoding: v64@0:8@16#24@32d40@48@?56
// Implementation: 0x10059e2bc

// -[SCStoriesProtobufRequestManager _logLatencyWithRequestSource:fetchStartTime:step:]
// Type encoding: v40@0:8@16d24@32
// Implementation: 0x1005644b0

// -[SCStoriesProtobufRequestManager _logStatusCodeWithRequestSource:statusCode:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10805e6c4

// -[SCStoriesProtobufRequestManager _logFetchResultWithRequestSource:fetchResult:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1008a3e24

// -[SCStoriesProtobufRequestManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10805e6cc

@end
