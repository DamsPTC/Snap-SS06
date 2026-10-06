// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStreamingResourceLoaderDelegate
// Superclass: NSObject
// Address: 0x112a7b218

@interface SCStreamingResourceLoaderDelegate

// Property: requestHandler; attributes: T@"<SCWebProxyRequestHandling>",R,W,N,V_requestHandler
// Property: streamingDelegate; attributes: T@"<SCStreamingDelegate>",R,W,N,V_streamingDelegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: proxyController; attributes: T@"<SCWebProxyControlling>",?,R,N
// Property: urlProvider; attributes: T@"<SCWebProxyURLProviding>",?,R,N
// Property: extraInfoProvider; attributes: T@"<SCStreamingRequestExtraInfoProviding>",?,R,W,N,V_extraInfoProvider

// -[SCStreamingResourceLoaderDelegate initWithRequestHandler:extraInfoProvider:streamingDelegate:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105904720

// -[SCStreamingResourceLoaderDelegate initWithRequestHandler:extraInfoProvider:streamingDelegate:webProxyUrlProvider:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x105904728

// -[SCStreamingResourceLoaderDelegate proxiedURLForRequestInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059048ec

// -[SCStreamingResourceLoaderDelegate streamingURLForRequestInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059049a0

// -[SCStreamingResourceLoaderDelegate urlProvider]
// Type encoding: @16@0:8
// Implementation: 0x105904b98

// -[SCStreamingResourceLoaderDelegate resourceLoader:shouldWaitForLoadingOfRequestedResource:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x105904b9c

// -[SCStreamingResourceLoaderDelegate resourceLoader:didCancelLoadingRequest:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10590503c

// -[SCStreamingResourceLoaderDelegate _didStartHandlingRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x10590521c

// -[SCStreamingResourceLoaderDelegate _didFinishHandlingRequest:withError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105905314

// -[SCStreamingResourceLoaderDelegate proxyURLProvider:baseURLForRequestInfo:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105905404

// -[SCStreamingResourceLoaderDelegate extraInfoProvider]
// Type encoding: @16@0:8
// Implementation: 0x105905418

// -[SCStreamingResourceLoaderDelegate requestHandler]
// Type encoding: @16@0:8
// Implementation: 0x105905430

// -[SCStreamingResourceLoaderDelegate streamingDelegate]
// Type encoding: @16@0:8
// Implementation: 0x105905448

// -[SCStreamingResourceLoaderDelegate .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105905460

@end
