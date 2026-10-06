// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: GTLRServiceExecutionParameters
// Superclass: NSObject
// Address: 0x1129ea240

@interface GTLRServiceExecutionParameters

// Property: shouldFetchNextPages; attributes: T@"NSNumber",&,V_shouldFetchNextPages
// Property: retryEnabled; attributes: T@"NSNumber",&,GisRetryEnabled,V_retryEnabled
// Property: retryBlock; attributes: T@?,C,V_retryBlock
// Property: maxRetryInterval; attributes: T@"NSNumber",&,V_maxRetryInterval
// Property: uploadProgressBlock; attributes: T@?,C,V_uploadProgressBlock
// Property: callbackQueue; attributes: T@"NSObject<OS_dispatch_queue>",&,V_callbackQueue
// Property: testBlock; attributes: T@?,C,V_testBlock
// Property: objectClassResolver; attributes: T@"<GTLRObjectClassResolver>",&,V_objectClassResolver
// Property: ticketProperties; attributes: T@"NSDictionary",C,V_ticketProperties
// Property: hasParameters; attributes: TB,R,N

// -[GTLRServiceExecutionParameters copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x104a1a96c

// -[GTLRServiceExecutionParameters hasParameters]
// Type encoding: B16@0:8
// Implementation: 0x104a1ab10

// -[GTLRServiceExecutionParameters maxRetryInterval]
// Type encoding: @16@0:8
// Implementation: 0x104a1ac30

// -[GTLRServiceExecutionParameters setMaxRetryInterval:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a1ac3c

// -[GTLRServiceExecutionParameters isRetryEnabled]
// Type encoding: @16@0:8
// Implementation: 0x104a1ac44

// -[GTLRServiceExecutionParameters setRetryEnabled:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a1ac50

// -[GTLRServiceExecutionParameters retryBlock]
// Type encoding: @?16@0:8
// Implementation: 0x104a1ac58

// -[GTLRServiceExecutionParameters setRetryBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104a1ac64

// -[GTLRServiceExecutionParameters shouldFetchNextPages]
// Type encoding: @16@0:8
// Implementation: 0x104a1ac6c

// -[GTLRServiceExecutionParameters setShouldFetchNextPages:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a1ac78

// -[GTLRServiceExecutionParameters objectClassResolver]
// Type encoding: @16@0:8
// Implementation: 0x104a1ac80

// -[GTLRServiceExecutionParameters setObjectClassResolver:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a1ac8c

// -[GTLRServiceExecutionParameters testBlock]
// Type encoding: @?16@0:8
// Implementation: 0x104a1ac94

// -[GTLRServiceExecutionParameters setTestBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104a1aca0

// -[GTLRServiceExecutionParameters ticketProperties]
// Type encoding: @16@0:8
// Implementation: 0x104a1aca8

// -[GTLRServiceExecutionParameters setTicketProperties:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a1acb4

// -[GTLRServiceExecutionParameters uploadProgressBlock]
// Type encoding: @?16@0:8
// Implementation: 0x104a1acbc

// -[GTLRServiceExecutionParameters setUploadProgressBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104a1acc8

// -[GTLRServiceExecutionParameters callbackQueue]
// Type encoding: @16@0:8
// Implementation: 0x104a1acd0

// -[GTLRServiceExecutionParameters setCallbackQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a1acdc

// -[GTLRServiceExecutionParameters .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104a1ace4

@end
