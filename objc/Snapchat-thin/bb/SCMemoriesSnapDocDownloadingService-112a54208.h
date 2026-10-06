// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesSnapDocDownloadingService
// Superclass: NSObject
// Address: 0x112a54208

@interface SCMemoriesSnapDocDownloadingService

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesSnapDocDownloadingService initWithContentDeliveryService:snapDocManagerService:grapheneRegistry:circumstanceEngine:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x105664e64

// -[SCMemoriesSnapDocDownloadingService downloadWithSnapDocKey:snapDoc:pageInfo:callsite:progressPerformer:progressHandler:completionPerformer:completion:]
// Type encoding: @80@0:8@16@24@32@40@48@?56@64@?72
// Implementation: 0x105665018

// -[SCMemoriesSnapDocDownloadingService downloadWithSnapDocKey:snapDoc:pageInfo:callsite:progressPerformer:progressHandler:completionPerformer:decryptRemoteContent:completion:]
// Type encoding: @84@0:8@16@24@32@40@48@?56@64B72@?76
// Implementation: 0x105665044

// -[SCMemoriesSnapDocDownloadingService downloadWithSnapDocKey:snapDoc:pageInfo:callsite:progressPerformer:progressHandler:completionPerformer:decryptRemoteContent:errorCompletion:]
// Type encoding: @84@0:8@16@24@32@40@48@?56@64B72@?76
// Implementation: 0x105665148

// -[SCMemoriesSnapDocDownloadingService cancelTaskWithToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x105666b54

// -[SCMemoriesSnapDocDownloadingService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105666c24

@end
