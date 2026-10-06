// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLegacyItemDownloaderHandler
// Superclass: NSObject
// Address: 0x112be01a8

@interface SCLegacyItemDownloaderHandler

// Property: cancelableItem; attributes: T@"<SCCanceling>",R,N,V_cancelableItem
// Property: cancelled; attributes: TB,R,N,V_cancelled
// Property: callbackQueue; attributes: T@"NSObject<OS_dispatch_queue>",R,N,V_callbackQueue
// Property: completion; attributes: T@?,R,C,N,V_completion
// Property: failure; attributes: T@?,R,C,N,V_failure
// Property: item; attributes: T@"NSObject<NSCopying>",R,N,V_item
// Property: requestKey; attributes: T@"NSString",C,N,V_requestKey
// Property: delegate; attributes: T@"<SCLegacyItemDownloaderHandlerDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLegacyItemDownloaderHandler initWithCompletion:failure:callbackQueue:item:]
// Type encoding: @48@0:8@?16@?24@32@40
// Implementation: 0x109005aec

// -[SCLegacyItemDownloaderHandler initWithCancelableItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x109005bf4

// -[SCLegacyItemDownloaderHandler cancel]
// Type encoding: v16@0:8
// Implementation: 0x109005c68

// -[SCLegacyItemDownloaderHandler dispose]
// Type encoding: v16@0:8
// Implementation: 0x109005d04

// -[SCLegacyItemDownloaderHandler delegate]
// Type encoding: @16@0:8
// Implementation: 0x109005d4c

// -[SCLegacyItemDownloaderHandler setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x109005d64

// -[SCLegacyItemDownloaderHandler cancelableItem]
// Type encoding: @16@0:8
// Implementation: 0x109005d70

// -[SCLegacyItemDownloaderHandler cancelled]
// Type encoding: B16@0:8
// Implementation: 0x109005d78

// -[SCLegacyItemDownloaderHandler callbackQueue]
// Type encoding: @16@0:8
// Implementation: 0x109005d80

// -[SCLegacyItemDownloaderHandler completion]
// Type encoding: @?16@0:8
// Implementation: 0x109005d88

// -[SCLegacyItemDownloaderHandler failure]
// Type encoding: @?16@0:8
// Implementation: 0x109005d90

// -[SCLegacyItemDownloaderHandler item]
// Type encoding: @16@0:8
// Implementation: 0x109005d98

// -[SCLegacyItemDownloaderHandler requestKey]
// Type encoding: @16@0:8
// Implementation: 0x109005da0

// -[SCLegacyItemDownloaderHandler setRequestKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x109005da8

// -[SCLegacyItemDownloaderHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109005db0

@end
