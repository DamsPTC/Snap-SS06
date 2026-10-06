// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapSDKContentObjectResolver
// Superclass: NSObject
// Address: 0x112a72348

@interface SCMapSDKContentObjectResolver

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapSDKContentObjectResolver initWithContentFetcher:mapMemoriesThumbnailProvider:useContentFetcherOffMainThread:asyncQueueProvider:]
// Type encoding: @44@0:8@16@24B32@36
// Implementation: 0x105846438

// -[SCMapSDKContentObjectResolver resolveContentObject:callback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105846544

// -[SCMapSDKContentObjectResolver _retrieveWithReference:contentObject:andCallback:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1058466e8

// -[SCMapSDKContentObjectResolver _retrieveWithBuilder:contentObject:andCallback:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105846940

// -[SCMapSDKContentObjectResolver _retrieveMemoryWithContentObject:callback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105846b68

// -[SCMapSDKContentObjectResolver _resolveMemoryContentObject:withImage:callback:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105846d58

// -[SCMapSDKContentObjectResolver _isMemoryURI:]
// Type encoding: B24@0:8@16
// Implementation: 0x105846e94

// -[SCMapSDKContentObjectResolver _memoryIdFromURI:]
// Type encoding: @24@0:8@16
// Implementation: 0x105846f20

// -[SCMapSDKContentObjectResolver _callbackWithErrorString:callback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105846f8c

// -[SCMapSDKContentObjectResolver .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10584706c

@end
