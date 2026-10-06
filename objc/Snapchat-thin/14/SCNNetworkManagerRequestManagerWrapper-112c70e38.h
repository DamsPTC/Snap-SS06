// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNNetworkManagerRequestManagerWrapper
// Superclass: NSObject
// Address: 0x112c70e38

@interface SCNNetworkManagerRequestManagerWrapper

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNNetworkManagerRequestManagerWrapper initWithRequestManager:grapheneRegistry:useStreamingRequestTypeForProgRequest:useStreamingRequestTypeForProgRequestForRecommendedUserStorySnap:circumstanceEngine:]
// Type encoding: @48@0:8@16@24B32B36@40
// Implementation: 0x1003b548c

// -[SCNNetworkManagerRequestManagerWrapper submit:requestKey:callback:requestContext:httpHeaders:requestMediaType:loggingInfo:]
// Type encoding: v72@0:8@16@24@32@40@48q56@64
// Implementation: 0x10b258cbc

// -[SCNNetworkManagerRequestManagerWrapper submitProgressiveDownloadRequest:requestKey:requestContext:httpHeaders:isStreaming:requestMediaType:callback:loggingInfo:]
// Type encoding: v76@0:8@16@24@32@40B48q52@60@68
// Implementation: 0x10b259bb4

// -[SCNNetworkManagerRequestManagerWrapper monitorProgress:progressCallback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b259ee4

// -[SCNNetworkManagerRequestManagerWrapper cancelRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b25a05c

// -[SCNNetworkManagerRequestManagerWrapper updateRequestContext:requestContext:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b25a064

// -[SCNNetworkManagerRequestManagerWrapper _uploadNetworkRetryCount]
// Type encoding: q16@0:8
// Implementation: 0x10b25a170

// -[SCNNetworkManagerRequestManagerWrapper _handleSuccessWithNativeRequest:request:response:data:callback:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x10b25a1e0

// -[SCNNetworkManagerRequestManagerWrapper _handleProgressiveDownloadCallbackForData:platformRequest:statusCode:headers:isStreaming:error:callback:]
// Type encoding: v68@0:8@16@24q32@40B48@52@60
// Implementation: 0x10b25a420

// -[SCNNetworkManagerRequestManagerWrapper .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b25a700

@end
