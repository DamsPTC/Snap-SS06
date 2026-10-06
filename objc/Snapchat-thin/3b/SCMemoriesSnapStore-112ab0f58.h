// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesSnapStore
// Superclass: NSObject
// Address: 0x112ab0f58

@interface SCMemoriesSnapStore

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesSnapStore _gridItemsSubjectForTesting]
// Type encoding: @16@0:8
// Implementation: 0x105f65bf0

// -[SCMemoriesSnapStore initWithMergedDataSource:coreConfigProvider:entrySyncStatusGenerator:memoriesEncryptedDatabase:dataObjectContext:entryEligibility:]
// Type encoding: @64@0:8@16@24@32@40@48Q56
// Implementation: 0x105f64250

// -[SCMemoriesSnapStore createPaginator]
// Type encoding: @16@0:8
// Implementation: 0x105f64608

// -[SCMemoriesSnapStore shouldRetainInstanceWhenMarshalling]
// Type encoding: B16@0:8
// Implementation: 0x105f64828

// -[SCMemoriesSnapStore pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x105f64830

// -[SCMemoriesSnapStore observeData]
// Type encoding: @16@0:8
// Implementation: 0x105f6483c

// -[SCMemoriesSnapStore observeSnapsInTimeRangeWithQuery:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f64844

// -[SCMemoriesSnapStore dataSource:didChangeEntries:failedEntries:fetchEntryError:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x105f64b94

// -[SCMemoriesSnapStore _updateAndMarhsallItems:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f655a4

// -[SCMemoriesSnapStore _marshallUpdatedItems]
// Type encoding: v16@0:8
// Implementation: 0x105f656cc

// -[SCMemoriesSnapStore _updateMarshallRange]
// Type encoding: {_NSRange=QQ}16@0:8
// Implementation: 0x105f6576c

// -[SCMemoriesSnapStore _loadNextPage]
// Type encoding: v16@0:8
// Implementation: 0x105f657ac

// -[SCMemoriesSnapStore _nextMarshallRange]
// Type encoding: {_NSRange=QQ}16@0:8
// Implementation: 0x105f658e4

// -[SCMemoriesSnapStore _refreshCachedHasReachedLastPage]
// Type encoding: v16@0:8
// Implementation: 0x105f65954

// -[SCMemoriesSnapStore _hasReachedLastPage]
// Type encoding: B16@0:8
// Implementation: 0x105f65988

// -[SCMemoriesSnapStore _getCGSizeForThumbnail]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x105f65aa8

// -[SCMemoriesSnapStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f65b48

// +[SCMemoriesSnapStore snapsMatchingQuery:items:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105f64970

@end
