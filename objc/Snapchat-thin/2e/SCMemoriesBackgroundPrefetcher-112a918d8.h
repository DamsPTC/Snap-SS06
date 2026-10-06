// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesBackgroundPrefetcher
// Superclass: NSObject
// Address: 0x112a918d8

@interface SCMemoriesBackgroundPrefetcher

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesBackgroundPrefetcher initWithDataSource:graphene:circumstanceEngine:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105c18f10

// -[SCMemoriesBackgroundPrefetcher _prefetchInterval]
// Type encoding: Q16@0:8
// Implementation: 0x105c18fdc

// -[SCMemoriesBackgroundPrefetcher _fireBackgroundPrefetchDidFinishWithFetchResult:fetchedMediaCount:]
// Type encoding: v32@0:8Q16q24
// Implementation: 0x105c19064

// -[SCMemoriesBackgroundPrefetcher _debugNotifyTitle:body:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105c19110

// -[SCMemoriesBackgroundPrefetcher dataSyncerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x105c1914c

// -[SCMemoriesBackgroundPrefetcher jobConfig]
// Type encoding: @16@0:8
// Implementation: 0x105c19158

// -[SCMemoriesBackgroundPrefetcher submitOnRegister]
// Type encoding: B16@0:8
// Implementation: 0x105c19178

// -[SCMemoriesBackgroundPrefetcher onSync:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105c19180

// -[SCMemoriesBackgroundPrefetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105c193a4

@end
