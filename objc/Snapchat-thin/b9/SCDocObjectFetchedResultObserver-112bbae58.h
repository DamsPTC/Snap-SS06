// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDocObjectFetchedResultObserver
// Superclass: NSObject
// Address: 0x112bbae58

@interface SCDocObjectFetchedResultObserver

// Property: docObjectContext; attributes: T@"SCDocObjectContext",R,N,V_docObjectContext
// Property: observerCallBackQueue; attributes: T@"NSObject<OS_dispatch_queue>",R,N,V_observerCallBackQueue
// Property: mappers; attributes: T@"NSDictionary",R,N,V_mappers
// Property: lazyFetchedResult; attributes: T@"SCLazy",R,N,V_lazyFetchedResult
// Property: fetchedResult; attributes: T@"SCDocObjectFetchedResult",R,N

// -[SCDocObjectFetchedResultObserver withMappers:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c7f7d0

// -[SCDocObjectFetchedResultObserver observableForDocObjectContext:observationQueue:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108c7e884

// -[SCDocObjectFetchedResultObserver initWithDocObjectContext:observerCallBackQueue:lazyFetchedResult:mappers:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1008a89c4

// -[SCDocObjectFetchedResultObserver initWithDocObjectContext:observationQueue:fetchedResult:mappers:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x108c7fa94

// -[SCDocObjectFetchedResultObserver startObservationIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x1008a9410

// -[SCDocObjectFetchedResultObserver fetchedResult]
// Type encoding: @16@0:8
// Implementation: 0x1008aaad0

// -[SCDocObjectFetchedResultObserver valueWithRegisteredIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x100becfe0

// -[SCDocObjectFetchedResultObserver _updateCachedResultAndMappers]
// Type encoding: v16@0:8
// Implementation: 0x1008aa8a8

// -[SCDocObjectFetchedResultObserver _getDocObjectFetchedResult]
// Type encoding: @16@0:8
// Implementation: 0x1008aaa3c

// -[SCDocObjectFetchedResultObserver _setDocObjectFetchedResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008aa868

// -[SCDocObjectFetchedResultObserver docObjectContext]
// Type encoding: @16@0:8
// Implementation: 0x108c7fc64

// -[SCDocObjectFetchedResultObserver observerCallBackQueue]
// Type encoding: @16@0:8
// Implementation: 0x108c7fc6c

// -[SCDocObjectFetchedResultObserver mappers]
// Type encoding: @16@0:8
// Implementation: 0x108c7fc74

// -[SCDocObjectFetchedResultObserver lazyFetchedResult]
// Type encoding: @16@0:8
// Implementation: 0x108c7fc7c

// -[SCDocObjectFetchedResultObserver .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108c7fc84

// +[SCDocObjectFetchedResultObserver fetchedResultObserverForDocObjectContext:lazyFetchedResult:mappers:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x108c7f8ec

// +[SCDocObjectFetchedResultObserver fetchedResultObserverForDocObjectContext:fetchedResult:mappers:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x108c7f970

// +[SCDocObjectFetchedResultObserver fetchedResultObserverForDocObjectContext:observationQueue:lazyFetchedResult:mappers:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1008a8924

// +[SCDocObjectFetchedResultObserver fetchedResultObserverForDocObjectContext:observationQueue:fetchedResult:mappers:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x108c7f9f4

@end
