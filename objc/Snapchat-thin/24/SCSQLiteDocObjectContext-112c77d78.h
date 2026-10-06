// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSQLiteDocObjectContext
// Superclass: SCDocObjectContext
// Address: 0x112c77d78

@interface SCSQLiteDocObjectContext

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSQLiteDocObjectContext temporarilyRaisePriorityToQoS:andEnqueue:]
// Type encoding: v28@0:8I16@?20
// Implementation: 0x10b5ebcc0

// -[SCSQLiteDocObjectContext diagnoseForConflictingInstances:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b5ebc68

// -[SCSQLiteDocObjectContext isActive]
// Type encoding: B16@0:8
// Implementation: 0x10b5ebc78

// -[SCSQLiteDocObjectContext dbPath]
// Type encoding: @16@0:8
// Implementation: 0x10b5ebc90

// -[SCSQLiteDocObjectContext initWithPath:options:monitor:]
// Type encoding: @40@0:8@16{?=Q}24@32
// Implementation: 0x1000c4e78

// -[SCSQLiteDocObjectContext dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10b5ea20c

// -[SCSQLiteDocObjectContext shutdownAsynchronously:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b5ea2e4

// -[SCSQLiteDocObjectContext fetchWithBlock:]
// Type encoding: @24@0:8@?16
// Implementation: 0x10b5ea42c

// -[SCSQLiteDocObjectContext fetchForClass:]
// Type encoding: {Builder=^?#@@Q{Borrowed=^{SQLiteConnection}^v}}24@0:8#16
// Implementation: 0x1000e40f4

// -[SCSQLiteDocObjectContext performChanges:completionQueue:completionHandler:]
// Type encoding: v40@0:8@?16@24@?32
// Implementation: 0x1001b8e14

// -[SCSQLiteDocObjectContext observe:callbackQueue:changeHandler:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x100ab2ca4

// -[SCSQLiteDocObjectContext unsafeObserveWithoutDispatch:changeHandler:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x10b5ea730

// -[SCSQLiteDocObjectContext observeFetchedResult:callbackQueue:changeHandler:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x1004e6f8c

// -[SCSQLiteDocObjectContext unsafeObserveFetchedResultWithoutDispatch:changeHandler:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x10b5ea754

// -[SCSQLiteDocObjectContext enableImmediateWriteTransactions:]
// Type encoding: v20@0:8B16
// Implementation: 0x1000c8780

// -[SCSQLiteDocObjectContext dataConnection]
// Type encoding: ^v16@0:8
// Implementation: 0x1001cb348

// -[SCSQLiteDocObjectContext addChangeRequestClassName:]
// Type encoding: v24@0:8@16
// Implementation: 0x1001cc92c

// -[SCSQLiteDocObjectContext objectForClass:byRowid:buffer:bufferSize:]
// Type encoding: @48@0:8#16q24r^v32Q40
// Implementation: 0x1001cb690

// -[SCSQLiteDocObjectContext buildIndexes:forTable:tableFunctionPointer:]
// Type encoding: v64@0:8{vector<const char *, std::allocator<const char *>>=^*^*{?=^*}}16q40{SCDocObjectClassFunctionPointer=^?^?}48
// Implementation: 0x10b5eb40c

// -[SCSQLiteDocObjectContext setFetchedObject:forClass:byRowid:]
// Type encoding: v40@0:8@16#24q32
// Implementation: 0x1008162e8

// -[SCSQLiteDocObjectContext setUpdatedObject:forClass:byRowid:]
// Type encoding: v40@0:8@16#24q32
// Implementation: 0x1001ceb0c

// -[SCSQLiteDocObjectContext .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b5ebac8

// -[SCSQLiteDocObjectContext .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x1000c4dbc

@end
