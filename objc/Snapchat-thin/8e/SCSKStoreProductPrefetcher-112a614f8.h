// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSKStoreProductPrefetcher
// Superclass: NSObject
// Address: 0x112a614f8

@interface SCSKStoreProductPrefetcher

// Property: prefetchedAppIds; attributes: T@"SCObservable",R,N,V_prefetchedAppIds
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSKStoreProductPrefetcher initWithJobScheduler:adConfigProviderV2:mainQueuePerformer:queuePerformer:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x105770730

// -[SCSKStoreProductPrefetcher initWithJobScheduler:adConfigProviderV2:mainQueuePerformer:queuePerformer:jobFactory:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1057707ec

// -[SCSKStoreProductPrefetcher prefetchStoreProductWithItemIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057709c8

// -[SCSKStoreProductPrefetcher cancelPrefetchForStoreProductsWithItemIdentifiers:]
// Type encoding: v24@0:8@16
// Implementation: 0x105770c28

// -[SCSKStoreProductPrefetcher processJobWithJobConfig:input:context:onComplete:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x105770f00

// -[SCSKStoreProductPrefetcher _addPrefetchJobForItemWithIdentifier:onComplete:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10577109c

// -[SCSKStoreProductPrefetcher _startNextJob]
// Type encoding: v16@0:8
// Implementation: 0x1057711b4

// -[SCSKStoreProductPrefetcher _onJobCompleted:result:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x105771368

// -[SCSKStoreProductPrefetcher _onJobCompleted:prefetchedAppIds:result:error:]
// Type encoding: v44@0:8@16@24B32@36
// Implementation: 0x105771534

// -[SCSKStoreProductPrefetcher config]
// Type encoding: @16@0:8
// Implementation: 0x105771624

// -[SCSKStoreProductPrefetcher prefetchedAppIds]
// Type encoding: @16@0:8
// Implementation: 0x10577171c

// -[SCSKStoreProductPrefetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105771724

@end
