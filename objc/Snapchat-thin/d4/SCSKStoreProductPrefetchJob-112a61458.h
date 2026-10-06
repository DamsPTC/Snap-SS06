// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSKStoreProductPrefetchJob
// Superclass: NSObject
// Address: 0x112a61458

@interface SCSKStoreProductPrefetchJob

// Property: itemIdentifier; attributes: T@"NSString",R,C,N,V_itemIdentifier
// Property: jobCompletion; attributes: T@?,R,C,N,V_jobCompletion

// -[SCSKStoreProductPrefetchJob initWithItemIdentifier:prefetchedAppIds:queuePerformer:prefetchQueuePerformer:jobCompletion:storeViewControllerFactory:]
// Type encoding: @64@0:8@16@24@32@40@?48@?56
// Implementation: 0x10577001c

// -[SCSKStoreProductPrefetchJob start:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105770198

// -[SCSKStoreProductPrefetchJob _checkIfPrefetched:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1057702b8

// -[SCSKStoreProductPrefetchJob _onPrefetchCheckCompleted:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x1057703f8

// -[SCSKStoreProductPrefetchJob _onProductFetched:error:completion:]
// Type encoding: v36@0:8B16@20@?28
// Implementation: 0x10577061c

// -[SCSKStoreProductPrefetchJob itemIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x10577069c

// -[SCSKStoreProductPrefetchJob jobCompletion]
// Type encoding: @?16@0:8
// Implementation: 0x1057706a4

// -[SCSKStoreProductPrefetchJob .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1057706ac

// +[SCSKStoreProductPrefetchJob prefetchJobWithItemIdentifier:prefetchedAppIds:queuePerformer:prefetchQueuePerformer:jobCompletion:]
// Type encoding: @56@0:8@16@24@32@40@?48
// Implementation: 0x10576ff40

@end
