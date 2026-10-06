// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDocObjectFetchedResultObservable
// Superclass: SCObservable
// Address: 0x112bbae08

@interface SCDocObjectFetchedResultObservable

// Property: mostRecentFetchedResult; attributes: T@"SCDocObjectFetchedResult",&,V_mostRecentFetchedResult

// -[SCDocObjectFetchedResultObservable initWithDocObjectContext:queue:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1004e6ba0

// -[SCDocObjectFetchedResultObservable initWithFetchedResult:docObjectContext:queue:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1004e6ac0

// -[SCDocObjectFetchedResultObservable initWithFetchedResultObserver:docObjectContext:queue:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x108c7efb4

// -[SCDocObjectFetchedResultObservable initWithQuery:klass:orderBy:limit:docObjectContext:queue:]
// Type encoding: @64@0:8^v16#24r^v32r^{Limit=i}40@48@56
// Implementation: 0x108c7f200

// -[SCDocObjectFetchedResultObservable subscribe:]
// Type encoding: @24@0:8@16
// Implementation: 0x1004e8ac8

// -[SCDocObjectFetchedResultObservable unsubscribe:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c7f500

// -[SCDocObjectFetchedResultObservable _setupObservationWithFetchedResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x1004e6ca8

// -[SCDocObjectFetchedResultObservable mostRecentFetchedResult]
// Type encoding: @16@0:8
// Implementation: 0x1004e8fd8

// -[SCDocObjectFetchedResultObservable setMostRecentFetchedResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c7f598

// -[SCDocObjectFetchedResultObservable .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108c7f5a4

// -[SCDocObjectFetchedResultObservable .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x1004e6ab0

// +[SCDocObjectFetchedResultObservable observableForFetchedResult:docObjectContext:queue:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1004e6a0c

// +[SCDocObjectFetchedResultObservable observableForFetchedResultObserver:docObjectContext:queue:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x108c7ee5c

// +[SCDocObjectFetchedResultObservable observableForQuery:klass:orderBy:limit:docObjectContext:queue:]
// Type encoding: @64@0:8{unique_ptr<SC::Query::BaseExpr<bool>, std::default_delete<SC::Query::BaseExpr<bool>>>={?=^v}}16#24r^v32r^{Limit=i}40@48@56
// Implementation: 0x108c7ef00

@end
