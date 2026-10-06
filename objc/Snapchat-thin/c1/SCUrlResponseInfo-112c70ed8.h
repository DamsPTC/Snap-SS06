// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUrlResponseInfo
// Superclass: NSObject
// Address: 0x112c70ed8

@interface SCUrlResponseInfo

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUrlResponseInfo initWithResponseCode:finalRespondingUrl:responseHeaders:contentLength:networkError:requestId:failoverAdvice:]
// Type encoding: @68@0:8i16@20@28q36@44@52@60
// Implementation: 0x10b25ad60

// -[SCUrlResponseInfo getResponseCode]
// Type encoding: i16@0:8
// Implementation: 0x10b25ae9c

// -[SCUrlResponseInfo getFinalRespondingUrl]
// Type encoding: @16@0:8
// Implementation: 0x10b25aea4

// -[SCUrlResponseInfo getResponseHeaders]
// Type encoding: @16@0:8
// Implementation: 0x10b25aecc

// -[SCUrlResponseInfo getContentLength]
// Type encoding: q16@0:8
// Implementation: 0x10b25aef4

// -[SCUrlResponseInfo getNetworkError]
// Type encoding: @16@0:8
// Implementation: 0x10b25aefc

// -[SCUrlResponseInfo getRequestId]
// Type encoding: @16@0:8
// Implementation: 0x10b25af24

// -[SCUrlResponseInfo getFailoverAdvice]
// Type encoding: @16@0:8
// Implementation: 0x10b25af4c

// -[SCUrlResponseInfo .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b25af74

@end
